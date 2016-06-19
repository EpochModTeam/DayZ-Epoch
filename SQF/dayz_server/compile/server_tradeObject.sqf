private ["_player","_PUID","_name","_traderid","_buyorsell","_data","_result","_key","_outcome","_clientID","_price","_quantity","_container","_return"];

_player =		_this select 0;
_traderID = 	_this select 1;
_buyorsell = 	_this select 2;	//0 > Buy // 1 > Sell
_classname =	_this select 3;
_traderCity = 	_this select 4;
_currency =	_this select 5;
_price =		_this select 6;

if (count _this > 7) then {
	_quantity = _this select 7;
	_container = _this select 8;
	_return = false;
} else {
	_quantity = 1;
	_container = "gear";
	_return = true;
};

_clientID = 	owner _player;

if (typeName _price  == "SCALAR") then { _price = format ["%1x%2",_price,_currency]; } else { _price = format ["%1",_price]; };
_name = if (alive _player) then { name _player; } else { "Dead Player"; };
_PUID = [_player] call FNC_GetPlayerUID;

if (_buyorsell == 0) then { //Buy
diag_log format["%8: %9: %1 (%2) bought %6 x %3 into %7 at %4 for %5", _name, _PUID, _classname, _traderCity, _price, _quantity,_container,localize "STR_EPOCH_PLAYER_289",localize "STR_EPOCH_PLAYER"];
} else { //SELL
diag_log format["%8: %9: %1 (%2) sold %6 x %3 from %7 at %4 for %5",_name, _PUID, _classname, _traderCity, _price, _quantity,_container,localize "STR_EPOCH_PLAYER_289",localize "STR_EPOCH_PLAYER"];
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

if (_return) then {
	dayzTradeResult = _outcome;
	if(!isNull _player) then {
		_clientID publicVariableClient "dayzTradeResult";
	};
};
