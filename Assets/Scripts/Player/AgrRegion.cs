using System;
using Enemies;
using GlobalConstants;
using UnityEngine;

namespace Player
{
    public class AgrRegion : MonoBehaviour
    {
        public event Action<Enemy> OnEnemyGetIntoAgrRegion;
        public event Action<Enemy> OnEnemyGetOutAgrRegion;
    
        private void OnTriggerEnter(Collider collider)
        {
            if (collider.gameObject.CompareTag(Tags.ENEMY_TAG))
            {
                OnEnemyGetIntoAgrRegion?.Invoke(collider.gameObject.GetComponent<Enemy>());
            }
        }
    
        private void OnTriggerExit(Collider collider)
        {
            if (collider.gameObject.CompareTag(Tags.ENEMY_TAG))
            {
                OnEnemyGetOutAgrRegion?.Invoke(collider.gameObject.GetComponent<Enemy>());
            }
        }
    }
}