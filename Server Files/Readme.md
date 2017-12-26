Note: Both server and client should be updated to current A2OA stable 1.63.131129 -- Beta build use is not recommended, wait until A2/OA updates are pushed to the stable channel.

## Basic Install Guide

1. Install or update [[Visual C++ Redistributable 2015 (x86 version)](https://www.microsoft.com/en-us/download/details.aspx?id=48145)] on the server. All previous Visual C++ Redistributables (x86 versions) [[found on this page](https://support.microsoft.com/en-us/kb/2977003)] must be installed.

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