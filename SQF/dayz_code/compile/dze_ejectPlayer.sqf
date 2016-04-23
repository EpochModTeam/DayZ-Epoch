// check if player in vehicle
private ["_noDriver","_vehicle","_inVehicle"];

_vehicle = vehicle player;
_inVehicle = (_vehicle != player);

if(_inVehicle) then {
	_noDriver = ((_vehicle emptyPositions "driver") > 0);
	if (_noDriver && (speed _vehicle) != 0) then {
		player action [ "eject", _vehicle];
	};
};