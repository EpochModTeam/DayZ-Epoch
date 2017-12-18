Note: Both server and client should be updated to current A2OA stable 1.63.131129 or newer -- Beta build use is not recommended, wait until A2/OA updates are pushed to the stable channel.

## Basic Install Guide

1. Install or update [[Visual C++ Redistributable 2015 (x86 version)](https://www.microsoft.com/en-us/download/details.aspx?id=48145)] on the server. All previous Visual C++ Redistributables (x86 versions) [[found on this page](https://support.microsoft.com/en-us/kb/2977003)] must be installed.

2. [[Download](http://dayzepoch.com/a2dayzepoch.php)] both client and server files and extract to the root `Arma 2 Operation Arrowhead` folder. Example: `C:\Program Files (x86)\Steam\steamapps\common\Arma 2 Operation Arrowhead`. On some Windows systems you may need to "UnBlock" the dll files. Right-click the file, Properties and click "Unblock".

3. Install [[MySQL Server](https://dev.mysql.com/downloads/mysql/)] and create a new MySQL database called `dayz_epoch`. Import the epoch.sql file.

4. Open HiveExt.ini and adjust the MySQL settings. Open config.cfg in the same folder and change the admin password. Open BEServer.cfg in the BattlEye folder and update the RCon password.

5. Launch the server with `-mod=@DayZ_Epoch;@DayZ_Epoch_Server;`. See the *.bat files in Config-Examples.

6. It may be necessary to forward [[these ports](https://community.bistudio.com/wiki/Arma_3_Dedicated_Server#Port_Forwarding)] in the server software and hardware firewalls.

## Basic Upgrading Guide

1. Perform steps 1-2 in the basic install guide above. Be sure to update to the new MPMission, dayz_server, BattlEye filters and HiveExt.dll.

2. Connect to the MySQL server. Make a backup. Open the x_Updates.sql file and read the comments, especially at the bottom. Run the appropriate updates on the dayz_epoch database.

3. Inside the server "Keys" folder remove any DayZ_Epoch*.bikey files from previous versions.