private ["_zombiebody"];
_zombiebody = _this select 0;
// _qty = _this select 1;

if (local _zombiebody) then {
	_zombiebody addMagazine "ItemZombieParts";
	
	[time, _zombiebody] spawn { 
		private ["_timer", "_body"]; 
		_timer = _this select 0;
		_body = _this select 1;
		_pos = getPosATL _body;
		while {(count magazines _body >0) && (time - _timer < 300) } do { 
			sleep 5;
		}; 

		hideBody _body;
		
		/* PVS/PVC - Skaronator */
		_inRange = _pos nearEntities ["CAManBase",100];
		{
			if(isPlayer _x && _x != player) then {
				PVDZE_send = [_x,"HideBody",[_body]];
				publicVariableServer "PVDZE_send";
			};
		} count _inRange;

		sleep 5;
		deleteVehicle _body;
		true;
	};
	
};