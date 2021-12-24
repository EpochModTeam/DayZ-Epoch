///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Epoch Snap Building
//
//	Author:		Victor the Cleaner
//	Date:		December 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _distFromPlot	= _this select 0;
local _radius		= _this select 1;
local _snappingEnabled	= _this select 2;
local _vectoringEnabled	= _this select 3;
local _snapList		= _this select 4;
local _object		= _this select 5;

local _header		= "<img align='left' size='1' image='\z\addons\dayz_code\gui\EpochSnapBuilding.paa'></img><br/>";	
local _format		= "<t align='left' size='0.4' font='Zeppelin33'>";
local _COL		= "<t shadow='2' color=";
local _WHT		= _COL + "'#E0E0E0'>";		// white	'#FFFFFF'
local _GRN		= _COL + "'#20E020'>";		// green
local _RED		= _COL + "'#FF0000'>";		// red
local _ORA		= _COL + "'#FF8800'>";		// orange
local _GRY		= _COL + "'#808080'>";		// greyed out
local _TRN		= _format + "<t shadow='0' color='#00000000'>";	// transparent
local _VEC		= [_GRY, _WHT] select _vectoringEnabled;	// initial text color
local _END		= "</t>";			// end of segment
local _NL		= _END + "<br/>";		// new line
local _spacing		= _TRN + "." + _NL;		// blank line

local _strPitch		= localize "STR_EPOCH_TUT_PITCH";
local _strBank		= localize "STR_EPOCH_TUT_BANK";
local _strRotate	= localize "STR_EPOCH_TUT_ROTATE";
local _tab		= localize "STR_EPOCH_TUT_KEY_TAB";
local _PgUp		= localize "STR_EPOCH_TUT_KEY_PGUP";
local _PgDn		= localize "STR_EPOCH_TUT_KEY_PGDN";
local _hyphen		= _WHT + "-" + _ORA;
local _slash		= _WHT + "/" + _ORA;
local _colon		= _WHT + ": ";
local _pipe		= _WHT + " | " + _ORA;
local _na		= _GRY + "-";
local _OBR		= _ORA + "[";
local _WBR		= _WHT + "]";
local _DBR		= "] [";
local _BRW		= "] " + _WHT;
local _hpsp		= _hyphen + _PgUp + _slash + _PgDn + _BRW;
local _degKeys		= toArray (localize "STR_EPOCH_TUT_ADJ_DEGREES_KEYS");
local _decrease		= toString [_degKeys select 0];
local _increase		= toString [_degKeys select 1];

local _HK = _OBR + _tab + _DBR + localize "STR_EPOCH_TUT_KEY_SHIFT" + _hyphen + _tab + _BRW	+ localize "STR_EPOCH_TUT_SNAP_NEXT_PREV"	+ _NL;
_HK = _HK + _OBR + _PgUp + _DBR + _PgDn + _BRW							+ localize "STR_EPOCH_TUT_HEIGHT10"		+ _NL;
_HK = _HK + _OBR + localize "STR_EPOCH_TUT_KEY_CTRL" + _hpsp					+ localize "STR_EPOCH_TUT_HEIGHT1"		+ _NL;
_HK = _HK + _OBR + localize "STR_EPOCH_TUT_KEY_ALT"  + _hpsp					+ localize "STR_EPOCH_TUT_HEIGHT100"		+ _NL;
_HK = _HK + _OBR + localize "STR_EPOCH_TUT_KEY_ARROWS" + _BRW					+ _strPitch + " / " + _strBank			+ _NL;
_HK = _HK + _ORA + "[Q] [E] "									+ _WHT + _strRotate				+ _NL;
_HK = _HK + _OBR + _decrease + _DBR + _increase + _BRW						+ localize "STR_EPOCH_TUT_ADJ_DEGREES"		+ _NL;
_HK = _HK + _spacing;
_HK = _HK + _ORA + "[L] "									+ _WHT + localize "STR_EPOCH_TUT_LOCAL" + " [%1"+ _NL;
_HK = _HK + _ORA + "[T] "									+ _VEC + localize "STR_EPOCH_TUT_TERRAIN"	+ _NL;
_HK = _HK + _ORA + "[P] "									+ _WHT + localize "STR_EPOCH_TUT_BOUNDARY"	+ _NL;
_HK = _HK + _ORA + "[F] "									+ _WHT + localize "STR_EPOCH_TUT_RELEASE_HOLD"	+ _NL;
_HK = _HK + _ORA + "[H] "									+ _WHT + localize "STR_EPOCH_TUT_HIDE_PANEL"	+ _NL;
_HK = _HK + _spacing;
local _H2 = _OBR + localize "STR_EPOCH_TUT_KEY_ESC" + _BRW					+ localize "STR_EPOCH_TUT_CANCEL"		+ _NL;
_H2 = _H2 + _OBR + localize "STR_EPOCH_TUT_KEY_BACKSPACE" + _BRW				+ localize "STR_EPOCH_TUT_RESET"		+ _NL;
_H2 = _H2 + _OBR + localize "STR_EPOCH_TUT_KEY_SPACEBAR" + _BRW					+ localize "STR_EPOCH_TUT_BUILD"		+ _END;

local _distance = 0;
if (_distFromPlot != "0") then {
	_distance	= _na;
	_radius		= _na;
} else {
	_radius = (str _radius) + "m";
};

local _snapState	= localize "STR_EPOCH_TUT_DISABLED";
local _SNP		= _GRY;						// initial text color
local _snapText		= "";
local _snapRange	= "";
local _snapMinIdx	= 0;
local _snapMaxIdx	= (count _snapList) - 3;			// 0-based index max
local _pitch		= 0;
local _bank		= 0;
local _rotate		= 0;
local _localModeOn	= _GRN	+ (localize "STR_EPOCH_TUT_LOCAL_ON")	+ _WBR;
local _localModeOff	= _ORA	+ (localize "STR_EPOCH_TUT_LOCAL_OFF")	+ _WBR;
local _localText	= "";

local _tutDistance	= _ORA + localize "STR_EPOCH_TUT_DISTANCE" + _colon + "%1" + _pipe + localize "STR_EPOCH_TUT_RADIUS" + _colon + "%2" + _NL;
local _tutSnapping	= _ORA + localize "STR_EPOCH_TUT_SNAPPING" + _colon + "[%1" + _WHT + "]%2" + _NL;
local _tutVectoring	= _ORA + _strPitch + _colon + "%1" + _pipe + _strBank + _colon + "%2" + _pipe + _strRotate + _colon + "%3" + _NL;
local _tutDegrees	= _ORA + localize "STR_EPOCH_TUT_DEGREES" + _colon + "%1" + _NL;

while {1==1} do {

	if (!dayz_actionInProgress || DZE_nowBuilding) exitWith {};

	if (!DZE_HIDE_PANEL) then {

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//					Distance From Plot
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (_distFromPlot == "0") then {
			_distance = [distanceFromPlot, 1] call BIS_fnc_cutDecimals;
			if (_distance - (floor _distance) == 0) then {
				_distance = (str _distance) + ".0";
			};
		};

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//						Snapping
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (_snappingEnabled && !skipUpdates) then {
		
			local _OFF	= snapActionState	== localize "STR_EPOCH_ACTION_SNAP_OFF";
			local _ON	= snapActionState	== localize "STR_EPOCH_ACTION_SNAP_ON";
			local _SELECT	= snapActionStateSelect	== localize "STR_EPOCH_ACTION_SNAP_POINT_MANUAL";
			local _MANUAL	= _ON && _SELECT;

			call {
				if (_OFF)	exitWith {DZE_SnapTabIdx = 0; DZE_SnapSelIdx = -2;};	// OFF
				if (_ON)	exitWith {DZE_SnapTabIdx = 1; DZE_SnapSelIdx = -1;};	// ON/Auto
				if (_SELECT)	exitWith {DZE_SnapTabIdx = DZE_SnapSelIdx + 2;};	// Selected
			};

			_snapState = _snapList select DZE_SnapTabIdx;

			call {
				if (_MANUAL)			exitWith {_SNP = _GRN; _snapState = snapActionStateSelect;};	// Manual (Action Menu only)
				if (DZE_SnapTabIdx == 0)	exitWith {_SNP = _ORA;};					// OFF
				if (DZE_SnapTabIdx == 1)	exitWith {_SNP = _GRN;};					// Auto
				if (DZE_SnapTabIdx > 1)		exitWith {_SNP = _GRN;};					// Selected
			};

			_snapRange = "";

			if ((DZE_SnapSelIdx >= _snapMinIdx) && (DZE_SnapSelIdx <= _snapMaxIdx)) then {
				_snapRange = " [ " + _GRN + "%1" + _WHT + " / %2 ]";
				_snapRange = format[_snapRange, DZE_SnapSelIdx + 1, _snapMaxIdx + 1];
			};
		};

		_snapText = _SNP + _snapState;

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//						Vectoring
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		_pitch	= _VEC + str ([DZE_memForBack, 2] call BIS_fnc_cutDecimals);
		_bank	= _VEC + str ([DZE_memLeftRight, 2] call BIS_fnc_cutDecimals);

		if (!skipUpdates) then {
			_rotate = [DZE_memDir, 2] call BIS_fnc_cutDecimals;
		};

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//						Local Mode
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (DZE_LOCAL_MODE) then {
			_localText = _localModeOn;
		} else {
			_localText = _localModeOff;
		};

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//						Dynamic Text
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		local _txt = _header + _format;

		_txt = _txt + format[_tutDistance,	_distance, _radius];
		_txt = _txt + format[_tutSnapping,	_snapText, _snapRange];
		_txt = _txt + _spacing;
		_txt = _txt + format[_tutVectoring,	_pitch, _bank, _rotate];
		_txt = _txt + format[_tutDegrees,	DZE_curDegree];
		_txt = _txt + _spacing;
		_txt = _txt + format[_HK, _localText];	// hotkeys
		_txt = _txt + _H2;

		local _screenX	= 0.67 * safezoneW + safezoneX;
		local _screenY	= 0.46 * safezoneH + safezoneY;
		local _duration	= 0.1;
		local _fadeIn	= 0;
		local _delta	= 0;
		local _rscLayer	= 17;

		[_txt, _screenX, _screenY, _duration, _fadeIn, _delta, _rscLayer] spawn BIS_fnc_dynamicText;

	};

	uiSleep 0.08;
};
