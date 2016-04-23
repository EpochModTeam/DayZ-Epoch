/*
	Not Used Test System
*/


//_vehicle = _this select 0;
//_engineState = _this select 1;

_rate = getNumber (configFile >> "CfgVehicles" >> (typeOf (_this select 0)) >> "fuelconsumptionrate");

if (_this select 1) then { 
	//[_vehicle, _rate] spawn { 
		while {isEngineOn (_this select 0)} do {
			(_this select 0) setFuel ( Fuel (_this select 0) - (_this select 1));
			sleep 1;
		};
	//};
};