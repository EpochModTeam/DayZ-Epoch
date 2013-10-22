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
		while {(count magazines _body >0) and (time - _timer < 300) } do { 
			sleep 5;
		}; 
		//["PVDZE_plr_HideBody",_body] call broadcastRpcCallAll;
		PVDZE_plr_HideBody = _body;
		hideBody _body; // local player
		publicVariable "PVDZE_plr_HideBody"; // remote player
		sleep 5;
		deleteVehicle _body;
		true;
	};
};