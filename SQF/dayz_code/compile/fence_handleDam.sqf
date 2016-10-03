/***********************************************************
ASSIGN DAMAGE TO A UNIT.
Called by "HandleDamage" vehicle Event Handler

- Function fnc_Obj_FenceHandleDam
- [unit] call fnc_Obj_FenceHandleDam;
- return : 0 no damage
************************************************************/
private["_obj","_total","_damage"];

//Object the EH is assigned too
_obj = _this select 0;
//Total damage of the object
_total = (damage _obj);

//Modify damage done based on level of fence
_damage = switch (1==1) do {
    case ((typeof _obj) in ["WoodenFence_3","WoodenFence_4","WoodenFence_5","WoodenFence_6","WoodenFence_7","WoodenGate_2","WoodenGate_3","WoodenGate_4"]): { 0.5 };
    //case ((typeof _obj) in ["WoodenFence_6","WoodenFence_7","WoodenGate_4"]): { 0.35 };
    default { 1 };
};

//Is the object local
if (local _obj) then {
	//is damage being done aboue 0 (should always be) not needed.
	if (_damage > 0) then {
		//Server running or client
		if (!isServer) then {
			//If its a client send to server get the ownering player and send damage to that player
			PVDZ_veh_Save = [_obj,"objWallDamage",(_total + _damage)];
			publicVariableServer "PVDZ_veh_Save";
		} else {
			//Server running the EH, update object to db
			[_obj,"objWallDamage",(_total + _damage)] call server_updateObject;
		};
	};
} else {
	//send to server then back to owning client/server
	PVDZ_send = [_obj,"objWallDamage",_this];
	publicVariableServer "PVDZ_send";
};

//Logging.
diag_log format["INFO - %1(%3) - %2(%4)",_obj,_damage,(typeof _obj),_total];


// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
0
