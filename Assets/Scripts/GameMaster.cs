using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;

sealed class GameMaster : MonoBehaviour
{

    public static GameMaster Instance { get; private set; }

    [SerializeField]
    private float _skyBoxSpeed; //speed of the skybox rotation

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    private void FixedUpdate()
    {
        RenderSettings.skybox.SetFloat("_Rotation", Time.time *  _skyBoxSpeed); //rotate the skybox
    }
}
