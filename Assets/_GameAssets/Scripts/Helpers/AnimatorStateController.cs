using System;
using UnityEngine;

public class AnimatorStateController : MonoBehaviour
{
    private Animator _animator;
    private Animation _animation;

    private Action _finishedAnim;
    
    public void Initialize()
    {
        _animator = GetComponentInChildren<Animator>();
        _animation = GetComponentInChildren<Animation>();
    }

    public void SetFinishAction(ref Action eventAnimation)
    { _finishedAnim = eventAnimation; }
    
    public void Disable()
    {
        if (_animator)
            _animator.enabled = false;
        if (_animation)
            _animation.enabled = false;
    }
    public void PlayAnimator(string nameAnim)
    { _animator.Play(nameAnim); }
    public void PlayAnimation(string nameAnim)
    { _animation.Play(nameAnim); }
    public void SetTrigger(string trigger)
    { _animator.SetTrigger(trigger); }

    public void OnEventCall()
    {
        _finishedAnim?.Invoke();
        _finishedAnim = null;
    }
}