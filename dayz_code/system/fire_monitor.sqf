private["_firePlace","_ok","_mags","_serial","_qty","_countr"];
_firePlace = _this;
while {alive _firePlace} do {
	while {inflamed _firePlace and alive _fireplace} do {
		//Use Wood
		_ok = false;
		_mags = getMagazineCargo _firePlace;
		clearMagazineCargoGlobal _firePlace;
		clearWeaponCargoGlobal _firePlace;
		_serial = (_mags select 0) find "PartWoodPile";
		_qty = 0;
		if (_serial >= 0) then {
			_qty = (_mags select 1) select _serial;
		};
		_ok = false;
		if (_qty > 0) then {
			_qty = _qty - 1;
			_ok = true;
			if (_qty > 0) then {
				_firePlace addMagazineCargoGlobal ["PartWoodPile",_qty];
			};
		};
		if (_ok) then {
			_countr = 0;
			while {_ok} do {
				_countr = _countr + 1;
				if (_countr > 600) then {_ok = false};
				if (!inflamed _firePlace) then {_ok = false};
				if (!alive _firePlace) then {_ok = false};
				sleep 1;
			};
		} else {
			_firePlace inflame false;
		};
	};
	while {!inflamed _firePlace and alive _fireplace} do {
		//Wait
		sleep 1;
	};
	sleep 1;
};