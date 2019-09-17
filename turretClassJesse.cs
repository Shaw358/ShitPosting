using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class turretClass : MonoBehaviour
{
    // maak refrence naar turret class die GEEN mono behaviour heeft
    GameObject[] enemies;
    GameObject closestObject;

    public int fireSpeed;
    // Start is called before the first frame update
    void Start()
    {
        //Mystats = new [hier de class naam]
    }

    // Update is called once per frame
    void Update()
    {
        foreach(GameObject obj in enemies)
        {
            float distance = Mathf.Infinity;
            if ((obj.transform.position - transform.position).magnitude < distance)
            {
                closestObject = obj;
            }
        }
    }
}
