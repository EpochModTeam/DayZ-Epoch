if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_body","_playerNear","_name","_hisMoney","_myMoney","_isZombie","_notAllowed"];

_body = _this select 3;

if (isNull _body) exitWith {dayz_actionInProgress = false; systemChat localize "str_cursorTargetNotFound";};

_playerNear = {isPlayer _x} count ((getPosATL _body) nearEntities ["CAManBase", 10]) > 1;
if (_playerNear) exitWith {dayz_actionInProgress = false;localize "str_pickup_limit_5" call dayz_rollingMessages;};

_isZombie = _body isKindOf "zZombie_Base";
_notAllowed = false;

if (DZE_PVE_Mode && !_isZombie) then {
	_notAllowed = [player,_body] call DZE_PVE_Group_Check;
};

if (_notAllowed) exitWith {dayz_actionInProgress = false;localize "STR_EPOCH_PVE_ACTIVE_CANNOT_CHECK_WALLET" call dayz_rollingMessages;};

_hisMoney = _body getVariable ["cashMoney",0];

if (_isZombie) then {
	_name = getText(configFile >> "CfgVehicles" >> (typeOf _body) >> "displayname");

	if (ZSC_ZombieCoins select 0 && {_hisMoney != -1}) then {
		private "_values";

		_values = ZSC_ZombieCoins select 1;
		_hisMoney = ceil(random (_values select 1)) max (_values select 0);
	};
} else {
	_name = _body getVariable ["bodyName","unknown"];
};

if (isNil "_hisMoney") then {_hisMoney = 0;};
if (!(typeName _hisMoney == "SCALAR") || {_hisMoney < 1}) exitWith {dayz_actionInProgress = false; format[localize "STR_CL_ZSC_NO_COINS",_name,CurrencyName] call dayz_rollingMessages};

_myMoney = player getVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),0];
_myMoney = _myMoney + _hisMoney;

_body setVariable ["cashMoney",-1,true];
player setVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),_myMoney,true];

systemChat format[localize "STR_CL_ZSC_TAKE_COINS",[_hisMoney] call BIS_fnc_numberText,CurrencyName,_name];

player playActionNow "PutDown";

dayz_actionInProgress = false;
