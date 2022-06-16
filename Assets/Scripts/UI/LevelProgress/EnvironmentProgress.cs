using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class EnvironmentProgress : MonoBehaviour
{
    
    [SerializeField] TextMeshProUGUI _currentLevelText;
    [SerializeField] Image[] _openedEnvironment;
    [SerializeField] Image[] _nextEnvironment;
    [SerializeField] Image[] _levelIndicators;
    [SerializeField] GameObject[] _environment;
    [SerializeField] PopupNewEnvironment _popup;
    Color _completedLevel = new Color(0.1647059f, 0.7215686f, 0.04313726f, 1);
    Color _currentLevel = new Color(0.9882354f, 0.8039216f, 0.3176471f, 1);
    Color _nextLevel = new Color(0.6698113f,0.6698113f,0.6698113f,1);

    int _lastOpenedEnvironmentId;

    private void Start()
    {
        _lastOpenedEnvironmentId = 0;

        if (PlayerPrefs.HasKey("lastOpenedEnvironment")) _lastOpenedEnvironmentId = PlayerPrefs.GetInt("lastOpenedEnvironment");
        else PlayerPrefs.SetInt("lastOpenedEnvironment", 0);

        SetStats();
    }
    void SetStats()
    {
        int currentLevel = GameManager.currentLevel;

        _currentLevelText.text = "LEVEL " + (currentLevel + 1).ToString();

        for (int i = 0; i < _openedEnvironment.Length; i++)//hide all environments UI
        {
            _openedEnvironment[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < _nextEnvironment.Length; i++)
        {
            _nextEnvironment[i].gameObject.SetActive(false);
        }

        int currentOpenedEnvironmentId = 0;
        while (currentLevel > 9)//show opened environments
        {
            currentLevel -= 10;
            currentOpenedEnvironmentId++;
            if (currentOpenedEnvironmentId < _environment.Length) _environment[currentOpenedEnvironmentId].SetActive(true);
            else _environment[_environment.Length - 1].SetActive(true);
        }

        for (int i = 0; i < _levelIndicators.Length; i++)//set indicators
        {
            if (i < currentLevel) _levelIndicators[i].color = _completedLevel;
            else if (i == currentLevel) _levelIndicators[i].color = _currentLevel;
            else if (i > currentLevel) _levelIndicators[i].color = _nextLevel;
        }

        _openedEnvironment[currentOpenedEnvironmentId].gameObject.SetActive(true);//лишь бы блять и тут не выйти за пределы массива
        _nextEnvironment[currentOpenedEnvironmentId].gameObject.SetActive(true);

        if (currentOpenedEnvironmentId > _lastOpenedEnvironmentId)
        {
            _lastOpenedEnvironmentId = currentOpenedEnvironmentId;
            PlayerPrefs.SetInt("lastOpenedEnvironment", _lastOpenedEnvironmentId);

            if(_lastOpenedEnvironmentId < _environment.Length)
            {
                _environment[_lastOpenedEnvironmentId].SetActive(true);
            }
            PopupNewEnvironment popup = Instantiate(_popup);
            popup.InitStats(_lastOpenedEnvironmentId);
        }
    }
    private void OnEnable()
    {
        EndScreen.onCloseScreen += SetStats;
    }
    private void OnDisable()
    {
        EndScreen.onCloseScreen -= SetStats;
    }
}
