using System;
using UnityEngine;

namespace CharacteristicsSettings
{
    /// <summary>
    /// Одна настройка характеристики.
    /// </summary>
    [Serializable]
    public class CharacteristicSetting
    {
        public int Level => _level;
        public float Value => _value;
        public int UpgradeCost => _upgradeCost;

        [SerializeField]
        private int _level;
    
        [SerializeField]
        private float _value;
    
        [SerializeField]
        private int _upgradeCost;
    }
}