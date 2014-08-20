/*
	DayZ Harvest Plant
	Usage: spawn player_harvestPlant;
	Made for DayZ Epoch please ask permission to use/edit/distribute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_started","_finished","_animState","_isMedic","_proceed","_itemOut","_countOut","_tree","_nearestPlants","_index","_invResult","_text","_ObjectID", "_ObjectUID","_plantInfo","_plantType","_plantGrownUp","_plantObjects","_plantOutput","_tmp","_emptySlots","_freeItemSlots","_firstItemCount"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_72") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

//_item = _this;
call gear_ui_init;

_countOut = 0;

_nearestPlants = [];
{
	if (alive _x) then {
		_plantInfo = [_x] call plant_getInfo;
		_plantType = _plantInfo select 0;
		_plantGrownUp = _plantInfo select 1;
		
		if (_plantType != "undef" && _plantGrownUp) exitWith {
			_nearestPlants set [(count _nearestPlants),[_x,_plantInfo]];
		};
	};
} count nearestObjects [([player] call FNC_getPos), [], 10];

//diag_log format["DEBUG TREES: %1", _nearestPlants];

if (count(_nearestPlants) >= 1) then {
	_isOk = true;
	{
		if(_isOk) then {
			_tree = _x select 0;
			_plantInfo = _x select 1;
			_plantType = _plantInfo select 0;
			_plantGrownUp = _plantInfo select 1;
			_plantObjects = _plantInfo select 2;
			_plantOutput = _plantInfo select 3;
			
			_proceed = false;
			while {_isOk} do {
				[1,1] call dayz_HungerThirst;
				player playActionNow "Medic";
				[player,20,true,(getPosATL player)] spawn player_alertZombies;
			
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
						[player,"chopwood",0,false] call dayz_zombieSpeak;
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

				if(_finished) exitWith {
					_isOk = false;
					_proceed = true;
				};
			};
			
			_emptySlots = [player] call BIS_fnc_invSlotsEmpty;
			_freeItemSlots = _emptySlots select 4;
			_neededItemSlots = 0;
			{
				_neededItemSlots = _neededItemSlots + (_x select 1);
			} count _plantOutput;
			
			//cutText [format["0: %1 - 1: %2 - 2: %3 - 3: %4 \n4: %5 - 5: %6 - 6: %7",_emptySlots select 0,_emptySlots select 1,_emptySlots select 2,_emptySlots select 3,_emptySlots select 4,_emptySlots select 5,_emptySlots select 6,_emptySlots select 7], "PLAIN DOWN"];
				
			if (_neededItemSlots > _freeItemSlots) then {
				_isOk = false;
				r_interrupt = false;
				if (vehicle player == player) then {
					[objNull, player, rSwitchMove,""] call RE;
					player playActionNow "stop";
				};
				cutText [format["Not enough space in Inventory to harvest %1\nyou need %2 more slots",_plantType, _neededItemSlots-_freeItemSlots], "PLAIN DOWN"];
			} else {
				if (_proceed) then {
					_isOk = true;
					_i = 0;
					_text = "";
					_firstItemCount = 0;
					{
						_invResult = false;
						_itemOut = _x select 0;
						_countOut = _x select 1;

						for "_x" from 1 to _countOut do {
							_invResult = [player,_itemOut] call BIS_fnc_invAdd;
							if(_invResult) then {
								_i = _i + 1;
							};
						};

						if (_text == "") then {
							_firstItemCount = _countOut;
							_text = getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName");
						} else {
							_text = format["%1, %2 of %3",_text,_countOut,getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName")];
						};
					} count _plantOutput;
					
					if(_i != 0) then {
						// chop down tree
						if("" == typeOf _tree) then {
							_tree setDamage 1;
						} else {
							_ObjectID = _tree getVariable ["ObjectID","0"];
							_ObjectUID = _tree getVariable ["ObjectUID","0"];

							deleteVehicle _tree;
							
							if(_ObjectID != "0" || _ObjectUID != "0") then {
								if(DZE_PlantingReUsePlant) then {
									cutText ["ReUsePlant is not implemented\nPlant will not be downgraded", "PLAIN DOWN"];
									sleep 5;
								} else {
									PVDZE_obj_Delete = [_ObjectID,_ObjectUID,player];
									publicVariableServer "PVDZE_obj_Delete";
								};
							};
						};
						//diag_log format["DEBUG TREE DAMAGE: %1", _tree];
					
						cutText [format[(localize "str_epoch_player_154"), _firstItemCount,_text], "PLAIN DOWN"];
					} else {
						cutText [format[(localize "str_epoch_player_143"), _firstItemCount,_text], "PLAIN DOWN"];
					};
				} else {
					r_interrupt = false;
					if (vehicle player == player) then {
						[objNull, player, rSwitchMove,""] call RE;
						player playActionNow "stop";
					};
					cutText [(localize "str_epoch_player_73"), "PLAIN DOWN"];
				};
			};
		};
	} count _nearestPlants;
} else {
	cutText [(localize "str_epoch_player_74"), "PLAIN DOWN"];
};
DZE_ActionInProgress = false;
