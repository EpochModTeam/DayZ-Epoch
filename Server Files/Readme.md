Note: Both server and client should be updated to current A2OA stable 1.63.131129 or newer -- Beta build use is not recommended, wait until A2/OA updates are pushed to the stable channel.

##Basic Install Guide

1. Install or update your [[Visual C++ Redistributable 2015 (x86 version)](https://www.microsoft.com/en-us/download/details.aspx?id=48145)]. Yopu MUST install all previous Visual C++ Redistributables (x86 versions) [[found on this page](https://support.microsoft.com/en-us/kb/2977003)].

2. Download both client and server files and extract to the root `Arma 2 Operation Arrowhead` folder. Example: `C:\Program Files (x86)\Steam\steamapps\common\Arma 2 Operation Arrowhead`. On some Windows systems you may need to "UnBlock" the dll files. Right-click the file, Properties and click "Unblock".

3. Install MySQL server and create a new MySQL database called `dayz_epoch`. Import the epoch.sql file.

4. Open HiveExt.ini and change your MySQL connection information. Open config.cfg in the same folder and change the admin password.

5. Launch the server with `-mod=@DayZ_Epoch;@DayZ_Epoch_Server;`. See the *.bat files in Config-Examples.

##Basic Upgrading Guide

1. Perform steps #1 and #2 in the basic install guide, above. Be sure to update to the new MPMission, dayz_server, BattlEye filters and HiveExt.dll too.

2. Connect to your MySQL server. Make a backup first to be safe, then run the 1.0.6_Updates.sql file on your dayz_epoch database. Be sure to read the comments in the SQL field, especially at the bottom of the file if you are using single curreny or Precise Base Building 1.0.4 or older.

3. Inside the "Keys" folder on your server remove any previous day_epoch*.bikey keys. As of 1.0.6 our bikey is called dayz_epoch106.bikey and we will use a new one for each release.
