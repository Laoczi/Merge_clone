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
    Color _completedLevel = new Color(0.1647059f, 0.7215686f, 0.04313726f, 1);
    Color _currentLevel = new Color(0.9882354f, 0.8039216f, 0.3176471f, 1);
    Color _nextLevel = new Color(0.6698113f,0.6698113f,0.6698113f,1);

    private void Start()
    {
        SetStats();
    }
    void SetStats()
    {
        int currentLevel = GameManager.currentLevel;

        _currentLevelText.text = "LEVEL" + (currentLevel + 1).ToString();

        int currentOpenedEnvironmentId = 0;

        for (int i = 0; i < _openedEnvironment.Length; i++)
        {
            _openedEnvironment[i].gameObject.SetActive(false);

            if (currentLevel > 9)
            {
                currentLevel -= 9;
                currentOpenedEnvironmentId = i;
            }
        }
        for (int i = 0; i < _nextEnvironment.Length; i++)
        {
            _nextEnvironment[i].gameObject.SetActive(false);
        }

        _openedEnvironment[currentOpenedEnvironmentId].gameObject.SetActive(true);
        _nextEnvironment[currentOpenedEnvironmentId].gameObject.SetActive(true);

        for (int i = 0; i < _levelIndicators.Length; i++)
        {
            if (i < currentLevel) _levelIndicators[i].color = _completedLevel;
            if (i == currentLevel) _levelIndicators[i].color = _currentLevel;
            if (i > currentLevel) _levelIndicators[i].color = _nextLevel;
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
