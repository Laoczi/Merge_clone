using System;
using UnityEngine;

public enum SpeciesType
{
    human,
    dino,
}
public class UnitInCell : MonoBehaviour, IGrid
{
    [SerializeField] int _mergeLevel;
    [SerializeField] SpeciesType _speciesType;
    [field: SerializeField] TeamType team;

    public int level { get { return _mergeLevel; } }
    public SpeciesType type { get { return _speciesType; } }
    public int cellIndex { get; private set; }
    public Animator animator { get; private set; }

    TeamType IGrid.team => team;

    public void SetAnimatorByOwnLevel()
    {
        UnitSettings settings;

        if(_speciesType == SpeciesType.human) settings = Instantiate(UnitsDataBase.singleton.humanUnitsSettings[level], transform);
        else settings = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[level], transform);

        animator = settings.animator;

        settings.enemyHealthBarCanvas.SetActive(false);
        settings.unitHealthBar.fillAmount = 1;

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

        if (_speciesType == SpeciesType.human)
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
