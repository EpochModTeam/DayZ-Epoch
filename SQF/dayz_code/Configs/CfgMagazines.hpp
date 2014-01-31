class CfgMagazines {
	class CA_Magazine;	// External class reference

	// Ammmo
	#include "CfgMagazines\VehicleAmmo.hpp"
	class 100Rnd_762x54_PK : CA_Magazine {
		scope = 2;
		displayName = "PKM Mag.";
		picture = "\CA\weapons\data\equip\m_pk_ca.paa";
		ammo = "B_762x54_Ball";
		count = 100;
		type = "256";
		initSpeed = 850;
		sound[] = {"\ca\Weapons\Data\Sound\PK_1_SS", 3.16228, 1, 1500};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 7.62x54mm <br/>Rounds: 100 <br/>Used in: PK";
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x54_PK.p3d";
	};
	class 100Rnd_762x51_M240 : CA_Magazine {
		scope = 2;
		displayName = "100Rnd. M240";
		picture = "\CA\weapons\data\equip\m_m240_ca.paa";
		count = 100;
		type = "256";
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
	};
	class 200Rnd_762x51_M240 : 100Rnd_762x51_M240 {
		count = 200;
	};
	class 200Rnd_556x45_M249 : CA_Magazine {
		scope = 2;
		displayName = "200Rnd. M249 Belt";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		ammo = "B_556x45_Ball";
		count = 200;
		type = "256";
		initSpeed = 915;
		sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS", 17.7828, 1, 1300};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload", 0.01, 1, 20};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\200Rnd_556x45_M249.p3d";
	};
	class 100Rnd_556x45_M249 : 200Rnd_556x45_M249 {
		displayName = "M249 Mag.";
		descriptionShort = "Caliber: 5.56x45mm NATO<br/>Rounds: 100<br/>Used in: M249";
		count = 100;
		picture = "\CA\weapons_E\Data\icons\m_m245_CA.paa";
	};
	class 100Rnd_556x45_BetaCMag: CA_Magazine {
		scope = 2;
		displayName = "MG36 Mag.";
		ammo = "B_556x45_Ball";
		count = 100;
		initSpeed = 920;
		picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
		type="256";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		descriptionShort = "Caliber: 5.56x45 mm NATO Rounds: 100 Used in: MG36, X8 SAW";
	};
	class 75Rnd_545x39_RPK: CA_Magazine {
		scope = 2;
		displayName = "75Rnd. RPK";
		ammo = "B_545x39_Ball";
		count = 75;
		type="256";
		picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 5.45x39mm Rounds: 75 Used in: RPK-74";
	};

	// Gems
	#include "CfgMagazines\DZE\Gems.hpp"
	// Items
	#include "CfgMagazines\DZE\Items.hpp"
	#include "CfgMagazines\DZE\Bulk.hpp"
	// Currency
	#include "CfgMagazines\DZE\Currency\Briefcase.hpp"
	#include "CfgMagazines\DZE\Currency\GoldBar.hpp"
	#include "CfgMagazines\DZE\Currency\SilverBar.hpp"
	#include "CfgMagazines\DZE\Currency\CopperBar.hpp"
	#include "CfgMagazines\DZE\Currency\BronzeBar.hpp"
	#include "CfgMagazines\DZE\Currency\AluminumBar.hpp"
	#include "CfgMagazines\DZE\Currency\TinBar.hpp"
	// Building Stuff
	#include "CfgMagazines\DZE\ModularBuilding.hpp"

	#include "CfgMagazines\Parts.hpp"
	#include "CfgMagazines\Skins.hpp"


	// ItemSoda
	#include "CfgMagazines\ItemSoda.hpp"
	#include "CfgMagazines\DZE\ItemSoda.hpp"

	class ItemCanvas: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Canvas";
		model = "\z\addons\dayz_epoch\models\canvas.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_canvas_ca.paa";
		descriptionShort = "Canvas Parcel";
		class ItemActions
		{
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_190;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentOld",1}};
				input[] = {{"ItemCanvas",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_191;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentDomed",1}};
				input[] = {{"ItemCanvas",3},{"ItemPole",3}};
			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_192;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentDomed2",1}};
				input[] = {{"ItemCanvas",3},{"ItemPole",3}};
			};
			class Crafting3
			{
				text = $STR_EPOCH_PLAYER_193;
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"sun_shade_kit",1}};
				input[] = {{"ItemCanvas",1},{"PartWoodLumber",4}};
			};
			class Crafting4
			{
				text = $STR_EPOCH_PLAYER_194;
				script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemBurlap",1}};
				input[] = {{"ItemCanvas",2}};
			};
		};
	};
	class ItemBurlap: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Burlap";
		model = "\z\addons\dayz_epoch\models\burlap.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_burlap_ca.paa";
		descriptionShort = "Burlap: A strong cloth like material used for building sandbags";
		class ItemActions
		{
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_195;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"sand"}; // todo add sand requirement
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemSandbag",1}};
				input[] = {{"ItemBurlap",3}};
			};
		};
	};
	class ItemLightBulb: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Light Bulb";
		model = "\z\addons\dayz_epoch\models\bulb.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_bulb_CA.paa";
		descriptionShort = "Lightbulb: Used in part to create a buildable lamp post. Don't tell me you didn't find this in a barn.";
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_196;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"light_pole_kit",1}};
				input[] = {{"ItemLightBulb",1},{"PartGeneric",1},{"PartWoodLumber",6}};
			};
		};
	};



	class ItemZombieParts: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Zombie Parts";
		model = "\z\addons\dayz_epoch\models\zombie_parts_bag_v2.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_zparts_CA.paa";
		descriptionShort = "Zombie Parts in a Bag: Trade these for Bio Meat at medic traders.";
	};

	class ItemComboLock: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Combination Lock";
		weight = 0.5;
		model = "\z\addons\dayz_epoch\models\combo_lock_mag.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_combolock_ca.paa";
		descriptionShort = "Used to secure structures from unauthorized entry.";

	};

	class ItemCorrugated : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Corrugated Fence";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Corrugated Fence: A buildable object used for fortification purposes.";
		class ItemActions {
			class Build {
				text = $STR_EPOCH_PLAYER_214;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Fence_corrugated_DZ";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_215;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"wooden_shed_kit",1}};
				input[] = {{"ItemCorrugated",2},{"PartWoodPlywood",4},{"PartWoodLumber",4}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_217;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"outhouse_kit",1}};
				input[] = {{"ItemCorrugated",1},{"PartWoodPlywood",3},{"PartWoodLumber",3},{"ItemTrashToiletpaper",1}};
			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_216;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"storage_shed_kit",1}};
				input[] = {{"ItemCorrugated",4},{"PartWoodPlywood",2},{"PartWoodLumber",2}};
			};
		};
	};
	class ItemPole: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Metal Pole";
		model = "\z\addons\dayz_epoch\models\pipe.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_pipe_CA.paa";
		descriptionShort = "Pole: A few sturdy metal poles used to craft tents and other buildables";
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_218;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemCorrugated",1}};
				input[] = {{"ItemPole",2},{"ItemTankTrap",2},{"PartWoodLumber",2}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_219;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"rusty_gate_kit",1}};
				input[] = {{"ItemPole",3},{"ItemTankTrap",1}};
			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_220;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"metal_panel_kit",1}};
				input[] = {{"ItemPole",4},{"ItemTankTrap",4}};
			};
			class Crafting3
			{
				text = $STR_EPOCH_PLAYER_305;
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemScaffoldingKit",1}};
				input[] = {{"ItemPole",4},{"ItemTankTrap",2},{"PartWoodLumber",4}};
			};
		};
	};
	class ItemGunRackKit: CA_Magazine
    {
        scope = 2;
        count = 1;
        type = 256;
        displayName = "Gun Rack Kit";
        descriptionShort = "A Gun Rack for 20 weapons";
        model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
        picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
        weight = 20;
        class ItemActions
        {
            class Build
            {
                    text = $STR_ACTIONS_BUILD;
                    script = "spawn player_build;";
                    require[] = {"ItemToolbox"};
                    create = "GunRack_DZ";
            };
        };
    };
	class ItemWoodCrateKit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Crate";
		descriptionShort = "A wood crate that holds a lot of items.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 20;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodCrate_DZ";
			};
		};
	};
	class ItemOilBarrel: CA_Magazine
	{
		scope = 2;
		count = 1;
		// fuelQuantity = 210;
		type = 256;
		displayName = "Oil Barrel";
		model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of Oil in a Barrel";
	};
	class ItemFuelBarrel: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 210;
		type = 256;
		displayName = "Fuel Barrel";
		model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of fuel per barrel";
	};
	class ItemFuelBarrelEmpty: ItemFuelBarrel
	{
		scope = 2;
		count = 1;
		fuelQuantity = 0;
		type = 256;
		displayName = "Fuel Barrel (Empty)";
		picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
		descriptionShort = "210 litres of fuel per barrel (Empty)";
		class ItemActions {
			class Crafting
			{
					text = $STR_EPOCH_PLAYER_276;
					script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
					neednearby[] = {};
					requiretools[] = {"ItemToolbox","ItemMatchbox_DZE"};
					output[] = {{"ItemFireBarrel_kit",1}};
					input[] = {{"ItemFuelBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
			};
		};
	};
	class ItemFireBarrel_kit: CA_Magazine
    {
            scope = 2;
            count = 1;
            type = 256;
            displayName = "Fire Barrel Kit";
            descriptionShort = "Fire Barrel";
            model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
            picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
            weight = 45;
            class ItemActions
            {
                class Build
                {
                    text = $STR_ACTIONS_BUILD;
                    script = "spawn player_build;";
                    require[] = {"ItemToolbox"};
                    create = "FireBarrel_DZ";
                };
            };
    };
	class ItemJerrycan: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 20;
		type = 256;
		displayName = $STR_EQUIP_NAME_19;
		model = "\dayz_equip\models\jerrycan.p3d";
		picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_19;
	};
	class ItemJerrycanEmpty: ItemJerrycan
	{
		fuelQuantity = 0;
		type = 256;
		displayName = $STR_EQUIP_NAME_39;
		picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_39;
	};

	class workbench_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Workbench";
		descriptionShort = "Workbench: Used to craft.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 10;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WorkBench_DZ";
			};
		};
	};

	// BUILDING KITS
	class wood_ramp_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Ramp";
		descriptionShort = "Wood ramp can be used to get air.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "WoodRamp_DZ";
			};
		};
	};
	class 30m_plot_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "30 Meter Plot";
		descriptionShort = "Plot Pole: A placeable pole that will allow you and your friends to build within a 30m radius. Ownership of plot pole is lost after owners death.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Plastic_Pole_EP1_DZ";
			};
		};
	};

	class metal_panel_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Metal Panel";
		descriptionShort = "Metal Panel: Strong metal wall used for base defence.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 50;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "MetalPanel_DZ";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_228;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop","fire"};
				requiretools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
				output[] = {{"metal_floor_kit",1}};
				input[] = {{"metal_panel_kit",4}};
			};
		};
	};
	class deer_stand_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Deer Stand";
		descriptionShort = "Deer Stand: can be used as a lookout.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "DeerStand_DZ";
			};
		};
	};
	class desert_large_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Desert Camo Net";
		descriptionShort = "Large Camo Netting: A very large buildable object that can be used to cover objects.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "DesertLargeCamoNet_DZ";
			};
		};
	};
	class forest_large_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Forest Camo Net";
		descriptionShort = "Large Camo Netting: A very large buildable object that can be used to cover objects.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "ForestLargeCamoNet_DZ";
			};
		};
	};
	class desert_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Desert Camo Net";
		descriptionShort = "Camo Netting: A buildable object that can be used to cover objects.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "DesertCamoNet_DZ";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_229;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_large_net_kit",1}};
				input[] = {{"desert_net_kit",3}};
			};
		};
	};
	class forest_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Forest Camo Net";
		descriptionShort = "Camo Netting: A buildable object that can be used to cover objects.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "ForestCamoNet_DZ";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_229;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"forest_large_net_kit",1}};
				input[] = {{"forest_net_kit",3}};
			};
		};
	};
	class fuel_pump_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Fuel Pump";
		descriptionShort = "Fuel Pump";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 50;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "FuelPump_DZ";
			};
		};
	};
	class light_pole_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Light Pole";
		descriptionShort = "Light Pole: A buildable object that can be used with a Generator to provide light in times of darkness.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "LightPole_DZ";
			};
		};
	};
	class stick_fence_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Stick Fence";
		descriptionShort = "Stick Fence: A buildable barrier that can be used to keep zombies out of your camp. They are fairly weak and can be ran over easier.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 15;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "StickFence_DZ";
			};
		};
	};
	class wooden_shed_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Nice Wooden Shed";
		descriptionShort = "Nice Wooden Shed: A crafted object that holds a lot of items/weapons/backpacks and has a door that opens and closes.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Wooden_shed_DZ";
			};
		};
	};
	class wood_shack_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Shack";
		descriptionShort = "Wood Shack";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "WoodShack_DZ";
			};
		};
	};
	class m240_nest_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "M240 Nest";
		descriptionShort = "M240 Nest";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 125;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "M240Nest_DZ";
			};
		};
	};
	class sun_shade_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Canvas Sun Shade";
		descriptionShort = "Sun Shade: A buildable object used to keep the sun off your back.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "CanvasHut_DZ";
			};
		};
	};
	class park_bench_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Bench";
		descriptionShort = "Wood Bench";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "ParkBench_DZ";
			};
		};
	};
	class rusty_gate_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Rusty Gate";
		descriptionShort = "Rusty Gate: A buildable object that can be opened and closed.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "MetalGate_DZ";
			};
		};
	};
	class sandbag_nest_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Sandbag Nest";
		descriptionShort = "Sandbag Nest: A buildable fortification object, can be removed.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 50;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "SandNest_DZ";
			};
		};
	};
	class outhouse_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Outhouse";
		descriptionShort = "Outhouse: A buildable object that you can poop in. Comes pre-stocked with one roll of Toilet Paper.";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "OutHouse_DZ";
			};
		};
	};
	class storage_shed_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Storage Shed";
		descriptionShort = "Storage Shed: A large buildable object that is non enterable and holds a lot of items/weapons/backpacks";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 75;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "StorageShed_DZ";
			};
		};
	};

	class ItemGenerator: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_31;
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_31;
		weight = 30;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Generator_DZ";
			};
		};
	};
	class ItemFuelPump: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Fuel Pump";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Fuel Pumps can be used to create a refuel station";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "FuelPump_DZ";
				neednearby[] = {"fueltank"};
			};
		};
	};
	class ItemScaffoldingKit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Scaffolding";
		descriptionShort = "";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 80;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Scaffolding_DZ";
			};
		};
	};
	// Custom player vault
	class ItemVault: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Safe";
		model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
		descriptionShort = "Personal Safe: A placeable object that is used for very secure storage. WARNING!!! Placing your safe will give you a 4 digit number that is used to open the safe, save that number!";
		class ItemActions
		{
			class Build {
				text = $STR_EPOCH_PLAYER_230;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "VaultStorageLocked";
			};
		};
	};
	class ItemLockbox: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Lockbox";
		model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_lockbox_CA.paa";
		descriptionShort = "Semi secure lockbox";
		weight = 15;
		class ItemActions
		{
			class Build {
				text = $STR_EPOCH_PLAYER_231;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "LockboxStorageLocked";
			};
		};
	};



	class PartEngine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_11;
		model = "\dayz_equip\models\engine.p3d";
		picture = "\dayz_equip\textures\equip_engine_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_11;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_212;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"PartGeneric",2}};
				input[] = {{"PartEngine",1}};
			};
		};
	};
	class PartWoodPile: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_40;
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_40;
		class ItemActions {
			class Build {
				text = $STR_EPOCH_PLAYER_241;
				script = "spawn player_build;";
				require[] = {"ItemMatchbox_DZE"};
				create = "Land_Fire_DZ";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_242;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"PartWoodLumber",1}};
				input[] = {{"PartWoodPile",2}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_243;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemKnife"};
				output[] = {{"WoodenArrow",3}};
				input[] = {{"PartWoodPile",1},{"ItemTrashRazor",1}};

			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_244;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"stick_fence_kit",1}};
				input[] = {{"PartWoodPile",6}};

			};

		};
	};
	class PartPlankPack: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Lumber Pack";
		model = "\z\addons\dayz_epoch\models\plank_pack.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_lumber_pack_CA.paa";
		descriptionShort = "Lumber in a stack";
		weight = 6;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_251;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"PartWoodLumber",3}};
				input[] = {{"PartPlankPack",1}};
			};
		};
	};
	class CinderBlocks: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Cinder Blocks";
		model = "\z\addons\dayz_epoch\models\cinder_stack.p3d";
		picture = "\z\addons\dayz_epoch\pictures\epuip_cinder_blocks_CA.paa";
		descriptionShort = "Stack of nine cinder blocks";
		weight = 100;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_252;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"cinder_wall_kit",1}};
				input[] = {{"CinderBlocks",3},{"MortarBucket",1}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_253;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"cinder_garage_kit",1}};
				input[] = {{"CinderBlocks",3},{"MortarBucket",1},{"ItemTankTrap",1}};
			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_234;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"cinder_door_kit",1}};
				input[] = {{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",1}};
			};


		};
	};
	class MortarBucket: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Bucket of Mortar";
		model = "\z\addons\dayz_epoch\models\mortar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_mortar_CA.paa";
		descriptionShort = "Premixed mastic adhesive that will bond to concrete block.";
		weight = 21;
	};
	class PartPlywoodPack: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Plywood Pack";
		model = "\z\addons\dayz_epoch\models\plywood_pack.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_plywood_pack_CA.paa";
		descriptionShort = "Plywood in a stack";
		weight = 12;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_251;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"PartWoodPlywood",3}};
				input[] = {{"PartPlywoodPack",1}};
			};

		};
	};
	class PartWoodLumber: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Lumber";
		model = "\z\addons\dayz_epoch\models\planks.p3d";
		picture="\z\addons\dayz_epoch\pictures\equip_wood_planks_CA.paa";
		descriptionShort = "Lumber: Used for building many structures and can also be used to make plywood.";
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_254;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"PartWoodPlywood",1}};
				input[] = {{"PartWoodLumber",2}};

			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_255;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_empty",1}};
				input[] = {{"PartWoodLumber",2},{"PartGeneric",1}};

			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_256;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"deer_stand_kit",1}};
				input[] = {{"PartWoodLumber",8},{"PartWoodPile",2}};

			};

			class Crafting3
			{
				text = $STR_EPOCH_PLAYER_257;
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodStairs",1}};
				input[] = {{"PartWoodLumber",8}};

			};
			class Crafting4
			{
				text = $STR_EPOCH_PLAYER_258;
				script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodLadder",1}};
				input[] = {{"PartWoodLumber",8}};

			};
			class Crafting5
        		{
			        text = $STR_EPOCH_PLAYER_259;
			        Script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			        neednearby[] = {"workshop"};
			        requiretools[] = {"ItemToolbox"};
			        output[] = {{"PartPlankPack",1}};
			        input[] = {{"PartWoodLumber",3}};
        		};
        		class Crafting6
        		{
	        		text = $STR_EPOCH_PLAYER_277;
			        Script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			        neednearby[] = {"workshop"};
			        requiretools[] = {"ItemToolbox"};
			        output[] = {{"ItemGunRackKit",1}};
			        input[] = {{"PartWoodLumber",6}};
			};
        	class Crafting7
			{
				text = $STR_EPOCH_PLAYER_304;
				Script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodCrateKit",1}};
				input[] = {{"PartWoodLumber",6}};
			};
		};
	};
	class PartWoodPlywood: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Plywood";
		model = "\z\addons\dayz_epoch\models\plywood.p3d";
		picture="\z\addons\dayz_epoch\pictures\equip_plywood_CA.paa";
		descriptionShort = "Plywood: Used for building many structures.";
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_260;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"workbench_kit",1}};
				input[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};

			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_261;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"wood_shack_kit",1}};
				input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};
			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_262;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemWoodFloorQuarter",1}};
				input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
			};
			class Crafting3
			{
				text = $STR_EPOCH_PLAYER_263;
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemWoodWallThird",1}};
				input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
			};
			class Crafting4
		        {
		                text = $STR_EPOCH_PLAYER_264;
		                Script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
		                neednearby[] = {"workshop"};
		                requiretools[] = {"ItemToolbox"};
		                output[] = {{"PartPlywoodPack",1}};
		                input[] = {{"PartWoodPlywood",3}};
		        };

		};
	};
	class PartOre: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Iron Ore";
		model = "\z\addons\dayz_epoch\models\iron_ore.p3d";
		picture="\z\addons\dayz_epoch\pictures\equip_iron_ore_CA.paa";
		descriptionShort = "Used for crafting scrap metal. Can be mined from rocks using a sledgehammer.";
		weight = 1;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_265;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemSledge"};
				output[] = {{"PartGeneric",1},{"ItemWaterbottleUnfilled",1}};
				input[] = {{"PartOre",4},{"ItemWaterbottle",1}};
			};
		};
	};
	class PartOreSilver: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Silver Ore";
		model = "\z\addons\dayz_epoch\models\silver_ore.p3d";
		picture="\z\addons\dayz_epoch\pictures\equip_silver_ore_CA.paa";
		descriptionShort = "Can be mined from rocks using a sledgehammer.";
		weight = 1;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_266;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemSledge"};
				output[] = {{"ItemSilverBar",1},{"ItemWaterbottleUnfilled",1}};
				input[] = {{"PartOreSilver",1},{"ItemWaterbottle",1}};
			};
		};
	};
	class PartOreGold: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Gold Ore";
		model = "\z\addons\dayz_epoch\models\gold_ore.p3d";
		picture="\z\addons\dayz_epoch\pictures\equip_gold_ore_CA.paa";
		descriptionShort = "Can be mined from rocks using a sledgehammer.";
		weight = 1;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_267;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemSledge"};
				output[] = {{"ItemGoldBar",1},{"ItemWaterbottleUnfilled",1}};
				input[] = {{"PartOreGold",1},{"ItemWaterbottle",1}};
			};
		};
	};
	class PartVRotor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_32;
		model = "\dayz_equip\models\vrotor.p3d";
		picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_32;
		 class ItemActions {
            class Crafting
            {
                text = $STR_EPOCH_PLAYER_212;
                script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
                neednearby[] = {"workshop"};
                requiretools[] = {"ItemToolbox","ItemCrowbar"};
                output[] = {{"PartGeneric",3}};
                input[] = {{"PartVRotor",1}};
            };
        };
	};
	class PartGlass: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_30;
		model = "\dayz_equip\models\carglass.p3d";
		picture = "\dayz_equip\textures\equip_carglass_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_30;
	};

	class ItemTent;
	class ItemTentOld: ItemTent
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_20;
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_20;
		weight = 5;
		class ItemActions
		{
			class Build {
				text = $STR_PITCH_TENT;
				script = "spawn player_build;";
				require[] = {};
				create = "TentStorage";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_270;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_271;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"forest_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
		};
	};
	class ItemTentDomed : ItemTent {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Camping Tent Desert";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = "A domed camping tent desert that can be pitched, allowing you extended storage.";

		class ItemActions {
			class Build {
				text = $STR_PITCH_TENT;
				script = "spawn player_build;";
				require[] = {};
				create = "TentStorageDomed";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_270;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_271;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"forest_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
		};
	};
	class ItemTentDomed2 : ItemTent {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Camping Tent Green";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = "A domed camping tent desert that can be pitched, allowing you extended storage.";
		class ItemActions {
			class Build {
				text = $STR_PITCH_TENT;
				script = "spawn player_build;";
				require[] = {};
				create = "TentStorageDomed2";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_270;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_271;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"forest_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
		};
	};

	class ItemSandbag : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_21;
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_21;

		class ItemActions {
			class Build {
				text = $STR_EPOCH_PLAYER_272;
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Sandbag1_DZ";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_273;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemSandbagLarge",1}};
				input[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
			};
			class Crafting1
			{
				text = $STR_EPOCH_PLAYER_274;
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"sandbag_nest_kit",1}};
				input[] = {{"ItemSandbag",4},{"PartWoodPlywood",2},{"PartWoodLumber",4}};
			};
			class Crafting2
			{
				text = $STR_EPOCH_PLAYER_298;
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"BagFenceRound_DZ_kit",1}};
				input[] = {{"ItemSandbag",1}};
			};
			/*
			class Crafting3
			{
				text = "Craft M240 Nest";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox","M240_DZ"};
				output[] = {{"m240_nest_kit",1}};
				input[] = {{"ItemSandbag",4},{"ItemCanvas",1},{"PartWoodPlywood",4},{"PartWoodLumber",3}};
				inputweapons[] = {"M240_DZ"};
			};
			*/

		};
	};

	class BagFenceRound_DZ_kit : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Round Sandbag Fence";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_21;

		class ItemActions {
			class Build {
				text = $STR_EPOCH_PLAYER_299;
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "BagFenceRound_DZ";
			};
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_300;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemSandbag",1}};
				input[] = {{"BagFenceRound_DZ_kit",1}};
			};
		};
	};

	class ItemSledgeHead : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Sledgehammer Head";
		model = "\z\addons\dayz_epoch\models\sledge_head.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_sledge_head_ca.paa";
		descriptionShort = "Combine with a handle to make a Sledgehammer";
		weight = 9;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_275;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {};
				outputweapons[] = {"ItemSledge"};
				input[] = {{"ItemSledgeHead",1},{"ItemSledgeHandle",1}};
			};
		};
	};
	class ItemSledgeHandle : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Sledgehammer Handle";
		model = "\z\addons\dayz_epoch\models\sledge_handle.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_sledge_handle_ca.paa";
		descriptionShort = "Combine with a head to make a Sledgehammer";
		weight = 1;
		class ItemActions {
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_275;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {};
				outputweapons[] = {"ItemSledge"};
				input[] = {{"ItemSledgeHead",1},{"ItemSledgeHandle",1}};
			};
		};
	};

	class ItemSandbagLarge : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "H-barrier cube";
		model = "\dayz_equip\models\sandbags.p3d"; // TODO model
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = "Hesco berrier: A buildable object that is used for fortification purposes.";
		weight = 50;
		class ItemActions {
			class Build {
				text = "Build H-barrier cube";
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Land_HBarrier1_DZ";
			};
			class Crafting
			{
				text = "Craft Triple H-barrier";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemSandbagExLarge",1}};
				input[] = {{"ItemSandbagLarge",3}};
			};
		};
	};


	class ItemSandbagExLarge : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "3 x H-barrier cube";
		model = "\dayz_equip\models\sandbags.p3d"; // TODO model
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = "Hesco berrier: A buildable object that is used for fortification purposes.";
		weight = 150;
		class ItemActions {
			class Build {
				text = "Build Triple H-barrier";
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Land_HBarrier3_DZ";
			};
			class Crafting
                        {
                                text = "Craft 5x H-barrier";
                                script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
                                neednearby[] = {};
                                requiretools[] = {"ItemEtool","ItemToolbox"};
                                output[] = {{"ItemSandbagExLarge5x",1}};
                                input[] = {{"ItemSandbagExLarge",1},{"ItemSandbagLarge",2}};
                        };
		};
	};

	class ItemSandbagExLarge5x : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "5 x H-barrier cube";
		model = "\dayz_equip\models\sandbags.p3d"; // TODO model
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = "Hesco berrier: A buildable object that is used for fortification purposes.";
		weight = 200;
		class ItemActions {
			class Build {
				text = "Build 5x H-barrier";
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Land_HBarrier5_DZ";
			};
		};
	};

	class ItemTankTrap : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_22;
		model = "\dayz_equip\models\tank_trap_kit.p3d";
		picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_22;

		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Hedgehog_DZ";
			};
		};
	};

	class TrapBear : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap_gear.p3d";
		picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
		descriptionShort = "Place to add a bear trap";

		class ItemActions {
			class Build {
				text = "Place Trap";
				script = "spawn player_setTrap;";
				require[] = {"ItemToolbox"};
				create = "BearTrap_DZ";
			};
		};
	};

	class ItemWire : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_23;
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_23;

		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Fort_RazorWire";
			};
		};
	};

	class Quiver : CA_Magazine
	{
		scope = public;
		ammo = "WoodenArrow";
		count = 6;
		descriptionshort = "Small Quiver used with the Crossbow, Max arrows 6.";
		displayname = "Quiver";
		initSpeed = 150;
		model = "\z\addons\dayz_communityassets\models\quiver";
		picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
	};

	class WoodenArrow : CA_Magazine {
		scope = public;
		displayName = "Arrow"; //$STR_MAG_NAME_3;
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
		ammo = "WoodenArrow";
		count = 1;
		initSpeed = 150;
		descriptionShort = "Arrow made out of wood, used with the Crossbow."; //$STR_MAG_DESC_3;

		class ItemActions {
			class ReloadMag {
				text = "Combine into Quiver";
				script = "spawn player_reloadMag;";
				use[] = {"WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow"};
				output[] = {"Quiver"};
			};
		};
	};

	// Food
	#include "CfgMagazines\Food.hpp"
	#include "CfgMagazines\DZE\Food.hpp"

	class FoodDrink;
	class ItemWaterbottle: FoodDrink
	{
		scope = 2;
		refillable = 1;
		sfx = "drink";
		wateroz = 10;
		displayName = "$STR_EQUIP_NAME_12";
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle10oz_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_12";
	};
	class ItemWaterbottleUnfilled: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_13";
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_13";
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};

	class ItemWaterbottleBoiled : ItemWaterbottle {
		displayName = $STR_ITEMWATERBOTTLEBOILED_CODE_NAME;
		descriptionShort = $STR_ITEMWATERBOTTLEBOILED_CODE_DESC;
	};

	class ItemWaterbottle1oz : ItemWaterbottle {
		displayName = "Water Bottle (1oz)";
		descriptionShort = "Watter Bottle with 1oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle1oz_ca.paa";
		wateroz = 1;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle2oz : ItemWaterbottle {
		displayName = "Water Bottle (2oz)";
		descriptionShort = "Watter Bottle with 2oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle2oz_ca.paa";
		wateroz = 2;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle3oz : ItemWaterbottle {
		displayName = "Water Bottle (3oz)";
		descriptionShort = "Watter Bottle with 3oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle3oz_ca.paa";
		wateroz = 3;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle4oz : ItemWaterbottle {
		displayName = "Water Bottle (4oz)";
		descriptionShort = "Watter Bottle with 4oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle4oz_ca.paa";
		wateroz = 4;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle5oz : ItemWaterbottle {
		displayName = "Water Bottle (5oz)";
		descriptionShort = "Watter Bottle with 5oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle5oz_ca.paa";
		wateroz = 5;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle6oz : ItemWaterbottle {
		displayName = "Water Bottle (6oz)";
		descriptionShort = "Watter Bottle with 6oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle6oz_ca.paa";
		wateroz = 6;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle7oz : ItemWaterbottle {
		displayName = "Water Bottle (7oz)";
		descriptionShort = "Watter Bottle with 7oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle7oz_ca.paa";
		wateroz = 7;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle8oz : ItemWaterbottle {
		displayName = "Water Bottle (8oz)";
		descriptionShort = "Watter Bottle with 8oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle8oz_ca.paa";
		wateroz = 8;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemWaterbottle9oz : ItemWaterbottle {
		displayName = "Water Bottle (9oz)";
		descriptionShort = "Watter Bottle with 9oz of water";
		picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle9oz_ca.paa";
		wateroz = 9;
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};


	#include "CfgMagazines\MeleeSwing.hpp"

	class HandGrenade_Stone;
	class ItemTrashToiletpaper : HandGrenade_Stone {
		scope = public;
		count = 1;
		displayName = $STR_JUNK_NAME_TOILETPAPER;
		descriptionShort = $STR_JUNK_DESC_TOILETPAPER;
		model = "z\addons\dayz_communityassets\models\toiletpaper.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_toiletpaper_CA.paa";
		type = 256;
		ammo = "GrenadeHand_Stone";
	};
	class ItemTrashRazor : CA_Magazine {
		scope = public;
		count = 1;
		displayName = $STR_JUNK_NAME_RAZOR;
		descriptionShort = $STR_JUNK_DESC_RAZOR;
		model = "\z\addons\dayz_communityassets\models\razor.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_razor_CA.paa";
		type = 256;
	};

	class ItemKiloHemp : CA_Magazine {
		scope = public;
		count = 1;
		displayName = "Kilo of Hemp";
		descriptionShort = "Kilo of Hemp";
		weight = 1;
		model = "z\addons\dayz_epoch\models\kilohemp.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
		type = 256;
		class ItemActions
		{
			class Crafting
			{
				text = $STR_EPOCH_PLAYER_269;
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemCanvas",1}};
				input[] = {{"ItemKiloHemp",1}};
			};
		};
	};



	class 8Rnd_B_Beneli_74Slug;
	class 8Rnd_B_Beneli_Pellets;

	class 2Rnd_shotgun_74Slug: 8Rnd_B_Beneli_74Slug
	{
		displayName="2Rnd. Slug";
		count=2;
		descriptionShort="Caliber: 12 gauge <br/>Rounds: 2 <br/>Used in: M1014";
		model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_slugshot_CA.paa";
		class ItemActions
		{
			class ReloadMag
			{
				text="Combine to 8 rounds";
				script="spawn player_reloadMag;";
				use[]=
				{
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug"
				};
				output[]=
				{
					"8Rnd_B_Beneli_74Slug"
				};
			};
		};
	};
	class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets
	{
		displayName="2Rnd. Pellets";
		count=2;
		descriptionShort="Caliber: 12 gauge <br/>Rounds: 2 Pellets<br/>Used in: M1014";
		model = "\z\addons\dayz_communityassets\models\2shells_pellet.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_pellet_CA.paa";
		weight = 0.1;
		class ItemActions
		{
			class ReloadMag
			{
				text="Combine to 8 rounds";
				script="spawn player_reloadMag;";
				use[]=
				{
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets"
				};
				output[]=
				{
					"8Rnd_B_Beneli_Pellets"
				};
			};
		};
	};
};
