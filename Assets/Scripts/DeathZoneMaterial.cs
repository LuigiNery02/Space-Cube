using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class DeathZoneMaterial : MonoBehaviour, IDataPersistance
{
    [Header("Materials")]
    [SerializeField]
    private Material[] _materials;

    private int _materialID;
    public MeshRenderer _renderer;

    public void LoadData(GameData data)
    {
        _materialID = data.materialID;
    }

    public void SaveData(GameData data)
    {
        data.materialID = _materialID;
    }

    private void Start()
    {
        _renderer = gameObject.GetComponent<MeshRenderer>();
        CheckMaterialID();
    }

    private void CheckMaterialID()
    {
       _renderer.material = _materials[_materialID];
    }

    public void GetMaterialID(int id)
    {
        
        _materialID = id;
        CheckMaterialID();
    }
}
