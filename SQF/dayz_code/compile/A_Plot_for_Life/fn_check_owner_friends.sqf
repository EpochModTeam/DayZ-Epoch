/* 
	Check object's ownership and friends
	Original concept by RimBlock (github.com/RimBlock)
	
	Parameters: 
	_this select 0: object - player calling this function
	_this select 1: object - target to check ownership and friendlies of
	
	Returns:
	_return select 0: bool - player is owner of target object
	_return select 1: bool - player is friends with owner of target object
*/

private ["_player","_target","_playerUID","_targetOwner","_owner","_friendlies","_friendly","_findNearestPoles","_IsNearPlot","_pole","_friendUID","_ownerID","_friends"];

_player = _this select 0;
_target = _this select 1;
_owner = false;
_friendly = false;
_friendlies = [];
_targetOwner = "0";

if (DZE_permanentPlot) then {
	_pole = _target;
	_IsNearPlot = 0;
	_findNearestPoles = nearestObjects [[player] call FNC_getPos, ["Plastic_Pole_EP1_DZ"], DZE_PlotPole select 0];
	_IsNearPlot = count _findNearestPoles;
	_pole = _findNearestPoles select 0;
	
	if (_IsNearPlot > 0) then {
		_ownerID = _pole getVariable ["ownerPUID","0"];
		_friendlies = [_ownerID];
		_friends = _pole getVariable ["plotfriends", []];
		{
			_friendUID = _x select 0;
			_friendlies set [count _friendlies, _friendUID];
		} count _friends;
		if (count DZE_PlotManagementAdmins > 0) then {
			_friendlies = _friendlies + DZE_PlotManagementAdmins;
		};
	};
	
	_playerUID = [_player] call FNC_GetPlayerUID;
	_targetOwner = _target getVariable ["ownerPUID","0"];
} else {
	_playerUID = dayz_characterID;
	_friendlies	= _player getVariable ["friendlyTo",[]];
	_targetOwner = _target getVariable ["CharacterID","0"];
};

// Check if player is owner of target object
_owner = (_playerUID == _targetOwner);

// Check if player is friends with owner of target object
if (_playerUID in _friendlies) then {
	_friendly = true;
};

[_owner, _friendly]