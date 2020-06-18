class CfgMagazines
{
	//External references
	class CA_Magazine;
	class HandGrenade;
	class CA_LauncherMagazine;	
	
	//Weapon magazines
	#include "Magazines\Magazines.hpp"
	
	//Attachments
	#include "Attachments\Attachments.hpp"
	
	//Consumables: food, drinks, fish, meat, harvestable food, garlic
	#include "Consumables\Consumables.hpp"
	
	//Trash
	#include "Trash\Trash.hpp"
	
	//Clothing
	#include "Clothing\Clothing.hpp"
	
	//Medical
	#include "Medical\Medical.hpp"
	
	//Currency
	#include "Items\Currency\Briefcase.hpp"
	#include "Items\Currency\GoldBar.hpp"
	#include "Items\Currency\SilverBar.hpp"
	#include "Items\Currency\CopperBar.hpp"
	//#include "Items\Currency\BronzeBar.hpp" //The Bronze Bar has no model
	#include "Items\Currency\AluminumBar.hpp"
	#include "Items\Currency\TinBar.hpp"	
		
	//All other items	
	#include "Items\Flares.hpp" // Chemlight and Roadflare
	#include "Items\Bulk.hpp" // Bulk crates for wholesaler
	#include "Items\Gems.hpp"
	#include "Items\Ores.hpp"	
	#include "Items\ChainsawGas.hpp"
	#include "Items\DocumentsPapers.hpp"
	#include "Items\Explosives.hpp"	
	#include "Items\BarrelsCans.hpp"
	#include "Items\ToolCrafting.hpp" //Sledgehammer, Crossbow
	#include "Items\Paints.hpp"
	#include "Items\Planting.hpp" //Kilo of Hemp, Fertilizer		
	#include "Items\Wood.hpp"
	#include "Items\Metal.hpp"
	#include "Items\Concrete.hpp" //Cinder, Mortar, Stone, Brick
	#include "Items\Textiles.hpp"
	#include "Items\Electronics.hpp" //Nails, screws, cards, hotwire kit etc.
	#include "Items\Locks.hpp"	
	#include "Items\VehicleParts.hpp" //Vehicle parts		
	#include "Items\Misc.hpp" //Nails, screws, cards, hotwire kit etc.
	
	//Building items - all items that can be build and placed in-game
	#include "Buildings\BearTrap.hpp"
	#include "Buildings\TripWire.hpp"
	#include "Buildings\Camonets.hpp"	
	#include "Buildings\Sandbag.hpp"
	#include "Buildings\ModularBuilding.hpp"
	#include "Buildings\Fences.hpp"
	#include "Buildings\Storage.hpp"
	#include "Buildings\Tent.hpp"	
	#include "Buildings\Misc.hpp"	
};