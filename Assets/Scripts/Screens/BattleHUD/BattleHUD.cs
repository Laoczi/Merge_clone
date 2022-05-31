using System;
using Enemies;
using ScreenManager.Core;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

namespace Screens.BattleHUD
{
    public class BattleHUD : UIScreen<BattleHUDContext>
    {
        [SerializeField]
        private Slider _healthBar;

        private IDisposable _healthBarDisposable;

        public override void Initialize(BattleHUDContext context)
        {
            _healthBarDisposable = GameObject.FindWithTag("Player").GetComponent<HealthController>()
                .Health.AsObservable().
                Subscribe(HealthUpdated);
        }

        private void HealthUpdated(float newHealth)
        {
            _healthBar.value = newHealth;
        }

        protected override void OnDestroy()
        {
            _healthBarDisposable.Dispose();
            base.OnDestroy();
        }
    }
}
