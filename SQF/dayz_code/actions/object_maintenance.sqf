/*
	Upkeep on built items.
*/

#define MAINTENANCE_NUTRITION_VALUES [20,40,15,0]


private ["_isMedic","_cursorTarget"];

_cursorTarget = _this select 3;

// ArmaA2 bug workaround: sometimes the object is null
if ((isNil "_cursorTarget") or {(isNull _cursorTarget)}) then {
    _cursorTarget = nearestObjects [ player modelToWorld [0,1.5,0] , ["DZ_buildables","BuiltItems"], 1.5];
    _cursorTarget = if (count _cursorTarget == 0) then { objNull } else { _cursorTarget select 0 };
};

if(isNull _cursorTarget) exitWith {
    cutText ["No maintenance options", "PLAIN DOWN"];
};

//Remove action Menu
player removeAction s_player_maintenance;
s_player_maintenance = -1;

//Item
_item = typeof _cursorTarget;
//diag_log (str(_item));

_classname = configFile >> "CfgVehicles" >> _item;
_displayname = getText (_classname >> "displayname");

//Get tools needed
_requiredTools = getArray (_classname >> "Maintenance" >> "requiredTools");
//diag_log (str(_requiredTools));

//get parts needed
_requiredParts = getArray (_classname >> "Maintenance" >> "requiredParts"); 
//diag_log (str(_requiredParts));

//Normal blocked stuff
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;

_upgradeParts = [];
_startMaintenance = true;

if(_isWater or _onLadder) exitWith {
	cutText ["Unable to proceed", "PLAIN DOWN"];
};

// lets check player has requiredTools for upgrade
{
	if (!(_x IN items player)) exitWith {
		cutText[ format[ localize "str_maintenanceMissingTool",_x], "PLAIN DOWN"]; //"Missing %1 to do maintenance %2."
		_startMaintenance = false;
	};
} count _requiredTools;

// lets check player has requiredParts for upgrade
{
	if (!(_x IN magazines player)) exitWith {
		cutText[ format[ localize "str_maintenanceMissingPart",_x,_displayname], "PLAIN DOWN"]; //"Missing %1 to maintenance %2."
		_startMaintenance = false;
	};
} count _requiredParts;


if (_startMaintenance) then {
	//play animation
	player playActionNow "Medic";
	_dis=20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;
	["Working",0,MAINTENANCE_NUTRITION_VALUES] call dayz_NutritionSystem; // Added Nutrition-Factor for work
	
	{ player removeMagazine _x; } count _requiredParts;
	
	//Animation Loop
	r_doLoop = true;
	_started = false;
	_finished = false;
	while {r_doLoop} do {
		_animState = animationState player;
		_isRefuel = ["medic",_animState] call fnc_inString;
		if (_isRefuel) then {
			_started = true;
		};
		if (_started and !_isRefuel) then {
			r_doLoop = false;
			_finished = true;
		};
		sleep 0.1;
	};

	r_doLoop = false;
	
	if (_finished) then {
		if (isServer) then {
			PVDZ_veh_Save call server_updateObject;
		} else {
			PVDZ_veh_Save = [_cursorTarget,"maintenance"];
			publicVariableServer "PVDZ_veh_Save";
		};
		
		PVDZ_object_replace = [_cursorTarget];
		publicVariableServer "PVDZ_object_replace";
	};
	cutText [localize "str_maintenanceDone", "PLAIN DOWN"];
};

