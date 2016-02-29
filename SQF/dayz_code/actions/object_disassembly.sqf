private ["_cursorTarget","_onLadder","_isWater","_alreadyRemoving","_characterID","_objectID","_objectUID","_ownerArray","_dir",
    "_realObjectStillThere","_upgrade","_entry","_parent","_requiredParts","_requiredTools","_model","_toolsOK","_displayname",
    "_whpos","_i","_wh","_object"];


_cursorTarget = _this select 3;

// ArmaA2 bug workaround: sometimes the object is null
if ((isNil "_cursorTarget") or {(isNull _cursorTarget)}) then {
    _cursorTarget = nearestObjects [ player modelToWorld [0,1.5,0] , ["DZ_buildables","BuiltItems"], 1.5];
    _cursorTarget = if (count _cursorTarget == 0) then { objNull } else { _cursorTarget select 0 };
};

if(isNull _cursorTarget) exitWith {
    //cutText [localize "str_disassembleNoOption", "PLAIN DOWN"];
	_msg = localize "str_disassembleNoOption";
	_msg call dayz_rollingMessages;
};

//Remove action Menu
player removeAction s_player_disassembly;
s_player_disassembly = -1;

//Normal blocked stuff
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = (surfaceIsWater (getPosATL player)) or dayz_isSwimming;
if(_isWater or _onLadder) exitWith {
	_msg = localize "str_disassembleInProgress";
	_msg call dayz_rollingMessages;
};

_alreadyRemoving = _cursorTarget getVariable["ObjectLocked",0];
if (_alreadyRemoving == 1) exitWith {
	_msg = localize "str_disassembleInProgress";
	_msg call dayz_rollingMessages;
};

_cursorTarget setVariable["ObjectLocked",1,true];
_characterID = _cursorTarget getVariable ["characterID","0"];
_objectID = _cursorTarget getVariable ["ObjectID","0"];
_objectUID = _cursorTarget getVariable ["ObjectUID","0"];
_ownerArray = _cursorTarget getVariable ["ownerArray",[]];
_dir = round getDir _cursorTarget;
_vector = [vectorDir _cursorTarget,vectorUp _cursorTarget];
_pos = getposATL _cursorTarget;
if (((_vector select 1) select 2) - 1 > 0.001) then { _pos set [2,0]; };

_realObjectStillThere = true;
_upgrade = typeOf _cursorTarget;
_entry = configFile >> "CfgVehicles" >> _upgrade;
r_interrupt = false;

for "_i" from 1 to 20 do {
    _parent = inheritsFrom _entry;
    _requiredParts = [] + (getArray (_parent >> "Upgrade" >> "requiredParts"));
    _requiredTools = [] + (getArray (_parent >> "Upgrade" >> "requiredTools"));
    _model = getText (_parent >> "model"); // model of parent
    _displayname = getText (_entry >> "displayName"); // name of current
	diag_log format["%1 - %2 - %3 - %4 - %5",_parent,_requiredParts,_requiredTools,_model,_displayname];

    // check the tools needed
    _toolsOK = true;
    {
        if (!(_x IN items player)) exitWith { _toolsOK = false; };
    } count _requiredTools;
	
    if (!_toolsOK) exitWith {
        //cutText [format [localize "str_disassembleMissingTool",getText (configFile >> "CfgWeapons" >> _x >> "displayName"),_displayname], "PLAIN DOWN"];//["Missing %1 to disassemble %2."
    	_msg = format [localize "str_disassembleMissingTool",getText (configFile >> "CfgWeapons" >> _x >> "displayName"),_displayname];
		_msg call dayz_rollingMessages;
	};

    if (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 0) then {
        player playActionNow "Medic";
        _dis=20;
        [player,"tentpack",0,false,20] call dayz_zombieSpeak;
        [player,_dis,true,(getPosATL player)] call player_alertZombies;
        //wait animation starts and block
        waitUntil {getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 1};
    };


    // remove object
    deleteVehicle _cursorTarget;
    _cursorTarget = objNull;
    if (_realObjectStillThere) then { // send to server the destroy request
        _realObjectStillThere = false;
        PVDZ_obj_Destroy = [_objectID,_objectUID];
        publicVariableServer "PVDZ_obj_Destroy";
        diag_log [diag_ticktime, __FILE__, "Networked object, request to destroy", PVDZ_obj_Destroy];
    };

    ["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

    // check whether we reached the base class, for which no P3D is defined
    if (count _requiredParts == 0) exitwith {
        diag_log [diag_ticktime, __FILE__, "Dismantle terminated, last building deleted is:", _upgrade];
    };

    // create a weaponholder with dismissed parts
    _whpos=player modelToWorld [2 * sin(30*_i), 2 * cos(30*_i), 0];
    _whpos set [2,0];
    _wh = createVehicle ["WeaponHolder", _whpos, [], 0, "CAN_COLLIDE"];
    _wh setDir (30*_i);
    _wh setPosATL _whpos;
    {
        if (isClass (configFile >> "CfgMagazines" >> _x))
        then { _wh addMagazineCargoGlobal [_x, 1]; }
        else { _wh addWeaponCargoGlobal [_x, 1]; };
    } forEach _requiredParts;
    diag_log [diag_ticktime, __FILE__, "Pile created with:", _requiredParts];

    // create the parent object locally
    _upgrade = configName _parent;
	if (getNumber(_parent >> "scope")==2) then {
		_cursorTarget = _upgrade createVehicleLocal getMarkerpos "respawn_west";
		_cursorTarget setVectorDirAndUp _vector;
		_cursorTarget setPosATL _pos;
	};

    sleep 1.5;

    if (r_interrupt) exitwith { 
        diag_log [diag_ticktime, __FILE__, "Operation interrupted, last building deleted is:", _upgrade];           
    };

    _entry = _parent;
};

// wait animation ends
waitUntil {r_interrupt or (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 0)};
if (r_interrupt and vehicle player == player) then {
    [objNull, player, rSwitchMove,""] call RE;
    player playActionNow "stop";
    r_interrupt = false;
};

if (!_realObjectStillThere) then {
    // current object is a local one, replace it by a networked one, with all attributes
    // and request a HIVE save
    if (!isNull _cursorTarget) then {
        _upgrade = typeOf _cursorTarget;
        deleteVehicle _cursorTarget;
		if (getNumber(_parent >> "scope")==2) then {
			_object = createVehicle [_upgrade, getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"];
			if (_object isKindOf "DZ_buildables") then { _object allowDamage false; };
			_object setVectorDirAndUp _vector;
			_object setPosATL _pos;
			_puid = getPlayerUID player;
			if (!(_puid in _ownerArray)) then {
				_ownerArray set [ count _ownerArray, _puid ];
			};        
			_object setVariable ["ownerArray",_ownerArray,true];
			_variables = [[ "ownerArray", _ownerArray]];
			_object setVariable ["characterID",_characterID,true];
			PVDZ_obj_Publish = [dayz_characterID,_object,[_dir, _pos],_variables];
			publicVariableServer "PVDZ_obj_Publish";
			diag_log [diag_ticktime, __FILE__, "New Networked object, request to save to hive. PVDZ_obj_Publish:", PVDZ_obj_Publish];
			/*
			//Send maintenance info
			PVDZ_veh_Save = [_object,"maintenance"];
			publicVariableServer "PVDZ_veh_Save";*/
			player reveal _object;
		};
    };
};

_msg = localize "str_disassembleDone";
_msg call dayz_rollingMessages;
//cutText [localize "str_disassembleDone", "PLAIN DOWN"];

_cursorTarget setVariable["ObjectLocked",0,true];

