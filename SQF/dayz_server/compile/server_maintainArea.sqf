/* Maintain Area - written by Skaronator */
/*
1: PVDZE_maintainArea = [player,1,[[Object, _objectID, _objectUID],[Object, _objectID, _objectUID]...etc]];
2: PVDZE_maintainArea = [player,2,[Object, _objectID, _objectUID]];
*/

private ["_player","_option","_obj","_name","_objectsInfo","_UID","_ID","_key"];

_player = _this select 0;
_option = _this select 1;
_objectsInfo = _this select 2;

if (_option == 1) then {
	{
		_obj = _x select 0;
		_ID = _x select 1;
		_UID = _x select 2;
			if (_ID == "0") then {
				if (_UID != "0") then {
					_obj setDamage 0;
					_key = format["CHILD:397:%1:", _UID];
					_key call server_hiveWrite;
				};
			} else {
				_obj setDamage 0;
				_key = format["CHILD:396:%1:", _ID];
				_key call server_hiveWrite;
			};
	} count _objectsInfo;
	_name = if (alive _player) then { name _player; } else { "Dead Player"; };
	diag_log format ["MAINTAIN AREA BY %1 - %2 Objects at %3", _name, (count _objectsInfo), (getPosATL _player)];
} else {
	_obj = _objectsInfo select 0;
	_ID = _objectsInfo select 1;
	_UID = _objectsInfo select 2;
		if (_ID == "0") then {
			if (_UID != "0") then {
				_obj setDamage 0;
				_key = format["CHILD:397:%1:", _UID];
				_key call server_hiveWrite;
			};
		} else {
			_obj setDamage 0;
			_key = format["CHILD:396:%1:", _ID];
			_key call server_hiveWrite;
		};
};