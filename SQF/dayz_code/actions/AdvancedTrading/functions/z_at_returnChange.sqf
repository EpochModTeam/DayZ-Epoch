// Made for DayZ Epoch by vbawol edited for AdvancedTrading by Zupa
private ["_return_change","_ItemTopaz","_GemTotal","_GemTotal2","_ItemObsidian","_ItemSapphire","_ItemAmethyst","_ItemEmerald","_ItemCitrine","_ItemRuby","_gem","_value","_total","_briefcase_100oz_a","_gold_10oz_a","_gold_10oz_b","_briefcase_100oz","_gold_10oz","_gold_1oz_a","_gold_1oz_b","_gold_1oz","_silver_10oz_a","_silver_10oz_b","_silver_10oz","_silver_1oz_a","_silver_1oz_b","_silver_1oz","_successful","_trade_total","_total_currency"];

_successful = false;

_trade_total = _this select 0;

_total_currency =  _this select 1;

_return_change = 0;
if (!Z_Selling) then {
	_return_change = _total_currency - _trade_total;
} else {
	_return_change = _total_currency + _trade_total;
};

if (_return_change > 0) then {

	_total = _return_change;
	_ItemTopaz = 0;
	_ItemObsidian = 0;
	_ItemSapphire = 0;
	_ItemAmethyst = 0;
	_ItemEmerald = 0;
	_ItemCitrine = 0;
	_ItemRuby = 0;
	_GemTotal = 0;
	_GemTotal2 = _total;

	{
		_gem = _x;
		_value = DZE_GemWorthList select _forEachIndex;
		switch(_gem) do {
			case 'ItemTopaz': {
				_ItemTopaz = floor(_GemTotal2 / _value);
				if (_ItemTopaz >= 1) then {
					_GemTotal = (_value * _ItemTopaz) + _GemTotal;
					_GemTotal2 = _total - _GemTotal;
				};
			};
			case 'ItemObsidian': {
				_ItemObsidian = floor(_GemTotal2 / _value);
				if (_ItemObsidian >= 1) then {
					_GemTotal = (_value * _ItemObsidian) + _GemTotal;
					_GemTotal2 = _total - _GemTotal;
				};
			};
			case 'ItemSapphire': {
				_ItemSapphire = floor(_GemTotal2 / _value);
				if (_ItemSapphire >= 1) then {
					_GemTotal = (_value * _ItemSapphire) + _GemTotal;
					_GemTotal2 = _total - _GemTotal;
				};
			};
			case 'ItemAmethyst': {
				_ItemAmethyst = floor(_GemTotal2 / _value);
				if (_ItemAmethyst >= 1) then {
					_GemTotal = (_value * _ItemAmethyst) + _GemTotal;
					_GemTotal2 = _total - _GemTotal;
				};
			};
			case 'ItemEmerald': {
				_ItemEmerald = floor(_GemTotal2 / _value);
				if (_ItemEmerald >= 1) then {
					_GemTotal = (_value * _ItemEmerald) + _GemTotal;
					_GemTotal2 = _total - _GemTotal;
				};
			};
			case 'ItemCitrine': {
				_ItemCitrine = floor(_GemTotal2 / _value);
				if (_ItemCitrine >= 1) then {
					_GemTotal = (_value * _ItemCitrine) + _GemTotal;
					_GemTotal2 = _total - _GemTotal;
				};
			};
			case 'ItemRuby': {
				_ItemRuby = floor(_GemTotal2 / _value);
				if (_ItemRuby >= 1) then {
					_GemTotal = (_value * _ItemRuby) + _GemTotal;
					_GemTotal2 = _total - _GemTotal;
				};
			};
		};
	} forEach DZE_GemList;
	_total = _GemTotal2;

	_briefcase_100oz = floor(_total / 10000);

	_gold_10oz_a = floor(_total / 1000);
	_gold_10oz_b = _briefcase_100oz * 10;
	_gold_10oz = (_gold_10oz_a - _gold_10oz_b);

	_gold_1oz_a = floor(_total / 100);
	_gold_1oz_b = _gold_10oz_a * 10;
	_gold_1oz = (_gold_1oz_a - _gold_1oz_b);

	_silver_10oz_a = floor(_total / 10);
	_silver_10oz_b = _gold_1oz_a * 10;
	_silver_10oz = (_silver_10oz_a - _silver_10oz_b);

	_silver_1oz_a = floor(_total);
	_silver_1oz_b = _silver_10oz_a * 10;
	_silver_1oz = (_silver_1oz_a - _silver_1oz_b);

	if (_ItemTopaz > 0) then {
		for "_x" from 1 to _ItemTopaz do {
			player addMagazine "ItemTopaz";
		};
	};
	if (_ItemObsidian > 0) then {
		for "_x" from 1 to _ItemObsidian do {
			player addMagazine "ItemObsidian";
		};
	};
	if (_ItemSapphire > 0) then {
		for "_x" from 1 to _ItemSapphire do {
			player addMagazine "ItemSapphire";
		};
	};
	if (_ItemAmethyst > 0) then {
		for "_x" from 1 to _ItemAmethyst do {
			player addMagazine "ItemAmethyst";
		};
	};
	if (_ItemEmerald > 0) then {
		for "_x" from 1 to _ItemEmerald do {
			player addMagazine "ItemEmerald";
		};
	};
	if (_ItemCitrine > 0) then {
		for "_x" from 1 to _ItemCitrine do {
			player addMagazine "ItemCitrine";
		};
	};
	if (_ItemRuby > 0) then {
		for "_x" from 1 to _ItemRuby do {
			player addMagazine "ItemRuby";
		};
	};

	if (_briefcase_100oz > 0) then {
		for "_x" from 1 to _briefcase_100oz do {
			player addMagazine "ItemBriefcase100oz";
		};
	};
	if (_gold_10oz > 0) then {
		if (_gold_10oz == 1) then {
			player addMagazine "ItemGoldBar10oz";
		} else {
			player addMagazine format["ItemBriefcase%1oz",floor(_gold_10oz*10)];
		};
	};
	if (_gold_1oz > 0) then {
		if (_gold_1oz == 1) then {
			player addMagazine "ItemGoldBar";
		} else {
			player addMagazine format["ItemGoldBar%1oz",_gold_1oz];
		};
	};
	if (_silver_10oz > 0) then {
		if (_silver_10oz == 1) then {
			player addMagazine "ItemSilverBar10oz";
		} else {
			player addMagazine format["ItemBriefcaseS%1oz",floor(_silver_10oz*10)];
		};
	};
	if (_silver_1oz > 0) then {
		if (_silver_1oz == 1) then {
			player addMagazine "ItemSilverBar";
		} else {
			player addMagazine format["ItemSilverBar%1oz",_silver_1oz];
		};
	};
	_successful = true;
};

_successful
