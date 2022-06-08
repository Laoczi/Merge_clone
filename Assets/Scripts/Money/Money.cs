using System;
using System.Collections.Generic;
using UnityEngine;

public class Money : MonoBehaviour
{
    public static Money singleton;

    public static event Action onChangeMoney;
    public int count { get; private set; }
    public int moneyForFight { get; private set; }

    int[] _nLevelValues = new int[] { 2,2,16,12,36,144,31,80,74,144 };

    private void Awake()
    {
        singleton = this;

        count = 50000000;//потом поменять на 50
        if (PlayerPrefs.HasKey("money")) count = PlayerPrefs.GetInt("money");
        else PlayerPrefs.SetInt("money", 50000000);

        moneyForFight = 0;
    }
    public bool Get(int value)
    {
        if (value > count) return false;

        count -= value;
        PlayerPrefs.SetInt("money", count);
        onChangeMoney?.Invoke();
        return true;
    }
    public void Add(int value)
    {
        if (value < 0) throw new System.Exception("you cant add money less than zero");

        count += value;
        PlayerPrefs.SetInt("money", count);
        onChangeMoney?.Invoke();
    }
    void AddMoneyFromHit(TeamType team, float value, int level)
    {
        if (team == TeamType.Unit) return;//если нанесли удар по нашим юнитам, то деньги не прибавляем
        if (level == 0) return;

        Add((int)(_nLevelValues[level] * Mathf.Pow(2, level - 1)));
        moneyForFight += (int)(_nLevelValues[level] * Mathf.Pow(2, level - 1));
    }
    void OnEndFight()
    {
        moneyForFight = 0;
    }
    private void OnEnable()
    {
        Human.onGetDamage += AddMoneyFromHit;
        Dino.onGetDamage += AddMoneyFromHit;

        GameManager.onEndFight += OnEndFight;
    }
    private void OnDisable()
    {
        Human.onGetDamage -= AddMoneyFromHit;
        Dino.onGetDamage -= AddMoneyFromHit;

        GameManager.onEndFight -= OnEndFight;
    }
}
