private["_break","_ctrlFracture"];
_unit = _this select 0;
_selection = _this select 1;
_damage = _this select 2;

_strH = "hit_" + _selection;

if (local _unit) then {
	_dam = _unit getVariable [_strH,0];
	_total = (_dam + _damage);
	_unit setVariable [_strH,_total,true];
	_break = false;

	if (_selection in USEC_MinorWounds and _total >= 1 and _unit == player) then {
		disableSerialization;
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_ctrlFracture = _display displayCtrl 1203;

		if ((_selection == "legs") and !r_fracture_legs) then {
			_id = [] spawn { //do not touch this spawn!
				player setHit["legs",1];
			};
			r_fracture_legs = true;
			_break = true;
		};
		if ((_selection == "arms") and !r_fracture_arms) then {
			_id = [] spawn { // do not touch this spawn!
				player setHit["hands",1];
			};
			r_fracture_arms = true;
			_break = true;
		};
	};
	if (_break) then {
		[player,"fracture",0,false] call dayz_zombieSpeak;
		_ctrlFracture ctrlShow true;
	};
};