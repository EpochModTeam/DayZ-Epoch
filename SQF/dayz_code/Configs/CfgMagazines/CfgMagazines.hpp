class CfgMagazines
{
	//External references
	class CA_Magazine;
	class HandGrenade;
	
	
	
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

	// Waterbottle
	//#include "ItemWaterbottle.hpp" //Moved to WaterBottle.hpp in consumables and items folders
	#include "DZE\ItemWaterbottle.hpp"

	//#include "MeleeSwing.hpp" //MOVED TO \MAGAZINES

	#include "Planting.hpp"

	// Building Stuff
	#include "DZE\ModularBuilding.hpp"
	#include "DZE\Misc.hpp"

	//#include "Parts.hpp" //MOVED TO VehicleParts.hpp
	//#include "Skins.hpp"//MOVED TO CLOTHING
	
	// Food
	//#include "Food.hpp"
	#include "DZE\Food.hpp"
	
	// EPOCH SODA
	//#include "ItemSoda.hpp" //Moved to Consumables
	#include "DZE\ItemSoda.hpp"
};