/*
		written by Bohemia Interactive
		modified with permission by DayZ Mod Team
*/

disableSerialization;
private ["_control","_display","_temp","_event","_data","_x","_stopTheKey","_keyLeft","_i","_index","_size","_indices","_lbcontrol"];
private ["_key","_keyRight","_keyTop","_keyBottom","_secondColumn","_activateControl","_output","_doFilter"];
private ["_event","_data","_display","_control","_primaryWeaponControl","_IDCsArray","_lbIDC","_lbColumn","_sum"];
/*
IGUI_GEAR_filterPrimaryWeapon = (_activeFilter select 0);
IGUI_GEAR_filterSecondaryWeapon = (_activeFilter select 1);
IGUI_GEAR_filterAmmo = (_activeFilter select 2);
IGUI_GEAR_filterBinocular = (_activeFilter select 3);
IGUI_GEAR_filterInventory = (_activeFilter select 4);
IGUI_GEAR_filterPistols = (_activeFilter select 5);
IGUI_GEAR_filterPistolAmmo = (_activeFilter select 6);
*/

_filterSets = [
	//Primary Weapon, Secondary weapon, Ammo, Binocular, Inventory, Pistols,  Pistols Ammo
	[false,false,false,false,false,false,false],
	[false,true,false,true,true,true,true],
	[true,false,false,true,true,true,true],
	[true,true,true,false,false,true,true], // all but pistol, pistols ammo
	[true,true,true,true,true,true,true]
];

_icons = [
	"\ca\ui\data\igui_buyUnit_filter_1_ca.paa",
	"\ca\ui\data\igui_buyUnit_filter_2_ca.paa",
	"\ca\ui\data\igui_buyUnit_filter_3_ca.paa",
	"\ca\ui\data\igui_buyUnit_filter_4_ca.paa",
	"\ca\ui\data\igui_buyUnit_filter_5_ca.paa"
];

_event = _this select 1;
_data = _this select 0;




/*-------------------------------------------*/
if (typeName(_data select 0) == "DISPLAY") then {
	_display = (_data select 0);
};

if (typeName(_data select 0) == "CONTROL") then {
	_control = (_data select 0);
	_display = ctrlParent _control;
};


/*-------------------------------------------*/
_lbSelectedItem = {
	private ["_index","_selectedItem","_n"];
	_lbcontrol = _display displayctrl _lbIDC;
	_index = lbCurSel _lbcontrol;
	_selectedItem = "";
	_n = 0;

	while {(_selectedItem == "")&&(_n<6)} do {
		_selectedItem = _lbcontrol lnbData [_index,1];
		uisleep 0.001;
		_n = _n + 1;
	};

	_selectedItem;
};

_arrowsEnable = {
	private ["_index","_selectedItem"];

	_lbcontrol = _display displayctrl _lbIDC;

	_controlLeftArrow = _display displayctrl 147;
	_controlRightArrow = _display displayctrl 146;
	_index = lbCurSel _lbcontrol;
	_selectedItemCountLeft = _lbcontrol lnbText [_index,0];
	_selectedItemCountRight = _lbcontrol lnbText [_index,2];
};


_isWeapon = {
	private ["_item","_return"];
	_item = _this select 0;
	_return = (str(configfile >> "cfgWeapons" >> _item) != "");
	_return;
};

_isMagazine = {
	private ["_item","_return"];
	_item = _this select 0;
	_return = (str(configfile >> "cfgMagazines" >> _item) != "");
	_return;
};

_IDCsArray = [
	[107],
	[121],
	[108],
	[107],
	[122,123,124,125,126,127,128,129],
	[107],
	[107],
	[107],
	[109,110,111,112,113,114,115,116,117,118,119,120],
	[109,110,111,112,113,114,115,116,117,118,119,120],
	[108],
	[107],
	[130,131],
	[107],
	[107],
	[107],
	[107],
	[134,135,136,137,138,139,140,141,142,143,144,145],
	[107],
	[107],
	[107],
	[107]
];

_showAllIDCs = {
	private ["_slotArray","_j","_i"];
	for [{_i=0},{_i<count(_IDCsArray)}, {_i = _i + 1} ] do {
		_slotArray = _IDCsArray select _i;

		for [{_j=0},{_j<count(_slotArray)}, {_j = _j + 1} ] do {
			_primaryWeaponControl = _display displayctrl (_slotArray select _j);
			//_primaryWeaponControl ctrlSetFade 0.5;
			//_primaryWeaponControl ctrlCommit 0.0;
		};
	};
};

_higlightIDCs = {
	private ["_slotArray","_j","_i"];
	for [{_i=0},{_i<count(_IDCsArray)}, {_i = _i + 1} ] do {
		_slotArray = _IDCsArray select _i;

		for [{_j=0},{_j<count(_slotArray)}, {_j = _j + 1} ] do {
			if (_selectedItemSlotIDCs find  (_slotArray select _j)>-1 ) then {
				_itemSlot = _display displayctrl (_slotArray select _j);
				//_itemSlot ctrlSetFade 0.0;
				//_itemSlot ctrlCommit 0.3;
			} else {
				_itemSlot = _display displayctrl (_slotArray select _j);
				//_itemSlot ctrlSetFade 0.5;
				//_itemSlot ctrlCommit 0.3;
			};
		};
	};

	/*
	for [{_i=0},{_i<count(_selectedItemSlotIDCs)}, {_i = _i + 1} ] do {
		_slotControl = _display displayctrl (_selectedItemSlotIDCs select _i);
		_slotControl ctrlSetFade 0;
		_slotControl ctrlCommit 0.3;
	};
	*/
};
_returnSlotIDCs = {
	_flags = (_this select 0);
	_outputArray = [];
	_sum = 0;

	for [{_i=0},{_i<count(_IDCsArray)}, {_i = _i + 1} ] do {
		_sum = _sum + (_flags select _i);
		if ((_flags select _i) == 1) then {
			_outputArray = _outputArray + (_IDCsArray select _i);
		};
	};

	if (_sum == 0) then {
		_outputArray = (_IDCsArray select 2);
	};

	_outputArray;
};

_isPrimaryWeapon = {
	_flags = (_this select 0);

	if ( (_flags select 0) == 1) then {
		true;
	} else {
		false;
	};
};

_isSecondaryWeapon = {
	_flags = (_this select 0);

	if ( (_flags select 0) == 1) then {
		true;
	} else {
		false;
	};
};

_itemSlot = {
	private ["_item", "_return"];
	_item = _this select 0;
	_return = 0;

	if ([_item] call _isWeapon) then {
		_return = getNumber(configfile >> "cfgWeapons" >> _item >> "type");
	};

	if ([_item] call _isMagazine) then {
		_return = getNumber(configfile >> "cfgMagazines" >> _item >> "type");
	};

	_return;
};

_highlightIDCs = {
	_hlIDCs = _this select 0;

	for [{_i=0},{_i<count(_hlIDCs)}, {_i = _i + 1} ] do {

	};
};

_returnBitArray = {
private ["_i","_bitArray","_valResult","_val","_n","_i"];
	_val = _this select 0;
	_bitArray = [0,0,0,0,0 ,0,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
	_n = 524288;

	for [{_i=19},{_i>=0}, {_i = _i - 1} ] do
	{
		_valResult = _val mod _n;

		if (_valResult != _val) then {
			_bitArray set [_i, 1];
		};

		_n = _n / 2;
		_val = _valResult;
	};

	_bitArray
};

_highlightGearSlots ={
	//[] call _showAllIDCs;
	_selectedItem = [] call _lbSelectedItem;
	_selectedItemSlot = [_selectedItem] call _itemSlot;
	_selectedItemSlotFlags = [_selectedItemSlot] call _returnBitArray;
	_selectedItemSlotIDCs = [_selectedItemSlotFlags] call _returnSlotIDCs;
	[_selectedItemSlotIDCs] call _higlightIDCs;
};

_weaponsLBSetFocus = {
	_lbcontrol = _display displayctrl _lbIDC;
	/** Temporary disabled to prevent bug news:hov5k4$f6f$1@new-server.localdomain **/
	//ctrlSetFocus _lbcontrol;
};

_setFilterIcon = {
	_ctrlIcon = _display displayctrl 148;
	_ctrlIcon ctrlSetText (_icons select IGUI_GEAR_activeFilter);
};

_keyActions = {
	_keyLeft = [203,327700,327686];
	_keyRight = [205,327696,327687];
	_keyTop = [200,327697,327684];
	_keyBottom = [208,327701,327685];
	_key = _data select 1;

	if ((_keyLeft find _key)>=0) then {
		_control = _display displayctrl 146;
		ctrlActivate _control;
		_output = true;
	};

	if ((_keyRight find _key)>=0) then {
		_control = _display displayctrl 147;
		ctrlActivate _control;
		_output = true;
	};

	if((_keyTop find _key)>=0)then {

	};

	if((_keyBottom find _key)>=0)then {

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

_setFilterGlobals = {
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
_highlightFilterIcons = {
	for [{_i=0},{_i<6}, {_i = _i + 1} ] do {
		_control = _display displayctrl (1200 + _i);
		_control ctrlSetTextColor 	[0.6000,0.8392,0.4706,1.0];
	};

	_control = _display displayctrl (1200 + _this);
	_control ctrlSetTextColor 	[1,1,1,1];
};

_matchesFilter = {
	private ["_itemValue","_itemBitArray"];
	_output = false;

	_itemValue = _this select 0;
	_itemBitArray = [_itemValue] call _returnBitArray;

	if (_itemValue ==  1 && IGUI_GEAR_filterPrimaryWeapon) then {
		_output = true;
	};

	if (_itemValue ==  5 && IGUI_GEAR_filterPrimaryWeapon) then {
		_output = true;
	};

	if (_itemValue ==  4 && IGUI_GEAR_filterSecondaryWeapon) then {
		_output = true;
	};

	if (_itemValue ==  2 && IGUI_GEAR_filterPistols) then {
		_output = true;
	};

	if (_itemValue ==  16 && IGUI_GEAR_filterPistolAmmo) then {
		_output = true;
	};

	if (_itemValue ==  131072 && IGUI_GEAR_filterInventory) then {
		_output = true;
	};

	if (_itemValue ==  512 && IGUI_GEAR_filterAmmo) then {
		_output = true;
	};

	if (_itemValue ==  256 && IGUI_GEAR_filterAmmo) then {
		_output = true;
	};

	if (_itemValue ==  4096 && IGUI_GEAR_filterBinocular) then {
		_output = true;
	};

	_output;
};

_filterItems = {
	private ["_n","_itemType"];
	_deleteIndexes = [];
	_lbcontrol = _display displayctrl _lbIDC;
	_n = (lnbSize _lbcontrol) select 0;
	_j = 0;

	for [{_i=_n},{_i>=0}, {_i = _i - 1} ] do {
		_item = _lbcontrol lnbData [_i,1];
		_itemType = [_item] call _itemSlot;

		if ([_itemType] call _matchesFilter) then {
			_j = _j + 1;
			_deleteIndexes set [(_j-1), _i];
		};
	};

	LB_CTRL = _lbcontrol;

	{
		_lbcontrol lnbDeleteRow _x;
	} forEach _deleteIndexes;
};

_itemPicture = {
	private ["_item"];
	_item = _this select 0;
	_return = "";

	if ([_item] call _isWeapon) then {
		_return = getText(configfile >> "cfgWeapons" >> _item >> "picture");
	};

	if ([_item] call _isMagazine) then {
		_return = getText(configfile >> "cfgMagazines" >> _item >> "picture");
	};

	_return;
};

_itemDescription = {
private ["_inputItem","_return"];
	_inputItem = _this select 0;
	_return = "";

	if ([_inputItem] call _isWeapon) then {
		_name = getText(configfile >> "cfgWeapons" >> _inputItem >> "descriptionShort");
		_return = (_name);
	};

	if ([_inputItem] call _isMagazine) then {
		_name = getText(configfile >> "cfgMagazines" >> _inputItem >> "descriptionShort");
		_return = (_name);
	};

	_return;
};

_itemName = {
	private ["_item"];
	_item = _this select 0;
	_return = "";

	if ([_item] call _isWeapon) then {
		_name = getText(configfile >> "cfgWeapons" >> _item >> "displayName");
		_return = ( _name);
	};

	if ([_item] call _isMagazine) then {
		_name = getText(configfile >> "cfgMagazines" >> _item >> "displayName");
		_return = ( _name);
	};

	_return;
};

_displayItemIcon = {
	private ["_selectedItem","_itemPicturePath"];
	_selectedItem = [] call _lbSelectedItem;
	_itemPicturePath = [_selectedItem] call _itemPicture;
	_pictureControl = _display displayctrl 1104;
	_pictureControl ctrlSetText  _itemPicturePath;
};

_displayItemDescription = {
	private ["_descriptionControl","_selectedItemDescription","_selectedItemN"];
	_selectedItemN = [] call _lbSelectedItem;
	_selectedItemDescription = [_selectedItemN] call _itemDescription;
	_descriptionControl = _display displayctrl 1106;
	_descriptionControl ctrlSetStructuredText  parseText(_selectedItemDescription);
};

_displayItemName = {
	private ["_nameControl","_itemDescription"];
	_selectedItem = [] call _lbSelectedItem;
	_itemName = [_selectedItem] call _itemName;
	_nameControl = _display displayctrl 1101;
	_nameControl ctrlSetText _itemName;
};

_updateOnBack = {
	private ["_onBackCtrl"];
	_onBackCtrl = _display displayCtrl 1209;

	if (dayz_onBack != "") then {
		_onBackCtrl ctrlSetText ([dayz_onBack] call _itemPicture);
	} else {
		_onBackCtrl ctrlSetText "";
	};
};

_output = true;
_lbIDC = 105;

switch _event do {
	case "initDialog": {
		[] call _showAllIDCs;
	};

	case "onLoad": {
		[] call _weaponsLBSetFocus;
		[] call _arrowsEnable;
		[] call _displayItemIcon;
		[] call _displayItemName;
		[] call _displayItemDescription;
		[] call _showAllIDCs;
		//[] call _arrowsEnable;
		//[] call _highlightGearSlots;
	};

	//used for buyUnits
	case "filter": {
		IGUI_GEAR_activeFilter = IGUI_GEAR_activeFilter + 1;

		if (IGUI_GEAR_activeFilter > ((count _filterSets)-1 )) then {
			IGUI_GEAR_activeFilter = 0;
		};

		_doFilter = true;
	};

	//changing IGUI_GEAR_activeFilter, but not filter picture (used for buyGear)
	case "filterNotSet": {
		IGUI_GEAR_activeFilter = IGUI_GEAR_activeFilter + 1;

		if (IGUI_GEAR_activeFilter > ((count _filterSets)-1 )) then {
			IGUI_GEAR_activeFilter = 0;
		};

		//_doFilter = true;
	};

	case "filter_left": {
		IGUI_GEAR_activeFilter = IGUI_GEAR_activeFilter - 1;

		if (IGUI_GEAR_activeFilter < 0) then {
			IGUI_GEAR_activeFilter = ((count _filterSets)-1 );
		};

		_doFilter = true;
	};

	case "onFocus": {
		[] call _weaponsLBSetFocus;
		//[] call _arrowsEnable;
	};

	case "onKeyDown": {
		[] call _keyActions;
	};

	case "onLBSelChanged": {
		[] call _updateOnBack;
		[] call _displayItemIcon;
		[] call _displayItemName;
		[] call _displayItemDescription;
		//[] call _arrowsEnable;
		[] call _highlightGearSlots;
	};

	case "onKillFocus": {
		[] call _weaponsLBSetFocus;
	};

	default {

	};
};

/* Filter removed, moving to engine */
if (isNil "_doFilter") then {_doFilter = false;};
if _doFilter then {
	(_filterSets select IGUI_GEAR_activeFilter) call _setFilterGlobals;
	//[] call _filterItems;
	//[] call _setFilterIcon;
};

_output;
false;