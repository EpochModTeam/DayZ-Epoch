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

call compile preprocessFile "R3F_realism\R3F_Tired\R3F_Tired_Fnct.sqf";

R3F_Weight = 0;

R3F_TIRED_Ratio_Position = 0;
R3F_TIRED_Accumulator = 0;
R3F_TIRED_Handle_Blur_Effect = [] spawn {}; 
R3F_TIRED_Handle_Blackout_Effect = [] spawn {};
R3F_TIRED_Counter_Time = 0;
R3F_TIRED_Ratio_Recovery = R3F_TIRED_RATIO_RECOVERING;
R3F_TIRED_Ratio_Overweight = 1;

_void = [] execVM "R3F_Realism\R3F_Tired\R3F_DoTired.sqf";