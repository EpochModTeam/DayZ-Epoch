private ["_Z_logTrade","_classNames","_className","_amounts","_amount","_prices","_price","_quantity","_queueAmounts","_queueNames","_queuePrices","_index","_buyOrSell"];

_Z_logTrade = {
	private ["_buyOrSell","_className","_container","_currency","_price","_quantity"];

	_className = _this select 0;
	_quantity = _this select 1;
	_buyOrSell = _this select 2;
	_price = _this select 3;
	_container = switch (Z_SellingFrom) do {
	case 0 : {localize "STR_EPOCH_TRADE_BACKPACK"};
	case 1 : {localize "STR_EPOCH_TRADE_VEHICLE"};
	case 2 : {localize "STR_UI_GEAR"};
	};
	_tcost = _price call Z_calcDefaultCurrencyNoImg;
	_currency = if (Z_SingleCurrency) then {"Coins"} else {""};
	if (isNil "inTraderCity") then {inTraderCity = "Unknown Trader City"};

	// Log to client RPT
	if (Z_SingleCurrency) then {
		if (_buyOrSell == "buy") then {
			diag_log format["%5: Bought %4 x %1 into %7 at %2 for %3x%6",_className,inTraderCity,_price,_quantity,localize "STR_EPOCH_PLAYER_289",_currency,_container];
		} else {
			diag_log format["%5: Sold %4 x %1 from %7 at %2 for %3x%6",_className,inTraderCity,_price,_quantity,localize "STR_EPOCH_PLAYER_289",_currency,_container];
		};
	} else {
		if (_buyOrSell == "buy") then {
			diag_log format["%5: Bought %4 x %1 into %7 at %2 for %3",_className,inTraderCity,_tcost,_quantity,localize "STR_EPOCH_PLAYER_289",_currency,_container];
		} else {
			diag_log format["%5: Sold %4 x %1 from %7 at %2 for %3",_className,inTraderCity,_tcost,_quantity,localize "STR_EPOCH_PLAYER_289",_currency,_container];
		};
	};	

	// Log to server RPT
	if (DZE_serverLogTrades) then {
		if (Z_SingleCurrency) then {
			if (_buyOrSell == "buy") then {
				PVDZE_obj_Trade = [player,0,0,_className,inTraderCity,_currency,_price,_quantity,_container,false];
			} else {
				PVDZE_obj_Trade = [player,0,1,_className,inTraderCity,_currency,_price,_quantity,_container,false];
			};
		} else {
			if (_buyOrSell == "buy") then {
				PVDZE_obj_Trade = [player,0,0,_className,inTraderCity,_currency,_tcost,_quantity,_container,false];
			} else {
				PVDZE_obj_Trade = [player,0,1,_className,inTraderCity,_currency,_tcost,_quantity,_container,false];
			};
		};
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
