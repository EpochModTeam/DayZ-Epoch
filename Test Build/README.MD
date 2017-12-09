**Epoch 1.0.6.2 Test Build**
===========================

Install instructions:

1. Download these two files: [[1.9 addons](http://se1.dayz.nu/latest/1.9.0/Development/211/%40DayZMod_Client-Dev_1.9.0-5269f90%28211%29-Full.rar)] [[Epoch addons](https://github.com/EpochModTeam/DayZ-Epoch/raw/master/Test%20Build/EpochTest-1062-RC1.zip)]

2. Make a copy of your @DayZ_Epoch1061 folder on both the client and server and rename it to @DayZ_Epoch1062.

3. Copy the `@DayZMod_Client-Dev_1.9.0-x-Full.rar\@Dayz\Addons\` folder into your `@DayZ_Epoch1062\` folder and overwrite files when prompted. Make sure to do this on both the client and server.

4. Copy the `EpochTest-1062-RC1\addons\` folder into your `@DayZ_Epoch1062\` folder and again overwrite files when prompted. Make sure to do this on both the client and server.

5. Use the new dayz_server.pbo from [[here](https://github.com/EpochModTeam/DayZ-Epoch/raw/master/Test%20Build/dayz_server.pbo)]

6. Use the new HiveExt.dll from [[here](https://github.com/EpochModTeam/DayZ-Epoch/tree/master/Server%20Files/HiveExt.dll)] which requires [[Visual C++ Redistributable 2015 (x86 version)](https://www.microsoft.com/en-us/download/details.aspx?id=48145)]

7. Use the new MPMission from Server Files\MPMissions.

8. Set verifySignatures = 0; in your test server config.

9. Use the new BattlEye filters from Server Files\Battleye.

10. Modify your server and client launch parameters to use 1062; instead of 1061;. In dayz_launcher you can go to the Advanced tab, disable all mods, then set `-mod=@DayZ_Epoch1062;`  in Settings > Additional Parameters.

11. Make a new `dayz_epoch` database using Server Files\epoch.sql OR update a 1061 database using Server Files\1.0.6.2_Updates.sql. Be sure to backup your old database first.

Note: Both server and client should be updated to current A2OA stable 1.63.131129 or newer.

Current Version: **EpochTest-1062-RC1**

Build Date: **December 8th 2017**

--------------------------
Test Server Information
--------------------------
The test server is currently maintained and hosted by icomrade

* IP: 37.59.229.103
* Port: 2402

--------------------------
The Zip file contains the following files:
--------------------------
* dayz_anim.pbo
* dayz_code.pbo
* dayz_sfx.pbo
* mod.cpp
