/*
	Vehicle Key Changer by salival (https://github.com/oiad)
	
	This version adds support for both single currency and gems (from the epoch 1.0.6 update) as well as the original epoch briefcase currency system. 
	Instead of pricing things like the original way, prices are now done on a "worth" similar to how coins are done. The price value of items are below.
	If you are using coins, I would recommend using the _currencyModifier variable since coins typically are 10x the value of briefcase based currency (1 brief == 100,000 coins)

	1 silver = 1 worth
	1 10oz silver = 10 worth
	1 gold = 100 worth
	1 10oz gold = 1,000 worth
	1 briefcase = 10,000 worth

	Please see dayz_code\configVariables.sqf for the value of gems (DZE_GemWorthArray) and their relevant worth if they are enabled.
*/

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

disableSerialization;
private ["_amount","_characterID","_control","_currencyModifier","_enoughMoney","_exit","_foundPos","_index","_itemText","_message","_moneyInfo","_name","_playerNear","_position","_success","_typeOf","_vehicleID","_vehicleUID","_wealth"];

vkc_cursorTarget = (_this select 3) select 0;
_characterID = (_this select 3) select 1;
vkc_action = (_this select 3) select 2;

vkc_isOk = false;

player removeAction s_player_claimVehicle;
s_player_claimVehicle = 1;
player removeAction s_player_copyToKey;
s_player_copyToKey = 1;

_exit = {
	vkc_action = nil;
	vkc_keyList = nil;
	vkc_keyName = nil;
	vkc_charID = nil;
	vkc_isOk = nil;
	vkc_cursorTarget = nil;
	s_player_copyToKey = -1;
	s_player_claimVehicle = -1;
	dayz_actionInProgress = false;
};

if (isNull vkc_cursorTarget) exitWith {call _exit; systemChat localize "str_cursorTargetNotFound";};

_playerNear = {isPlayer _x} count (([vkc_cursorTarget] call FNC_GetPos) nearEntities ["CAManBase", 10]) > 1;
if (_playerNear) exitWith {call _exit; localize "str_pickup_limit_5" call dayz_rollingMessages;};

if !(vkc_cursorTarget isKindOf "Air" || {vkc_cursorTarget isKindOf "LandVehicle"} || {vkc_cursorTarget isKindOf "Ship"}) exitWith {call _exit; localize "STR_CL_VKC_FAIL_CURSOR" call dayz_rollingMessages;};

if (isNull DZE_myVehicle || {!(alive DZE_myVehicle)} || {!(local DZE_myVehicle)}) exitWith {call _exit; localize "str_epoch_player_245" call dayz_rollingMessages;};

_vehicleID = vkc_cursorTarget getVariable ["ObjectID","0"];
_vehicleUID = vkc_cursorTarget getVariable ["ObjectUID","0"];

_typeOf = typeOf vkc_cursorTarget;
_name = getText(configFile >> "cfgVehicles" >> _typeOf >> "displayName");

if ((_vehicleID == "0" && {_vehicleUID == "0"}) || {_vehicleID == "1" || _vehicleUID == "1"}) exitWith {call _exit; format[localize "STR_CL_VKC_FAIL_SUPPORT",_name] call dayz_rollingMessages;};

if (_vehicleUID == "0") then {
	_vehicleUID = "";
	{
		_x = _x * 10;
		if (_x < 0) then {_x = _x * -10};
		_vehicleUID = _vehicleUID + str(round(_x));
	} forEach getPosATL vkc_cursorTarget;
	_vehicleUID = _vehicleUID + str(round((getDir vkc_cursorTarget) + time));
	vkc_cursorTarget setVariable["ObjectUID",_vehicleUID,true];
};

vkc_keyList = call epoch_tempKeys;

if (vkc_action == "change") then {
	_amount = vkc_changePrice;
	_message = [localize "STR_CL_VKC_CHANGE_MESSAGE_1",localize "STR_CL_VKC_CHANGE_MESSAGE_2",localize "STR_CL_VKC_CHANGE_MESSAGE_3"];
	_foundPos = (vkc_keyList select 0) find _characterID;
	if (_foundPos >= 0) then {
		vkc_keyList set [0,(vkc_keyList select 0) - [(vkc_keyList select 0) select _foundPos]];
		vkc_keyList set [1,(vkc_keyList select 1) - [(vkc_keyList select 1) select _foundPos]];
		vkc_keyList set [2,(vkc_keyList select 2) - [(vkc_keyList select 2) select _foundPos]];
	} else {
		vkc_keyList = [[],[]];
	};
} else {
	_amount = vkc_claimPrice;
	_message = [localize "STR_CL_VKC_CLAIM_MESSAGE_1",localize "STR_CL_VKC_CLAIM_MESSAGE_2",localize "STR_CL_VKC_CLAIM_MESSAGE_3"];
};

if (count (vkc_keyList select 0) == 0) exitWith {systemChat localize "STR_CL_VKC_FAIL_KEYS"; call _exit;};

if (!isNil "sk_dualCurrency") then {if (z_singleCurrency) then {_amount = _amount * 10};};

_itemText = if (Z_SingleCurrency) then {format ["%1 %2",[_amount] call BIS_fnc_numberText,CurrencyName]} else {[_amount,true] call z_calcCurrency};

createDialog "vkc";
{ctrlShow [_x,false]} count [4803,4850,4851];

call vkc_vehicleInfo;

_control = ((findDisplay 4800) displayCtrl 4802);
lbClear _control;

{
	_index = _control lbAdd ((vkc_keyList select 1) select _forEachIndex);
	_control lbSetPicture [_index,getText(configFile >> "CfgWeapons" >> ((vkc_keyList select 2) select _index) >> "picture")];
} forEach (vkc_keyList select 0);

_control lbSetCurSel 0;

waitUntil {!dialog};

if (!vkc_isOk) exitWith {call _exit;};

if (isNull DZE_myVehicle || {!(alive DZE_myVehicle)} || {!(local DZE_myVehicle)}) exitWith {call _exit; localize "str_epoch_player_245" call dayz_rollingMessages;};

_enoughMoney = false;
_moneyInfo = [false,[],[],[],0];

if (Z_SingleCurrency) then {
	_wealth = player getVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),0];
	_enoughMoney = (_wealth >= _amount);
} else {
	Z_Selling = false;
	if (Z_AllowTakingMoneyFromVehicle) then {false call Z_checkCloseVehicle};
	_moneyInfo = _amount call Z_canAfford;
	_enoughMoney = _moneyInfo select 0;
};

_success = if (Z_SingleCurrency) then {true} else {[player,_amount,_moneyInfo,true,0] call Z_payDefault};

if (!_success && {_enoughMoney}) exitWith {call _exit;systemChat localize "STR_EPOCH_TRADE_GEAR_AND_BAG_FULL"};

if (_enoughMoney) then {
	_success = if (Z_SingleCurrency) then {_amount <= _wealth} else {[player,_amount,_moneyInfo,false,0] call Z_payDefault};
	if (_success) then {
		if (Z_SingleCurrency) then {player setVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),(_wealth - _amount),true];};

		vkc_cursorTarget setVehicleLock "LOCKED";
		player playActionNow "Medic";

		_position = [vkc_cursorTarget] call FNC_GetPos;

		[_typeOf,objNull] call fn_waitForObject;
		dze_waiting = nil;

		PVDZE_veh_Upgrade = [vkc_cursorTarget,[getDir vkc_cursorTarget,_position],_typeOf,vkc_charID,player,dayz_authKey,if (vkc_action == "change") then {"changed the key for"} else {"claimed"}];
		publicVariableServer "PVDZE_veh_Upgrade";

		localize "STR_CL_VKC_WAIT" call dayz_rollingMessages;

		waitUntil {!isNil "dze_waiting"};

		if (dze_waiting == "fail") then {
			systemChat format[localize "STR_CL_VKC_FAIL_UPGRADE",_name];
			if (z_singleCurrency) then {
				player setVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),_wealth,true];
			} else {
				Z_Selling = true;
				_success = [_amount,0,false,0,[],[],false] call Z_returnChange;
			};
		} else {
			{player reveal _x;} count (player nearEntities [["LandVehicle"],10]);
			[format[_message select 0,_name,vkc_keyName],1] call dayz_rollingMessages;
		};
	} else {
		systemChat localize "STR_EPOCH_TRADE_DEBUG";
	};
} else {
	systemChat format[localize "STR_CL_VKC_FAIL_MONEY",_itemText,_message select 1,_name];
};

call _exit;
