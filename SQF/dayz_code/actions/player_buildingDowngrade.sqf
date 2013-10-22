/*
	DayZ Base Building Upgrades
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_location","_dir","_classname","_text","_object","_objectID","_objectUID","_newclassname","_refund","_obj","_upgrade","_objectCharacterID","_canBuildOnPlot","_friendlies","_nearestPole","_ownerID","_distance","_needText","_findNearestPoles","_findNearestPole","_IsNearPlot","_i","_invResult","_itemOut","_countOut","_abortInvAdd","_addedItems"];

if(TradeInprogress) exitWith { cutText ["Downgrade already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_downgrade_build;
s_player_downgrade_build = 1;

_distance = 30;
_needText = "Plot Pole";

// check for near plot
_findNearestPoles = nearestObjects [(vehicle player), ["Plastic_Pole_EP1_DZ"], _distance];
_findNearestPole = [];

{
	if (alive _x) then {
		_findNearestPole set [(count _findNearestPole),_x];
	};
} foreach _findNearestPoles;

_IsNearPlot = count (_findNearestPole);

_canBuildOnPlot = false;

if(_IsNearPlot == 0) then {
	_canBuildOnPlot = true;
} else {
	
	// check nearby plots ownership and then for friend status
	_nearestPole = _findNearestPole select 0;

	// Find owner 
	_ownerID = _nearestPole getVariable["CharacterID","0"];

	// diag_log format["DEBUG BUILDING: %1 = %2", dayz_characterID, _ownerID];

	// check if friendly to owner
	if(dayz_characterID == _ownerID) then {
		_canBuildOnPlot = true;		
	} else {
		_friendlies		= player getVariable ["friendlyTo",[]];
		// check if friendly to owner
		if(_ownerID in _friendlies) then {
			_canBuildOnPlot = true;
		};
	};
};

// exit if not allowed due to plot pole
if(!_canBuildOnPlot) exitWith {  TradeInprogress = false; cutText [format["Unable to downgrade %1 nearby.",_needText,_distance] , "PLAIN DOWN"]; };

// get cursortarget from addaction
_obj = _this select 3;

// Current charID
_objectCharacterID 	= _obj getVariable ["CharacterID","0"];

if(DZE_Lock_Door != _objectCharacterID) exitWith {  TradeInprogress = false; cutText ["Unable to downgrade you do not know the combination." , "PLAIN DOWN"]; };

// Find objectID
_objectID 	= _obj getVariable ["ObjectID","0"];

// Find objectUID
_objectUID	= _obj getVariable ["ObjectUID","0"];

if(_objectID == "0" && _objectUID == "0") exitWith {TradeInprogress = false; s_player_upgrade_build = -1; cutText ["Not setup yet.", "PLAIN DOWN"];};

// Get classname
_classname = typeOf _obj;

// Find display name
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

// Find next upgrade
_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "downgradeBuilding");

if ((count _upgrade) > 0) then {

	_newclassname = _upgrade select 0;

	_refund = _upgrade select 1;
	
	player playActionNow "Medic";
	[player,20,true,(getPosATL player)] spawn player_alertZombies;
		
	_invResult = false;
	_abortInvAdd = false;
	_i = 0;
	_addedItems = [];

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

	} forEach _refund;

	// all parts added proceed
	if(_i != 0) then {
			
		// Get position
		_location	= _obj getVariable["OEMPos",(getposATL _obj)];

		// Get direction
		_dir = getDir _obj;

		_classname = _newclassname;
			
		// Create new object 
		_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];

		// Set direction
		_object setDir _dir;

		// Set location
		_object setPosATL _location;
	
		cutText [format["You have downgraded %1.",_text], "PLAIN DOWN", 5];

		PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location],_classname,_obj,_objectID,_objectUID];
		publicVariableServer "PVDZE_obj_Swap";

		player reveal _object;
			
	} else {
		cutText [format["\n\n%1 of %2 could not be added to your inventory. (not enough room?)", _i,(getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName"))], "PLAIN DOWN"];
		{
			[player,(_x select 0),(_x select 1)] call BIS_fnc_invRemove;
		} forEach _addedItems;
		
	};
	
} else {
	cutText ["No downgrades available", "PLAIN DOWN"];
};

TradeInprogress = false;
s_player_downgrade_build = -1;