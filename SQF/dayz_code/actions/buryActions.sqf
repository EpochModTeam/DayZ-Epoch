/*
	Bury/Butcher body script by salival (https://github.com/oiad)
*/
if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_action","_backPackMag","_backPackWpn","_crate","_corpse","_cross","_gain","_isBury","_grave","_name","_playerNear","_backPack","_position","_sound"];

_corpse = (_this select 3) select 0;
if (isNull _corpse) exitWith {dayz_actionInProgress = false; systemChat localize "str_cursorTargetNotFound";};

_playerNear = {isPlayer _x} count (([_corpse] call FNC_GetPos) nearEntities ["CAManBase", 10]) > 1;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_pickup_limit_5" call dayz_rollingMessages;};

_action = (_this select 3) select 1;

player removeAction s_player_bury_human;
s_player_bury_human = -1;
player removeAction s_player_butcher_human;
s_player_butcher_human = -1;

_position = getPosATL _corpse;
_isBury = _action == "bury";

if (!DZE_BuryOnRoad && {isOnRoad _position}) exitWith {dayz_actionInProgress = false; format[localize "STR_CL_BA_ROAD",if (_isBury) then {localize "STR_CL_BA_BURY1"} else {localize "STR_CL_BA_BUTCHER1"}] call dayz_rollingMessages;};

_finished = ["Medic",1] call fn_loopAction;
if (!_finished) exitWith {dayz_actionInProgress = false;localize "str_epoch_player_26" call dayz_rollingMessages;};

_corpse setVariable["isBuried",true,true];

_backPack = typeOf (unitBackPack _corpse);

_crate = createVehicle ["DZ_AmmoBoxSmallUS",_position,[],0,"CAN_COLLIDE"];
_crate setPosATL [(_position select 0)+1,(_position select 1)+1.5,_position select 2];
_crate setVariable ["permaLoot",true,true];
_crate setVariable ["bury",true,true];

_grave = createVehicle ["Grave",_position,[],0,"CAN_COLLIDE"];
_grave setPosATL [(_position select 0)+1,_position select 1,_position select 2];
_grave setVariable ["bury",true,true];

if (_isBury) then {
	_name = _corpse getVariable["bodyName","unknown"];
	_cross = createVehicle ["GraveCross1",_position,[],0,"CAN_COLLIDE"];
	_cross setPosATL [(_position select 0)+1,(_position select 1)-1.2,_position select 2];
	_cross setVariable ["bury",true,true];
};

{_crate addWeaponCargoGlobal [_x,1]} forEach weapons _corpse;
{_crate addMagazineCargoGlobal [_x,1]} forEach magazines _corpse;

if (_backPack != "") then {
	_backPackWpn = getWeaponCargo unitBackpack _corpse;
	_backPackMag = getMagazineCargo unitBackpack _corpse;

	if (count _backPackWpn > 0) then {{_crate addWeaponCargoGlobal [_x,(_backPackWpn select 1) select _forEachIndex]} forEach (_backPackWpn select 0);};
	if (count _backPackMag > 0) then {{_crate addMagazineCargoGlobal [_x,(_backPackMag select 1) select _forEachIndex]} forEach (_backPackMag select 0);};

	_crate addBackpackCargoGlobal [_backPack,1];
};

_sound = _corpse getVariable ["sched_co_fliesSource",nil];
if (!isNil "_sound") then {
	detach _sound;
	deleteVehicle _sound;
};

deleteVehicle _corpse;

if (_isBury) then {
	if (_name != "unknown") then {
		format[localize "STR_CL_BA_RIP",_name] call dayz_rollingMessages;
	} else {
		localize "STR_CL_BA_RIP_UNKNOWN" call dayz_rollingMessages;
	};
} else {
	["knives",0.2] call fn_dynamicTool;
};

_gain = if (_isBury) then {DZE_Bury_Body_Value} else {DZE_Butcher_Body_Value};
_gain call player_humanityChange;

dayz_actionInProgress = false;
