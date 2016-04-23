/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.00
@date 20101006
*****************************************************************************/

#include "R3F_TIRED_Configuration.sqf"

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
R3F_TIRED_FNCT_DoBlackVanish = {
	if (!r_fracture_legs) then {
		player setHit["legs",1];
		r_fracture_legs = true;
	};
	localize "STR_R3F_WEIGHT_Overburdened" call dayz_rollingMessages;
};

