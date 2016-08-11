private["_body","_name","_method","_methodStr","_message"];

_body = _this select 3;
_name = _body getVariable["bodyName","unknown"];
_method = _body getVariable["deathType","unknown"];
_methodStr = localize format ["str_death_%1",_method];
_killingBlow = _body getVariable ["KillingBlow",objNull];

// "His/Her name was %1, it appears he/she died from %2"
_message = if (_body isKindOf "SurvivorW2_DZ") then {"str_player_studybody_female"} else {"str_player_studybody"};

format[localize _message,_name,_methodStr] call dayz_rollingMessages;

if (!(isNull _killingBlow) AND {(isPlayer _killingBlow)}) then {
	if (typeName _killingBlow == "OBJECT") then {
		_ConfirmedHumanKills = _killingBlow getVariable ["ConfirmedHumanKills",0];
		_killingBlow setVariable ["ConfirmedHumanKills",(_ConfirmedHumanKills + 1),true];
	} else {
		_ConfirmedBanditKills = _killingBlow getVariable ["ConfirmedBanditKills",0];
		_killingBlow setVariable ["ConfirmedBanditKills",(_ConfirmedBanditKills + 1),true];
	};
};