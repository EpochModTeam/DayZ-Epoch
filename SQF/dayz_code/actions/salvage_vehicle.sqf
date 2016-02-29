private ["_part","_color"];

_vehicle = _this select 3;
{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];

_PlayerNear = {isPlayer _x} count ((getPosATL _vehicle) nearEntities ["CAManBase", 10]) > 1;
if (_PlayerNear) exitWith {dayz_myCursorTarget = objNull; cutText [localize "str_pickup_limit_5", "PLAIN DOWN"];};

dayz_myCursorTarget = _vehicle;
_hitpoints = _vehicle call vehicle_getHitpoints;

_cursorTarget = cursorTarget;
_isATV = typeof _cursorTarget in ["ATV_US_EP1","ATV_CZ_EP1"];
_is6WheelType = typeOf _cursorTarget in ["V3S_Civ","Ural_TK_CIV_EP1"];
_HasNoGlassKind = (_cursorTarget iskindof "Motorcycle") or (_cursorTarget iskindof "Bicycle");

_6WheelTypeArray = ["HitLMWheel","HitRMWheel"];
_NoGlassArray = ["HitGlass1","HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6","HitLGlass","HitRGlass"];
_NoExtraWheelsArray = ["wheel_1_4_steering","wheel_2_4_steering","wheel_1_3_steering","wheel_2_3_steering"];
_RemovedPartsArray = ["motor","HitEngine","HitLF2Wheel","HitRF2Wheel","HitBody","HitMissiles","HitHull","HitVRotor"];

if (_isATV or _HasNoGlassKind) then {
	_hitpoints = _hitpoints - _NoGlassArray;
};

if (_cursorTarget iskindof "tractor") then {
	_hitpoints = _hitpoints - ["motor","HitLFWheel","HitRFWheel","HitLBWheel","HitRBWheel","HitLF2Wheel","HitRF2Wheel","HitLMWheel","HitRMWheel"];
};

if ((_cursorTarget iskindof "Bicycle") or (_cursorTarget iskindof "Motocycle")) then {
	_hitpoints = _hitpoints - ["HitEngine","HitFuel"];
};

if (_is6WheelType) then {
	_hitpoints = _hitpoints + _6WheelTypeArray;
} else {
	_hitpoints = _hitpoints - _6WheelTypeArray;
};

{
	_damage = [_vehicle,_x] call object_getHit;
	
	if (!(_x in _RemovedPartsArray)) then {
		_cmpt = toArray (_x);
		_cmpt set [0,20];
		_cmpt set [1,toArray ("-") select 0];
		_cmpt set [2,20];
		_cmpt = toString _cmpt;

		_configVeh = configFile >> "cfgVehicles" >> "RepairParts" >> _x;
		_part = getText(_configVeh >> "part");
		if (isNil "_part") then { _part = "PartGeneric"; };

		//get every damaged part no matter how tiny damage is!
		_damagePercent = str(round(_damage * 100))+"% Damage";
		if (_damage < 1) then {
			if ((_damage >= 0) and (_damage <= 0.25)) then {_color = "color='#00ff00'";}; //green
			if ((_damage >= 0.26) and (_damage <= 0.50)) then {_color = "color='#ffff00'";}; //yellow
			if ((_damage >= 0.51) and (_damage <= 0.75)) then {_color = "color='#ff8800'";}; //orange
			if ((_damage >= 0.76) and (_damage <= 1)) then {_color = "color='#ff0000'";}; //red
			_string = format[localize "str_actions_repair_01",_cmpt,_damagePercent];
			_string = format["<t %1>%2</t>",_color,_string]; //Remove - Part
			_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\salvage.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
			s_player_repairActions set [count s_player_repairActions,_handle];
		};
	};
} forEach _hitpoints;

if (count _hitpoints > 0 ) then {
	//ArmA OA String
	_cancel = dayz_myCursorTarget addAction [localize "str_action_cancel_action", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false, "",""];
	s_player_repairActions set [count s_player_repairActions,_cancel];
	s_player_repair_crtl = 1;
};