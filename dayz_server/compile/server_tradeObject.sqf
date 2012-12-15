private["_character","_traderid","_buyorsell","_data","_result","_oid","_key","_outcome"];

_character =	_this select 0;
_traderid = 	_this select 1;
_buyorsell = 	_this select 2;

diag_log format["DEBUG PVEH: %1", _character];

_clientID = owner _character;
diag_log ("TRADE: Trade Request by ClientID: "+ str(_clientID));

_oid = "ERROR";

//Send request
_key = format["CHILD:398:%1:%2:",_traderid,_buyorsell];
diag_log ("TRADE: WRITE: "+ str(_key));

_data = "HiveEXT" callExtension _key;
_result = call compile format ["%1",_data];

diag_log ("TRADE: RES: "+ str(_result));

_outcome = _result select 0;

dayzTradeResult = _outcome;
_clientID publicVariableClient "dayzTradeResult";