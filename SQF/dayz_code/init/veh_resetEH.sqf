/***********************************************************
ASSIGN DAMAGE HANDLER TO A UNIT
- Function fnc_veh_ResetEH
- unit call fnc_veh_ResetEH
************************************************************/

if (_this isKindOf "AllVehicles") then {

	_this removeAllEventHandlers "HandleDamage";
	_this removeAllEventHandlers "Killed";
	_this addeventhandler ["HandleDamage",{ _this call fnc_veh_handleDam } ];
	_this addeventhandler ["Killed",{ _this call fnc_veh_handleKilled } ];
	_this addEventHandler ["GetOut", { _this call vehicle_getOut }];
	if (_this isKindOf "Submarine_DZE_base") then {
		_this addEventHandler ["GetIn", { _this spawn submarine_surface }];
	};

	if (isServer) then {
		_this removeAllEventHandlers "GetOut";
		_this removeAllEventHandlers "GetIn";
		_this addEventHandler ["GetOut", {[(_this select 0),"all",true] call server_updateObject;}];
		_this addEventHandler ["GetIn", {[(_this select 0),"all",true] call server_updateObject; _this call server_checkIfTowed;}];
	};

	//diag_log(format["%1: all EH reset for %2", __FILE__, _this]);
};