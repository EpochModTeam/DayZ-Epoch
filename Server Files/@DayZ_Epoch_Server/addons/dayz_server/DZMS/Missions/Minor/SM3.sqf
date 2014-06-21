/*
	Bandit Stash House by lazyink (Full credit for code to TheSzerdi & TAW_Tonic)
	Updated to new format by Vampire
*/
private ["_missName","_coords","_base","_base1","_veh1","_vehicle","_crate","_crate1"];

//Name of the Mission
_missName = "Stash House";

//DZMSFindPos loops BIS_fnc_findSafePos until it gets a valid result
_coords = call DZMSFindPos;

[nil,nil,rTitleText,"Bandits have set up a Weapon Stash House!\nGo Empty it Out!", "PLAIN",10] call RE;

//DZMSAddMinMarker is a simple script that adds a marker to the location
[_coords,_missName] ExecVM DZMSAddMinMarker;

//We create the scenery
_base = createVehicle ["Land_HouseV_1I4",_coords,[], 0, "CAN_COLLIDE"];
_base setDir 152.66766;
_base setPos _coords;
_base1 = createVehicle ["Land_kulna",[(_coords select 0) + 5.4585, (_coords select 1) - 2.885,0],[], 0, "CAN_COLLIDE"];
_base1 setDir -28.282881;
_base1 setPos [(_coords select 0) + 5.4585, (_coords select 1) - 2.885,0];

//DZMSProtectObj prevents it from disappearing
[_base] call DZMSProtectObj;
[_base1] call DZMSProtectObj;

//We create the vehicles
_veh1 = ["small"] call DZMSGetVeh;
_vehicle = createVehicle [_veh1,[(_coords select 0) - 10.6206, (_coords select 1) - 0.49,0],[], 0, "CAN_COLLIDE"];

//DZMSSetupVehicle prevents the vehicle from disappearing and sets fuel and such
[_vehicle] call DZMSSetupVehicle;

//We create and fill the crate
_crate = createVehicle ["USBasicAmmunitionBox",[(_coords select 0) + 0.7408, (_coords select 1) + 1.565, 0.10033049],[], 0, "CAN_COLLIDE"];
[_crate,"weapons"] ExecVM DZMSBoxSetup;
[_crate] call DZMSProtectObj;
_crate1 = createVehicle ["USBasicAmmunitionBox",[(_coords select 0) - 0.2387, (_coords select 1) + 1.043, 0.10033049],[], 0, "CAN_COLLIDE"];
[_crate1,"weapons"] ExecVM DZMSBoxSetup;
[_crate1] call DZMSProtectObj;

//DZMSAISpawn spawns AI to the mission.
//Usage: [_coords, count, skillLevel, unitArray]
[[(_coords select 0) - 4.0796, (_coords select 1) - 11.709,0],6,2,"DZMSUnitsMinor"] call DZMSAISpawn;
sleep 3;
[[(_coords select 0) + 2.8872, (_coords select 1) + 18.964,0],6,2,"DZMSUnitsMinor"] call DZMSAISpawn;
sleep 3;

//Wait until the player is within 30 meters and also meets the kill req
[_coords,"DZMSUnitsMinor"] call DZMSWaitMissionComp;

//Call DZMSSaveVeh to attempt to save the vehicles to the database
//If saving is off, the script will exit.
[_vehicle] ExecVM DZMSSaveVeh;

//Let everyone know the mission is over
[nil,nil,rTitleText,"The Stash House is under Survivor Control!", "PLAIN",6] call RE;
diag_log text format["[DZMS]: Minor SM3 Stash House Mission has Ended."];
deleteMarker "DZMSMinMarker";
deleteMarker "DZMSMinDot";

//Let the timer know the mission is over
DZMSMinDone = true;