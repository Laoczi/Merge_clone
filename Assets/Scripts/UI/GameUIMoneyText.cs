using System;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameUIMoneyText : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _money;
    [SerializeField] TextMeshProUGUI _moneyForFight;

    private void Start()
    {
        OnChangeMoney();
    }
    void OnChangeMoney()
    {
        int moneyCount = Convert.ToInt32(Mathf.Round(Money.singleton.count));

        if (moneyCount < 1000)
        {
            _money.text = moneyCount.ToString();
            _moneyForFight.text = moneyCount.ToString();
        }
        else
        {
            _money.text = MathF.Round((moneyCount / 1000),0).ToString() + "K";
            _moneyForFight.text = MathF.Round((moneyCount / 1000), 0).ToString() + "K";
        }
    }
    private void OnEnable()
    {
        Money.onChangeMoney += OnChangeMoney;
    }
    private void OnDisable()
    {
        Money.onChangeMoney -= OnChangeMoney;
    }
}
