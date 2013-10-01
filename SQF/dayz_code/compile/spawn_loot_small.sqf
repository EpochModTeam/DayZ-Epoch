
private ["_iItem","_iClass","_iPos","_radius","_item","_itemTypes","_index","_weights","_cntWeights","_qty","_max","_tQty","_canType","_mags"];

_iItem = 	_this select 0;
_iClass = 	_this select 1;
//diag_log format["DEBUG spawn loot class: %1", _iClass];
_iPos =		_this select 2;
_radius =	_this select 3;

switch (_iClass) do
{
	default
	{
		//Item is sigle, add 1 item from cfgloot
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];

		_itemTypes = [] + ((getArray (configFile >> "cfgLoot" >> _iClass)) select 0);
		_index = dayz_CLBase find _iClass;
		
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
			
	    _index = floor(random _cntWeights);
		_index = _weights select _index;
		_canType = _itemTypes select _index;
		_item addMagazineCargoGlobal [_canType,1];
	};
	case "single":
	{
		//Item is sigle, add 1 item from cfgloot
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];

		_itemTypes = [] + ((getArray (configFile >> "cfgLoot" >> _iItem)) select 0);
		_index = dayz_CLBase find _iItem;
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
			
	    _index = floor(random _cntWeights);
		_index = _weights select _index;
		_canType = _itemTypes select _index;
		_item addMagazineCargoGlobal [_canType,1];
	};
	case "weapon":
	{
		//do nothing for now
		/*
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addWeaponCargoGlobal [_iItem,1];
		*/
	};
	case "magazine":
	{
		//Item is one magazine
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addMagazineCargoGlobal [_iItem,1];
	};
	
	case "weaponnomags":
	{
		//do nothing for now
	};
	case "backpack":
	{
		//do nothing for now
	};
	case "object":
	{
		//do nothing for now
	};
};

// timestamp for later clearing
_dateNow = (DateToNumber date);
_item setVariable ["looted",_dateNow,true];

if ((count _iPos) > 2) then 
{
	_item setPosATL _iPos;
};