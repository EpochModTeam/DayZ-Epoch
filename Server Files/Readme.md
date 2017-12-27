Note: Both server and client should be updated to current A2OA stable 1.63.131129 or newer -- DO NOT USE BETA BUILDS, wait until A2/OA updates are pushed to the stable channel.
Note: Do not copy ArmA 2 addons directory/pbo files into the ArmA 2 OA/Expansion directory, instead load the ArmA 2 addons in a -mod flag (default directory EX) "-mod=C:\Program Files (x86)\Steam\SteamApps\common\Arma 2;EXPANSION;ca"
Note: if you have copied your ArmA 2 addons into your ArmA2 OA/Expansion/Addons directory then you should uninstall ArmA 2 OA, completely delete your ArmA 2 OA Expansion folder, then reinstall

## Basic Install Guide

1. Install or update your Visual Studio Redistributable packages using the installers found in the included 'Visual Studio C++ Redistributables' directory.

2. Install or update [[MySQL Server](https://dev.mysql.com/downloads/mysql/)] on the server. Create a new MySQL database called `dayz_epoch`. Import the epoch.sql file.

3. [[Download](http://dayzepoch.com/a2dayzepoch.php)] both client and server files and extract to the root `Arma 2 Operation Arrowhead` folder. Example: `C:\Program Files (x86)\Steam\steamapps\common\Arma 2 Operation Arrowhead`. On some Windows systems dll files may need to be unblocked. Right-click the file, click properties and click "Unblock".

4. Move the `DZE_Server_Config` folder to the root of the drive (C:\ on most systems) or a similar location. For security, it is important this folder is located outside the arma2oaserver.exe folder and its sub-folders.

5. Open HiveExt.ini and adjust the MySQL settings. Open the desired *_map.cfg in the same folder and change the admin password. Open BEServer.cfg in the BattlEye folder and change the RCon password.

6. Launch the server with the desired *_map.bat file.

7. It may be necessary to forward [[these ports](https://community.bistudio.com/wiki/Arma_3_Dedicated_Server#Port_Forwarding)] in the server software and hardware firewalls.

8. To run multiple servers on the same machine, create a copy of the DZE_Server_Config folder with a new name. Update the DZE_Server_Config folder name in *_map.bat. Use different port numbers in *_map.cfg and *_map.bat for each server. HiveExt.ini settings need to be changed if multiple databases are used.

## Basic Upgrading Guide

1. Perform steps 1-3 in the basic install guide above. Update the server's MPMission, dayz_server, BattlEye filters and HiveExt.dll.

2. Connect to the MySQL server. Make a backup. Open the *_Updates.sql file and read the comments, especially at the bottom. Run the appropriate updates on the dayz_epoch database.

3. Inside the server "Keys" folder remove any DayZ_Epoch*.bikey files from previous versions.

##SECURITY ADVISORY

NOTE: The included 'DZE_Server_Config' startup bats and files/folder structure is provided as an example only and should be configured to your needs, passwords NEED TO BE CHANGED, and profile/config folders should be placed outside your OA Directory
NOTE: DO NOT FORGET TO CHANGE THE PASSWORD IN BEServer.cfg

1. YOU SHOULD KEEP YOUR SERVER CONFIG/PROFILES DIRECTORY OUTSIDE YOUR ARMA 2/OA ROOT DIRECTORY SO IT CANNOT BE READ BY HACKERS/SCRIPTERS. THE INSTRUCTIONS BELOW ARE FOR MODIFYING/MOVING EXISTING STARTUP PROCEDURES AND PROFILE DIRECTORIES

2. In this example we will place our profiles directory in C:\DZE_Server_Config, be sure to select the correct map .cfg for your server!

3. Modify your startup.bat -BEpath -cfg -config -profiles startup flags to point to your new server config directory and files; an example is provided in step 4
3a. you can gain additional security by appending random characters to your config file names and BE folder

4. -profiles="C:\DZE_Server_Config" -BEpath="-BEpath=C:\DZE_Server_Config\BattlEye" -config="C:\DZE_Server_Config\11_chernarus.cfg" -cfg="C:\DZE_Server_Config\basic.cfg"