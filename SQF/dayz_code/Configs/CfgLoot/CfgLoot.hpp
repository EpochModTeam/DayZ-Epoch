#include "LootDefines.hpp"

class CfgLoot
{
	class Groups
	{
		//Not renamed yet
		#define DZ_BP_VestPouch DZ_Czech_Vest_Puch
		#define DZ_BP_Patrol DZ_Patrol_Pack_EP1
		#define DZ_BP_Assault DZ_Assault_Pack_EP1
		#define DZ_BP_Survival DZ_TK_Assault_Pack_EP1
		#define DZ_BP_Alice DZ_ALICE_Pack_EP1
		#define DZ_BP_British DZ_British_ACU
		#define DZ_BP_Czech DZ_CivilBackpack_EP1
		#define DZ_BP_Coyote DZ_Backpack_EP1

		#define ItemBloodbagAPos bloodBagAPos
		#define ItemBloodbagANeg bloodBagANeg
		#define ItemBloodbagBPos bloodBagBPos
		#define ItemBloodbagBNeg bloodBagBNeg
		#define ItemBloodbagABPos bloodBagABPos
		#define ItemBloodbagABNeg bloodBagABNeg
		#define ItemBloodbagOPos bloodBagOPos
		#define ItemBloodbagONeg bloodBagONeg
		
		#define ItemBloodTester bloodTester
		#define ItemTransfusionKit transfusionKit
		#define ItemBloodbagEmpty emptyBloodBag
		
		// General groups
		#include "Groups\Ammo.hpp"
		#include "Groups\AmmoBox.hpp"
		#include "Groups\Attachments.hpp"
		#include "Groups\Medical.hpp"
		#include "Groups\Generic.hpp"
		#include "Groups\Trash.hpp"
		#include "Groups\Consumable.hpp"
		#include "Groups\ConsumableItems.hpp"
		#include "Groups\Parts.hpp"
		//DZE
		#include "Groups\Weapons.hpp"
		#include "Groups\Clothes.hpp"
		#include "Groups\Backpacks.hpp"
		
		// Points of interest
		#include "Groups\CrashSite.hpp"
		#include "Groups\CarePackage.hpp"
		#include "Groups\InfectedCamp.hpp"
				
		// Buildings
		#include "CfgBuildingLoot.hpp"

		// Zombies
		#include "Groups\Zombies\Civilian.hpp"
		#include "Groups\Zombies\Hunter.hpp"
		#include "Groups\Zombies\Police.hpp"
		#include "Groups\Zombies\Military.hpp"
		#include "Groups\Zombies\Worker.hpp" //DZE
		
		#undef DZ_BP_VestPouch
		#undef DZ_BP_Patrol
		#undef DZ_BP_Assault
		#undef DZ_BP_Survival
		#undef DZ_BP_Alice
		#undef DZ_BP_British
		#undef DZ_BP_Czech
		#undef DZ_BP_Coyote

		#undef ItemBloodbagAPos
		#undef ItemBloodbagANeg
		#undef ItemBloodbagBPos
		#undef ItemBloodbagBNeg
		#undef ItemBloodbagABPos
		#undef ItemBloodbagABNeg
		#undef ItemBloodbagOPos
		#undef ItemBloodbagONeg
		
		#undef ItemBloodTester
		#undef ItemTransfusionKit
		#undef ItemBloodbagEmpty
	};
	
	class Buildings
	{
		class Default
		{
			zombieChance = 0.2;
			minRoaming = 0;
			maxRoaming = 2;
			zombieClass[] =
			{
			//	"zZombie_Base",
				"z_hunter",
				"z_teacher",
				"z_suit1",
				"z_suit2",
				"z_worker1",
				"z_worker2",
				"z_worker3",
				"z_villager1",
				"z_villager2",
				"z_villager3"
			};
			
			lootChance = 0;
			lootGroup = "";
			lootPos[] = {};
		};
	
		// Buildings
		#include "CfgBuildingPos.hpp"
		/*
			If using DZE_MissionLootTable = true; without changing anything in lootPos then use 
			an include instead of copying the files to your mission.

			#include "\z\addons\dayz_code\Configs\CfgLoot\CfgBuildingPos.hpp"
		*/
	};
};

#include "CfgLootSmall.hpp" // Can be removed if not using legacy loot tables
#include "CfgLootLegacy.hpp" // Can be removed if not using legacy loot tables