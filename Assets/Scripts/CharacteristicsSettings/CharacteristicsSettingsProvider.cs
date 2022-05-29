using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

namespace CharacteristicsSettings
{
    /// <summary>
    /// Класс с настройками всех характеристик.
    /// </summary>
    [CreateAssetMenu(fileName = "CharacteristicsSettingsProvider", menuName = "CharacteristicsSettingsProvider")]
    public class CharacteristicsSettingsProvider : ScriptableObject, ICharacteristicsSettingsProvider
    {
        [SerializeField] 
        private CharacteristicSettings[] _characteristicsSettings;
    
        private Dictionary<CharacteristicType, CharacteristicSettings> _characteristicSettingsByType;

        
        public void Initialize()
        {
            _characteristicSettingsByType = new ();
        
            foreach (var characteristicSettings in _characteristicsSettings)
            {
                _characteristicSettingsByType[characteristicSettings.Type] = characteristicSettings;
            }
        }

        public float GetValue(CharacteristicType type, int level)
        {
            var characteristic = GetSettings(type);
            Assert.IsNotNull(characteristic, $"Characteristic is null, please check the type {type} in " +
                                             "characteristicsSettingsProvider");
            
            return characteristic.GetValue(level);
        }

        public int GetUpgradeCost(CharacteristicType type, int level)
        {
            var characteristic = GetSettings(type);
            Assert.IsNotNull(characteristic, $"Characteristic is null, please check the type {type} in " +
                                             "characteristicsSettingsProvider");
            
            return characteristic.GetUpgradeCost(level);
        }
        
        public bool IsUpgradedToMaxLevel(CharacteristicType type, int level)
        {
            var characteristicSettings = GetSettings(type);
            return level >= characteristicSettings.GetNumberOfLevels();
        }

        private CharacteristicSettings GetSettings(CharacteristicType type)
        {
            return _characteristicSettingsByType[type];
        }
    }
}