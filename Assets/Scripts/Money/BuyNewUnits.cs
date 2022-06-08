using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BuyNewUnits : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _dinoPrice;
    [SerializeField] TextMeshProUGUI _humanPrice;

    int _currentPriceForHuman;
    int _currentPriceForDino;

    private void Awake()
    {
        _currentPriceForDino = 2;
        _currentPriceForHuman = 2;

        if (PlayerPrefs.HasKey("dinoPrice")) _currentPriceForDino = PlayerPrefs.GetInt("dinoPrice");
        else PlayerPrefs.SetInt("dinoPrice", 2);

        if (PlayerPrefs.HasKey("humanPrice")) _currentPriceForHuman = PlayerPrefs.GetInt("humanPrice");
        else PlayerPrefs.SetInt("humanPrice", 2);

        _dinoPrice.text = _currentPriceForDino.ToString();
        _humanPrice.text = _currentPriceForHuman.ToString();
    }
    public void BuyDino()
    {
        if (Money.singleton.Get(_currentPriceForDino))
        {
            if (UnitGrid.singleton.AddDinoUnit())
            {
                //повышаем цену 
            }
        }
    }
    public void BuyHuman()
    {
        if (Money.singleton.Get(_currentPriceForHuman))
        {
            if (UnitGrid.singleton.AddHumanUnit())
            {
                //повышаем цену
            }
        }
    }
}
