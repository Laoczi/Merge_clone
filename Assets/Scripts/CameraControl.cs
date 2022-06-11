using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CameraControl : MonoBehaviour
{
    [SerializeField] Vector3 _mainMenuPos;
    [SerializeField] Vector3 _fightPos;
    [SerializeField] float _duration;

    private void Start()
    {
        transform.position = _mainMenuPos;
    }
    void OnStartFight()
    {
        transform.DOMove(_fightPos, _duration);
    }
    void OnEndFight()
    {
        transform.position = _mainMenuPos;
    }
    private void OnEnable()
    {
        GameManager.onStartFight += OnStartFight;
        EndScreen.onCloseScreen += OnEndFight;
    }
    private void OnDisable()
    {
        GameManager.onStartFight -= OnStartFight;
        EndScreen.onCloseScreen -= OnEndFight;
    }
}
