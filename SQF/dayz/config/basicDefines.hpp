#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define VSoft 0
#define VArmor 1
#define VAir 2

// type scope
#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeeAll 31

#define ReadAndWrite 0 //! any modifications enabled
#define ReadAndCreate 1 //! only adding new class members is allowed
#define ReadOnly 2 //! no modifications enabled
#define ReadOnlyVerified 3 //! no modifications enabled, CRC test applied

#define LockNo		0
#define LockCadet	1
#define LockYes		2

#define WeaponNoSlot		0	// dummy weapons
#define WeaponSlotPrimary	1	// primary weapons
#define WeaponSlotSecondary	4	// secondary weapons
#define WeaponSlotHandGun	2	// HandGun
#define WeaponSlotHandGunItem	16 // HandGun magazines
#define WeaponSlotItem		256	// items
#define WeaponSlotBinocular	4096	// binocular
#define WeaponHardMounted	65536
#define WeaponSlotInventory 131072 // inventory items

#define SPEED_STATIC 1e10

#define NEVER_DESTROY 1000	// for MP - destroying dead bodies

#define TracerEColor 0.2,0.8,0.1
#define TracerWColor 0.8,0.5,0.1
#define TracerGColor 0.7,0.7,0.5
#define TracerNColor 0,0,0 // used for sniper / silenced rifles

#define TracerEColorF {TracerEColor,0.040}
#define TracerWColorF {TracerWColor,0.040}
#define TracerGColorF {TracerGColor,0.040}
#define TracerNColorF {TracerNColor,0.005}

#define TracerSEColorF {TracerEColor,0.25}
#define TracerSWColorF {TracerWColor,0.25}

#define TRACER_W_ALWAYS tracerColor[]=TracerWColorF;tracerColorR[]=TracerWColorF
#define TRACER_W_OPTIONAL tracerColor[]=TracerWColorF;tracerColorR[]=TracerNColorF
#define TRACER_W_STRONG tracerColor[]=TracerSWColorF;tracerColorR[]=TracerSWColorF

#define TRACER_E_ALWAYS tracerColor[]=TracerEColorF;tracerColorR[]=TracerEColorF
#define TRACER_E_OPTIONAL tracerColor[]=TracerEColorF;tracerColorR[]=TracerNColorF
#define TRACER_E_STRONG tracerColor[]=TracerSEColorF;tracerColorR[]=TracerSEColorF

#define TRACER_G_ALWAYS tracerColor[]=TracerGColorF;tracerColorR[]=TracerGColorF
#define TRACER_G_OPTIONAL tracerColor[]=TracerGColorF;tracerColorR[]=TracerNColorF

#define TRACER_N_ALWAYS tracerColor[]=TracerNColorF;tracerColorR[]=TracerNColorF

#define LockNo		0
#define LockCadet	1
#define LockYes		2

enum
{
  DestructNo,
  DestructBuilding,
  DestructEngine,
  DestructTree,
  DestructTent,
  DestructMan,
  DestructDefault,
  DestructWreck
};

//#include "\ca\BasicDefines.hpp"