using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ObjectPool;

sealed class ObjectPool : MonoBehaviour
{
    public static List<GameObject> playerCubes;
    public static List<GameObject> cubes;

    public static ObjectPool Instance;

    private void Awake()
    {
        Instance = this;
        playerCubes = new List<GameObject>();
        cubes = new List<GameObject>();
    }
}
