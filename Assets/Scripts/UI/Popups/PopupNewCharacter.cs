using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PopupNewCharacter : MonoBehaviour
{
    [SerializeField] SpeciesType _type;
    [SerializeField] GameObject[] _characterNames;
    [SerializeField] GameObject[] _characterLogos;
    [SerializeField] TextMeshProUGUI _currentHealth;
    [SerializeField] TextMeshProUGUI _differentHealth;
    [SerializeField] TextMeshProUGUI _currentAttack;
    [SerializeField] TextMeshProUGUI _differentAttack;

    public void InitStats(int id)
    {
        for (int i = 0; i < _characterNames.Length; i++)
        {
            _characterNames[i].SetActive(false);
            _characterLogos[i].SetActive(false);
        }
        _characterNames[id - 1].SetActive(true);
        _characterLogos[id - 1].SetActive(true);

        if(_type == SpeciesType.human)
        {
            float currentHealth = UnitsDataBase.singleton.humanUnitsSettings[id].health;
            _currentHealth.text = currentHealth.ToString();
            _differentHealth.text = "+" + (currentHealth - UnitsDataBase.singleton.humanUnitsSettings[id - 1].health).ToString();
            float currentDamage = UnitsDataBase.singleton.humanUnitsSettings[id].damage;
            _currentAttack.text = currentDamage.ToString();
            _differentAttack.text = "+" + (currentDamage - UnitsDataBase.singleton.humanUnitsSettings[id - 1].damage).ToString();
        }
        else
        {
            float currentHealth = UnitsDataBase.singleton.dinoUnitsSettings[id].health;
            _currentHealth.text = currentHealth.ToString();
            _differentHealth.text = "+" + (currentHealth - UnitsDataBase.singleton.dinoUnitsSettings[id - 1].health).ToString();
            float currentDamage = UnitsDataBase.singleton.dinoUnitsSettings[id].damage;
            _currentAttack.text = currentDamage.ToString();
            _differentAttack.text = "+" + (currentDamage - UnitsDataBase.singleton.dinoUnitsSettings[id - 1].damage).ToString();
        }
    }
    public void Close()
    {
        Sound.singleton.PlayClick();
        Destroy(this.gameObject);
    }
}
