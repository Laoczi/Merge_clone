using System;
using UnityEngine;

public class Cell : MonoBehaviour
{
    //контроль перемещени€ и мерджа
    public static event Action<SpeciesType, int> onMerge;
    public bool isAvailable { get; private set; }
    public UnitInCell unit { get; private set; }
    public int index { get; private set; }

    bool _isDrag;
    float _yOffset = 0;
    bool _isStartGame = false;

    private void Awake()
    {
        isAvailable = true;
        unit = null;
    }
    private void OnEnable()
    {
        GameManager.onStartFight += OnStartFight;
    }
    private void OnDisable()
    {
        GameManager.onStartFight -= OnStartFight;
    }
    void OnStartFight()
    {
        _isStartGame = true;
    }
    void OnResetGame()
    {
        _isStartGame = false;
    }
    public void SetIndex(int value)
    {
        if (value < 0) throw new Exception("cell index cant be less than zero");

        index = value;
    }

    private void OnMouseDown()
    {
        if (_isStartGame) return;
        if (unit == null) return;

        if(unit.type == SpeciesType.human) unit.animator.SetBool("Hold", true);
        _isDrag = true;
    }
    private void OnMouseDrag()
    {
        if (_isStartGame) return;
        if (unit == null) return;

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if(Physics.Raycast(ray, out hit))
        {
            Vector3 dragUnitPosition = hit.point;
            dragUnitPosition.y = _yOffset;

            unit.transform.position = dragUnitPosition;
        }
    }
    private void OnMouseUp()
    {
        if (_isStartGame) return;
        if (unit == null) return;

        if (_isDrag == false) return;

        _isDrag = false;
        if (unit.type == SpeciesType.human) unit.animator.SetBool("Hold", false);

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            if (hit.collider.CompareTag("Cell"))
            {
                Cell cell = hit.collider.GetComponent<Cell>();
                
                if(cell != this)
                {               
                    if ((cell.isAvailable || (cell.unit.level == unit.level && cell.unit.type == unit.type)))
                    {
                        if(cell.unit != null)
                        {
                            if(cell.unit.type == SpeciesType.human && cell.unit.level <= 9)//new max merge level is 11, so, if this unit have level more than 9 we cant merge
                            {
                                cell.SetUnit(unit);
                                NullUnitLink();
                                return;
                            }
                            if (cell.unit.type == SpeciesType.dino && cell.unit.level <= 10)
                            {
                                cell.SetUnit(unit);
                                NullUnitLink();
                                return;
                            }
                        }
                        else
                        {
                            cell.SetUnit(unit);
                            NullUnitLink();
                            return;
                        }
                    }
                }
            }
        }

        unit.transform.position = new Vector3(transform.position.x, _yOffset, transform.position.z);
    }

    public void SetUnit(UnitInCell unit)//добавл€ем обьект в €чейку
    {
        if (this.unit == null)
        {
            this.unit = unit;
            this.unit.SetCellIndex(index);
            this.unit.transform.position = new Vector3(transform.position.x, _yOffset, transform.position.z);
        }
        else
        {
            //тут мерджим, при неудаче выкидываем ошибку
            if (this.unit.level == unit.level && this.unit.type == unit.type)
            {
                this.unit.UpdateMergeLevel();
                onMerge?.Invoke(this.unit.type, this.unit.level);
                Destroy(unit.gameObject);
            }
            else throw new Exception("попытка слить юнитов разных уровней или разного типа");
        }
        isAvailable = false;
    }
    void NullUnitLink()//убирает обьект из €чейки
    {
        if (unit == null) throw new Exception("¬ €чейке нет юнита чтобы убрать его");

        unit = null;
        isAvailable = true;
    }
}
