/*
	DayZ Harvest Plant
	Usage: spawn player_upgradePlant;
	Made for DayZ Epoch please ask permission to use/edit/distribute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_started","_finished","_animState","_isMedic","_proceed","_itemOut","_tree","_nearestPlants","_index","_invResult","_text","_ObjectID", "_ObjectUID","_plantInfo","_plantType","_plantGrownUp","_plantObjects","_plantOutput","_tmp","_emptySlots","_freeItemSlots","_firstItemCount","_isWatered"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_72") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

//_item = _this;
call gear_ui_init;

_nearestPlants = [];
{
	_isWatered = _x getVariable ["isWatered",false];
	_lastUpdate = time - (_x getVariable ["lastUpdate",0]);

	if (alive _x && _lastUpdate > 180 && not _isWatered) then {
		_plantInfo = [_x] call plant_getInfo;
		_plantType = _plantInfo select 0;
		_plantGrownUp = _plantInfo select 1;
		
		if (_plantType != "undef" && not _plantGrownUp) exitWith {
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

			if (_proceed) then {
				_isOk = true;
				_nextStage = "undef";
				_takeNext = false;
				_totalWaterLevel = 0;

				{
					if (_takeNext) then {
						_nextStage = _x;
						_takeNext = false;
					};

					if (_x == typeOf _tree) then {
						_takeNext = true;
					};
				} foreach _plantObjects;
				
				if (_nextStage != "undef") then {
					{
						_configParent = configName(inheritsFrom(configFile >> "cfgMagazines" >> _x));
						// Get lowest waterlevel
						if ((_x == "ItemWaterbottle") ||( _configParent == "ItemWaterbottle")) then {
							_totalWaterLevel = _totalWaterLevel + getNumber(configFile >> "CfgMagazines" >> _x >> "wateroz");
						};
					} forEach (magazines player);

					if (_totalWaterLevel >= DZE_PlantingUpgradeWaterlevel) then {
						_waterNeeded = DZE_PlantingUpgradeWaterlevel;
						_emptyBottles = 0;
						
						while { _waterNeeded > 0 } do {
							_waterLevel_lowest = 0;
							{
								_configParent = configName(inheritsFrom(configFile >> "cfgMagazines" >> _x));
								if ((_x == "ItemWaterbottle") || (_configParent == "ItemWaterbottle")) then {
									_waterLevel = getNumber(configFile >> "CfgMagazines" >> _x >> "wateroz");
									if (_waterLevel_lowest == 0 || _waterLevel < _waterLevel_lowest) then {
										_waterLevel_lowest = _waterLevel;
									};
								};
							} forEach (magazines player);

							{
								if (_waterNeeded > 0) then {
									_configParent = configName(inheritsFrom(configFile >> "cfgMagazines" >> _x));
									if (_x == "ItemWaterbottle" || _configParent == "ItemWaterbottle") then {
										if (getNumber(configFile >> "CfgMagazines" >> _x >> "wateroz") == _waterLevel_lowest) then {
											[player,_x] call BIS_fnc_invRemove;
											
											_waterLevel = getNumber(configFile >> "CfgMagazines" >> _x >> "wateroz");
											
											if(_waterLevel > _waterNeeded) then {
												_waterLevel = _waterLevel - _waterNeeded;
												_waterNeeded = 0;
											} else {
												_waterNeeded = _waterNeeded - _waterLevel;
												_waterLevel = 0;
											};
											
											if (_waterLevel > 0) then {
												[player,format["ItemWaterbottle%1oz",_waterLevel]] call BIS_fnc_invAdd;
											} else {
												[player,"ItemWaterbottleUnfilled"] call BIS_fnc_invAdd;
											};
										};
									};
								};
							} forEach (magazines player);
						};

						[_tree,_nextStage] call plant_changeClass;
			
						cutText [format["Your %1 will grow after the server restart", _plantType], "PLAIN DOWN"];
					} else {
						_isOk = false;
						cutText [format["You do not have enough water to grow %1", _plantType], "PLAIN DOWN"];
					};
				};
			} else {
				r_interrupt = false;
				if (vehicle player == player) then {
					[objNull, player, rSwitchMove,""] call RE;
					player playActionNow "stop";
				};
				cutText ["You cancelled the upgrade process", "PLAIN DOWN"];
			};
		};
	} count _nearestPlants;
} else {
	cutText ["You need to be close to a plant to water it", "PLAIN DOWN"];
};
DZE_ActionInProgress = false;
