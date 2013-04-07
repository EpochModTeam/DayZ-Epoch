/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.02
@date 20101018
*****************************************************************************/

call compile preprocessFile "R3F_Realism\R3F_Weight\R3F_Weight_Fnct.sqf";

_void = [] execVM "R3F_Realism\R3F_Weight\R3F_DoWeight.sqf";