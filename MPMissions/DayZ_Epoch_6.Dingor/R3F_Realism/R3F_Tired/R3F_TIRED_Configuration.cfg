/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.00
@date 20101006
*****************************************************************************/

//Uncomment to write in arma.rpt a csv file for excel to trace some graphics
// #define R3F_TIRED_CSV_EXPORT

//Uncomment to show some informations in game
// #define R3F_TIRED_DEBUG

//adjustment player weight with helmet jacket Rangers  Light equipment (not weapons)
#define R3F_TIRED_WEIGHT_PLAYER_EMPTY 90

//Predefined models for an easy setting
// uncomment only one setting
// #define R3F_TIRED_SET_MODE_EASY
#define R3F_TIRED_SET_MODE_UBEREASY
//#define R3F_TIRED_SET_MODE_NORMAL
//#define R3F_TIRED_SET_MODE_HARD

//adjustment weight * speed player
#define R3F_TIRED_WEIGHT_SPEED_RATIO 1


#ifdef R3F_TIRED_SET_MODE_UBEREASY
	
	// adjustment onset threshold blackout effect
	#define R3F_TIRED_BLACKOUT_LEVEL 100000
	
	// adjustment player attitude * weight (stand up, down, crouch)
	#define R3F_TIRED_DOWN_LEVEL 0.9
	#define R3F_TIRED_KNEE_LEVEL 0.6
	#define R3F_TIRED_UP_LEVEL 0.5
	
	#define R3F_TIRED_WEIGHT_CLIMB_FACTOR 20
	
	//adjustment threshold weight agravante factor
	#define R3F_TIRED_WEIGHT_LEVEL1 40
	#define R3F_TIRED_WEIGHT_LEVEL2 50
	#define R3F_TIRED_WEIGHT_LEVEL3 60
	
	#define R3F_TIRED_SHORTNESS_THRESHOLD	0.8
	#define R3F_TIRED_UNCONSCIOUSNESS_DURATION 1
#endif

#ifdef R3F_TIRED_SET_MODE_EASY
	
	// adjustment onset threshold blackout effect
	#define R3F_TIRED_BLACKOUT_LEVEL 70000
	
	// adjustment player attitude * weight (stand up, down, crouch)
	#define R3F_TIRED_DOWN_LEVEL 1.8
	#define R3F_TIRED_KNEE_LEVEL 1.2
	#define R3F_TIRED_UP_LEVEL 1
	
	#define R3F_TIRED_WEIGHT_CLIMB_FACTOR 20
	
	//adjustment threshold weight agravante factor
	#define R3F_TIRED_WEIGHT_LEVEL1 25
	#define R3F_TIRED_WEIGHT_LEVEL2 30
	#define R3F_TIRED_WEIGHT_LEVEL3 40
	
	#define R3F_TIRED_SHORTNESS_THRESHOLD	0.8
	#define R3F_TIRED_UNCONSCIOUSNESS_DURATION 10
#endif

#ifdef R3F_TIRED_SET_MODE_NORMAL
	
	// adjustment onset threshold blackout effect
	#define R3F_TIRED_BLACKOUT_LEVEL 50000
	
	//adjustment player attitude * weight (stand up, down, crouch)
	#define R3F_TIRED_DOWN_LEVEL 3
	#define R3F_TIRED_KNEE_LEVEL 1.5
	#define R3F_TIRED_UP_LEVEL 1
	
	#define R3F_TIRED_WEIGHT_CLIMB_FACTOR 10
	
	//adjustment threshold weight agravante factor
	#define R3F_TIRED_WEIGHT_LEVEL1 15
	#define R3F_TIRED_WEIGHT_LEVEL2 20
	#define R3F_TIRED_WEIGHT_LEVEL3 30
	

	#define R3F_TIRED_SHORTNESS_THRESHOLD	0.6
	#define R3F_TIRED_UNCONSCIOUSNESS_DURATION 30
#endif

#ifdef R3F_TIRED_SET_MODE_HARD
	
	// adjustment onset threshold blackout effect
	#define R3F_TIRED_BLACKOUT_LEVEL 40000
	
	// adjustment player attitude * weight (stand up, down, crouch)
	#define R3F_TIRED_DOWN_LEVEL 4
	#define R3F_TIRED_KNEE_LEVEL 2
	#define R3F_TIRED_UP_LEVEL 1
	
	#define R3F_TIRED_WEIGHT_CLIMB_FACTOR 5
	
	// adjustment threshold weight agravante factor
	#define R3F_TIRED_WEIGHT_LEVEL1 10
	#define R3F_TIRED_WEIGHT_LEVEL2 17
	#define R3F_TIRED_WEIGHT_LEVEL3 25

	#define R3F_TIRED_SHORTNESS_THRESHOLD	0.3
	#define R3F_TIRED_UNCONSCIOUSNESS_DURATION 60
#endif

// ratio of threshold weight
#define R3F_TIRED_WEIGHT_RATIO1 0.3  /* for weight < 10 kg */
#define R3F_TIRED_WEIGHT_RATIO2 0.4  /* for weight 10 à 20 kg */
#define R3F_TIRED_WEIGHT_RATIO3 0.6  /* for weight 20 à 30 kg */
#define R3F_TIRED_WEIGHT_RATIO4 0.7  /* for weight  > 30 kg */


// activation / deactivation unit recup loss over time (true / false)
#define R3F_TIRED_GLOBAL_TIRING true

// adjustment recovery rate
#define R3F_TIRED_TIME_RECOVERING 100
#define R3F_TIRED_RATIO_RECOVERING 360

#define R3F_TIRED_WITH_VANISH true

