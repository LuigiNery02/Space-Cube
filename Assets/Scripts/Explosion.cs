using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class Explosion : MonoBehaviour
{
    [SerializeField]
    private ParticleSystem cubeExplosion; //impact vfx

    public static Explosion Instance;

    private void Awake()
    {
        Instance = this;
    }

    public void PlayCubeExplosionFX(Vector3 position) //set the vfx position and play
    {
        cubeExplosion.transform.position = position;
        cubeExplosion.Play();
    }
}
