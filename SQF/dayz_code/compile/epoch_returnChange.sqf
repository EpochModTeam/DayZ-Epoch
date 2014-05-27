// Made for DayZ Epoch by vbawol 

private ["_trade_total","_part_inWorth","_part_in_configClass","_total_currency","_part","_worth","_return_change","_total","_briefcase_100oz","_gold_10oz_a","_gold_10oz_b","_gold_10oz","_gold_1oz_a","_gold_1oz_b","_gold_1oz","_silver_10oz_a","_silver_10oz_b","_silver_10oz","_silver_1oz_a","_silver_1oz_b","_silver_1oz","_successful","_buyOrSell","_total_items"];
_successful = false;
_canAfford = false;

_buyOrSell = (_this select 1);

//diag_log format["DEBUG TRADER INPUT: %1", (_this select 0)];

// buying in currency
_trade_total = (_this select 0) call epoch_itemCost;

//diag_log format["DEBUG TRADER INPUT TOTAL: %1", _trade_total];

_total_currency_dry = call epoch_totalCurrency;

_return_change_dry = 0;
if (_buyOrSell == 0) then {
	//buy
	_return_change_dry = _total_currency_dry - _trade_total; 
} else {
	//sell
	_return_change_dry = _total_currency_dry + _trade_total; 
};

//diag_log format["DEBUG TRADER DRY: %1", _return_change_dry];

if (_return_change_dry >= 0) then {
	_canAfford = true;
};

if (_canAfford) then {

	// total currency
	_total_currency = 0;
	{
		_part =  (configFile >> "CfgMagazines" >> _x);
		_worth =  (_part >> "worth");
		if isNumber (_worth) then {
			if (([player,_part,1] call BIS_fnc_invRemove) == 1) then {
				_total_currency = _total_currency + getNumber(_worth);
			};
		};

	} count (magazines player);

	//diag_log format["DEBUG TRADER INPUT CURRENCY TOTAL: %1", _total_currency];

	_return_change = 0;
	if (_buyOrSell == 0) then {
		//buy
		_return_change = _total_currency - _trade_total; 
	} else {
		//sell
		_return_change = _total_currency + _trade_total; 
	};

	//diag_log format["DEBUG TRADER CHANGE: %1", _return_change];

	if (_return_change >= 0) then {
		
		// total currency
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
				//diag_log format["DEBUG TRADER CHANG MADE: %1 x %2", _briefcase_100oz, "ItemBriefcase100oz"];
			};
		};
		if (_gold_10oz > 0) then {
			if (_gold_10oz == 1) then {
				player addMagazine "ItemGoldBar10oz";
				//diag_log format["DEBUG TRADER CHANG MADE: %1 x %2", _gold_10oz, "ItemGoldBar10z"];
			} else {
				player addMagazine format["ItemBriefcase%1oz",floor(_gold_10oz*10)];
				//diag_log format["DEBUG TRADER CHANG MADE: ItemBriefcase%1oz", floor(_gold_10oz*10)];
			};
		};
		if (_gold_1oz > 0) then {
			if (_gold_1oz == 1) then {
				player addMagazine "ItemGoldBar";
				//diag_log format["DEBUG TRADER CHANG MADE: %1 x %2", _gold_1oz, "ItemGoldBar"];
			} else {
				player addMagazine format["ItemGoldBar%1oz",_gold_1oz];
				//diag_log format["DEBUG TRADER CHANG MADE: %1 x %2", _gold_1oz, "ItemGoldBar"];
			};
		};
		if (_silver_10oz > 0) then {
			if (_silver_10oz == 1) then {
				player addMagazine "ItemSilverBar10oz";
				//diag_log format["DEBUG TRADER CHANG MADE: %1 x %2", _silver_10oz, "ItemSilverBar10oz"];
			} else {
				player addMagazine format["ItemBriefcaseS%1oz",floor(_silver_10oz*10)];
				//diag_log format["DEBUG TRADER CHANG MADE: ItemBriefcaseS%1oz", floor(_silver_10oz*10)];
			};
		};
		if (_silver_1oz > 0) then {
			if (_silver_1oz == 1) then {
				player addMagazine "ItemSilverBar";
				//diag_log format["DEBUG TRADER CHANG MADE: %1 x %2", _silver_1oz, "ItemSilverBar"];
			} else {
				player addMagazine format["ItemSilverBar%1oz",_silver_1oz];
				//diag_log format["DEBUG TRADER CHANG MADE: %1 x %2", _silver_1oz, "ItemSilverBar"];
			};
		};
		_successful = true;
	};
};
_successful