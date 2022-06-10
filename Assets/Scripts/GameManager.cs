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

    private void Awake()
    {
        _mainMenuPanel.SetActive(true);
        _fightMenuPanel.SetActive(false);


        currentLevel = 0;
        if (PlayerPrefs.HasKey("currentLevel")) currentLevel = PlayerPrefs.GetInt("currentLevel");
        else PlayerPrefs.SetInt("currentLevel", 0);

        currentLevel = 1;//------------------

    }
    private void Start()
    {
        if (currentLevel < EnemyGrid.singleton.levels.Length) EnemyGrid.singleton.Spawn(currentLevel);
        else EnemyGrid.singleton.Spawn(EnemyGrid.singleton.levels.Length - 1);
    }
    public void StartFight()
    {
        onStartFight?.Invoke();
        _mainMenuPanel.SetActive(false);
        _fightMenuPanel.SetActive(true);
    }
    void OnWinFight()
    {
        onEndFight?.Invoke();
        currentLevel++;
        PlayerPrefs.SetInt("currentLevel", currentLevel);
        //вызываем окно победы, а при нажатии "новая игра" чистим поле и спавним заново
    }
    void OnLoseFight()
    {
        onEndFight?.Invoke();
        currentLevel++;
        PlayerPrefs.SetInt("currentLevel", currentLevel);
        //вызываем окно проигрыша, а при нажатии "новая игра" чистим поле и спавним заново
    }
    public void ResetGameFiled()
    {
        EnemyGrid.singleton.DeleteEnemys();
        UnitGrid.singleton.DeleteUnits();

        EnemyGrid.singleton.Spawn(currentLevel);
        UnitGrid.singleton.SetSavedGridOnScene();
    }
    private void OnEnable()
    {
        GameUIHealthBar.onEnemysHealthZeroOut += OnWinFight;
        GameUIHealthBar.onUnitsHealthZeroOut += OnLoseFight;
    }
    private void OnDisable()
    {
        GameUIHealthBar.onEnemysHealthZeroOut -= OnWinFight;
        GameUIHealthBar.onUnitsHealthZeroOut -= OnLoseFight;
    }
}
