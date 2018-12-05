using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecordingManager : MonoBehaviour {


    public void SetActiveOpposite(bool b)
    {
        gameObject.SetActive(!b);
    }
}
