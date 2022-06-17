using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UISettingsEnabledControl : MonoBehaviour
{
    [SerializeField] GameObject _settings;

    bool _isSettingsOpen = false;

    private void Start()
    {
        CloseSettings();
    }
    public void OpenSettings()
    {
        if (_isSettingsOpen == true) return;

        _settings.SetActive(true);
        _isSettingsOpen = true;
    }
    public void CloseSettings()
    {
        _settings.SetActive(false);
        _isSettingsOpen = false;
    }
}
