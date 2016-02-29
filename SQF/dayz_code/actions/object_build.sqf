private ["_status","_array","_object","_items","_classname","_text","_build","_inside","_location","_nearObjects","_dis","_sfx", "_variables"];
_array = _this select 3;

_ghost = _array select 0;
_object = nil;
_items = _array select 1;
_classname = _array select 2;
_text = _array select 3;
_build = _array select 4;
_dis = _array select 5;
_sfx = _array select 6;

_uid = getPlayerUID player;

_keepOnSlope = 0 == (getNumber (configFile >> "CfgVehicles" >> _classname >> "canbevertical"));

Dayz_constructionContext set [ 4, false ]; // Stop the construction mode, cf. player_build.sqf

if (_build) then {
    _location = getPosATL _ghost;
    _direction = getDir _ghost;
    _object = createVehicle [_classname, getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"];
    if (_object isKindOf "DZ_buildables") then { _object allowDamage false; };
    _object setDir _direction;
    if ((Dayz_constructionContext select 5) or _keepOnSlope) then {
        _object setVectorUp surfaceNormal _location;
        _location set [2,0];
    } else {
        _object setVectorUp [0,0,1];
        if (_location select 2  == 0) then { _location set [2, -0.01]; };
    };
    deleteVehicle _ghost;

    [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
    [player,_dis,true,(getPosATL player)] call player_alertZombies;
    ["Working",0,[20,40,15,0]] call dayz_NutritionSystem; // Added Nutrition-Factor for work
    player playActionNow "Medic";
    sleep 5;

    _object setPosATL _location;
    player reveal _object;

    _variables = [];

    if (_object iskindof "DZ_buildables") then {
		_passcode = [floor(random 10),floor(random 10),floor(random 10),floor(random 10)];
        _object setVariable ["ownerArray",[getPlayerUID player],true];
		_object setVariable ["dayz_padlockCombination",_passcode,true];
		
        _variables set [ count _variables, ["ownerArray", [getPlayerUID player]]];
		_variables set [ count _variables, ["padlockCombination", _passcode]];
    };
    _object setVariable ["characterID",dayz_characterID, true];

    if (_object isKindOf "TrapItems") then {
        if (getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "initState") > 0) then {
            _object setVariable ["armed", true, true];
        } else {
            _object setVariable ["armed", false, true];
        };
        _variables set [ count _variables, ["armed", _object getVariable "armed"]];
    };
	
/*    //set fuel, Later use Generator
    if (_object isKindOf "Generator_DZ") then {
    diag_log format["Object: %1, Fuel: %2",_object,fuel _object];
        if (local _object) then {
            _object setFuel 0;
        } else {
            PVDZ_send = [_object,"SetFuel",[_object,0]];
            publicVariableServer "PVDZ_send";
        };
    };
*/

    _object setVariable ["characterID",dayz_characterID,true];
    PVDZ_obj_Publish = [dayz_characterID,_object,[round _direction, _location], _variables];
    publicVariableServer "PVDZ_obj_Publish";
    diag_log [diag_ticktime, __FILE__, "New Networked object, request to save to hive. PVDZ_obj_Publish:", PVDZ_obj_Publish];

    cutText [format [localize "str_build_01",_text], "PLAIN DOWN"];
    r_action_count = 0;
} else {
    r_action_count = 0;
	
    if ((!isNil "_ghost") and {(!isNull _ghost)}) then { deleteVehicle _ghost; };
    
	{
        if (isClass (configFile >> "CfgMagazines" >> _x)) then {
            player addMagazine _x;
        };
    } foreach _items;
    cutText [format [localize "str_build_failed_02",_text], "PLAIN DOWN"];
};


