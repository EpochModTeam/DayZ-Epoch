local _bag = unitBackpack player;
local _freeSlots = 0;

if (!isNull _bag) then {		
	local _type = typeOf _bag;
	local _maxMagazinesBag = getNumber(configFile >> "CfgVehicles" >> _type >> "transportMaxMagazines");
	
	if (_maxMagazinesBag < 1) exitwith {};	//	Fail safe
	
	local _cargoMagazinesBag = getMagazineCargo _bag;
	local _cargoWeaponsBag = getWeaponCargo _bag;
	local _weaponsBag = getWeaponCargo _bag select 0;	
	local _magazinesBag = getMagazineCargo _bag select 0;
	local _qtyMaxBag = 0;
	
	{
		local _magazine = _x;
		local _qtyMagazine = (_cargoMagazinesBag select 1) select _foreachIndex;
		local _magazineInvType = getNumber(configFile >> "CfgMagazines" >> _magazine >> "type");
		if (_magazineInvType > 16) then {_magazineInvType = _magazineInvType/256};
		_qtyMaxBag = _qtyMaxBag + (_magazineInvType*_qtyMagazine);
	} foreach _magazinesBag;
	
	{
		local _weapon = _x;
		local _qtyWeapon = (_cargoWeaponsBag select 1) select _foreachIndex;
		local _weaponInvType = getNumber(configFile >> "CfgWeapons" >> _weapon >> "type");
		
		call {
			if (_weaponInvType == 1) exitwith {_qtyMaxBag = _qtyMaxBag + (10*_qtyWeapon);};
			if (_weaponInvType == 2) exitwith {_qtyMaxBag = _qtyMaxBag + (5*_qtyWeapon);};
			if (_weaponInvType in [256,4096]) exitwith {_qtyMaxBag = _qtyMaxBag + _qtyWeapon;};
		};
	} foreach _weaponsBag;	
	
	if (_qtyMaxBag < _maxMagazinesBag)	then {
		_freeSlots = _maxMagazinesBag - _qtyMaxBag;
	};
};

_freeSlots