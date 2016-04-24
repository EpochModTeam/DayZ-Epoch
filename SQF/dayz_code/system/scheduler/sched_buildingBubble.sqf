sched_buildingBubble = {
	private "_dis";

	{
		_dis = _x distance player;
		if ((player distance _x) > 400) then {
			if (_x in dayz_buildingBubbleMonitor) then {
				dayz_buildingBubbleMonitor = dayz_buildingBubbleMonitor - [_x];	
			};
			//Clear Loot vars
			if (!(isNil {player getVariable "looted"})) then {
				_x setVariable ["looted",nil]; //SpawnCheck
			};
			if (!(isNil {player getVariable "zombieSpawn"})) then {
				_x setVariable ["zombieSpawn",nil]; //SpawnCheck
			};
		};
	} count dayz_buildingBubbleMonitor;

	objNull
};
