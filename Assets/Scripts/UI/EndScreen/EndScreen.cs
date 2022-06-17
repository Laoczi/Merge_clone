using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class EndScreen : MonoBehaviour
{
    public static EndScreen singleton;

    public static event Action onCloseScreen;

    [Header("Win Screen")]
    [SerializeField] GameObject _winMenu;
    [SerializeField] TextMeshProUGUI _bonusText;
    [SerializeField] TextMeshProUGUI _winScreenEarndMoneyForFight;
    [SerializeField] GameObject _winScreenArrow;
    [SerializeField] GameObject _winNoThanks;
    [SerializeField] ParticleSystem _winScreenCoinEffect;
    [SerializeField] TextMeshProUGUI _winAdButtonText;
    [Header("Lose Screen")]
    [SerializeField] GameObject _loseMenu;
    [SerializeField] TextMeshProUGUI _loseScreenEarndMoneyForFight;
    [SerializeField] TextMeshProUGUI _totalEnemyDamageText;
    [SerializeField] Image _totalEnemyDamageBar;
    [SerializeField] GameObject _loseScreenArrow;
    [SerializeField] GameObject _loseNoThanks;
    [SerializeField] ParticleSystem _loseScreenCoinEffect;
    [SerializeField] TextMeshProUGUI _loseAdButtonText;
    [Header("Other Settings")]
    [SerializeField] float _arrowSpeedRotate;
    [SerializeField] float _noThanksButtonDelay;
    [SerializeField] float _openMenuDelay;
    [SerializeField] float _closeMenuDealy;

    GameObject _arrowSpin;
    Coroutine _rotateArrowCoroutine = null;

    float _currentArrowZRotation;
    float _currentBonus;

    int[] _bonusRewards = new int[]
    {
        0,
        40,
        400,
        640,
        640,
        6400,
        3240,
        32000,
        10000,
        10000,
        102000,
    };
    int[] _wheelValues = new int[] 
    {
        2,
        3,
        2,
        4,
        2,
        3,
        5,
        4,
    };

    private void Awake()
    {
        singleton = this;
    }
    private void Start()
    {
        _winMenu.SetActive(false);
        _loseMenu.SetActive(false);

        _winNoThanks.SetActive(false);
        _loseNoThanks.SetActive(false);
    }
    public void OpenWinMenu()
    {
        StartCoroutine(ShowWinMenu());
    }
    public void OpenLoseMenu()
    {
        StartCoroutine(ShowLoseMenu());
    }
    public void CloseEndMenu()
    {
        StartCoroutine(HideEndMenu());
    }
    IEnumerator HideEndMenu()
    {
        if (_rotateArrowCoroutine != null)
        {
            StopCoroutine(_rotateArrowCoroutine);
            _rotateArrowCoroutine = null;
        }
        if (_arrowSpin != null) Destroy(_arrowSpin);
        Sound.singleton.PlayClick();
        if (_loseMenu.activeSelf) _loseScreenCoinEffect.Emit(10);
        if (_winMenu.activeSelf) _winScreenCoinEffect.Emit(10); 
        
        yield return new WaitForSeconds(_closeMenuDealy);

        onCloseScreen?.Invoke();
        _winMenu.SetActive(false);
        _loseMenu.SetActive(false);
        StopAllCoroutines();
    }
    IEnumerator ShowWinMenu()
    {
        yield return new WaitForSeconds(_openMenuDelay);

        Sound.singleton.PlayCollectCoin();
        _winMenu.SetActive(true);
        _rotateArrowCoroutine = StartCoroutine(RotateArrow(_winScreenArrow, _winAdButtonText));

        StartCoroutine(ShowNoThanks(_winNoThanks));

        if(GameManager.currentLevel == 2 || GameManager.currentLevel == 5 || GameManager.currentLevel == 7 || GameManager.currentLevel >= 10 ) _bonusText.gameObject.SetActive(true);
        else _bonusText.gameObject.SetActive(false);


        if (GameManager.currentLevel < _bonusRewards.Length)
        {
            _currentBonus = _bonusRewards[GameManager.currentLevel];
            Money.singleton.Add(_bonusRewards[GameManager.currentLevel]);
        }
        else
        {
            _currentBonus = _bonusRewards[_bonusRewards.Length - 1];
            Money.singleton.Add(_bonusRewards[_bonusRewards.Length - 1]);
        }


        if (_currentBonus > 1000)
        {
            _winScreenEarndMoneyForFight.text = "+ " + (_currentBonus / 1000).ToString() + "K";
        }
        else _winScreenEarndMoneyForFight.text = "+ " + _currentBonus.ToString();


    }
    IEnumerator ShowLoseMenu()
    {
        yield return new WaitForSeconds(_openMenuDelay);

        Sound.singleton.PlayCollectCoin();
        _loseMenu.SetActive(true);

        _rotateArrowCoroutine = StartCoroutine(RotateArrow(_loseScreenArrow, _loseAdButtonText));

        StartCoroutine(ShowNoThanks(_loseNoThanks));

        if (Money.singleton.earndForLastFight > 1000) _loseScreenEarndMoneyForFight.text = "+ " + Money.singleton.earndForLastFight.ToString() + "K";
        else _loseScreenEarndMoneyForFight.text = "+ " + Money.singleton.earndForLastFight.ToString();

        _totalEnemyDamageText.text = Mathf.Round(100 - GameUIHealthBar.singleton.totalEnemyDamagePercent).ToString() + "%";
        _totalEnemyDamageBar.fillAmount = (100 - GameUIHealthBar.singleton.totalEnemyDamagePercent) / 100;

        if (GameManager.currentLevel < _bonusRewards.Length - 1)
        {
            _currentBonus = _bonusRewards[GameManager.currentLevel + 1] * ((100 - GameUIHealthBar.singleton.totalEnemyDamagePercent) / 100);
        }
        else
        {
            _currentBonus = _bonusRewards[_bonusRewards.Length - 1] * ((100 - GameUIHealthBar.singleton.totalEnemyDamagePercent) / 100);
        }


        if (GameManager.currentLevel == 0)
        {
            _loseScreenEarndMoneyForFight.text = "+ 14";
            Money.singleton.Add(13);
        }
    }
    IEnumerator RotateArrow(GameObject arrow, TextMeshProUGUI adText)
    {
        _arrowSpin = Sound.singleton.PlayArrowSpin();
        RectTransform arrowRect = arrow.GetComponent<RectTransform>();
        while (true)
        {
            arrow.transform.Rotate(Vector3.forward * Time.deltaTime * _arrowSpeedRotate);
            int id = (Mathf.RoundToInt(Mathf.Abs(arrowRect.eulerAngles.z) / 45));
            if (id >= _wheelValues.Length) id = _wheelValues.Length - 1;
            if (id < 0) id = 0;
            if (Mathf.RoundToInt(_currentBonus * _wheelValues[id]) > 1000)
            {
                adText.text = (Mathf.RoundToInt(_currentBonus * _wheelValues[id]) / 1000).ToString() + "K";
            }
            else
            {
                adText.text = Mathf.RoundToInt(_currentBonus * _wheelValues[id]).ToString();
            }
            yield return new WaitForEndOfFrame();
        }
    }
    IEnumerator ShowNoThanks(GameObject target)
    {
        yield return new WaitForSeconds(_noThanksButtonDelay);
        target.SetActive(true);
    }
}
