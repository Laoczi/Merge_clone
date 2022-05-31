using Enemies;
using GlobalConstants;
using UnityEngine;

namespace Player
{
    public class DamageZone : MonoBehaviour
    {
        [SerializeField] 
        private int _damage = 1;

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.tag == Tags.ENEMY_TAG)
            {
                other.GetComponent<HealthController>().TakeDamage(_damage);
            }
        }
    }
}