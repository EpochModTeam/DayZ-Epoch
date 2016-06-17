/*
	DayZ Base Building Upgrades
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_location","_dir","_classname","_text","_object","_objectID","_objectUID","_newclassname","_refund","_obj","_upgrade","_objectCharacterID","_canBuildOnPlot","_friendlies","_nearestPole","_ownerID","_distance","_needText","_findNearestPoles","_findNearestPole","_IsNearPlot","_i","_invResult","_itemOut","_countOut","_abortInvAdd","_addedItems"];

if (DZE_ActionInProgress) exitWith {localize "str_epoch_player_48" call dayz_rollingMessages;};
DZE_ActionInProgress = true;

player removeAction s_player_downgrade_build;
s_player_downgrade_build = 1;

_distance = DZE_PlotPole select 0;
_needText = localize "str_epoch_player_246";
_playerUID = [player] call FNC_GetPlayerUID;
_canBuildOnPlot = false;
_plotcheck = [player, false] call FNC_find_plots;
_IsNearPlot = _plotcheck select 1;
_nearestPole = _plotcheck select 2;

if(_IsNearPlot == 0) then {
	_canBuildOnPlot = true;
} else {
	_ownerID = _nearestPole getVariable["CharacterID","0"];
	if(dayz_characterID == _ownerID) then {
		_canBuildOnPlot = true;
	} else {
		if (DZE_permanentPlot) then {
			_buildcheck = [player, _nearestPole] call FNC_check_access;
			_isowner = _buildcheck select 0;
			_isfriendly = ((_buildcheck select 1) or (_buildcheck select 3));
			if (_isowner || _isfriendly) then {
				_canBuildOnPlot = true;
			};
		} else {
			_friendlies	= player getVariable ["friendlyTo",[]];
			if(_ownerID in _friendlies) then {
				_canBuildOnPlot = true;
			};
		};
	};
};

// exit if not allowed due to plot pole
if(!_canBuildOnPlot) exitWith {  DZE_ActionInProgress = false; format[localize "str_epoch_player_141",_needText,_distance] call dayz_rollingMessages; };

// get cursortarget from addaction
_obj = _this select 3;

// Current charID
_objectCharacterID 	= _obj getVariable ["CharacterID","0"];


if (DZE_Lock_Door != _objectCharacterID) exitWith {DZE_ActionInProgress = false; localize "str_epoch_player_49" call dayz_rollingMessages;};

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
_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "downgradeBuilding");

if ((count _upgrade) > 0) then {

	_newclassname = _upgrade select 0;

	_refund = _upgrade select 1;
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
	player playActionNow "Medic";
	[player,20,true,(getPosATL player)] spawn player_alertZombies;

	_invResult = false;
	_abortInvAdd = false;
	_i = 0;
	_addedItems = [];
	//Remove melee magazines (BIS_fnc_invAdd fix)
	{player removeMagazines _x} count MeleeMagazines;

	{
		_itemOut = _x select 0;
		_countOut = _x select 1;

		for "_x" from 1 to _countOut do {
			_invResult = [player,_itemOut] call BIS_fnc_invAdd;
			if(!_invResult) exitWith {
				_abortInvAdd = true;
			};
			if(_invResult) then {
				_i = _i + 1;
				_addedItems set [(count _addedItems),[_itemOut,1]];
			};
		};

		if (_abortInvAdd) exitWith {};

	} count _refund;

	// all parts added proceed
	if(_i != 0) then {
		// Get position
		_location	= _obj getVariable["OEMPos",(getposATL _obj)];

		// Get direction
		_dir = getDir _obj;
		_vector = [(vectorDir _obj),(vectorUp _obj)];

		// Reset the character ID on locked doors before they inherit the newclassname
		if (_classname in DZE_DoorsLocked) then {
			_obj setVariable ["CharacterID",dayz_characterID,true];
			_objectCharacterID = dayz_characterID;
		};

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


		format[localize "str_epoch_player_142",_text] call dayz_rollingMessages;

		PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location, _vector],_classname,_obj,player];
		if (DZE_permanentPlot) then {
			PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location,_playerUID, _vector],_classname,_obj,player];
		};
		publicVariableServer "PVDZE_obj_Swap";

		player reveal _object;
	} else {
		format[localize "str_epoch_player_143",_i,getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName")] call dayz_rollingMessages;
		{
			[player,(_x select 0),(_x select 1)] call BIS_fnc_invRemove;
		} count _addedItems;
	};
} else {
	localize "str_epoch_player_51" call dayz_rollingMessages;
};

DZE_ActionInProgress = false;
s_player_downgrade_build = -1;
