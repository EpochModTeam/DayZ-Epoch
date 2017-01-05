private ["_player","_playerUID","_name","_traderid","_buyorsell","_data","_result","_key","_outcome","_clientID","_price","_quantity","_container","_return","_classname","_traderCity","_currency","_message"];

_player =		_this select 0;
_traderID = 	_this select 1;
_buyorsell = 	_this select 2;	//0 > Buy // 1 > Sell
_classname =	_this select 3;
_traderCity = 	_this select 4;
_currency =		_this select 5;
_price =		_this select 6;

_clientID = 	owner _player;
_playerUID = 	getPlayerUID _player;
_name = 		if (alive _player) then {name _player} else {"Dead Player"};

if (count _this > 7) then {
	_quantity = _this select 7;
	_container = _this select 8;
	_return = false;
} else {
	_quantity = 1;
	_container = "gear";
	_return = true;
};

if (typeName _currency  == "STRING") then {_price = format ["%1 %2",_price,_currency];};

if (_buyorsell == 0) then { // Buy
	_message = format["%1: %2 (%3) purchased %4x %5 into %6 at %7 for %8",localize "STR_EPOCH_PLAYER_289",_name,_playerUID,_quantity,_classname,_container,_traderCity,_price];
} else { // Sell
	_message = format["%1: %2 (%3) sold %4x %5 from %6 at %7 for %8",localize "STR_EPOCH_PLAYER_289",_name,_playerUID,_quantity,_classname,_container,_traderCity,_price];
};

diag_log _message;
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

if (_return) then {
	dayzTradeResult = _outcome;
	if (!isNull _player) then {
		_clientID publicVariableClient "dayzTradeResult";
	};
};
