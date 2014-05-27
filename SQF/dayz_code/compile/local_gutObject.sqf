private ["_animalbody","_qty","_rawfoodtype"];
_animalbody = _this select 0;

if (local _animalbody) then {
	_qty = _this select 1;
	_rawfoodtype =   getText (configFile >> "CfgSurvival" >> "Meat" >> typeOf _animalbody >> "rawfoodtype");

	for "_x" from 1 to _qty do {
		_animalbody addMagazine _rawfoodtype;
	};
	
	[time, _animalbody] spawn { 
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
			// only send to other players
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