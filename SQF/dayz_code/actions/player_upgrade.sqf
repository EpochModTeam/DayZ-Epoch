/*
	DayZ Base Building Upgrades
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_location","_dir","_classname","_missing","_text","_proceed","_num_removed","_object","_missingQty","_itemIn","_countIn","_qty","_removed","_removed_total","_tobe_removed_total","_objectID","_objectUID","_temp_removed_array","_textMissing","_newclassname","_requirements","_obj","_upgrade","_lockable","_combination_1","_combination_2","_combination_3","_combination","_objectCharacterID","_ownerID","_qtyBP","_forEachIndex","_bpMags","_countNew","_bp2Remove","_count","_friendsArr","_vector","_temp_BP_removed_array"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_52" call dayz_rollingMessages;};
dayz_actionInProgress = true;
player removeAction s_player_upgrade_build;
s_player_upgrade_build = 1;
_obj = _this select 3;
_objectID 	= _obj getVariable ["ObjectID","0"];
_objectUID	= _obj getVariable ["ObjectUID","0"];

if (_objectID == "0" && _objectUID == "0") exitWith {dayz_actionInProgress = false; s_player_upgrade_build = -1; localize "str_epoch_player_50" call dayz_rollingMessages;};

_classname = typeOf _obj;
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_upgrade = getArray (configFile >> "CfgVehicles" >> _classname >> "upgradeBuilding");

if ((count _upgrade) > 0) then {
	_newclassname = _upgrade select 0;
	_lockable = 0;
	if(isNumber (configFile >> "CfgVehicles" >> _newclassname >> "lockable")) then {
		_lockable = getNumber(configFile >> "CfgVehicles" >> _newclassname >> "lockable");
	};
	_requirements = _upgrade select 1;
	_missingQty = 0;
	_missing = "";
	_bpMags = [];
	_bp2Remove = [];
	_qtyBP = 0;
	_proceed = true;

	{
		_itemIn = _x select 0;
		_countIn = _x select 1;
		_qty = { (_x == _itemIn) || {configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn} } count magazines player;

		if (!isNull (UnitBackpack Player) && {_qty < _countIn}) then {
			_bpMags = (getMagazineCargo (unitbackpack player));
			{
				if ((_x == _itemIn) || {configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn}) exitWith {
					_qtyBP = ((_bpMags select 1) select _forEachIndex);
					_bp2Remove set [(count _bp2Remove), _x];
				};
			} forEach (_bpMags select 0);
		};

		if ((_qty < _countIn) && {_qtyBP < (_countIn - _qty)}) exitWith { _missing = _itemIn; _missingQty = (_countIn - (_qty + _qtyBP)); _proceed = false; };
	} forEach _requirements;
	
	if (_proceed) then {
		["Working",0,[3,2,4,0]] call dayz_NutritionSystem;
		player playActionNow "Medic";
		[player,20,true,(getPosATL player)] spawn player_alertZombies;
	
		_temp_removed_array = [];
		_temp_BP_removed_array = [];
		_removed_total = 0;
		_tobe_removed_total = 0;
		
		{
			_removed = 0;
			_itemIn = _x select 0;
			_countIn = _x select 1;
			_tobe_removed_total = _tobe_removed_total + _countIn;

			{
				if( (_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
					_num_removed = ([player,_x] call BIS_fnc_invRemove);
					_removed = _removed + _num_removed;
					_removed_total = _removed_total + _num_removed;
					if(_num_removed >= 1) then {
						_temp_removed_array set [count _temp_removed_array,_x];
					};
				};
			} forEach magazines player;

			if (!isNull (UnitBackpack Player) && {_removed < _countIn}) then {
				_bpMags = (getMagazineCargo (unitbackpack player));
				clearMagazineCargoGlobal (unitbackpack player);

				{
					_count = ((_bpMags select 1) select _forEachIndex);
					_countNew = _count;
					if (_x in _bp2Remove && {(_x == _itemIn) || {configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn}}) then {
						_countNew = (_count - (_countIn - _removed));
						_bp2Remove = _bp2Remove - [_x];
					};
					if (_countNew > 0) then {
						(unitbackpack player) addMagazineCargoGlobal [_x, _countNew];
					};
					_num_removed = (_count - _countNew);
					_temp_BP_removed_array set [(count _temp_BP_removed_array), [_x, _num_removed]];
					_removed_total = _removed_total + _num_removed;
				} forEach (_bpMags select 0);
			};

		} forEach _requirements;

		if (_tobe_removed_total == _removed_total) then {
			_location	= _obj getVariable["OEMPos",(getposATL _obj)];
			_dir = getDir _obj;
			_vector = [(vectorDir _obj),(vectorUp _obj)];	
			_objectCharacterID 	= _obj getVariable ["CharacterID","0"];
			_classname = _newclassname;
			_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];
			_object setDir _dir;
			_object setVariable["memDir",_dir,true];
			_object setVectorDirAndUp _vector;
			_object setPosATL _location;

			if (_lockable == 3) then {

				_combination_1 = floor(random 10);
				_combination_2 = floor(random 10);
				_combination_3 = floor(random 10);
				_combination = format["%1%2%3",_combination_1,_combination_2,_combination_3];
				
				_objectCharacterID = _combination;
				
				format[localize "str_epoch_player_158",_combination,_text] call dayz_rollingMessages;
				systemChat format[localize "str_epoch_player_158",_combination,_text];
			} else {	
				format[localize "str_epoch_player_159",_text] call dayz_rollingMessages;
			};
			if (DZE_GodModeBase && {!(_classname in DZE_GodModeBaseExclude)}) then {
				_object addEventHandler ["HandleDamage",{false}];
				_object enableSimulation false;
			}; 
			if (DZE_permanentPlot) then {
				_ownerID = _obj getVariable["ownerPUID","0"];
				if (_ownerID == "0") then { _ownerID = dayz_playerUID; }; //APFL is on but UID is 0 so we will claim it to record the ownership.
				_object setVariable ["ownerPUID",_ownerID,true];
				if (_lockable == 3) then {
					_friendsArr = [[dayz_playerUID,toArray (name player)]];
					_object setVariable ["doorfriends", _friendsArr, true];
					PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location,_ownerID,_vector],_classname,_obj,player,_friendsArr];
				} else {
					PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location,_ownerID,_vector],_classname,_obj,player];
				};
			} else {
				PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location,_vector],_classname,_obj,player];
			};
			publicVariableServer "PVDZE_obj_Swap";

			player reveal _object;
			
		} else {
			{player addMagazine _x;} count _temp_removed_array;
			if (count _temp_BP_removed_array > 0) then {
				{(unitbackpack player) addMagazineCargoGlobal _x} count _temp_BP_removed_array;
			};
			format[localize "str_epoch_player_145",_removed_total,_tobe_removed_total] call dayz_rollingMessages;
		
		};
	} else {
		_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
		format[localize "STR_EPOCH_ACTIONS_6",_missingQty, _textMissing] call dayz_rollingMessages;
	};

} else {
	localize "str_epoch_player_82" call dayz_rollingMessages;
};

dayz_actionInProgress = false;
s_player_upgrade_build = -1;
