/*
	DayZ Harvest Plant
	Usage: spawn player_harvestPlant;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_72" call dayz_rollingMessages;};
dayz_actionInProgress = true;
closeDialog 0;

local _plant = objNull;
local _itemOut = "";
local _type = "";

{	
	local _obj = _x;
	_type = typeOf _obj;
	if (alive _obj && {_type in dayz_plantTypes}) exitwith {
		local _objName = _obj call fn_getModelName;
		
		if (_objName in ["pumpkin.p3d","p_helianthus.p3d","p_fiberplant_ep1.p3d"] || _type != "" && {_objName in dayz_plant}) exitWith {
			_index = dayz_plant find _objName;
			_itemOut = dayz_plantOutput select _index;
			_plant = _obj;
		};
	};
} count nearestObjects [([player] call FNC_getPos), [], 10];

if !(isNull _plant) then {
	[player,(getPosATL player),20,"chopwood"] spawn fnc_alertZombies;
	local _finished = ["Medic",1] call fn_loopAction;

	if (_finished) then {
		local _playerNear = {isPlayer _x} count (([_plant] call FNC_GetPos) nearEntities ["CAManBase", 12]) > 1;
		if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_pickup_limit_5" call dayz_rollingMessages;};

		false call dz_fn_meleeMagazines; //Remove melee magazines (BIS_fnc_invAdd fix)
		["Working",0,[3,2,4,0]] call dayz_NutritionSystem;
		local _invResult = false;
		local _groundDrop = false;
		local _i = 0;
		local _j = 0;
		local _countOut = getNumber(configFile >> "CfgSurvival" >> "Plants" >> _type >> "qty");
		_countOut = 1 + floor(random _countOut);
		
		for "_x" from 1 to _countOut do {
			_invResult = [player,_itemOut] call BIS_fnc_invAdd;
			if !(_invResult) then {				
				[_itemOut,1,1] call fn_dropItem;
				_groundDrop = true;
				_j = _j + 1;
			};
			_i = _i + 1;
		};
		true call dz_fn_meleeMagazines;

		local _text = getText (configFile >> "CfgMagazines" >> _itemOut >> "displayName");

		if (_i != 0) then {
			if ("" == typeOf _plant) then {
				PVDZ_objgather_Knockdown = [_plant,player]; // Ask server to setDamage on plant and sync for JIP
				publicVariableServer "PVDZ_objgather_Knockdown";
			} else {
				local _ownerPUID = _plant getVariable ["ownerPUID","0"];	
				
				if ((_ownerPUID != "0") && {_type in DZE_Plants}) then {	//	Makes sure the plant is an acutal player built object and no map addtion
					PVDZ_obj_Destroy = [netID player,netID _plant, dayz_authKey];
					publicVariableServer "PVDZ_obj_Destroy";
				} else {
					deleteVehicle _plant;	
				};				
			};
			if (_groundDrop) then {
				format[localize "str_success_gathered",_text,(_i-_j),_j,_text] call dayz_rollingMessages;
			} else {	
				format[localize "str_epoch_player_154",_i,_text] call dayz_rollingMessages;
			};	
		} else {
			format[localize "str_epoch_player_143",_i,_text] call dayz_rollingMessages;
		};
	} else {
		localize "str_epoch_player_73" call dayz_rollingMessages;
	};
} else {
	localize "str_epoch_player_74" call dayz_rollingMessages;
};

dayz_actionInProgress = false;