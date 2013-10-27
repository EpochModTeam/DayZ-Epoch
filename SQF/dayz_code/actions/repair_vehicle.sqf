private ["_part","_cancel","_color","_allFixed","_percent","_string","_handle","_damage","_cmpt","_vehicle","_hitpoints"];

// [ _trader_id, _category, _action ];
// _activatingPlayer = player;

_vehicle = _this select 3;

{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
// dayz_myCursorTarget = _vehicle;

_allFixed = true;
_hitpoints = _vehicle call vehicle_getHitpoints;

{			
	_damage = [_vehicle,_x] call object_getHit;
	_part = "PartGeneric";

	//change "HitPart" to " - Part" rather than complicated string replace
	_cmpt = toArray (_x);
	_cmpt set [0,20];
	_cmpt set [1,toArray ("-") select 0];
	_cmpt set [2,20];
	_cmpt = toString _cmpt;
	
	if(["Engine",_x,false] call fnc_inString) then {
		_part = "PartEngine";
	};
		
	if(["HRotor",_x,false] call fnc_inString) then {
		_part = "PartVRotor"; //yes you need PartVRotor to fix HRotor LOL
	};

	if(["Fuel",_x,false] call fnc_inString) then {
		_part = "PartFueltank";
	};

	if(["Wheel",_x,false] call fnc_inString) then {
		_part = "PartWheel";
	};	
		
	if(["Glass",_x,false] call fnc_inString) then {
		_part = "PartGlass";
	};

	// get every damaged part no matter how tiny damage is!
	if (_damage > 0) then {
	
		_allFixed = false;
		_color = "color='#ffff00'"; //yellow
		if (_damage >= 0.5) then {_color = "color='#ff8800'";}; //orange
		if (_damage >= 0.9) then {_color = "color='#ff0000'";}; //red

		_percent = round(_damage*100);
		_string = format["<t %2>Repair%1 (%3 %4)</t>",_cmpt,_color,_percent,"%"]; //Repair - Part
		_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\repair.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
		s_player_repairActions set [count s_player_repairActions,_handle];
	};

} forEach _hitpoints;
if (_allFixed) then {
	_vehicle setDamage 0;
};

if(count _hitpoints > 0 ) then {

	_cancel = dayz_myCursorTarget addAction ["Cancel", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false, "",""];
	s_player_repairActions set [count s_player_repairActions,_cancel];

	s_player_repair_crtl = 1;
};