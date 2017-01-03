private ["_object","_proceed","_rndattemps","_limit","_dismantleToo","_ownerID","_objectID","_objectUID","_playerID","_claimedBy","_tools","_exit","_end","_onLadder","_isWater","_isOk","_counter","_text","_dis","_sfx","_animState","_started","_finished","_isMedic"];

_object = _this;
_proceed = false;
_exit = false;

//Random times to run
_rndattemps = getNumber (configFile >> "CfgVehicles" >> (typeOf _object) >> "dismantle" >> "attempts");
_limit = 1 + round(random _rndattemps);

//Dismantle magazine type
_dismantleToo = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "dismantle" >> "dismantleToo");

//Object info
_ownerID = _object getVariable["CharacterID","0"];
_objectID = _object getVariable["ObjectID","0"];
_objectUID = _object getVariable["ObjectUID","0"];
//Playerinfo
_playerID = getPlayerUID player;

//Block
_claimedBy = _object getVariable "claimed";

if (isnil "claimed") then {
	_object setVariable["claimed",_playerID,true];
};

//Tools
_tools = getArray (configFile >> "CfgVehicles" >> (typeOf _object) >> "dismantle" >> "requiredtools");

{
	private ["_end"];
	if ((_x select 0) in items player) then {_end = false;} else { format [localize "STR_BLD_DISMANTLE_MISSING",(_x select 0)] call dayz_rollingMessages; _end = true; _proceed = false; };
	
	if (_end) exitwith { _exit = true; };
} foreach _tools;

//End missing tools
if (_exit) exitwith {};


//Normal blocked stuff
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;

if(_isWater or _onLadder) exitWith { localize "str_water_ladder_cant_do" call dayz_rollingMessages; };

//Start loop
_isOk = true;
//Counter
_counter = 0;

while {_isOk} do {
//Check if we have the tools to start
	{
		private ["_end"];
		if ((_x select 0) in items player) then {_end = false;} else { format [localize "STR_BLD_DISMANTLE_MISSING",_x] call dayz_rollingMessages; _end = true; _proceed = false; };
		
		if (_end) exitwith { _exit = true; };
	}foreach _tools;
	if (_exit) exitwith {};
	
	_claimedBy = _object getVariable["claimed","0"];

	if (_claimedBy != _playerID) exitWith { format[localize "str_player_beinglooted",_text] call dayz_rollingMessages; };
	
//Run animation
	player playActionNow "Medic";
	
//Run SFX	
	_dis=20;
	_sfx = "repair";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
// Working-Factor for chopping wood.
    ["Working",0,[100,15,10,0]] call dayz_NutritionSystem;
	
//Setup Vars
	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	_started = false;
	_finished = false;
	
//run animation loop
	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started and !_isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		if (r_interrupt or (player getVariable["combattimeout",0] >= diag_tickTime)) then {
			r_doLoop = false;
			_finished = false;
		};
		uiSleep 0.1;
	};
	r_doLoop = false;
	
//Interrupt and end
	if(!_finished) exitWith {
		_isOk = false;
		_proceed = false;
	};
	
//Everything happened as it should
	if(_finished) then {	
		//Add to Counter
		_counter = _counter + 1;	
		//Try to dismantle
		if ([0.01] call fn_chance) then {
			//stop loop
			_isOk = false;
			//Set Done var
			_proceed = true;
		};
	};
	
	if (dayz_toolBreaking) then {
		//Chances to damage tools
		{
			if ([(_x select 1)] call fn_chance) then {
				player removeWeapon (_x select 0);
				player addWeapon (_x select 2);
				localize "STR_BLD_DISMANTLE_DAMAGED" call dayz_rollingMessages;
			};
		}foreach _tools;
	};
		
	if(_counter == _limit) exitWith {
		//stop loop
		_isOk = false;
		//Set Done var
		_proceed = true;
	};
	
	format [localize "STR_BLD_DISMANTLE_ATTEMPT",_counter,_limit] call dayz_rollingMessages;
	uiSleep 0.10;
};

//Completed and successful
if (_proceed) then {
	_claimedBy = _object getVariable["claimed","0"];

	if (_claimedBy != _playerID) exitWith { format[localize "str_player_beinglooted",_text] call dayz_rollingMessages; };

	format [localize "STR_BLD_DISMANTLED",typeOf _object] call dayz_rollingMessages;
	
	_activatingPlayer = player;
	PVDZ_obj_Destroy = [_objectID,_objectUID, _activatingPlayer];
	publicVariableServer "PVDZ_obj_Destroy";
	
	if (isServer) then {
		PVDZ_obj_Destroy call server_deleteObj;
	};
	
	//Need to update for sanity no client should ever create or delete anything
	deleteVehicle _object;
	
	[_dismantleToo,1,1] call fn_dropItem;
};