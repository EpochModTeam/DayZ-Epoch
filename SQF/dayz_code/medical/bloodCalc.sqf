/*
Created exclusively for ArmA2:OA - DayZMod.
permission is required to use/alter/distribute from project leader (R4Z0R49) AND the author (icomrade).

breakdown of blood type distribution (based on world population)
O		A		B		AB
39%		32%		23%		6%

We use realistic RH distribution per blood type as well
Ex. CID = 13... _randType = 31... Blood Type = A
*/
private ["_playerObj","_randRh","_randType","_bt_val","_rh_val"];

_playerObj = _this;

_randRh = random 100;
_randType = random 100;
_bt_val = nil;
_rh_val = nil;
switch true do {
	case (_randType >= 61) : {
		_bt_val = "O";
		_rh_val = if (_randRh >= 89) then { false } else { true };
	};
	case (_randType >= 29) : {
		_bt_val = "A";
		_rh_val = if (_randRh >= 89) then { false } else { true };
	};
	case (_randType >= 6) : {
		_bt_val = "B";
		_rh_val = if (_randRh >= 94) then { false } else { true };
	};
	default {
		_bt_val = "AB";
		_rh_val = if (_randRh >= 91) then { false } else { true };
	};
};
//diag_log ["_playerObj BLOOD CALC: Blood Type,Rh Type=", _bt_val, _rh_val];

//RH type
_playerObj setVariable ["rh_factor", _rh_val, true];
//blood type
_playerObj setVariable ["blood_type", _bt_val, true];