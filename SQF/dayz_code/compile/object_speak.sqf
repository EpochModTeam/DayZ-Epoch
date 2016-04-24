private ["_type","_local","_unit"];

_unit = _this select 0;
_type = _this select 1;
_chance = _this select 2;

_dis = switch true do {
	case (count _this > 4): {_this select 4};
	case (_type in ["shout","hit","attack","scream","breath"]): {100};
	default {40};
};

_local = false;
if (count _this > 3) then { _local = _this select 3; };
if (!_local) then { 
		// we override _local according to number of players inside _dis radius
	_local = { _unit distance _x < _dis; } count playableUnits <= 1;
};

//diag_log(format["%1 dis:%2 local:%3", __FILE__, _dis, _local]);

_num = switch (_type) do {
    default {0};
    case "cough":          {2};
    case "chase":          {14};
    case "spotted":        {13};
    case "hit":            {6};
    case "attack":         {13};
    case "idle":           {35};
    case "scream":         {4};
    case "fracture":       {1};
    case "eat":            {3};
    case "cook":           {2};
    case "panic":          {1};
	case "dog_bark":	{4};
	case "dog_growl":	{3};
	case "dog_qq":		{2};
	case "keypad_tick":	{2};
    case "open_backpack":  {4};
    case "open_inventory": {4};
};

_isWoman = getText(configFile >> "cfgVehicles" >> (typeOf _unit) >> "TextPlural") == "Women";
if (_isWoman and (_type in ["scream","panic"])) then {
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
