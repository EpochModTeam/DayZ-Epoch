private ["_character","_traderid","_buyorsell","_data","_result","_key","_outcome","_clientID"];

_character =	_this select 0;
_traderid = 	_this select 1;
_buyorsell = 	_this select 2;
_clientID = owner _character;

diag_log format["TRADE: Trade Request by ClientID: %1 Character: %2 TraderID: %3 BuyOrSell: %4", _clientID, _character,_traderid,_buyorsell];

//Send request
_key = format["CHILD:398:%1:%2:",_traderid,_buyorsell];

_data = "HiveEXT" callExtension _key;
_result = call compile format ["%1",_data];
// diag_log ("TRADE: RES: "+ str(_result));
_outcome = _result select 0;

dayzTradeResult = _outcome;
if(!isNull _character) then {
	_clientID publicVariableClient "dayzTradeResult";
};