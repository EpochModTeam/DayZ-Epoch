if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_array","_vehicle","_part","_hitpoint","_type","_isOK","_brokenPart","_finished","_hasToolbox","_nameType","_namePart","_damage","_BreakableParts","_selection","_wpn","_hits","_ismelee"];

_array = 	_this select 3;
_vehicle = 	_array select 0;
_part =		_array select 1;
_hitpoint = _array select 2;
_type = typeOf _vehicle;
_isOK = false;
_brokenPart = false;
_hasToolbox = "ItemToolbox" in items player;

_nameType = getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_namePart = getText(configFile >> "cfgMagazines" >> _part >> "displayName");

{_vehicle removeAction _x} count s_player_repairActions;
s_player_repairActions = [];
s_player_repair_crtl = 1;

if (_hasToolbox) then {
	if ([_vehicle] call DZE_SafeZonePosCheck) exitWith {(localize "str_salvage_safezone") call dayz_rollingMessages;};

	[player,"repair",0,false] call dayz_zombieSpeak;
	[player,50,true,(getPosATL player)] call player_alertZombies;

	_finished = ["Medic",1] call fn_loopAction;

	if (_finished) then {
		["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
		//Remove melee magazines (BIS_fnc_invAdd fix)
		false call dz_fn_meleeMagazines;
		_hits = [_vehicle,_hitpoint] call object_getHit;
		_damage = _hits select 0;
		if (_damage < 1 && {_damage > 0}) then { //Tempfix for issue where certain hitpoints on some vehicles do not get damaged and allow infinite removal
			_BreakableParts = ["HitLFWheel","HitRFWheel","HitLBWheel","HitRBWheel","HitLF2Wheel","HitRF2Wheel","HitLMWheel","HitRMWheel","HitLFWheel","HitRFWheel","HitLBWheel","HitRBWheel","HitLF2Wheel","HitRF2Wheel","HitLMWheel","HitRMWheel","HitGlass1","HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6","HitLGlass","HitRGlass","HitEngine","HitFuel","HitHRotor"];
			if (_hitpoint in _BreakableParts) then {
				if ((random 1) < (_damage * 0.9)) then { //max 90% chance to break
					_isOK = true;
					_brokenPart = true;
				} else {
					_isOK = [player,_part] call BIS_fnc_invAdd;
					_brokenPart = false;
				};
			} else {
				_isOK = [player,_part] call BIS_fnc_invAdd;
				_brokenPart = false;
			};

			if (_isOK) then {
				_selection = _hits select 1;
				/*if ((_hitpoint == "HitEngine") or (_hitpoint == "HitFuel")) then {
					[_vehicle, _selection, 0.89] call fnc_veh_handleDam;
				} else {*/
					[_vehicle, _selection, 1] call fnc_veh_handleDam;
				//};
				_vehicle call fnc_veh_ResetEH;
				_vehicle setvelocity [0,0,1];
				if(_brokenPart) then {
					format[localize "str_salvage_destroyed",_namePart,_nameType] call dayz_rollingMessages;
				} else {
					format[localize "str_salvage_removed",_namePart,_nameType] call dayz_rollingMessages;
				};
			} else {
				localize "str_player_24" call dayz_rollingMessages;
			};
		};
		true call dz_fn_meleeMagazines;
	} else {
		localize "str_salvage_canceled" call dayz_rollingMessages;
	};
} else {
	format[localize "str_salvage_toolbox",_namePart] call dayz_rollingMessages;
};

dayz_myCursorTarget = objNull;
s_player_repair_crtl = -1;
dayz_actionInProgress = false;

//adding melee mags back if needed
_wpn = primaryWeapon player;
_ismelee = (getNumber (configFile >> "CfgWeapons" >> _wpn >> "melee") == 1);
if (_ismelee) then {
	call dayz_meleeMagazineCheck;
};
