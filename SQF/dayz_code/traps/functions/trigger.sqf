_trap = _this select 0;

if (getNumber (configFile >> "CfgVehicles" >> typeOf _trap >> "singleUse") > 0) then {
	[_trap] call remove_trap;
} else {
	[_trap] call disarm_trap;
};
