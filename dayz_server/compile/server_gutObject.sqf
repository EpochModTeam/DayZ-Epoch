private["_item","_qty","_type","_meat","_loop"];
_item = _this select 0;
_qty = _this select 1;
_type = typeOf _item;
_meat = 0;
_loop = true;
_rawfoodtype = 		configFile >> "CfgSurvival" >> "Meat" >> _type >> "rawfoodtype";

if (local _item) then {
	for "_x" from 1 to _qty do {
		_item addMagazine _rawfoodtype;
	};
	sleep 2;
	_timer = time;
	while {_loop} do {
		_meat = count magazines _item;
		if (_meat == 0) then {_loop = false};
		if ((time - _timer) > 300) then {_loop = false};
		sleep 1;
	};
	["dayzHideBody",_item] call broadcastRpcCallAll;
	sleep 10;
	deleteVehicle _item;
} else {
	_ehLoc = "client";
	if (isServer) then { _ehLoc = "server"; };
	diag_log format["gutObject EH on %1 item not local ! Type: %2",_ehLoc,str(_item)];
};