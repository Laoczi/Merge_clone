using UnityEngine;

namespace Enemies
{
    [RequireComponent(typeof(Collider))]
    public class Weapon: MonoBehaviour
    {
        private int _damage = 10;
        
        public void Initialize(int damage)
        {
            _damage = damage;
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("Player"))
            {
                other.GetComponent<HealthController>().TakeDamage(_damage);
            }
        }
    }
}
