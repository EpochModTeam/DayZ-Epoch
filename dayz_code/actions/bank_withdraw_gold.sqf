private["_buy_item1","_buy_item2","_buy_item3","_buy_item4","_buy_item5","_buy_item6","_buy_item7"];

_activatingPlayer = _this select 1;

_iarray = _this select 3;
// "ItemGoldBar",1
_part_out = (_iarray) select 0;
_qty_out = (_iarray) select 1;

_uid = getPlayerUID player;

if(isNil "dayzBankBalance") then {
	dayzPublishBank = [_uid,0,"deposit",_activatingPlayer];
	publicVariable "dayzPublishBank";
	if (isServer) then {
		dayzPublishBank call server_publishBank;
	};
};

waitUntil {!isNil "dayzBankBalance"};

_currentBalance = parseNumber (dayzBankBalance);

if(_currentBalance >= _qty_out) then {

	for "_x" from 1 to _qty_out do {
		player addMagazine _part_out;
	};

	dayzPublishBank = [_uid,_qty_out,"withdraw",_activatingPlayer];
	publicVariable "dayzPublishBank";
	if (isServer) then {
		dayzPublishBank call server_publishBank;
	};

	[player,"refuel",0,false] call dayz_zombieSpeak;
	cutText [format["Withdrawn %1 Gold Bars",_qty_out], "PLAIN DOWN"];
	
} else {
	cutText [format["Insufficient funds you have %1 Gold Bars",dayzBankBalance], "PLAIN DOWN"];
};