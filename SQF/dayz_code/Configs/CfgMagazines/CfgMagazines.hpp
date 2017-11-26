class CfgMagazines
{
	//External references
	class CA_Magazine;
	class HandGrenade;
	class TimeBomb;
	class CA_LauncherMagazine;
	
	
	//Weapon magazines
	#include "Magazines\Magazines.hpp"
	
	//Trash
	#include "Trash\Trash.hpp"
	
	//Vehicle parts
	#include "VehicleParts.hpp"
	
	//Chemlight and Roadflare
	#include "Throwable.hpp"
	
	//Clothing
	#include "Clothing\Clothing.hpp"
	
	//Medical
	#include "Medical\Medical.hpp"
	
	//Miscellaneous
	#include "Items\Items.hpp"
	
	//Attachments
	#include "Attachments\Attachments.hpp"
	
	//Crafting materials
	#include "Crafting\Crafting.hpp"
	
	//Consumables: food, drinks etc.
	#include "Consumables\Consumables.hpp"
	
	/*class 5Rnd_86x70_L115A1: CA_Magazine //.338 Lapua Magnum
	{
		scope = 2;
		displayName = $STR_BAF_CFGMAGAZINES_5RND_86X70_L115A10;
		descriptionShort = $STR_BAF_CFGMAGAZINES_5RND_86X70_L115A10_0;
		ammo=B_86x70_Ball_noTracer;
		count=5;
		initSpeed = 936; //TODO
		picture="\CA\weapons_BAF\data\UI\M_lrr_CA.paa"; 
		// descriptionShort = $STR_DSS_10RND_M107; TODO
	};*/
	
	
	//EPOCH ADDITIONS
	
	#include "VehicleAmmo.hpp"
	// Gems
	#include "DZE\Gems.hpp"
	#include "DZE\Ores.hpp"
	// Items
	#include "DZE\Items.hpp"
	#include "DZE\Bulk.hpp"
	// Currency
	#include "DZE\Currency\Briefcase.hpp"
	#include "DZE\Currency\GoldBar.hpp"
	#include "DZE\Currency\SilverBar.hpp"
	#include "DZE\Currency\CopperBar.hpp"
	#include "DZE\Currency\BronzeBar.hpp"
	#include "DZE\Currency\AluminumBar.hpp"
	#include "DZE\Currency\TinBar.hpp"

	#include "DZE\ItemWaterbottle.hpp"
	#include "Planting.hpp"

	// Building Stuff
	#include "DZE\ModularBuilding.hpp"
	#include "DZE\Misc.hpp"
	
	// Consumables
	#include "DZE\Food.hpp"
	#include "DZE\ItemSoda.hpp"
};