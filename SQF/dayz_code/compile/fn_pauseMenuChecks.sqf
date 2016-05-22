// This script is unscheduled so add code here sparingly
// Note description.ext onPauseScript is scheduled: https://community.bistudio.com/wiki/Description.ext#onPauseScript

disableSerialization;

// Disable abort and respawn immediately onLoad (player_onPause is delayed when FPS is low)
{ (_this select 0 displayCtrl _x) ctrlEnable false } count [1010,104];