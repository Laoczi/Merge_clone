using System;
using UnityEngine;

public enum UnitType
{
    human,
    dino,
}
public class UnitInCell : MonoBehaviour, IGrid
{
    [SerializeField] int _mergeLevel;
    [SerializeField] UnitType _speciesType;
    [field: SerializeField] BotType team;

    public int level { get { return _mergeLevel; } }
    public UnitType type { get { return _speciesType; } }
    public int cellIndex { get; private set; }
    public Animator animator { get; private set; }

    BotType IGrid.team => team;

    public void SetAnimatorByOwnLevel()
    {
        if(_speciesType == UnitType.human) animator = Instantiate(UnitsDataBase.singleton.humanUnitsSettings[level], transform).GetComponent<Animator>();
        else animator = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[level], transform).GetComponent<Animator>();

        animator.transform.localPosition = Vector3.zero;
    }
    public void SetCellIndex(int value)
    {
        if (value < 0) throw new Exception("cell index cant be less than zero");

        cellIndex = value;
    }
    public void SetLevel(int value)
    {
        if (value < 0) throw new Exception("level cant be less than zero");

        _mergeLevel = value;
    }
    public void UpdateMergeLevel()
    {
        _mergeLevel++;
        Destroy(animator.gameObject);

        if (_speciesType == UnitType.human)
        {
            if (_mergeLevel >= UnitsDataBase.singleton.humanUnitsSettings.Length)
            {
                throw new Exception("impossible update unit level more than (" + UnitsDataBase.singleton.humanUnitsSettings.Length + ")");
            }
            animator = Instantiate(UnitsDataBase.singleton.humanUnitsSettings[level], transform).GetComponent<Animator>();
        }
        else
        {
            if (_mergeLevel >= UnitsDataBase.singleton.dinoUnitsSettings.Length)
            {
                throw new Exception("impossible update unit level more than (" + UnitsDataBase.singleton.dinoUnitsSettings.Length + ")");
            }
            animator = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[level], transform).GetComponent<Animator>();
        }

        animator.transform.localPosition = Vector3.zero;
    }
}
