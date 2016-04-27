// Made for DayZ Epoch by vbawol edited for AdvancedTrading by Zupa
private ["_trade_total","_part_inWorth","_part_in_configClass","_total_currency","_part","_worth","_return_change","_total","_briefcase_100oz","_gold_10oz_a","_gold_10oz_b","_gold_10oz","_gold_1oz_a","_gold_1oz_b","_gold_1oz","_silver_10oz_a","_silver_10oz_b","_silver_10oz","_silver_1oz_a","_silver_1oz_b","_silver_1oz","_successful","_buyOrSell","_total_items"];

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
