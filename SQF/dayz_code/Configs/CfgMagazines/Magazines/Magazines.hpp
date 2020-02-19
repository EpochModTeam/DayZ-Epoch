#include "Melee.hpp"

#define COMBINE_MAG class CombineMag\
{\
	text = $STR_MAG_COMBINE;\
	script = "spawn player_combineMag;";\
};

#include "22lfB.hpp"		//Ruger Mk22
#include "9x17.hpp"			//PPK
#include "9x18.hpp"			//Makarov
#include "9x19.hpp"			//MP5, PDW, Bizon, M9, G17, CZ75, Browning HP, P226, P38
#include "10x22.hpp"		//P99
#include "45ACP.hpp"		//Colt M1911, Revolver
#include "44Magnum.hpp"		//Taurus Raging Bull, Colt Anaconda
#include "357Magnum.hpp"	//Colt Python
#include "545x39.hpp"		//AK74, RPK74
#include "556x45.hpp"		//M249, STANAG, G36
#include "6x35.hpp"			//KAC PDW
#include "762x25.hpp"		//Tokarew TT-33
#include "762x39.hpp"		//AK47, SA58
#include "762x51.hpp"		//M240, FN FAL, DMR, M24
#include "762x54r.hpp"		//PK, SVD, Mosin
#include "46x30.hpp"		//MP7
#include "680x43.hpp"		//ACR
#include "86x70.hpp"		//L115, MSR
#include "762x67.hpp"		//XM2010
#include "Misc.hpp"			//CZ550, Lee-Enfield
#include "Shotgun.hpp"
#include "Arrows.hpp"
#include "LauncherAmmo.hpp"

#undef COMBINE_MAG