local _vehicle = _this select 3;
dayz_myCursorTarget = _vehicle;
{dayz_myCursorTarget removeAction _x} count s_player_repairActions;s_player_repairActions = [];

local _hitpoints = _vehicle call vehicle_getHitpoints;

if (count _hitpoints < 1) exitwith {};

local _hitpoint = "";
local _damage = 0;
local _hits = [];
local _configVeh = "";
local _part = "";
local _damagePercent = "";
local _color = "";
local _cmpt = "";
local _string = "";
local _handle = 0;

local _isV3S = _vehicle isKindOf "V3S_Base";
local _isTatra = (_vehicle isKindOf "T810_DZE_Base_ACR" || _vehicle isKindOf "T810_Turrets_Base_ACR");
local _isMTVR = _vehicle isKindOf "MTVR";
local _wheelSwitchTruck = (_isV3S || _isTatra || _isMTVR);

local _isBTR60 = _vehicle isKindOf "BTR60_TK_EP1";
local _isBTR90 = _vehicle isKindOf "BTR90_Base";
local _isLAV25 = _vehicle isKindOf "LAV25_Base";
local _isRM70 = _vehicle isKindOf "RM70_ACR";
local _wheelSwitchAPC = (_isBTR60 || _isBTR90 || _isLAV25 || _isRM70);

{
	_hitpoint = _x;
	_hits = [_vehicle,_hitpoint] call object_getHit;
	_damage = _hits select 0;

	_cmpt = toArray (_hitpoint);
	_cmpt set [0,20];
	_cmpt set [1,toArray ("-") select 0];
	_cmpt set [2,20];
	_cmpt = toString _cmpt;

	call {
		if (_wheelSwitchTruck) exitwith {
			call {
				if (['LMWheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - LBWheel";};
				if (['LBWheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - LMWheel";};
				if (['RMWheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - RBWheel";};
				if (['RBWheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - RMWheel";};			
			};		
		};
		if (_wheelSwitchAPC) exitwith {
			call {
				if (['LF2Wheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - LBWheel";};
				if (['LBWheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - LF2Wheel";};
				if (['RF2Wheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - RBWheel";};
				if (['RBWheel',_cmpt] call fnc_inString) exitwith {_cmpt = " - RF2Wheel";};			
			};		
		};
	};	

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

// Localized in A2OA\Expansion\dta\languagecore
local _cancel = dayz_myCursorTarget addAction [localize "str_action_cancel_action", "\z\addons\dayz_code\actions\repair_cancel.sqf","repair", 0, true, false];
s_player_repairActions set [count s_player_repairActions,_cancel];
s_player_repair_crtl = 1;