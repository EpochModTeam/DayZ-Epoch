private["_position","_tent","_location","_isOk","_backpack","_tentType","_trg","_key"];
//check if can pitch here
call gear_ui_init;
_playerPos = 	getPosATL player;
_item = _this;
_hastentitem = _this in magazines player;
_offset_x = 0; 
_offset_y = 1.5;
_offset_z = 0;
_offset_z_attach = 0.5;

_location = player modeltoworld [_offset_x,_offset_y,_offset_z];
// Allow placement anywhere.
// _building = nearestObject [(vehicle player), "HouseBase"];
//_isOk = [(vehicle player),_building] call fnc_isInsideBuilding;
_isOk = true;

//diag_log ("Pitch Tent: " + str(_isok) );

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hastentitem) exitWith {cutText [format[(localize "str_player_31"),_text,"pitch"] , "PLAIN DOWN"]};

// blocked
// Allow on concrete since we dont force to ground.
// if (["concrete",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };
if (isOnRoad _playerPos) then { _isOk = true; diag_log ("surface is road"); };
if(!placevault) then { _isOk = true; diag_log ("is trader city"); };

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
	} forEach _objectsPond;

//diag_log ("Pitch Tent: " + str(_isok) );



// Start Preview loop 
_tmpvault = createVehicle ["VaultStorageLocked", _location, [], 0, "NONE"];
_tmpvault setdir _dir;
_tmpvault attachTo [player,[_offset_x,_offset_y,_offset_z_attach]];

_cancel = false;
_counter = 0;

while {_isOk} do {
	
	if(_counter == 0) then {

		cutText ["Planning consruction stand still 5 seconds to build.", "PLAIN DOWN"];

		
		sleep 5;
		_location1 = player modeltoworld [_offset_x,_offset_y,_offset_z];
	
		if(_location distance _location1 < 0.1) exitWith {
			_isOk = false;
			_location = _location1;
		};
	};
	if(_counter == 1) then {
		cutText ["Started consruction stand still 5 seconds to build.", "PLAIN DOWN"];
		
		sleep 5;
		_location2 = player modeltoworld [_offset_x,_offset_y,_offset_z];
	
		if(_location1 distance _location2 < 0.1) exitWith {
			_isOk = false;
			_location = _location2;
		};
	};
	if(_counter >= 2) exitWith {
		_isOk = false;
		_cancel = true;
	};
	_counter = _counter + 1;
};

detach _tmpvault;
deleteVehicle _tmpvault;

if(!_cancel) then {
	if (!_isOk) then {
		//remove tentbag
		player removeMagazine _item;
		_dir = round(direction player);	
	
		//wait a bit
		player playActionNow "Medic";
		sleep 1;
		[player,"tentunpack",0,false] call dayz_zombieSpeak;
	
		_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
	
		sleep 5;
		//place tent (local)
		_tent = createVehicle ["VaultStorageLocked", _location, [], 0, "CAN_COLLIDE"];
		_tent setdir _dir;
		_location = getPosATL _tent;
		_tent setpos _location;
		player reveal _tent;
	

		_tent setVariable ["characterID",dayz_playerUID,true];
		_tent setVariable ["OEMPos",_location,true];

		["dayzPublishObj",[dayz_playerUID,_tent,[_dir,_location],"VaultStorageLocked"]] call callRpcProcedure;
	
		cutText ["You have setup your vault", "PLAIN DOWN"];
	} else {
		cutText ["You cannot place a Vault here. The area must be flat, and free of other objects", "PLAIN DOWN"];
	};

} else {
	cutText ["Canceled construction of vault.", "PLAIN DOWN"];
};