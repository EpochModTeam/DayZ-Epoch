private ["_ItemTopaz","_GemTotal","_ItemTopaz_ItemTopaz","_GemTotal2","_ItemObsidian","_ItemSapphire","_ItemAmethyst","_ItemEmerald","_ItemCitrine","_ItemRuby","_gem","_value","_pic","_string","_total","_briefcase_100oz","_gold_10oz_a","_gold_10oz_b","_gold_10oz","_gold_1oz_a","_gold_1oz_b","_gold_1oz","_silver_10oz_a","_silver_10oz_b","_silver_10oz","_silver_1oz_a","_silver_1oz_b","_silver_1oz"];

_total = _this;
_string = "";

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

{ //sort gems so they display on total price in order of descending worth
	if (!isNil {call compile format["_%1",_x]} && {(call compile format["_%1",_x]) > 0}) then {
		_pic = getText (configFile >> 'CfgMagazines' >> _x >> 'picture');
		_string = format["%3<t size='1'>%1x</t><img image='%2'/>",(call compile format["_%1",_x]),_pic, _string];
	};
} count DZE_GemList;

if (_briefcase_100oz > 0) then {
  _pic = getText (configFile >> 'CfgMagazines' >> 'ItemBriefcase100oz' >> 'picture');
  _string = format["%3<t size='1'>%1x</t><img image='%2'/>",_briefcase_100oz,_pic, _string];
};
if (_gold_10oz > 0) then {
    _pic = getText (configFile >> 'CfgMagazines' >> 'ItemGoldBar10oz' >> 'picture');
    _string = format["%3<t size='1'>%1x</t><img image='%2'/>",_gold_10oz,_pic, _string];
};
if (_gold_1oz > 0) then {
    _pic = getText (configFile >> 'CfgMagazines' >> 'ItemGoldBar' >> 'picture');
    _string = format["%3<t size='1'>%1x</t><img image='%2'/>",_gold_1oz,_pic, _string];
};
if (_silver_10oz > 0) then {
    _pic = getText (configFile >> 'CfgMagazines' >> 'ItemSilverBar10oz' >> 'picture');
    _string = format["%3<t size='1'>%1x</t><img image='%2'/>",_silver_10oz,_pic, _string];
};
if (_silver_1oz > 0) then {
    _pic = getText (configFile >> 'CfgMagazines' >> 'ItemSilverBar' >> 'picture');
    _string = format["%3<t size='1'>%1x</t><img image='%2'/>",_silver_1oz,_pic, _string];
};

_string
