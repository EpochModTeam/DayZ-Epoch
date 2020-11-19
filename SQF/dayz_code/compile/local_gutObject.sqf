private ["_amount","_animalbody","_rawfoodtype","_qty"];

_animalbody = _this select 0;
_qty = _this select 1;

if (_animalbody isKindOf "zZombie_base") then {
	_qty = 1;
	_rawfoodtype = "ItemZombieParts";
} else {
	_rawfoodtype = getText (configFile >> "CfgSurvival" >> "Meat" >> typeOf _animalbody >> "rawfoodtype");
};

if (local _animalbody) then {
	for "_i" from 1 to _qty do {
		_animalbody addMagazine _rawfoodtype;
	};
		
	if (typeOf _animalbody in ["Cock","Hen"]) then {
		_amount = (floor (random 4)) + 2;
		for "_x" from 1 to _amount do {
			_animalbody addMagazine "equip_feathers";
		};
	};	

	[time, _animalbody] spawn {
		_timer = _this select 0;
		_body = _this select 1;
        _pos = getPosATL _body;
		while {(count magazines _body > 0) && (time - _timer < 300)} do {
			uiSleep 5;
		};
		hideBody _body;
		
		uiSleep 10;
		deleteVehicle _body;
		true
	};
};
