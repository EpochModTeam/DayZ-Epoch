///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DayZ Base Building Downgrades
//	Made for DayZ Epoch please ask permission to use/edit/distribute email vbawol@veteranbastards.com.
//
//	Updated by:	Victor the Cleaner
//	Date:		August 2021
//
//	- Now includes helper spheres for improved player experience.
//	- Reapply damage to upgraded object if necessary.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_48" call dayz_rollingMessages;};	// Downgrade is already in progress.
dayz_actionInProgress = true;

player removeAction s_player_downgrade_build;
s_player_downgrade_build = 1;

local _obj = _this select 3;

local _objectCharacterID = _obj getVariable ["CharacterID","0"];

if (DZE_Lock_Door != _objectCharacterID) exitWith {		// Unable to downgrade, you do not know the combination.
	dayz_actionInProgress = false;
	s_player_downgrade_build = -1;
	localize "str_epoch_player_49" call dayz_rollingMessages;
};

local _playerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 12]) > 1;

if (_playerNear) exitWith {					// Another player is nearby. Only one player can be near to perform this action.
	dayz_actionInProgress = false;
	s_player_downgrade_build = -1;
	localize "str_pickup_limit_5" call dayz_rollingMessages;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _classname	= typeOf _obj;
local _text		= getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
local _upgrade		= getArray (configFile >> "CfgVehicles" >> _classname >> "downgradeBuilding");

if (count _upgrade > 0) then {

	local _newclassname	= _upgrade select 0;
	local _refund		= _upgrade select 1;

	[_obj] call fn_displayHelpers;						// create helpers

	[player, (getPosATL player), 40, "repair"] spawn fnc_alertZombies;	// make noise

	local _finished = ["Medic",1] call fn_loopAction;			// animation

	[] call fn_displayHelpers;						// delete helpers

	if (!_finished) exitWith {};

	["Working",0,[3,2,4,0]] call dayz_NutritionSystem;

	local _invResult	= false;
	local _i		= 0;
	local _addedItems	= [];
	local _itemOut		= "";		// item class

	false call dz_fn_meleeMagazines;	// Remove melee magazines (BIS_fnc_invAdd fix)

	{
		_itemOut = _x select 0;
		local _countOut = _x select 1;

		for "_x" from 1 to _countOut do {

			_invResult = [player, _itemOut] call BIS_fnc_invAdd;

			if (!_invResult) exitWith {};

			_i = _i + 1;
			_addedItems set [(count _addedItems), [_itemOut, 1]];
		};
		if (!_invResult) exitWith {};
	} count _refund;

	true call dz_fn_meleeMagazines;

	if (_i > 0) then {

		local _position	= _obj getVariable["OEMPos", getPosATL _obj];
		local _dir	= getDir _obj;
		local _vector	= [(vectorDir _obj), (vectorUp _obj)];

		if (_classname in DZE_DoorsLocked) then {

			_obj setVariable ["CharacterID", dayz_characterID, true];
			_objectCharacterID = dayz_characterID;
		};

		_classname = _newclassname;

		local _object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];
		//_object setDir _dir; // setdir is incompatible with setVectorDirAndUp and should not be used together on the same object https://community.bistudio.com/wiki/setVectorDirAndUp
		_object setVariable["memDir", _dir, true];
		_object setVectorDirAndUp _vector;
		_object setPosATL _position;

		format[localize "str_epoch_player_142", _text] call dayz_rollingMessages;	// You have downgraded %1.

		if (DZE_GodModeBase && {!(_classname in DZE_GodModeBaseExclude)}) then {

			_object addEventHandler ["HandleDamage", {false}];

		} else {
			//
			//	reapply damage based on armor values
			//
			local _armorOld = getNumber (configFile >> "CfgVehicles" >> (typeOf _obj) >> "armor");
			local _damageOld = damage _obj;

			local _armorNew = getNumber (configFile >> "CfgVehicles" >> _classname >> "armor");
			local _damageNew = _damageOld;

			// check for divide by 0
			if (_armorNew > 0) then {
				_damageNew = (_damageOld * _armorOld) / _armorNew;
			};

			_object setDamage _damageNew;
		};

		local _ownerID = _obj getVariable["ownerPUID", "0"];
		_object setVariable ["ownerPUID", _ownerID, true];
		PVDZE_obj_Swap = [_objectCharacterID, _object, [_dir, _position, dayz_playerUID, _vector], _classname, _obj, player, [], dayz_authKey];
		publicVariableServer "PVDZE_obj_Swap";
		player reveal _object;

	} else {
		_text = getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName");

		format[localize "str_epoch_player_143", _i, _text] call dayz_rollingMessages;	// %1 of %2 could not be added to your inventory. (not enough room?) // poorly worded
		{
			[player, (_x select 0), (_x select 1)] call BIS_fnc_invRemove;

		} count _addedItems;
	};
} else {
	localize "str_epoch_player_51" call dayz_rollingMessages;				// No downgrades are available
};

dayz_actionInProgress = false;
s_player_downgrade_build = -1;
