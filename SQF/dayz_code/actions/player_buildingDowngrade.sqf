/*
	DayZ Base Building Upgrades
	Made for DayZ Epoch please ask permission to use/edit/distribute email vbawol@veteranbastards.com.
*/
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_48" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_location","_dir","_classname","_text","_object","_objectID","_objectUID","_newclassname","_refund","_obj","_upgrade","_objectCharacterID","_ownerID","_i","_invResult","_itemOut","_countOut","_abortInvAdd","_addedItems","_finished","_playerNear"];

player removeAction s_player_downgrade_build;
s_player_downgrade_build = 1;

_obj = _this select 3;

_objectCharacterID = _obj getVariable ["CharacterID","0"];

if (DZE_Lock_Door != _objectCharacterID) exitWith {dayz_actionInProgress = false; s_player_downgrade_build = -1; localize "str_epoch_player_49" call dayz_rollingMessages;};

_playerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 12]) > 1;
if (_playerNear) exitWith {dayz_actionInProgress = false; s_player_downgrade_build = -1; localize "str_pickup_limit_5" call dayz_rollingMessages;};

_objectID 	= _obj getVariable ["ObjectID","0"];
_objectUID	= _obj getVariable ["ObjectUID","0"];

if (_objectID == "0" && _objectUID == "0") exitWith {dayz_actionInProgress = false; s_player_downgrade_build = -1; localize "str_epoch_player_50" call dayz_rollingMessages;};

_classname = typeOf _obj;

_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "downgradeBuilding");

if ((count _upgrade) > 0) then {
	_newclassname = _upgrade select 0;
	_refund = _upgrade select 1;

	[player,(getPosATL player),40,"repair"] spawn fnc_alertZombies;

	_finished = ["Medic",1] call fn_loopAction;
	if (!_finished) exitWith {};

	["Working",0,[3,2,4,0]] call dayz_NutritionSystem;

	_invResult = false;
	_abortInvAdd = false;
	_i = 0;
	_addedItems = [];
	false call dz_fn_meleeMagazines; // Remove melee magazines (BIS_fnc_invAdd fix)

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
	true call dz_fn_meleeMagazines;

	if (_i != 0) then {
		_location	= _obj getVariable["OEMPos",getPosATL _obj];

		_dir = getDir _obj;
		_vector = [(vectorDir _obj),(vectorUp _obj)];

		if (_classname in DZE_DoorsLocked) then {
			_obj setVariable ["CharacterID",dayz_characterID,true];
			_objectCharacterID = dayz_characterID;
		};

		_classname = _newclassname;

		_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];
		_object setDir _dir;
		_object setVariable["memDir",_dir,true];
		_object setVectorDirAndUp _vector;
		_object setPosATL _location;

		format[localize "str_epoch_player_142",_text] call dayz_rollingMessages;

		if (DZE_GodModeBase && {!(_classname in DZE_GodModeBaseExclude)}) then {_object addEventHandler ["HandleDamage",{false}];};

		if (DZE_permanentPlot) then {
			_ownerID = _obj getVariable["ownerPUID","0"];
			_object setVariable ["ownerPUID",_ownerID,true];
			PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location,dayz_playerUID,_vector],_classname,_obj,player,[],dayz_authKey];
		} else {
			PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location, _vector],_classname,_obj,player,[],dayz_authKey];
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

dayz_actionInProgress = false;
s_player_downgrade_build = -1;
