**Epoch 1.0.6 Test Build**
===========================

Install instructions:

1. Download these two files: [[1.8.7 addons](http://se1.dayz.nu/latest/1.8.7/%40Client-1.8.7-Full.rar)] [[Epoch addons](https://github.com/EpochModTeam/DayZ-Epoch/raw/master/Test%20Build/EpochTest-106-MAY_15_2016.zip)]

2. Make a copy of your @DayZ_Epoch1051 folder on both the client and server and rename it to @DayZ_Epoch106.

3. Copy the `@Client-1.8.7-Full\@Dayz\Addons\` folder into your `@DayZ_Epoch106\` folder and overwrite files when prompted. Make sure to do this on both the client and server.

4. Copy the `EpochTest-106-MAY_15_2016\addons\` folder into your `@DayZ_Epoch106\` folder and again overwrite files when prompted. Make sure to do this on both the client and server.

5. Use the new dayz_server.pbo from `EpochTest-106-MAY_15_2016\addons\`

6. Use the new MPMission from Server Files\MPMissions.

7. Set verifySignatures = 0; in your test server config. Also move your filters out of the BattlEye folder for now or set BattlEye=0;

8. Modify your server and client launch parameters to use 106; instead of 1051;. In dayz_launcher you can go to the Advanced tab, disable all mods, then set `-mod=@DayZ_Epoch106;`  in Settings > Additional Parameters.

NOTE: dayz_server.pbo should not be included in your client epoch addons folder. It is a separate download as to avoid this accidentally happening, you may download the latest [[Epoch server pbo here](https://github.com/EpochModTeam/DayZ-Epoch/raw/master/Test%20Build/dayz_server.pbo)]

Current Version: **EpochTest-106-MAY_15_2016**

--------------------------
Test Server Information
--------------------------
The test server is currently maintained and hosted by icomrade

* IP: 37.59.229.103
* Port: 2402
* Password: epochtest106

--------------------------
The Zip file contains the following files:
--------------------------
* dayz_anim.pbo
* dayz_code.pbo
* dayz_epoch_b.pbo
* dayz_sfx.pbo
* anzio.pbo
* redryder.pbo
* mod.cpp
