private["_location","_isOk","_dir","_classname","_item"];
_location = player modeltoworld [0,1,0];
_location set [2,0];
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater _location) or dayz_isSwimming;
_bypass = false;

call gear_ui_init;

if(_isWater) exitWith {cutText [localize "str_player_26", "PLAIN DOWN"];};
if(_onLadder) exitWith {cutText [localize "str_player_21", "PLAIN DOWN"];};

_item =			_this;
_classname = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_require = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "require");
_text = 		getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

_hasbuilditem = _this in magazines player;
_hasrequireditem = _require in items player;

if (!_hasbuilditem) exitWith {cutText [format[(localize "str_player_31"),_text,"build"] , "PLAIN DOWN"]};
if (_text == "TrapBear") then { _bypass = true; };

if (_hasrequireditem or _bypass) then {

	_dir = getDir player;

	_offset_x = 0; 
	_offset_y = 1.5;
	_offset_z = 0;
	_offset_z_attach = 0.5;

	// Start Preview loop 
	_tmpbuilt = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	_tmpbuilt setdir _dir;
	_tmpbuilt attachTo [player,[_offset_x,_offset_y,_offset_z_attach]];

	_cancel = false;
	_counter = 0;
	_isOk = true;

	

	while {_isOk} do {
	
		if(_counter == 0) then {
			cutText ["Planning consruction stand still 5 seconds to build.", "PLAIN DOWN"];
			sleep 5; 
			_location1 = getPosATL player;
			sleep 5;
			_location2 = getPosATL player;
	
			if(_location1 distance _location2 < 0.1) exitWith {
			
				cutText ["Started consruction move within 5 seconds to cancel.", "PLAIN DOWN"];
				_location3 = getPosATL player;
				sleep 5;
				_location4 = getPosATL player;

				if(_location3 distance _location4 > 0.1) exitWith {
					_isOk = false;
					_cancel = true;
				};

				_isOk = false;
			};
		};
		if(_counter >= 1) exitWith {
			_isOk = false;
			_cancel = true;
		};
		_counter = _counter + 1;
	};

	detach _tmpbuilt;

	// Get location of detached tmp built
	_built_location = (getPosATL _tmpbuilt);

	deleteVehicle _tmpbuilt;

	if(!_cancel) then {

		_dir = getDir player;
		player removeMagazine _item;

		player playActionNow "Medic";
		sleep 1;
		[player,"repair",0,false] call dayz_zombieSpeak;
		_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
		sleep 5;
		
		player allowDamage false;
		_object = createVehicle [_classname, _built_location, [], 0, "CAN_COLLIDE"];
		_object setDir _dir;
		_object setpos _built_location;
		player reveal _object;

		cutText [format[localize "str_build_01",_text], "PLAIN DOWN"];

		["dayzPublishObj",[dayz_characterID,_object,[_dir,_location],_classname]] call callRpcProcedure;

		sleep 2;
		player allowDamage true;


	} else {
		cutText [format["Canceled construction of %1.",_text], "PLAIN DOWN"];
	};

} else {
	cutText [format[localize "str_build_failed_01",_text], "PLAIN DOWN"];
};