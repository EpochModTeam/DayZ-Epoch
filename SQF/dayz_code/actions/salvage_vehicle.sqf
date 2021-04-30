private ["_hits","_part","_color","_vehicle","_PlayerNear","_hitpoints","_hitpoint",
"_RemovedPartsArray","_damage","_cmpt","_configVeh","_damagePercent","_string","_handle","_cancel","_type"];

_vehicle = _this select 3;
dayz_myCursorTarget = _vehicle;
{dayz_myCursorTarget removeAction _x} count s_player_repairActions;s_player_repairActions = [];

_PlayerNear = {isPlayer _x} count ((getPosATL _vehicle) nearEntities ["CAManBase", 12]) > 1;
if (_PlayerNear) exitWith {dayz_myCursorTarget = objNull; localize "str_pickup_limit_5" call dayz_rollingMessages;};

_hitpoints = _vehicle call vehicle_getHitpoints;

if (count _hitpoints < 1) exitwith {};

_type = typeOf _vehicle;
_RemovedPartsArray = ["motor","HitLF2Wheel","HitRF2Wheel","HitBody","HitMissiles","HitHull","HitVRotor","HitFuel","HitEngine"];

{
	_hitpoint = _x;
	_hits = [_vehicle,_hitpoint] call object_getHit;
	_damage = _hits select 0;
	if !(_hitpoint in _RemovedPartsArray) then {
		//if (_x in ["HitFuel","HitEngine"] && _damage >= 0.89) then {_damage = 1;};
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

		//get every damaged part no matter how tiny damage is!
		_damagePercent = str(round(_damage * 100))+"% Damage";
		if (_damage < 1 && {_damage > 0}) then { //Tempfix for issue where certain hitpoints on some vehicles do not get damaged and allow infinite removal
			_color = call {
				if (_damage <= 0.25) exitWith {"color='#00ff00'"}; //green
				if (_damage <= 0.50) exitWith {"color='#ffff00'"}; //yellow
				if (_damage <= 0.75) exitWith {"color='#ff8800'"}; //orange
				"color='#ff0000'" //red
			};
			_string = format[localize "str_actions_repair_01",_cmpt,_damagePercent];
			_string = format["<t %1>%2</t>",_color,_string]; //Remove - Part
			_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\salvage.sqf",[_vehicle,_part,_hitpoint], 0, false, true];
			s_player_repairActions set [count s_player_repairActions,_handle];
		};
	};
} count _hitpoints;

if (count _hitpoints > 0 ) then {
	_cancel = dayz_myCursorTarget addAction [localize "str_action_cancel_action", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false];
	s_player_repairActions set [count s_player_repairActions,_cancel];
	s_player_repair_crtl = 1;
};
