using UnityEngine;

namespace Enemies
{
    public class DeadEnemy : MonoBehaviour
    {
        [SerializeField] 
        private float _force;

        [SerializeField] 
        private Rigidbody _rigidbody;

        private void OnEnable()
        {
            _rigidbody.AddRelativeForce(Vector3.back * _force);
        }
    }
}