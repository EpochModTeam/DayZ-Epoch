private ["_item","_config","_text","_booleans","_worldspace","_dir","_location","_dis","_sfx","_tent","_classname","_object","_boundingBox","_maxPoint","_actionBuild","_actionCancel"];
/*
private ["_item", "_config", "_text", "_booleans", "_worldspace", "_dir", "_location", "_dis", "_sfx", "_tent"];

call gear_ui_init;

_item = _this;

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");
_classname = getText (_config >> "tentmodel");

//diag_log ("Classname: "+str(_classname));
//diag_log ("Item: "+str(_item));

if (r_action_count != 1) exitWith { cutText [localize "str_player_actionslimit", "PLAIN DOWN"]; };

// item is missing or tools are missing
if ((!(_item IN magazines player))) exitWith {
	r_action_count = 0;
	cutText [format [localize "str_player_31",_text,localize "str_player_31_pitch"] , "PLAIN DOWN"];
};

_booleans = []; //testonLadder, testSea, testPond, testBuilding, testSlope, testDistance

	//remove tentbag
	player removeMagazine _item;
	//_dir = _worldspace select 0;
	//_location = _worldspace select 1;

	//wait a bit
	//player playActionNow "Medic";
	sleep 1;
	// tent location may not be in front of player
	//player setDir _dir;
	//player setPosATL (getPosATL player);

	_dis=20;
	_sfx = "tentunpack";

	//sleep 5;
	
	cutText [localize "str_player_build_rotate", "PLAIN DOWN"];
	_location = getMarkerpos "respawn_west";
	_object = createVehicle [_classname, _location, [], 0, "NONE"];
	
	// Attach item
	_boundingBox = boundingBox _object;
	_maxPoint = ((_boundingBox select 1) select 0) max ((_boundingBox select 1) select 1);
	_object setPosATL [getPosATL _object select 0, getPosATL _object select 1, 0.01];
	_object attachTo [player, [0, _maxPoint + 1, 0.3]];
	
	//Vars
	player setVariable ["constructionObject", _object];
	_object setVariable ["characterID",dayz_characterID,true];
	
	//Actions
	_actionBuild = player addAction [localize "str_player_build_complete", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _item, _classname, _text, true, _booleans, _dis, _sfx], 1, true];
	_actionCancel = player addAction [localize "str_player_build_cancel", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _item, _classname, _text, false, _booleans, _dis, _sfx], 1, true];
	
	sleep 0.01;
	
	while {!isNull (player getVariable "constructionObject")} do {
		if (vehicle player != player) then {
			player action ["eject", vehicle player];
		};
		
		if (speed player > 10 or speed player <= -8) then {
			cutText [localize "str_player_build_movingfast", "PLAIN DOWN"];
			player playMove "amovpercmstpssurwnondnon";
		};

		sleep 0.2;
			
		if (!alive player) then {
			[[],[],[],[_object, _item, _classname, _text, false, _booleans, _dis, _sfx]] call object_build; 
		};
	};

	player removeAction _actionBuild;
	player removeAction _actionCancel;
*/
/*
	sleep 5;

	_tent = createVehicle ["TentStorage", getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"];
	_tent setDir _dir;
	_tent setPos _location; // follow terrain slope (works above sea level)
	player reveal _tent;
	_location = getPosATL _tent;

	_tent setVariable ["characterID",dayz_characterID,true];
	PVDZ_obj_Publish = [dayz_characterID,_tent,[_dir,_location],_classname];
	publicVariableServer "PVDZ_obj_Publish";

	cutText [localize "str_success_tent_pitch", "PLAIN DOWN"];
	sleep 1;
	r_action_count = 0;

} else {
	r_action_count = 0;
	cutText [localize "str_fail_tent_pitch", "PLAIN DOWN"];
};
*/
