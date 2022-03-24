///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	[_obj] call player_packTent;
//
//	Updated by:	Victor the Cleaner
//	Date:		August 2021
//
//	- Now includes helper spheres for improved player experience
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (dayz_actionInProgress) exitWith {
	localize "str_player_actionslimit" call dayz_rollingMessages;		// Wait for the previous action to complete to perform another!
};
dayz_actionInProgress = true;

local _obj	= _this;
local _objType	= typeOf _obj;
local _objectID	= _obj getVariable["ObjectID","0"];
local _objectUID = _obj getVariable["ObjectUID","0"];
local _ownerID = _obj getVariable["ownerPUID","0"];

local _playerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 12]) > 1;
if (_playerNear) exitWith {
	dayz_actionInProgress = false;
	localize "str_pickup_limit_5" call dayz_rollingMessages;		// Another player is nearby. Only one player can be near to perform this action.
};

local _packobj = getText (configFile >> "CfgVehicles" >> _objType >> "pack");	// classname

player removeAction s_player_packtent;
s_player_packtent = -1;
player removeAction s_player_packtentinfected;
s_player_packtentinfected = -1;

if ((_ownerID == dayz_playerUID) || {_objType in ["IC_DomeTent","IC_Tent"]}) then {	// if player is the owner, or infected camp items

	local _alreadyPacking = _obj getVariable["packing", 0];

	if (_alreadyPacking == 1) exitWith {
		localize "str_player_beingpacked" call dayz_rollingMessages;		// That tent is already being packed.
	};

	local _text = getText (configFile >> "CfgVehicles" >> _objType >> "displayName");
	format[localize "str_epoch_player_121", _text] call dayz_rollingMessages;	// Packing %1, move from this position to cancel within 5 seconds.

	_obj setVariable["packing", 1, true];

	local _dir = direction _obj;
	local _pos = getPosATL _obj;

	[_obj, DZE_NoRefundTexture] call fn_displayHelpers;			// create helpers (red)

	[player,(getPosATL player), 20, "tentpack"] spawn fnc_alertZombies;	// make noise

	local _finished = ["Medic",1] call fn_loopAction;			// animation
	
	[] call fn_displayHelpers;						// delete helpers

	if (isNull _obj) exitWith {};

	if (!_finished) exitWith {_obj setVariable["packing", 0, true];};	// cancel & reset

	_pos set [2, (getPosATL player) select 2];

	if (_pos select 2 < 0) then {				// match player height or place on ground
		_pos set [2,0];
	};

	local _bag = _packobj createVehicle [0,0,0];		// packed tent
	_bag setDir _dir;
	_bag setPosATL _pos;

	local _holder = "WeaponHolder" createVehicle [0,0,0];	// any packed items go here
	_holder setPosATL _pos;

	local _weapons = getWeaponCargo _obj;			// prepare items
	local _magazines = getMagazineCargo _obj;
	local _backpacks = getBackpackCargo _obj;

	PVDZ_obj_Destroy = [netID player,netID _obj, dayz_authKey];	// delete original tent
	publicVariableServer "PVDZ_obj_Destroy";

	[_weapons, _magazines, _backpacks, _holder] call fn_addCargo;	// pile everything onto the ground

	player reveal _holder;

	localize "str_success_tent_pack" call dayz_rollingMessages;	// Your tent has been packed
} else {
	localize "str_fail_tent_pack" call dayz_rollingMessages;	// You cannot pack this tent, it is not yours
};

dayz_actionInProgress = false;
