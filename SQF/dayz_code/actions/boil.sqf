if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_bottletext","_hastinitem","_qty","_dis","_sfx","_bottle","_finished","_waterbottles","_platicBottles","_magsPlayer","_bottles"];

_bottletext = getText (configFile >> "CfgMagazines" >> "ItemWaterBottle" >> "displayName");
_waterbottles =  ["ItemWaterBottleInfected","ItemWaterBottle","ItemWaterBottleSafe","ItemWaterbottle1oz","ItemWaterbottle2oz","ItemWaterbottle3oz","ItemWaterbottle4oz","ItemWaterbottle5oz","ItemWaterbottle6oz","ItemWaterbottle7oz","ItemWaterbottle8oz","ItemWaterbottle9oz","ItemPlasticWaterBottle","ItemPlasticWaterBottleInfected","ItemPlasticWaterBottleSafe","ItemPlasticWaterbottle1oz","ItemPlasticWaterbottle2oz","ItemPlasticWaterbottle3oz","ItemPlasticWaterbottle4oz","ItemPlasticWaterbottle5oz","ItemPlasticWaterbottle6oz","ItemPlasticWaterbottle7oz","ItemPlasticWaterbottle8oz","ItemPlasticWaterbottle9oz"];
_platicBottles = ["ItemPlasticWaterBottle","ItemPlasticWaterBottleInfected","ItemPlasticWaterBottleSafe","ItemPlasticWaterbottle1oz","ItemPlasticWaterbottle2oz","ItemPlasticWaterbottle3oz","ItemPlasticWaterbottle4oz","ItemPlasticWaterbottle5oz","ItemPlasticWaterbottle6oz","ItemPlasticWaterbottle7oz","ItemPlasticWaterbottle8oz","ItemPlasticWaterbottle9oz"];
_magsPlayer = magazines player;
_qty = {_x in _waterbottles} count _magsPlayer;
_hastinitem = true;
a_player_boil = true;
player removeAction s_player_boil;
//s_player_boil = -1;

if ({_x in _platicBottles} count _magsPlayer > 0) then {
	_hastinitem = {_x in _magsPlayer} count boil_tin_cans > 0;
};

if !(_hastinitem) exitWith {
	private ["_tin1text","_tin2text","_tintext"];

	_tin1text = getText (configFile >> "CfgMagazines" >> "TrashTinCan" >> "displayName");
	_tin2text = getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty" >> "displayName");
	_tintext = format["%1 / %2",_tin1text,_tin2text];
	format[localize "str_player_31",_tintext,localize "str_player_31_fill"] call dayz_rollingMessages;
	a_player_boil = false;
	dayz_actionInProgress = false;
};

if (_qty > 0) then {
	[player,(getPosATL player),10,"cook"] spawn fnc_alertZombies;

	_finished = ["Medic",1] call fn_loopAction;

	// Double check player did not drop item
	_bottles = [];

	{
		if (_x in _waterbottles) then {
			_bottles set [count _bottles, _x];
		};
	} count magazines player;

	_qty = count _bottles;

	if (_qty < 1 || !_finished) exitWith {};

	{
		_bottle = _x;
		player removeMagazine _bottle;
		if (dayz_waterBottleBreaking && {[0.1] call fn_chance}) then {
			if (_bottle in _platicBottles) then {
				player addMagazine "ItemPlasticWaterbottleDmg";
			} else {
				player addMagazine "ItemWaterBottleDmg";
			};
			localize "str_waterbottle_broke" call dayz_rollingMessages;
		} else {
			if (_bottle in _platicBottles) then {
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
    format [localize "str_player_boiledwater",_qty] call dayz_rollingMessages;
} else {
	format[localize "str_player_31",_bottletext,localize "str_player_31_fill"] call dayz_rollingMessages;
};

a_player_boil = false;
dayz_actionInProgress = false;
