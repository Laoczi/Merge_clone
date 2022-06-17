using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VibroSoundSettings : MonoBehaviour
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
            vibro = PlayerPrefs.GetInt("VibroSetting") == 1;
            sound = PlayerPrefs.GetInt("SoundSetting") == 1;
        }
        else
        {
            PlayerPrefs.SetInt("VibroSetting", 1);
            PlayerPrefs.SetInt("SoundSetting", 1);
            vibro = true;
            sound = true;
        }

        CheckVibroState();
        CheckSoundState();

        Debug.Log("check");
    }

    public void SwitchVibroSetting()
    {
        vibro = !vibro;

        CheckVibroState();
    }
    public void SwitchSoundSetting()
    {
        sound = !sound;
        Sound.singleton.PlayClick();
        CheckSoundState();
    }
    void CheckVibroState()
    {
        if (vibro)
        {
            PlayerPrefs.SetInt("VibroSetting", 1);
            _offVibro.gameObject.SetActive(false);
            _onVibro.gameObject.SetActive(true);
        }
        else
        {
            PlayerPrefs.SetInt("VibroSetting", 0);
            _offVibro.gameObject.SetActive(true);
            _onVibro.gameObject.SetActive(false);
        }
    }
    void CheckSoundState()
    {
        if (sound)
        {
            PlayerPrefs.SetInt("SoundSetting", 1);
            _offSound.gameObject.SetActive(false);
            _onSound.gameObject.SetActive(true);
        }
        else
        {
            PlayerPrefs.SetInt("SoundSetting", 0);
            _offSound.gameObject.SetActive(true);
            _onSound.gameObject.SetActive(false);
        }
    }
}
