DZE_myHaloVehicle removeAction s_halo_action;
s_halo_action = -1;

player action [ "eject", (vehicle player)];
uiSleep 1;
player spawn BIS_fnc_halo;
player setvelocity [0,120*0.8,0];
player setdir 0;