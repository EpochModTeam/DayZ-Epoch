private ["_vehicle","_part","_hitpoint","_type","_selection","_array","_started","_finished","_animState","_isMedic","_isOK","_brokenPart","_findPercent","_damage","_hasToolbox","_nameType","_namePart"];

if (dayz_salvageInProgress) exitWith {cutText [localize "str_salvage_inprogress", "PLAIN DOWN"]; };
dayz_salvageInProgress = true;

_array = 	_this select 3;
_vehicle = 	_array select 0;
_part =		_array select 1;
_hitpoint = _array select 2;
_type = typeOf _vehicle; 

_isOK = false;
_brokenPart = false;
_started = false;
_finished = false;

_hasToolbox = "ItemToolbox" in items player;

_nameType = getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_namePart = getText(configFile >> "cfgMagazines" >> _part >> "displayName");

{_vehicle removeAction _x} forEach s_player_repairActions;
 s_player_repairActions = [];
s_player_repair_crtl = 1;

if (_hasToolbox) then {

	player playActionNow "Medic";

	[player,"repair",0,false] call dayz_zombieSpeak;
	[player,50,true,(getPosATL player)] call player_alertZombies;

	// Added Nutrition-Factor for work
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	
	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then { _started = true; };
		if (_started and !_isMedic) then { r_doLoop = false; _finished = true; };
		if (r_interrupt) then { r_doLoop = false; };
		sleep 0.1;
	};
	r_doLoop = false;

	if (_finished) then {
		_damage = [_vehicle,_hitpoint] call object_getHit;
		if (_damage < 1) then {
			_BreakableParts = ["HitGlass1","HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6","HitLGlass","HitRGlass","HitEngine","HitFuel","HitHRotor"];
			if (_hitpoint in _BreakableParts) then {
			_findPercent = (1 - _damage) * 10;
			if(ceil (random _findPercent) == 1) then {
					_isOK = true;
					_brokenPart = true;
				} else {
					_isOK = [player,_part] call BIS_fnc_invAdd;
					_brokenPart = false;
				};
			} else {
				//Remove melee ammo due to the way ammo is working.
				{player removeMagazines _x} count MeleeMagazines;
				
				_isOK = [player,_part] call BIS_fnc_invAdd;
				_brokenPart = false;
			};
			
			if (_isOK) then {
				_selection = getText(configFile >> "cfgVehicles" >> _type >> "HitPoints" >> _hitpoint >> "name");
				if ((_hitpoint == "HitEngine") or (_hitpoint == "HitFuel")) then {
					[_vehicle, _selection, 0.89] call fnc_veh_handleDam;
				} else {
					[_vehicle, _selection, 1] call fnc_veh_handleDam;
				};
				_vehicle call fnc_veh_ResetEH;
				_vehicle setvelocity [0,0,1];
				if(_brokenPart) then {
						cutText [format [localize "str_salvage_destroyed",_namePart,_nameType], "PLAIN DOWN"];
				} else {
						cutText [format [localize "str_salvage_removed",_namePart,_nameType], "PLAIN DOWN"];
				};
			} else {
				cutText [localize "str_player_24", "PLAIN DOWN"];
			};
		};
	} else {
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText [localize "str_salvage_canceled", "PLAIN DOWN"];
	};
} else {
	cutText [format [localize "str_salvage_toolbox",_namePart], "PLAIN DOWN"];
};

dayz_myCursorTarget = objNull;
s_player_repair_crtl = -1;

dayz_salvageInProgress = false;

//adding melee mags back if needed
_wpn = primaryWeapon player;
//diag_log format["Classname: %1, WPN: %2", _classname,_wpn];
_ismelee = (getNumber (configFile >> "CfgWeapons" >> _wpn >> "melee") == 1);
if (_ismelee) then {
	call dayz_meleeMagazineCheck;
};
