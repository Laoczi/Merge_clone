using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitsDataBase : MonoBehaviour
{
    public static UnitsDataBase singleton;

    [field: SerializeField] public UnitInCell humanUnitToSpawn;
    [field: SerializeField] public UnitSettings[] humanUnitsSettings { get; private set; }

    [field: SerializeField] public UnitInCell dinoUnitToSpawn;
    [field: SerializeField] public UnitSettings[] dinoUnitsSettings { get; private set; }

    private void Awake()
    {
        singleton = this;
    }
}
