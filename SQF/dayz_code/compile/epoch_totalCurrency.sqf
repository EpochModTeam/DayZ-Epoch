// total currency
_total_currency = 0;
{
	_part =  (configFile >> "CfgMagazines" >> _x);
	_worth =  (_part >> "worth");
	if isNumber (_worth) then {
		_total_currency = _total_currency + getNumber(_worth);
	};
} count (magazines player);
_total_currency