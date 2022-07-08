using System;
using System.Collections;
using DG.Tweening;
using System.Collections.Generic;
using UI;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class WheelSpin : MonoBehaviour
{
    [SerializeField] private Transform parentPartsCircle;
    [SerializeField] private Button _buttonSpin;
    private Transform _transformWheelSpin;
    private WheelSpinSetting _setting;
    private AnimatorStateController _buttonSpinAnimatorStateController;
    private List<int> allMoneyInSpin;
    private List<PartWheelSpin> allPartWheelSpin;
    private MoneySpawnerUI _moneySpawnerUI;
    private bool _isSpin;

    private Action _onSpin, _onStop, _onUpdateMoneyValue; 
    [System.Serializable]
    public struct WheelSpinSetting
    {
        [Header("Main")] 
        [Range(100,10000)]
        public int minPrice;
        [Range(1000,100000)]
        public int maxPrice;
        [Range(100,1000)]
        public int minIntervalPrice;
        [Range(10, 1000)] 
        public int multiplicityPrice;

        [Space] [Header("Spin Setting")] [Space]
        public int countRotation;
        public int speedRotation;
        public int rotationTime;
        public AnimationCurve spin;
        [Space][Header("Parts Setting")][Space]
        public GameObject prefabPartCircle;
        public Color[] colorsPart;
        public Color[] colorsMoney;
    }
    
    public void Initialize(ref Action onUpdateMoneyValue)
    {
        _onUpdateMoneyValue = onUpdateMoneyValue;
        _setting = GlobalGameSettings.instance.wheelSpinSetting;
        _transformWheelSpin = transform;
        _buttonSpinAnimatorStateController = _buttonSpin.GetComponent<AnimatorStateController>();
        _buttonSpinAnimatorStateController.Initialize();
        _moneySpawnerUI = FindObjectOfType<MoneySpawnerUI>();
        allMoneyInSpin = new List<int>();
        allPartWheelSpin = new List<PartWheelSpin>();
        _buttonSpin.onClick.AddListener(Spin);
        SpawnParts();
    }

#if UNITY_EDITOR
    private void Update()
    {
        if (GlobalGameSettings.instance.DebugMode&&!_isSpin)
        { SpawnParts(); }
    }
#endif

    private void SpawnParts()
    {
        allMoneyInSpin.Clear();
        allPartWheelSpin.Clear();
        while (parentPartsCircle.childCount != 0)
        { Destroy(parentPartsCircle.GetChild(0).gameObject); }

        for (var i = 0; i < GlobalGameSettings.instance.countSegments; i++)
        {
            var newPart = Instantiate(GlobalGameSettings.instance.wheelSpinSetting.prefabPartCircle, parentPartsCircle).GetComponent<PartWheelSpin>();
            newPart.Initialize(GlobalGameSettings.instance.wheelSpinSetting.colorsPart[ i % GlobalGameSettings.instance.wheelSpinSetting.colorsPart.Length],
                GlobalGameSettings.instance.wheelSpinSetting.colorsMoney[i % GlobalGameSettings.instance.wheelSpinSetting.colorsMoney.Length],
                (360f / GlobalGameSettings.instance.countSegments)*i,
                ref _onSpin,
                ref _onStop);
            allPartWheelSpin.Add(newPart);
        }
        SetMoney();
    }

    private void Spin()
    {
        if(_isSpin)return;
        _isSpin = true;
        _onSpin.Invoke();
        var randomAngel = Random.Range(0f, 360f);
        _buttonSpinAnimatorStateController.PlayAnimation(ConstantSetting.instance.animations.BUTTON_PRESS);
        _transformWheelSpin
            .DOLocalRotate(Vector3.back * 360 * _setting.countRotation + (Vector3.back * randomAngel),
                _setting.rotationTime)
            .SetEase(_setting.spin)
            .OnComplete(() =>
            {
                var number = randomAngel / (360f / GlobalGameSettings.instance.countSegments);
                    //EconomicController.SetMoney(allPartWheelSpin[(int)number].GetMoney());
                    _moneySpawnerUI?.SpawnMoney(allPartWheelSpin[(int)number].GetMoney(),
                        allMoneyInSpin.FindIndex(x => x == allPartWheelSpin[(int)number].GetMoney()) >
                        GlobalGameSettings.instance.countSegments / 2
                            ? 15
                            : 50,
                        _onUpdateMoneyValue);
                _buttonSpinAnimatorStateController.PlayAnimation(ConstantSetting.instance.animations.BUTTON_UP);
                Taptic.Success();
                _isSpin = false;
            });
    }

    private void SetMoney()
    {
        foreach (var partWheelSpin in allPartWheelSpin)
        {
            partWheelSpin.SetMoney(CalculatePrice());
        }
    }

    private int CalculatePrice()
    {
#if UNITY_EDITOR
        if(GlobalGameSettings.instance.DebugMode)
            _setting = GlobalGameSettings.instance.wheelSpinSetting;
#endif
        var maxRandomMoney = _setting.maxPrice / _setting.multiplicityPrice;
        var minRandomMoney = _setting.minPrice / _setting.multiplicityPrice;
        if (minRandomMoney == 0)
            minRandomMoney = 1;
        var intervalMoney = _setting.minIntervalPrice/_setting.multiplicityPrice ;
        var randomMoney = 0;
        var isAlready=false;
        var maxCountTry = 100;
        
        while (!isAlready&&maxCountTry>0)
        {
            randomMoney = Random.Range(minRandomMoney, maxRandomMoney+1);

            if (allMoneyInSpin.Count == 0)
            { isAlready = true;  continue;}
            else if(allMoneyInSpin.Find(x=>x==randomMoney)<0)
            { continue; }

            var firstGreaterIndex = allMoneyInSpin.FindIndex(x => x > randomMoney);
            switch (firstGreaterIndex)
            {
                case -1:
                {
                    if (allMoneyInSpin[^1] + intervalMoney <= maxRandomMoney &&
                        allMoneyInSpin[^1] + intervalMoney <= randomMoney)
                    { isAlready = true; }
                    break;
                }
                case 0:
                {
                    if (allMoneyInSpin[firstGreaterIndex] - intervalMoney >= minRandomMoney &&
                        allMoneyInSpin[firstGreaterIndex] - intervalMoney >= randomMoney)
                    { isAlready = true; }
                    break;
                }
                default:
                {
                    if (allMoneyInSpin[firstGreaterIndex] - intervalMoney >= randomMoney &&
                        allMoneyInSpin[firstGreaterIndex - 1] + intervalMoney <= randomMoney)
                    { isAlready = true; }
                    break;
                }
            }
            maxCountTry--;
        }

        if (maxCountTry == 0)
        {
            if (allMoneyInSpin[0] - intervalMoney >= minRandomMoney)
            {  randomMoney = allMoneyInSpin[0] - intervalMoney; }
            else if(allMoneyInSpin[^0] + intervalMoney <= maxRandomMoney)
            {  randomMoney = allMoneyInSpin[^0] + intervalMoney; }
            else
            {
                for (var i = 0; i < allMoneyInSpin.Count - 1; i++)
                {
                    if (allMoneyInSpin[i + 1] - allMoneyInSpin[i] >= intervalMoney)
                    {randomMoney = (allMoneyInSpin[i + 1] + allMoneyInSpin[i])/2; break;}
                }
            }
        }
        
        allMoneyInSpin.Add(randomMoney);
        allMoneyInSpin.Sort();
        return randomMoney*_setting.multiplicityPrice;
    }
    
}
