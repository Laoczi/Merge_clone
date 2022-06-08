using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardScrollMenu : MonoBehaviour
{
    [SerializeField] Transform _humanContent;
    [SerializeField] Transform _dinoContent;

    [SerializeField] ScrollCardElement _humanCardPrefab;
    [SerializeField] ScrollCardElement _dinoCardPrefab;

    int _currentHumanOpenedMergeLevel;
    int _currentDinoOpenedMergeLevel;

    [SerializeField] int _maxHumanCount;
    [SerializeField] int _maxDinoCount;

    private void Start()
    {
        _currentHumanOpenedMergeLevel = 0;
        _currentDinoOpenedMergeLevel = 0;

        if (PlayerPrefs.HasKey("openedHumanMergeLevel")) _currentHumanOpenedMergeLevel = PlayerPrefs.GetInt("openedHumanMergeLevel");
        else PlayerPrefs.SetInt("openedHumanMergeLevel", 0);

        if (PlayerPrefs.HasKey("openedDinoMergeLevel")) _currentDinoOpenedMergeLevel = PlayerPrefs.GetInt("openedDinoMergeLevel");
        else PlayerPrefs.SetInt("openedDinoMergeLevel", 0);

        for (int i = 0; i < _maxHumanCount; i++)
        {
            ScrollCardElement card = Instantiate(_humanCardPrefab, _humanContent);
            if (i <= _currentHumanOpenedMergeLevel) card.SetCardById(i);
        }
    }

    void OnMerge(SpeciesType type, int mergeLevel)
    {
        if(type == SpeciesType.human && mergeLevel > _currentHumanOpenedMergeLevel)
        {
            _currentHumanOpenedMergeLevel = mergeLevel;
            PlayerPrefs.SetInt("openedHumanMergeLevel", _currentHumanOpenedMergeLevel);
        }
        if (type == SpeciesType.dino && mergeLevel > _currentDinoOpenedMergeLevel)
        {
            _currentDinoOpenedMergeLevel = mergeLevel;
            PlayerPrefs.SetInt("openedDinoMergeLevel", _currentDinoOpenedMergeLevel);
        }
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
