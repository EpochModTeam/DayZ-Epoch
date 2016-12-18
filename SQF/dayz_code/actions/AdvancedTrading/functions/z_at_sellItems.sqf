private ["_tempArray","_outcome","_vehCheckArray","_vehArray","_weaponsArray","_itemsArray","_bpArray","_bpCheckArray","_weaponsCheckArray","_itemsCheckArray","_VehKey","_wA","_mA","_money","_itemData","_success","_bag","_itemsToLog","_tCost","_tSold","_wealth"];

if (count Z_SellArray < 1) exitWith { systemChat localize "STR_EPOCH_TRADE_SELL_NO_ITEMS"; };
if (Z_SellingFrom == 1 && (isNull DZE_myVehicle or !local DZE_myVehicle)) exitWith { systemChat localize "STR_EPOCH_PLAYER_245"; };

_tempArray = Z_SellArray;
closeDialog 2;
_outcome = [];
_weaponsArray = [];
_itemsArray = [];
_bpArray = [];
_bpCheckArray = [];
_vehArray = [];
_vehCheckArray = [];
_weaponsCheckArray = [];
_itemsCheckArray = [];
_itemsToLog = [[],[],[],"sell"];

_sellVehicle = {
	private ["_damage","_tireDmg","_tires","_okToSell","_returnInfo","_obj","_hitpoints","_objectID","_objectUID","_objectCharacterId","_notSetup","_part_in","_qty_in","_activatingPlayer","_objects","_qty","_vehicle"];
	_vehicle = _this select 0;
	_sellType = _this select 1;
	_part_in = typeOf _vehicle;
	_qty_in = 1;
	_activatingPlayer = player;
	_returnInfo = [];
	_objects = nearestObjects [(getPosATL player), [_part_in], Z_VehicleDistance];
	_qty = ({(typeOf _x) == _part_in} count _objects);
	if (_qty >= _qty_in) then {
		_obj = (_objects select 0);
		_okToSell = true;
		_tires = 0;
		_tireDmg = 0;
		_damage = 0;
		if (!(_sellType in ["trade_any_boat", "trade_any_boat_old"])) then {
			_hitpoints = _obj call vehicle_getHitpoints;
			{
				if (["Wheel",_x,false] call fnc_inString) then {
					_damage = [_obj,_x] call object_getHit;
					_tireDmg = _tireDmg + _damage;
					_tires = _tires + 1;
				};
			} forEach _hitpoints;
			if (_tireDmg > 0 && _tires > 0) then {
				if ((_tireDmg / _tires) > 0.75) then {
					_okToSell = false;
				};
			};
		};
		_objectID			= _obj getVariable ["ObjectID","0"];
		_objectUID			= _obj getVariable ["ObjectUID","0"];
		_objectCharacterId	= _obj getVariable ["CharacterID","0"];
		_notSetup 			= (_objectID == "0" && _objectUID == "0");

		if (local _obj && !isNull _obj && alive _obj && !_notSetup) then {
			if (_okToSell) then {
				_returnInfo = [_objectCharacterId, _obj, _objectID, _objectUID, _sellType];
			} else {
				systemChat format[localize "str_epoch_player_182",typeOf _obj];
				_returnInfo = [];
			};
		} else {
			systemChat localize "str_epoch_player_245";
			_returnInfo = [];
		};
	};
	_returnInfo;
};

{
	private ["_type","_name"];
	_type = _x select 1;
	_name = _x select 0;

	switch (true) do {
	case (_type == "trade_items") :
		{
			_itemsArray set [count(_itemsArray),_name];
			_itemsCheckArray set [count(_itemsCheckArray),[_x select 2, _x select 11]];
		};
	case (_type == "trade_weapons") :
		{
			_weaponsArray set [count(_weaponsArray),_name];
			_weaponsCheckArray set [count(_weaponsCheckArray),[_x select 2, _x select 11]];
		};
	case (_type == "trade_backpacks") :
		{
			_bpArray set [count(_bpArray),_name];
			_bpCheckArray set [count(_bpCheckArray),[_x select 2, _x select 11]];
		};
	case (_type in DZE_tradeVehicle) :
		{
			if (local DZE_myVehicle) then {
				_VehKey = [DZE_myVehicle, _type] call _sellVehicle;
				if (count _VehKey > 0) then {
					_vehArray set [count(_vehArray),_VehKey];
					_vehCheckArray set [count(_vehCheckArray),[_x select 2, _x select 11]];
				};
			} else {
				systemChat localize "STR_EPOCH_PLAYER_245";
			};
		};
	};
} forEach Z_SellArray;

_tSold = _itemsArray + _weaponsArray + _bpArray + _vehArray;

if (Z_SellingFrom == 0) then {
	_outcome = [unitBackpack player,_itemsArray,_weaponsArray, _vehArray] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	systemChat format[localize "STR_EPOCH_TRADE_SELL_IN_BACKPACK",count _tSold];
};
if (Z_SellingFrom == 1) then {
	_outcome = [DZE_myVehicle,_itemsArray,_weaponsArray,_vehArray] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	systemChat format[localize "STR_EPOCH_TRADE_SELL_IN_VEHICLE",count _tSold,typeOf DZE_myVehicle];
};

_itemsToLog set [0,(_itemsArray + _weaponsArray + _bpArray + [typeOf DZE_myVehicle])];

//gear
if (Z_SellingFrom == 2) then {
	private ["_localResult", "_vehTraded"];
	_wA = [];
	_mA = [];
	_vehTraded = false;
	_bagTraded = false;

	{
		if ((_x select 1) in DZE_tradeVehicle) then {
			_localResult = [_vehArray, (_x select 1)] call DZE_deleteTradedVehicle;
			if (_localResult == 1) then {_vehTraded = true;};
		} else {
			if (_x select 1 == "trade_backpacks") then {
				//BIS_fnc_invRemove doesn't handle backpacks
				_bag = unitBackpack player;
				removeBackpack player;
				_localResult = if (_bag != (unitBackpack player)) then {1} else {0};
				if (_localResult == 1) then {_bagTraded = true;};
			} else {
				_name = _x select 0;
				_type = _x select 1;
				if (_type == "trade_items") then {_name = configFile >> "CfgMagazines" >> _name;};
				if (_type == "trade_weapons") then {_name = configFile >> "CfgWeapons" >> _name;};
				if (_x select 0 == dayz_onBack) then {
					dayz_onBack = ""; // Remove from back
					_localResult = 1;
				} else {
					_localResult = [player,_name,1] call BIS_fnc_invRemove; // Use config for BIS_fnc_invRemove
				};
				if (_localResult != 1) then {
					if (_x select 1 == "trade_items") then {
						_mA set [count(_mA),0];
					} else {
						_wA set [count(_wA),0];
					};
				} else {
					if (_x select 1 == "trade_items") then {
						_mA set [count(_mA),1];
					} else {
						_wA set [count(_wA),1];
					};
				};
			};
		};
	} forEach Z_SellArray;

	_outcome set [0,_mA];
	_outcome set [1,_wA];
	_outcome set [2,[]];
	if (_vehTraded) then {
		_outcome set [3,[1]];
	};
	if (_bagTraded) then {
		_outcome set [2,[1]];
	};
	systemChat format[localize "STR_EPOCH_TRADE_SELL_IN_GEAR",count _tSold];
};

{_itemsToLog set [1, (_itemsToLog select 1) + _x]} forEach _outcome;
_money = 0;

if (Z_SingleCurrency) then {
	{
		_money = _money + ((((_itemsCheckArray select _forEachIndex) select 0)) * _x);
		_itemsToLog set [2, (_itemsToLog select 2) + [((((_itemsCheckArray select _forEachIndex) select 0)) * _x)]];
	} forEach (_outcome select 0);
	{
		_money = _money + ((((_weaponsCheckArray select _forEachIndex) select 0)) * _x);
		_itemsToLog set [2, (_itemsToLog select 2) + [((((_weaponsCheckArray select _forEachIndex) select 0)) * _x)]];
	} forEach (_outcome select 1);
	{
		_money = _money + ((((_bpCheckArray select _forEachIndex) select 0)) * _x);
		_itemsToLog set [2, (_itemsToLog select 2) + [((((_bpCheckArray select _forEachIndex) select 0)) * _x)]];
	} forEach (_outcome select 2);
	
	if (count _outcome > 3) then {
		_money = _money + ((_vehCheckArray select 0) select 0);
		_itemsToLog set [2, (_itemsToLog select 2) + [((_vehCheckArray select 0) select 0)]];
	};
} else {
	{
		_itemData = _itemsCheckArray select _forEachIndex;
		_money = _money + ((_itemData select 0) * (_itemData select 1) * _x);
		_itemsToLog set [2, (_itemsToLog select 2) + [((_itemData select 0) * (_itemData select 1) * _x)]];
	} forEach (_outcome select 0);
	{
		_itemData = _weaponsCheckArray select _forEachIndex;
		_money = _money + ((_itemData select 0) * (_itemData select 1) * _x);
		_itemsToLog set [2, (_itemsToLog select 2) + [((_itemData select 0) * (_itemData select 1) * _x)]];
	} forEach (_outcome select 1);
	{
		_itemData = _bpCheckArray select _forEachIndex;
		_money = _money + ((_itemData select 0) * (_itemData select 1) * _x);
		_itemsToLog set [2, (_itemsToLog select 2) + [((_itemData select 0) * (_itemData select 1) * _x)]];
	} forEach (_outcome select 2);
	if ((count _outcome) > 3) then {
		_itemData = _vehCheckArray select 0;
		_money = _money + ((_itemData select 0) * (_itemData select 1));
		_itemsToLog set [2, (_itemsToLog select 2) + [((_itemData select 0) * (_itemData select 1))]];
	};
};

if (typeName _money  == "SCALAR") then {
	if (Z_SingleCurrency) then {
		_wealth = player getVariable[Z_MoneyVariable,0];
		player setVariable[Z_MoneyVariable,(_wealth + _money),true];
		systemChat format[localize "STR_EPOCH_TRADE_SUCCESS_CHANGE",[_money] call BIS_fnc_numberText,CurrencyName];
	} else {
		_success = [_money,0,false,0,[],[],false] call Z_returnChange;
		_tCost = "";
		_tCost = [_money,true] call z_calcCurrency;
		if (_tCost != "") then { systemChat format[localize "STR_EPOCH_TRADE_SELL_SUCCESS",_tCost]; };
	};
	_itemsToLog call Z_logTrade;
	call player_forceSave;
	if (Z_SellingFrom == 1) then {
		PVDZ_veh_Save = [DZE_myVehicle,"gear"];
		publicVariableServer "PVDZ_veh_Save";
	};
} else {
	systemChat localize "STR_EPOCH_TRADE_DEBUG";
	diag_log "Money is not a number. Something went wrong.";
};