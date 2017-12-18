**Epoch 1.0.6.2 Test Build**
===========================

Install instructions:

1. Download these two files: [[1.9 addons](http://se1.dayz.nu/latest/1.9.0/Stable/29/%40DayZMod_Client-1.9.0-Full.rar)] [[Epoch addons](https://github.com/EpochModTeam/DayZ-Epoch/raw/master/Test%20Build/EpochTest-1062-RC1.zip)]

2. Make a copy of your @DayZ_Epoch1061 folder on both the client and server and rename it to @DayZ_Epoch1062.

3. Copy the `@DayZMod_Client-1.9.0-Full.rar\@Dayz\Addons\` folder into your `@DayZ_Epoch1062\` folder and overwrite files when prompted. Make sure to do this on both the client and server.

4. Copy the `EpochTest-1062-RC1\addons\` folder into your `@DayZ_Epoch1062\` folder and again overwrite files when prompted. Make sure to do this on both the client and server.

5. Download the new [[server pack](https://github.com/EpochModTeam/DayZ-Epoch/raw/master/Test%20Build/EpochServer-1062-RC1.7z)] and extract to your A2OA server root directory. Overwrite older .DLLs. Requires: [[Visual C++ Redistributable 2015 (x86 version)](https://www.microsoft.com/en-us/download/details.aspx?id=48145)]

6. Use the new MPMission from Server Files\MPMissions.

7. Set verifySignatures = 0; in your test server config.

8. Use the new BattlEye filters from Server Files\Battleye.

9. Modify your server and client launch parameters to use 1062; instead of 1061;. In dayz_launcher you can go to the Advanced tab, disable all mods, then set `-mod=@DayZ_Epoch1062;`  in Settings > Additional Parameters.

10. Make a new `dayz_epoch` database using Server Files\epoch.sql OR update a 1061 database using Server Files\1.0.6.2_Updates.sql. Be sure to backup your old database first.

Note: Both server and client should be updated to current A2OA stable 1.63.131129 or newer.

@ebayShopper made a basic user interface for quickly testing most things without worrying about compatibility conflicts: 
**[[You can get it here]](https://github.com/ebayShopper/TestKit).**

Current Version: **EpochTest-1062-RC1**

Build Date: **December 8th 2017**

--------------------------
Test Server Information
--------------------------
The test server is currently maintained and hosted by icomrade

* IP: 167.114.80.188
* Port: 2402

--------------------------
The Zip file contains the following files:
--------------------------
* dayz_anim.pbo
* dayz_code.pbo
* dayz_epoch_b.pbo
* dayz_sfx.pbo
* mod.cpp
