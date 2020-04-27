/*
		written by Bohemia Interactive
		modified with permission by DayZ Mod Team
*/

disableSerialization;
private ["_doFilter","_filterSets","_event","_data","_display","_control","_IDCsArray","_output"];

/*
IGUI_GEAR_filterPrimaryWeapon = (_activeFilter select 0);
IGUI_GEAR_filterSecondaryWeapon = (_activeFilter select 1);
IGUI_GEAR_filterAmmo = (_activeFilter select 2);
IGUI_GEAR_filterBinocular = (_activeFilter select 3);
IGUI_GEAR_filterInventory = (_activeFilter select 4);
IGUI_GEAR_filterPistols = (_activeFilter select 5);
IGUI_GEAR_filterPistolAmmo = (_activeFilter select 6);
*/

/*
_filterSets = [
	//Primary Weapon, Secondary weapon, Ammo, Binocular, Inventory, Pistols,  Pistols Ammo
	[false,false,false,false,false,false,false],
	[false,true,false,true,true,true,true],
	[true,false,false,true,true,true,true],
	[true,true,true,false,false,true,true], // all but pistol, pistols ammo
	[true,true,true,true,true,true,true]
];
*/

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

_data = _this select 0;
_event = _this select 1;
_display = nil;
_output = true;
//_doFilter = false;

//diag_log [diag_ticktime, __FILE__, _this];

/*-------------------------------------------*/
if (typeName(_data select 0) == "DISPLAY") then {
	_display = (_data select 0);
};

if (typeName(_data select 0) == "CONTROL") then {
	_control = (_data select 0);
	_display = ctrlParent _control;
};


/*-------------------------------------------*/

call {
	if (_event == "onLoad") exitwith {
		_display call HG_arrowsEnable;
		_display call HG_displayItemIcon;
		_display call HG_displayItemName;
		_display call HG_displayItemDescription;
	};

	if (_event == "onKeyDown") exitwith {
		_output = [_display,_data,_output] call HG_keyActions;
	};

	if (_event == "onLBSelChanged") exitwith {
		_display call HG_updateOnBack;
		_display call HG_displayItemIcon;
		_display call HG_displayItemName;
		_display call HG_displayItemDescription;
		[_display,_IDCsArray] call HG_highlightGearSlots;
	};

	// Following checks removed, Epoch Mod no longer use this.
	/*
	//used for buyUnits
	if (_event == "filter") exitwith {
		IGUI_GEAR_activeFilter = IGUI_GEAR_activeFilter + 1;

		if (IGUI_GEAR_activeFilter > ((count _filterSets) - 1 )) then {
			IGUI_GEAR_activeFilter = 0;
		};

		_doFilter = true;
	};

	//changing IGUI_GEAR_activeFilter, but not filter picture (used for buyGear)
	if (_event == "filterNotSet") exitwith {
		IGUI_GEAR_activeFilter = IGUI_GEAR_activeFilter + 1;

		if (IGUI_GEAR_activeFilter > ((count _filterSets) - 1 )) then {
			IGUI_GEAR_activeFilter = 0;
		};
	};

	if (_event == "filter_left") exitwith {
		IGUI_GEAR_activeFilter = IGUI_GEAR_activeFilter - 1;

		if (IGUI_GEAR_activeFilter < 0) then {
			IGUI_GEAR_activeFilter = ((count _filterSets) - 1 );
		};

		_doFilter = true;
	};*/
};

/* Filter removed, moving to engine
if (_doFilter) then {
	(_filterSets select IGUI_GEAR_activeFilter) call HG_setFilterGlobals;
};
*/

_output
