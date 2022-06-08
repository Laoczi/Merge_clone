using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyLevelSettings : MonoBehaviour
{
    [field: SerializeField] public int levelID { get; private set; }

    [field: SerializeField] public GridEnemySettings[] enemys { get; private set; }
}
[System.Serializable]
public class GridEnemySettings
{
    [field: SerializeField, Range(0, 14)] public int positionInGrid { get; private set; }
    [field: SerializeField] public SpeciesType type { get; private set; }
    [field: SerializeField] public int level { get; private set; }
    public Animator animator { get; private set; }
}
