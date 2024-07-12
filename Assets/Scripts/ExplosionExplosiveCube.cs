using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class ExplosionExplosiveCube : MonoBehaviour
{
    public Vector3 startScale;
    public Vector3 finalScale;
    private float _duration = 0.35f;

    private float _currentTime = 0f;

    private CubeSpawner _cubeSpawner; //CubeSpawner

    private SFX _sfx; //SFX

    private void Start()
    {
        _cubeSpawner = GameObject.Find("CubeSpawner").GetComponent<CubeSpawner>(); //find the CubeSpawner in the scene
        _sfx = GameObject.Find("SFX").GetComponent<SFX>(); //find the SFX in the scene
    }

    private void FixedUpdate()
    {
        _currentTime += Time.deltaTime;

        float progression = _currentTime / _duration;
        transform.localScale = Vector3.Lerp(startScale, finalScale, progression);
    }
    private void OnCollisionEnter(Collision collision)
    {
        Cube cube = collision.gameObject.GetComponent<Cube>();

        //adds one of two cubes to the pool
        Vector3 contactPoint = collision.contacts[0].point;
        if (cube.GetComponent<ExplosiveCube>())
        {
            ObjectPool.explosiveCubes.Add(cube.gameObject);
        }
        else if (cube.GetComponent<XCube>())
        {
            ObjectPool.xCubes.Add(cube.gameObject);
        }
        else if (cube.GetComponent<PlayerCube>() && cube.GetComponent<ExplosiveCube>() == null && cube.GetComponent<XCube>() == null)
        {
            ObjectPool.playerCubes.Add(cube.gameObject);
        }
        else
        {
            ObjectPool.cubes.Add(cube.gameObject);
        }
        cube.gameObject.SetActive(false);

        _cubeSpawner.ScoreByExplosiveCube(cube.currentNumber);

        Collider[] surroundedCubes = Physics.OverlapSphere(contactPoint, 2f);
        float explosionForce = 400f;
        float explosionRadius = 1.5f;

        foreach (Collider coll in surroundedCubes)
        {
            if (coll.attachedRigidbody != null)
                coll.attachedRigidbody.AddExplosionForce(explosionForce, contactPoint, explosionRadius);
        }

        //play the impact vfx
        Explosion.Instance.PlayCubeExplosionFX(contactPoint);

        //play the impact sfx
        _sfx.score.Invoke();
    }
}
