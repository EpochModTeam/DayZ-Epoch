if (dayz_actionInProgress) exitWith {localize "str_epoch_player_88" call dayz_rollingMessages;};
dayz_actionInProgress = true;
/*
delete object from db with extra waiting by [VB]AWOL
parameters: _obj
*/
private ["_obj","_objectID","_objectUID","_started","_finished","_animState","_isMedic","_isOk","_proceed","_counter","_limit","_objType","_sfx","_dis","_itemOut","_countOut","_selectedRemoveOutput","_nearestPole","_ownerID","_refundpart","_isWreck","_IsNearPlot","_brokenTool","_removeTool","_isDestructable","_isRemovable","_objOwnerID","_isOwnerOfObj","_preventRefund","_ipos","_item","_radius","_isWreckBuilding","_nameVehicle","_isModular","_success","_lootGroupIndex","_output"];

player removeAction s_player_deleteBuild;
s_player_deleteBuild = 1;

_obj = _this select 3;
_objOwnerID = "0";
_isOwnerOfObj = false;

if (DZE_permanentPlot) then {
	_objOwnerID = _obj getVariable["ownerPUID","0"];
	_isOwnerOfObj = (_objOwnerID == dayz_playerUID);
} else {
	_objOwnerID = _obj getVariable["CharacterID","0"];
	_isOwnerOfObj = (_objOwnerID == dayz_characterID);
};

if (_obj getVariable ["GeneratorRunning", false]) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_89" call dayz_rollingMessages;};
	
_objectID 	= _obj getVariable ["ObjectID","0"];
_objectUID	= _obj getVariable ["ObjectUID","0"];

_isOk = true;
_proceed = false;
_objType = typeOf _obj;
if (_objType in DZE_DoorsLocked) exitWith {dayz_actionInProgress = false; localize "STR_EPOCH_ACTIONS_20" call dayz_rollingMessages;};

// Chance to break tools
_isDestructable = _obj isKindOf "BuiltItems";
_isWreck = _objType in DZE_isWreck;
_isRemovable = _objType in DZE_isRemovable;
_isWreckBuilding = _objType in DZE_isWreckBuilding;
_isMine = _objType in ["Land_iron_vein_wreck","Land_silver_vein_wreck","Land_gold_vein_wreck"];
_isModular = _obj isKindOf "ModularItems";
_distance = DZE_PlotPole select 0;

_PlayerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 10]) > 1;
if (_PlayerNear && (_isMine or _objType == "Land_ammo_supply_wreck")) exitWith {dayz_actionInProgress = false; localize "str_pickup_limit_5" call dayz_rollingMessages;};

_limit = 3;
if (DZE_StaticConstructionCount > 0) then {
	_limit = DZE_StaticConstructionCount;
}
else {
	if (isNumber (configFile >> "CfgVehicles" >> _objType >> "constructioncount")) then {
		_limit = getNumber(configFile >> "CfgVehicles" >> _objType >> "constructioncount");
	};
};

_plotcheck = [player, false] call FNC_find_plots;
_IsNearPlot = _plotcheck select 1;
_nearestPole = _plotcheck select 2;

if(_IsNearPlot >= 1) then {
	// Since there are plot poles nearby we need to check ownership && friend status
	_buildcheck = [player, _nearestPole] call FNC_check_access;
	_isowner = _buildcheck select 0;
	_isfriendly = ((_buildcheck select 1) or (_buildcheck select 3));
	if (!_isowner && !_isfriendly) then {
		_limit = round(_limit*2);
	};
};

_nameVehicle = getText(configFile >> "CfgVehicles" >> _objType >> "displayName");

format[localize "str_epoch_player_162",_nameVehicle] call dayz_rollingMessages;

if (_isModular) then {
     localize "STR_EPOCH_ACTIONS_21" call dayz_rollingMessages;
};

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
	
	format[localize "str_epoch_player_163",_nameVehicle,(_counter + 1),_limit] call dayz_rollingMessages;

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
		if (_started && !_isMedic) then {
			r_doLoop = false;
			_finished = true;
			_sfx = "repair";
			[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		};
		if (r_interrupt) then {
			r_doLoop = false;
		};

		uiSleep 0.1;

	};

	if(!_finished) exitWith {
		_isOk = false;
		_proceed = false;
	};

	if(_finished) then {
		_counter = _counter + 1;
		// 4% chance to break a required tool each pass
		if ((_isDestructable || _isRemovable) && {!_isOwnerOfObj} && {dayz_toolBreaking && {[0.04] call fn_chance}}) then {
			_brokenTool = true;
		};
	};
	if(_brokenTool) exitWith {
		_isOk = false;
		_proceed = false;
	};

	if(_counter == _limit) exitWith {
		_isOk = false;
		_proceed = true;
	};

};

_success = true;

if (_brokenTool) then {
	_success = false;
	_removeTool = if (_isWreck) then {"ItemToolbox"} else {["ItemCrowbar","ItemToolbox"] call BIS_fnc_selectRandom};
	if (_removeTool == "ItemCrowbar" && !("ItemCrowbar" in items player)) then {
		if ("MeleeCrowbar" in weapons player) then {
			player removeWeapon "MeleeCrowbar";
			_success = true;
		} else {
			if (dayz_onBack == "MeleeCrowbar") then {
				dayz_onBack = ""; // Remove
				_success = true;
				if (!isNull (findDisplay 106)) then {((findDisplay 106) displayCtrl 1209) ctrlSetText "";};
			};
		};
	} else {
		if (([player,_removeTool,1] call BIS_fnc_invRemove) > 0) then {_success = true;};
	};
	
	if (_success) then {
		format[localize "str_epoch_player_164",getText(configFile >> "CfgWeapons" >> _removeTool >> "displayName"),_nameVehicle] call dayz_rollingMessages;
	};
};

// Remove only if player waited AND tool was successfully removed if broken
if (_proceed && _success) then {

	// Double check that object is not null
	if(!isNull(_obj)) then {

		_ipos = getPosATL _obj;
		deleteVehicle _obj;
		
		if(!_isWreck && !_isWreckBuilding) then {
			PVDZ_obj_Destroy = [_objectID,_objectUID,player];
			publicVariableServer "PVDZ_obj_Destroy";
		};

		if (_isWreckBuilding) then {
			PVDZ_send = [player,"RemoveObject",_ipos];
			publicVariableServer "PVDZ_send";
		};

		format[localize "str_epoch_player_165",_nameVehicle] call dayz_rollingMessages;
		["Working",0,[3,2,4,0]] call dayz_NutritionSystem;
		_preventRefund = false;

		_selectedRemoveOutput = [];
		if(_isWreck) then {
			// Find one random part to give back
			_refundpart = ["PartEngine","PartGeneric","PartFueltank","PartWheel","PartGlass","ItemJerrycan"] call BIS_fnc_selectRandom;
			_selectedRemoveOutput set [count _selectedRemoveOutput,[_refundpart,1]];
		} else {
			if(_isWreckBuilding) then {
				switch true do {
					case (_isMine): {
						_lootGroupIndex = dz_loot_groups find _objType;
						_output = [_lootGroupIndex,3] call dz_fn_loot_select;

						{_selectedRemoveOutput set [count _selectedRemoveOutput, [_x select 1,[_x select 2,_x select 3]]]} forEach _output;
					};
					case (_objType == "Land_ammo_supply_wreck"): {
						_lootGroupIndex = dz_loot_groups find _objType;
						_output = [_lootGroupIndex,5] call dz_fn_loot_select;

						{_selectedRemoveOutput set [count _selectedRemoveOutput, [_x select 1,1,_x select 0]]} forEach _output;
					};
					default {_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput")};
				};
			} else {
				_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");
				_preventRefund = (_objectID == "0" && _objectUID == "0");

			};
		};

		if ((count _selectedRemoveOutput) <= 0) then {
			localize "str_epoch_player_90" call dayz_rollingMessages;
		};

		if (_ipos select 2 < 0) then {
			_ipos set [2,0];
		};

		_radius = 1;

		if (_isMine) then {
			if((random 10) <= 4) then {
				_gems = [];
				_weights = [];
				{
					_gems set [(count _gems), (_x select 0)];
					_weights set [(count _weights), (_x select 1)];
				} count DZE_GemOccurance;
				diag_log [_gems, _weights];
				_gemSelected = [_gems, _weights] call BIS_fnc_selectRandomWeighted;
				diag_log _gemSelected;
				_selectedRemoveOutput set [(count _selectedRemoveOutput),[_gemSelected,1]];
			};
		};

		// give refund items
		if((count _selectedRemoveOutput) > 0 && !_preventRefund) then {
			_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
			{
				_itemOut = _x select 0;
				_countOut = _x select 1;
				if (typeName _countOut == "ARRAY") then {
					_countOut = round((random (_countOut select 1)) + (_countOut select 0));
				};
				if (count _x > 2) then {
					switch (_x select 2) do {
						case 2: {_item addWeaponCargoGlobal [_itemOut,_countOut]};
						case 3: {_item addMagazineCargoGlobal [_itemOut,_countOut]};
						case 5: {_item addBackpackCargoGlobal [_itemOut,_countOut]}; // Needs to make sure object can handle Backpacks or will dump on the ground.
					};
				} else {
					_item addMagazineCargoGlobal [_itemOut,_countOut];
				};
			} count _selectedRemoveOutput;

			_item setposATL _iPos;

			player reveal _item;
			DZE_GearCheckBypass = true; //Bypass gear menu checks since dialog will always open on item
			player action ["Gear", _item];
		};
	} else {
		localize "str_epoch_player_91" call dayz_rollingMessages;
	};

} else {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
};
dayz_actionInProgress = false;
s_player_deleteBuild = -1;

_obj
