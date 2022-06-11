using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sound : MonoBehaviour
{
    public static Sound singleton;
    [SerializeField, Range(0,1)] float _volume;
    [SerializeField] AudioClip[] clips;

    private void Awake()
    {
        singleton = this;
    }
    public void PlayArrow()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[0]));
    }
    public void PlayArrowReachedTarget()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[1]));
    }
    public void PlayDinoAttack()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[2]));
    }
    public void PlayBuyNewUnit()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[3]));
    }
    public void PlayClick()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[4]));
    }
    public void PlayCollectCoin()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[5]));
    }
    public void PlayLose()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[6]));
    }
    public void PlayMerge()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[7]));
    }
    public void PlayNewUnit()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[8]));
    }
    public GameObject PlayArrowSpin()
    {
        if (VibroSoundSettings.sound) 
        {
            GameObject audio = new GameObject();
            audio.transform.position = transform.position;
            audio.transform.SetParent(transform);
            AudioSource source = audio.AddComponent<AudioSource>();
            source.clip = clips[9];
            source.volume = _volume;
            source.loop = true;
            source.Play();
            return audio;
        }
        else return null;
    }
    public void PlayWin()
    {
        if (VibroSoundSettings.sound) StartCoroutine(SpawnAudioClip(clips[10]));
    }
    IEnumerator SpawnAudioClip(AudioClip clip)
    {
        GameObject audio = new GameObject();
        audio.transform.position = transform.position;
        audio.transform.SetParent(transform);
        AudioSource source = audio.AddComponent<AudioSource>();
        source.clip = clip;
        source.volume = _volume;
        source.Play();
        yield return new WaitForSeconds(clip.length);
        Destroy(audio);
    }
    
}
