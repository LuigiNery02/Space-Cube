using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

sealed class SFX : MonoBehaviour
{
    [SerializeField]
    public UnityEvent score;
    [SerializeField]
    public UnityEvent throwCube;
    [SerializeField]
    public UnityEvent explosion;
}
