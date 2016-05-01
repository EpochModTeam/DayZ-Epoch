//Checks if item is near a plot, if the player is plot owner or friendly, if there are too many items, and if the player has required tools
private ["_requireplot","_distance","_canBuild","_friendlies","_nearestPole","_ownerID","_pos","_item","_classname","_isPole","_isLandFireDZ","_needText","_findNearestPoles","_findNearestPole","_IsNearPlot","_buildables","_center"];

_pos = _this select 0;
_item =	_this select 1;
_toolCheck = _this select 2;
_classname = getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_requireplot = DZE_requireplot;
// "Unable to build trader nearby."
if (!canbuild) exitWith {DZE_ActionInProgress = false; format[localize "STR_EPOCH_PLAYER_136",localize "STR_EPOCH_TRADER"] call dayz_rollingMessages; [false, false];};

if(isNumber (configFile >> "CfgVehicles" >> _classname >> "requireplot")) then {
	_requireplot = getNumber(configFile >> "CfgVehicles" >> _classname >> "requireplot");
};
_isPole = (_classname == "Plastic_Pole_EP1_DZ");
_isLandFireDZ = (_classname == "Land_Fire_DZ");
_needText = localize "str_epoch_player_246";

_distance = if (_isPole) then {DZE_PlotPole select 1} else {DZE_PlotPole select 0};
_canBuild = false;
_nearestPole = objNull;
_ownerID = 0;
_friendlies = [];

_findNearestPoles = nearestObjects [_pos, ["Plastic_Pole_EP1_DZ"], _distance];
_findNearestPole = [];
{
	if (alive _x) then {
		_findNearestPole set [count _findNearestPole,_x];
	};
} count _findNearestPoles;

_IsNearPlot = count _findNearestPole;
if(_isPole && {_IsNearPlot > 0}) exitWith {DZE_ActionInProgress = false; format[localize "str_epoch_player_44",_distance] call dayz_rollingMessages; [_canBuild, _isPole];};
if(_IsNearPlot == 0) then {
	if (_requireplot == 0 || _isLandFireDZ) then {
		_canBuild = true;
	};
} else {
	_nearestPole = _findNearestPole select 0;
	_ownerID = _nearestPole getVariable ["CharacterID","0"];
	if(dayz_characterID == _ownerID) then {
		if (!_isPole) then {
			_canBuild = true;
		};
	} else {
		if(!_isPole) then {
			if( DZE_plotManagement ) then {
				_allowedUIDs = [_nearestPole, false, true] call dze_getPlotFriends;
				if((dayz_playerUID in _allowedUIDs) || (dayz_characterID in _allowedUIDs)) then {
					_canBuild = true;
				};
			} else {
				_friendlies	= player getVariable ["friendlyTo",[]];
				if(_ownerID in _friendlies) then {
					_canBuild = true;
				};
			};
		};
	};
};
if(!_canBuild) exitWith {  DZE_ActionInProgress = false; format[localize "STR_EPOCH_PLAYER_135",_needText,_distance] call dayz_rollingMessages; [_canBuild, _isPole];};

_buildables = DZE_maintainClasses + DZE_LockableStorage + ["DZ_buildables","DZ_storage_base"];
_center = if (isNull _nearestPole) then {_pos} else {_nearestPole};
if ((count (nearestObjects [_center,_buildables,_distance])) >= DZE_BuildingLimit) exitWith {DZE_ActionInProgress = false; format[localize "str_epoch_player_41",_distance] call dayz_rollingMessages; [false, _isPole];};

if (_toolCheck) then {
	_require =  getArray (configFile >> "cfgMagazines" >> _item >> "ItemActions" >> "Build" >> "require");
	_classname = getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
	_canBuild = [_item, _require, _classname] call dze_requiredItemsCheck;
};

//When calling this function in another script use a silent exitWith, unless you have something special to say. i.e. if (!(_canBuild select 0)) exitWith{};
[_canBuild, _isPole];