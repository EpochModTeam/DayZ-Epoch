// Made for DayZ Epoch by vbawol edited for AdvancedTrading by Zupa
private ["_return_change","_ItemTopaz","_GemTotal","_GemTotal2","_ItemObsidian","_ItemSapphire","_ItemAmethyst","_ItemEmerald","_ItemCitrine","_ItemRuby","_gem","_value","_total","_briefcase_100oz_a","_gold_10oz_a","_gold_10oz_b","_briefcase_100oz","_gold_10oz","_gold_1oz_a","_gold_1oz_b","_gold_1oz","_silver_10oz_a","_silver_10oz_b","_silver_10oz","_silver_1oz_a","_silver_1oz_b","_silver_1oz","_successful","_trade_total","_total_currency","_addRegularMag","_justChecking","_magsAdded","_regularMagsToBuy"];

_successful = false;
_trade_total = _this select 0;
_total_currency = _this select 1;
_justChecking = _this select 2;
_regularMagsToBuy = _this select 3;
_magsAdded = 0;
Z_ChangeInBackpack = false;
Z_ChangeOverflow = false;

_return_change = 0;
if (!Z_Selling) then {
	_return_change = _total_currency - _trade_total;
} else {
	_return_change = _total_currency + _trade_total;
};

_addRegularMag = {
	private ["_backpack","_freeBagSpace","_freeSpace","_regularMags","_justChecking","_magsAdded","_item","_gearSpace","_enoughRoom","_regularMagsToBuy"];
	
	_magsAdded = _this select 0;
	_justChecking = _this select 1;
	_item = _this select 2;
	_regularMagsToBuy = _this select 3;
	
	_freeBagSpace = 0;
	_regularMags = {(getNumber (configFile >> "CfgMagazines" >> _x >> "type") == 256)} count (magazines player); // 256 = WeaponSlotItem (normal magazine)
	_gearSpace = ((12 - (_regularMags + _regularMagsToBuy)) > 0);
	
	if (_justChecking or !_gearSpace) then {
		_backpack = unitBackpack player;	
		if (!isNull _backpack) then {
			_freeSpace = [_backpack,0,0,0,0] call Z_calcFreeSpace;
			_freeBagSpace = (_freeSpace select 4) - (_freeSpace select 0);
		};
		
		_enoughRoom = (((12 - (_regularMags + _regularMagsToBuy)) + _freeBagSpace) >= _magsAdded);
		// Return change into vehicle or on ground is not advised due to potential for theft
	};
	
	if (_justChecking) exitWith {_enoughRoom};
	
	if (_gearSpace) then {
		player addMagazine _item;
	} else {
		if (Z_Selling) then {
			// Items are removed before change is calculated in sellItems, so exiting sale if _enoughRoom=false; is not an option for now.
			// Bandaid: notify player of overflow
			// Overflow in backpack falls on ground. Overflow in gear does not.
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
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemTopaz",0] call _addRegularMag; };
		};
	};
	if (_ItemObsidian > 0) then {
		for "_x" from 1 to _ItemObsidian do {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemObsidian",0] call _addRegularMag; };
		};
	};
	if (_ItemSapphire > 0) then {
		for "_x" from 1 to _ItemSapphire do {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemSapphire",0] call _addRegularMag; };
		};
	};
	if (_ItemAmethyst > 0) then {
		for "_x" from 1 to _ItemAmethyst do {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemAmethyst",0] call _addRegularMag; };
		};
	};
	if (_ItemEmerald > 0) then {
		for "_x" from 1 to _ItemEmerald do {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemEmerald",0] call _addRegularMag; };
		};
	};
	if (_ItemCitrine > 0) then {
		for "_x" from 1 to _ItemCitrine do {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemCitrine",0] call _addRegularMag; };
		};
	};
	if (_ItemRuby > 0) then {
		for "_x" from 1 to _ItemRuby do {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemRuby",0] call _addRegularMag; };
		};
	};

	if (_briefcase_100oz > 0) then {
		for "_x" from 1 to _briefcase_100oz do {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemBriefcase100oz",0] call _addRegularMag; };
		};
	};
	if (_gold_10oz > 0) then {
		if (_gold_10oz == 1) then {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemGoldBar10oz",0] call _addRegularMag; };
		} else {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,format["ItemBriefcase%1oz",floor(_gold_10oz*10)],0] call _addRegularMag; };
		};
	};
	if (_gold_1oz > 0) then {
		if (_gold_1oz == 1) then {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemGoldBar",0] call _addRegularMag; };
		} else {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,format["ItemGoldBar%1oz",_gold_1oz],0] call _addRegularMag; };
		};
	};
	if (_silver_10oz > 0) then {
		if (_silver_10oz == 1) then {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemSilverBar10oz",0] call _addRegularMag; };
		} else {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,format["ItemBriefcaseS%1oz",floor(_silver_10oz*10)],0] call _addRegularMag; };
		};
	};
	if (_silver_1oz > 0) then {
		if (_silver_1oz == 1) then {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,"ItemSilverBar",0] call _addRegularMag; };
		} else {
			if (_justChecking) then { _magsAdded = _magsAdded + 1; } else { [0,false,format["ItemSilverBar%1oz",_silver_1oz],0] call _addRegularMag; };
		};
	};
	
	if (_justChecking) then {
		_successful = [_magsAdded,true,0,_regularMagsToBuy] call _addRegularMag;
	} else {
		_successful = true;
	};
};

if (Z_ChangeInBackpack) then { systemChat localize "STR_EPOCH_TRADE_CHANGE_IN_BACKPACK"; };
if (Z_ChangeOverflow) then { systemChat localize "STR_EPOCH_TRADE_CHANGE_OVERFLOW"; };

_successful
