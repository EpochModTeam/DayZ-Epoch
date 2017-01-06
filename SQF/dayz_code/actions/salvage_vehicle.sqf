private ["_part","_color","_vehicle","_PlayerNear","_hitpoints","_isATV","_is6WheelType","_HasNoGlassKind","_hitpoint",
"_6WheelTypeArray","_NoGlassArray","_NoExtraWheelsArray","_RemovedPartsArray","_damage","_cmpt","_configVeh","_damagePercent","_string","_handle","_cancel","_type"];

_vehicle = _this select 3;
{dayz_myCursorTarget removeAction _x} count s_player_repairActions;s_player_repairActions = [];

_PlayerNear = {isPlayer _x} count ((getPosATL _vehicle) nearEntities ["CAManBase", 10]) > 1;
if (_PlayerNear) exitWith {dayz_myCursorTarget = objNull; localize "str_pickup_limit_5" call dayz_rollingMessages;};

dayz_myCursorTarget = _vehicle;
_hitpoints = _vehicle call vehicle_getHitpoints;

_type = typeOf _vehicle;
_isATV = _type in ["ATV_US_EP1","ATV_CZ_EP1"];
_is6WheelType = false;
{if (_type isKindOf _x) exitWith {_is6WheelType = true;};} count ["Kamaz_Base","MTVR","Ural_Base","Ural_Base_withTurret","V3S_Base"];
_HasNoGlassKind = (_vehicle isKindOf "Motorcycle");

_6WheelTypeArray = ["HitLMWheel","HitRMWheel"];
_NoGlassArray = ["HitGlass1","HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6","HitLGlass","HitRGlass"];
_NoExtraWheelsArray = ["wheel_1_4_steering","wheel_2_4_steering","wheel_1_3_steering","wheel_2_3_steering"];
_RemovedPartsArray = ["motor","HitLF2Wheel","HitRF2Wheel","HitBody","HitMissiles","HitHull","HitVRotor","HitFuel","HitEngine"];

if (_isATV or _HasNoGlassKind) then {
	_hitpoints = _hitpoints - _NoGlassArray;
};

if (_vehicle isKindOf "tractor") then {
	_hitpoints = _hitpoints - ["motor","HitLFWheel","HitRFWheel","HitLBWheel","HitRBWheel","HitLF2Wheel","HitRF2Wheel","HitLMWheel","HitRMWheel"];
};

if (_vehicle isKindOf "Motocycle") then {
	_hitpoints = _hitpoints - ["HitEngine","HitFuel"];
};

if (_is6WheelType) then {
	_hitpoints = _hitpoints + _6WheelTypeArray;
} else {
	_hitpoints = _hitpoints - _6WheelTypeArray;
};

{
	_hitpoint = _x;
	_damage = [_vehicle,_x] call object_getHit;
	
	if !(_x in _RemovedPartsArray) then {
		//if (_x in ["HitFuel","HitEngine"] && _damage >= 0.89) then {_damage = 1;};
		_cmpt = toArray (_x);
		_cmpt set [0,20];
		_cmpt set [1,toArray ("-") select 0];
		_cmpt set [2,20];
		_cmpt = toString _cmpt;

		_configVeh = configFile >> "cfgVehicles" >> "RepairParts" >> _x;
		_part = getText(_configVeh >> "part");
		if (_part == "") then {
			_part = "PartGeneric";
			// Handle parts not listed in RepairParts config.
			// Additional vehicle addons may be loaded with non-standard hitpoint names.
			{
				if ([(_x select 0),_hitpoint] call fnc_inString) then {
					_part = format["Part%1",(_x select 1)];
				};
			} forEach [["Engine","Engine"],["HRotor","VRotor"],["Fuel","Fueltank"],["Wheel","Wheel"],["Glass","Glass"]];
		};

		//get every damaged part no matter how tiny damage is!
		_damagePercent = str(round(_damage * 100))+"% Damage";
		if (_damage < 1 && _damage > 0) then { //Tempfix for issue where certain hitpoints on some vehicles do not get damaged and allow infinite removal
			_color = switch true do {
				case (_damage <= 0.25): {"color='#00ff00'"}; //green
				case (_damage <= 0.50): {"color='#ffff00'"}; //yellow
				case (_damage <= 0.75): {"color='#ff8800'"}; //orange 
				default {"color='#ff0000'"}; //red
			};
			_string = format[localize "str_actions_repair_01",_cmpt,_damagePercent];
			_string = format["<t %1>%2</t>",_color,_string]; //Remove - Part
			_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\salvage.sqf",[_vehicle,_part,_x], 0, false, true];
			s_player_repairActions set [count s_player_repairActions,_handle];
		};
	};
} forEach _hitpoints;

if (count _hitpoints > 0 ) then {
	// Localized in A2OA\Expansion\dta\languagecore
	_cancel = dayz_myCursorTarget addAction [localize "str_action_cancel_action", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false];
	s_player_repairActions set [count s_player_repairActions,_cancel];
	s_player_repair_crtl = 1;
};