HG_lbSelectedItem = {
	private ["_display","_index","_selectedItem","_n","_lbcontrol"];

	_display = _this;
	_lbcontrol = _display displayctrl 105;
	_index = lbCurSel _lbcontrol;
	_selectedItem = "";
	_n = 0;

	while {(_selectedItem == "") && (_n < 6)} do {
		_selectedItem = _lbcontrol lnbData [_index,1];
		uisleep 0.001;
		_n = _n + 1;
	};

	_selectedItem
};

HG_arrowsEnable = {
	private ["_display", "_lbcontrol", "_index"];

	_display = _this;
	_lbcontrol = _display displayctrl 105;
	_index = lbCurSel _lbcontrol;
	_lbcontrol lnbText [_index,0];
	_lbcontrol lnbText [_index,2];
};

HG_isWeapon = {
	private ["_item","_return"];

	_item = _this;
	_return = (str(configfile >> "cfgWeapons" >> _item) != "");
	_return
};

HG_isMagazine = {
	private ["_item","_return"];

	_item = _this;
	_return = (str(configfile >> "cfgMagazines" >> _item) != "");
	_return
};

HG_isBackpack = {
	private ["_item","_return"];

	_item = _this;
	_return = (str(configfile >> "cfgVehicles" >> _item) != "");
	_return
};

HG_higlightIDCs = {
	private ["_display","_IDCsArray","_slotArray","_j","_i","_selectedItemSlotIDCs"];

	_display = _this select 0;
	_IDCsArray = _this select 1;
	_selectedItemSlotIDCs = _this select 2;

	for "_i" from 0 to (count(_IDCsArray)-1) do {
		_slotArray = _IDCsArray select _i;

		for "_j" from 0 to (count(_slotArray)-1) do {
			if (_selectedItemSlotIDCs find (_slotArray select _j)>-1 ) then {
				_display displayctrl (_slotArray select _j);
			} else {
				_display displayctrl (_slotArray select _j);
			};
		};
	};
};

HG_returnSlotIDCs = {
	private ["_flags", "_IDCsArray", "_outputArray", "_sum", "_i"];

	_flags = _this select 0;
	_IDCsArray = _this select 1;

	_outputArray = [];
	_sum = 0;

	for "_i" from 0 to (count(_IDCsArray)-1) do {
		_sum = _sum + (_flags select _i);
		if ((_flags select _i) == 1) then {
			_outputArray set [count _outputArray, (_IDCsArray select _i)];
		};
	};

	if (_sum == 0) then {
		_outputArray = (_IDCsArray select 2);
	};

	_outputArray
};

HG_itemSlot = {
	private ["_item", "_return"];

	_item = _this;
	_return = 0;

	if (_item call HG_isWeapon) then {
		_return = getNumber(configfile >> "cfgWeapons" >> _item >> "type");
	};

	if (_item call HG_isMagazine) then {
		_return = getNumber(configfile >> "cfgMagazines" >> _item >> "type");
	};

	_return
};

HG_returnBitArray = {
	private ["_i","_bitArray","_valResult","_val","_n","_i"];

	_val = _this;
	_bitArray = [0,0,0,0,0 ,0,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
	_n = 524288;
	_i = 19;

	//for [{_i = 19},{_i >= 0}, {_i = _i - 1} ] do
	while {_i >= 0} do {
		_valResult = _val mod _n;

		if (_valResult != _val) then {
			_bitArray set [_i, 1];
		};

		_n = _n / 2;
		_val = _valResult;
		_i = _i - 1;
	};

	_bitArray
};

HG_highlightGearSlots = {
	private ["_display", "_IDCsArray", "_selectedItem", "_selectedItemSlot", "_selectedItemSlotFlags", "_selectedItemSlotIDCs"];

	_display = _this select 0;
	_IDCsArray = _this select 1;

	_selectedItem = _display call HG_lbSelectedItem;
	_selectedItemSlot = _selectedItem call HG_itemSlot;
	_selectedItemSlotFlags = _selectedItemSlot call HG_returnBitArray;
	_selectedItemSlotIDCs = [_selectedItemSlotFlags,_IDCsArray] call HG_returnSlotIDCs;
	[_display,_IDCsArray,_selectedItemSlotIDCs] call HG_higlightIDCs;
};

HG_keyActions = {
	private ["_display", "_data", "_keyLeft", "_keyRight", "_key", "_control", "_output"];

	_display = _this select 0;
	_data = _this select 1;
	_output = _this select 2;

	_keyLeft = [203,327700,327686];
	_keyRight = [205,327696,327687];
	_key = _data select 1;

	if ((_keyLeft find _key) >= 0) then {
		_control = _display displayctrl 146;
		ctrlActivate _control;
		_output = true;
	};

	if ((_keyRight find _key) >= 0) then {
		_control = _display displayctrl 147;
		ctrlActivate _control;
		_output = true;
	};
	_output
};

HG_itemPicture = {
	private ["_item","_return"];

	_item = _this;
	_return = "";

	if (_item call HG_isWeapon) then {
		_return = getText(configfile >> "cfgWeapons" >> _item >> "picture");
	};

	if (_item call HG_isMagazine) then {
		_return = getText(configfile >> "cfgMagazines" >> _item >> "picture");
	};

	_return
};

HG_itemDescription = {
	private ["_inputItem","_return","_name"];

	_inputItem = _this;
	_return = "";

	if (_inputItem call HG_isWeapon) then {
		_name = getText(configfile >> "cfgWeapons" >> _inputItem >> "descriptionShort");
		_return = (_name);
	};

	if (_inputItem call HG_isMagazine) then {
		_name = getText(configfile >> "cfgMagazines" >> _inputItem >> "descriptionShort");
		_return = (_name);
	};

	if (_inputItem call HG_isBackpack) then {
		_name = getText(configfile >> "cfgVehicles" >> _inputItem >> "descriptionShort");
		_return = ( _name);
	};

	_return
};

HG_itemName = {
	private ["_item","_return","_name"];

	_item = _this;
	_return = "";

	if (_item call HG_isWeapon) then {
		_name = getText(configfile >> "cfgWeapons" >> _item >> "displayName");
		_return = ( _name);
	};

	if (_item call HG_isMagazine) then {
		_name = getText(configfile >> "cfgMagazines" >> _item >> "displayName");
		_return = ( _name);
	};

	if (_item call HG_isBackpack) then {
		_name = getText(configfile >> "cfgVehicles" >> _item >> "displayName");
		_return = ( _name);
	};

	_return
};

HG_displayItemIcon = {
	private ["_display","_selectedItem","_itemPicturePath","_pictureControl"];

	_display = _this;
	_selectedItem = _display call HG_lbSelectedItem;
	_itemPicturePath = _selectedItem call HG_itemPicture;
	_pictureControl = _display displayctrl 1104;
	_pictureControl ctrlSetText  _itemPicturePath;
};

HG_displayItemDescription = {
	private ["_display","_descriptionControl","_selectedItemDescription","_selectedItemN"];

	_display = _this;
	_selectedItemN = _display call HG_lbSelectedItem;
	_selectedItemDescription = _selectedItemN call HG_itemDescription;
	_descriptionControl = _display displayctrl 1106;
	_descriptionControl ctrlSetStructuredText parseText(_selectedItemDescription);
};

HG_displayItemName = {
	private ["_display", "_selectedItem", "_itemName", "_nameControl"];

	_display = _this;
	_selectedItem = _display call HG_lbSelectedItem;
	_itemName = _selectedItem call HG_itemName;
	_nameControl = _display displayctrl 1101;
	_nameControl ctrlSetText _itemName;
};

HG_updateOnBack = {
	private ["_display","_onBackCtrl"];

	_display = _this;
	_onBackCtrl = _display displayCtrl 1209;

	if (dayz_onBack != "") then {
		_onBackCtrl ctrlSetText (dayz_onBack call HG_itemPicture);
	} else {
		_onBackCtrl ctrlSetText "";
	};
};

//_bitArray = [0,0,0,0,0 ,0,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
/*
#define WeaponNoSlot		0	// dummy weapons
#define WeaponSlotPrimary	1	// primary weapons
#define WeaponSlotSecondary	4	// secondary weapons
#define WeaponSlotHandGun	2	// HandGun
#define WeaponSlotHandGunItem	16 // HandGun magazines
#define WeaponSlotItem		256	// items
#define WeaponSlotBinocular	4096	// binocular
#define WeaponHardMounted	65536
#define WeaponSlotInventory 131072 // inventory items
*/

//Not used at the moment
/*
HG_setFilterGlobals = {
	private "_activeFilter";

	_activeFilter  = _this;
	IGUI_GEAR_filterPrimaryWeapon = (_activeFilter select 0);
	IGUI_GEAR_filterSecondaryWeapon = (_activeFilter select 1);
	IGUI_GEAR_filterAmmo = (_activeFilter select 2);
	IGUI_GEAR_filterBinocular = (_activeFilter select 3);
	IGUI_GEAR_filterInventory = (_activeFilter select 4);
	IGUI_GEAR_filterPistols = (_activeFilter select 5);
	IGUI_GEAR_filterPistolAmmo = (_activeFilter select 6);
};

//1201
HG_highlightFilterIcons = {
	private ["_i", "_control", "_display"];

	_display = _this;

	for "_i" from 0 to 5 do {
		_control = _display displayctrl (1200 + _i);
		_control ctrlSetTextColor 	[0.6000,0.8392,0.4706,1.0];
	};

	_control = _display displayctrl (1200 + _this);
	_control ctrlSetTextColor 	[1,1,1,1];
};

HG_matchesFilter = {
	private ["_itemValue","_output"];

	_itemValue = _this;
	_output = false;

	if (_itemValue ==  1 && {IGUI_GEAR_filterPrimaryWeapon}) then {
		_output = true;
	};

	if (_itemValue ==  5 && {IGUI_GEAR_filterPrimaryWeapon}) then {
		_output = true;
	};

	if (_itemValue ==  4 && {IGUI_GEAR_filterSecondaryWeapon}) then {
		_output = true;
	};

	if (_itemValue ==  2 && {IGUI_GEAR_filterPistols}) then {
		_output = true;
	};

	if (_itemValue ==  16 && {IGUI_GEAR_filterPistolAmmo}) then {
		_output = true;
	};

	if (_itemValue ==  131072 && {IGUI_GEAR_filterInventory}) then {
		_output = true;
	};

	if (_itemValue ==  512 && {IGUI_GEAR_filterAmmo}) then {
		_output = true;
	};

	if (_itemValue ==  256 && {IGUI_GEAR_filterAmmo}) then {
		_output = true;
	};

	if (_itemValue ==  4096 && {IGUI_GEAR_filterBinocular}) then {
		_output = true;
	};

	_output
};

HG_filterItems = {
	private ["_display", "_deleteIndexes", "_lbcontrol", "_n", "_j", "_i", "_item", "_itemType"];

	_display = _this;
	_deleteIndexes = [];
	_lbcontrol = _display displayctrl 105;
	_n = (lnbSize _lbcontrol) select 0;
	_j = 0;
	_i = _n;

	while {_i >= 0} do {
		_item = _lbcontrol lnbData [_i,1];
		_itemType = _item call HG_itemSlot;

		if (_itemType call HG_matchesFilter) then {
			_j = _j + 1;
			_deleteIndexes set [(_j-1), _i];
		};
		_i = _i - 1;
	};

	LB_CTRL = _lbcontrol;

	{
		_lbcontrol lnbDeleteRow _x;
	} count _deleteIndexes;
};
*/
