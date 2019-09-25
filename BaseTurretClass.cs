using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseTurretClass : MonoBehaviour
{
    [SerializeField] protected float _radius;
    [SerializeField] private LayerMask _layer;

    private GameObject projectile;
    [SerializeField] protected Transform[] firePoint;
    [SerializeField] protected GameObject muzzleFlash;
    [SerializeField] protected GameObject bullet;
    [SerializeField] protected GameObject missile;

    protected bool canShoot;
    protected int turnSpeed = 5;

    protected Collider[] collidersInRange;

    virtual protected void Update()
    {
        collidersInRange = Physics.OverlapSphere(transform.position, _radius, _layer);
    }

    private void OnDrawGizmos()
    {
        Gizmos.DrawWireSphere(transform.position, _radius);
    }
}
