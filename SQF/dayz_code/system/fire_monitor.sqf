private["_firePlace","_ok","_mags","_serial","_qty","_countr"];
_firePlace = _this;

while {alive _firePlace} do {
	while {inflamed _firePlace and alive _fireplace} do {
		//Use Wood
		_ok = false;
		_mags = getMagazineCargo _firePlace;
		clearMagazineCargoGlobal _firePlace;

		_fuel = ["PartWoodPile","ItemLog","ItemPlank"];
		_serial = -1;
		{
			private ["_find"];
			
			_find = ((_mags select 0) find _x);
			
			if (_find >= 0) exitwith { _serial = _find; };
			
		} count _fuel;
		
		_qty = 0;
		_classname = "";
		if (_serial >= 0) then {
			_classname = (_mags select 0) select _serial;
			_qty = (_mags select 1) select _serial;
		};
		
		_ok = false;
		if (_qty > 0) then {
			_qty = _qty - 1;
			_ok = true;
			if (_qty > 0) then {
				_firePlace addMagazineCargoGlobal [_classname,_qty];
			};
		};
		if (_ok) then {
			_countr = 0;
			while {_ok} do {
				_countr = _countr + 1;
				if (_countr > 600) then {_ok = false};
				if (!inflamed _firePlace) then {_ok = false};
				if (!alive _firePlace) then {_ok = false};
				uiSleep 1;
			};
		} else {
			_firePlace inflame false;
		};
	};
	while {!inflamed _firePlace and alive _fireplace} do {
		//Wait
		uiSleep 1;
	};
	uiSleep 1;
};
