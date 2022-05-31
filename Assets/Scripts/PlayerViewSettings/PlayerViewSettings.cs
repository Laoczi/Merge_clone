using System;
using UnityEngine;

namespace DefaultNamespace
{
    [Serializable]
    public class PlayerViewSettings
    {
        public int Level => _level;
        public int Value => _value;
        public int PowerCapacity => _powerCapacity;
        public Player.Player Player => _player;

        [SerializeField] 
        private int _level;

        [SerializeField] 
        private int _value;

        [SerializeField] 
        private int _powerCapacity;

        [SerializeField] 
        private Player.Player _player;
    }
}