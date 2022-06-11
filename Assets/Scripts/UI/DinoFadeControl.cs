using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DinoFadeControl : MonoBehaviour
{
    [SerializeField] Animator _animator;
    void FadeIn()//hide
    {
        _animator.SetTrigger("FadeIn");
    }
    void FadeOut()//show
    {
        _animator.SetTrigger("FadeOut");
    }
    private void OnEnable()
    {
        EndScreen.onCloseScreen += FadeOut;
        GameManager.onEndFight += FadeIn;
    }
    private void OnDisable()
    {
        EndScreen.onCloseScreen -= FadeOut;
        GameManager.onEndFight -= FadeIn;
    }
}
