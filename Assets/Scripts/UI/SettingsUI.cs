using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingsUI : MonoBehaviour
{
    public static bool vibro { get; private set; }
    public static bool sound { get; private set; }

    [SerializeField] Button _offVibro;
    [SerializeField] Button _onVibro;

    [SerializeField] Button _offSound;
    [SerializeField] Button _onSound;

    private void Awake()
    {
        if (PlayerPrefs.HasKey("VibroSetting"))
        {
            PlayerPrefs.SetInt("VibroSetting", 1);
            PlayerPrefs.SetInt("SoundSetting", 1);
            vibro = true;
            sound = true;
        }
        else
        {
            vibro = PlayerPrefs.GetInt("VibroSetting") == 1;
            sound = PlayerPrefs.GetInt("SoundSetting") == 1;
        }

        CheckVibroState();
        CheckSoundState();
    }

    public void SwitchVibroSetting()
    {
        vibro = !vibro;

        CheckVibroState();
    }
    public void SwitchSoundSetting()
    {
        sound = !sound;

        CheckSoundState();
    }
    void CheckVibroState()
    {
        if (vibro)
        {
            _offVibro.gameObject.SetActive(true);
            _onVibro.gameObject.SetActive(false);
        }
        else
        {
            _offVibro.gameObject.SetActive(false);
            _onVibro.gameObject.SetActive(true);
        }
    }
    void CheckSoundState()
    {
        if (sound)
        {
            _offSound.gameObject.SetActive(true);
            _onSound.gameObject.SetActive(false);
        }
        else
        {
            _offSound.gameObject.SetActive(false);
            _onSound.gameObject.SetActive(true);
        }
    }
}
