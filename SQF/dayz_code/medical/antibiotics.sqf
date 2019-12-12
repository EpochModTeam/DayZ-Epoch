private ["_msg","_unit","_medsUsed"];

if (count _this > 2) then {
	_unit = (_this select 3) select 0;
	_medsUsed = nil;
} else {
	_unit = _this select 0;
	_medsUsed = _this select 1;
};

if (isNil "_medsUsed") then {
	{
		if (_x in magazines player) exitWith {
			// Set antibiotics if not defined (used when giving to somebody)
			_medsUsed = _x;
		};
	} count ["ItemAntibiotic","ItemAntibiotic1","ItemAntibiotic2","ItemAntibiotic3","ItemAntibiotic4","ItemAntibiotic5","ItemAntibiotic6"];
};

_msg = localize "str_actions_medical_misplaced_antibiotics";

if !(isNil "_medsUsed") then {
	//Remove one table from the box.
	[_medsUsed,"medical"] call dayz_reduceItems;

	//remove option
	call fnc_usec_medic_removeActions;
	r_action = false;

	//player removeAction s_player_antiobiotic;
	//s_player_antiobiotic = -1;

	if (_unit == player) then {
		//Self Healing
		r_player_infected = false;
		_unit setVariable["USEC_infected",false,true];

		_msg = localize "str_actions_medical_taken_antibiotics";
	} else {
		// Heal another player
		PVDZ_send = [_unit,"Antibiotics",[_unit,player]];
		publicVariableServer "PVDZ_send";

		//Give humnaity for good deeds
		[20,0] call player_humanityChange;

		_msg = format[localize "str_actions_medical_gave_antibiotics", (name _unit)];
	};
};


_msg call dayz_rollingMessages;
