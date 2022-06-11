using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopupNewEnvironment : MonoBehaviour
{
    [SerializeField] GameObject[] _logos;

    public void InitStats(int id)
    {
        _logos[id].SetActive(true);
    }
    public void Close()
    {
        Sound.singleton.PlayClick();
        Destroy(this.gameObject);
    }
}
