using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridUpdater : MonoBehaviour
{
    //добавление новых юнитов в сетку, а так же сохранение информации о текущем состоянии сетки при выключении игры
    public static float yOffset;
    [SerializeField] Cell[] _grid;
    [SerializeField] GridUnit _humanUnitPrefab;
    [SerializeField] GridUnit _dinoUnitPrefab;

    GridUnit flyingUnit;//юнит которого мы сейчас перетаскиваем
    bool _isDrag;

    public void AddHumanUnit()
    {
        int tryingCount = 0;
        while (tryingCount < _grid.Length)
        {
            tryingCount++;
            int randomCellIndex = Random.Range(0, _grid.Length);
            if (_grid[randomCellIndex].isAvailable)
            {
                _grid[randomCellIndex].SetUnit(Instantiate(_humanUnitPrefab));
                break;
            }
        }
    }
    public void AddDinoUnit()
    {
        int tryingCount = 0;
        while (tryingCount < _grid.Length)
        {
            tryingCount++;
            int randomCellIndex = Random.Range(0, _grid.Length);
            if (_grid[randomCellIndex].isAvailable)
            {
                _grid[randomCellIndex].SetUnit(Instantiate(_dinoUnitPrefab));
                break;
            }
        }
    }
    void OnApplicationQuit()
    {
        //сохраняем сетку
    }
}
