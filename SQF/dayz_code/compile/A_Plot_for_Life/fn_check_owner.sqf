// Check Ownership by RimBlock (http://epochmod.com/forum/index.php?/user/12612-rimblock/)

private ["_player","_object","_playerUID","_ObjectOwner","_owner","_friendlies","_friendly"];

_player = _this select 0;
_Object = _this select 1;

_Owner = false;
_friendly = false;
_friendlies = [];
_ObjectOwner = "0";

if (DZE_plotManagement) then {
	_friendlies = [_Object, true] call dze_getPlotFriends;
} else {
	_friendlies	= _player getVariable ["friendlyTo",[]];
};

if (DZE_plotforLife) then {
	_playerUID = [_player] call FNC_GetPlayerUID;
	_ObjectOwner = _object getVariable ["ownerPUID","0"];
	_owner = (_playerUID == _ObjectOwner);
} else {
	_ObjectOwner = _object getVariable["CharacterID","0"];
	_owner = (_ObjectOwner == dayz_characterID);
};

if (_ObjectOwner in _friendlies) then {
	_friendly = true;
};

[_owner, _friendly];