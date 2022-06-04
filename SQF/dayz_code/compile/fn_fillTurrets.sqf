local _obj = _this select 0;
local _countMags = _this select 1;

local _weaponArray = [];
_weaponArray set [count _weaponArray,["",[-1]]];

local _findRecurse = {
	local _root = (_this select 0);
	local _path = +(_this select 1);
	local _thisThis = _this select 2;
	
	for "_i" from 0 to count _root -1 do {
		local _class = _root select _i;
	   
		if (isClass _class) then {
			local _currentPath = _path + [_i];
			{
				_weaponArray set [count _weaponArray,[_x,_currentPath]];
			} count getArray (_class >> "weapons");
			_class = _class >> "turrets";
			if (isClass _class) then {[_class, _currentPath, _thisThis] call _findRecurse;};
		};
	};
};

[configFile >> "CfgVehicles" >> typeOf (_obj) >> "turrets", [], _obj] call _findRecurse;

{
	local _type = _x select 0;

	if (!(["Horn",_type] call fnc_inString) && (_type != "")) then {
		local _turret = _x select 1;
		local _mags = getArray(configFile >> "CfgWeapons" >> _type >> "magazines");		
		
		if (count _mags > 0) then {
			local _mag = _mags select 0;

			for "_i" from 1 to _countMags do {
				_obj addMagazineTurret[_mag,_turret];
			};	
		};
	};	
} forEach _weaponArray;

{
	local _weapon = _x;

	if !(["Horn",_weapon] call fnc_inString) then {
		local _mags = getArray(configFile >> "CfgWeapons" >> _weapon >> "magazines");	

		if (count _mags > 0) then {
			local _mag = _mags select 0;

			for "_i" from 1 to _countMags do {
				_obj addMagazine _mag;
			};
		};
	};		
} count (weapons _obj);