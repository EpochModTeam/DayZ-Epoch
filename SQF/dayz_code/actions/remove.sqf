/*
delete object from db with extra waiting by [VB]AWOL
parameters: _obj
*/
private ["_obj","_objectID","_objectUID","_started","_finished","_animState","_isMedic","_isOk","_proceed","_counter","_limit","_objType","_sfx","_dis","_itemOut","_countOut","_selectedRemoveOutput","_friendlies","_nearestPole","_ownerID","_refundpart","_isWreck","_findNearestPoles","_findNearestPole","_IsNearPlot","_brokenTool","_removeTool","_isDestructable","_isRemovable","_objOwnerID","_isOwnerOfObj","_preventRefund","_ipos","_item","_radius","_isWreckBuilding","_nameVehicle"];

if(TradeInprogress) exitWith { cutText ["Remove already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_deleteBuild;
s_player_deleteBuild = 1;

_obj = _this select 3;

_objOwnerID = _obj getVariable["CharacterID","0"];
_isOwnerOfObj = (_objOwnerID == dayz_characterID);

if(_obj getVariable ["GeneratorRunning", false]) exitWith {TradeInprogress = false; cutText ["Cannot remove running generator.", "PLAIN DOWN"];};

_objectID 	= _obj getVariable ["ObjectID","0"];
_objectUID	= _obj getVariable ["ObjectUID","0"];

_isOk = true;
_proceed = false;
_objType = typeOf _obj;

// Chance to break tools 
_isDestructable = _obj isKindOf "BuiltItems";
_isWreck = _objType in DZE_isWreck;
_isRemovable = _objType in DZE_isRemovable;
_isWreckBuilding = _objType in DZE_isWreckBuilding;

_limit = 3;
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

_nameVehicle = getText(configFile >> "CfgVehicles" >> _objType >> "displayName");

cutText [format["Starting de-construction of %1.",_nameVehicle], "PLAIN DOWN"];

// Alert zombies once.
[player,50,true,(getPosATL player)] spawn player_alertZombies;

_brokenTool = false;

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
		// 10% chance to break a required tool each pass
		if((_isDestructable or _isRemovable) and !_isOwnerOfObj) then {
			if((random 10) <= 1) then {
				_brokenTool = true;
			};
		};
	};
	if(_brokenTool) exitWith {
		_isOk = false;
		_proceed = false;
	};

	cutText [format["De-constructing %1 stage %2 of %3 walk away at anytime to cancel.", _nameVehicle, _counter,_limit], "PLAIN DOWN"];

	if(_counter == _limit) exitWith {
		_isOk = false;
		_proceed = true;
	};
	
};



if(_brokenTool) then {
	if(_isWreck) then {
		_removeTool = "ItemToolbox";
	} else {
		_removeTool = ["ItemCrowbar","ItemToolbox"] call BIS_fnc_selectRandom;
	};
	if(([player,_removeTool,1] call BIS_fnc_invRemove) > 0) then {
		cutText [format["%1 broke cannot remove %2.",getText(configFile >> "CfgWeapons" >> _removeTool >> "displayName"),_nameVehicle], "PLAIN DOWN"];
	};
};

// Remove only if player waited
if (_proceed) then {
	
	// Double check that object is not null
	if(!isNull(_obj)) then {
		
		deleteVehicle _obj;
		
		if(!_isWreck) then {
			PVDZE_obj_Delete = [_objectID,_objectUID];
			publicVariableServer "PVDZE_obj_Delete";
		};

		cutText [format["De-constructing %1.",_nameVehicle], "PLAIN DOWN"];
		
		_preventRefund = false;

		_selectedRemoveOutput = [];
		if(_isWreck) then {
			// Find one random part to give back
			_refundpart = ["PartEngine","PartGeneric","PartFueltank","PartWheel","PartGlass","ItemJerrycan"] call BIS_fnc_selectRandom;
			_selectedRemoveOutput set [count _selectedRemoveOutput,[_refundpart,1]];
		} else {
			if(_isWreckBuilding) then {
				_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");
			} else {
				_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");
				_preventRefund = (_objectID == "0" && _objectUID == "0");
			
			};
		};
		
		if((count _selectedRemoveOutput) <= 0) then {
			cutText ["No parts found.", "PLAIN DOWN"];
		};

		_ipos = getPosATL player;

		if (_ipos select 2 < 2) then {
			_ipos = [_ipos select 0,_ipos select 1,0];
		};

		_radius = 1;

		// give refund items
		if((count _selectedRemoveOutput) > 0 and !_preventRefund) then {
			_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
			{
				_itemOut = _x select 0;
				_countOut = _x select 1;
				if (typeName _countOut == "ARRAY") then {
					_countOut = round((random (_countOut select 1)) + (_countOut select 0));
				};
				_item addMagazineCargoGlobal [_itemOut,_countOut];				
			} forEach _selectedRemoveOutput;
			player reveal _item;
		};
	} else {
		cutText ["Failed object not longer exists.", "PLAIN DOWN"];
	};

} else {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
};
TradeInprogress = false;
s_player_deleteBuild = -1;