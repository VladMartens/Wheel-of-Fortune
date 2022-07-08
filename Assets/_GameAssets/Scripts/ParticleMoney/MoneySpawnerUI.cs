using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Random = UnityEngine.Random;

namespace UI
{
    public class MoneySpawnerUI : MonoBehaviour
    {
        [SerializeField] private MoneyParticleUI diamondUIPrefab;
        [SerializeField] private RectTransform spawnParent;
        [SerializeField] private RectTransform spawnFrom;
        [SerializeField] private RectTransform flyTo;
        private Action _onEndFly,_onUpdateMoneyValue;
        private int _countMoney;
        private int _countParticles;
        private void Awake()
        { _onEndFly += AddMoneyInCounter; }

        public async Task SpawnMoney(int value, int count, Action onUpdateMoneyValue)
        {
            _onUpdateMoneyValue = onUpdateMoneyValue;
            _countMoney = value;
            _countParticles = count;
            var awaitTask = new List<Task>();
            for (var i = 0; i < count; i++)
            {
                var diamondUI = Instantiate(diamondUIPrefab, spawnParent).GetComponent<MoneyParticleUI>();
                var rectTransform = diamondUI.GetComponent<RectTransform>();
                rectTransform.position = GetRandomPositionForSpawn(spawnFrom.position);
                awaitTask.Add(diamondUI.FlyToCounter(flyTo.position, _onEndFly));
            }
            await Task.WhenAll(awaitTask);
        }

        private Vector2 GetRandomPositionForSpawn(Vector2 spawnPosition)
        {
            var positionX = Random.Range(-180, 180) + spawnPosition.x;
            var positionY = Random.Range(-180, 180) + spawnPosition.y;
            return new Vector2(positionX, positionY);
        }

        private void AddMoneyInCounter()
        {
            _countParticles--;
            if(_countParticles==0)
            { EconomicController.SetMoney(_countMoney);
                _onUpdateMoneyValue.Invoke();
            }
        }
    }
}