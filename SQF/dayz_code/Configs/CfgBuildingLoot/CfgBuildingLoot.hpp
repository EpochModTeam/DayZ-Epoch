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
		itemChance[] = {
			{"ItemWatch","generic",0.040}
			,{"ItemCompass","generic",0.030}
			,{"ItemMap","weapon",0.020}
			,{"pistols","cfglootweapon",0.100}
			,{"ItemFlashlight","generic",0.010}
			,{"ItemKnife","generic",0.040}
			,{"ItemMatchbox_DZE","generic",0.010}
			,{"","generic",0.360}
			,{"backpacks","backpack",0.040}
			,{"tents","single",0.010}
			,{"","military",0.020}
			,{"","trash",0.170}
			,{"Binocular","weapon",0.020}
			,{"PartPlywoodPack","magazine",0.020}
			,{"clothes","single",0.010}
			,{"specialclothes","single",0.010}
			,{"WeaponHolder_MeleeCrowbar","object",0.030}
			,{"shotgunsingleshot","cfglootweapon",0.060}
		};
		itemChanceSmall[] = {
			{"ItemSodaMdew","magazine",0.010}
			,{"ItemSodaRbull","magazine",0.010}
			,{"ItemSodaOrangeSherbet","magazine",0.020}
			,{"ItemWatch","weapon",0.050}
			,{"ItemCompass","weapon",0.040}
			,{"ItemMap","weapon",0.030}
			,{"pistols","cfglootweapon",0.120}
			,{"ItemFlashlight","weapon",0.020}
			,{"ItemKnife","weapon",0.040}
			,{"ItemMatchbox_DZE","weapon",0.030}
			,{"","generic",0.380}
			,{"","military",0.040}
			,{"","trash",0.170}
			,{"Binocular","weapon",0.020}
			,{"clothes","single",0.010}
			,{"specialclothes","single",0.010}
		};
	};
	class Office: Default {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
		zombieChance = 0.3;
		lootChance = 0.4;
		lootPos[] = {};
		itemChance[] = {
			{"ItemWatch","generic",0.040}
			,{"ItemCompass","generic",0.030}
			,{"ItemMap","weapon",0.020}
			,{"pistols","cfglootweapon",0.110}
			,{"ItemFlashlight","generic",0.010}
			,{"ItemKnife","generic",0.040}
			,{"ItemMatchbox_DZE","generic",0.010}
			,{"","generic",0.310}
			,{"shotgunsingleshot","cfglootweapon",0.050}
			,{"backpacks","backpack",0.040}
			,{"tents","single",0.010}
			,{"","military",0.020}
			,{"","trash",0.210}
			,{"Binocular","weapon",0.020}
			,{"PartPlywoodPack","magazine",0.020}
			,{"clothes","single",0.010}
			,{"specialclothes","single",0.010}
			,{"WeaponHolder_MeleeCrowbar","object",0.030}
			,{"ItemBriefcaseEmpty","magazine",0.010}
		};
		itemChanceSmall[] = {
			{"ItemSodaMdew","magazine",0.010}
			,{"ItemSodaRbull","magazine",0.010}
			,{"ItemSodaOrangeSherbet","magazine",0.020}
			,{"ItemWatch","weapon",0.050}
			,{"ItemCompass","weapon",0.040}
			,{"ItemMap","weapon",0.030}
			,{"pistols","cfglootweapon",0.150}
			,{"ItemFlashlight","weapon",0.020}
			,{"ItemKnife","weapon",0.050}
			,{"ItemMatchbox_DZE","weapon",0.030}
			,{"","generic",0.310}
			,{"","military",0.040}
			,{"","trash",0.030}
			,{"Binocular","weapon",0.020}
			,{"clothes","single",0.160}
			,{"specialclothes","single",0.020}
			,{"ItemDocument","magazine",0.010}
		};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.4;
		lootPos[] = {};
		itemChance[] = {
			{"ItemGenerator","magazine",0.010}
			,{"ItemFuelBarrelEmpty","magazine",0.010}
			,{"","generic",0.170}
			,{"","trash",0.250}
			,{"","military",0.040}
			,{"PartGeneric","magazine",0.040}
			,{"PartWheel","magazine",0.050}
			,{"PartFueltank","magazine",0.020}
			,{"PartEngine","magazine",0.020}
			,{"PartGlass","magazine",0.040}
			,{"PartVRotor","magazine",0.010}
			,{"ItemJerrycan","magazine",0.040}
			,{"WeaponHolder_ItemHatchet_DZE","object",0.070}
			,{"ItemKnife","military",0.070}
			,{"ItemToolbox","weapon",0.060}
			,{"ItemWire","magazine",0.010}
			,{"ItemTankTrap","magazine",0.040}
			,{"ItemKeyKit","weapon",0.010}
			,{"CinderBlocks","magazine",0.030}
			,{"MortarBucket","magazine",0.010}
		};
		itemChanceSmall[] = {
			{"","generic",0.500}
			,{"","trash",0.280}
			,{"","military",0.140}
			,{"ItemKnife","weapon",0.070}
			,{"ItemKeyKit","weapon",0.010}
		};
	};
	class IndustrialFuel: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.4;
		lootPos[] = {};
		itemChance[] = {
			{"ItemGenerator","magazine",0.010}
			,{"ItemFuelPump","magazine",0.010}
			,{"","generic",0.180}
			,{"","trash",0.280}
			,{"","military",0.040}
			,{"PartGeneric","magazine",0.040}
			,{"PartWheel","magazine",0.050}
			,{"PartFueltank","magazine",0.020}
			,{"PartEngine","magazine",0.020}
			,{"PartGlass","magazine",0.040}
			,{"PartVRotor","magazine",0.010}
			,{"ItemJerrycan","magazine",0.040}
			,{"WeaponHolder_ItemHatchet_DZE","object",0.070}
			,{"ItemKnife","military",0.070}
			,{"ItemToolbox","weapon",0.060}
			,{"ItemWire","magazine",0.010}
			,{"ItemTankTrap","magazine",0.040}
			,{"ItemKeyKit","weapon",0.010}
		};
		itemChanceSmall[] = {
			{"","generic",0.500}
			,{"","trash",0.280}
			,{"","military",0.140}
			,{"ItemKnife","weapon",0.070}
			,{"ItemKeyKit","weapon",0.010}
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemChance[] = {
			{"ItemJerrycan","magazine",0.050}
			,{"","generic",0.300}
			,{"farmweapons","cfglootweapon",0.180}
			,{"","trash",0.260}
			,{"PartPlankPack","magazine",0.060}
			,{"WeaponHolder_ItemHatchet_DZE","object",0.050}
			,{"ItemFuelBarrelEmpty","magazine",0.010}
			,{"WeaponHolder_ItemMachete","object",0.030}
			,{"ItemFishingPole","weapon",0.020}
			,{"ItemLightBulb","magazine",0.020}
			,{"ItemSledgeHandle","magazine",0.020}
		};
		itemChanceSmall[] = {
			{"","generic",0.790}
			,{"","trash",0.140}
			,{"","military",0.050}
			,{"ItemLightBulb","magazine",0.010}
			,{"ItemSledgeHead","magazine",0.010}
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemChance[] = {
			{"ItemWatch","generic",0.070}
			,{"ItemCompass","generic",0.020}
			,{"ItemMap","weapon",0.040}
			,{"pistols","cfglootweapon",0.040}
			,{"ItemFlashlight","generic",0.010}
			,{"ItemKnife","generic",0.020}
			,{"ItemMatchbox_DZE","generic",0.040}
			,{"","generic",0.040}
			,{"shotgunsingleshot","cfglootweapon",0.040}
			,{"backpacks","backpack",0.070}
			,{"tents","single",0.010}
			,{"","food",0.300}
			,{"","trash",0.230}
			,{"Binocular","weapon",0.050}
			,{"PartPlywoodPack","magazine",0.020}
		};
		itemChanceSmall[] = {
			{"ItemSodaMdew","magazine",0.010}
			,{"ItemSodaRbull","magazine",0.010}
			,{"ItemSodaOrangeSherbet","magazine",0.030}
			,{"ItemWatch","weapon",0.070}
			,{"ItemCompass","weapon",0.030}
			,{"ItemMap","weapon",0.050}
			,{"pistols","cfglootweapon",0.080}
			,{"ItemFlashlight","weapon",0.010}
			,{"ItemKnife","weapon",0.020}
			,{"ItemMatchbox_DZE","weapon",0.040}
			,{"","generic",0.210}
			,{"","food",0.240}
			,{"","trash",0.160}
			,{"Binocular","weapon",0.020}
			,{"ItemMixOil","magazine",0.020}
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemChance[] = {
			{"assaultrifles","cfglootweapon",0.100}
			,{"submachinegun","cfglootweapon",0.040}
			,{"sniperrifles","cfglootweapon",0.070}
			,{"machineguns","cfglootweapon",0.060}
			,{"","military",0.300}
			,{"","medical",0.180}
			,{"MAAWS","weapon",0.020}
			,{"MedBox0","object",0.050}
			,{"NVGoggles","weapon",0.010}
			,{"AmmoBoxSmall_556","object",0.030}
			,{"AmmoBoxSmall_762","object",0.030}
			,{"militaryclothes","single",0.050}
			,{"militaryammo","single",0.060}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemChance[] = {
			{"assaultrifles","cfglootweapon",0.090}
			,{"submachinegun","cfglootweapon",0.030}
			,{"sniperrifles","cfglootweapon",0.050}
			,{"machineguns","cfglootweapon",0.050}
			,{"","military",0.350}
			,{"","medical",0.180}
			,{"MAAWS","weapon",0.020}
			,{"MedBox0","object",0.050}
			,{"NVGoggles","weapon",0.010}
			,{"AmmoBoxSmall_556","object",0.030}
			,{"AmmoBoxSmall_762","object",0.030}
			,{"militaryclothes","single",0.050}
			,{"militaryammo","single",0.060}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemChance[] = {
			{"","trash",0.100}
			,{"","hospital",0.700}
			,{"MedBox0","object",0.200}
		};
		itemChanceSmall[] = {
			{"","trash",0.100}
			,{"","hospital",0.900}
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemChance[] = {
			{"pistols","cfglootweapon",0.040}
			,{"assaultrifles","cfglootweapon",0.130}
			,{"sniperrifles","cfglootweapon",0.040}
			,{"shotgunsingleshot","cfglootweapon",0.060}
			,{"submachinegun","cfglootweapon",0.070}
			,{"Binocular","weapon",0.030}
			,{"ItemFlashlightRed","military",0.040}
			,{"ItemKnife","military",0.010}
			,{"ItemGPS","weapon",0.010}
			,{"ItemMap","military",0.020}
			,{"militarybackpacks","backpack",0.050}
			,{"","medical",0.030}
			,{"","generic",0.100}
			,{"","military",0.300}
			,{"ItemEtool","weapon",0.020}
			,{"ItemSandbag","magazine",0.020}
			,{"machineguns","cfglootweapon",0.030}
		};
		itemChanceSmall[] = {
			{"pistols","cfglootweapon",0.150}
			,{"Binocular","weapon",0.020}
			,{"ItemFlashlightRed","weapon",0.030}
			,{"ItemKnife","weapon",0.040}
			,{"ItemGPS","weapon",0.020}
			,{"ItemMap","weapon",0.020}
			,{"","medical",0.090}
			,{"","generic",0.340}
			,{"","military",0.260}
			,{"submachinegun","cfglootweapon",0.020}
			,{"ItemEtool","weapon",0.010}
		};
	};
	class MilitaryIndustrial: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemChance[] = {
			{"pistols","cfglootweapon",0.020}
			,{"assaultrifles","cfglootweapon",0.050}
			,{"PartGeneric","magazine",0.030}
			,{"sniperrifles","cfglootweapon",0.010}
			,{"shotgunsingleshot","cfglootweapon",0.050}
			,{"ItemGenerator","magazine",0.010}
			,{"submachinegun","cfglootweapon",0.050}
			,{"PartWheel","magazine",0.020}
			,{"Binocular","weapon",0.010}
			,{"ItemFlashlightRed","military",0.030}
			,{"ItemKnife","military",0.040}
			,{"ItemGPS","weapon",0.010}
			,{"PartVRotor","magazine",0.010}
			,{"militarybackpacks","backpack",0.030}
			,{"","medical",0.050}
			,{"","generic",0.350}
			,{"","military",0.070}
			,{"ItemEtool","weapon",0.030}
			,{"ItemSandbag","magazine",0.020}
			,{"ItemFuelBarrelEmpty","magazine",0.030}
			,{"ItemFuelPump","magazine",0.010}
			,{"machineguns","cfglootweapon",0.010}
		};
		itemChanceSmall[] = {
			{"pistols","cfglootweapon",0.120}
			,{"Binocular","weapon",0.050}
			,{"ItemFlashlightRed","weapon",0.030}
			,{"ItemKnife","weapon",0.040}
			,{"ItemGPS","weapon",0.020}
			,{"","medical",0.020}
			,{"","generic",0.090}
			,{"","military",0.340}
			,{"submachinegun","cfglootweapon",0.260}
			,{"ItemEtool","weapon",0.030}
		};
	};
	class IndustrialMilitary: Default {
		zombieChance = 0.4;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemChance[] = {
			{"pistols","cfglootweapon",0.020}
			,{"assaultrifles","cfglootweapon",0.050}
			,{"PartGeneric","magazine",0.030}
			,{"sniperrifles","cfglootweapon",0.010}
			,{"shotgunsingleshot","cfglootweapon",0.050}
			,{"ItemGenerator","magazine",0.010}
			,{"submachinegun","cfglootweapon",0.050}
			,{"PartWheel","magazine",0.020}
			,{"Binocular","weapon",0.010}
			,{"ItemFlashlightRed","military",0.030}
			,{"ItemKnife","military",0.040}
			,{"ItemGPS","weapon",0.010}
			,{"PartVRotor","magazine",0.010}
			,{"PartFueltank","magazine",0.030}
			,{"PartEngine","magazine",0.040}
			,{"PartGlass","magazine",0.050}
			,{"militarybackpacks","backpack",0.030}
			,{"","medical",0.050}
			,{"","generic",0.250}
			,{"","military",0.070}
			,{"ItemEtool","weapon",0.030}
			,{"ItemSandbag","magazine",0.020}
			,{"ItemFuelBarrelEmpty","magazine",0.030}
			,{"ItemFuelPump","magazine",0.010}
			,{"machineguns","cfglootweapon",0.010}
		};
		itemChanceSmall[] = {
			{"pistols","cfglootweapon",0.120}
			,{"Binocular","weapon",0.050}
			,{"ItemFlashlightRed","weapon",0.030}
			,{"ItemKnife","weapon",0.040}
			,{"ItemGPS","weapon",0.020}
			,{"","medical",0.020}
			,{"","generic",0.090}
			,{"","military",0.340}
			,{"submachinegun","cfglootweapon",0.260}
			,{"ItemEtool","weapon",0.030}
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemChance[] = {
			{"assaultrifles","cfglootweapon",0.100}
			,{"machineguns","cfglootweapon",0.040}
			,{"pistols","cfglootweapon",0.080}
			,{"sniperrifles","cfglootweapon",0.030}
			,{"militaryshotguns","cfglootweapon",0.050}
			,{"submachinegun","cfglootweapon",0.060}
			,{"AmmoBoxSmall_556","object",0.010}
			,{"AmmoBoxSmall_762","object",0.020}
			,{"Binocular","weapon",0.010}
			,{"ItemFlashlightRed","military",0.020}
			,{"ItemKnife","military",0.010}
			,{"ItemGPS","weapon",0.010}
			,{"ItemMap","military",0.010}
			,{"Binocular_Vector","military",0.010}
			,{"militarybackpacks","backpack",0.040}
			,{"","medical",0.080}
			,{"","generic",0.300}
			,{"","military",0.010}
			,{"machinegunammo","single",0.050}
			,{"militaryclothes","single",0.050}
			,{"NVGoggles","weapon",0.010}
		};
		itemChanceSmall[] = {
			{"pistols","cfglootweapon",0.100}
			,{"AmmoBoxSmall_556","object",0.020}
			,{"AmmoBoxSmall_762","object",0.020}
			,{"Binocular","weapon",0.020}
			,{"ItemFlashlightRed","military",0.010}
			,{"ItemKnife","military",0.020}
			,{"ItemGPS","weapon",0.010}
			,{"ItemMap","weapon",0.030}
			,{"Binocular_Vector","weapon",0.010}
			,{"","medical",0.060}
			,{"","generic",0.150}
			,{"","military",0.330}
			,{"5Rnd_86x70_L115A1","magazine",0.020}
			,{"10Rnd_127x99_m107","magazine",0.020}
			,{"machinegunammoexpl","single",0.050}
			,{"militaryclothes","single",0.040}
			,{"NVGoggles","weapon",0.020}
			,{"100Rnd_762x54_PK","magazine",0.050}
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		itemChance[] = {
			{"ItemMap","weapon",0.020}
			,{"ItemFlashlight","generic",0.010}
			,{"ItemKnife","generic",0.010}
			,{"ItemMatchbox_DZE","generic",0.030}
			,{"farmweapons","cfglootweapon",0.030}
			,{"","military",0.380}
			,{"WeaponHolder_ItemMachete","object",0.020}
			,{"","hunter",0.500}
		};
		itemChanceSmall[] = {
			{"ItemMap","weapon",0.020}
			,{"ItemFlashlight","weapon",0.020}
			,{"ItemKnife","weapon",0.020}
			,{"ItemMatchbox_DZE","weapon",0.040}
			,{"","military",0.400}
			,{"","hunter",0.500}
		};
	};
	class DynamicDebris: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemChance[] = {
			{"ItemWatch","generic",0.191}
			,{"ItemCompass","generic",0.012}
			,{"ItemMap","weapon",0.062}
			,{"Makarov","weapon",0.024}
			,{"Colt1911","weapon",0.024}
			,{"ItemFlashlight","generic",0.055}
			,{"ItemKnife","generic",0.055}
			,{"ItemMatchbox_DZE","generic",0.055}
			,{"ItemToolbox","weapon",0.022}
			,{"","generic",0.169}
			,{"","food",0.055}
			,{"PartGeneric","magazine",0.066}
			,{"PartWheel","magazine",0.055}
			,{"PartFueltank","magazine",0.033}
			,{"PartEngine","magazine",0.011}
			,{"PartGlass","magazine",0.078}
			,{"WeaponHolder_ItemJerrycan","object",0.033}
		};
	}; 
	class DynamicDebrisMilitary: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		itemChance[] = {
			{"ItemEtool","weapon",0.050}
			,{"ItemSandbag","magazine",0.100}
			,{"","military",0.080}
			,{"ItemWatch","generic",0.100}
			,{"ItemCompass","generic",0.020}
			,{"ItemMap","weapon",0.050}
			,{"MakarovSD","weapon",0.010}
			,{"Colt1911","weapon",0.020}
			,{"ItemFlashlight","generic",0.010}
			,{"ItemKnife","generic",0.050}
			,{"ItemMatchbox_DZE","generic",0.050}
			,{"ItemToolbox","weapon",0.020}
			,{"","generic",0.150}
			,{"","food",0.050}
			,{"PartGeneric","magazine",0.060}
			,{"PartWheel","magazine",0.050}
			,{"PartFueltank","magazine",0.030}
			,{"PartEngine","magazine",0.020}
			,{"PartGlass","magazine",0.030}
			,{"PartVRotor","magazine",0.020}
			,{"WeaponHolder_ItemJerrycan","object",0.030}
		};
	};
	class SupplyDrop: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemChance[] = {
			{"PartPlywoodPack","magazine",0.100}
			,{"PartPlankPack","magazine",0.200}
			,{"CinderBlocks","magazine",0.100}
			,{"MortarBucket","magazine",0.100}
			,{"bulk_PartGeneric","magazine",0.200}
			,{"bulk_ItemSandbag","magazine",0.100}
			,{"bulk_ItemTankTrap","magazine",0.100}
			,{"ItemSledge","weapon",0.100}
		};
	};
	class MassGrave: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemChance[] = {
			{"M16A2","weapon",0.030}
			,{"M16A2GL","weapon",0.010}
			,{"M249_EP1_DZ","weapon",0.010}
			,{"M9SD","weapon",0.020}
			,{"Pecheneg_DZ","weapon",0.010}
			,{"AK_74","weapon",0.020}
			,{"M4A1_Aim","weapon",0.010}
			,{"AKS_74_kobra","weapon",0.010}
			,{"AKS_74_U","weapon",0.020}
			,{"AK_47_M","weapon",0.020}
			,{"M24","weapon",0.010}
			,{"SVD_CAMO","weapon",0.010}
			,{"M1014","weapon",0.020}
			,{"BAF_LRR_scoped","weapon",0.010}
			,{"M4SPR","weapon",0.010}
			,{"M4A1","weapon",0.010}
			,{"M14_EP1","weapon",0.020}
			,{"UZI_EP1","weapon",0.030}
			,{"Remington870_lamp","weapon",0.010}
			,{"glock17_EP1","weapon",0.020}
			,{"M240_DZ","weapon",0.020}
			,{"M4A1_AIM_SD_camo","weapon",0.010}
			,{"M16A4_ACG","weapon",0.010}
			,{"M4A1_HWS_GL_camo","weapon",0.010}
			,{"Mk_48_DZ","weapon",0.010}
			,{"M4A3_CCO_EP1","weapon",0.010}
			,{"AmmoBoxSmall_556","object",0.030}
			,{"AmmoBoxSmall_762","object",0.030}
			,{"Binocular","weapon",0.010}
			,{"ItemFlashlightRed","military",0.020}
			,{"ItemKnife","military",0.010}
			,{"ItemGPS","weapon",0.010}
			,{"ItemMap","military",0.010}
			,{"Binocular_Vector","military",0.010}
			,{"DZ_ALICE_Pack_EP1","object",0.030}
			,{"DZ_TK_Assault_Pack_EP1","object",0.020}
			,{"DZ_British_ACU","object",0.020}
			,{"DZ_CivilBackpack_EP1","object",0.020}
			,{"DZ_Backpack_EP1","object",0.010}
			,{"DZ_LargeGunBag_EP1","object",0.010}
			,{"","medical",0.050}
			,{"","generic",0.050}
			,{"","military",0.130}
			,{"PipeBomb","magazine",0.010}
			,{"Sa58V_RCO_EP1","weapon",0.010}
			,{"Sa58V_CCO_EP1","weapon",0.010}
			,{"G36_C_SD_camo","weapon",0.010}
			,{"M40A3","weapon",0.010}
			,{"100Rnd_762x54_PK","magazine",0.010}
			,{"","militaryclothes",0.050}
			,{"WeaponHolder_ItemMachete","object",0.020}
			,{"SCAR_H_LNG_Sniper_SD","weapon",0.010}
			,{"2000Rnd_762x51_M134","magazine",0.010}
			,{"KSVK_DZE","weapon",0.010}
			,{"m240_scoped_EP1_DZE","weapon",0.010}
		};
	};
	#include "CfgLootPos.hpp"
};
