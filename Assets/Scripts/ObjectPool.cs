using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ObjectPool;

sealed class ObjectPool : MonoBehaviour
{
    public static List<GameObject> xCubes;
    public static List<GameObject> explosiveCubes;
    public static List<GameObject> playerCubes;
    public static List<GameObject> cubes;

    public static ObjectPool Instance;

    private void Awake()
    {
        Instance = this;
        xCubes = new List<GameObject>();
        explosiveCubes = new List<GameObject>();
        playerCubes = new List<GameObject>();
        cubes = new List<GameObject>();
    }
}
