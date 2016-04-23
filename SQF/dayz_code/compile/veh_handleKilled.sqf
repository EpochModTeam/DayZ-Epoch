_unit = _this select 0;
//_killer = _this select 1;

// ask server to set global damage to 1, save to the hive
if (local _unit) then {
	if (isServer) then {
		[_unit, "killed"] call server_updateObject;
	} else {
		PVDZ_veh_Save = [_unit, "killed"];
		publicVariableServer "PVDZ_veh_Save";
	};
};

// everyone removes their EH for this vehicle
_unit removeAllEventHandlers "HandleDamage";
_unit removeAllEventHandlers "Killed";
_unit removeAllEventHandlers "GetIn";
_unit removeAllEventHandlers "GetOut";