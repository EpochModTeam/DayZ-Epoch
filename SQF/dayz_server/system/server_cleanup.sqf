
_lootype = _this select 0;
_lootobj = _this select 1;
_lootref = _this select 2;

_dateNow = diag_ticktime;

switch (_lootype) do
{
	case "Dropped_Loot":
	{
	/*
		diag_log("Dropped Loot");
		_created = (_lootobj getVariable ["created",-0.1]);
		if (_created == -0.1) then {
			_lootobj setVariable ["created",diag_ticktime,false];
			_created = diag_ticktime;
		};
		
		_age = (_dateNow - _created);
		_nearby = {(isPlayer _lootobj) and (alive _lootobj)} count (_lootobj nearEntities [["CAManBase","AllVehicles"], 130]);
		if ((_nearby==0) then {
			if (_age > 20) then {
				_remove = true;
			} else {
				dayz_droppedlootarray set [count dayz_droppedlootarray,_lootobj];
			};
		};
	*/	
		//diag_log("Dropped Loot");
		deleteVehicle _lootobj;
	};
	
	case "Spawned_Loot":
	{
		//diag_log("Spawned Loot");
		deleteVehicle _lootobj;
	};
	
	case "Perma_Loot":
	{
		//diag_log("Perma Loot");	
	};
};

/*
{

	_Dropped = (_x getVariable ["Dropped",false]);
	_Spawned = (_x getVariable ["spawnedLoot",false]);
	_Perma = (_x getVariable ["permaLoot",false]);

	if (!_Spawned and !_Perma) then {
		_x setVariable ["Dropped",true];
	};

	//Dropped loot
	if (_Dropped) then {
		_x setVariable ["created",diag_ticktime,false];
		_created = diag_ticktime;
		
		diag_log("Dropped Loot");
	};

	//Spawned Loot
	if (_Spawned) then {
		diag_log("Spawned Loot");	
	};

	//Permaloot
	if (_Perma) then {
		//Ignore perma loot
		diag_log("Perma Loot");		
	};
} foreach _lootingrids;


if (_delQty > 0) then {
	diag_log ("CLEANUP: DELETED " + str(_delQty) + " LOOT BAGS");
};
*/