private ["_chance","_dis","_isWoman","_local","_num","_rnd","_sound","_type","_unit"];

_unit = _this select 0;
_type = _this select 1;
_chance = _this select 2;

_dis = call {
	if (count _this > 4) exitwith {_this select 4};
	if (_type in ["shout","hit","attack","scream","breath"]) exitwith {100};
	40
};

_local = false;
if (count _this > 3) then { _local = _this select 3; };
if (!_local) then {
		// we override _local according to number of players inside _dis radius
	_local = { _unit distance _x < _dis; } count playableUnits <= 1;
};

//diag_log(format["%1 dis:%2 local:%3", __FILE__, _dis, _local]);

_num = call {
	if (_type == "open_inventory") exitwith {4};
	if (_type == "open_backpack") exitwith  {4};
	if (_type == "eat") exitwith {3};
	if (_type == "bandage") exitwith {2};
	if (_type == "pills") exitwith {3};
	if (_type == "keypad_tick") exitwith {2};
	if (_type == "spotted") exitwith {13};
	if (_type == "chase") exitwith  {14};
	if (_type == "attach_weap") exitwith {1};
	if (_type == "detach_weap") exitwith {1};
    if (_type == "attack") exitwith  {13};
    if (_type == "idle") exitwith {35};
    if (_type == "scream") exitwith  {4};
    if (_type == "cough") exitwith {2};
    if (_type == "fracture") exitwith {1};
    if (_type == "panic") exitwith {1};
	if (_type == "cook") exitwith {2};
	if (_type == "hit") exitwith {6};
	if (_type == "dog_bark") exitwith {4};
	if (_type == "dog_growl") exitwith {3};
	if (_type == "dog_qq") exitwith {2};
	0
};

_isWoman = getText(configFile >> "cfgVehicles" >> (typeOf _unit) >> "TextPlural") == "Women";
if (_isWoman and {_type in ["scream","panic"]}) then {
	_type = _type + "_w";
};

if ((round(random _chance) == _chance) or (_chance == 0)) then {
	_rnd = round(random _num);
	_sound = "z_" + _type + "_" + str(_rnd);
	if (_local) then {
		_unit say [_sound, _dis];
	} else {
		[nil,_unit,rSAY,[_sound, _dis]] call RE;
	};
};
