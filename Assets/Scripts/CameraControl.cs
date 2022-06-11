using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CameraControl : MonoBehaviour
{
    [SerializeField] Vector3 _mainMenuPos;
    [SerializeField] Vector3 _fightPos;

    private void Start()
    {
        transform.position = _mainMenuPos;
    }
    void OnStartFight()
    {
        transform.DOMove(_fightPos, 1);
    }
    void OnEndFight()
    {
        transform.DOMove(_mainMenuPos, 1);
    }
    private void OnEnable()
    {
        GameManager.onStartFight += OnStartFight;
        GameManager.onEndFight += OnEndFight;
    }
    private void OnDisable()
    {
        GameManager.onStartFight -= OnStartFight;
        GameManager.onEndFight -= OnEndFight;
    }
}
