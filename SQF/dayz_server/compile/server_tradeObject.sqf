private ["_player","_name","_traderid","_buyorsell","_data","_result","_key","_outcome","_clientID"];

_player =		_this select 0;
_traderID = 	_this select 1;
_buyorsell = 	_this select 2;	//0 > Buy // 1 > Sell
_classname =	_this select 3;
_traderCity = 	_this select 4;
_currency =	_this select 5;
_qty =		_this select 6;
_clientID = 	owner _player;
_price = format ["%2x %1",_currency,_qty];
_name = if (alive _player) then { name _player; } else { "Dead Player"; };

if (_buyorsell == 0) then { //Buy
diag_log format["EPOCH SERVERTRADE: Player: %1 (%2) bought a %3 in/at %4 for %5", _name, (getPlayerUID _player), _classname, _traderCity, _price];
} else { //SELL
diag_log format["EPOCH SERVERTRADE: Player: %1 (%2) sold a %3 in/at %4 for %5",_name, (getPlayerUID _player), _classname, _traderCity, _price];
};

if (DZE_ConfigTrader) then {
	_outcome = "PASS";
} else {
	//Send request
	_key = format["CHILD:398:%1:%2:",_traderID,_buyorsell];

	_data = "HiveEXT" callExtension _key;
	_result = call compile format ["%1",_data];
	// diag_log ("TRADE: RES: "+ str(_result));
	_outcome = _result select 0;
};

dayzTradeResult = _outcome;
if(!isNull _player) then {
	_clientID publicVariableClient "dayzTradeResult";
};
