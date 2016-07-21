private["_body","_name","_method","_methodStr"];

_body = _this select 3;
_name = _body getVariable["bodyName","unknown"];
_method = _body getVariable["deathType","unknown"];
_methodStr = localize format ["str_death_%1",_method];
_killingBlow = _body getVariable "KillingBlow";

format[localize "str_player_studybody",_name,_methodStr] call dayz_rollingMessages;

if (typeName _killingBlow == "OBJECT") then {
	_ConfirmedHumanKills = _killingBlow getVariable ["ConfirmedHumanKills",0];
	_killingBlow setVariable ["ConfirmedHumanKills",(_ConfirmedHumanKills + 1),true];
} else {
	_ConfirmedBanditKills = _killingBlow getVariable ["ConfirmedBanditKills",0];
	_killingBlow setVariable ["ConfirmedBanditKills",(_ConfirmedBanditKills + 1),true];
};