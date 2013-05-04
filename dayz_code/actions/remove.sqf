/*
delete object from db with extra waiting by [VB]AWOL
parameters: _obj
*/
private ["_obj","_objectID","_objectUID","_started","_finished","_animState","_isMedic","_isOk","_proceed","_counter","_limit","_id","_objType","_sfx","_dis","_itemOut","_countOut","_textCreate","_selectedRemoveOutput"];

if(TradeInprogress) exitWith { cutText ["Remove already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

_obj = _this select 3;

if(_obj getVariable ["GeneratorRunning", false]) exitWith {TradeInprogress = false; cutText ["Cannot remove running generator.", "PLAIN DOWN"];};

_objectID 	= _obj getVariable ["ObjectID","0"];
_objectUID	= _obj getVariable ["ObjectUID","0"];

_isOk = true;
_proceed = false;
_objType = typeOf _obj;

_limit = 5;
if(isNumber (configFile >> "CfgVehicles" >> _objType >> "constructioncount")) then {
	_limit = getNumber(configFile >> "CfgVehicles" >> _objType >> "constructioncount");
};

_findNearestPoles = nearestObjects[player, ["Plastic_Pole_EP1_DZ"], 30];
_findNearestPole = [];
{if (alive _x) then {_findNearestPole set [(count _findNearestPole),_x];};} foreach _findNearestPoles;

_IsNearPlot = count (_findNearestPole);

if(_IsNearPlot >= 1) then {

	_nearestPole = _findNearestPole select 0;

	// Find owner 
	_ownerID = _nearestPole getVariable["CharacterID","0"];

	// check if friendly to owner
	if(dayz_characterID != _ownerID) then {
		
		_friendlies		= player getVariable ["friendlyTo",[]];
		// check if friendly to owner
		if(!(_ownerID in _friendlies)) then {
			_limit = round(_limit*2);
		};
	};
};

cutText [format["Starting de-construction of %1.",_objType], "PLAIN DOWN"];

// Alert zombies once.
[player,50,true,(getPosATL player)] spawn player_alertZombies;

// Start de-construction loop
_counter = 0;
while {_isOk} do {

	// if object no longer exits this should return true.
	if(isNull(_obj)) exitWith {
		_isOk = false;
		_proceed = false;
	};

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
	
	// Double check that object is not null
	if(!isNull(_obj)) then {
		cutText [format["De-constructing %1.",_objType], "PLAIN DOWN"];
	
		// TODO add hideobject to have it sink into ground then delete
		dayzHideObject = _obj;
		hideObject _obj; // local player
		publicVariable "dayzHideObject"; // remote player
		sleep 5;


		//["dayzDeleteObj",[_objectID,_objectUID]] call callRpcProcedure;
		dayzDeleteObj = [_objectID,_objectUID];
		publicVariableServer "dayzDeleteObj";
		
		_isWreck = (typeOf _obj) in ["SKODAWreck","HMMWVWreck","UralWreck","datsun01Wreck","hiluxWreck","datsun02Wreck","UAZWreck","Land_Misc_Garb_Heap_EP1","Fort_Barricade_EP1","Rubbish2"];

		deleteVehicle _obj;

		_selectedRemoveOutput = [];
		if(_isWreck) then {
			// Find one random part to give back
			_refundpart = ["PartEngine","PartGeneric","PartFueltank","PartWheel","PartGlass","ItemJerrycan"] call BIS_fnc_selectRandom;
			_selectedRemoveOutput set [count _selectedRemoveOutput,[_refundpart,1]];
		} else {
			_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");
		};
		
		// give refund items
		if((count _selectedRemoveOutput) > 0) then {
			// Put itemsg
			{
				_itemOut = _x select 0;
				_countOut = _x select 1;
				for "_x" from 1 to _countOut do {
					player addMagazine _itemOut;
				};
				
			} forEach _selectedRemoveOutput;
			cutText ["De-constructed parts are now in your inventory.", "PLAIN DOWN"];
		};
	} else {
		cutText ["Failed object not longer exists.", "PLAIN DOWN"];
	};

} else {
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
};
TradeInprogress = false;