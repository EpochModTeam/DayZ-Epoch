// Made for DayZ Epoch by vbawol edited for AdvancedTrading by Zupa
private ["_return_change","_ItemTopaz","_GemTotal","_GemTotal2","_ItemObsidian","_ItemSapphire",
"_ItemAmethyst","_ItemEmerald","_ItemCitrine","_ItemRuby","_gem","_value","_total","_briefcase_100oz_a",
"_gold_10oz_a","_gold_10oz_b","_briefcase_100oz","_gold_10oz","_gold_1oz_a","_gold_1oz_b","_gold_1oz",
"_silver_10oz_a","_silver_10oz_b","_silver_10oz","_silver_1oz_a","_silver_1oz_b","_silver_1oz",
"_successful","_trade_total","_total_currency","_addRegularMag","_justChecking","_moneyAdded",
"_regularMagsToBuy","_moneyInGear","_moneyInBackpack","_part","_worth","_findGem","_combine","_combineOk"];


_trade_total = _this select 0;
_total_currency = _this select 1;
_justChecking = _this select 2;
_regularMagsToBuy = _this select 3;
_moneyInGear = _this select 4;
_moneyInBackpack = _this select 5;
_combine = _this select 6;

_moneyAdded = 0;
_return_change = 0;
_successful = false;
Z_ChangeInBackpack = false;
Z_ChangeOverflow = false;

if (_combine) then {
	_trade_total = 0;
	_total_currency = 0;
	_combineOk = 1;
	{
		_part = configFile >> "CfgMagazines" >> _x;
		_worth = (_part >> "worth");
		if (isNumber _worth) then {
			_combineOk = [player,_part,1] call BIS_fnc_invRemove;
			_total_currency = _total_currency + getNumber(_worth);
		} else {
			_findGem = DZE_GemList find _x;
			if (_findGem >= 0) then {
				_worth = DZE_GemWorthList select _findGem;
				_total_currency = _total_currency + _worth;
				_combineOk = [player,_part,1] call BIS_fnc_invRemove;
			};
		};
		if (_combineOk == 0) exitWith { localize "STR_EPOCH_PLAYER_307_FAIL" call dayz_rollingMessages; };
	} forEach (magazines player); // Needs to be forEach otherwise count throws a hissy fit with BIS_fnc_invRemove returning a 0
};

if (!Z_Selling) then {
	_return_change = _total_currency - _trade_total;
} else {
	_return_change = _total_currency + _trade_total;
};

_addRegularMag = {
	private ["_backpack","_freeBagSpace","_freeSpace","_regularMags","_justChecking","_moneyAdded","_item","_enoughRoom","_regularMagsToBuy","_moneyInGear","_moneyInBackpack","_freeGearSlots"];
	
	_moneyAdded = _this select 0; // Return change
	_justChecking = _this select 1;
	_item = _this select 2;
	if (_justChecking) then {
		_regularMagsToBuy = if (Z_SellingFrom == 1) then {0} else {_this select 3}; // Don't count MagsToBuy against free space in player inventory if buying into vehicle
		_moneyInGear = count (_this select 4); // Will be removed
		_moneyInBackpack = count (_this select 5); // Will be removed
	} else {
		_regularMagsToBuy = 0; // All bought items are already in gear
		_moneyInGear = 0; // All money was removed in Z_payDefault
		_moneyInBackpack = 0; // All money was removed in Z_payDefault
	};
	
	_regularMags = {(getNumber (configFile >> "CfgMagazines" >> _x >> "type") == 256)} count (magazines player); // 256 = WeaponSlotItem (normal magazine)
	_freeGearSlots = 12 - ((_regularMags + _regularMagsToBuy + _moneyAdded) - _moneyInGear);
	
	if (_justChecking or _freeGearSlots < 0) then {
		_freeBagSpace = 0;
		_backpack = unitBackpack player;
		if (!isNull _backpack) then {
			_freeSpace = [_backpack,0,0,0,0] call Z_calcFreeSpace;
			_freeBagSpace = (_freeSpace select 4) - (_freeSpace select 0);
		};
		_enoughRoom = (_freeGearSlots + _freeBagSpace + _moneyInBackpack) >= 0;
		// Return change into vehicle or on ground is not advised due to potential for theft
	};
	
	if (_justChecking) exitWith {_enoughRoom};
	
	if (_freeGearSlots >= 0) then {
		player addMagazine _item;
	} else {
		if (Z_Selling) then {
			// Items are removed before change is calculated in sellItems, so exiting sale if _enoughRoom=false; is not an option for now.
			// Lazy solution: notify player of overflow. Overflow in backpack falls on ground. Overflow in gear does not.
			player addMagazine _item;
			Z_ChangeOverflow = true;
		} else {
			// Always enough room since we checked before buying
			_backpack addMagazineCargoGlobal [_item,1];
			Z_ChangeInBackpack = true;
		};
	};
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
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemTopaz"] call _addRegularMag; };
		};
	};
	if (_ItemObsidian > 0) then {
		for "_x" from 1 to _ItemObsidian do {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemObsidian"] call _addRegularMag; };
		};
	};
	if (_ItemSapphire > 0) then {
		for "_x" from 1 to _ItemSapphire do {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemSapphire"] call _addRegularMag; };
		};
	};
	if (_ItemAmethyst > 0) then {
		for "_x" from 1 to _ItemAmethyst do {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemAmethyst"] call _addRegularMag; };
		};
	};
	if (_ItemEmerald > 0) then {
		for "_x" from 1 to _ItemEmerald do {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemEmerald"] call _addRegularMag; };
		};
	};
	if (_ItemCitrine > 0) then {
		for "_x" from 1 to _ItemCitrine do {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemCitrine"] call _addRegularMag; };
		};
	};
	if (_ItemRuby > 0) then {
		for "_x" from 1 to _ItemRuby do {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemRuby"] call _addRegularMag; };
		};
	};

	if (_briefcase_100oz > 0) then {
		for "_x" from 1 to _briefcase_100oz do {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemBriefcase100oz"] call _addRegularMag; };
		};
	};
	if (_gold_10oz > 0) then {
		if (_gold_10oz == 1) then {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemGoldBar10oz"] call _addRegularMag; };
		} else {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,format["ItemBriefcase%1oz",floor(_gold_10oz*10)]] call _addRegularMag; };
		};
	};
	if (_gold_1oz > 0) then {
		if (_gold_1oz == 1) then {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemGoldBar"] call _addRegularMag; };
		} else {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,format["ItemGoldBar%1oz",_gold_1oz]] call _addRegularMag; };
		};
	};
	if (_silver_10oz > 0) then {
		if (_silver_10oz == 1) then {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemSilverBar10oz"] call _addRegularMag; };
		} else {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,format["ItemBriefcaseS%1oz",floor(_silver_10oz*10)]] call _addRegularMag; };
		};
	};
	if (_silver_1oz > 0) then {
		if (_silver_1oz == 1) then {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,"ItemSilverBar"] call _addRegularMag; };
		} else {
			if (_justChecking) then { _moneyAdded = _moneyAdded + 1; } else { [1,false,format["ItemSilverBar%1oz",_silver_1oz]] call _addRegularMag; };
		};
	};
	
	if (_justChecking) then {
		_successful = [_moneyAdded,true,"",_regularMagsToBuy,_moneyInGear,_moneyInBackpack] call _addRegularMag;
	} else {
		_successful = true;
	};
	
	if (_combine) then {call player_forceSave;};
};

if (Z_ChangeInBackpack) then { systemChat localize "STR_EPOCH_TRADE_CHANGE_IN_BACKPACK"; };
if (Z_ChangeOverflow) then { systemChat localize "STR_EPOCH_TRADE_CHANGE_OVERFLOW"; };

_successful
