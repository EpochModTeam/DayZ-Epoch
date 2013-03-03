private["_zombiebody","_qty","_type","_meat","_loop"];
_zombiebody = _this select 0;
_qty = _this select 1;

if (local _zombiebody) then {
	_zombiebody addMagazine "ItemZombieParts";
	
	[time, _zombiebody] spawn { 
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
	
} else {
	_ehLoc = "client";
	if (isServer) then { _ehLoc = "server"; };
	diag_log format["gutObject EH on %1 item not local ! Type: %2",_ehLoc,str(_zombiebody)];
};