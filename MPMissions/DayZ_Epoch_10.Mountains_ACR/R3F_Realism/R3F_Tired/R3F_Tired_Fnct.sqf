/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.00
@date 20101006
*****************************************************************************/

#include "R3F_TIRED_Configuration.cfg"

FNC_PrintToRPT = {
	diag_log text _this;
};

R3F_TIRED_FNCT_Wait4Effect = {
	private ["_delay","_st"];
	_delay = _this select 0;
	_st = time;
	while {((time - _st) < _delay) && (alive player)} do 
	{
		sleep 0.100;
	};
};

R3F_TIRED_FNCT_Effect_Off = {
	private ["_handle"];
	_handle = _this select 0;
	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
	sleep 0.02;
};

R3F_TIRED_FNCT_MkVoile = {
	private ["_handle"];
	if (ppEffectCommitted "ColorCorrections") then {
		_handle = ppEffectCreate ["ColorCorrections", 1515];
		_handle ppEffectEnable true;
		_handle;
	}else{
		-1;	
	};
};

R3F_TIRED_FNCT_Voile_Noir = {
	private ["_handle","_level"];
	_handle = _this select 0;
	_level = _this select 1;
	_handle ppEffectAdjust [
		_level,
		_level,
		0,
		[0,0,0,0],
		[1.30,1.30,1.30,1.30],
		[0,0,0,0]
		];
	_handle ppEffectCommit 0.1;
	waituntil{ppEffectCommitted "ColorCorrections";};
	if(_level < R3F_TIRED_SHORTNESS_THRESHOLD ) then{
		enableCamShake true;
		addCamShake [5-_level, 1, 2];
	}else{
		enableCamShake false;
	};
};

R3F_TIRED_FNCT_DoBlackVanish = {
	titleText ["", "BLACK OUT",4];
	player playMoveNow "AmovPpneMstpSrasWrflDnon";
	0 fadeSound 0;
	[R3F_TIRED_UNCONSCIOUSNESS_DURATION] call R3F_TIRED_FNCT_Wait4Effect;
	if (alive player) then {
		titleText ["", "BLACK IN",4];
		0 fadeSound 1;
	};
};

