private["_hasbottleitem","_hastinitem","_bottletext","_tin1text","_tin2text","_tintext","_qty","_id"];

player removeAction s_player_boil;
s_player_boil = -1;

_hasbottleitem = "ItemWaterbottle" in magazines player;
_hastinitem = ("TrashTinCan" in magazines player) or ("ItemSodaEmpty" in magazines player);

_bottletext = getText (configFile >> "CfgMagazines" >> "ItemWaterbottle" >> "displayName");
_tin1text = getText (configFile >> "CfgMagazines" >> "TrashTinCan" >> "displayName");
_tin2text = getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty" >> "displayName");
_tintext = format["%1 / %2",_tin1text,_tin2text];
if (!_hasbottleitem) exitWith {cutText [format[(localize "str_player_31"),_bottletext,"fill"] , "PLAIN DOWN"]};
if (!_hastinitem) exitWith {cutText [format[(localize "str_player_31"),_tintext,"fill"] , "PLAIN DOWN"]};

if (_hasbottleitem and _hastinitem) then {
	_qty = {_x == "ItemWaterbottle"} count magazines player;
	if ("ItemWaterbottle" in magazines player) then {
		player playActionNow "Medic";
		[player,"fillwater",0,false] call dayz_zombieSpeak;
		_id = [player,10,true,(getPosATL player)] spawn player_alertZombies;
		sleep _qty;
		for "_x" from 1 to _qty do {
			player removeMagazine "ItemWaterbottle";
			player addMagazine "ItemWaterbottleBoiled";
			
		};
		cutText [format[(localize  "str_player_01"),_qty], "PLAIN DOWN"];
	} else {
		cutText [(localize "str_player_02") , "PLAIN DOWN"];
	};
};