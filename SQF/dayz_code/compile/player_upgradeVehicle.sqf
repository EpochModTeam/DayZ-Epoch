/*
	DayZ Epoch Vehicle Upgrades
	Made for DayZ Unleashed by [VB]AWOL please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
if (dayz_actionInProgress) exitWith {localize "STR_EPOCH_PLAYER_52" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_text","_requirementsTools","_upgradeName","_displayname","_vehicle","_proceed","_itemIn","_countIn","_missing","_missingQty","_qty","_removed","_tobe_removed_total","_textMissing","_num_removed","_removed_total","_objectID","_objectUID","_location","_dir","_objectCharacterID","_classname","_newclassname","_upgrade","_vehicle","_finished","_temp_removed_array_mag","_temp_removed_array_wep","_notNearestPlayer","_requirementsWeapon","_requirementsMagazine"];

_upgrade = _this;
_vehicle = cursorTarget;

if (isNull _vehicle || !(_vehicle isKindOf "AllVehicles") || !(alive _vehicle)) exitWith {dayz_actionInProgress = false; systemChat localize "str_cursorTargetNotFound";};

if (vehicle player != player) exitWith {dayz_actionInProgress = false; localize "STR_EPOCH_ACTIONS_18" call dayz_rollingMessages;};

_classname = typeOf _vehicle;
_displayname = getText (configFile >> "CfgVehicles" >> _classname >> "displayname");

if (_classname in DZE_DisableVehicleUpgrade) exitWith {dayz_actionInProgress = false; format [localize "STR_EPOCH_VEHUP_NOT_ALLOWED",_displayname] call dayz_rollingMessages;};

if ((player distance _vehicle) > 6) exitWith {dayz_actionInProgress = false; format [localize "STR_EPOCH_VEHUP_DISTANCE_TOO_FAR",_displayname] call dayz_rollingMessages;};

if (count (crew _vehicle) == 0) then {
	_notNearestPlayer = _vehicle call dze_isnearest_player;

	if (local _vehicle && !_notNearestPlayer) then {
		// lookup vehicle and find if any upgrades are available
		_upgradeName = getText (configFile >> "CfgMagazines" >> _upgrade >> "displayname");
		_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "Upgrades" >> _upgrade);

		if (!isNil "_upgrade" && {(count _upgrade) > 0}) then {
			closeDialog 0;	
			_newclassname = _upgrade select 0;
			_requirementsTools = _upgrade select 1;

			if (["",_requirementsTools,"none"] call dze_requiredItemsCheck) then {
				_requirementsWeapon = _upgrade select 2;
				_requirementsMagazine = _upgrade select 3;

				_missingQty = 0;
				_missing = "";

				_proceed = true;
				{
					_itemIn = _x select 0;
					_countIn = _x select 1;
					_qty = { (_x == _itemIn) || (configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn) } count magazines player;
					if (_qty < _countIn) exitWith { _missing = _itemIn; _missingQty = (_countIn - _qty); _proceed = false; };
				} count _requirementsMagazine;

				{
					_itemIn = _x;
					_countIn = 1;
					_qty = { (_x == _itemIn) || (configName(inheritsFrom(configFile >> "cfgWeapons" >> _x)) == _itemIn) } count weapons player;
					if (_qty < _countIn) exitWith { _missing = _itemIn; _missingQty = (_countIn - _qty); _proceed = false; };
				} count _requirementsWeapon;

				if (_proceed) then {
					[player,20,true,(getPosATL player)] spawn player_alertZombies;
					_finished = ["Medic",1] call fn_loopAction;
					if (!_finished) exitWith {};
					if (count (crew _vehicle) > 0) exitWith {format [localize "STR_CL_LOG_FAIL_PLAYER",_displayname] call dayz_rollingMessages;};

					_temp_removed_array_mag = [];
					_temp_removed_array_wep = [];
					_removed_total = 0;
					_tobe_removed_total = 0;

					{
						_removed = 0;
						_itemIn = _x select 0;
						_countIn = _x select 1;
						//diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];
						_tobe_removed_total = _tobe_removed_total + _countIn;

						{
							if ((_removed < _countIn) && {(_x == _itemIn) || {configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn}}) then {
								_num_removed = ([player,_x] call BIS_fnc_invRemove);
								_removed = _removed + _num_removed;
								_removed_total = _removed_total + _num_removed;
								if (_num_removed >= 1) then {
									_temp_removed_array_mag set [count _temp_removed_array_mag,_x];
								};
							};
						} count magazines player;
					} forEach _requirementsMagazine;

					{
						_removed = 0;
						_itemIn = _x;
						_countIn = 1;
						//diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];
						_tobe_removed_total = _tobe_removed_total + _countIn;

						{
							if ((_removed < _countIn) && {(_x == _itemIn) || {configName(inheritsFrom(configFile >> "cfgWeapons" >> _x)) == _itemIn}}) then {
								_num_removed = ([player,_x] call BIS_fnc_invRemove);
								_removed = _removed + _num_removed;
								_removed_total = _removed_total + _num_removed;
								if (_num_removed >= 1) then {
									_temp_removed_array_wep set [count _temp_removed_array_wep,_x];
								};
							};
						} count weapons player;
					} forEach _requirementsWeapon;

					// all parts removed proceed
					if (_tobe_removed_total == _removed_total) then {

						_objectID = _vehicle getVariable ["ObjectID","0"];
						_objectUID = _vehicle getVariable ["ObjectUID","0"];

						if (_objectID == "0" && {_objectUID == "0"}) then {
							localize "str_epoch_player_50" call dayz_rollingMessages;
						} else {
							// Get position
							_location	= getposATL _vehicle;

							// Get direction
							_dir = getDir _vehicle;

							// Current charID
							_objectCharacterID 	= _vehicle getVariable ["CharacterID","0"];
							localize "STR_EPOCH_VEHUP_IN_PROGRESS" call dayz_rollingMessages;
							[_newclassname,objNull] call fn_waitForObject;
							dze_waiting = nil;
							PVDZE_veh_Upgrade = [_vehicle,[_dir,_location],_newclassname,true,_objectCharacterID,player,dayz_authKey];
							publicVariableServer "PVDZE_veh_Upgrade";

							//Wait for hive to finish spawning vehicle. Prevents dupe via player queuing multiple upgrades.
							waitUntil {!isNil "dze_waiting"};

							if (dze_waiting == "fail") then {
							    {player addMagazine _x;} count _temp_removed_array_mag;
	    							{player addWeapon _x;} count _temp_removed_array_wep;
	    							format[localize "str_crafting_failed",_newclassname] call dayz_rollingMessages;
							} else {
	    							localize "STR_EPOCH_VEHUP_SUCCESS" call dayz_rollingMessages;
								["Working",0,[3,2,4,0]] call dayz_NutritionSystem;
							};
						};
					} else {
						{player addMagazine _x;} count _temp_removed_array_mag;
						{player addWeapon _x;} count _temp_removed_array_wep;
						format[localize "str_epoch_player_145",_removed_total,_tobe_removed_total] call dayz_rollingMessages;
					};
				} else {
					_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
					format[localize "STR_EPOCH_ACTIONS_6",_missingQty, _textMissing] call dayz_rollingMessages;

					systemchat localize "STR_CRAFTING_NEEDED_ITEMS";

					if (count _requirementsMagazine > 0) then {
						{
							_text = getText(configFile >> "CfgMagazines" >> (_x select 0) >> "displayName");
							systemchat format ["%2x %1",_text,(_x select 1)];
						} count _requirementsMagazine;
					};
					if (count _requirementsWeapon > 0) then {
						{
							_text = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
							systemchat format ["1x %1",_text];

						} count _requirementsWeapon;
					};
				};
			};
		} else {
			format [localize "STR_EPOCH_VEHUP_NO_UPGRADE_FOR_VEHICLE",_upgradeName,_displayname] call dayz_rollingMessages;
		};
	} else {
		localize "str_epoch_player_245" call dayz_rollingMessages;
	};
} else {
	format [localize "STR_CL_LOG_FAIL_PLAYER",_displayname] call dayz_rollingMessages;
};

dayz_actionInProgress = false;
