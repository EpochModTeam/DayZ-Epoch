#define CAN_DO (!r_drag_sqf && !r_player_unconscious && getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder") != 1)
#define HAS_TOOLBOX ("ItemToolbox" in items player)
#define IN_VEHICLE (vehicle player != player)
#define IS_ALIVE (damage _object < 1)
#define IS_BIKE (_object isKindOf "Bicycle")
#define IS_PZOMBIE (player isKindOf "PZombie_VB")

private ["_action","_object","_show"];

_action = _this select 0;
_object = _this select 1;

_show = switch _action do {
	case "Butcher": {!IS_ALIVE && !IN_VEHICLE && CAN_DO && !(_object getVariable["meatHarvested",false]) && !IS_PZOMBIE};
	case "PushPlane": {IS_ALIVE && !IN_VEHICLE && CAN_DO && count crew _object == 0 && !isEngineOn _object && !IS_PZOMBIE};
	case "Repair": {IS_ALIVE && !IN_VEHICLE && CAN_DO && _object != dayz_myCursorTarget && HAS_TOOLBOX};
	case "Salvage": {IS_ALIVE && !IN_VEHICLE && CAN_DO && _object != dayz_myCursorTarget && HAS_TOOLBOX && !IS_BIKE && (DZE_salvageLocked or !locked _object)};
	case "StudyBody": {!IS_ALIVE && !IN_VEHICLE && !(_object isKindOf "zZombie_base")};
	default {false};
};

_show