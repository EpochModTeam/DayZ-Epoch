/*
	DayZ Base Building Upgrades
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_location","_dir","_classname","_missing","_text","_proceed","_num_removed","_object","_missingQty","_itemIn","_countIn","_qty","_removed","_removed_total","_tobe_removed_total","_objectID","_objectUID","_temp_removed_array","_textMissing","_newclassname","_requirements","_obj","_upgrade","_lockable","_combination_1","_combination_2","_combination_3","_combination","_objectCharacterID","_ownerID"];

if (DZE_ActionInProgress) exitWith {localize "str_epoch_player_52" call dayz_rollingMessages;};
DZE_ActionInProgress = true;

player removeAction s_player_upgrade_build;
s_player_upgrade_build = 1;

// get cursortarget from addaction
_obj = _this select 3;

// Find objectID
_objectID 	= _obj getVariable ["ObjectID","0"];

// Find objectUID
_objectUID	= _obj getVariable ["ObjectUID","0"];

if (_objectID == "0" && _objectUID == "0") exitWith {DZE_ActionInProgress = false; s_player_upgrade_build = -1; localize "str_epoch_player_50" call dayz_rollingMessages;};

// Get classname
_classname = typeOf _obj;

// Find display name
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

// Find next upgrade
_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "upgradeBuilding");

if ((count _upgrade) > 0) then {

	_newclassname = _upgrade select 0;

	_lockable = 0;
	if(isNumber (configFile >> "CfgVehicles" >> _newclassname >> "lockable")) then {
		_lockable = getNumber(configFile >> "CfgVehicles" >> _newclassname >> "lockable");
	};

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
		["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
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
			
			// Get position
			_location	= _obj getVariable["OEMPos",(getposATL _obj)];

			// Get direction
			_dir = getDir _obj;
			// Get vector
			_vector = [(vectorDir _obj),(vectorUp _obj)];	

			// Current charID
			_objectCharacterID 	= _obj getVariable ["CharacterID","0"];

			_classname = _newclassname;
			
			// Create new object 
			_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];

			// Set direction
			_object setDir _dir;
			_object setVariable["memDir",_dir,true];
			
			// Set vector
			_object setVectorDirAndUp _vector;

			// Set location
			_object setPosATL _location;

			if (_lockable == 3) then {

				_combination_1 = floor(random 10);
				_combination_2 = floor(random 10);
				_combination_3 = floor(random 10);
				_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];
				
				_objectCharacterID = _combination;
				
				format[localize "str_epoch_player_158",_combination,_text] call dayz_rollingMessages;
			} else {	
				format[localize "str_epoch_player_159",_text] call dayz_rollingMessages;
			};
			if (DZE_permanentPlot) then {
				_ownerID = _obj getVariable["ownerPUID","0"];
				if (_ownerID == "0") then { _ownerID = [player] call FNC_GetPlayerUID; }; //APFL is on but UID is 0 so we will claim it to record the ownership.
				_object setVariable ["ownerPUID",_ownerID,true];
				PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location,_ownerID,_vector],_classname,_obj,player];
			} else {
				PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location,_vector],_classname,_obj,player];
			};
			publicVariableServer "PVDZE_obj_Swap";

			player reveal _object;
			
		} else {
		
			{player addMagazine _x;} count _temp_removed_array;
			format[localize "str_epoch_player_145",_removed_total,_tobe_removed_total] call dayz_rollingMessages;
		
		};
	} else {
		_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
		format[localize "STR_EPOCH_ACTIONS_6",_missingQty, _textMissing] call dayz_rollingMessages;
	};

} else {
	localize "str_epoch_player_82" call dayz_rollingMessages;
};

DZE_ActionInProgress = false;
s_player_upgrade_build = -1;
