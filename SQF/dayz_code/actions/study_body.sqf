private["_body","_name","_method","_methodStr","_message","_killingBlow"];

_body = _this select 3;
_name = _body getVariable["bodyName","unknown"];
_method = _body getVariable["deathType","unknown"];
_methodStr = localize format ["str_death_%1",_method];
_killingBlow = _body getVariable ["KillingBlow",[objNull,false]];

/*
	Setup by player_death
	[Object,Punished]; 
	_killer = _killingBlow select 0; //Killer
	_Punished = _killingBlow select 1;  //False = HumanKill, True = BanditKill
*/

// "His/Her name was %1, it appears he/she died from %2"
_message = if (_body isKindOf "SurvivorW2_DZ") then {"str_player_studybody_female"} else {"str_player_studybody"};

format[localize _message,_name,_methodStr] call dayz_rollingMessages;

//Body hasnt already been Studied lets set the confimed Kills system.
if !(_body getVariable ["BodyStudied",false]) then {
	if (!isNull (_killingBlow select 0)) then {
		if (!(_killingBlow select 1)) then {
			_ConfirmedHumanKills = (_killingBlow select 0) getVariable ["ConfirmedHumanKills",0];
			(_killingBlow select 0) setVariable ["ConfirmedHumanKills",(_ConfirmedHumanKills + 1),true];
		} else {
			_ConfirmedBanditKills = (_killingBlow select 0) getVariable ["ConfirmedBanditKills",0];
			(_killingBlow select 0) setVariable ["ConfirmedBanditKills",(_ConfirmedBanditKills + 1),true];
		};
		
		//Set the body as Studied for all.
		_body setVariable ["BodyStudied",true,true];
	};
};