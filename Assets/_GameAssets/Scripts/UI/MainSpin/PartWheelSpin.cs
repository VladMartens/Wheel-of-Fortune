using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PartWheelSpin : MonoBehaviour
{
    [SerializeField] private Image bgImage;
    [SerializeField] private Image questionImage;
    [SerializeField] private Transform textParent;
    [SerializeField] private Transform frontStick;
    [SerializeField] private TextMeshProUGUI moneyText;
    private int _moneyInPart;
    private Transform _transform;
    
    public void Initialize(Color bgColor,Color questionColor, float angle, ref Action onSpin, ref Action onStop)
    {
        _transform = transform;
        _transform.localEulerAngles = Vector3.forward*angle;

        bgImage.color = bgColor;
        bgImage.fillAmount = 1f / GlobalGameSettings.instance.countSegments;
        questionImage.color = moneyText.color= questionColor;
      
        var angleZ = (360f / GlobalGameSettings.instance.countSegments);
      
        textParent.localEulerAngles = Vector3.forward * (angleZ/2);
        frontStick.localEulerAngles = Vector3.forward * angleZ;
        
        onSpin += ShowMoney;
        onStop += HideMoney;
       
        HideMoney();
    }
    public void SetMoney(int money)
    {
        _moneyInPart = money;
        moneyText.text = EconomicController.ConvertShotMoney(_moneyInPart);
    }
    public int GetMoney()
    {
       return _moneyInPart;
    }

    private void ShowMoney()
    {
        moneyText.enabled = true;
        questionImage.enabled = false;
    }

    private void HideMoney()
    {
        moneyText.enabled = false;
        questionImage.enabled = true;
    }
}
