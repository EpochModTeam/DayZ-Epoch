//diag_log ("Bubble Start");

//Create bubble around the default view distance.
//_position = getPosATL player;

/*
//All zeds fall under "Zed_Base", 1600 is default viewdistance
_zedsMonitored = (getPosATL player) nearEntities ["Zed_Base",1600];

{
	if (!(_x in dayz_zedMonitor)) then {
		//add active zed to var
		dayz_zedMonitor set [count dayz_zedMonitor, _x];
	};
} foreach _zedsMonitored;


diag_log format["Agent's in Bubble: %1",(count dayz_zedMonitor)];
//Enable check for all active zeds
{
	//Swap zed back to server
	isAlive = alive _x;
	if (isAlive) then {
		_isWild = _x isKindOf "WildZombie_Base";
		if (_isWild) then {
			_isLocal = local _x;
			if (_isLocal) then {
				if ((player distance _x) > 200) then {
					//_agent = _x getVariable ["agentObject", _x];
					//_position = _x getVariable ["homePos",(getPosATL _x)];
					_Owner = _x getVariable ["Owner",1]; //default 1 is server
					PVDZ_Server_changeOwner = [_x, _Owner];
					publicVariableServer "PVDZ_Server_changeOwner";
				};
			} else {
				if ((player distance _x) <= 200) then {
					//["Target","Owner","Agent"]
					//Swap ownership to player
					if (!_isLocal) then {
						PVDZ_Server_changeOwner = [_x, player];
						publicVariableServer "PVDZ_Server_changeOwner";

						waitUntil { local _x };
						_agent = _x getVariable ["agentObject", _x];
						_position = _x getVariable ["homePos",(getPosATL _x)];
						[_position,_agent] execFSM "\z\addons\dayz_code\system\zombie_wildagent.fsm";
					};
				};
			};
		};

		//is zed aboue default view distance
		if ((player distance _x) <= 1600) then {
			//Animate zeds
			_x enableSimulation true;
			PVDZ_Server_Simulation = [_x, true];
			publicVariableServer "PVDZ_Server_Simulation";
		} else {
			//Remove zed from monitor
			if (_x in dayz_zedMonitor) then {
				dayz_zedMonitor = dayz_zedMonitor - [_x];
			};
			//Disable simulation 
			_x enableSimulation false;
			PVDZ_Server_Simulation = [_x, false];
			publicVariableServer "PVDZ_Server_Simulation";
		};
	} else {
		dayz_zedMonitor = dayz_zedMonitor - [_x];
	};
} foreach dayz_zedMonitor;
*/

//BuildingMonitor
// moved to dayz_code/system/scheduler/sched_buildingBubble.sqf

//diag_log ("Bubble END");
