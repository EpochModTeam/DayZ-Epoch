private ["_exit","_nearestObjects","_friendlies","_rID","_display","_cTarget","_dis"];

// players inside vehicle can always access its gear
if ((vehicle player) == player) then {
	disableSerialization;
	_display = _this select 0;
	_cTarget = cursorTarget;
	_dis = if (_cTarget isKindOf "USEC_ch53_E" || _cTarget isKindOf "MV22") then {25} else {12};
	_exit = false;
	
	if (locked _cTarget && {(_cTarget isKindOf "LandVehicle") or {_cTarget isKindOf "Air"} or {_cTarget isKindOf "Ship"}} && {(player distance _cTarget) <= _dis}) then {
		_exit = true;
	} else {
		_nearestObjects = (position player) nearEntities [["Air", "Car", "Motorcycle", "Tank", "Ship"], 26];
		if (count _nearestObjects >= 1) then {
			{
				_vehType = TypeOf _x;
				_dis = getNumber (configFile >> "CfgVehicles" >> _vehType >> "supplyRadius");
				if (_dis < 2) then {_dis = _dis * 4;} else {_dis = _dis * 3;}; //There seems to be significant inaccuracy of the supplyRadius config definition that is worse when the value is smaller
				_dis = _dis min 12;
				_gearSelection = getText (configFile >> "CfgVehicles" >> _vehType >> "memoryPointSupply");
				_supplyPositionWorld = _x modelToWorld (_x selectionPosition _gearSelection);
				if (_x isKindOf "USEC_ch53_E" || _x isKindOf "MV22") then {_dis = 25;};
				if (locked _x && {(_supplyPositionWorld distance player) <= _dis}) then {
					_exit = true;
				};
			} forEach _nearestObjects;
		};
	};

	if (_exit) then {
		localize "str_epoch_player_7" call dayz_rollingMessages;
		_display closeDisplay 1;
	};

	if (DZE_BackpackAntiTheft) then {
		_friendlies	= player getVariable ["friendlies",[]];
		_rID = if (DZE_permanentPlot) then { getPlayerUID _cTarget } else { _cTarget getVariable ["CharacterID","0"] };
		if ((!canbuild or isInTraderCity) && {_cTarget isKindOf "Man"} && {alive _cTarget} && {isPlayer _cTarget} && {!(_rID in _friendlies)} && {(player distance _cTarget) < 12}) then {
			localize "STR_EPOCH_PLAYER_316" call dayz_rollingMessages;
			_display closeDisplay 1;
		};
	};
};