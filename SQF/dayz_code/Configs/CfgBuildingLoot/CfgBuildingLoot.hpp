#include "cfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		lootPosSmall[] = {};
		lootPosZombie[] = {};
		itemType[] = {};
		itemChance[] = {};
		itemTypeSmall[] = {};
		itemChanceSmall[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "pistols","cfglootweapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox_DZE","generic" },
			{ "","generic" },
			{ "backpacks","backpack" },
			{ "tents","single" },
			{ "","military" },
			{ "","trash" },
			{ "Binocular","weapon" },
			{ "PartPlywoodPack","magazine" },
			{ "clothes","single" },
			{ "specialclothes","single" },
			{ "WeaponHolder_MeleeCrowbar","object" },
			{ "shotgunsingleshot","cfglootweapon" }
		};
		itemChance[] =	{
			0.04,
			0.03,
			0.02,
			0.1,
			0.01,
			0.04,
			0.01,
			0.36,
			0.04,
			0.01,
			0.02,
			0.17,
			0.02,
			0.02,
			0.01,
			0.01,
			0.03,
			0.06
		};
		itemTypeSmall[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemSodaRbull","magazine" },
			{ "ItemSodaOrangeSherbet","magazine" },
			{ "ItemWatch","weapon" },
			{ "ItemCompass","weapon" },
			{ "ItemMap","weapon" },
			{ "pistols","cfglootweapon" },
			{ "ItemFlashlight","weapon" },
			{ "ItemKnife","weapon" },
			{ "ItemMatchbox_DZE","weapon" },
			{ "","generic" },
			{ "","military" },
			{ "","trash" },
			{ "Binocular","weapon" },
			{ "clothes","single" },
			{ "specialclothes","single" }
		};
		itemChanceSmall[] =	{
			0.01,
			0.01,
			0.02,
			0.05,
			0.04,
			0.03,
			0.12,
			0.02,
			0.04,
			0.03,
			0.38,
			0.04,
			0.17,
			0.02,
			0.01,
			0.01
		};		
	};
	class Office: Default {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
		zombieChance = 0.3;
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "pistols","cfglootweapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox_DZE","generic" },
			{ "","generic" },
			{ "shotgunsingleshot","cfglootweapon" },
			{ "backpacks","backpack" },
			{ "tents","single" },
			{ "","military" },
			{ "","trash" },
			{ "Binocular","weapon" },
			{ "PartPlywoodPack","magazine" },
			{ "clothes","single" },
			{ "specialclothes","single" },
			{ "WeaponHolder_MeleeCrowbar","object" },
			{ "ItemBriefcaseEmpty","magazine" }
		};
		itemChance[] =	{
			0.04,
			0.03,
			0.02,
			0.11,
			0.01,
			0.04,
			0.01,
			0.31,
			0.05,
			0.04,
			0.01,
			0.02,
			0.21,
			0.02,
			0.02,
			0.01,
			0.01,
			0.03,
			0.01
		};	
		itemTypeSmall[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemSodaRbull","magazine" },
			{ "ItemSodaOrangeSherbet","magazine" },
			{ "ItemWatch","weapon" },
			{ "ItemCompass","weapon" },
			{ "ItemMap","weapon" },
			{ "pistols","cfglootweapon" },
			{ "ItemFlashlight","weapon" },
			{ "ItemKnife","weapon" },
			{ "ItemMatchbox_DZE","weapon" },
			{ "","generic" },			
			{ "","military" },
			{ "","trash" },
			{ "Binocular","weapon" },
			{ "clothes","single" },
			{ "specialclothes","single" },
			{ "ItemDocument","magazine" }
		};
		itemChanceSmall[] =	{
			0.01,
			0.01,
			0.02,
			0.05,
			0.04,
			0.03,
			0.15,
			0.02,
			0.05,
			0.03,
			0.31,
			0.04,
			0.03,
			0.02,
			0.16,
			0.02,
			0.01
		};	
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "ItemGenerator","magazine" },
			{ "ItemFuelBarrelEmpty","magazine"},
			{ "","generic" },
			{ "","trash" },
			{ "","military" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "PartVRotor","magazine" },
			{ "ItemJerrycan","magazine" },
			{ "WeaponHolder_ItemHatchet_DZE","object" },
			{ "ItemKnife","military" },
			{ "ItemToolbox","weapon" },
			{ "ItemWire","magazine" },
			{ "ItemTankTrap","magazine" },
			{ "ItemKeyKit","weapon" },
			{ "CinderBlocks","magazine" },
			{ "MortarBucket","magazine" }
		};
		itemChance[] =	{
			0.01,
			0.01,
			0.17,
			0.25,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.07,
			0.07,
			0.06,
			0.01,
			0.04,
			0.01,
			0.03,
			0.01
		};
		itemTypeSmall[] = {
			{ "","generic" },
			{ "","trash" },
			{ "","military" },
			{ "ItemKnife","weapon" },
			{ "ItemKeyKit","weapon" }
		};
		itemChanceSmall[] =	{
			0.5,
			0.28,
			0.14,
			0.07,
			0.01
		};
	};
	class IndustrialFuel: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "ItemGenerator","magazine" },
			{"ItemFuelPump","magazine"},
			{ "","generic" },
			{ "","trash" },
			{ "","military" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "PartVRotor","magazine" },
			{ "ItemJerrycan","magazine" },
			{ "WeaponHolder_ItemHatchet_DZE","object" },
			{ "ItemKnife","military" },
			{ "ItemToolbox","weapon" },
			{ "ItemWire","magazine" },
			{"ItemTankTrap","magazine"},
			{"ItemKeyKit","weapon"}
		};
		itemChance[] =	{
			0.01,
			0.01,
			0.18,
			0.28,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.07,
			0.07,
			0.06,
			0.01,
			0.04,
			0.01
		};
		itemTypeSmall[] = {
			{ "","generic" },
			{ "","trash" },
			{ "","military" },
			{ "ItemKnife","weapon" },
			{ "ItemKeyKit","weapon" }
		};
		itemChanceSmall[] =	{
			0.5,
			0.28,
			0.14,
			0.07,
			0.01
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "ItemJerrycan","magazine" },
			{ "","generic" },
			{ "farmweapons","cfglootweapon" },
			{ "","trash" },			
			{ "PartPlankPack","magazine" },
			{ "WeaponHolder_ItemHatchet_DZE","object" },
			{ "ItemFuelBarrelEmpty","magazine"},
			{ "WeaponHolder_ItemMachete", "object"},
			{ "ItemFishingPole","weapon" },
			{ "ItemLightBulb","magazine"},
			{ "ItemSledgeHandle","magazine"}
		};
		itemChance[] =	{
			0.05,
			0.3,
			0.18,
			0.26,
			0.06,
			0.05,
			0.01,
			0.03,
			0.02,
			0.02,
			0.02
		};
		itemTypeSmall[] = {
			{ "","generic" },
			{ "","trash" },
			{ "","military"},
			{ "ItemLightBulb","magazine"},
			{ "ItemSledgeHead","magazine"}
		};
		itemChanceSmall[] =	{
			0.79,
			0.14,
			0.05,
			0.01,
			0.01
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "pistols","cfglootweapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox_DZE","generic" },
			{ "","generic" },
			{ "shotgunsingleshot","cfglootweapon" },
			{ "backpacks","backpack" },
			{ "tents","single" },
			{ "","food" },
			{ "","trash" },
			{ "Binocular","weapon" },
			{ "PartPlywoodPack","magazine" }
		};
		itemChance[] =	{
			0.07,
			0.02,
			0.04,
			0.04,
			0.01,
			0.02,
			0.04,
			0.04,
			0.04,
			0.07,
			0.01,
			0.30,
			0.23,
			0.05,
			0.02
		};
		itemTypeSmall[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemSodaRbull","magazine" },
			{ "ItemSodaOrangeSherbet","magazine" },
			{ "ItemWatch","weapon" },
			{ "ItemCompass","weapon" },
			{ "ItemMap","weapon" },
			{ "pistols","cfglootweapon" },
			{ "ItemFlashlight","weapon" },
			{ "ItemKnife","weapon" },
			{ "ItemMatchbox_DZE","weapon" },
			{ "","generic" },
			{ "","food" },
			{ "","trash" },
			{ "Binocular","weapon" },
			{ "ItemMixOil", "magazine"}
		};
		itemChanceSmall[] =	{
			0.01,
			0.01,
			0.03,
			0.07,
			0.03,
			0.05,
			0.08,
			0.01,
			0.02,
			0.04,
			0.21,
			0.24,
			0.16,
			0.02,
			0.02
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "assaultrifles","cfglootweapon" },
			{ "submachinegun","cfglootweapon" },
			{ "sniperrifles","cfglootweapon" },
			{ "machineguns","cfglootweapon" },
			{ "","military" },
			{ "","medical" },
			{ "MAAWS", "weapon" },
			{ "MedBox0","object" },
			{ "NVGoggles","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "militaryclothes","single" },
			{ "militaryammo","single" }
		};
		itemChance[] =	{
			0.10,
			0.04,
			0.07,
			0.06,
			0.3,
			0.18,
			0.02,
			0.05,
			0.01,
			0.03,
			0.03,
			0.05,
			0.06
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "assaultrifles","cfglootweapon" },
			{ "submachinegun","cfglootweapon" },
			{ "sniperrifles","cfglootweapon" },
			{ "machineguns","cfglootweapon" },
			{ "","military" },
			{ "","medical" },
			{ "MAAWS", "weapon" },
			{ "MedBox0","object" },
			{ "NVGoggles","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "militaryclothes","single" },
			{ "militaryammo","single" }
		};
		itemChance[] =	{
			0.09,
			0.03,
			0.05,
			0.05,
			0.35,
			0.18,
			0.02,
			0.05,
			0.01,
			0.03,
			0.03,
			0.05,
			0.06
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {
			{ "","trash" },
			{ "","hospital" },
			{"MedBox0","object"}
		};
		itemChance[] =	{
			0.1,
			0.7,
			0.2
		};
		itemTypeSmall[] = {
			{ "","trash" },
			{ "","hospital" }
		};
		itemChanceSmall[] =	{
			0.1,
			0.9
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "pistols","cfglootweapon" },
			{ "assaultrifles","cfglootweapon" },
			{ "sniperrifles","cfglootweapon" },
			{ "shotgunsingleshot","cfglootweapon" },
			{ "submachinegun","cfglootweapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "militarybackpacks","backpack" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine" },
			{ "machineguns","cfglootweapon" }
		};
		itemChance[] =	{
			0.04,
			0.13,
			0.04,
			0.06,
			0.07,
			0.03,
			0.04,
			0.01,
			0.01,
			0.02,
			0.05,
			0.03,
			0.1,
			0.3,
			0.02,
			0.02,
			0.03
		};
		itemTypeSmall[] = {
			{ "pistols","cfglootweapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","weapon" },
			{ "ItemKnife","weapon" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","weapon" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "submachinegun","cfglootweapon" },
			{ "ItemEtool","weapon" }
		};
		itemChanceSmall[] =	{
			0.15,
			0.02,
			0.03,
			0.04,
			0.02,
			0.02,
			0.09,
			0.34,
			0.26,
			0.02,
			0.01
		};
	};
	class MilitaryIndustrial: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "pistols","cfglootweapon" },
			{ "assaultrifles","cfglootweapon" },
			{ "PartGeneric","magazine" },
			{ "sniperrifles","cfglootweapon" },
			{ "shotgunsingleshot","cfglootweapon" },
			{ "ItemGenerator","magazine" },
			{ "submachinegun","cfglootweapon" },
			{ "PartWheel","magazine" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "PartVRotor","magazine" },
			{ "militarybackpacks","backpack" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine" },
			{ "ItemFuelBarrelEmpty","magazine" },
			{ "ItemFuelPump","magazine" },
			{ "machineguns","cfglootweapon" }
		};
		itemChance[] =	{
			0.02,
			0.05,
			0.03,
			0.01,
			0.05,
			0.01,
			0.05,
			0.02,
			0.01,
			0.03,
			0.04,
			0.01,
			0.01,
			0.03,
			0.05,
			0.35,
			0.07,
			0.03,
			0.02,
			0.03,
			0.01,
			0.01
		};
		itemTypeSmall[] = {
			{ "pistols","cfglootweapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","weapon" },
			{ "ItemKnife","weapon" },
			{ "ItemGPS","weapon" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "submachinegun","cfglootweapon" },
			{ "ItemEtool","weapon" }
		};
		itemChanceSmall[] =	{
			0.12,
			0.05,
			0.03,
			0.04,
			0.02,
			0.02,
			0.09,
			0.34,
			0.26,
			0.03
		};
	};
	class IndustrialMilitary: Default {
		zombieChance = 0.4;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "pistols","cfglootweapon" },
			{ "assaultrifles","cfglootweapon" },
			{ "PartGeneric","magazine" },
			{ "sniperrifles","cfglootweapon" },
			{ "shotgunsingleshot","cfglootweapon" },
			{ "ItemGenerator","magazine" },
			{ "submachinegun","cfglootweapon" },
			{ "PartWheel","magazine" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "PartVRotor","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "militarybackpacks","backpack" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine" },
			{ "ItemFuelBarrelEmpty","magazine" },
			{ "ItemFuelPump","magazine" },
			{ "machineguns","cfglootweapon" }
		};
		itemChance[] =	{
			0.02,
			0.05,
			0.03,
			0.01,
			0.05,
			0.01,
			0.05,
			0.02,
			0.01,
			0.03,
			0.04,
			0.01,
			0.01,
			0.03,
			0.04,
			0.05,
			0.03,
			0.05,
			0.25,
			0.07,
			0.03,
			0.02,
			0.03,
			0.01,
			0.01
		};
		itemTypeSmall[] = {
			{ "pistols","cfglootweapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","weapon" },
			{ "ItemKnife","weapon" },
			{ "ItemGPS","weapon" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "submachinegun","cfglootweapon" },
			{ "ItemEtool","weapon" }
		};
		itemChanceSmall[] =	{
			0.12,
			0.05,
			0.03,
			0.04,
			0.02,
			0.02,
			0.09,
			0.34,
			0.26,
			0.03
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "assaultrifles","cfglootweapon" },
			{ "machineguns","cfglootweapon" },
			{ "pistols","cfglootweapon" },
			{ "sniperrifles","cfglootweapon" },
			{ "militaryshotguns","cfglootweapon" },
			{ "submachinegun","cfglootweapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },
			{ "militarybackpacks","backpack" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "machinegunammo","single" },
			{ "militaryclothes","single" },
			{ "NVGoggles","weapon" }
		};
		itemChance[] =	{
			0.1,
			0.04,
			0.08,
			0.03,
			0.05,
			0.06,
			0.01,
			0.02,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.04,
			0.08,
			0.3,
			0.01,
			0.05,
			0.05,
			0.01

		};
		itemTypeSmall[] = {
			{ "pistols","cfglootweapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","weapon" },
			{ "Binocular_Vector","weapon" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "5Rnd_86x70_L115A1","magazine"},
			{ "10Rnd_127x99_m107","magazine"},
			{ "machinegunammoexpl","single" },
			{ "militaryclothes","single" },
			{ "NVGoggles","weapon" },
			{ "100Rnd_762x54_PK","magazine" }
		};
		itemChanceSmall[] =	{
			0.10,
			0.02,
			0.02,
			0.02,
			0.01,
			0.02,
			0.01,
			0.03,
			0.01,
			0.06,
			0.15,
			0.33,
			0.02,
			0.02,
			0.05,
			0.04,
			0.02,
			0.05,
			0.01,
			0.01
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox_DZE","generic"},
			{"farmweapons","cfglootweapon"},
			{"","military"},
			{"WeaponHolder_ItemMachete", "object"},
			{"","hunter"}
		};
		itemChance[] =	{
			0.02,
			0.01,
			0.01,
			0.03,
			0.03,
			0.38,
			0.02,
			0.5
		};
		itemTypeSmall[] =	{
			{"ItemMap","weapon"},
			{"ItemFlashlight","weapon"},
			{"ItemKnife","weapon"},
			{"ItemMatchbox_DZE","weapon"},
			{"","military"},
			{"","hunter"}
		};
		itemChanceSmall[] =	{
			0.02,
			0.02,
			0.02,
			0.04,
			0.4,
			0.5
		};
	};
	class DynamicDebris: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox_DZE","generic" },
			{ "ItemToolbox","weapon" },
			{ "","generic" },
			{ "","food" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "WeaponHolder_ItemJerrycan","object" }
		};
		itemChance[] = {
			0.191,
			0.012,
			0.062,
			0.024,
			0.024,
			0.055,
			0.055,
			0.055,
			0.022,
			0.169,
			0.055,
			0.066,
			0.055,
			0.033,
			0.011,
			0.078,
			0.033
		};
	}; 
	
	class DynamicDebrisMilitary: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		itemType[] = {
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine"},
			{ "","military" },
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "MakarovSD","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox_DZE","generic" },
			{ "ItemToolbox","weapon" },
			{ "","generic" },
			{ "","food" },
			{ "PartGeneric","magazine" },
			{ "PartWheel","magazine" },
			{ "PartFueltank","magazine" },
			{ "PartEngine","magazine" },
			{ "PartGlass","magazine" },
			{ "PartVRotor","magazine" },
			{ "WeaponHolder_ItemJerrycan","object" }
		};
		itemChance[] = {
			0.050,
			0.100,
			0.080,
			0.100,
			0.020,
			0.050,
			0.010,
			0.020,
			0.010,
			0.050,
			0.050,
			0.020,
			0.150,
			0.050,
			0.060,
			0.050,
			0.030,
			0.02,
			0.03,
			0.02,
			0.03
		};
	};
	class SupplyDrop: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {
			{ "PartPlywoodPack","magazine" },
			{ "PartPlankPack","magazine" },
			{ "CinderBlocks","magazine" },
			{ "MortarBucket","magazine" },
			{ "bulk_PartGeneric","magazine" },
			{ "bulk_ItemSandbag","magazine"},
			{ "bulk_ItemTankTrap","magazine"},
			{ "ItemSledge","weapon" },
		};
		itemChance[] =	{
			0.1,
			0.2,
			0.1,
			0.1,
			0.2,
			0.1,
			0.1,
			0.1
		};
	};
	class MassGrave: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M249_EP1_DZ","weapon" },
			{ "M9SD","weapon" },
			{ "Pecheneg_DZ","weapon"},
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "SVD_CAMO","weapon" },
			{ "M1014","weapon" },
			{ "BAF_LRR_scoped","weapon" },
			{ "M4SPR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "M240_DZ","weapon" },
			{ "M4A1_AIM_SD_camo","weapon" },
			{ "M16A4_ACG","weapon" },
			{ "M4A1_HWS_GL_camo","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			//Ammo
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },

			//{"NVGoggles","weapon"},
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },

			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 30		
			{"DZ_LargeGunBag_EP1","object"}, // 45

			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			//{"Body","object"},
			{"PipeBomb","magazine"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"G36_C_SD_camo","weapon"},
			{"M40A3","weapon"},
			{"100Rnd_762x54_PK","magazine"},
			{ "","militaryclothes" },
			{"WeaponHolder_ItemMachete", "object"},
			{ "SCAR_H_LNG_Sniper_SD","weapon" },
			{"2000Rnd_762x51_M134","magazine"},
			{"KSVK_DZE","weapon" },
			{"m240_scoped_EP1_DZE","weapon" }
		};
		itemChance[] =	{
			0.03,
			0.01,
			0.01,
			0.02,
			0.01,
			0.02,
			0.01,
			0.01,
			0.02,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.02,
			0.03,
			0.01,
			0.02,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.03,
			0.03,
			0.01,
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.03,
			0.02,
			0.02,
			0.02,
			0.01,
			0.01,
			0.05,
			0.05,
			0.13,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.05,
			0.02,
			0.01,
			0.01,
			0.01, //ksvk
			0.01 //m240 scoped
		};
	};
	#include "CfgLootPos.hpp"
};
