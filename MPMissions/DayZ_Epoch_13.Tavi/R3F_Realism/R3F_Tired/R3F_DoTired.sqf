/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.02
@date 20101011
*****************************************************************************/

#include "R3F_TIRED_Configuration.cfg"

private ["_level", "_n", "_s"];

//_voil = [] call R3F_TIRED_FNCT_MkVoile;
//[_voil,1] call R3F_TIRED_FNCT_Voile_Noir;

_n = 0;
_posATL = 0;

#ifdef R3F_TIRED_CSV_EXPORT
_s = format["""Duree"",""Distance From"",""Distance To"",""Vitesse"",""Fatigue"",""Black Level"",""poids"",""Counter"""];
_s call FNC_PrintToRPT;
#endif

R3F_TIRED_Accumulator = 0;
sleep 1;
_level = 1;

while {true} do {

	R3F_TIRED_POIDS_TOTAL_PLAYER= R3F_Weight + R3F_TIRED_WEIGHT_PLAYER_EMPTY;

	if (R3F_weight < R3F_TIRED_WEIGHT_LEVEL3 )then {
		if (r3f_weight < R3F_TIRED_WEIGHT_LEVEL2) then {
			if (r3f_weight < R3F_TIRED_WEIGHT_LEVEL1 ) then {
				R3F_TIRED_Ratio_Overweight = R3F_TIRED_WEIGHT_RATIO1;
			} else {
				R3F_TIRED_Ratio_Overweight = R3F_TIRED_WEIGHT_RATIO2;
			};			
		} else {
			R3F_TIRED_Ratio_Overweight = R3F_TIRED_WEIGHT_RATIO3;
		};		
	} else {	
		R3F_TIRED_Ratio_Overweight = R3F_TIRED_WEIGHT_RATIO4;
	};	
		 
	if (alive player) then {	
		switch (toArray (animationState player) select 5) do {
			case 112: {
				R3F_TIRED_Ratio_Position = R3F_TIRED_DOWN_LEVEL;
			};
			case 107:{
				R3F_TIRED_Ratio_Position=R3F_TIRED_KNEE_LEVEL;
			};
			case 101:{
				R3F_TIRED_Ratio_Position = R3F_TIRED_UP_LEVEL;
			};
		};
	
		R3F_TIRED_vitesse_de_mon_joueur = [0,0,0] distance velocity player;	
		R3F_TIRED_coeff_mon_elevation_en_z = 0 max ((velocity player select 2) / R3F_TIRED_WEIGHT_CLIMB_FACTOR);
		
		_posATL = (getPosATL player) select 2;
		
		
		if((vehicle player == player) && (_posATL < 100)) then {
			R3F_TIRED_Accumulator =  R3F_TIRED_Accumulator 	
					+ (R3F_TIRED_POIDS_TOTAL_PLAYER * R3F_TIRED_vitesse_de_mon_joueur * R3F_TIRED_Ratio_Position * R3F_TIRED_WEIGHT_SPEED_RATIO*R3F_TIRED_Ratio_Overweight) 
					+ (R3F_TIRED_POIDS_TOTAL_PLAYER * R3F_TIRED_coeff_mon_elevation_en_z * R3F_TIRED_WEIGHT_LEVEL2);
				
		};
		
		R3F_TIRED_Accumulator = 0 max (R3F_TIRED_Accumulator - R3F_TIRED_Ratio_Recovery);
		
		_level = ((R3F_TIRED_Accumulator / R3F_TIRED_BLACKOUT_LEVEL) *  100);
		_level = 0 max (1 - (_level / 100));
		
		#ifdef R3F_TIRED_DEBUG
			hintsilent format["Fatique : %1/%2\nBlack level : %3\nPoids total : %4\n Poids armement : %5",
				R3F_TIRED_Accumulator,
				R3F_TIRED_BLACKOUT_LEVEL,
				_level,
				R3F_TIRED_POIDS_TOTAL_PLAYER,
				R3F_Weight];
		#endif
		
		[_level] call R3F_TIRED_FNCT_Voile_Noir;
		
		if (R3F_TIRED_Accumulator  > R3F_TIRED_BLACKOUT_LEVEL and scriptDone R3F_TIRED_Handle_Blackout_Effect and scriptDone R3F_TIRED_Handle_Blur_Effect) then {
			R3F_TIRED_Handle_Blackout_Effect = [] spawn R3F_TIRED_FNCT_DoBlackVanish;
		};
	} else {	
		R3F_TIRED_Accumulator = 0;
	};

	if (R3F_TIRED_GLOBAL_TIRING 
		&& R3F_TIRED_vitesse_de_mon_joueur > 4 
		&& R3F_TIRED_Ratio_Recovery > R3F_TIRED_RATIO_RECOVERING
		) then {
			R3F_TIRED_Counter_Time= R3F_TIRED_Counter_Time + 1;
	};


	#ifdef R3F_TIRED_CSV_EXPORT
	_s = format["%1,%2,%3,%4,%5,%6,%7,%8",
			_n,
			(player distance flag_start),
			(player distance flag_end),
			R3F_TIRED_vitesse_de_mon_joueur,
			R3F_TIRED_Accumulator,
			_level,
			R3F_Weight,
			R3F_TIRED_Counter_Time];
			
			
	_s call FNC_PrintToRPT;
	#endif
	
	if ((R3F_TIRED_Counter_Time > R3F_TIRED_TIME_RECOVERING)) then {
		R3F_TIRED_Ratio_Recovery = R3F_TIRED_Ratio_Recovery - 1;
		R3F_TIRED_Counter_Time = 0;
	};

	sleep 1;
	_n = _n + 1;
};

//[_voil] call R3F_TIRED_FNCT_Effect_Off;

