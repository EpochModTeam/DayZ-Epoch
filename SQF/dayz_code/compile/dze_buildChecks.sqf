///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Updated by:	Victor the Cleaner
//	Date:		August 2021
//
//	Performs 12 different build checks
//
//	 1) You are not allowed to build here a "Trader" is nearby.
//	 2) You cannot build a plot pole within "_distance" of an existing plot.
//	 3) You can only own "DZE_limitPlots" plot pole(s)
//	 4) This item needs a "Plot Pole" within "_distance" meters
//	 5) You do not have access to build on this plot.
//	 6) Building is restricted above "DZE_BuildHeightLimit" meter(s).
//	 7) You are not allowed to build over sea water.
//	 8) You cannot build within %1m of a restricted zone.
//	 9) You cannot build within %1m of a blacklisted building.
//	10) You cannot build. There are too many objects within "DZE_maintainRange" m.
//	11) You can't build a "displayName" within "_distance" meters of a safe zone.
//	12) You can't build a "displayName" within "DZE_NoBuildNearDistance" meters of a "class".
//	13) Tool Check (silent)
//
//	Input values  = [position, classname, toolcheck];
//	Return values = [_canBuild, _isPole, _nearestPole];	// added _nearestPole
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Initialize
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _pos		= _this select 0;
local _item		= _this select 1;
local _toolCheck	= _this select 2;

local _classname	= getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
local _isPole		= (_classname == "Plastic_Pole_EP1_DZ");
local _isAdmin		= dayz_playerUID in DZE_PlotManagementAdmins;
local _canBuild		= false;
local _plotPoles	= 0;
local _radius		= DZE_PlotPole select 0;
local _minDistance	= DZE_PlotPole select 1;
local _requireplot	= DZE_requireplot;
local _message		= "";	// for blacklisted zones and buildings

if (isNumber (configFile >> "CfgVehicles" >> _classname >> "requireplot")) then {
	_requireplot = getNumber(configFile >> "CfgVehicles" >> _classname >> "requireplot");
};
if (_classname in DZE_requirePlotOverride) then {_requireplot = 1;};

local _plotcheck	= [player, _isPole] call FNC_find_plots;
local _distance		= _plotcheck select 0;
local _isNearPlot	= _plotcheck select 1;
local _nearestPole	= _plotcheck select 2;	// object or objNull

local _isOnWater	= surfaceIsWater _pos;
local _heightASL	= _pos select 2;
if (!_isOnWater) then {
	_heightASL = (ATLToASL _pos) select 2;
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	1) You are not allowed to build here a "Trader" is nearby.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (!canbuild) exitWith {

	dayz_actionInProgress = false;
	format[localize "STR_EPOCH_PLAYER_136", localize "STR_EPOCH_TRADER"] call dayz_rollingMessages;

	[_canBuild, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	2) You cannot build a plot pole within "_distance" of an existing plot.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (_isPole && _isNearPlot > 0) exitWith {

	dayz_actionInProgress = false;
	format[localize "str_epoch_player_44", _distance] call dayz_rollingMessages;

	[_canBuild, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	3) You can only own "DZE_limitPlots" plot pole(s)
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (_isPole && !_isAdmin && DZE_limitPlots > 0) then {
	{
		if (_x getVariable["ownerPUID","0"] == dayz_playerUID) then {
			_plotPoles = _plotPoles + 1;
		};
	} count (entities "Plastic_Pole_EP1_DZ");	// all plot poles on the map owned by player
};

if ((DZE_limitPlots > 0) && (_plotPoles >= DZE_LimitPlots)) exitWith {
	dayz_actionInProgress = false;
	format[localize "STR_EPOCH_PLAYER_133", DZE_limitPlots] call dayz_rollingMessages;

	[_canBuild, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	4) This item needs a "Plot Pole" within "_distance" meters
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (_isNearPlot == 0) then {
	if (_requireplot == 0) then {
		_canBuild = true;
	};
};

if (_isNearPlot == 0 && !_canBuild) exitWith {
	dayz_actionInProgress = false;
	format[localize "STR_EPOCH_PLAYER_135", localize "str_epoch_player_246", _distance] call dayz_rollingMessages;

	[_canBuild, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	5) You do not have access to build on this plot.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (_isNearPlot > 0) then {
	local _accessCheck	= [player, _nearestPole] call FNC_check_access;
	local _isowner		= _accessCheck select 0;
	local _isfriendly	= ((_accessCheck select 1) || (_accessCheck select 3));
	if (_isowner || _isfriendly) then {
		_canBuild = true;
	};
};

if (_isNearPlot > 0 && !_canBuild) exitWith {
	dayz_actionInProgress = false;
	localize "STR_EPOCH_PLAYER_134" call dayz_rollingMessages;

	[_canBuild, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	6) Building is restricted above "DZE_BuildHeightLimit" meter(s).
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (DZE_BuildHeightLimit > 0 && ((_pos select 2) > DZE_BuildHeightLimit)) exitWith {

	dayz_actionInProgress = false;
	format[localize "STR_EPOCH_PLAYER_168", DZE_BuildHeightLimit] call dayz_rollingMessages;

	[false, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	7) You are not allowed to build over sea water.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (!DZE_buildOnWater && (_isOnWater || {_heightASL < DZE_maxSeaLevel})) exitWith {

	dayz_actionInProgress = false;
	localize "STR_EPOCH_BUILD_FAIL_WATER" call dayz_rollingMessages;

	[false, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	8) You cannot build within %1m of a restricted zone.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
{
	local _dis = (_x select 2);			// minimum distance
	local _chk = player distance (_x select 1);	// current distance
	
	if (_chk <= _dis) exitWith {			// player is within blacklisted zone
		_message = format[localize "STR_EPOCH_PLAYER_RES_ZONE", _dis, (_x select 0), floor _chk];
	};
} count DZE_RestrictedBuildingZones;

if (_message != "") exitWith {
	dayz_actionInProgress = false;
	_message call dayz_rollingMessages;

	[false, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	9) You cannot build within %1m of a blacklisted building.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
{
	local _dis = (_x select 2);						// minimum distance
	local _chk = count (nearestObjects [player, [(_x select 1)], _dis]);	// blacklisted buildings
	
	if (_chk > 0) exitWith {						// player is too close
		_message = format[localize "STR_EPOCH_PLAYER_RES_BUILDING", _dis, (_x select 0)];
	};
} count DZE_BlacklistedBuildings;

if (_message != "") exitWith {
	dayz_actionInProgress = false;
	_message call dayz_rollingMessages;

	[false, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	10) You cannot build. There are too many objects within "DZE_maintainRange" m.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
// Also count safes, lockboxes, vanilla buildables, tents and stashes against DZE_BuildingLimit

local _buildables = DZE_maintainClasses + DZE_LockableStorage + ["DZ_storage_base"];
local _center = if (isNull _nearestPole) then {
	_pos;		// player's position
} else {
	_nearestPole;
};

if ((count (nearestObjects [_center, _buildables, DZE_maintainRange])) >= DZE_BuildingLimit) exitWith {
	dayz_actionInProgress = false;
	format[localize "str_epoch_player_41", floor DZE_maintainRange] call dayz_rollingMessages;

	[false, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	11) You can't build a "displayName" within "_distance" meters of a safe zone.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _text	= getText (configFile >> "CfgMagazines" >> _item >> "displayName");
local _checkOK	= false;

_distance	= DZE_SafeZoneNoBuildDistance;
{
	if (typeName _x == "ARRAY") then {
		if (_x select 0 == _classname) then {
			_checkOK = true;
			_distance = _x select 1;
		};
	} else {
		if (_x == _classname) then {
			_checkOK = true;
		};
	};
	if (_checkOK) exitWith {};
} count DZE_SafeZoneNoBuildItems;

if (_checkOK && !_isAdmin) then {
	_canBuild = !([player, _distance] call DZE_SafeZonePosCheck);
};

if (!_canBuild) exitWith {
	dayz_actionInProgress = false;
	format [localize "STR_EPOCH_PLAYER_166", _text, _distance] call dayz_rollingMessages;

	[_canBuild, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	12) You can't build a "displayName" within "DZE_NoBuildNearDistance" meters of a "class".
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (count DZE_NoBuildNear > 0 && !_isAdmin) then {
	local _near = (nearestObjects [_pos, DZE_NoBuildNear, DZE_NoBuildNearDistance]);

	if ((count _near) > 0) then {
		_canBuild = false;
	};
};

if (!_canBuild)	exitWith {
	dayz_actionInProgress = false;
	format [localize "STR_EPOCH_PLAYER_167", _text, DZE_NoBuildNearDistance, typeOf (_near select 0)] call dayz_rollingMessages;

	[_canBuild, _isPole, _nearestPole];
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	13) Tool Check (silent)
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (_toolCheck) then {
	local _require =  getArray (configFile >> "cfgMagazines" >> _item >> "ItemActions" >> "Build" >> "require");
	_classname = getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
	_canBuild = [_item, _require, _classname] call dze_requiredItemsCheck;
};
// When calling this function in another script use a silent exitWith, unless you have something special to say. i.e. if !(_canBuild select 0) exitWith {};

[_canBuild, _isPole, _nearestPole];
