	/* ----------------------------------------------------------------------------
	Examples:
	   _result = [_backpack, ["SmokeShell","M16_AMMO"],["M16","M16","M240"],["backpack1","backpack2"]] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	   _result == [[1,0,0,1,1,1,0],[1,0,0,1],[1,0]]; // 1 = success, 0 = fail ->( item was not in cargo)

	Author:
	   Zupa 2014-09-30
	---------------------------------------------------------------------------- */
private ["_unit", "_items","_weaps","_normalItems","_normalWeaps", "_count", "_i", "_unit_allItems", "_unit_allItems_types", "_unit_allItems_count", "_item_type", "_item_count", "__returnVar"];
_unit = _this select 0;
_items = _this select 1;
_weaps = _this select 2;
_bags = [];
if(count _this > 3)then{
	_bags = _this select 3;
};

_normalItems = [];
_normalWeaps = [];
_normalBags = [];

_unit_allItems = getMagazineCargo _unit; //  [[type1, typeN, ...],[count1, countN, ...]]
_unit_allItems_types = _unit_allItems select 0;
_unit_allItems_count = _unit_allItems select 1;

_unit_allWeaps = getWeaponCargo _unit;
_unit_allWeaps_types = _unit_allWeaps select 0;
_unit_allWeaps_count = _unit_allWeaps select 1;

_unit_allBags = getBackpackCargo _unit;
_unit_allBags_types = _unit_allBags select 0;
_unit_allBags_count = _unit_allBags select 1;

clearMagazineCargoGlobal _unit;
clearWeaponCargoGlobal _unit;

if( count _bags > 0 )then{
	clearBackpackCargoGlobal  _unit;
};

{
	_counter = 0 ;
	while{	_counter < ( _unit_allItems_count select _forEachIndex)}do{
	_normalItems set [count(_normalItems),_x];
			_counter = _counter + 1;
	};
}forEach _unit_allItems_types;
{
	_counter = 0 ;
	while{	_counter < ( _unit_allWeaps_count select _forEachIndex)}do{
	_normalWeaps set [count(_normalWeaps),_x];
			_counter = _counter + 1;
	};
}forEach _unit_allWeaps_types;
{
	_counter = 0 ;
	while{	_counter < ( _unit_allBags_count select _forEachIndex)}do{
	_normalBagss set [count(_normalBags),_x];
			_counter = _counter + 1;
	};
}forEach _unit_allBags_types;

_returnVar = [];
_returnMag = [];
_returnWeap = [];
_returnBag = [];
{
	_inCargo = _normalItems find _x;
	if(_inCargo > -1)then{
		_normalItems set [_inCargo, "soldItem"];
		_returnMag set [count(_returnMag),1];
	}else{
		_returnMag set [count(_returnMag),0];
	};
}count _items;
_normalItems = _normalItems - ["soldItem"];
{
	_unit addMagazineCargoGlobal [_x, 1];
}count _normalItems;

{
	_inCargo = _normalWeaps find _x;
	if(_inCargo > -1)then{
		_normalWeaps set [_inCargo, "soldItem"];
		_returnWeap set [count(_returnWeap),1];
	}else{
		_returnWeap set [count(_returnWeap),0];
	};
}count _weaps;
_normalWeaps = _normalWeaps - ["soldItem"];
{
	_unit addWeaponCargoGlobal [_x, 1];
}count _normalWeaps;

{
	_inCargo = _normalBags find _x;
	if(_inCargo > -1)then{
		_normalBags set [_inCargo, "soldItem"];
		_returnBag set [count(_returnBag),1];
	}else{
		_returnBag set [count(_returnBag),0];
	};
}count _bags;
_normalWeaps = _normalWeaps - ["soldItem"];
{
	_unit addBackpackCargoGlobal [_x, 1];
}count _normalBags;

_returnVar set [0,_returnMag];
_returnVar set [1,_returnWeap];
_returnVar set [2,_returnBag];
_returnVar
