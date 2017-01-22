#define CAN_DO (!r_drag_sqf && !r_player_unconscious && getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder") != 1)
//#define HAS_TOOLBOX ("ItemToolbox" in items player)
#define IN_VEHICLE (vehicle player != player)
#define IS_ALIVE (damage _object < 1)
//#define IS_DAMAGED (damage _object > 0)
#define IS_PZOMBIE (player isKindOf "PZombie_VB")

/*
	(['StudyBody',this] call userActionConditions)
	
	Return - must be true for action to show.
*/

private ["_action","_object","_show"];

_action = _this select 0;
_object = _this select 1;

_show = switch _action do {
	case "StudyBody": {!IS_ALIVE};
	case "Butcher": {!IS_ALIVE && !IN_VEHICLE && CAN_DO && !(_object getVariable["meatHarvested",false]) && !IS_PZOMBIE};
	case "Drink": {!IN_VEHICLE && CAN_DO && !dayz_isSwimming};
	case "PushPlane": {IS_ALIVE && !IN_VEHICLE && CAN_DO && count crew _object == 0 && !isEngineOn _object && !IS_PZOMBIE};
	//case "Repair": {IS_ALIVE && !IN_VEHICLE && CAN_DO && _object != dayz_myCursorTarget && HAS_TOOLBOX};
	//case "Salvage": {IS_ALIVE && !IN_VEHICLE && CAN_DO && _object != dayz_myCursorTarget && HAS_TOOLBOX && (DZE_salvageLocked or !locked _object)};
	//Built Items (Fence,Gates)
	//case "ObjectUpgrade": {!(_object getVariable['BuildLock',false])};
	//case "ObjectMaintenance": {!(_object getVariable['Maintenance',false]) OR IS_DAMAGED};
	//case "ObjectDisassembly": {((getPlayerUID player) in _object getVariable ["ownerArray",[]]) && (isClass (configFile >> "CfgVehicles" >> (typeof _object) >> "Disassembly")) && HAS_TOOLBOX};
	default {false};
};

_show