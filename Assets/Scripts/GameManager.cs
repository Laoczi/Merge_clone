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

        PlayerPrefs.DeleteKey("currentLevel");


        currentLevel = 0;
        if (PlayerPrefs.HasKey("currentLevel")) currentLevel = PlayerPrefs.GetInt("currentLevel");
        else PlayerPrefs.SetInt("currentLevel", 0);

        //currentLevel = 0;//------------------

    }
    private void Start()
    {
        EnemyGrid.singleton.Spawn(currentLevel);
    }
    public void StartFight()
    {
        onStartFight?.Invoke();
        _mainMenuPanel.SetActive(false);
        _fightMenuPanel.SetActive(true);
    }
    void OnWinFight()
    {
        currentLevel++;
        onEndFight?.Invoke();
        PlayerPrefs.SetInt("currentLevel", currentLevel);
        //вызываем окно победы, а при нажатии "новая игра" чистим поле и спавним заново
    }
    void OnLoseFight()
    {
        currentLevel++;
        onEndFight?.Invoke();
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
