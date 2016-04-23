/*
        Created exclusively for ArmA2:OA - DayZMod and DayZ Epoch. Script by icomrade.
        permission is required to use, alter and/or distribute from the author or project leader.
*/
private ["_array","_count","_action","_driver","_vehicle","_vehicleType","_emptySeat","_emptyGun"];
_array = _this select 3;
_action = _array select 0;
_driver = _array select 1;
_vehicle = vehicle player;
_vehicleType = typeOf _vehicle;
_emptySeat = count (assignedCargo _vehicle);
_count = count (configFile >> "CfgVehicles" >> _vehicleType >> "Turrets");
_emptyGun = ((_vehicle emptyPositions "Gunner") - _count);

switch _action do {
	case "MoveToPilot": {
		if (((_vehicle emptyPositions "Driver") == 0) && (!alive _driver)) then {
			_driver action ["EJECT", _vehicle];
			uiSleep 0.5; //wait for ejection
		};
		if ((_vehicle emptyPositions "Driver") > 0) then {
			player action [_action, _vehicle];
		};
	};
	case "MoveToCargo": {
		if ((_vehicle emptyPositions "Cargo") > 0) then {
			player action [_action, _vehicle, _emptySeat];
		};
	};
	case "MoveToTurret": {
		if ((_vehicle emptyPositions "Gunner") > 0) then {
			player action [_action, _vehicle, [abs(_emptyGun)]];
		};
	};
	case "MoveToCommander": {
		if ((_vehicle emptyPositions "Commander") > 0) then {
			player action [_action, _vehicle];
		};
	};
};