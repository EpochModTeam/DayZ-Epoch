private ["_selection","_return","_toBuyWeaps","_toBuyMags","_toBuyBags","_toolsToBuy","_sidearmToBuy","_primaryToBuy","_currentPrimarys"
,"_currentSecondarys","_currentSec","_currentPrim","_currentTool","_p","_s","_b","_check0","_check1","_check2","_check3","_check4","_mags","_weaps","_bags"
,"_normalBags","_normalMags","_normalWeaps","_allowedMags","_allowedPrimary","_allowedTools","_allowedSidearm","_allowedWeapons","_allowedBackpacks"
,"_totalSpace","_totalNewSpace","_counter","_parentClasses","_alreadyInBackpack","_kinds","_kinds2","_kinds3","_ammmounts","_ammmounts2","_ammmounts3"
];
_selection = Z_SellingFrom;
_return = false;
_toBuyWeaps = _this select 0;
_toBuyMags = _this select 1;
_toBuyBags = _this select 2;
_toolsToBuy = _this select 3;
_sidearmToBuy = _this select 4;
_primaryToBuy = _this select 5;
_vehiclesToBuy = _this select 6;


if(_selection == 2) then{ //gear
	_allowedMags = 20 - count(magazines player);

	_currentPrimarys = 0;

	_p = primaryWeapon player;
	if ( !isNil '_p' && _p != "" ) then {
		_currentPrimarys = 1;
	};

	_allowedPrimary = 1 - _currentPrimarys;

	_currentSecondarys = 0;

	_s = secondaryWeapon player;
	if ( !isNil '_s' && _s != "" ) then {
		_currentSecondarys = 1;
	};

	_allowedSidearm = 1 - _currentSecondarys;

	_currentBackpacks = 0;

	_b = unitBackpack player;
	if ( !isNull _b ) then {
		_currentBackpacks = 1;
	};

	_allowedBackpacks = 1 - _currentBackpacks;

	_allowedTools = 12;

	{
		_parentClasses =  [(configFile >> "CfgWeapons" >> _x ),true] call BIS_fnc_returnParents;
		if( 'ItemCore' in _parentClasses || 'Binocular' in _parentClasses) then {
			_allowedTools = _allowedTools - 1;
		}
	}count (weapons player);

	_check1 = false;
	_check2 = false;
	_check3 = false;

	if( _allowedPrimary >= _primaryToBuy && _allowedSidearm >= _sidearmToBuy && _allowedTools >= _toolsToBuy)then{
		_check1 = true;
	}else{
		systemChat format["You can only buy %1 primary, %2 sidearm and %3 tools in your gear.", _allowedPrimary, _allowedSidearm , _allowedTools];
	};
	if( _allowedMags >= _toBuyMags)then{
		_check2 = true;
	}else{
		systemChat format["You can only buy %1 magazines in your gear.",_allowedMags];
	};
	if( _allowedBackpacks >= _toBuyBags)then{
		_check3 = true;
	}else{
		systemChat format["You can only buy %1 backpacks in your gear.",_allowedBackpacks];
	};

	if(_check1 && _check2 && _check3)then{
		_return = true;
	};

};
if(_selection == 1) then{ //vehicle
	_allowedMags = 0;
	_allowedWeapons = 0;
	_allowedBackpacks = 0;
	if ( !isNull Z_vehicle) then {

		_mags = getMagazineCargo Z_vehicle;
		_weaps = getWeaponCargo Z_vehicle;
		_bags = getBackpackCargo Z_vehicle;

		_normalMags = [];
		_normalWeaps = [];
		_normalBags = [];

		_kinds = _mags select 0;
		_ammmounts = _mags select 1;
		{
			_counter = 0 ;
			while{	_counter < ( 	_ammmounts select _forEachIndex)}do{
			_normalMags set [count(_normalMags),_x];
					_counter = _counter + 1;
			};
		}forEach _kinds;

		_kinds2 = _weaps select 0;
		_ammmounts2 = _weaps select 1;
		{
			_counter = 0 ;
			while{	_counter < ( 	_ammmounts2 select _forEachIndex)}do{
				_normalWeaps set [count(_normalWeaps),_x];
				_counter = _counter + 1;
			};
		}forEach _kinds2;

		_kinds3 = _bags select 0;
		_ammmounts3 = _bags select 1;
		{
			_counter = 0 ;
			while{	_counter < ( 	_ammmounts3 select _forEachIndex)}do{
				_normalBags set [count(_normalBags),_x];
				_counter = _counter + 1;
			};
		}forEach _kinds3;


		_allowedWeapons = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxWeapons') - count(_normalWeaps);
		_allowedMags = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxMagazines') - count(_normalMags);
		_allowedBackpacks = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxBackpacks ') - count(_normalBags);
	};

	_check1 = false;
	_check2 = false;
	_check3 = false;

	if( _allowedWeapons >= ( _toBuyWeaps + _toolsToBuy ) )then{
		_check1 = true;
	}else{
		systemChat format["You can only buy %1 weapons in your vehicle.", _allowedWeapons];
	};
	if( _allowedMags >= _toBuyMags)then{
		_check2 = true;
	}else{
		systemChat format["You can only buy %1 magazines in your vehicle.", _allowedMags];
	};
	if( _allowedBackpacks >= _toBuyBags)then{
		_check3 = true;
	}else{
		systemChat format["You can only buy %1 backpacks in your vehicle.", _allowedBackpacks];
	};

	if(_check1 && _check2 && _check3)then{
		_return = true;
	};
};
if(_selection == 0) then{ //backpack
	_allowedWeapons = 0;
	_allowedMags = 0;
	_allowedBackpacks = 0;

	_totalSpace = 0;
	_totalNewSpace = 0;

	_backpack = unitBackpack player;
	_check0 = false;
	if (!isNull _backpack) then {
		_check0 = true;

		_mags = getMagazineCargo _backpack;
		_weaps = getWeaponCargo _backpack;

		_normalMags = [];
		_normalWeaps = [];

		_kinds = _mags select 0;
		_ammmounts = _mags select 1;
		{
			_counter = 0 ;
			while{ _counter < ( 	_ammmounts select _forEachIndex)} do {
				_normalMags set [count(_normalMags), _x];
				_counter = _counter + 1;
			};
		}forEach _kinds;

		_kinds2 = _weaps select 0;
		_ammmounts2 = _weaps select 1;
		{
			_counter = 0 ;
			while{ _counter < ( 	_ammmounts2 select _forEachIndex)} do {
				_normalWeaps set [count(_normalWeaps), _x];
				_counter = _counter + 1;
			};
		}forEach _kinds2;

		_allowedWeapons = getNumber (configFile >> 'CfgVehicles' >> (typeOf _backpack) >> 'transportMaxWeapons') - count(_normalWeaps);
		_allowedMags = getNumber (configFile >> 'CfgVehicles' >> (typeOf _backpack) >> 'transportMaxMagazines') - count(_normalMags);



		_currentPrim = 0;
		_currentSec = 0;
		_currentTool = 0;

		{
			_parentClasses =  [(configFile >> "CfgWeapons" >> _x ),true] call BIS_fnc_returnParents;
			if( 'ItemCore' in _parentClasses || 'Binocular' in _parentClasses ) then {
				_currentTool = _currentTool + 1;
			} else {
				if( 'PistolCore' in _parentClasses )then {
					_currentSec = _currentSec + 1;
				} else {
					_currentPrim = _currentPrim + 1;
				};
			};
		} count _normalWeaps;


		_alreadyInBackpack = (10 * _currentPrim) + (5 * _currentSec) + _currentTool + count(_normalMags);

		_totalNewSpace = 10 * _primaryToBuy + 5 * _sidearmToBuy + _toolsToBuy + _toBuyMags;

		_totalSpace = _alreadyInBackpack + _totalNewSpace;

	}else {
		systemChat format["You need a backpack.", _allowedMags];
	};

	_check1 = false;
	_check2 = false;
	_check3 = false;
	_check4 = false;

	if( _allowedWeapons >= _toBuyWeaps)then{
		_check1 = true;
	} else {
		systemChat format["Only %1 weapons fit in the backpack.", _allowedMags];
	};
	if( _allowedMags >= _toBuyMags)then{
		_check2 = true;
	} else {
		systemChat format["Only %1 mags fit in the backpack." , _allowedWeapons];
	};
	if( _allowedBackpacks >= _toBuyBags)then{
		_check3 = true;
	} else {
		systemChat format["Only %1 bags fit in the backpack." , _allowedBackpacks ];
	};

	if( _totalSpace <= _allowedMags)then{
		_check4 = true;
	}else{
		systemChat format["Total space succeeded: Mag=1, Tool=1, Side=5, Primary=10 slots and your bag capacity is %1 where you tried %2 slots.", _allowedMags, _totalNewSpace];
	};

	if(_check0 && _check1 && _check2 && _check3 && _check4)then{
		_return = true;
	};
};

if(_vehiclesToBuy != 0)then{
	_return = false;
	systemChat "You can NOT buy vehicles in this version";
};

_return
