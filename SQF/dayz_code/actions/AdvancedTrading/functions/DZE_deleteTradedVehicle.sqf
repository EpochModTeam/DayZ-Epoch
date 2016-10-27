private ["_localResult2","_VehKey2","_keyArr","_deleteRet","_vehicle","_delType","_containerFindKey"];
_VehKey2 = (_this select 0) select 0;
_delType = _this select 1;

_containerFindKey = {
	private ["_keys","_weapTypes"];
	_keys = [];
	_weapTypes = (_this select 1) select 0;
	{
		if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in ["ItemKeyYellow","ItemKeyBlue","ItemKeyRed","ItemKeyGreen","ItemKeyBlack"]) then {
			if (str(getNumber(configFile >> "CfgWeapons" >> _x >> "keyid")) == (_this select 0)) then {
				_keys set [count _keys, _x];
			};
		};
	} forEach _weapTypes;
	_keys;
};

if ((count _VehKey2) > 0) then {
	if ((_VehKey2 select 0) == "0" || _delType in DZE_tradeVehicleKeyless) then {
		_localResult2 = 1;
	} else {
		{
			if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in ["ItemKeyYellow","ItemKeyBlue","ItemKeyRed","ItemKeyGreen","ItemKeyBlack"]) then {
				if (str(getNumber(configFile >> "CfgWeapons" >> _x >> "keyid")) == (_VehKey2 select 0)) then {
					_localResult2 = [player,_x,1] call BIS_fnc_invRemove;
				};
			};
		} forEach (items player);
		if ((typeOf (unitBackPack player)) != "") then {
			_keyArr = [(_VehKey2 select 0), (getWeaponCargo (unitBackpack player))] call _containerFindKey;
			_deleteRet = [unitBackpack player,[],_keyArr,[]] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
			if (isNil "_localResult2") then {
				_localResult2 = ((_deleteRet select 1) select 0);
			} else {
				if (_localResult2 == 0) then {
					_localResult2 = ((_deleteRet select 1) select 0);
				};
			};
		};
		_vehicle = DZE_myVehicle;
		if (count _this > 2 && {isNull _vehicle}) then {
			_vehicle = _this select 2;
		};
		if (!isNull _vehicle) then {
			_keyArr = [(_VehKey2 select 0), (getWeaponCargo _vehicle)] call _containerFindKey;
			_deleteRet = [_vehicle,[],_keyArr,[]] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
			if (isNil "_localResult2") then {
				_localResult2 = ((_deleteRet select 1) select 0);
			} else {
				if (_localResult2 == 0) then {
					_localResult2 = ((_deleteRet select 1) select 0);
				};
			};
		};
		if (!DZE_SaleRequiresKey) then {_localResult2 = 1;};
	};
	if (isNil "_localResult2") then {
		_localResult2 = 0;
	} else {
		PVDZ_obj_Destroy = [(_VehKey2 select 2),(_VehKey2 select 3),player];
		publicVariableServer "PVDZ_obj_Destroy";
		deleteVehicle (_VehKey2 select 1);
	};
} else {
	_localResult2 = 0;
};
_localResult2;