using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static event Action onStartFight;
    public static event Action onEndFight;

    [SerializeField] GameObject _mainMenuPanel;
    [SerializeField] GameObject _fightMenuPanel;
    public static int currentLevel { get; private set; }

    private void Start()
    {
        _mainMenuPanel.SetActive(true);
        _fightMenuPanel.SetActive(false);

        currentLevel = 0;
        if (PlayerPrefs.HasKey("currentLevel")) currentLevel = PlayerPrefs.GetInt("currentLevel");
        else PlayerPrefs.SetInt("currentLevel", 0);

        if(currentLevel < EnemyGrid.singleton.levels.Length) EnemyGrid.singleton.Spawn(currentLevel);
        else EnemyGrid.singleton.Spawn(EnemyGrid.singleton.levels.Length - 1);
    }
    public void StartFight()
    {
        onStartFight?.Invoke();
        _mainMenuPanel.SetActive(false);
        _fightMenuPanel.SetActive(true);
    }
    void ResetGame()
    {
        ClearGameField();
    }
    void OnEndFight()
    {
        onEndFight?.Invoke();
        currentLevel++;
        PlayerPrefs.SetInt("currentLevel", currentLevel);
    }
    void ClearGameField()
    {
        EnemyGrid.singleton.DeleteEnemys();
        UnitGrid.singleton.DeleteUnits();
    }
    private void OnEnable()
    {
        GameUIHealthBar.onEnemysHealthZeroOut += OnEndFight;
        GameUIHealthBar.onUnitsHealthZeroOut += OnEndFight;
    }
    private void OnDisable()
    {
        GameUIHealthBar.onEnemysHealthZeroOut -= OnEndFight;
        GameUIHealthBar.onUnitsHealthZeroOut -= OnEndFight;
    }
}
