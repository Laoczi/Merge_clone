using System;
using System.Collections.Generic;
using UnityEngine;

public class Money : MonoBehaviour
{
    public static Money singleton;

    public static event Action onChangeMoney;
    public float count { get; private set; }
    public float earndForLastFight { get; private set; }

    int[] _nLevelValues = new int[] { 2,2,16,12,36,144,31,80,74,144 };

    private void Awake()
    {
        singleton = this;

        count = 0;
        if (PlayerPrefs.HasKey("money")) count = PlayerPrefs.GetFloat("money");
        else PlayerPrefs.SetFloat("money", 0);

        count = 9999999;
    }
    public bool Get(float value)
    {
        if (value > count) return false;

        count -= value;
        PlayerPrefs.SetFloat("money", count);
        onChangeMoney?.Invoke();
        return true;
    }
    public void Add(float value)
    {
        if (value < 0) value = 0;

        count += value;
        PlayerPrefs.SetFloat("money", count);
        onChangeMoney?.Invoke();
    }
    void AddMoneyFromHit(TeamType team, float value, int level)
    {
        if (team == TeamType.Unit) return;//���� ������� ���� �� ����� ������, �� ������ �� ����������

        earndForLastFight += (_nLevelValues[level] * Mathf.Pow(2, level - 1));
        Debug.Log("current earnd money " + earndForLastFight);
        Add((_nLevelValues[level] * Mathf.Pow(2, level - 1)));
    }
    void ResetEarndMoney()
    {
        earndForLastFight = 0;
    }
    private void OnEnable()
    {
        Human.onGetDamage += AddMoneyFromHit;
        Dino.onGetDamage += AddMoneyFromHit;
        EndScreen.onCloseScreen += ResetEarndMoney;
    }
    private void OnDisable()
    {
        Human.onGetDamage -= AddMoneyFromHit;
        Dino.onGetDamage -= AddMoneyFromHit;
        EndScreen.onCloseScreen -= ResetEarndMoney;
    }
}
