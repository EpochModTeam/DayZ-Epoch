private["_buy_item1","_buy_item2","_buy_item3","_buy_item4","_buy_item5","_buy_item6","_buy_item7"];

{player removeAction _x} forEach s_player_bank;s_player_bank = [];

_activatingPlayer = _this select 1;

_uid = getPlayerUID player;

if(isNil "dayzBankBalance") then {
	dayzPublishBank = [_uid,0,"deposit",_activatingPlayer];
	publicVariable "dayzPublishBank";
	if (isServer) then {
		dayzPublishBank call server_publishBank;
	};
};

waitUntil {!isNil "dayzBankBalance"};

cutText [format["You have %1 Gold Bars",dayzBankBalance], "PLAIN DOWN"];

s_player_bankvault_crtl = -1;