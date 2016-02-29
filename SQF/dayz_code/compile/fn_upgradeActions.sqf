private ["_vehicle","_inVehicle","_cursorTarget","_onLadder","_canDo","_ownerArray","_text","_ownerBuildLock"];

scriptName "Functions\misc\fn_upgradeActions.sqf";

_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_cursorTarget = cursorTarget;

if ((isNil "_cursorTarget") or {(isNull _cursorTarget)}) then {
    _cursorTarget = nearestObjects [ player modelToWorld [0,1.5,0] , ["DZ_buildables","BuiltItems"], 1.5];
    _cursorTarget = if (count _cursorTarget == 0) then { objNull } else { _cursorTarget select 0 };
};

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);
r_action_build = false;

dayz_resetUpgradeActions = {
    player removeAction s_player_building;
    s_player_building = -1;
    player removeAction s_player_maintenance;
    s_player_maintenance = -1;
    player removeAction s_player_disassembly;
    s_player_disassembly = -1;
};

if ((player getVariable["alreadyBuilding",0]) == 1) exitWith { call dayz_resetUpgradeActions; };

_maintenanceMode = _cursorTarget getVariable["Maintenance",false];

if (!isNull _cursorTarget and !_inVehicle and (player distance _cursorTarget < 4) and _canDo) then { 
    _ownerArray = _cursorTarget getVariable ["ownerArray",[]];
	_ownerBuildLock = _cursorTarget getVariable ["BuildLock",false];
//    diag_log [ diag_tickTime, __FILE__, "_ownerArray", _ownerArray, "PlayerUID", getPlayerUID player];
    //building System
    _text = getText (configFile >> "CfgVehicles" >> typeOf _cursorTarget >> "displayName");
    
    if ((_cursorTarget iskindof "DZ_buildables") and isText(configFile >> "CfgVehicles" >> (typeOf _cursorTarget) >> "Upgrade" >> "create") and !_ownerBuildLock) then {
        if (s_player_building < 0) then {
            if (isText (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Upgrade" >> "create")) then {
                s_player_building = player addAction [format[localize "str_upgrade",_text], "\z\addons\dayz_code\actions\object_upgradebuilding.sqf",_cursorTarget, 0, false, true, "",""];
            };
        };
    } else {
        player removeAction s_player_building;
        s_player_building = -1;
    };
	
	if (_maintenanceMode and (_cursorTarget iskindof "DZ_buildables") and isClass(configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Maintenance")) then {
	    if (s_player_maintenance < 0) then {
            s_player_maintenance = player addAction [format[localize "str_maintenance",_text], "\z\addons\dayz_code\actions\object_maintenance.sqf",_cursorTarget, 0, false, true, "", ""];
        };
    } else {
        player removeAction s_player_maintenance;
        s_player_maintenance = -1;
    };

    
    if ((((getPlayerUID player) in _ownerArray) or (count _ownerArray == 0) or ((typeof _cursorTarget) in ["WoodenFence_1_foundation","WoodenGate_foundation"])) and !_ownerBuildLock) then {
        if (s_player_disassembly < 0) then {
            if (isClass (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Disassembly")) then {
                s_player_disassembly = player addAction [format[localize "str_disassembly",_text], "\z\addons\dayz_code\actions\object_disassembly.sqf",_cursorTarget, 0, false, true, "", "'ItemToolbox' in items player"];
            };
        };
    } else {
		player removeAction s_player_disassembly;
		s_player_disassembly = -1;
	};
} else {
    call dayz_resetUpgradeActions;
};


/*
dayz_resetUpgradeActions = {
    s_player_disassembly = -1;
    s_player_building = -1;
    s_player_maintenance = -1;
};
*/

//Monitor
player setVariable ["upgradeActions", diag_ticktime, false];

