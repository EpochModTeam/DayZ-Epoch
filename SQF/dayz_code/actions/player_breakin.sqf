private ["_brokein","_isOk","_hasSledgeHammer","_gps","_vars","_hasToolbox","_hasCrowbar","_limit","_proceed","_counter",
"_dis","_end","_msg","_sfx","_roll","_finished","_isGate","_values","_crowBarChance","_sledgeChance","_breakinChance"];

_target = _this select 3;
_pos = getPos _target;
_isWoodenGate = (typeOf cursorTarget) in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"];
_isMetalGate = (typeOf cursorTarget) in ["MetalGate_2","MetalGate_3","MetalGate_4"];
_limit = 2 + round(random 3);

if (_target getVariable ["actionInProgress",false]) exitWith { "Action is already underway" call dayz_rollingMessages;};
_target setVariable ["actionInProgress",true,true];

_hasSledgeHammer = "ItemSledge" in items player;
_hasCrowbar = "ItemCrowbar" in items player;

if (!_hasSledgeHammer) exitWith {
	localize "STR_BLD_BREAKIN_NEED_SLEDGE" call dayz_rollingMessages;
	_target setVariable ["actionInProgress",false,true];
	uiSleep 1;
};

if (!_hasCrowbar) exitWith { 
	localize "STR_BLD_BREAKIN_NEED_CROWBAR" call dayz_rollingMessages;
	_target setVariable ["actionInProgress",false,true];
	uiSleep 1;
};

_isOk = true;
_proceed = false;
_counter = 0;
_brokein = false;
_msg = "";
_end = false;

//[ChanceToBreakin,SledgeChance,CowbarChance]
_values = switch (1==1) do {
    case (_isWoodenGate): { [0.07,0.30,0.20] };
    case (_isMetalGate): { [0.03,0.15,0.10] };
    default { [] };
};

if ( (count _values) == 0 ) exitwith { _target setVariable ["actionInProgress",false,true]; };

//Move breakin chance outside the loop we only test for breakin at the very end of _limit
_breakinChance = [(_values select 0)] call fn_chance;

while {_isOk} do {
//check chance, for a maximum amount of 5 loops allowing 5 possiable chances to breakin we also now divide the max chance by the amount of trys. 
	_sledgeChance = [((_values select 1) / _limit)] call fn_chance;
	_crowBarChance = [((_values select 2) / _limit)] call fn_chance;
	
//Check if we have the tools to start
	_hasSledgeHammer = "ItemSledge" in items player;
	_hasCrowbar = "ItemCrowbar" in items player;

	if (!_hasSledgeHammer) exitWith {
		_proceed = nil;
		localize "STR_BLD_BREAKIN_NEED_SLEDGE" call dayz_rollingMessages;
		uiSleep 1;
	};

	if (!_hasCrowbar) exitWith {
		_proceed = nil;
		localize "STR_BLD_BREAKIN_NEED_CROWBAR" call dayz_rollingMessages;
		uiSleep 1;
	};
	
//Run SFX	
	_dis=20;
	_sfx = "repair";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
//Run animation loop
	_finished = ["Medic",1] call fn_loopAction;
	
//Everything happened as it should
	if(_finished) then {
		//Add to Counter
		_counter = _counter + 1;
	} else {
		_isOk = false;
		_proceed = false;
		_sledgeChance = false;
		_crowBarChance = false;
	};
	
	//some debug
	diag_log format["breakinChance: %1(%7%9), sledgeChance: %2(%5%9), crowBarChance: %3(%6%9), Attempt: %8 of %4",_breakinChance,_sledgeChance,_crowBarChance,_limit,(((_values select 1) / _limit) * 100),(((_values select 2) / _limit) * 100),(((_values select 0) / _limit) * 100),_counter,"%"];

	
//Chances to damage tools
	if (dayz_toolBreaking && (_sledgeChance or _crowBarChance)) exitWith { _proceed = false; };

//End when _counter hits _limit decide if the breakin has been successful	
	if(_counter == _limit) exitWith {	
		//start chance to gain access.  
		if (_breakinChance) then {
			_proceed = true;
			_brokein = true;
		};
		
		//stop loop
		_isOk = false;
		//Set Done var
		_proceed = true;
	};
	
	format [localize "STR_BLD_BREAKIN", _counter,_limit] call dayz_rollingMessages;
	uiSleep 0.03;
};
//End Loop

//Tool issues
if (isnil "_proceed") then { 			
	_proceed = false;
	_sledgeChance = false;
	_crowBarChance = false;
};

if (_proceed) then {
	//Completed but no success.
	if (!_brokein) then {
		PVDZ_Server_LogIt = format["BROKEINFAILED: Player %1 Broke into Failed %2 at %3 chances:%4,%5",player, (typeof _target), (mapGridPosition _pos) , _sledgeChance, _crowBarChance];
		
		_msg = "STR_BLD_BREAKIN_COMPLETE_FAIL";
	} else {
		//Completed and successful
		//Unlock gate
		_target setVariable ["isOpen", "1", true];
		//Open Gate.
		_target animate ["DoorR", 1];
		_target animate ["DoorL", 1];
		
		
		PVDZ_Server_LogIt = format["BROKEINSUCCESSFUL: Player %1 Broke into %2 at %3",player, (typeof _target), (mapGridPosition _pos)];
		
		_msg = "STR_BLD_BREAKIN_COMPLETE";
	};
	//Send info to server for admins
	publicVariableServer "PVDZ_Server_LogIt";
};

//Interrupted for some reason
if (!_proceed) then {

	if (_sledgeChance && dayz_toolBreaking) then {
		player removeWeapon "ItemSledge";
		player addMagazine "ItemSledgeHandle";
		player addMagazine "ItemSledgeHead";
		
		_msg = "STR_BLD_BREAKIN_BROKEN_SLEDGE";
	};

	if (_crowBarChance && dayz_toolBreaking) then {
		player removeWeapon "ItemCrowbar";
		player addWeapon "ItemCrowbarBent";
		
		_msg = "STR_BLD_BREAKIN_BENT_CROWBAR";
	};
	
	if (!_crowBarChance and !_sledgeChance) then {
		_msg = "STR_BLD_BREAKIN_CANCELLED";
	};
};

//Reset action switch
_target setVariable ["actionInProgress",false,true];

// Working-Factor.
["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

//Send info to player
localize _msg call dayz_rollingMessages;