using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Assertions;

namespace DefaultNamespace
{
    [CreateAssetMenu(fileName = "PlayerViewSettingsProvider", menuName = "PlayerViewSettingsProvider")]
    public class PlayerViewSettingsProvider : ScriptableObject, IPlayerViewSettingsProvider
    {
        [SerializeField] 
        private PlayerViewSettings[] _playerViewSettings;
    
        private Dictionary<int, PlayerViewSettings> _playerViewSettingsByLevel;
        private Dictionary<int, int> _levelByValue;

        public void Initialize()
        {
            _playerViewSettingsByLevel = new Dictionary<int, PlayerViewSettings>();
            _levelByValue = new Dictionary<int, int>();

            foreach (var playerViewSetting in _playerViewSettings)
            {
                _playerViewSettingsByLevel[playerViewSetting.Level] = playerViewSetting;
                _levelByValue[playerViewSetting.Value] = playerViewSetting.Level;
            }
        }

        public Player.Player GetPrefab(int level)
        {
            if (IsMaxLevel(level))
            {
                return _playerViewSettings[^1].Player;
            }
            
            var playerSettings = GetSettings(level);
            return playerSettings.Player;
        }

        public int GetLevel(int value)
        {
            var values = _levelByValue.Keys.ToList();

            if (value < values[0])
            {
                return _playerViewSettings[0].Level;
            }

            for (var i = 1; i < values.Count; i++)
            {
                if (value >= values[i - 1] && value < values[i])
                {
                    return _playerViewSettings[i].Level;
                }
            }
            return _playerViewSettings[^1].Level;
        }

        public int GetPowerCapacity(int level)
        {
            if (IsMaxLevel(level))
            {
                return _playerViewSettings[^1].PowerCapacity;
            }
            
            var playerSettings = GetSettings(level);
            return playerSettings.PowerCapacity;
        }
        
        public int GetMaxPower(int level)
        {
            if (IsMaxLevel(level))
            {
                return _playerViewSettings[^1].Value;
            }
            
            var playerSettings = GetSettings(level);
            return playerSettings.Value;
        }

        private PlayerViewSettings GetSettings(int level)
        {
            Assert.IsTrue(_playerViewSettingsByLevel.ContainsKey(level), 
                $"There is no level {level}");
            
            var playerSettings = _playerViewSettingsByLevel[level];
            return playerSettings;
        }

        private bool IsMaxLevel(int level)
        {
            return level >= _playerViewSettings.Length;
        }
    }
}