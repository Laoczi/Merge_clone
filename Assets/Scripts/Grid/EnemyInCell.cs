using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyInCell : MonoBehaviour, IGrid
{
    public int positionInGrid { get; private set; }
    public TeamType team { get; private set; }
    public SpeciesType type { get; private set; }
    public int level { get; private set; }
    public Animator animator { get; private set; }

    TeamType IGrid.team => team;

    public void Init(int positionInGrid,TeamType team, SpeciesType type, int level)
    {
        this.positionInGrid = positionInGrid;
        this.team = team;
        this.type = type;
        this.level = level;

        if (this.type == SpeciesType.human) animator = Instantiate(UnitsDataBase.singleton.humanUnitsSettings[this.level], transform).GetComponent<Animator>();
        else animator = Instantiate(UnitsDataBase.singleton.dinoUnitsSettings[this.level], transform).GetComponent<Animator>();

        animator.transform.localPosition = Vector3.zero;
    }
}

interface IGrid
{
    public TeamType team { get; }
    public int level { get; }
}
