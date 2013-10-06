/*
	DayZ Safe
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_tent","_location","_isOk","_cancel","_location3","_location4","_location1","_location2","_counter","_pondPos","_isPond","_ppos","_hastentitem","_dir","_building","_isBuilding","_playerPos","_item","_offset_x","_offset_y","_offset_z","_offset_z_attach","_config","_text","_tmpvault","_vault_location","_objectsPond","_combination_1","_combination_2","_combination_3","_combination_4","_combination","_removed"];
//check if can pitch here

if(TradeInprogress) exitWith { cutText ["Vault pitching already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

//disableSerialization;

_playerPos = 	getPosATL player;
_item = _this;
_hastentitem = _this in magazines player;
_offset_x = 0; 
_offset_y = 1.5;
_offset_z = 0;
_offset_z_attach = 0.5;

_location = player modeltoworld [_offset_x,_offset_y,_offset_z];

// Allow placement anywhere.

_isOk = true;
 
//diag_log ("Pitch Tent: " + str(_isok) );

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hastentitem) exitWith {cutText [format[(localize "str_player_31"),_text,"pitch"] , "PLAIN DOWN"]};

// blocked
// Allow on concrete since we dont force to ground.
// if (["concrete",dayz_surfaceType] call fnc_inString) then { _isOk = true; diag_log ("surface concrete"); };



//diag_log ("Pitch Tent: " + str(_isok) );
_dir = getDir player;

// Start Preview loop 
_tmpvault = createVehicle ["VaultStorageLocked", _location, [], 0, "CAN_COLLIDE"];
_tmpvault setdir _dir;
_tmpvault attachTo [player,[_offset_x,_offset_y,_offset_z_attach]];

_cancel = false;
_counter = 0;


while {_isOk} do {
	
	if(_counter == 0) then {
		cutText ["Planning construction stand still 5 seconds to build.", "PLAIN DOWN"];
		sleep 5; 
		_location1 = getPosATL player;
		sleep 5;
		_location2 = getPosATL player;
	
		if(_location1 distance _location2 < 0.1) exitWith {
			
			cutText ["Started construction move within 5 seconds to cancel.", "PLAIN DOWN"];
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

detach _tmpvault;

_vault_location = (getPosATL _tmpvault);



// Make sure vault is not placed on road. 
if (isOnRoad _vault_location) then { _isOk = true; diag_log ("surface is road"); };
// Make sure vault is not placed in trader citys
if(!canbuild) then { _isOk = true; diag_log ("is trader city"); };

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

deleteVehicle _tmpvault;

if(!_cancel) then {
	if (!_isOk) then {
		
		//remove safe

		_hastentitem = _this in magazines player;
		if (!_hastentitem) exitWith {cutText [format[(localize "str_player_31"),_text,"pitch"] , "PLAIN DOWN"]};

		_removed = ([player,_item] call BIS_fnc_invRemove);

		if(_removed == 1) then {

			//call dayz_forceSave;

			_dir = round(direction player);	
	
			//wait a bit
			player playActionNow "Medic";
			sleep 1;
			[player,"tentunpack",0,false] call dayz_zombieSpeak;
	
			[player,50,true,(getPosATL player)] spawn player_alertZombies;
	
			_building = nearestObject [(vehicle player), "HouseBase"];
			_isBuilding = [(vehicle player),_building] call fnc_isInsideBuilding;

			if(_isBuilding) then {
			
				_ppos = _building worldToModel _vault_location;
				_location = _building modelToWorld _ppos;

			} else {
				_location = player modelToWorld [_offset_x,_offset_y,_offset_z];
			};

			sleep 5;
			//place tent (local)
			_tent = createVehicle ["VaultStorageLocked", _location, [], 0, "CAN_COLLIDE"];
			_tent setdir _dir;
			_tent setpos _location;
			player reveal _tent;
	
			// Generate Combination
			_combination_1 = floor(random 10);
			_combination_2 = floor(random 10);
			_combination_3 = floor(random 10);
			_combination_4 = floor(random 10);

			// Format Combination
			_combination = format["%1%2%3%4",_combination_1,_combination_2,_combination_3,_combination_4];

			_tent setVariable ["CharacterID",_combination,true];
			_tent setVariable ["OEMPos",_location,true];

			//["PVDZE_obj_Publish",[_combination,_tent,[_dir,_location],"VaultStorageLocked"]] call callRpcProcedure;
			PVDZE_obj_Publish = [_combination,_tent,[_dir,_location],"VaultStorageLocked"];
			publicVariableServer  "PVDZE_obj_Publish";
	
			cutText [format["You have setup your Safe. Combination is %1",_combination], "PLAIN DOWN", 5];
		};
	
	} else {
		cutText ["You cannot place a Safe here. The area must be flat, and free of other objects", "PLAIN DOWN"];
	};

} else {
	cutText ["Canceled construction of Safe.", "PLAIN DOWN"];
};

TradeInprogress = false;