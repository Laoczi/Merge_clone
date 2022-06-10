using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CardScrollMenu : MonoBehaviour
{
    public static CardScrollMenu singleton;

    [Header("Card menu links")]
    [SerializeField] GameObject _menu;
    [SerializeField] GameObject _humanContent;
    [SerializeField] GameObject _dinoContent;

    [SerializeField] GameObject[] _humanCardOpened;
    [SerializeField] GameObject[] _humanCardClosed;

    [SerializeField] GameObject[] _dinoCardOpened;
    [SerializeField] GameObject[] _dinoCardClosed;

    [SerializeField] RectTransform _lineLabel;
    [Header("card popup prefab")]
    [SerializeField] GameObject _humanPopup;
    [SerializeField] GameObject _dinoPopup;

    public int _currentHumanOpenedMergeLevel;
    public int _currentDinoOpenedMergeLevel;

    bool _isOpen;
    private void Awake()
    {
        singleton = this;
    }
    private void Start()
    {
        _currentHumanOpenedMergeLevel = 0;
        _currentDinoOpenedMergeLevel = 0;

        if (PlayerPrefs.HasKey("openedHumanMergeLevel")) _currentHumanOpenedMergeLevel = PlayerPrefs.GetInt("openedHumanMergeLevel");
        else PlayerPrefs.SetInt("openedHumanMergeLevel", 0);

        if (PlayerPrefs.HasKey("openedDinoMergeLevel")) _currentDinoOpenedMergeLevel = PlayerPrefs.GetInt("openedDinoMergeLevel");
        else PlayerPrefs.SetInt("openedDinoMergeLevel", 0);

        UpdateCardStates();
    }
    public void OpenMenu()
    {
        _isOpen = true;
        _menu.SetActive(true);
    }
    public void OpenHumanScroll()
    {
        if (_isOpen == false) return;
        _humanContent.SetActive(true);
        _dinoContent.SetActive(false);
        _lineLabel.DOAnchorPos(new Vector2(50, -35), 0.25f);
    }
    public void OpenDinoScroll()
    {
        if (_isOpen == false) return;
        _humanContent.SetActive(false);
        _dinoContent.SetActive(true);
        _lineLabel.DOAnchorPos(new Vector2(-200, -35), 0.25f);
    }
    public void CloseMenu()
    {
        _menu.SetActive(false);
    }
    void UpdateCardStates()
    {
        for (int i = 0; i < _humanCardOpened.Length; i++)
        {
            if (i <= _currentHumanOpenedMergeLevel)
            {
                _humanCardOpened[i].gameObject.SetActive(true);
                _humanCardClosed[i].gameObject.SetActive(false);
            }
            else
            {
                _humanCardOpened[i].gameObject.SetActive(false);
                _humanCardClosed[i].gameObject.SetActive(true);
            }
        }

        for (int i = 0; i < _dinoCardOpened.Length; i++)
        {
            if (i <= _currentDinoOpenedMergeLevel)
            {
                _dinoCardOpened[i].gameObject.SetActive(true);
                _dinoCardClosed[i].gameObject.SetActive(false);
            }
            else
            {
                _dinoCardOpened[i].gameObject.SetActive(false);
                _dinoCardClosed[i].gameObject.SetActive(true);
            }
        }
    }
    void OnMerge(SpeciesType type, int mergeLevel)
    {
        if(type == SpeciesType.human && mergeLevel > _currentHumanOpenedMergeLevel)
        {
            _currentHumanOpenedMergeLevel = mergeLevel;
            PlayerPrefs.SetInt("openedHumanMergeLevel", _currentHumanOpenedMergeLevel);

            //вызываем попап с лучником
        }
        if (type == SpeciesType.dino && mergeLevel > _currentDinoOpenedMergeLevel)
        {
            _currentDinoOpenedMergeLevel = mergeLevel;
            PlayerPrefs.SetInt("openedDinoMergeLevel", _currentDinoOpenedMergeLevel);

            //вызываем попап с динозавром
        }

        UpdateCardStates();
    }
    private void OnEnable()
    {
        //Cell.onMerge += OnMerge;
    }
    private void OnDisable()
    {
        //Cell.onMerge -= OnMerge;
    }
}
