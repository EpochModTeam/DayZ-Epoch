class CfgCrafting {
	class Recipe {
		displayName = "Generic Recipe";
		input[] = {}; //Items consumed during crafting
		output[] = {}; //Items created from crafting
		required[] = {}; //Items needed for but not consumed during crafting
		failChance = 0;
	};
	//Completed
	//Weapons
	#include "Recipes\Weapons\NailedBaseballBat.hpp"
	#include "Recipes\Weapons\BaseBallBatBarbed.hpp"
	#include "Recipes\Weapons\Crossbow.hpp"

	//Medical
	#include "Recipes\Medical\Bandage.hpp"
	#include "Recipes\Medical\sepsisBandage.hpp"
	#include "Recipes\Medical\woodensplint.hpp"
	#include "Recipes\Medical\HerbalDrink.hpp"
	//ammo
	#include "Recipes\Ammo\WoodenArrow.hpp"
	//other
	#include "Recipes\Other\woodencrate.hpp"
	#include "Recipes\Other\nails.hpp"
	#include "Recipes\Other\BackPack.hpp"
	//#include "Recipes\Other\woodenCraftTable.hpp"
	//Traps
	#include "Recipes\Traps\TrapBearTrapFlare.hpp"
	#include "Recipes\Traps\TrapBearTrapSmoke.hpp"
	#include "Recipes\Traps\TrapTripwireCans.hpp"
	#include "Recipes\Traps\TrapTripwireFlare.hpp"
	#include "Recipes\Traps\TrapTripwireGrenade.hpp"
	#include "Recipes\Traps\TrapTripwireSmoke.hpp"	
};
