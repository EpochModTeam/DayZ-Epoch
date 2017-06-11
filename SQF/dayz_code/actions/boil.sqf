private ["_bottletext","_tin1text","_tin2text","_tintext","_hastinitem","_qty","_dis","_sfx","_WB2Add","_finished"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_bottletext = getText (configFile >> "CfgMagazines" >> "ItemWaterBottle" >> "displayName");
_tin1text = getText (configFile >> "CfgMagazines" >> "TrashTinCan" >> "displayName");
_tin2text = getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty" >> "displayName");
_tintext = format["%1 / %2",_tin1text,_tin2text];
_qty = {_x in ["ItemWaterBottleInfected","ItemWaterBottle","ItemWaterBottleSafe","ItemWaterbottle1oz","ItemWaterbottle2oz","ItemWaterbottle3oz","ItemWaterbottle4oz","ItemWaterbottle5oz","ItemWaterbottle6oz","ItemWaterbottle7oz","ItemWaterbottle8oz","ItemWaterbottle9oz"]} count magazines player;
a_player_boil = true;
player removeAction s_player_boil;
//s_player_boil = -1;

/* //canteens are metal, we only use canteens in Epoch
_hastinitem = {_x in magazines player} count boil_tin_cans > 0;
if (!_hastinitem) exitWith {format[localize "str_player_31",_tintext,localize "str_player_31_fill"] call dayz_rollingMessages; a_player_boil = false; dayz_actionInProgress = false;};
*/
if (_qty > 0) then {
	_dis=10;
	_sfx = "cook";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;
	
	_finished = ["Medic",1] call fn_loopAction;
	
	// Double check player did not drop item
	_qty = {_x in ["ItemWaterBottleInfected","ItemWaterBottle","ItemWaterBottleSafe","ItemWaterbottle1oz","ItemWaterbottle2oz","ItemWaterbottle3oz","ItemWaterbottle4oz","ItemWaterbottle5oz","ItemWaterbottle6oz","ItemWaterbottle7oz","ItemWaterbottle8oz","ItemWaterbottle9oz"]} count magazines player;
	
	if (_qty == 0 or !_finished) exitWith {};

	for "_x" from 1 to _qty do {
		_WB2Add = "ItemWaterBottleBoiled";
		switch (true) do {
			case ("ItemWaterBottleInfected" in magazines player): { player removeMagazine "ItemWaterBottleInfected"; };
			case ("ItemWaterBottleSafe" in magazines player): { player removeMagazine "ItemWaterBottleSafe"; };
			case ("ItemWaterBottle" in magazines player): { player removeMagazine "ItemWaterBottle"; };
			case ("ItemWaterbottle1oz" in magazines player): { player removeMagazine "ItemWaterbottle1oz"; _WB2Add = "ItemWaterbottle1ozBoiled"; };
			case ("ItemWaterbottle2oz" in magazines player): { player removeMagazine "ItemWaterbottle2oz"; _WB2Add = "ItemWaterbottle2ozBoiled"; };
			case ("ItemWaterbottle3oz" in magazines player): { player removeMagazine "ItemWaterbottle3oz"; _WB2Add = "ItemWaterbottle3ozBoiled"; };
			case ("ItemWaterbottle4oz" in magazines player): { player removeMagazine "ItemWaterbottle4oz"; _WB2Add = "ItemWaterbottle4ozBoiled"; };
			case ("ItemWaterbottle5oz" in magazines player): { player removeMagazine "ItemWaterbottle5oz"; _WB2Add = "ItemWaterbottle5ozBoiled"; };
			case ("ItemWaterbottle6oz" in magazines player): { player removeMagazine "ItemWaterbottle6oz"; _WB2Add = "ItemWaterbottle6ozBoiled"; };
			case ("ItemWaterbottle7oz" in magazines player): { player removeMagazine "ItemWaterbottle7oz"; _WB2Add = "ItemWaterbottle7ozBoiled"; };
			case ("ItemWaterbottle8oz" in magazines player): { player removeMagazine "ItemWaterbottle8oz"; _WB2Add = "ItemWaterbottle8ozBoiled"; };
			case ("ItemWaterbottle9oz" in magazines player): { player removeMagazine "ItemWaterbottle9oz"; _WB2Add = "ItemWaterbottle9ozBoiled"; };
		};
		if (dayz_waterBottleBreaking && {[0.1] call fn_chance}) then {
			player addMagazine "ItemWaterBottleDmg";
			localize "str_waterbottle_broke" call dayz_rollingMessages;
		} else {
			player addMagazine _WB2Add;
		};
	};
    format [localize "str_player_boiledwater",_qty] call dayz_rollingMessages;
} else {
	format[localize "str_player_31",_bottletext,localize "str_player_31_fill"] call dayz_rollingMessages;
};

a_player_boil = false;
dayz_actionInProgress = false;