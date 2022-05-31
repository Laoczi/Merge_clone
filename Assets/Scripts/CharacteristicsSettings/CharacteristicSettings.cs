using System;
using System.Linq;
using UnityEngine;
using UnityEngine.Assertions;

namespace CharacteristicsSettings
{
    /// <summary>
    /// Настройки отдельной характеристики.
    /// </summary>
    [Serializable]
    public class CharacteristicSettings
    {
        public CharacteristicType Type => _type;

        [SerializeField] 
        private CharacteristicType _type;
    
        [SerializeField] 
        private CharacteristicSetting[] _characteristicSettings;

        
        public float GetValue(int level)
        {
            var characteristic = _characteristicSettings.FirstOrDefault(characteristicSetting => characteristicSetting.Level == level);
            Assert.IsNotNull(characteristic, $"CharacteristicLevel is null, please check the levels of {_type} in " +
                                             "characteristicsSettingsProvider");
            
            return characteristic.Value;
        }
    
        public int GetUpgradeCost(int level)
        {
            var characteristic = _characteristicSettings.FirstOrDefault(characteristicSetting => characteristicSetting.Level == level);
            Assert.IsNotNull(characteristic, $"CharacteristicLevel is null, please check the levels of {_type} in " +
                                             "characteristicsSettingsProvider");
            
            return characteristic.UpgradeCost;
        }
        
        public int GetNumberOfLevels()
        {
            return _characteristicSettings.Length;
        }
    }
}