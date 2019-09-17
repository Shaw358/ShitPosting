using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class turretClass : MonoBehaviour
{
    // maak refrence naar turret class die GEEN mono behaviour heeft
    public pathFollower[] enemies;
    public GameObject closestObject;

    void Start()
    {
        enemies = GameObject.Find("EnemySpawner").GetComponentsInChildren<pathFollower>();
        //Mystats = new [hier de class naam]
    }

    void Update()
    {
        if (closestObject == null)
        {
            Debug.Log("There is no enemy! - Debug");
        }
        else
        {
            transform.LookAt(closestObject.transform);
        }

        foreach (pathFollower obj in enemies)
        {
            float distance = Mathf.Infinity;
            if ((obj.transform.position - transform.position).magnitude < distance)
            {
                closestObject = obj.gameObject;
            }
        }
    }
}
