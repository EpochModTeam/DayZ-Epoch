/*
	DayZ Base Building Maintenance
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_location","_dir","_classname","_missing","_text","_proceed","_num_removed","_object","_missingQty","_itemIn","_countIn","_qty","_removed","_removed_total","_tobe_removed_total","_objectID","_objectUID","_temp_removed_array","_textMissing","_requirements","_obj","_upgrade","_objectCharacterID"];

if(TradeInprogress) exitWith { cutText ["Upgrade already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_maint_build;
s_player_maint_build = 1;

// get cursortarget from addaction
_obj = _this select 3;

// Get classname
_classname = typeOf _obj;

// Find display name
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

// Find next maintain
_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "maintainBuilding");

if ((count _upgrade) > 0) then {
	_requirements = _upgrade;
} else {
	_requirements = [["PartGeneric",1]];
};

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

		// Find CharacterID
		_objectCharacterID 	= _obj getVariable ["CharacterID","0"];
		
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

		// Publish variables
		_object setVariable ["CharacterID",_objectCharacterID,true];
		
		//_object setVariable ["ObjectUID",_objectUID,true];
		_object setVariable ["OEMPos",_location,true];

		dayzPublishObj = [_objectCharacterID,_object,[_dir,_location],_classname];
		publicVariableServer "dayzPublishObj";

		cutText [format["You have repaired %1.",_text], "PLAIN DOWN", 5];

		player reveal _object;
		
	} else {
	
		{player addMagazine _x;} forEach _temp_removed_array;
		cutText [format["Missing Parts after first check Item: %1 / %2",_removed_total,_tobe_removed_total], "PLAIN DOWN"];
	
	};
} else {
	_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
	cutText [format["Missing %1 more of %2",_missingQty, _textMissing], "PLAIN DOWN"];
};


TradeInprogress = false;
s_player_maint_build = -1;