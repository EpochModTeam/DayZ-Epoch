/*
	DayZ Epoch Vehicle Upgrades
	Made for DayZ Unleashed by [VB]AWOL please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_proceed","_itemIn","_countIn","_missing","_missingQty","_qty","_removed","_tobe_removed_total","_textMissing","_num_removed","_removed_total","_temp_removed_array","_countr","_objectID","_objectUID","_location","_dir","_objectCharacterID","_weapons","_magazines","_backpacks","_classname","_object","_holder","_objWpnTypes","_objWpnQty","_newclassname","_requirements","_upgrade","_vehicle","_findNearestVehicles","_findNearestVehicle","_IsNearVehicle"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "STR_EPOCH_PLAYER_52") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

if (vehicle player != player) exitWith {DZE_ActionInProgress = false; cutText ["\n\nYou cannot perform an upgrade while still inside a vehicle.", "PLAIN DOWN"]};

// look for nearest empty vehicle
_findNearestVehicles = nearestObjects [player, ["LandVehicle"], 10];
_findNearestVehicle = [];
{
	if (alive _x and (count (crew _x)) == 0) exitWith {
		_findNearestVehicle set [(count _findNearestVehicle),_x];
	};
} foreach _findNearestVehicles;

_IsNearVehicle = count (_findNearestVehicle);
if (_IsNearVehicle >= 1) then {

	_vehicle = _findNearestVehicle select 0;

	_notNearestPlayer = _vehicle call dze_isnearest_player;
		
	if (!isNull _vehicle and local _vehicle and !_notNearestPlayer) then {

		_classname = typeOf _vehicle;

		// lookup vehicle and find if any upgrades are available
		_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "upgradeVehicle");

		if ((count _upgrade) > 0) then {

			_newclassname = _upgrade select 0;
			_requirements = _upgrade select 1;
	
			_missingQty = 0;
			_missing = "";
	
			_proceed = true;
			{
				_itemIn = _x select 0;
				_countIn = _x select 1;
				_qty = { (_x == _itemIn) || (configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn) } count magazines player;
				if(_qty < _countIn) exitWith { _missing = _itemIn; _missingQty = (_countIn - _qty); _proceed = false; };
			} forEach _requirements;
	
			if (_proceed) then {

				player playActionNow "Medic";
				[player,20,true,(getPosATL player)] spawn player_alertZombies;
	
				_temp_removed_array = [];
				_removed_total = 0;
				_tobe_removed_total = 0;
		
				{
					_removed = 0;
					_itemIn = _x select 0;
					_countIn = _x select 1;
					// diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];
					_tobe_removed_total = _tobe_removed_total + _countIn;

					{					
						if( (_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
							_num_removed = ([player,_x] call BIS_fnc_invRemove);
							_removed = _removed + _num_removed;
							_removed_total = _removed_total + _num_removed;
							if(_num_removed >= 1) then {
								_temp_removed_array set [count _temp_removed_array,_x];
							};
						};
		
					} forEach magazines player;

				} forEach _requirements;

				// all parts removed proceed
				if (_tobe_removed_total == _removed_total) then {
			
					_objectID 	= _vehicle getVariable ["ObjectID","0"];
					_objectUID	= _vehicle getVariable ["ObjectUID","0"];

					PVDZE_obj_Delete = [_objectID,_objectUID,player];
					publicVariableServer "PVDZE_obj_Delete";

					// Get position
					_location	= getposATL _vehicle;

					// Get direction
					_dir = direction _vehicle;

					// Current charID
					_objectCharacterID 	= _vehicle getVariable ["CharacterID","0"];

					_weapons = 		getWeaponCargo _vehicle;
					_magazines = 	getMagazineCargo _vehicle;
					_backpacks = 	getBackpackCargo _vehicle;

					// remove old vehicle
					deleteVehicle _vehicle; 						
						
					_classname = _newclassname;
			
					// Create new object 
					_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];

					// Set direction
					_object setDir _dir;

					// Set location
					_object setPosATL _location;

					PVDZE_veh_Publish2 = [_object,[_dir,_location],_classname,true,_objectCharacterID,player];
					publicVariableServer  "PVDZE_veh_Publish2";

					_holder = _object;
						
					//Add weapons
					_objWpnTypes = 	_weapons select 0;
					_objWpnQty = 	_weapons select 1;
					_countr = 0;
					{
						_holder addWeaponCargoGlobal [_x,(_objWpnQty select _countr)];
						_countr = _countr + 1;
					} forEach _objWpnTypes;
	
					//Add Magazines
					_objWpnTypes = _magazines select 0;
					_objWpnQty = _magazines select 1;
					_countr = 0;
					{
						_holder addMagazineCargoGlobal [_x,(_objWpnQty select _countr)];
						_countr = _countr + 1;
					} forEach _objWpnTypes;

					//Add Backpacks
					_objWpnTypes = _backpacks select 0;
					_objWpnQty = _backpacks select 1;
					_countr = 0;
					{
						_holder addBackpackCargoGlobal [_x,(_objWpnQty select _countr)];
						_countr = _countr + 1;
					} forEach _objWpnTypes;

					player reveal _object;
					cutText [(localize "STR_EPOCH_VEHUP_SUCCESS"), "PLAIN DOWN"];
						
				} else {
		
					{player addMagazine _x;} forEach _temp_removed_array;
					cutText [format[(localize "str_epoch_player_145"),_removed_total,_tobe_removed_total], "PLAIN DOWN"];
		
				};
			} else {
				_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
				cutText [format[(localize "str_epoch_player_146"),_missingQty, _textMissing], "PLAIN DOWN"];
			};
		} else {
			cutText [(localize "str_epoch_player_82"), "PLAIN DOWN"];
		};
	} else {
		cutText [(localize "str_epoch_player_245"), "PLAIN DOWN"];
	};
} else {
	cutText [(localize "STR_EPOCH_PLAYER_27"), "PLAIN DOWN"];
};

DZE_ActionInProgress = false;
