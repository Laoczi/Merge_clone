using UnityEngine;

namespace MergeFeature
{
    /// <summary>
    /// Хранит всю информацию о предмете, его уровень, стоимость и т.д.
    /// </summary>
    [CreateAssetMenu(fileName = "Merge Item Data", menuName = "MergeFeature/New Merge Item", order = 0)]
    public class ItemData : ScriptableObject
    {
        public int Level;
        public int Value;
    }
}
