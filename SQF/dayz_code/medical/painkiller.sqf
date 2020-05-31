private ["_unit","_medsUsed"];

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
			// Set painkillers if not defined (used when giving to somebody)
			_medsUsed = _x;
		};
	} count ["ItemPainkiller","ItemPainkiller1","ItemPainkiller2","ItemPainkiller3","ItemPainkiller4","ItemPainkiller5","ItemPainkiller6"];
};

if !(isNil "_medsUsed") then {
	//Remove one table from the box.
	[_medsUsed,"medical"] call dayz_reduceItems;

	call fnc_usec_medic_removeActions;
	r_action = false;

	if (vehicle player == player) then {
		//not in a vehicle
		player playActionNow "Gear";
	};

	[player,"pills",0,false] call dayz_zombieSpeak;
	
	if (_unit == player) then {
		//Self Healing
		[player,player] call player_medPainkiller;
		localize "str_actions_medical_painkillers_self" call dayz_rollingMessages;
	} else {
		// Heal another player
		PVDZ_send = [_unit,"Painkiller",[_unit,player]];
		publicVariableServer "PVDZ_send";

		// Give humanity
		20 call player_humanityChange;

		format [localize "str_actions_medical_painkillers_give",(name _unit)] call dayz_rollingMessages;
	};
};