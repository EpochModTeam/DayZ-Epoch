private ["_msg","_unit","_medic","_item"];
//disableserialization;

_unit = _this select 0;
_medic = _this select 1;
_item = _this select 2;

r_fracture_legs = false;
r_fracture_arms = false;
_unit setHit["legs",0];
_unit setHit["hands",0];
_unit setVariable ["hit_legs",0,true];
_unit setVariable ["hit_hands",0,true];

/*
//Ensure Control is visible
_display = uiNamespace getVariable 'DAYZ_GUI_display';
_control = _display displayCtrl 1203;
_control ctrlShow false;
*/

if (_medic != player) then {
	_msg = if (_item == "equip_woodensplint") then {"STR_ITEM_NAME_WOODENSPLINT"} else {"STR_EQUIP_NAME_15"};
	format [localize "str_actions_medical_general_received",(name _medic), localize _msg] call dayz_rollingMessages;
};
