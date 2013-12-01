private ["_inventory","_wpns","_mags","_idc","_isOK"];
_inventory = _this;
if (count _inventory > 0) then {
	_wpns = _inventory select 0;
	_mags = _inventory select 1;

	//Add inventory
	{
		private["_item","_val"];
		//is it an array?
		_idc = 109;
		if (typeName _x == "ARRAY") then {
			_item = _x select 0;
			_val = 	_x select 1;
		} else {
			_item = _x;
			_val = -1;
		};

		if (_item == "BoltSteel") then { _item = "WoodenArrow" }; // Convert BoltSteel to WoodenArrow
		if (_item == "ItemTent") then { _item = "ItemTentOld" };

		//Is item legal?
		_isOK = 	isClass(configFile >> "CfgMagazines" >> _item);
		if (_isOK) then {
			if (_val != -1) then {
				player addMagazine [_item,_val];
			} else {
				player addMagazine _item;
			};
		};
		_idc = _idc + 1;
	} forEach _mags;
	
	//Add weapons
	{
		if(_x in (DZE_REPLACE_WEAPONS select 0)) then {
			_x = (DZE_REPLACE_WEAPONS select 1) select ((DZE_REPLACE_WEAPONS select 0) find _x);
		};

		//Is item legal?
		_isOK = 	isClass(configFile >> "CfgWeapons" >> _x);
		if (_isOK) then {
			player addWeapon _x;
		};
	} forEach _wpns;
};