private ["_Z_logTrade","_classNames","_className","_amounts","_amount","_prices","_price","_quantity","_queueAmounts","_queueNames","_queuePrices","_index","_buyOrSell"];

_Z_logTrade = {
	private ["_buyOrSell","_className","_container","_price","_quantity"];

	_className = _this select 0;
	_quantity = _this select 1;
	_buyOrSell = _this select 2;
	_price = _this select 3;
	_container = switch (Z_SellingFrom) do {
		case 0 : {"backpack"};
		case 1 : {"vehicle"};
		case 2 : {"gear"};
	};
	_price = if (Z_singleCurrency) then {format ["%1 %2",[_price] call BIS_fnc_numberText,CurrencyName]} else {[_price,true,1,1] call Z_calcCurrency};

	// Log to client RPT
	if (_buyOrSell == "buy") then {
		diag_log format["%1: Purchased %2x %3 into %4 at %5 for %6",localize "STR_EPOCH_PLAYER_289",_quantity,_className,_container,inTraderCity,_price];
	} else {
		diag_log format["%1: Sold %2x %3 from %4 at %5 for %6",localize "STR_EPOCH_PLAYER_289",_quantity,_className,_container,inTraderCity,_price];
	};
	
	// Log to server RPT
	if (DZE_serverLogTrades) then {
		PVDZE_obj_Trade = [player,0,if (_buyOrSell == "buy") then {0} else {1},_className,inTraderCity,false,_price,_quantity,_container,false];
		publicVariableServer "PVDZE_obj_Trade";
	};
};

_classNames = _this select 0;
_amounts = _this select 1;
_amounts = _amounts - [0];
_prices = _this select 2;
_buyOrSell = _this select 3;
_queueNames = [];
_queueAmounts = [];
_queuePrices = [];
{
	_queueAmounts set [_forEachIndex,0];
	_queuePrices set [_forEachIndex,0];
} forEach _classNames;

if (count _prices < 1) exitWith {};

for "_i" from 0 to (count _prices)-1 do {
	_className = _classNames select _i;
	_amount = _amounts select _i;
	_price = _prices select _i;
	_quantity = {(_className == _x)} count _classNames;
	
	if (_quantity > 1) then {
		if !(_className in _queueNames) then {_queueNames set [count _queueNames,_className];};
		_index = _queueNames find _className;
		_queueAmounts set [_index, (_queueAmounts select _index) + _amount];
		_queuePrices set [_index, (_queuePrices select _index) + _price];
	} else {
		[_className, _amount, _buyOrSell, _price] call _Z_logTrade;
	};
};

if (count _queueNames > 0) then {
	for "_i" from 0 to (count _queueNames)-1 do {
		[_queueNames select _i, _queueAmounts select _i, _buyOrSell, _queuePrices select _i] call _Z_logTrade;
	};
};