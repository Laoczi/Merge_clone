using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGrid : MonoBehaviour
{
    public static EnemyGrid singleton;

    [SerializeField] EnemyInCell _enemyDinoPrefab;
    [SerializeField] EnemyInCell _enemyHumanPrefab;

    [SerializeField] Transform[] _gridSpawnPoints;
    List<EnemyInCell> _enemysOnScene = new List<EnemyInCell>();
    [field: SerializeField] public EnemyLevelSettings[] levels { get; private set; }
    private void Awake()
    {
        singleton = this;
    }
    public void Spawn(int level)
    {
        if (level > levels.Length) level = levels.Length - 1;

        EnemyLevelSettings currentLevelSettings = null;

        for (int i = 0; i < levels.Length; i++)
        {
            if (levels[i].levelID == level) currentLevelSettings = levels[i];
        }

        for (int i = 0; i < currentLevelSettings.enemys.Length; i++)
        {
            GridEnemySettings enemySettings = currentLevelSettings.enemys[i];
            EnemyInCell enemyObject;

            if(enemySettings.type == SpeciesType.dino) enemyObject = Instantiate(_enemyDinoPrefab, _gridSpawnPoints[enemySettings.positionInGrid].transform.position, Quaternion.Euler(0,180,0));
            else enemyObject = Instantiate(_enemyHumanPrefab, _gridSpawnPoints[enemySettings.positionInGrid].transform.position, Quaternion.Euler(0, 180, 0));

            enemyObject.Init(enemySettings.positionInGrid, TeamType.Enemy, enemySettings.type, enemySettings.level);

            _enemysOnScene.Add(enemyObject);
        }
    }
    public void DeleteEnemys()
    {
        for (int i = 0; i < _enemysOnScene.Count; i++)
        {
            Destroy(_enemysOnScene[i].gameObject);
        }

        _enemysOnScene.Clear();
    }
    public float GetOverallEnemyHealth()
    {
        if (_enemysOnScene.Count == 0) throw new System.Exception("there is no enemys on scene");

        float overallHealth = 0;
        for (int i = 0; i < _enemysOnScene.Count; i++)
        {
            if (_enemysOnScene[i].type == SpeciesType.dino) overallHealth += UnitsDataBase.singleton.dinoUnitsSettings[_enemysOnScene[i].level].health;
            else overallHealth += UnitsDataBase.singleton.humanUnitsSettings[_enemysOnScene[i].level].health;
        }

        return overallHealth;
    }
}
