/*
	DayZ Base Building Upgrades
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_location","_dir","_classname","_missing","_text","_proceed","_num_removed","_object","_missingQty","_itemIn","_countIn","_qty","_removed","_removed_total","_tobe_removed_total","_objectID","_objectUID","_temp_removed_array","_textMissing","_newclassname","_requirements","_obj","_upgrade","_lockable","_combination_1_Display","_combination_1","_combination_2","_combination_3","_combination","_combinationDisplay","_objectCharacterID"];

if(TradeInprogress) exitWith { cutText ["Upgrade already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_upgrade_build;
s_player_upgrade_build = 1;

// get cursortarget from addaction
_obj = _this select 3;

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

			// Find objectID
			_objectID 	= _obj getVariable ["ObjectID","0"];

			// Find objectUID
			_objectUID	= _obj getVariable ["ObjectUID","0"];
			
			// Current charID
			_objectCharacterID 	= _obj getVariable ["CharacterID","0"];

			_classname = _newclassname;
			
			// Create new object 
			_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];

			// Set direction
			_object setDir _dir;

			// Set location
			_object setPos _location;

			// Remove old object
			deleteVehicle _obj;

			// Delete object from database
			dayzDeleteObj = [_objectID,_objectUID];
			publicVariableServer "dayzDeleteObj";

			// sleep a bit to make sure delete happens before create
			sleep 1;

			if (_lockable == 3) then {

				_combination_1 = floor(random 10);
				_combination_2 = floor(random 10);
				_combination_3 = floor(random 10);
				_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];
				
				_objectCharacterID = _combination;
				
				cutText [format["You have upgraded %2. Combination is %1",_combination,_text], "PLAIN DOWN", 5];
			} else {	
				cutText [format["You have upgraded %1.",_text], "PLAIN DOWN", 5];
			};

			// Publish variables
			_object setVariable ["CharacterID",_objectCharacterID,true];

			//_object setVariable ["ObjectUID",_objectUID,true];
			_object setVariable ["OEMPos",_location,true];

			dayzPublishObj = [_objectCharacterID,_object,[_dir,_location],_classname];
			publicVariableServer "dayzPublishObj";		

			player reveal _object;
			
		} else {
		
			{player addMagazine _x;} forEach _temp_removed_array;
			cutText [format["Missing Parts after first check Item: %1 / %2",_removed_total,_tobe_removed_total], "PLAIN DOWN"];
		
		};
	} else {
		_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
		cutText [format["Missing %1 more of %2",_missingQty, _textMissing], "PLAIN DOWN"];
	};

} else {
	cutText ["No upgrades available", "PLAIN DOWN"];
};

TradeInprogress = false;
s_player_upgrade_build = -1;