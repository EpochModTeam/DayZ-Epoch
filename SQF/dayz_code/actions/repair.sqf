if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_id","_hits","_array","_vehicle","_part","_hitpoint","_type","_nameType","_namePart","_damage","_selection","_dis","_sfx","_finished"];

_id = _this select 2;
_array = _this select 3;
_vehicle = _array select 0;
_part = _array select 1;
_hitpoint = _array select 2;
_type = typeOf _vehicle;

{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
dayz_myCursorTarget = objNull;

//diag_log(format["%1 %2", __FILE__, _this]);

//moving this here because we need to know which part needed if we don't have it
_nameType = getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_namePart = getText(configFile >> "cfgMagazines" >> _part >> "displayName");

if ("ItemToolbox" in items player && {_part in magazines player}) then {
	_dis=20;
	_sfx = "repair";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	_finished = ["Medic",1] call fn_loopAction;

	// Check again to make sure player did not drop item
	if (!_finished or !(_part in magazines player)) exitWith {};
	player removeMagazine _part;

	// Added Nutrition-Factor for work
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

	_hits = [_vehicle,_hitpoint] call object_getHit;
	_damage = _hits select 0;

	_vehicle removeAction _id;
	//dont waste loot on undamaged parts
	if (_damage > 0) then {
		//Fix the part
		_selection = _hits select 1;

		[_vehicle, _selection, 0, true] call fnc_veh_handleRepair;
		_vehicle setvelocity [0,0,1];

		//Success!
		format[localize "str_player_04",_namePart,_nameType] call dayz_rollingMessages;
	} else {
		player addMagazine _part;
	};
} else {
	format[localize "str_player_03",_namePart] call dayz_rollingMessages;
};
dayz_actionInProgress = false;
