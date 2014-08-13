private ["_location","_isOk","_pondPos","_isPond","_dir","_dis","_sfx","_classname","_object","_playerPos","_item","_hastentitem","_building","_config","_text","_objectsPond","_playerUID"];
//check if can pitch here
call gear_ui_init;
_playerPos = 	getPosATL player;
_item = _this;
_hastentitem = _this in magazines player;
_location = player modeltoworld [0,2.5,0];
_location set [2,0];
_building = nearestObject [(vehicle player), "HouseBase"];
_isOk = [(vehicle player),_building] call fnc_isInsideBuilding;
_playerUID = getPlayerUID player;

//_isOk = true;

//diag_log ("Pitch Tent: " + str(_isok) );

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hastentitem) exitWith {cutText [format[(localize "str_player_31"),_text,"pitch"] , "PLAIN DOWN"]};

//blocked
if (["concrete",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };
//Block Tents in pounds
_objectsPond = 		nearestObjects [_playerPos, [], 10];
	{
		_isPond = ["pond",str(_x),false] call fnc_inString;
		if (_isPond) then {
			_pondPos = (_x worldToModel _playerPos) select 2;
			if (_pondPos < 0) then {
				_isOk = true;
			};
		};
	} count _objectsPond;

//diag_log ("Pitch Tent: " + str(_isok) );

if (!_isOk) then {
	//remove tentbag
	player removeMagazine _item;
	_dir = round(direction player);	
	
	[1,1] call dayz_HungerThirst;
	//wait a bit
	player playActionNow "Medic";
	sleep 1;
	
	_dis=20;
	_sfx = "tentunpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
	_classname = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Pitch" >> "create");

	sleep 5;
	//place tent (local)
	_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	_object setdir _dir;
	_object setpos _location;
	player reveal _object;
	_location = getPosATL _object;

	_object setVariable ["CharacterID",dayz_characterID,true];
	_object setVariable ["ownerPUID",_playerUID,true];

	//["PVDZE_obj_Publish",[dayz_characterID,_tent,[_dir,_location],_classname]] call callRpcProcedure;
	PVDZE_obj_Publish = [dayz_characterID,_object,[_dir,_location, _playerUID],_classname];
	publicVariableServer "PVDZE_obj_Publish";
	
	cutText [localize "str_success_tent_pitch", "PLAIN DOWN"];
} else {
	cutText [localize "str_fail_tent_pitch", "PLAIN DOWN"];
};

