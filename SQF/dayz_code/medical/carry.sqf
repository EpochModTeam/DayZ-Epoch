/*

 CARRY BODY SCRIPT

 Allows players to carry unconscious bodies

 JULY 2010 - norrin
*****************************************************************************************************************************
Start carry.sqf
*/

private ["_unit","_dragee","_pos","_dir"];
_dragee = _this select 3;
_can_be_revived = NORRN_revive_array select 20;
_can_be_revived_2 	= NORRN_revive_array select 21;
_unit = player;
r_carry_sqf = true;
r_drag_sqf = false;

_unit removeAction Norrn_carryAction;
if (isNull _dragee) exitWith {};
_dragee setVariable ["NORRN_unit_dragged", true, true];
detach _dragee;
uiSleep 1.5;
// public EH
//PVDZ_drg_RACarUp = _dragee; // not used
//publicVariable "PVDZ_drg_RACarUp"; // not used
//_dragee switchMove "ainjpfalmstpsnonwrfldnon_carried_up";
//PVDZ_drg_RAPicUp = _unit; // not used
//publicVariable "PVDZ_drg_RAPicUp"; // not used
_unit switchMove "acinpknlmstpsraswrfldnon_acinpercmrunsraswrfldnon";
uiSleep 10;
_dragee switchmove "ainjpfalmstpsnonwrfldnon_carried_still";
_dragee attachto [_unit,[-0.2, 0.2, 0]];


while {r_carry_sqf} do
{
	_anim_name = animationstate _unit;
	if (!(_dragee getVariable "NORRN_unconscious")) exitWith
	{
		detach _dragee;
		_unit switchMove "";
		player removeAction Norrn_dropAction;
		r_carry_sqf = false;
	};

	//check that dragged unit still exists
	if (!alive _unit || _anim_name != "acinpknlmstpsraswrfldnon_acinpercmrunsraswrfldnon" && _anim_name != "acinpercmstpsraswrfldnon" && _anim_name != "acinpercmrunsraswrfldf") exitWith
	{
		player removeAction NORRN_dropAction;
		detach _dragee;
		_unit switchMove "";
		r_carry_sqf = false;
	};
	uiSleep 0.1;
};
if (true) exitWith {};

