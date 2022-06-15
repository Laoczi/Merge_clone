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
        Sound.singleton.PlayWin();
        EndScreen.singleton.OpenWinMenu();
        _fightMenuPanel.SetActive(false);
    }
    void OnLoseFight()
    {
        onEndFight?.Invoke();
        Sound.singleton.PlayLose();
        EndScreen.singleton.OpenLoseMenu();
        _fightMenuPanel.SetActive(false);
    }
    public void ResetGameFiled()
    {
        EnemyGrid.singleton.DeleteEnemys();
        UnitGrid.singleton.DeleteUnits();

        EnemyGrid.singleton.Spawn(currentLevel);
        UnitGrid.singleton.SetSavedGridOnScene();

        GameUIHealthBar.singleton.ResetHealthBar();

        _mainMenuPanel.SetActive(true);
    }
    private void OnEnable()
    {
        GameUIHealthBar.onEnemysHealthZeroOut += OnWinFight;
        GameUIHealthBar.onUnitsHealthZeroOut += OnLoseFight;
        EndScreen.onCloseScreen += ResetGameFiled;
    }
    private void OnDisable()
    {
        GameUIHealthBar.onEnemysHealthZeroOut -= OnWinFight;
        GameUIHealthBar.onUnitsHealthZeroOut -= OnLoseFight;
        EndScreen.onCloseScreen -= ResetGameFiled;
    }
}
