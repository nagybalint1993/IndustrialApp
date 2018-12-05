using UnityEngine;
using System.Collections;
using UnityEngine.UI;
#if UNITY_IOS
using ControlFreak2;
#endif
public class WorldOffset : MonoBehaviour
{
    public Slider OffsetStepSlider;
    public Transform WorldRoot;
    public Transform CalibrationCube;
    private bool isSyncPanelActive_ = false;
    private static Vector3 postitionOffset_ = Vector3.zero;
    public static Vector3 PositionOffset => postitionOffset_;

    private static float rotationOffset_ = 0f;
    public static float RotationOffset => rotationOffset_;
    RaycastHit hit;

    private Vector3 forwardVector_;

    public void IsPanelActive(bool isActive)
    {
        isSyncPanelActive_ = isActive;
    }

    public void AdjustPositionOffsetX(float dir)
    {
        var value = Vector3.right * dir * OffsetStepSlider.value;
        AddPositionOffset(value);

    }

    public void AdjustPositionOffsetY(float dir)
    {
        var value = Vector3.up * dir * OffsetStepSlider.value;
        AddPositionOffset(value);
    }

    public void AdjustPositionOffsetZ(float dir)
    {
        var value = Vector3.forward * dir * OffsetStepSlider.value;
        AddPositionOffset(value);
    }

    private void AddPositionOffset(Vector3 offset)
    {
        offset *= OffsetStepSlider.value;
        postitionOffset_ += offset;
        WorldRoot.position += offset;

    }

    public void AdjustRotationOffset(float dir)
    {
        rotationOffset_ += dir * OffsetStepSlider.value;
        WorldRoot.Rotate(Vector3.up, dir * OffsetStepSlider.value);
    }

    public void SimulateDrag()
    {
#if UNITY_IOS
        if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.forward, out hit))
        {
            forwardVector_ = (hit.point - Camera.main.transform.position).normalized;
            forwardVector_.y = 0f;
            AddPositionOffset(forwardVector_ * CF2Input.GetAxis("Mouse Y"));
        }
#endif
    }

    private void Update()
    {
        if (!isSyncPanelActive_)
            return;
#if UNITY_IOS
        SimulateDrag();
        AddPositionOffset(new Vector3(CF2Input.GetAxis("Horizontal"), 0f, CF2Input.GetAxis("Vertical")));
#endif
    }
}