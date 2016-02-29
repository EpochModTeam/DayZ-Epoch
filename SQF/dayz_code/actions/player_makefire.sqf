private ["_item","_config","_text","_booleans","_worldspace","_dir","_location","_dis","_fire"];

_tool = _this;
call gear_ui_init;
closeDialog 0;

_item = "ItemLog";
_itemPile = "PartWoodPile";

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

// item is missing or tools are missing
if ((!(_item IN magazines player)) && (!(_itemPile in magazines player))) exitWith {
	//cutText [localize "str_player_22", "PLAIN DOWN"];
	(localize "str_player_22") call dayz_rollingMessages;
};

_booleans = []; //testonLadder, testSea, testPond, testBuilding, testSlope, testDistance
_worldspace = ["Land_Fire_DZ", player, _booleans] call fn_niceSpot;

// player on ladder or in a vehicle
if (_booleans select 0) exitWith { cutText [localize "str_player_21", "PLAIN DOWN"]; };

// object would be in the water (pool or sea)
if ((_booleans select 1) OR (_booleans select 2)) exitWith { cutText [localize "str_player_26", "PLAIN DOWN"]; };

if ((count _worldspace) == 2) then {
	if (_item in magazines player) then {
		player removeMagazine _item;
	} else {
		player removeMagazine _itemPile;
	};
	_dir = _worldspace select 0;
	_location = _worldspace select 1;

	player playActionNow "Medic";
	sleep 1;
	// fireplace location may not be in front of player (but in 99% time it should)
	player setDir _dir;
	player setPosATL (getPosATL player);

	_dis=20;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	// Added Nutrition-Factor for work
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

	sleep 5;

	_fire = createVehicle ["Land_Fire_DZ", getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"];
	_fire setDir _dir;
	_fire setPos _location; // follow terrain slope
	player reveal _fire;

	[_fire,true] call dayz_inflame;
	_fire spawn player_fireMonitor;

	
	if (dayz_playerAchievements select 14 < 1) then {
	// Firestarter
		dayz_playerAchievements set [14,1];
		achievement = [14, player, dayz_characterID];
		publicVariableServer "achievement";
	};
	//cutText [localize "str_fireplace_01", "PLAIN DOWN"];
	(localize "str_fireplace_01") call dayz_rollingMessages;
} else {
	//cutText [localize "str_fireplace_02", "PLAIN DOWN"];
	(localize "str_fireplace_0") call dayz_rollingMessages;
};