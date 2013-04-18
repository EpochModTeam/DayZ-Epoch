/*
delete object from db with extra waiting by [VB]AWOL
parameters: _obj
*/
private ["_obj","_objectID","_objectUID","_started","_finished","_animState","_isMedic","_isOk","_proceed","_counter","_limit","_id","_objType","_sfx","_dis","_itemOut","_countOut","_textCreate","_selectedRemoveOutput"];
_obj = _this select 3;
_objectID 	= _obj getVariable ["ObjectID","0"];
_objectUID	= _obj getVariable ["ObjectUID","0"];

_isOk = true;
_proceed = false;
_objType = typeOf _obj;

_limit = 5;

if(isNumber (configFile >> "CfgVehicles" >> _objType >> "constructioncount")) then {
	_limit = getNumber(configFile >> "CfgVehicles" >> _objType >> "constructioncount");
};

cutText [format["Starting de-construction of %1.",_objType], "PLAIN DOWN"];

// Alert zombies once.
_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;

// Start de-construction loop
_counter = 0;
while {_isOk} do {

	player playActionNow "Medic";
	_dis=20;
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	_started = false;
	_finished = false;

	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started and !_isMedic) then {
			r_doLoop = false;
			_finished = true;
			_sfx = "repair";
			[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		};
		if (r_interrupt) then {
			r_doLoop = false;
		};
		sleep 0.1;
		
	};

	if(!_finished) exitWith {
		_isOk = false;
		_proceed = false;
	};

	if(_finished) then {
		_counter = _counter + 1;
	};

	cutText [format["De-constructing %1 stage %2 of %3 walk away at anytime to cancel.",_objType, _counter,_limit], "PLAIN DOWN"];

	if(_counter == _limit) exitWith {
		_isOk = false;
		_proceed = true;
	};
	
};

// Remove only if player waited
if (_proceed) then {
	cutText [format["De-constructing %1.",_objType], "PLAIN DOWN"];
	
	//["dayzDeleteObj",[_objectID,_objectUID]] call callRpcProcedure;
	dayzDeleteObj = [_objectID,_objectUID];
	publicVariableServer "dayzDeleteObj";

	deleteVehicle _obj;

	// give refund items
	_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");
	if((count _selectedRemoveOutput) > 0) then {
		// Put items
		{
			_itemOut = _x select 0;
			_countOut = _x select 1;
			diag_log format["Removal Output: %1 %2", _itemOut,_countOut];
		
			for "_x" from 1 to _countOut do {
				player addMagazine _itemOut;
			};
				
		} forEach _selectedRemoveOutput;
		cutText ["De-constructed parts are now in your inventory.", "PLAIN DOWN"];
	};

} else {
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
};