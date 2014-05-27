private ["_unit","_selection","_strH","_dam","_display","_id","_break","_ctrlFracture","_total","_damage"];
disableSerialization;
_unit =			_this select 0;
_selection =	_this select 1;
_damage =		_this select 2;
_strH = "hit_" + (_selection);

if (local _unit) then {
	_dam = _unit getVariable [_strH,0];
	_total = (_dam + _damage);
	_unit setVariable [_strH,_total,true];
	_break = false;

	if (_selection in USEC_MinorWounds && _total >= 1 && _unit == player) then {
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_ctrlFracture = 	_display displayCtrl 1203;
		
		if ((_selection == "legs") && !r_fracture_legs) then {
			r_fracture_legs = true;
			_ctrlFracture ctrlShow true;
			_id = [] spawn {
				player setHit["legs",1];
			};
			_break = true;
		};
		if ((_selection == "arms") && !r_fracture_arms) then {
			r_fracture_arms = true;
			_ctrlFracture ctrlShow true;
			_id = [] spawn {
				player setHit["hands",1];	
			};
			_break = true;
		};
	};
	if (_break) then {
		[player,"fracture",0,false] call dayz_zombieSpeak;
	};
};