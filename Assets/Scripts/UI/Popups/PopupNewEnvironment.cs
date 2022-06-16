using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopupNewEnvironment : MonoBehaviour
{
    [SerializeField] GameObject[] _logos;

    public void InitStats(int id)
    {
        if(id < _logos.Length) _logos[id].SetActive(true);
        else _logos[_logos.Length - 1].SetActive(true);
    }
    public void Close()
    {
        Sound.singleton.PlayClick();
        Destroy(this.gameObject);
    }
}
