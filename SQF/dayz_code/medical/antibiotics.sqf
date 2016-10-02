#include "\z\addons\dayz_code\util\array.hpp";

private ["_msg","_antibiotics","_hasAntibiotics","_id","_hasMeds","_unit"];

_unit = _this select 0;
_medsUsed = _this select 1;
_antibiotics =["ItemAntibiotic","ItemAntibiotic1","ItemAntibiotic2","ItemAntibiotic3","ItemAntibiotic4","ItemAntibiotic5","ItemAntibiotic6"];
_hasAntibiotics = false;

{
	if (_x in magazines player) exitWith {
		// Set antibiotics if not defined (used when giving to somebody)
		if(isNil "_medsUsed") then {
			_medsUsed = _x;
		};
		_hasAntibiotics = true;
	};
} count _antibiotics;

_msg = "str_actions_medical_misplaced_antibiotics";

if (_hasAntibiotics) then {
	//Remove one table from the box.
	[_medsUsed,"medical"] call dayz_reduceItems;

	//remove infection
	r_player_infected = false;
	_unit setVariable["USEC_infected",false,true];

	//remove option
	call fnc_usec_medic_removeActions;
	r_action = false;

	//player removeAction s_player_antiobiotic;
	//s_player_antiobiotic = -1;

	if ((_unit == player) or (vehicle player != player)) then {
		//Self Healing
		_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medAntibiotics.sqf";

		_msg = "str_actions_medical_taken_antibiotics";
	} else {
	//Send request to other player
		PVDZ_send = [_unit,"Antibiotics",[_unit,player]];
		publicVariableServer "PVDZ_send";

		//Give humnaity for good deeds
		[20,0] call player_humanityChange;

		_msg = "str_actions_medical_gave_antibiotics";
	};
};


localize _msg call dayz_rollingMessages;
