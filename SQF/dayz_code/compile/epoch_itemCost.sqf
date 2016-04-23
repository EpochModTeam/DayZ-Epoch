_trade_total = 0;
{
	_part_in_configClass =  configFile >> "CfgMagazines" >> (_x select 0);
	if (isClass (_part_in_configClass)) then {
		_part_inWorth = (_part_in_configClass >> "worth");
		if isNumber (_part_inWorth) then {
			_trade_total = _trade_total + (getNumber(_part_inWorth) * (_x select 1));
		};
	};
} count _this;

//diag_log format["DEBUG TRADER ITEMCOST: %1", _this];
_trade_total