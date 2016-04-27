private["_worth","_string","_briefcase_100oz","_gold_10oz_a","_gold_10oz_b","_gold_10oz","_gold_1oz","_gold_1oz_b","_gold_1oz_a","_silver_10oz","_silver_10oz_a","_silver_10oz_b"
,"_silver_1oz","_silver_1oz_a","_silver_10oz_b","_pic","_string"
];
_total = _this;
_string = "";

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
  _pic = getText (configFile >> 'CfgMagazines' >> 'ItemBriefcase100oz' >> 'picture');
  _string = format["<t size='1'>%1x</t><img image='%2'/>",_briefcase_100oz,_pic];
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
