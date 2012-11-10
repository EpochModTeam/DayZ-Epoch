private["_object"];

dayzUpdateVehicle = [_this select 3,"all"];
publicVariableServer "dayzUpdateVehicle";
if (isServer) then {
	dayzUpdateVehicle call server_updateObject;
};