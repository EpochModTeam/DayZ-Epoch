#include "scheduler.hpp"

sched_achievement_init = {
	private ["_timewasterCounter","_buildingList","_buildingCounter"];

	//following achievements are monitored in this task
	achievement_LitterCount = 0;
	achievement_Gut = false;

	// following achievements are monitored and saved elsewhere
	achievement_Raw = false;
	achievement_Fire = false;
	achievement_SteadyAim = false;
	achievement_Marksman = false;
	achievement_Sniper = false;

	// variables for the monitoring
	_timewasterCounter = diag_ticktime;
	_buildingList = [];
	_buildingCounter = [0,0,0,0,0,0,0,0,0];

	[_timewasterCounter, _buildingList, _buildingCounter]
};

sched_achievement = {
	HIDE_FSM_VARS
	private ["_timewasterCounter","_buildingList","_buildingCounter","_buildingAchivement","_buildingType","_buildingLimit","_building","_matchType","_count", "_o"];

	_timewasterCounter = _this select 0;
	_buildingList = _this select 1;
	_buildingCounter = _this select 2;

	_buildingAchivement = [
		[""],  // Achievement #2
		["Land_A_GeneralStore_01a","Land_A_GeneralStore_01"],   // Achievement #3 (5 stores)
		["Land_A_GeneralStore_01a","Land_A_GeneralStore_01"],   // Achievement #4 (10 stores)
		["Land_A_Hospital"],   // Achievement #5
		["Land_A_Office01"],   // Achievement #6
		["Land_a_stationhouse"],   // Achievement #7
		["Land_A_Pub_01"],   // Achievement #8
		["Land_Mil_ControlTower"],  // Achievement #9
		["Land_Church_03"]  // Achievement #10
	];
	_buildingLimit = [ 1, 5, 10, 4, 3, 4, 8, 3, 3 ];


	// 0 = Time Waster - have been playing for over _timeWasterValue second in a single session
	if (dayz_playerAchievements select 0 < 1) then {
		if (diag_ticktime - _timewasterCounter >= 3600) then {
			_timewasterCounter = -1;	// stop checking
			dayz_playerAchievements set [0,1];
			achievement = [0, player, dayz_characterID];
			publicVariableServer "achievement";
		};
	};

	// 1 = High Flyer - find yourself over 500m ATL
	if (dayz_playerAchievements select 1 < 1) then {
		if (visiblePosition player select 2 > 500) then {
			dayz_playerAchievements set [1,1];
			achievement = [1, player, dayz_characterID];
			publicVariableServer "achievement";
		};
	};

	// 2 = near mass grave
	if (dayz_playerAchievements select 2 < 1) then {
		_o = (visiblePositionASL player) nearestObject "Mass_grave"; 
		if ((!isNull _o) and {(_o distance player < 3)}) then {
			dayz_playerAchievements set [2,1];
			achievement = [2, player, dayz_characterID];
			publicVariableServer "achievement";
		};
	};

	// 3-10 = Building checker - counts the number of unique buildings (of a certain type) you visit
	_building = nearestBuilding visiblePositionASL player; // gives nearest enterable building within 50 meters
	if(!isNull _building) then {
		if (!(_building in _buildingList)) then {
			_buildingType = typeOf _building;
			if ((player distance _building < 0.5 * sizeof _buildingType) and {([player,_building] call fnc_isInsideBuilding)}) then {
				_matchType = false;
				{
					if (_buildingType in _x) then {
						_matchType = true;
						_count = _buildingCounter select _forEachIndex;
						_count = _count +1;
						_buildingCounter set [_forEachIndex, _count ];
						if ((_count >= _buildingLimit select _forEachIndex) and (dayz_playerAchievements select (_forEachIndex + 3) < 1)) then {
							dayz_playerAchievements set [ _forEachIndex + 3, 1];
							achievement = [_forEachIndex + 3, player, dayz_characterID];
							publicVariableServer "achievement";
						};
					};
				} forEach _buildingAchivement;
				if (_matchType) then {
					_buildingList set [ count _buildingList, _building ]; 
				};
			};
		};
	};
	
	// 11 = LitterCount
	if (dayz_playerAchievements select 11 < 1) then {
		if (achievement_LitterCount == 5) then {
			achievement_LitterCount = -1; //???
			dayz_playerAchievements set [11,1];
			achievement = [11, player, dayz_characterID];
			publicVariableServer "achievement";
		};
	};

	// 12 = ??????

	
	// 13 = Gutting
	if (dayz_playerAchievements select 13 < 1) then {
		if (achievement_Gut) then {
			dayz_playerAchievements set [13,1];
			achievement = [13, player, dayz_characterID];
			publicVariableServer "achievement";
		};
	};

	[_timewasterCounter, _buildingList, _buildingCounter]
};