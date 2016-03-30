_animalbody = _this select 0;
_qty = _this select 1;
_rawfoodtype = getText (configFile >> "CfgSurvival" >> "Meat" >> typeOf _animalbody >> "rawfoodtype");

if (local _animalbody) then {
	for "_i" from 1 to _qty do {
		_animalbody addMagazine _rawfoodtype;
	};
		
	if (typeOf _animalbody == "Hen") then {
		_amount = (floor (random 4)) + 2;
		for "_x" from 1 to _amount do {
			_animalbody addMagazine "equip_feathers";
		};
	};	

	[time, _animalbody] spawn {
		_timer = _this select 0;
		_body = _this select 1;
        _pos = getPosATL _body;
		while {(count magazines _body > 0) && (time - _timer < 300)} do {
			uiSleep 5;
		};
		hideBody _body;
		
		//No need to let everyone on the server know.
		//PVCDZ_obj_HideBody = _body;
		//publicVariable "PVCDZ_obj_HideBody"; // remote player
		
		//Send to server let everyone in 100 meters of the body know its just been hidden.
		_inRange = _pos nearEntities ["CAManBase",100];
		{
			if ((isPlayer _x) && {_x != player}) then {
				PVDZ_send = [_x,"HideBody",[_body]];
				publicVariableServer "PVDZ_send";
			};
		} count _inRange;
		
		uiSleep 5;
		deleteVehicle _body;
		true
	};
};
