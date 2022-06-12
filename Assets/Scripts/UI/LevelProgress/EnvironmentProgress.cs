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

        int currentOpenedEnvironmentId = 0;

        for (int i = 0; i < _openedEnvironment.Length; i++)
        {
            _openedEnvironment[i].gameObject.SetActive(false);

            if (currentLevel > 9)
            {
                currentLevel -= 9;
                currentOpenedEnvironmentId = i;
                _environment[i].SetActive(true);//тут возможно ошибка, если выйдем за пределы массива
            }
        }
        for (int i = 0; i < _nextEnvironment.Length; i++)
        {
            _nextEnvironment[i].gameObject.SetActive(false);
        }

        _openedEnvironment[currentOpenedEnvironmentId].gameObject.SetActive(true);//лишь бы блять и тут не выйти за пределы массива
        _nextEnvironment[currentOpenedEnvironmentId].gameObject.SetActive(true);

        for (int i = 0; i < _levelIndicators.Length; i++)
        {
            if (i < currentLevel) _levelIndicators[i].color = _completedLevel;
            if (i == currentLevel) _levelIndicators[i].color = _currentLevel;
            if (i > currentLevel) _levelIndicators[i].color = _nextLevel;
        }

        if(currentOpenedEnvironmentId > _lastOpenedEnvironmentId)
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
        GameManager.onEndFight += SetStats;
    }
    private void OnDisable()
    {
        GameManager.onEndFight -= SetStats;
    }
}
