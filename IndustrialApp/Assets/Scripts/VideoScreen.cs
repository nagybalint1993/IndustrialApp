using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VideoScreen : MonoBehaviour {
    VideoPlayer videoPlayer;

	// Use this for initialization
	void Start () {
        videoPlayer = gameObject.AddComponent<UnityEngine.Video.VideoPlayer>();

        videoPlayer.url = "https://www.quirksmode.org/html5/videos/big_buck_bunny.mp4";
        videoPlayer.renderMode = VideoRenderMode.MaterialOverride;
        videoPlayer.playOnAwake = false;
        videoPlayer.Pause();
    }
	
	// Update is called once per frame
	void Update () {
		


	}

    public void OnPressed()
    {
        videoPlayer.Play();
    }
}
