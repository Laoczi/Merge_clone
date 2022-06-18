using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DinoFadeControl : MonoBehaviour
{
    public static DinoFadeControl singleton;
    [SerializeField] Animator _animator;
    private void Awake()
    {
        singleton = this;
    }
    public void FadeIn()//hide
    {
        _animator.SetTrigger("FadeIn");
    }
    public void FadeOut()//show
    {
        _animator.SetTrigger("FadeOut");
    }
}
