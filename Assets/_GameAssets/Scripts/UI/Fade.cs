using System;
using UnityEngine;
using UnityEngine.UI;

public class Fade : MonoBehaviour
{
    private AnimatorStateController _animatorStateController;

    private Action endFadeIn;
    public void Initialize(Button.ButtonClickedEvent buttonPlay,Button.ButtonClickedEvent buttonGoHome, bool fadeOut)
    {
        buttonPlay.AddListener(StartFadeIn);
        _animatorStateController = gameObject.AddComponent<AnimatorStateController>();
        _animatorStateController.Initialize();
        buttonGoHome.AddListener(StartFadeIn);
        if(!fadeOut)
            StartFadeOut();
    }

    public void AddAction(Action newAction)
    {
        endFadeIn = newAction;
    }
    private void StartFadeIn()
    {  _animatorStateController.PlayAnimator(ConstantSetting.instance.animations.FADEIN); }
    private void StartFadeOut()
    { _animatorStateController.PlayAnimator(ConstantSetting.instance.animations.FADEOUT); }
    private void FinishFadeIn()
    { endFadeIn.Invoke(); }
}