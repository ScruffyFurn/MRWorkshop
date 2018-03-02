# Lab 2 #

For Lab 2 we are going to be focusing on input, specifically using the Motion Controllers to interact with our world. We will start off looking at how to render the motion controllers as 3D object in our world. Then finish off by using the motion controllers to spawn objects in our 3D space.


# Lab 2a. Importing the Mixed Reality ToolKit #
As mention in the slides, the Mixed Reality ToolKit provides many scripts, assets, and prefabs to really speed up development. In this lab we are going to import the toolkit for future labs usage.

1. Select Assets > Import Package > Custom Package
2. Navigate to the Assets folder in the Lab2 directory
3. Select *HoloToolkit-Unity-2017.2.1.1.unitypackage*
4. In the dialog pop-up, make sure all components are check marked, and then click **Import**  

We now have the toolkit imported and can continue on to using the toolkit components to expand our development.

# Lab 2b. Rendering Motion Controllers

In this lab we will learn how to render motion controller models in Unity's game mode and at runtime.

First let start off by replacing the default camera with the Mixed Reality ToolKits default prefab. This prefab will provide us with some simple functionally to make things easier.

1. In the Hierarchy panel, select the *Main Camera* object and hit the delete button.
2. In the Project view panel, type MixedRealityCamera in the search box (It can also be found under Assets/HoloToolkit/Input/Prefabs/MixedRealityCamera).
3. Drag the *MixedRealityCamera* prefab into the Hierarchy panel

Next we can add the *MotionControllers* prefab, this prefab contains the needed scripts and assets to render the Motion Controllers in realtime

1. In the Project view panel, type MotionControllers in the search box (You can also find it under Assets/HoloToolkit/Input/Prefabs/).
2. Drag the *MotionControllers* prefab into the Hierarchy panel.
3. Save the scene and click the play button.

You will now be able to see the scene with motion controllers in your headset. You can see detailed animations for button clicks, thumbstick movement, and touchpad touch highlighting.


# Lab 2c. Create and place 3D objects via Motion Controllers #

In this lab we will learn how to use the Select and Grasp button input events to instantiate some 3D objects in our world

1. In the Project view panel, type ObjectSpawner in the search box (You can also find it under Assets/AppPrefabs/)
2. Drag the *ObjectSpawner* prefab into the Hierarchy panel.
3. Save the scene and click the play button.

You will be able to change the objects with the Grasp button and spawn objects with the Select button.