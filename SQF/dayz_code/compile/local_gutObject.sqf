local _body = _this select 0;
local _qty = _this select 1;
local _rawfoodtype = "";
local _bodyType = typeOf _body;
local _time = diag_tickTime;

call {
	if (_body isKindOf "zZombie_base") exitWith {
		_qty = 1;
		_rawfoodtype = "ItemZombieParts";
	};
	
	if (_bodyType == "z_bloodsucker") exitWith {
		_qty = 1;
		_rawfoodtype = "ItemMutantHeart"; // toolbelt item
	};
	// default is animal
	_rawfoodtype = getText (configFile >> "CfgSurvival" >> "Meat" >> _bodyType >> "rawfoodtype");
};

if (local _body) then {
	for "_i" from 1 to _qty do {
		if (_rawfoodtype == "ItemMutantHeart") then {
			_body addWeapon _rawfoodtype;
		} else {
			_body addMagazine _rawfoodtype;
		};
	};
		
	if (_bodyType in ["Cock","Hen"]) then {
		local _amount = (floor (random 4)) + 2;
		for "_x" from 1 to _amount do {
			_body addMagazine "equip_feathers";
		};
	};	

	while {((count magazines _body > 0) || (count weapons _body > 0)) && (diag_tickTime - _time < 300)} do {
		uiSleep 5;
	};
	hideBody _body;
	uiSleep 10;
	deleteVehicle _body;
};
