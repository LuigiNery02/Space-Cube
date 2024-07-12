using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class WallMaterial : MonoBehaviour, IDataPersistance
{
    [Header("Materials")]
    [SerializeField]
    private Material[] _materials;

    private int _materialID;
    public Renderer _renderer;

    public void LoadData(GameData data)
    {
        _materialID = data.wallMaterialID;
    }

    public void SaveData(GameData data)
    {
        data.wallMaterialID = _materialID;
    }

    private void Start()
    {
        _renderer = gameObject.GetComponent<Renderer>();
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
