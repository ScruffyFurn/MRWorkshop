# Lab 3 #
In lab 3 we are going to add the ability to move around our 3D world. As mentioned in the presentation, there are many different ways to implement movement. In our case we are going to focus on teleportation. Also we are going to expand on our Motion controller and create a paint brush controller and make it paint! 


# Lab 3a.  

To make it easy for us allow the user to move around the scene with teleportation using thumbstick, we are going use MixedRealityCameraParent prefab instead of MixedRealityCamera.

We will also use InputManager and DefaultCusor prefabs from the Mixed Reality Toolkit. 


1. Since MixedRealityCameraParent already includes MotionControllers and Boundary as child components, remove existing MotionControllers and Terrain prefabs. Select both in the Hierarchy panel and hit delete.
2. From the Project panel, search for the MixedRealityCameraParent prefab and drag it into the Hierarchy panel (You can find it in Assets/HoloToolkit/Input/Prefabs/MixedRealityCameraParent)
3. Do step 2 for the InputManager and DefaultCursor prefabs (They can be found in Assets/HoloToolkit/Input/Prefabs/InputManager and Assets/HoloToolkit/Input/Prefabs/Cursor/DefaultCursor)
4. In the Hierarchy panel, click the Input Manager prefab
5. In the Inspector panel, scroll down to the Simple Single Pointer Selector section
6. From the Hierarchy panel, drag the DefaultCursor prefab into Cursor field
7. Save the scene and click the play button. 

You will now be able to use the thumbstick to rotate left/right or teleport.

# Lab 3b. Using custom 3D models for Motion Controllers #
In this lab we will replace the right-hand motion controller model with our own custom 3D model.

1. Click MotionControllers in the Hierarchy panel.
2. Click the circle on the right side of the Alternate Right Controller field.
3. Type in 'BrushController' and select the prefab from the result (You can find it under Assets/AppPrefabs/BrushController)
4. Check Always Use Alternate Right Model
5. Save the scene and click the play button. 

You will be able to see the brush model replaced the right-hand motion controller.

## Making the brush paint ##
As mentioned in the presentation, the BrushController subscribes to the InteractionManager's InteractionSourcePressed and InteractionSourceReleased events. When InteractionSourcePressed event is triggered, the brush's Draw property is set to true; when InteractionSourceReleased event is triggered, the brush's Draw property is set to false. While Draw is set to true, the brush will generate points in an instantiated Unity LineRenderer.

If you save and hit play, you will be able to draw lines and paint using the select button on the right-hand controller.


