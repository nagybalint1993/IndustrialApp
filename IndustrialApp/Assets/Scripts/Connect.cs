using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Connect : MonoBehaviour
{
    public bool IsHost;
    private NetworkManager netwManager_;
    // Use this for initialization
    void Start()
    {
        //NetworkManager.singleton.networkAddress = "152.66.170.224";
        netwManager_ = GetComponent<NetworkManager>();
        if (IsHost)
        {
            netwManager_.StartHost();
        }
        else
        {
            Debug.LogError(" adress: " + netwManager_.networkAddress + " port: " + netwManager_.networkPort);
            netwManager_.StartClient();
        }
    }
}
