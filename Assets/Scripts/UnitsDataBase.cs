using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitsDataBase : MonoBehaviour
{
    public static UnitsDataBase singleton;

    [field: SerializeField] public GameObject hitEffect;
    [field: SerializeField] public UnitSettings[] humanUnitsSettings { get; private set; }
    [field: SerializeField] public UnitSettings[] dinoUnitsSettings { get; private set; }

    private void Awake()
    {
        singleton = this;
    }
}
