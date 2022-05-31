using System;
using Events;
using SimpleEventBus.Disposables;
using UnityEngine;

namespace GameControllers
{
    public class ParticlesController : MonoBehaviour
    {
        [SerializeField] 
        private ParticleSystem _smokeParticles;

        private CompositeDisposable _subscriptions;

        private void Awake()
        {
            _subscriptions = new CompositeDisposable
            {
                EventStreams.UserInterface.Subscribe<PlayerChangedViewEvent>(PlayerChangedViewEventHandler)
            };
        }

        private void PlayerChangedViewEventHandler(PlayerChangedViewEvent eventData)
        {
            PlayAppearanceParticles();
        }

        private void PlayAppearanceParticles()
        {
            _smokeParticles.Play();
        }

        private void OnDestroy()
        {
            _subscriptions?.Dispose();
        }
    }
}