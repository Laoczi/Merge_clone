using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawn : MonoBehaviour
{
    [SerializeField] GridEnemy _enemyDinoPrefab;
    [SerializeField] GridEnemy _enemyHumanPrefab;

    [SerializeField] Transform[] _gridSpawnPoints;
    List<GridEnemy> _enemysOnScene = new List<GridEnemy>();
    [field: SerializeField] public EnemyLevelSettings[] levels { get; private set; }

    public void Spawn(int level)
    {
        EnemyLevelSettings currentLevelSettings = null;

        for (int i = 0; i < levels.Length; i++)
        {
            if (levels[i].levelID == level) currentLevelSettings = levels[i];
        }

        for (int i = 0; i < currentLevelSettings.enemys.Length; i++)
        {
            GridEnemySettings enemySettings = currentLevelSettings.enemys[i];
            GridEnemy enemyObject;

            if(enemySettings.type == UnitType.dino) enemyObject = Instantiate(_enemyDinoPrefab, _gridSpawnPoints[enemySettings.positionInGrid].transform.position, Quaternion.Euler(0,180,0));
            else enemyObject = Instantiate(_enemyHumanPrefab, _gridSpawnPoints[enemySettings.positionInGrid].transform.position, Quaternion.Euler(0, 180, 0));

            enemyObject.Init(enemySettings.positionInGrid, BotType.Enemy, enemySettings.type, enemySettings.level);

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
}
