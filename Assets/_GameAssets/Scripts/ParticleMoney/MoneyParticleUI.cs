using System;
using System.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

namespace UI
{
    public class MoneyParticleUI : MonoBehaviour
    {
        [SerializeField] private RectTransform rectTransform;
        public async Task FlyToCounter(Vector2 flyTo, Action onEndFly)
        {
            var duration = Random.Range(0.5f, 1.5f);
            var sequence = DOTween.Sequence();
            sequence.Append(rectTransform.DOMove(flyTo, duration).SetEase(Ease.InBack));
            sequence.Join(rectTransform.DOScale(Vector3.one*0.5f, duration).SetEase(Ease.InCirc));
            sequence.Join(rectTransform.DORotate(new Vector3(0,0,Random.Range(0,2) == 0 ? -180 : 180), duration, RotateMode.FastBeyond360).SetEase(Ease.InCirc));
            sequence.AppendCallback(()=>
            {  
                onEndFly.Invoke();
                Taptic.Light();
               Destroy(gameObject);
            });
            await sequence.AsyncWaitForCompletion();
        }
    }
}