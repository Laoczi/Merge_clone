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
    [SerializeField] TextMeshProUGUI _winScreenEarndMoneyForFight;
    [SerializeField] TextMeshProUGUI _rewardText;
    [SerializeField] GameObject _winScreenArrow;
    [SerializeField] GameObject _winNoThanks;
    [SerializeField] ParticleSystem _winScreenCoinEffect;
    [Header("Lose Screen")]
    [SerializeField] GameObject _loseMenu;
    [SerializeField] TextMeshProUGUI _loseScreenEarndMoneyForFight;
    [SerializeField] TextMeshProUGUI _totalEnemyDamageText;
    [SerializeField] Image _totalEnemyDamageBar;
    [SerializeField] GameObject _loseScreenArrow;
    [SerializeField] GameObject _loseNoThanks;
    [SerializeField] ParticleSystem _loseScreenCoinEffect;
    [Header("Other Settings")]
    [SerializeField] float _arrowSpeedRotate;
    [SerializeField] float _noThanksButtonDelay;
    [SerializeField] float _openMenuDelay;
    [SerializeField] float _closeMenuDealy;

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
        //if(_loseMenu.activeSelf) _loseScreenCoinEffect.Emit(10);
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

        _winMenu.SetActive(true);
        StartCoroutine(RotateArrow(_winScreenArrow));

        StartCoroutine(ShowNoThanks(_winNoThanks));

        if (Money.singleton.earndForLastFight > 1000) _winScreenEarndMoneyForFight.text = Money.singleton.earndForLastFight.ToString() + "K";
        else _winScreenEarndMoneyForFight.text = Money.singleton.earndForLastFight.ToString();
    }
    IEnumerator ShowLoseMenu()
    {
        yield return new WaitForSeconds(_openMenuDelay);

        _loseMenu.SetActive(true);

        StartCoroutine(RotateArrow(_loseScreenArrow));

        StartCoroutine(ShowNoThanks(_loseNoThanks));

        if (Money.singleton.earndForLastFight > 1000) _loseScreenEarndMoneyForFight.text = Money.singleton.earndForLastFight.ToString() + "K";
        else _loseScreenEarndMoneyForFight.text = Money.singleton.earndForLastFight.ToString();

        _totalEnemyDamageText.text = Mathf.Round(GameUIHealthBar.singleton.totalEnemyDamagePercent).ToString() + "%";
        _totalEnemyDamageBar.fillAmount = GameUIHealthBar.singleton.totalEnemyDamagePercent / 100;
    }
    IEnumerator RotateArrow(GameObject arrow)
    {
        while (true)
        {
            arrow.transform.Rotate(Vector3.forward * Time.deltaTime * _arrowSpeedRotate);
            yield return new WaitForEndOfFrame();
        }
    }
    IEnumerator ShowNoThanks(GameObject target)
    {
        yield return new WaitForSeconds(_noThanksButtonDelay);
        target.SetActive(true);
    }
}
