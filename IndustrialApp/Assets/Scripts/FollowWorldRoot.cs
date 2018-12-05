using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class FollowWorldRoot : MonoBehaviour {
    public string Tag;
    public bool FollowOnlyOnClients;
    private Transform target_;
	// Use this for initialization
	void Start () {
        if (FollowOnlyOnClients && GetComponent<NetworkIdentity>() != null && GetComponent<NetworkIdentity>().hasAuthority)
            enabled = false;
        var obj = GameObject.FindGameObjectWithTag(Tag);
        if (obj == null)
            Debug.LogError("Didnt find target with tag: " + Tag);
        target_ = obj.transform;        
	}
	
	// Update is called once per frame
	void Update () {
        if (target_ == null)
            return;
        transform.position = target_.position;
        transform.rotation = target_.rotation;
        transform.localScale = target_.localScale;
    }
}
