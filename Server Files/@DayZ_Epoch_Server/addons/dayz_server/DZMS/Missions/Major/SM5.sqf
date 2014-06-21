/*
	Medical Ural Attack by lazyink (Full credit for original code to TheSzerdi & TAW_Tonic)
	Updated to New Format by Vampire
*/

private ["_missName","_coords","_crash","_body","_body1","_body2","_body3","_veh1","_vehicle","_vehicle1","_crate","_crate2"];

//Name of the Mission
_missName = "Ural Ambush";

//DZMSFindPos loops BIS_fnc_findSafePos until it gets a valid result
_coords = call DZMSFindPos;

[nil,nil,rTitleText,"Bandits have Ambushed a Ural Carrying Supplies!", "PLAIN",10] call RE;

//DZMSAddMajMarker is a simple script that adds a marker to the location
[_coords,_missname] ExecVM DZMSAddMajMarker;

//We create the scenery
_crash = createVehicle ["UralWreck",_coords,[], 0, "CAN_COLLIDE"];
_crash setDir 149.64919;
[_crash] call DZMSProtectObj;

_body = createVehicle ["Body",[(_coords select 0) - 2.2905,(_coords select 1) - 3.3438,0],[], 0, "CAN_COLLIDE"];
_body setDir 61.798588;
[_body] call DZMSProtectObj;

_body1 = createVehicle ["Body",[(_coords select 0) - 2.8511,(_coords select 1) - 2.4346,0],[], 0, "CAN_COLLIDE"];
_body1 setDir 52.402905;
[_body1] call DZMSProtectObj;

_body2 = createVehicle ["Body",[(_coords select 0) - 3.435,(_coords select 1) - 1.4297,0],[], 0, "CAN_COLLIDE"];
_body2 setDir -117.27345;
[_body2] call DZMSProtectObj;

_body3 = createVehicle ["Body2",[(_coords select 0) - 4.0337,(_coords select 1) + 0.5,0],[], 0, "CAN_COLLIDE"];
_body3 setDir 23.664057;
[_body3] call DZMSProtectObj;

//We create the vehicles like normal
_veh1 = ["small"] call DZMSGetVeh;
_vehicle = createVehicle [_veh1,[(_coords select 0) + 5.7534, (_coords select 1) - 9.2149,0],[], 0, "CAN_COLLIDE"];

//DZMSSetupVehicle prevents the vehicle from disappearing and sets fuel and such
[_vehicle] call DZMSSetupVehicle;

//DZMSBoxFill fills the box, DZMSProtectObj prevents it from disappearing
_crate = createVehicle ["USBasicWeaponsBox",[(_coords select 0) + 2.6778,(_coords select 1) - 3.0889,0],[], 0, "CAN_COLLIDE"];
[_crate,"medical"] ExecVM DZMSBoxSetup;
[_crate] call DZMSProtectObj;
_crate setDir -28.85478;

_crate2 = createVehicle ["USBasicWeaponsBox",[(_coords select 0) + 1.4805,(_coords select 1) - 3.7432,0],[], 0, "CAN_COLLIDE"];
[_crate2,"medical"] ExecVM DZMSBoxSetup;
[_crate2] call DZMSProtectObj;
_crate2 setDir 62.744293;

_crate3 = createVehicle ["USBasicAmmunitionBox",[(_coords select 0) + 2.5405,(_coords select 1) - 4.1612,0],[], 0, "CAN_COLLIDE"];
[_crate3,"weapons"] ExecVM DZMSBoxSetup;
[_crate3] call DZMSProtectObj;
_crate3 setDir -27.93351;

//DZMSAISpawn spawns AI to the mission.
//Usage: [_coords, count, skillLevel, unitArray]
[[(_coords select 0) - 6.9458,(_coords select 1) - 3.5352, 0],6,1,"DZMSUnitsMajor"] call DZMSAISpawn;
sleep 5;
[[(_coords select 0) + 4.4614,(_coords select 1) + 2.5898, 0],6,1,"DZMSUnitsMajor"] call DZMSAISpawn;
sleep 5;
[[(_coords select 0) + 4.4614,(_coords select 1) + 2.5898, 0],4,1,"DZMSUnitsMajor"] call DZMSAISpawn;
sleep 5;

//Wait until the player is within 30 meters and also meets the kill req
[_coords,"DZMSUnitsMajor"] call DZMSWaitMissionComp;

//Call DZMSSaveVeh to attempt to save the vehicles to the database
//If saving is off, the script will exit.
[_vehicle] ExecVM DZMSSaveVeh;

[nil,nil,rTitleText,"The Ural Supplies have been Secured by Survivors!", "PLAIN",6] call RE;
diag_log text format["[DZMS]: Major SM5 Ural Ambush Mission has Ended."];
deleteMarker "DZMSMajMarker";
deleteMarker "DZMSMajDot";

//Let the timer know the mission is over
DZMSMajDone = true;