private["_animalbody","_qty","_rawfoodtype","_ehLoc"];
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
		//["dayzHideBody",_body] call broadcastRpcCallAll;
		dayzHideBody = _body;
		hideBody _body; // local player
		publicVariable "dayzHideBody"; // remote player
		sleep 5;
		deleteVehicle _body;
		true;
	};
};