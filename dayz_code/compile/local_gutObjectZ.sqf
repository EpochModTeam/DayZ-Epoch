private["_item","_qty","_type","_meat","_loop"];
_item = _zombiebody select 0;
_qty = _zombiebody select 1;
_type = typeOf _item;
_meat = 0;
_loop = true;
if (local _item) then {
	_item addMagazine "ItemZombieParts";
	
	
	[time, _zombiebody] spawn { 
		private ["_timer", "_body"]; 
		_timer = _zombiebody select 0; 
		_body = _zombiebody select 1; 
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
	
	
	sleep 10;
	deleteVehicle _item;
} else {
	_ehLoc = "client";
	if (isServer) then { _ehLoc = "server"; };
	diag_log format["gutObject EH on %1 item not local ! Type: %2",_ehLoc,str(_item)];
};