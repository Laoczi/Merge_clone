using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    //главный компонент, который рулит над остальными

    [SerializeField] EnemySpawn _enemySpawner;
    public static event Action onStartFight;
    public static event Action onEndFight;

    private void Start()
    {
        _enemySpawner.Spawn(0);
    }
    public void StartGame()
    {
        onStartFight?.Invoke();
    }
    void ResetGame()
    {
        onEndFight?.Invoke();
        _enemySpawner.DeleteEnemys();
        _enemySpawner.Spawn(0);
    }
}
