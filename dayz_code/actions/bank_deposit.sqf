private["_qty","_uid","_buy_item3","_buy_item4","_buy_item5","_buy_item6","_buy_item7"];

{player removeAction _x} forEach s_player_bank;s_player_bank = [];

_activatingPlayer = _this select 1;

_qty = {_x == "ItemGoldBar"} count magazines player;

if ("ItemGoldBar" in magazines player) then {
	for "_x" from 1 to _qty do {
		player removeMagazine "ItemGoldBar";	
	};
	
	_uid = getPlayerUID player;
	
	dayzPublishBank = [_uid,_qty,"deposit",_activatingPlayer];
	publicVariable "dayzPublishBank";
	if (isServer) then {
		dayzPublishBank call server_publishBank;
	};
	
	[player,"refuel",0,false] call dayz_zombieSpeak;
	cutText [format["Deposited %1 Gold Bars",_qty], "PLAIN DOWN"];
} else {
	cutText ["Need Gold Bars" , "PLAIN DOWN"];
};

s_player_bankvault_crtl = -1;