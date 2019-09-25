using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RocketTowerMultiClass : BaseTurretClass
{
    [SerializeField] GameObject closestObject;
    float timeCount = 0;

    private void Start()
    {
        canShoot = true;
        bullet = null;
        _radius = 25;
    }

    override protected void Update()
    {
        if (canShoot)
        {
            StartCoroutine(Shoot());
        }

        base.Update();
        if (collidersInRange.Length > 0)
        {
            print(collidersInRange[0].gameObject.name);
        }
        float distance = _radius;
        foreach (Collider col in collidersInRange)
        {
            if (closestObject)
            {
                Vector3 dir = closestObject.transform.position - transform.position;
                Quaternion lookRotation = Quaternion.LookRotation(dir);
                Vector3 rotation = Quaternion.Lerp(transform.rotation, lookRotation, turnSpeed * Time.deltaTime).eulerAngles;
                transform.rotation = Quaternion.Euler(rotation.x, rotation.y, rotation.z);
                timeCount += Time.deltaTime;
            }
        }
    }

    private IEnumerator Shoot()
    {
        canShoot = false;
        int currentEnemyInArray = 0;
        int currentFirePoint = 0;
        for(int i = 0; i < collidersInRange.Length; i++)
        {
            closestObject = collidersInRange[0].gameObject;
            //Instantiate(missile, firePoint[currentFirePoint].position, firePoint[currentFirePoint].rotation);
            currentEnemyInArray += 1;
            currentFirePoint += 1;
            i++;
            yield return new WaitForSeconds(0.5f);
        }

        yield return new WaitForSeconds(1f); 

        canShoot = true;
    }
}
