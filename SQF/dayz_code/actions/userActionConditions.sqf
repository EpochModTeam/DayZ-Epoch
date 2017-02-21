#define CAN_DO (!r_drag_sqf && !r_player_unconscious && getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder") != 1)
#define HAS_TOOLBOX ("ItemToolbox" in items player)
#define IN_VEHICLE (vehicle player != player)
#define IS_ALIVE (damage _object < 1)
#define IS_DAMAGED (damage _object > 0)
#define IS_PZOMBIE (player isKindOf "PZombie_VB")

/*
	(['Butcher',this] call userActionConditions)
	
	Return - must be true for action to show.
*/

private ["_action","_object","_show"];

_action = _this select 0;
_object = _this select 1;

_show = switch _action do {
	case "Butcher": {!IS_ALIVE && !IN_VEHICLE && CAN_DO && !(_object getVariable["meatHarvested",false]) && !IS_PZOMBIE};
	case "Drink": {!IN_VEHICLE && CAN_DO && !dayz_isSwimming};
	case "PushPlane": {IS_ALIVE && !IN_VEHICLE && CAN_DO && count crew _object == 0 && !isEngineOn _object && !IS_PZOMBIE};
	//case "Repair": {IS_ALIVE && !IN_VEHICLE && CAN_DO && _object != dayz_myCursorTarget && HAS_TOOLBOX};
	//case "Salvage": {IS_ALIVE && !IN_VEHICLE && CAN_DO && _object != dayz_myCursorTarget && HAS_TOOLBOX && (DZE_salvageLocked or !locked _object)};
	//Built Items (Fence,Gates)
	//case "ObjectUpgrade": {CAN_DO && !IN_VEHICLE && !(_object getVariable["BuildLock",false])};
	//case "ObjectMaintenance": {CAN_DO && !IN_VEHICLE && (_object getVariable["Maintenance",false] or IS_DAMAGED)};
	//case "ObjectDisassembly": {CAN_DO && !IN_VEHICLE && HAS_TOOLBOX && !(_object getVariable["BuildLock",false]) && (((getPlayerUID player) in (_object getVariable["ownerArray",[]])) or (count (_object getVariable["ownerArray",[]]) == 0) or (typeOf _object in ["WoodenFence_1_foundation","WoodenGate_foundation"]))};
	default {false};
};

_show