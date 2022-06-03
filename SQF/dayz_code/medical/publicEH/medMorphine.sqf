local _unit = _this select 0;
local _medic = _this select 1;
local _item = _this select 2;
local _displayName = getText(configFile >> "CfgMagazines" >> _item >> "displayName");

[_unit,"legs",0,false,false] call unit_setFractures;
[_unit,"hands",0,false,false] call unit_setFractures;

if (_medic != player) then {
	format [localize "str_actions_medical_general_received",(name _medic),_displayName] call dayz_rollingMessages;
};