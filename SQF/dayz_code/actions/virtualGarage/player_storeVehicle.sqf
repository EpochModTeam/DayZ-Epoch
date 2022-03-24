// Developed by [GZA] David for German Zombie Apocalypse Servers (https://zombieapo.eu/)
// Rewritten by salival (https://github.com/oiad)

private ["_amount","_backPackCount","_backPackGear","_cargoAmount","_charID","_control","_counter","_display","_enoughMoney","_gearCount","_hasKey","_isLimitArray","_itemText","_items","_keyName","_limit","_magazineCount","_matchedCount","_moneyInfo","_name","_overLimit","_storedVehicles","_success","_typeName","_typeOf","_vehicle","_wealth","_weaponsCount","_woGear","_playerNear","_ownerPUID","_plotCheck"];

disableSerialization;

_display = findDisplay 2800;
_control = ((findDisplay 2800) displayCtrl 2802);

_vehicle = vg_vehicleList select (lbCurSel _control);
_typeOf = typeOf _vehicle;
_isLimitArray = typeName vg_limit == "ARRAY";

_overLimit = false;
_matchedCount = 0;
_storedVehicles = [];

{if (_typeOf isKindOf _x) exitWith {_overLimit = true;}} count vg_blackListed;
if (_overLimit) exitWith {localize "STR_CL_VG_BLACKLISTED" call dayz_rollingMessages;};

{
	if (typeName _x == "ARRAY") then {
		 _storedVehicles set [count _storedVehicles,_x select 1];
	};
} count vg_vehicleList;

_gearCount = {
	private ["_counter"];
	_counter = 0;
	{_counter = _counter + _x;} count _this;
	_counter
};

if (_isLimitArray) then {
	{
		_typeName = _x select 0;
		_limit = _x select 1;
		if (typeName _x == "ARRAY") then {
			if (_typeOf isKindOf _typeName) then {
				{
					if (_x isKindOf _typeName) then {_matchedCount = _matchedCount +1};
					if (_matchedCount >= _limit) then {_overLimit = true;};
				} count _storedVehicles;
			};
		};
		if (_overLimit) exitWith {};
	} count vg_limit;
} else {
	if (count _storedVehicles >= vg_limit) then {_overLimit = true;};
};

if (_overLimit) exitWith {
	if (_isLimitArray) then {
		systemChat localize "STR_CL_VG_LIMIT_ARRAY";
	} else {
		systemChat localize "STR_CL_VG_LIMIT_NUMBER";
	};
};

vg_vehicleList = nil;

_woGear = _this select 0;
closeDialog 0;
if (!vg_storeWithGear && !_woGear) exitWith {localize "STR_CL_VG_NOSTOREWITHGEAR" call dayz_rollingMessages;};

_charID	= _vehicle getVariable ["CharacterID","0"];
_weaponsCount = ((getWeaponCargo _vehicle) select 1) call _gearCount;
_magazineCount = ((getMagazineCargo _vehicle) select 1) call _gearCount;
_backPackCount = ((getBackpackCargo _vehicle) select 1) call _gearCount;
_cargoAmount = (_weaponsCount + _magazineCount + _backPackCount);

if (_charID == "-1") exitWith {localize "STR_CL_VG_STORE_MISSION" call dayz_rollingMessages;};
if (isNull DZE_myVehicle || !local DZE_myVehicle) exitWith {localize "STR_EPOCH_PLAYER_245" call dayz_rollingMessages;};

_hasKey = false;

_items = items player;
dayz_myBackpack = unitBackpack player;

if (!isNull dayz_myBackpack) then {
	_backPackGear = (getWeaponCargo dayz_myBackpack) select 0;
	_items = _items + _backPackGear;
};

if (_charID != "0") then {
	{
		if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in DZE_itemKeys) then {
			if (str(getNumber(configFile >> "CfgWeapons" >> _x >> "keyid")) == _charID) then {
				_keyName = _x;
				_hasKey = true;
			};
		};
	} count _items;
} else {
	if (vg_store_keyless_vehicles) then {
		_hasKey = true;
	};	
};

if (vg_requireKey && {!_hasKey}) exitWith {localize "STR_CL_VG_REQUIRE_KEY" call dayz_rollingMessages;};

_name = getText(configFile >> "cfgVehicles" >> _typeOf >> "displayName");

{
	if (_typeOf isKindOf (_x select 0)) exitWith {_amount = _x select 1};
} forEach vg_price;

if (_cargoAmount > 0) then {_amount = _amount + (_cargoAmount * vg_pricePer);};

if (!isNil "sk_dualCurrency") then {_amount = if (z_singleCurrency) then {_amount * 10} else {_amount};};

/*
_playerNear = {isPlayer _x && (_x != player)} count (([_vehicle] call FNC_GetPos) nearEntities ["CAManBase", 15]) > 0;
if (_playerNear) exitWith {localize "STR_CL_VG_PLAYERNEARVEHICLE" call dayz_rollingMessages;};
*/

if (count (crew _vehicle) > 0) exitWith {localize "STR_CL_VG_PLAYERINVEHICLE" call dayz_rollingMessages;};

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

if (!_success && {_enoughMoney}) exitWith {systemChat localize "STR_EPOCH_TRADE_GEAR_AND_BAG_FULL"};

if (_enoughMoney) then {
	_success = if (Z_SingleCurrency) then {_amount <= _wealth} else {[player,_amount,_moneyInfo,false,0] call Z_payDefault};
	if (_success) then {
		if (Z_SingleCurrency) then {player setVariable [(["cashMoney","globalMoney"] select Z_persistentMoney),(_wealth - _amount),true];};

		[_vehicle,true] call local_lockUnlock;
		DZE_myVehicle = objNull;

		PVDZE_storeVehicle = if (vg_tiedToPole) then {
			_plotCheck = [player,false] call FNC_find_plots;
			_ownerPUID = if (_plotCheck select 1 > 0) then {(_plotCheck select 2) getVariable ["ownerPUID","0"]} else {dayz_playerUID};
			[_vehicle,player,_woGear,_ownerPUID]
		} else {
			[_vehicle,player,_woGear]
		};

		publicVariableServer "PVDZE_storeVehicle";
		waitUntil {!isNil "PVDZE_storeVehicleResult"};

		PVDZE_storeVehicle = nil;
		PVDZE_storeVehicleResult = nil;

		format[localize "STR_CL_VG_VEHICLE_STORED",_name] call dayz_rollingMessages;
		if (vg_removeKey && {_charID != "0"}) then {
			if (_keyName in (items player)) then {
				[player,_keyName,1] call BIS_fnc_invRemove;
			} else {
				private ["_weparray", "_qtyarray", "_arraycnt","_newwepqty","_newwep","_newarray","_cntarray","_weapon","_weaponqty"];

				_weparray = [];
				_qtyarray = [];
				_arraycnt = -1;
				_backPackGear = getWeaponCargo dayz_myBackpack;

				{
					_arraycnt = _arraycnt + 1;
					if (_x == _keyName) then {
					} else {
						_newwep = (_backPackGear select 0) select _arraycnt;
						_newwepqty = (_backPackGear select 1) select _arraycnt;

						_weparray set [count _weparray, _newwep];
						_qtyarray  set [count _qtyarray,_newwepqty];
					};
				} forEach (_backPackGear select 0);

				_newarray = [];
				_newarray = [_weparray] + [_qtyarray];

				clearWeaponCargoGlobal dayz_myBackpack;

				_cntarray = count _weparray;

				for "_i" from 0 to (_cntarray-1) do {
					_weapon = (_newarray select 0) select _i;
					_weaponqty = (_newarray select 1) select _i;
					dayz_myBackpack addWeaponCargoGlobal [_weapon,_weaponqty];
				};
			};
		};
	} else {
		systemChat localize "STR_EPOCH_TRADE_DEBUG";
	};
} else {
	_itemText = if (Z_SingleCurrency) then {CurrencyName} else {[_amount,true] call z_calcCurrency};
	if (Z_SingleCurrency) then {
		systemChat format[localize "STR_CL_VG_NEED_COINS",[_amount] call BIS_fnc_numberText,_itemText,_name];
	} else {
		systemChat format[localize "STR_CL_VG_NEED_BRIEFCASES",_itemText,_name];
	};
};
