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

R3F_TIRED_FNCT_Voile_Noir = {
	_level = _this select 0;
	if(_level < R3F_TIRED_SHORTNESS_THRESHOLD ) then{
		playSound "heartbeat_1";
		addCamShake [2, 1, 25];
	};
	
};
R3F_TIRED_FNCT_WarnBeforeBlackout = {
	[player,0.1] call fnc_usec_damageUnconscious;
	cutText ["You are over burdened.", "PLAIN DOWN"];
};
R3F_TIRED_FNCT_DoBlackVanish = {
	[player,0.1] call fnc_usec_damageUnconscious;
	cutText ["You are over burdened.", "PLAIN DOWN"];
};

