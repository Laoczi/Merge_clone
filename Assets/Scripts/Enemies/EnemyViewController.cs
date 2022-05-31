using Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace Enemies
{
    public class EnemyViewController : MonoBehaviour
    {
        [SerializeField] 
        private DeadEnemy _deadEnemyPrefab;

        [SerializeField] 
        private int _deadEnemyCount = 5;
        
        private MonoBehaviourPool<DeadEnemy> _deadEnemyPool;
        private CompositeDisposable _subscriptions;
        
        private void Awake()
        {
            _deadEnemyPool = new MonoBehaviourPool<DeadEnemy>(_deadEnemyPrefab, transform, _deadEnemyCount);
            
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<EnemyDiedEvent>(EnemyDiedEventHandler)
            };
        }
        
        private void EnemyDiedEventHandler(EnemyDiedEvent eventData)
        {
            var deadEnemy = _deadEnemyPool.Take();
            deadEnemy.transform.position = eventData.Enemy.transform.position;
            
            eventData.Enemy.gameObject.SetActive(false);
        }
        
        private void OnDestroy()
        {
            _subscriptions.Dispose();
        }
    }
}