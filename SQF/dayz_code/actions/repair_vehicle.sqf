private ["_part","_cancel","_color","_string","_handle","_damage","_cmpt","_vehicle","_hitpoints","_damagePercent","_configVeh","_hitpoint","_hits"];

_vehicle = _this select 3;
{dayz_myCursorTarget removeAction _x} count s_player_repairActions;s_player_repairActions = [];
dayz_myCursorTarget = _vehicle;

_hitpoints = _vehicle call vehicle_getHitpoints;

{
	_hitpoint = _x;
	_hits = [_vehicle,_hitpoint] call object_getHit;
	_damage = _hits select 0;

	_cmpt = toArray (_hitpoint);
	_cmpt set [0,20];
	_cmpt set [1,toArray ("-") select 0];
	_cmpt set [2,20];
	_cmpt = toString _cmpt;

	_configVeh = configFile >> "cfgVehicles" >> "RepairParts" >> _hitpoint;
	_part = getText(_configVeh >> "part");
	if (_part == "") then {
		_part = "PartGeneric";
		// Handle parts not listed in RepairParts config.
		// Additional vehicle addons may be loaded with non-standard hitpoint names.
		{
			if ([(_x select 0),_hitpoint] call fnc_inString) then {
				_part = format["Part%1",(_x select 1)];
			};
		} count [["Engine","Engine"],["HRotor","VRotor"],["Fuel","Fueltank"],["Wheel","Wheel"],["Glass","Glass"]];
	};

	// get every damaged part no matter how tiny damage is!
	_damagePercent = str(round(_damage * 100))+"% Damage";
	if (_damage > 0) then {
		_color = call {
			if (_damage <= 0.25) exitwith {"color='#00ff00'"}; //green
			if (_damage <= 0.50) exitwith {"color='#ffff00'"}; //yellow
			if (_damage <= 0.75) exitwith {"color='#ff8800'"}; //orange
			"color='#ff0000'" //red
		};

		_cmpt = format[localize "str_actions_medical_09",_cmpt,_damagePercent];

		_string = format["<t %1>%2</t>",_color,_cmpt]; //Repair - Part
		_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\repair.sqf",[_vehicle,_part,_hitpoint], 0, false, true];
		s_player_repairActions set [count s_player_repairActions,_handle];
	};

} count _hitpoints;

if (count _hitpoints > 0) then {
	// Localized in A2OA\Expansion\dta\languagecore
	_cancel = dayz_myCursorTarget addAction [localize "str_action_cancel_action", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false];
	s_player_repairActions set [count s_player_repairActions,_cancel];
	s_player_repair_crtl = 1;
};
