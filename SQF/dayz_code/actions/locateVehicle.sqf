/*
	locateVehicle by salival (https://github.com/oiad)
*/

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_characterID","_found","_i","_keyID","_keyIDS","_keyList","_keyName","_keyNames","_locateMarkerDelete","_locateMarkerTime","_marker","_name","_position","_vehicle"];

_keyList = call epoch_tempKeys;
_keyIDS = _keyList select 0;
_keyNames = _keyList select 1;

_locateMarkerDelete = true; // Delete markers after a certain amount of time to avoid cluttering the map?
_locateMarkerTime = 60; // Time in seconds before markers are deleted if enabled above.

_i = 0;
for "_i" from 0 to 60 do {deleteMarkerLocal ("vehicleMarker"+ (str _i));};

if (count _keyIDS < 1) exitWith {dayz_actionInProgress = false; systemChat localize "STR_CL_LV_NO_KEYS";};

_i = 0;
{
	_keyID = parseNumber (_keyIDS select _forEachIndex);
	_keyName = _keyNames select _forEachIndex;
	_found = 0;
	{
		_vehicle = typeOf _x;
		_characterID = parseNumber (_x getVariable ["CharacterID","0"]);
		if ((_characterID == _keyID) && {_vehicle isKindOf "Air" || {_vehicle isKindOf "LandVehicle"} || {_vehicle isKindOf "Ship"}}) then {
			_found = _found +1;
			_i = _i +1;
			_position = getPos _x;
			_name = getText (configFile >> "CfgVehicles" >> _vehicle >> "displayName");
			_marker = createMarkerLocal ["vehicleMarker" + (str _i),[_position select 0,_position select 1]];
			_marker setMarkerShapeLocal "ICON";
			_marker setMarkerTypeLocal "DOT";
			_marker setMarkerColorLocal "ColorOrange";
			_marker setMarkerSizeLocal [1.0, 1.0];
			_marker setMarkerTextLocal format ["%1",_name];
			systemChat format[localize "STR_CL_LV_BELONGS",_keyName,_name,if (!alive _x) then {toLower (format [" (%1)",localize "str_artdlg_destroyed"])} else {""}];
		};
	} forEach vehicles;
	if (_found == 0) then {systemChat format[localize "STR_CL_LV_NO_VEHICLES",_keyName]};
} forEach _keyIDS;

if (_i > 0) then {
	systemChat format[localize "STR_CL_LV_FOUND",_i];
	if (_locateMarkerDelete) then {
		_locateMarkerTime spawn {
			uiSleep _this;
			for "_i" from 0 to 60 do {deleteMarkerLocal ("vehicleMarker"+ (str _i));};
		};
	};
};

dayz_actionInProgress = false;
