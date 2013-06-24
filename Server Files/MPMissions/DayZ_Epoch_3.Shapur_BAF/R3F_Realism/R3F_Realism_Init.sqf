/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.00
@date 20101006
*****************************************************************************/

#include "R3F_Realism_Configuration.cfg"

#ifdef R3F_REALISM_USE_WEIGHT
	_void = [] execVM "R3F_realism\R3F_Weight\R3F_DoWeight.sqf";
#endif


#ifdef R3F_REALISM_USE_TIRED
	_void = [] execVM "R3F_realism\R3F_Tired\R3F_Tired_Init.sqf";
#endif

