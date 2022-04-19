if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_boil;
player removeAction s_player_cook;
player removeAction s_player_thaw;
a_player_boil		= true;
//s_player_boil		= -1;

local _bottleText	= getText (configFile >> "CfgMagazines" >> "ItemWaterBottle" >> "displayName");
local _waterbottles	= ["ItemWaterBottleInfected","ItemWaterBottle","ItemWaterBottleSafe","ItemWaterbottle1oz","ItemWaterbottle2oz","ItemWaterbottle3oz","ItemWaterbottle4oz","ItemWaterbottle5oz","ItemWaterbottle6oz","ItemWaterbottle7oz","ItemWaterbottle8oz","ItemWaterbottle9oz","ItemPlasticWaterBottle","ItemPlasticWaterBottleInfected","ItemPlasticWaterBottleSafe","ItemPlasticWaterbottle1oz","ItemPlasticWaterbottle2oz","ItemPlasticWaterbottle3oz","ItemPlasticWaterbottle4oz","ItemPlasticWaterbottle5oz","ItemPlasticWaterbottle6oz","ItemPlasticWaterbottle7oz","ItemPlasticWaterbottle8oz","ItemPlasticWaterbottle9oz"];
local _plasticBottles	= ["ItemPlasticWaterBottle","ItemPlasticWaterBottleInfected","ItemPlasticWaterBottleSafe","ItemPlasticWaterbottle1oz","ItemPlasticWaterbottle2oz","ItemPlasticWaterbottle3oz","ItemPlasticWaterbottle4oz","ItemPlasticWaterbottle5oz","ItemPlasticWaterbottle6oz","ItemPlasticWaterbottle7oz","ItemPlasticWaterbottle8oz","ItemPlasticWaterbottle9oz"];
local _magsPlayer	= magazines player;
local _qty		= {_x in _waterbottles} count _magsPlayer;
local _hasTinItem	= true;
local _wasStanding	= ["perc", animationState player] call fnc_inString;
local _finished		= false;

if ({_x in _plasticBottles} count _magsPlayer > 0) then {
	_hasTinItem = {_x in _magsPlayer} count boil_tin_cans > 0;
};

if (!_hasTinItem) exitWith {
	local _tin1text	= getText (configFile >> "CfgMagazines" >> "TrashTinCan" >> "displayName");
	local _tin2text	= getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty" >> "displayName");
	local _tintext	= format ["%1 / %2", _tin1text, _tin2text];
	format [localize "str_player_31", _tintext, localize "str_player_31_fill"] call dayz_rollingMessages;
	a_player_boil		= false;
	dayz_actionInProgress	= false;
};

scopeName "main";
if (_qty > 0) then {
	[player, (getPosATL player), 10, "cook"] spawn fnc_alertZombies;
	_finished = ["Medic",1] call fn_loopAction;

	// Double check player did not drop item
	local _bottles = [];
	{
		if (_x in _waterbottles) then {
			_bottles set [count _bottles, _x];
		};
	} count magazines player;

	_qty = count _bottles;

	if (_qty < 1 || !_finished) exitWith {};

	{
		local _bottle = _x;
		local _removed = [player, _bottle] call BIS_fnc_invRemove;
		if (_removed == 0) then {
			_finished = false;
			breakTo "main";
		};

		if (dayz_waterBottleBreaking && {[DZE_bottleBreakChance] call fn_chance}) then {
			if (_bottle in _plasticBottles) then {
				player addMagazine "ItemPlasticWaterbottleDmg";
			} else {
				player addMagazine "ItemWaterBottleDmg";
			};
			localize "str_waterbottle_broke" call dayz_rollingMessages;
		} else {
			if (_bottle in _plasticBottles) then {
				if (_bottle in ["ItemPlasticWaterBottleInfected","ItemPlasticWaterBottleSafe"]) then {
					player addMagazine "ItemPlasticWaterbottleBoiled";
				} else {
					player addMagazine (_bottle + "Boiled");
				};
			} else {
				if (_bottle in ["ItemWaterBottleInfected","ItemWaterBottleSafe"]) then {
					player addMagazine "ItemWaterBottleBoiled";
				} else {
					player addMagazine (_bottle + "Boiled");
				};
			};
		};
	} count _bottles;

	format [localize "str_player_boiledwater", _qty] call dayz_rollingMessages;
} else {
	format [localize "str_player_31", _bottleText, localize "str_player_31_fill"] call dayz_rollingMessages;
};

if (!_finished) then {
	localize "STR_EPOCH_ACTION_CANCELED" call dayz_rollingMessages;
} else {
	if (_wasStanding) then {
		player playActionNow "PlayerStand";	// once the action has completed, return player to a standing pose if they were standing before the action
	};
};

a_player_boil = false;
dayz_actionInProgress = false;
