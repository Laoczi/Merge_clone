using System;
using UnityEngine;

public enum UnitType
{
    human,
    dino,
}
public class GridUnit : MonoBehaviour, IGrid
{
    //�������� ���������� � ����� � ������ ��
    [SerializeField] int _mergeLevel;
    [SerializeField] UnitType _speciesType;
    [field: SerializeField] BotType team;

    public int mergeLevel { get { return _mergeLevel; } }
    public UnitType type { get { return _speciesType; } }
    public Animator animator { get; private set; }

    BotType IGrid.team => team;

    void OnEnable()
    {
        if(_speciesType == UnitType.human) animator = Instantiate(UnitsDataBase.singleton.humanUnitsSettings[0], transform).GetComponent<Animator>();
        else animator = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[0], transform).GetComponent<Animator>();

        animator.transform.localPosition = Vector3.zero;

        _mergeLevel = 0;
    }
    public void UpdateMergeLevel()
    {
        if(_speciesType == UnitType.human)
        {
            if (mergeLevel + 1 >= UnitsDataBase.singleton.humanUnitsSettings.Length)
            {
                throw new Exception("���������� �������� ����� ���� ������������� ������ (" + UnitsDataBase.singleton.humanUnitsSettings.Length + ")");
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
                throw new Exception("���������� �������� ����� ���� ������������� ������ (" + UnitsDataBase.singleton.dinoUnitsSettings.Length + ")");
            }
            _mergeLevel++;
            Destroy(animator.gameObject);
            animator = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[mergeLevel], transform).GetComponent<Animator>();
            animator.transform.localPosition = Vector3.zero;
        }
    }
}