using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameUIHealthBar : MonoBehaviour
{
    public static event Action onUnitsHealthZeroOut;
    public static event Action onEnemysHealthZeroOut;

    [SerializeField] Image _unitsHealthBar;
    [SerializeField] Image _enemysHealthBar;
    float _unitsOverralHealth;
    float _enemysOverralHealth;

    float _baseUnitsHealth;
    float _baseEnemysHealth;

    private void OnEnable()
    {
        GameManager.onStartFight += OnStartFight;
        Human.onGetDamage += OnGetDamage;
        Dino.onGetDamage += OnGetDamage;
    }
    private void OnDisable()
    {
        GameManager.onStartFight -= OnStartFight;
        Human.onGetDamage -= OnGetDamage;
        Dino.onGetDamage -= OnGetDamage;
    }
    void OnStartFight()
    {
        _unitsOverralHealth = _baseUnitsHealth = UnitGrid.singleton.GetOverrallUnitsHealth();
        _enemysOverralHealth = _baseEnemysHealth =  EnemyGrid.singleton.GetOverallEnemyHealth();

        _unitsHealthBar.fillAmount = 1;
        _enemysHealthBar.fillAmount = 1;
    }
    void OnGetDamage(TeamType team, float count, int level)
    {
        if(team == TeamType.Unit)
        {
            _unitsOverralHealth -= count;

            if (_unitsOverralHealth <= 0)
            {
                _unitsOverralHealth = 0;
                onUnitsHealthZeroOut?.Invoke();
            }

            _unitsHealthBar.fillAmount = ((_unitsOverralHealth * 100) / _baseUnitsHealth) / 100;
        }
        else
        {
            _enemysOverralHealth -= count;

            if (_enemysOverralHealth <= 0)
            {
                _enemysOverralHealth = 0;
                onEnemysHealthZeroOut?.Invoke();
            }

            _enemysHealthBar.fillAmount = ((_enemysOverralHealth * 100) / _baseEnemysHealth) / 100;
        }
    }
}
