# Lab 1 #
In this lab we will create a new Unity project and preform the needed steps to support Mixed Reality development. We will then add some flare to our 3d world by adding a simple Skybox and Terrain object. This lab will prepare you for the next labs and will be built upon in subsequent labs.

# Lab 1a. Enabling Developer Mode
Let's start by enabling Developer Mode on your device. If you are working with a Windows Mixed Reality headset connected to your PC, you must enable Developer Mode on the PC.

1. Go to Settings
2. Select Update and Security
3. Select For developers
4. Enable Developer Mode, read the disclaimer for the setting you chose, then click Yes to accept the change.

# Lab 1b. Configuring a new Unity project for Windows Mixed Reality

To get started building mixed reality apps with Unity, first install the tools. If you'll be targeting Windows Mixed Reality 


When you first create a new Unity project, there are a small set of Unity settings you'll need to change for Windows Mixed Reality support.

To target Windows Mixed Reality, you first need to set your Unity project to export as a Universal Windows Platform app. To do this we follow these steps:

1. Select File > Build Settings...
2. Select Universal Windows Platform in the Platform list and click Switch Platform
3. Set Target device to Any Device 
4. Set Build Type to D3D
5. Set UWP SDK to Latest installed


We then need to let Unity know that the app we are trying to export should create an immersive view instead of a 2D view. We do that by enabling "Virtual Reality Supported" via the following steps:

1. From the Build Settings... window, open Player Settings...
2. Select the Settings for Universal Windows Platform tab
3. In the XR Settings group, confirm that "Windows Mixed Reality" is listed as a supported device. (this may appear as "Windows Holographic" in older versions of Unity)


# Lab 1b. Adding the Skybox and Terrian #

To give our virtual world a little more flare, we are going to add a Skybox and Terrain object to the Unity scene. 

The assets we need are packaged together for ease of importing. 

1. Select Assets > Import Package > Custom Package
2. Navigate to the Assets folder in the Lab1 directory
3. Select *Lab1_Assets.unitypackage*
4. In the dialog pop-up, make sure all components are check marked, and then click **Import**  

Now with the assets imported we can use them in our scene. Lets start with the Skybox.

1. Select Window > Lighting < Settings
2. In the Environment section, select the Skybox Material, using the small circle to the right of the selection box
3. In the Select Material dialog the opens, scroll to the top and select the *Mars Skybox* material

Next, lets go ahead and add some simple terrain to the scene. To do this we will use a terrain prefab that we just imported.

1. In the Project view, under the Assets folder, is a folder labeled Terrain. Expand this folder.
2. Drag and drop the *Terrain_x0_y0* prefab into the Scene Hierarchy view
3. Select the Main Camera object in the Scene Hierachy
4. Change the Position Y value to 10 (this will raise our camera view up off the ground)

# Running the Lab #

Provided you have followed all the steps above, or have opened the completed version of the project, you should now be able to test out the virtual world we are creating. 

1. With the Headset connected, open the Windows Mixed Reality Portal application.
2. From inside the Unity editor, select the run button at the top of the Scene view
3. Put on your headset and view the world in complete 360 degrees (Welcome to Mars)