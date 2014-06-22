private ["_handle","_cursor","_delMe","_first","_town","_day","_world","_nearestCity"];
_timer = diag_tickTime;
_timer1 = diag_tickTime;
_spawnCheck = diag_tickTime;
_timer2 = diag_Ticktime;
_NewDay  = diag_tickTime;

while {true} do {
	//add player actions
	if ((diag_tickTime - _timer2) > 0.5) then {
		[] call fnc_usec_damageActions;
		[] call fnc_usec_selfActions;
		_timer2 = diag_Ticktime;
	};

	if ((diag_tickTime - _timer) > 300) then {
		//Other Counters
		dayz_currentGlobalAnimals = count entities "CAAnimalBase";
		dayz_currentGlobalZombies = count entities "zZombie_Base";
		
		//Animals
		[] spawn player_animalCheck;
		
		_timer = diag_tickTime;
	};
	
	if ((diag_tickTime - _timer1) > 60) then {
		_position = getPosATL player;
		//Current amounts
		dayz_spawnZombies = {alive _x AND local _x} count (_position nearEntities ["zZombie_Base",200]);
		dayz_CurrentNearByZombies = {alive _x} count (_position nearEntities ["zZombie_Base",200]);
		dayz_currentWeaponHolders = count (_position nearObjects ["ReammoBox",100]);

		_timer1 = diag_tickTime;
	};
	
	//spawning system
	if ((diag_tickTime - _spawnCheck) > 14) then {
		["both"] spawn player_spawnCheck;

		_spawnCheck  = diag_tickTime;
	};
	
	//Check if new day
	if ((diag_tickTime - _NewDay) > 5) then {
		private "_day";
		_day = round(360 * (dateToNumber date));
		if(dayz_currentDay != _day) then {
			dayz_sunRise = call world_sunRise;
			dayz_currentDay = _day;
			
			
		};

		_NewDay  = diag_tickTime;

		_world = toUpper(worldName); //toUpper(getText (configFile >> "CfgWorlds" >> (worldName) >> "description"));
		_nearestCity = nearestLocations [([player] call FNC_GetPos), ["NameCityCapital","NameCity","NameVillage","NameLocal"],300];
		
		if (count _nearestCity > 0) then {
			_town = text (_nearestCity select 0); 
			if(dayz_PreviousTown == "Wilderness") then {
				dayz_PreviousTown = _town;
			};
			if(_town != dayz_PreviousTown) then {
				_first = [_world,_town,""] spawn BIS_fnc_infoText;
			};
			dayz_PreviousTown = _town;
		};

	};

	//wait
	sleep 0.001;
};