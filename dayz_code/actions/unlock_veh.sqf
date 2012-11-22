private["_vehicle"];
_vehicle = _this select 3;

_vehicle setVehicleInit "this lock false; this lockCargo false;";

processInitCommands;
