/**
*	[_selectedList, _selectedIndex ]call Z_clearBuyingList
*
*	Innitiates the item info to be displayed by getting the right item out of the corresponding list based on your sellection.
**/
private ['_item','_selectedList','_selectedIndex'];

_selectedList = _this select 0;
_selectedIndex = _this select 1;

_item = [];	

if(_selectedIndex >= 0) then {
	switch(_selectedList) do {
		case 'sellable': {
			_item = Z_SellableArray select _selectedIndex;
		};
		case 'selling': {
			_item = Z_SellArray select _selectedIndex;
		};
		case 'buyable': {
			_item = Z_BuyableArray select _selectedIndex;	
		};
		case 'buying': {
			_item = Z_BuyingArray select _selectedIndex;
		};
	};
};

if( count _item > 0) then {
	[_item] call Z_getItemConfig;
};