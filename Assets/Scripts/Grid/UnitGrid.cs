using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitGrid : MonoBehaviour
{
    public static UnitGrid singleton;

    public static float yOffset;
    [SerializeField] Cell[] _grid;
    [SerializeField] UnitInCell _humanUnitPrefab;
    [SerializeField] UnitInCell _dinoUnitPrefab;
    List<UnitInCell> _unitsOnScene = new List<UnitInCell>();
    GridData data = new GridData();

    private void Awake()
    {
        singleton = this;

        data.units = new List<UnitInGrid>();

        for (int i = 0; i < _grid.Length; i++)
        {
            _grid[i].SetIndex(i);
        }
    }
    private void Start()
    {
        //PlayerPrefs.DeleteKey("savedGrid");
        //Debug.Log(PlayerPrefs.GetString("savedGrid"));
        SetSavedGridOnScene();
    }
    void SaveCurrentGrid()
    {
        GridData newData = new GridData();
        newData.units = new List<UnitInGrid>();

        for (int i = 0; i < _unitsOnScene.Count; i++)
        {
            if(_unitsOnScene[i] != null)
            {
                UnitInCell unit = _unitsOnScene[i];
                newData.units.Add(new UnitInGrid(unit.cellIndex, unit.level, unit.type));
            }
        }

        PlayerPrefs.SetString("savedGrid", JsonUtility.ToJson(newData, false));
    }
    void SetSavedGridOnScene()
    {
        if (PlayerPrefs.HasKey("savedGrid") == false) return;

        GridData gridData = JsonUtility.FromJson<GridData>(PlayerPrefs.GetString("savedGrid"));

        for (int i = 0; i < gridData.units.Count; i++)
        {
            UnitInCell unit;
            UnitInGrid gUnit = gridData.units[i];

            if (gUnit.type == SpeciesType.human) unit = Instantiate(_humanUnitPrefab);
            else unit = Instantiate(_dinoUnitPrefab);

            unit.SetLevel(gUnit.level);
            unit.SetAnimatorByOwnLevel();
            _grid[gUnit.cellIndex].SetUnit(unit);
            _unitsOnScene.Add(unit);
        }
    }
    public bool AddHumanUnit()
    {
        if (_unitsOnScene.Count == _grid.Length)
        {
            Debug.Log("grid is full");
            return false;
        }

        while (true)
        {
            int randomCellIndex = Random.Range(0, _grid.Length);
            if (_grid[randomCellIndex].isAvailable)
            {
                UnitInCell unit = Instantiate(_humanUnitPrefab);
                unit.SetAnimatorByOwnLevel();
                _grid[randomCellIndex].SetUnit(unit);
                _unitsOnScene.Add(unit);
                return true;
            }
        }
    }
    public bool AddDinoUnit()
    {
        if (_unitsOnScene.Count == _grid.Length)
        {
            Debug.Log("grid is full");
            return false;
        }

        while (true)
        {
            int randomCellIndex = Random.Range(0, _grid.Length);
            if (_grid[randomCellIndex].isAvailable)
            {
                UnitInCell unit = Instantiate(_dinoUnitPrefab);
                unit.SetAnimatorByOwnLevel();
                _grid[randomCellIndex].SetUnit(unit);
                _unitsOnScene.Add(unit);
                return true;
            }
        }
    }
    public float GetOverrallUnitsHealth()
    {
        float overallHealth = 0;

        for (int i = 0; i < _unitsOnScene.Count; i++)
        {
            if (_unitsOnScene[i].type == SpeciesType.dino) overallHealth += UnitsDataBase.singleton.dinoUnitsSettings[_unitsOnScene[i].level].health;
            else overallHealth += UnitsDataBase.singleton.humanUnitsSettings[_unitsOnScene[i].level].health;
        }
        return overallHealth;
    }
    public void DeleteUnits()
    {
        SaveCurrentGrid();

        for (int i = 0; i < _unitsOnScene.Count; i++)
        {
            Destroy(_unitsOnScene[i].gameObject);
        }

        _unitsOnScene.Clear();
    }
    private void OnApplicationQuit()
    {
        SaveCurrentGrid();
    }
}
[System.Serializable]
public struct GridData
{
    [SerializeField] public List<UnitInGrid> units;
}
[System.Serializable]
public struct UnitInGrid
{
    public UnitInGrid(int cellIndex, int level, SpeciesType type)
    {
        this.cellIndex = cellIndex;
        this.level = level;
        this.type = type;
    }

    [SerializeField] public int cellIndex;
    [SerializeField] public int level;
    [SerializeField] public SpeciesType type;
}
