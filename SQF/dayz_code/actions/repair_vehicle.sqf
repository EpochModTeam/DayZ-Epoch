private ["_part","_cancel","_color","_string","_handle","_damage","_cmpt","_vehicle","_hitpoints","_damagePercent","_configVeh"];

_vehicle = _this select 3;
{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
dayz_myCursorTarget = _vehicle;

_hitpoints = _vehicle call vehicle_getHitpoints;

{
	_damage = [_vehicle,_x] call object_getHit;

	_cmpt = toArray (_x);
	_cmpt set [0,20];
	_cmpt set [1,toArray ("-") select 0];
	_cmpt set [2,20];
	_cmpt = toString _cmpt;

	_configVeh = configFile >> "cfgVehicles" >> "RepairParts" >> _x;
	_part = getText(_configVeh >> "part");
	if (isnil ("_part")) then { _part = "PartGeneric"; };

	// get every damaged part no matter how tiny damage is!
	_damagePercent = str(round(_damage * 100))+"% Damage";
	if (_damage > 0) then {
		if ((_damage >= 0) and (_damage <= 0.25)) then {_color = "color='#00ff00'";}; //green
		if ((_damage >= 0.26) and (_damage <= 0.50)) then {_color = "color='#ffff00'";}; //yellow
		if ((_damage >= 0.51) and (_damage <= 0.75)) then {_color = "color='#ff8800'";}; //orange
		if ((_damage >= 0.76) and (_damage <= 1)) then {_color = "color='#ff0000'";}; //red
		_cmpt = format[localize "str_actions_medical_09",_cmpt,_damagePercent];

		_string = format["<t %1>%2</t>",_color,_cmpt]; //Repair - Part
		_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\repair.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
		s_player_repairActions set [count s_player_repairActions,_handle];
	};

} forEach _hitpoints;

if(count _hitpoints > 0 ) then {
	//ArmA OA String
	_cancel = dayz_myCursorTarget addAction [localize "str_action_cancel_action", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false, "",""];
	s_player_repairActions set [count s_player_repairActions,_cancel];
	s_player_repair_crtl = 1;
};