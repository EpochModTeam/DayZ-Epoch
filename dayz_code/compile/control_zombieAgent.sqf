private["_position","_unitTypes","_group","_unit","_target","_bodies","_targetPos","_codeSpawns","_unitSpawn","_lead","_isAlive","_units"];
//Definitions
_agent = _this select 0;

//Add handlers
 //_id = _agent addeventhandler ["HandleDamage",{_this call local_zombieDamage}];

//Loop behaviour
_list = (getposATL _agent) nearEntities ["Man",200];
_isSomeone = ({isPlayer _x} count _list) > 0;
while {_isAlive and _isSomeone} do {
//NO TARGET
	_agent disableAI "FSM";
	_target = objNull;
	_targetPos = [];
	
	//Spawn roaming script (individual to unit)
	_myDest = getPosATL _agent;
	
	//Loop looking for targets
	while {isNull _target and _isAlive and _isSomeone} do {
		_isAlive = alive _agent;
		_list = (getposATL _agent) nearEntities ["Man",200];
		_isSomeone = ({isPlayer _x} count _list) > 0;
		_target = _agent call zombie_findTargetAgent;
		if (_isAlive and (_agent distance _myDest < 5)) then {
			[_agent,_position] call zombie_loiter;
		};
		_agent forceSpeed 2;
		sleep 1;
	};
	
//CHASE TARGET
	
	//Leader cries out
	[_agent,"attack",0,false] call dayz_zombieSpeak;
	
	//Start Movement loop
	while {!isNull _target and _isAlive and _isSomeone} do {
		_target = _agent call zombie_findTargetAgent;
		_isAlive = alive _agent;
		_targetPos = getPosATL _target;
		//Move to target
		_agent moveTo _targetPos;
		_agent forceSpeed 6;
		sleep 1;
	};
//LOOP
	_agent setVariable ["targets",[],true];
	_isAlive = alive _agent;
	sleep 1;
};

//Wait for a while then cleanup
sleep 5;
deleteVehicle _agent;
