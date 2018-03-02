

# Lab 4 #


# Lab 4a. Exporting and building a Unity Visual Studio solution

How to export from Unity


1. When you are ready to export your project from Unity, open the File menu and select Build Settings...
2. Click Add Open Scenes to add your scene to the build
3. Optional: Unity C# Projects: Checked. NOTE: Checking this box allows you to 1.) debug your app in the Visual Studio remote debugger, and 2.) edit scripts in the Unity C# project while using IntelliSense for WinRT APIs.
4. Select Build
5. In the Windows Explorer dialog that appears, create a new folder to hold Unity's build output. Generally, we name the folder "App".
6.  Select the newly created folder and click Select Folder.
7.  Once Unity has finished building, a Windows Explorer window will open to the project root directory. Navigate into the newly created folder.
8.  Open the generated Visual Studio solution file located inside this folder.

# Lab 4b. Deploying an app to your Local PC (immersive headset)
Follow these instructions when using a Windows Mixed Reality immersive headset that connects to your PC or the Mixed Reality simulator. In these cases, simply deploy and run your app on the local PC.

1. Select an x86 or x64 build configuration for your app
2. Select Local Machine in the deployment target drop-down menu
3. Select Debug > Start debugging to deploy your app and start debugging

# Lab 4c. Making a model ready for use as 3D app launcher 

1. From your favorite apps/tools, export a 3D model as glTF 2.0 with the .glb extension (As an exemple, I took a model from 3D Remix and exported it by Paint 3D)NOTE: The model must have less than 10k triangles. If you get a red cross instead of the 3D Launcher, this could be the root cause
2. Download the WindowsMRAssetConverter.exe from the [glTF-Toolkit](https://github.com/Microsoft/glTF-Toolkit/releases) on gitHub 
Simply use the WindowsMRAssetConverter.exe tool with your model (.glb file) as parameter:

	`WindowsMRAssetConverter.exe C:\Temp\MyModel.glb`

# Lab 4d. Adding the converted model to the project

First lets import the modified model into our project:

1. Build your Windows Mixed Reality project from Unity generating the Visual Studio C# Solution (Unity C# Projects: Checked.)
2. Select Build
3. In the Windows Explorer dialog that appears, Select the previous created folder (Lab 4a) and click Select Folder
4. Open the built Windows Mixed Reality C# solution in Visual Studio. 
5. Right click on the UWP project in the SOLUTION EXPLORER window and choose ADD / EXISTING ITEM
6. Navigate to where you saved the modified model, and select it
7. Click on the model file in the Solution Explorer
8. In the Properties dialog, make sure that the BUILD ACTION for the added .glb file is set to CONTENT

Next, we need to add it to the App manifest so the program knows to use the model as the launcher:

1. Open the Package.appxmanifest with a text editor (or right click on it in Visual Studio and then VIEW CODE)
2. Add the uap5 schema in the Package item at the begining of the file:
    `xmlns:uap5="http://schemas.microsoft.com/appx/manifest/uap/windows10/5"`
3. Add uap5 in the IgnorableNamespaces list:
    `IgnorableNamespaces="uap uap2 uap5 mp`"
4. Modify the DefaultTile element to integrate a uap5:MixedRealityModel element like: `<uap5:MixedRealityModel Path="MyModel_converted.glb"/>`

The Package.appxmanifest file will start like the following:


Now when you deploy you should see the custom 3D app launcher in the cliff house. 

