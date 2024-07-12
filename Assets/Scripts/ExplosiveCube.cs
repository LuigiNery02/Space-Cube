using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class ExplosiveCube : PlayerCube
{
    [Header("Eplosion VFX")]
    [SerializeField]
    private GameObject _explosionVfx;

    public void ActiveExplosion()
    {
        StartCoroutine(Explosion());
    }

    IEnumerator Explosion()
    {
        _explosionVfx.SetActive(true);
        _explosionVfx.transform.SetParent(null);
        _cubeMeshRenderer.enabled = false;
        BoxCollider bc = gameObject.GetComponent<BoxCollider>();
        bc.enabled = false;
        yield return new WaitForSeconds(1.05f);
        _cubeMeshRenderer.enabled = true;
        bc.enabled = true;
        _explosionVfx.transform.SetParent(gameObject.transform);
        _explosionVfx.transform.localPosition = Vector3.zero;
        _explosionVfx.transform.localScale = Vector3.one;
        gameObject.SetActive(false);
        _explosionVfx.SetActive(false);
        ObjectPool.explosiveCubes.Add(gameObject);
    }
}
