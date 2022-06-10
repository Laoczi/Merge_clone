using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BuyNewUnits : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _dinoPrice;
    [SerializeField] TextMeshProUGUI _humanPrice;
    [SerializeField] Button _dinoButton;
    [SerializeField] Button _humanButton;
    [SerializeField] Button _dinoAdButton;
    [SerializeField] Button _humanAdButton;


    float _currentPriceForHuman = 2;
    float _currentPriceForDino = 2;

    int _currentNumberOfHumanPurchased = 0;
    int _currentNumberOfDinoPurchased = 0;

    float[] xPricesForLevel = new float[]
    {
        1,
        1.8f,
        1.444f,
        1.333f,
        1.212f,
        1.166f,
        1.14f,
        1.12f,
        1.11f,
    };

    private void Awake()
    {
        if (PlayerPrefs.HasKey("humanNumberOfPurchased")) _currentNumberOfHumanPurchased = PlayerPrefs.GetInt("humanNumberOfPurchased");
        else PlayerPrefs.SetInt("humanNumberOfPurchased", 0);

        if (PlayerPrefs.HasKey("dinoNumberOfPurchased")) _currentNumberOfDinoPurchased = PlayerPrefs.GetInt("dinoNumberOfPurchased");
        else PlayerPrefs.SetInt("dinoNumberOfPurchased", 0);
    }
    private void Start()
    {
        SetNewPrices();
    }
    void SetNewPrices()
    {
        if (GameManager.currentLevel > 0 && GameManager.currentLevel < 10)
        {
            float g = 0;
            float xDino = 1;
            float xHuman = 1;

            if (GameManager.currentLevel > 0 && GameManager.currentLevel < 4) g = 1;
            else if (GameManager.currentLevel == 5) g = 5;
            else if (GameManager.currentLevel > 5 && GameManager.currentLevel < 8) g = 3;
            else if (GameManager.currentLevel == 9) g = 2.5f;

            for (int i = 0; i < _currentNumberOfDinoPurchased; i++)
            {
                if (i < xPricesForLevel.Length) xDino *= xPricesForLevel[i];
                else xDino *= xPricesForLevel[xPricesForLevel.Length - 1];
            }
            for (int i = 0; i < _currentNumberOfHumanPurchased; i++)
            {
                if (i < xPricesForLevel.Length) xHuman *= xPricesForLevel[i];
                else xHuman *= xPricesForLevel[xPricesForLevel.Length - 1];
            }

            _currentPriceForDino = 160 * g * xDino;
            _currentPriceForHuman = 160 * g * xHuman;

            if (_currentNumberOfHumanPurchased == 0) _currentPriceForHuman = 2;
            if (_currentNumberOfDinoPurchased == 2) _currentPriceForDino = 2;
        }
        else
        {
            throw new System.Exception("cant set price, because level more than 9 or less than 0");
        }

        int priceForDino = Convert.ToInt32(_currentPriceForDino);
        int priceForHuman = Convert.ToInt32(_currentPriceForHuman);


        if (priceForDino < 1000) _dinoPrice.text = priceForDino.ToString();
        else _dinoPrice.text = MathF.Round((priceForDino / 1000), 0).ToString() + "K";

        if (priceForHuman < 1000) _humanPrice.text = priceForHuman.ToString();
        else _humanPrice.text = MathF.Round((priceForHuman / 1000), 0).ToString() +"K";

        if(_currentPriceForDino > Money.singleton.count)
        {
            _dinoButton.gameObject.SetActive(false);
            _dinoAdButton.gameObject.SetActive(true);
        }
        else
        {
            _dinoButton.gameObject.SetActive(true);
            _dinoAdButton.gameObject.SetActive(false);
        }

        if (_currentPriceForHuman > Money.singleton.count)
        {
            _humanButton.gameObject.SetActive(false);
            _humanAdButton.gameObject.SetActive(true);
        }
        else
        {
            _humanButton.gameObject.SetActive(true);
            _humanAdButton.gameObject.SetActive(false);
        }
    }
    public void BuyDino()
    {
        if (Money.singleton.Get(_currentPriceForDino))
        {
            if (UnitGrid.singleton.AddDinoUnit())
            {
                _currentNumberOfDinoPurchased++;
                PlayerPrefs.SetInt("dinoNumberOfPurchased", _currentNumberOfDinoPurchased);

                SetNewPrices();
            }
        }
    }
    public void BuyHuman()
    {
        if (Money.singleton.Get(_currentPriceForHuman))
        {
            if (UnitGrid.singleton.AddHumanUnit())
            {
                _currentNumberOfHumanPurchased++;
                PlayerPrefs.SetInt("humanNumberOfPurchased", _currentNumberOfHumanPurchased);

                SetNewPrices();
            }
        }
    }
}
