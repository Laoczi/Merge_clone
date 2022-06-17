using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
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

    [SerializeField] TextMeshProUGUI _dinoTitle;
    [SerializeField] TextMeshProUGUI _humanTitle;
    [Header("card popup prefab")]
    [SerializeField] PopupNewCharacter _humanPopup;
    [SerializeField] PopupNewCharacter _dinoPopup;

    public int _currentHumanOpenedMergeLevel;
    public int _currentDinoOpenedMergeLevel;

    bool _isOpen;
    private void Awake()
    {
        singleton = this;
    }
    private void Start()
    {

        _humanContent.SetActive(false);
        _dinoContent.SetActive(true);
        _lineLabel.DOAnchorPos(new Vector2(-250, -35), 0.25f);
        _dinoTitle.transform.DOScale(1.1f, 0.5f);
        _humanTitle.transform.DOScale(1f, 0.5f);
        _dinoTitle.color = Color.white;
        _humanTitle.color = new Color(0.3137255f, 0.627451f, 0.9137256f, 1);

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
        Sound.singleton.PlayClick();
        _humanContent.SetActive(true);
        _dinoContent.SetActive(false);
        _lineLabel.DOAnchorPos(new Vector2(0, -35), 0.25f);

        _dinoTitle.transform.DOScale(1f, 0.5f);
        _humanTitle.transform.DOScale(1.1f, 0.5f);
        _dinoTitle.color = new Color(0.3137255f, 0.627451f, 0.9137256f, 1);
        _humanTitle.color = Color.white;
    }
    public void OpenDinoScroll()
    {
        if (_isOpen == false) return;
        Sound.singleton.PlayClick();
        _humanContent.SetActive(false);
        _dinoContent.SetActive(true);
        _lineLabel.DOAnchorPos(new Vector2(-250, -35), 0.25f);

        _dinoTitle.transform.DOScale(1.1f, 0.5f);
        _humanTitle.transform.DOScale(1f, 0.5f);
        _dinoTitle.color = Color.white;
        _humanTitle.color = new Color(0.3137255f, 0.627451f, 0.9137256f, 1);
    }
    public void CloseMenu()
    {
        Sound.singleton.PlayClick();
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

            PopupNewCharacter popup = Instantiate(_humanPopup);
            popup.InitStats(mergeLevel);

            Sound.singleton.PlayNewUnit();
        }
        if (type == SpeciesType.dino && mergeLevel > _currentDinoOpenedMergeLevel)
        {
            _currentDinoOpenedMergeLevel = mergeLevel;
            PlayerPrefs.SetInt("openedDinoMergeLevel", _currentDinoOpenedMergeLevel);

            PopupNewCharacter popup = Instantiate(_dinoPopup);
            popup.InitStats(mergeLevel);

            Sound.singleton.PlayNewUnit();
        }

        UpdateCardStates();
    }
    private void OnEnable()
    {
        Cell.onMerge += OnMerge;
    }
    private void OnDisable()
    {
        Cell.onMerge -= OnMerge;
    }
}
