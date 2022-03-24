///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DayZ Base Building Maintenance
//	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
//
//	Upgraded by:	Victor the Cleaner
//	Date:		August 2021
//
//	- Now includes helper spheres for improved player experience
//
///////////////////////////////////////////////////////////////////////////////////////////////////
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_52" call dayz_rollingMessages;};	// Upgrade is already in progress.
dayz_actionInProgress = true;

player removeAction s_player_maint_build;
s_player_maint_build = 1;

local _obj = _this select 3;
local _classname = typeOf _obj;

// Find next maintain
local _upgrade		= getArray (configFile >> "CfgVehicles" >> _classname >> "maintainBuilding");
local _requirements	= [];

if (count _upgrade > 0) then {
	_requirements = _upgrade;
} else {
	_requirements = [["PartGeneric", 1]];
};

local _missingQty	= 0;
local _missing		= "";
local _proceed		= true;

{
	local _itemIn	= _x select 0;
	local _countIn	= _x select 1;

	local _qty = {(_x == _itemIn) || (configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)} count magazines player;

	if (_qty < _countIn) exitWith {
		_missing	= _itemIn;
		_missingQty	= _countIn - _qty;
		_proceed	= false;
	};
} forEach _requirements;

if (_proceed) then {

	[_obj] call fn_displayHelpers;						// create helpers

	[player, (getPosATL player), 40, "repair"] spawn fnc_alertZombies;	// make noise

	local _finished = ["Medic", 1] call fn_loopAction;			// animation

	[] call fn_displayHelpers;						// delete helpers

	if (!_finished) exitWith {};

	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

	local _temp_removed_array	= [];
	local _removed_total		= 0;
	local _tobe_removed_total	= 0;

	{
		local _removed	= 0;
		local _itemIn	= _x select 0;
		local _countIn	= _x select 1;

		// diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];

		_tobe_removed_total = _tobe_removed_total + _countIn;

		{
			if (_removed < _countIn && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {

				local _num_removed = ([player, _x] call BIS_fnc_invRemove);
				_removed	= _removed + _num_removed;
				_removed_total	= _removed_total + _num_removed;

				if (_num_removed > 0) then {
					_temp_removed_array set [count _temp_removed_array, _x];
				};
			};

		} forEach magazines player;

	} forEach _requirements;

	// all parts removed proceed
	if (_tobe_removed_total == _removed_total) then {

		format[localize "STR_EPOCH_ACTIONS_4" ,1] call dayz_rollingMessages;					// You have maintained %1 building parts.

		PVDZE_maintainArea = [netID player, 2, [netID _obj]];
		publicVariableServer "PVDZE_maintainArea";

	} else {

		{player addMagazine _x;} count _temp_removed_array;
		format[localize "str_epoch_player_145", _removed_total, _tobe_removed_total] call dayz_rollingMessages;	// Missing Parts after first check Item: %1 / %2
	};
} else {
	local _textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
	format[localize "STR_EPOCH_ACTIONS_6", _missingQty, _textMissing] call dayz_rollingMessages;			// Missing %1 more of %2
};

dayz_actionInProgress = false;
s_player_maint_build = -1;
