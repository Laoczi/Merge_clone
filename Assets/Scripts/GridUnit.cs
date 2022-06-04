using System;
using UnityEngine;

public enum UnitType
{
    human,
    dino,
}
public class GridUnit : MonoBehaviour
{
    //хранение информации о юните и апдейт ее
    [SerializeField] int _mergeLevel;
    [SerializeField] UnitType _speciesType;

    public int mergeLevel { get { return _mergeLevel; } }
    public UnitType type { get { return _speciesType; } }
    public Animator animator { get; private set; }

    void OnEnable()
    {
        GridUpdater.onStartGame += OnStartGame;

        if(_speciesType == UnitType.human) animator = Instantiate(UnitsDataBase.singleton.humanUnitsSettings[0], transform).GetComponent<Animator>();
        else animator = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[0], transform).GetComponent<Animator>();

        animator.transform.localPosition = Vector3.zero;

        _mergeLevel = 0;
    }
    private void OnDisable()
    {
        GridUpdater.onStartGame -= OnStartGame;
    }
    public void UpdateMergeLevel()
    {
        if(_speciesType == UnitType.human)
        {
            if (mergeLevel + 1 >= UnitsDataBase.singleton.humanUnitsSettings.Length)
            {
                throw new Exception("Невозможно улучшить юнита выше максимального уровня (" + UnitsDataBase.singleton.humanUnitsSettings.Length + ")");
            }
            _mergeLevel++;
            Destroy(animator.gameObject);
            animator = Instantiate(UnitsDataBase.singleton.humanUnitsSettings[mergeLevel], transform).GetComponent<Animator>();
            animator.transform.localPosition = Vector3.zero;
        }
        else
        {
            if (mergeLevel + 1 >= UnitsDataBase.singleton.dinoUnitsSettings.Length)
            {
                throw new Exception("Невозможно улучшить юнита выше максимального уровня (" + UnitsDataBase.singleton.dinoUnitsSettings.Length + ")");
            }
            _mergeLevel++;
            Destroy(animator.gameObject);
            animator = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[mergeLevel], transform).GetComponent<Animator>();
            animator.transform.localPosition = Vector3.zero;
        }
    }
    void OnStartGame()
    {
        enabled = false;
    }
}
