using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial : MonoBehaviour
{
    [SerializeField] GameObject _dinoButton;
    [SerializeField] GameObject _warriorButton;
    [SerializeField] Button _tutorDino;
    [SerializeField] Button _tutorWarrior;
    [SerializeField] GameObject _tutorOneMain;
    [SerializeField] GameObject _tutorOne;
    [SerializeField] GameObject _tutorTwo;
    [SerializeField] GameObject _tutorTwoMain;
    [SerializeField] GameObject _tutorThree;
    [SerializeField] GameObject _tutorFour;
    [SerializeField] GameObject _startFightButton;

    UnitInCell _firstDino;
    private void Awake()
    {
        PlayerPrefs.DeleteAll();//---------------------------
    }
    private void Start()
    {
        if (PlayerPrefs.HasKey("isEndTutor") == false)
        {
            _dinoButton.SetActive(false);
            _warriorButton.SetActive(false);
            UnitGrid.singleton.AddUnitInCell(SpeciesType.dino, 12);
            EndScreen.onCloseScreen += AfterFirstFight;
            _tutorOneMain.SetActive(false);
            _tutorTwoMain.SetActive(false);
        }
        else
        {
            _tutorOneMain.SetActive(false);
            _tutorTwoMain.SetActive(false);
        }
    }
    void AfterFirstFight()
    {
        EndScreen.onCloseScreen -= AfterFirstFight;
        _tutorOneMain.SetActive(true);
        _tutorOne.SetActive(true);
        _tutorTwo.SetActive(false);
        _tutorTwoMain.SetActive(false);
        _tutorWarrior.onClick.AddListener(AddFirstFarrior);
        _startFightButton.SetActive(false);
    }
    void AddFirstFarrior()
    {
        _tutorWarrior.onClick.RemoveAllListeners();
        Money.singleton.Get(2);
        Sound.singleton.PlayClick();
        if (UnitGrid.singleton.CheckCell(11)) UnitGrid.singleton.AddUnitInCell(SpeciesType.human, 11);
        else UnitGrid.singleton.AddHumanUnit();

        _tutorOneMain.SetActive(true);
        _tutorOne.SetActive(false);
        _tutorTwo.SetActive(true);
        _tutorTwoMain.SetActive(false);
        Cell.onMoveUnit += AfterFirstMerge;
    }
    void AfterFirstMerge()
    {
        Cell.onMoveUnit -= AfterFirstMerge;
        _startFightButton.SetActive(true);
        _tutorOneMain.SetActive(false);
        EndScreen.onCloseScreen += AfterSecondFight;
    }
    void AfterSecondFight()
    {
        _startFightButton.SetActive(false);
        EndScreen.onCloseScreen -= AfterSecondFight;
        _tutorTwoMain.SetActive(true);
        _tutorThree.SetActive(true);
        _tutorFour.SetActive(false);
        _tutorDino.onClick.AddListener(AfterSecondDino);
    }
    void AfterSecondDino()
    {
        _tutorDino.onClick.RemoveAllListeners();
        Money.singleton.Get(2);
        Sound.singleton.PlayClick();
        Debug.Log("добавляем нового дино");
        //как будем спавнить стрелку, сначала спавним второго дино сбоку от первого
        _tutorThree.SetActive(false);
        _tutorFour.SetActive(true);//этот тутор нужно поставить напротив дино, который слева
        _startFightButton.SetActive(false);

        UnitInCell[] unitsOnScene = FindObjectsOfType<UnitInCell>();
        for (int i = 0; i < unitsOnScene.Length; i++)
        {
            if (unitsOnScene[i].type == SpeciesType.dino)
            {
                _firstDino = unitsOnScene[i];
                break;
            }
        }
        Debug.Log(_firstDino.cellIndex);

        if (UnitGrid.singleton.CheckCell(_firstDino.cellIndex + 1)) UnitGrid.singleton.AddUnitInCell(SpeciesType.dino, _firstDino.cellIndex + 1);
        else if (UnitGrid.singleton.CheckCell(_firstDino.cellIndex - 1)) UnitGrid.singleton.AddUnitInCell(SpeciesType.dino, _firstDino.cellIndex - 1);
        else if (UnitGrid.singleton.CheckCell(_firstDino.cellIndex - 5)) UnitGrid.singleton.AddUnitInCell(SpeciesType.dino, _firstDino.cellIndex - 5);
        else if (UnitGrid.singleton.CheckCell(_firstDino.cellIndex + 5)) UnitGrid.singleton.AddUnitInCell(SpeciesType.dino, _firstDino.cellIndex + 5);

        //пока не буду спавнить правильно, потом буду подгонять
        Cell.onMerge += OnFirstMerge;
    }
    void OnFirstMerge(SpeciesType type, int id)
    {
        Cell.onMerge -= OnFirstMerge;
        Debug.Log("замерджили");
        _startFightButton.SetActive(true);
        _tutorOneMain.SetActive(false);
        _tutorTwoMain.SetActive(false);
        _dinoButton.SetActive(false);
        _warriorButton.SetActive(false);
        EndScreen.onCloseScreen += End;
    }
    void End()
    {
        EndScreen.onCloseScreen -= End;
        _dinoButton.SetActive(true);
        _warriorButton.SetActive(true);
        PlayerPrefs.SetInt("isEndTutor", 1);
        BuyNewUnits.singleton.AddDinoNumberPurchased();
        BuyNewUnits.singleton.AddDinoNumberPurchased();
        BuyNewUnits.singleton.AddHumanNumberPurchased();
        BuyNewUnits.singleton.AddHumanNumberPurchased();
    }

    private void OnApplicationQuit()
    {
        if(PlayerPrefs.HasKey("isEndTutor") == false)
        {
            Debug.Log("not ok");
            PlayerPrefs.DeleteAll();
        }
    }
}
