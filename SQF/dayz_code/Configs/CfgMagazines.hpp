class CfgMagazines {
	class CA_Magazine;	// External class reference

	// Ammmo
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

	class 29Rnd_30mm_AGS30 : CA_Magazine { 
		scope = 2; 
		displayName = "HE Rounds"; 
		model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";
		ammo = "G_30mm_HE"; 
		count = 29; 
		type = "256";
		initSpeed = 185; 
		maxLeadSpeed = 100; 
		nameSound = "grenadelauncher"; 
		weight = 16;
	};

	class 50Rnd_127x107_DSHKM : CA_Magazine { 
		scope = 2; 
		displayName = "DShKM"; 
		picture = "\z\addons\dayz_epoch\pictures\equip_Dshkm_mag_ca.paa";
		model = "\z\addons\dayz_epoch\models\dshkm_mag.p3d";
		ammo = "B_127x107_Ball"; 
		count = 50; 
		type = "256";
		initSpeed = 850; 
		maxLeadSpeed = 200; 
		tracersEvery = 3; 
		lastRoundsTracer = 5; 
		nameSound = "mgun"; 
		weight = 4;
	};
	class 100Rnd_127x99_M2 : CA_Magazine { 
		scope = 2; 
		displayName = "M2 Machine Gun"; 
		model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";
		ammo = "B_127x99_Ball"; 
		count = 100; 
		type = "256";
		initSpeed = 930; 
		maxLeadSpeed = 200; 
		tracersEvery = 3; 
		lastRoundsTracer = 5; 
		nameSound = "mgun"; 
		weight = 8;
	};
	class 2000Rnd_762x51_M134 : CA_Magazine { 
		count = 2000; 
		scope = 2; 
		displayName = "M134 7.62 Nato"; 
		picture = "\z\addons\dayz_epoch\pictures\equip_m136_mag_ca.paa";
		model = "\z\addons\dayz_epoch\models\m136_mag.p3d";
		ammo = "B_762x51_3RndBurst"; 
		type = "256";
		maxLeadSpeed = 200; 
		tracersEvery = 5; 
		nameSound = "mgun";
		weight = 50;
	};
	class 48Rnd_40mm_MK19 : CA_Magazine { 
		scope = 2; 
		displayName = "Mk. 19 40mm"; 
		model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
		ammo = "G_40mm_HE"; 
		count = 48; 
		type = "256";
		initSpeed = 240; 
		maxLeadSpeed = 100; 
		nameSound = "grenadelauncher"; 
		weight = 25;
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


	 // Items
	class ItemHotwireKit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Hotwire kit";
		model = "\z\addons\dayz_epoch\models\hotwire.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_hotwire_ca.paa";
		descriptionShort = "Used to temporarily unlock and start a vehicle has a chance of failure and is consumed on use.";
		weight = 2;
	};

	class ItemDocument: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Document";
		model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
		descriptionShort = "Unknown document";
		weight = 0.1;
		sfx = "document"
		class ItemActions
		{
			class Crafting
			{
				text = "Examine";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				randomOutput = 1;
				output[] = {{"ItemLetter",1},{"ItemDocumentRamp",1},{"ItemBook1",1},{"ItemBook2",1},{"ItemBook3",1},{"ItemBook4",1},{"ItemNewspaper",1}};
				input[] = {{"ItemDocument",1}};
			};
		};

	};
	class ItemLetter: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Letter";
		model = "\z\addons\dayz_epoch\models\doc_letter.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_doc_letter_ca.paa";
		descriptionShort = "Random letter";
		weight = 0.1;
	};
	class ItemBook1: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Romance Novel";
		model = "\z\addons\dayz_epoch\models\doc_trashy1.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_trashy1_ca.paa";
		descriptionShort = "Trashy Romance Novel - ""The seas are laden with lust and jealousy.""";
		weight = 0.1;
	};
	class ItemBook2: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Romance Novel";
		model = "\z\addons\dayz_epoch\models\doc_trashy2.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_trashy2_ca.paa";
		descriptionShort = "Trashy Romance Novel - ""He had a chest of iron, and a heart of gold.""";
		weight = 0.1;
	};
	class ItemBook3: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Book";
		model = "\z\addons\dayz_epoch\models\doc_child1.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
		descriptionShort = "Random Children's Book";
		weight = 0.1;
	};
	class ItemBook4: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Book";
		model = "\z\addons\dayz_epoch\models\doc_child2.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
		descriptionShort = "Random Children's Book";
		weight = 0.1;
	};
	class ItemNewspaper: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Torn Newspaper";
		model = "\z\addons\dayz_epoch\models\doc_deaths.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_deaths_ca.paa";
		descriptionShort = "Torn Newspaper - ""The recent obituaries are stil legible...""";
		weight = 0.1;
	};
	class ItemDocumentRamp: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "HowTo: Wood Ramp";
		model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
		descriptionShort = "Document used in building a wooden ramp.";
		weight = 0.1;
		class ItemActions
		{
			class Crafting
			{
				text = "Craft Ramp";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"wood_ramp_kit",1}};
				input[] = {{"ItemDocumentRamp",1},{"PartWoodLumber",8}};
			};
		};
	};

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
				text = "Craft Tent";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentOld",1}};
				input[] = {{"ItemCanvas",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = "Craft Desert Tent";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentDomed",1}};
				input[] = {{"ItemCanvas",3},{"ItemPole",3}};
			};
			class Crafting2
			{
				text = "Craft Green Tent";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentDomed2",1}};
				input[] = {{"ItemCanvas",3},{"ItemPole",3}};
			};
			class Crafting3
			{
				text = "Craft Sun Shade";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"sun_shade_kit",1}};
				input[] = {{"ItemCanvas",1},{"PartWoodLumber",4}};
			};
			class Crafting4
			{
				text = "Craft Burlap";
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
				text = "Craft Sandbag";
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
				text = "Craft Light Pole";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"light_pole_kit",1}};
				input[] = {{"ItemLightBulb",1},{"PartGeneric",1},{"PartWoodLumber",6}};
			};
		};
	};
	class ItemBriefcase_Base: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Briefcase";
		model = "\z\addons\dayz_epoch\models\briefcase.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_CA.paa";
	};
	class ItemBriefcaseEmpty: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
		descriptionShort = "Empty Briefcase";
		weight = 1;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase10oz",1}};
				input[] = {{"ItemBriefcaseEmpty",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 10 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcaseEmpty",1},{"ItemGoldBar10oz",10}};
			};
		};
	};	
	class ItemBriefcase10oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_10oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 1 x 10oz Gold Bar)";
		weight = 1.2;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase20oz",1}};
				input[] = {{"ItemBriefcase10oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 9 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase10oz",1},{"ItemGoldBar10oz",9}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase10oz",1}};
			};
		};

	};	
	class ItemBriefcase20oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_20oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 2 x 10oz Gold Bar)";
		weight = 1.5;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase30oz",1}};
				input[] = {{"ItemBriefcase20oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 8 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase20oz",1},{"ItemGoldBar10oz",8}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase10oz",1}};
				input[] = {{"ItemBriefcase20oz",1}};
			};
			class Crafting3
			{
				text = "Empty Case";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",2},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase20oz",1}};
			};
		};
	};	
	class ItemBriefcase30oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_30oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 3 x 10oz Gold Bar)";
		weight = 1.8;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase40oz",1}};
				input[] = {{"ItemBriefcase30oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 7 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase30oz",1},{"ItemGoldBar10oz",7}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase20oz",1}};
				input[] = {{"ItemBriefcase30oz",1}};
			};
			class Crafting3
			{
				text = "Empty Case";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",3},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase30oz",1}};
			};
		};
	};	
	class ItemBriefcase40oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_40oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 4 x 10oz Gold Bar)";
		weight = 2.1;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase50oz",1}};
				input[] = {{"ItemBriefcase40oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 6 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase40oz",1},{"ItemGoldBar10oz",6}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase30oz",1}};
				input[] = {{"ItemBriefcase40oz",1}};
			};
			class Crafting3
			{
				text = "Empty Case";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",4},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase40oz",1}};
			};
		};
	};	
	class ItemBriefcase50oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_50oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 5 x 10oz Gold Bar)";
		weight = 2.4;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase60oz",1}};
				input[] = {{"ItemBriefcase50oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 5 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase50oz",1},{"ItemGoldBar10oz",5}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase40oz",1}};
				input[] = {{"ItemBriefcase50oz",1}};
			};
			class Crafting3
			{
				text = "Empty Case";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",5},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase50oz",1}};
			};
		};
	};	
	class ItemBriefcase60oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_60oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 6 x 10oz Gold Bar)";
		weight = 2.7;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase70oz",1}};
				input[] = {{"ItemBriefcase60oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 4 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase60oz",1},{"ItemGoldBar10oz",4}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase50oz",1}};
				input[] = {{"ItemBriefcase60oz",1}};
			};
			class Crafting3
			{
				text = "Empty Case";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",6},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase60oz",1}};
			};
		};
	};	
	class ItemBriefcase70oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_70oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 7 x 10oz Gold Bar)";
		weight = 2.9;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase80oz",1}};
				input[] = {{"ItemBriefcase70oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 3 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase70oz",1},{"ItemGoldBar10oz",3}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase60oz",1}};
				input[] = {{"ItemBriefcase70oz",1}};
			};
			class Crafting3
			{
				text = "Empty Case";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",7},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase70oz",1}};
			};
		};
	};	
	class ItemBriefcase80oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_80oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 8 x 10oz Gold Bar)";
		weight = 3.2;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase90oz",1}};
				input[] = {{"ItemBriefcase80oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Add 2 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase80oz",1},{"ItemGoldBar10oz",2}};
			};
			class Crafting2
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase70oz",1}};
				input[] = {{"ItemBriefcase80oz",1}};
			};
			class Crafting3
			{
				text = "Empty Case";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",8},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase80oz",1}};
			};
		};
	};	
	class ItemBriefcase90oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_90oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 9 x 10oz Gold Bar)";
		weight = 3.5;
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemBriefcase100oz",1}};
				input[] = {{"ItemBriefcase90oz",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase80oz",1}};
				input[] = {{"ItemBriefcase90oz",1}};
			};
			class Crafting2
			{
				text = "Empty Case";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",9},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase90oz",1}};
			};
		};
	};
	class ItemBriefcase100oz: ItemBriefcase_Base
	{
		picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_100oz_CA.paa";
		descriptionShort = "Briefcase (Contains: 10 x 10oz Gold Bar)";
		weight = 3.8;
		class ItemActions
		{
			class Crafting
			{
				text = "Remove 1 10oz Gold";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1},{"ItemBriefcase90oz",1}};
				input[] = {{"ItemBriefcase100oz",1}};
			};
			class Crafting1
			{
				text = "Empty Case";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",10},{"ItemBriefcaseEmpty",1}};
				input[] = {{"ItemBriefcase100oz",1}};
			};
		};
	};
	class ItemGoldBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Gold";
		model = "\z\addons\dayz_epoch\models\gold_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
		descriptionShort = "Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1}};
				input[] = {{"ItemGoldBar",10}};
				
			};
			/*
			class Crafting
			{
				text = "Add 1oz Bar";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar2oz",1}};
				input[] = {{"ItemGoldBar",2}};
				
			};
			class Crafting1
			{
				text = "Add 10 1oz bars";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				output[] = {{"ItemGoldBar10oz",1}};
				input[] = {{"ItemGoldBar",10}};
				
			};
			*/
		};
	};
	/*
	class ItemGoldBar2oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Gold 2oz";
		model = "\z\addons\dayz_epoch\models\gold_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
		descriptionShort = "2 x 1oz Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1oz Bar";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemGoldBar3oz",1}};
				input[] = {{"ItemGoldBar2oz",1},{"ItemGoldBar",1}};
				
			};
		};
	};
	class ItemGoldBar2oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Gold 2oz";
		model = "\z\addons\dayz_epoch\models\gold_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
		descriptionShort = "2 x 1oz Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Add 1oz Bar";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemGoldBar4oz",1}};
				input[] = {{"ItemGoldBar3oz",1},{"ItemGoldBar",1}};
				
			};
		};
	};
	*/
	class ItemGoldBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Gold";
		model = "\z\addons\dayz_epoch\models\gold_bar_10oz.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_10oz_CA.paa";
		descriptionShort = "10oz Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemGoldBar",10}};
				input[] = {{"ItemGoldBar10oz",1}};
			};
		};
	};
	class ItemSilverBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Silver";
		model = "\z\addons\dayz_epoch\models\silver_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
		descriptionShort = "Silver Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemSilverBar10oz",1}};
				input[] = {{"ItemSilverBar",10}};
			};
		};
	};
	
	class ItemSilverBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Silver";
		model = "\z\addons\dayz_epoch\models\silver_bar_10oz.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_10oz_CA.paa";
		descriptionShort = "10oz Silver Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemSilverBar",10}};
				input[] = {{"ItemSilverBar10oz",1}};
			};
		};
	};
	class ItemCopperBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Copper";
		model = "\z\addons\dayz_epoch\models\copper_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_copper_bar_CA.paa";
		descriptionShort = "Copper Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemCopperBar10oz",1}};
				input[] = {{"ItemCopperBar",10}};
			};
		};
	};

	class ItemCopperBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Copper";
		model = "\z\addons\dayz_epoch\models\copper_bar_10oz.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_copper_bar_10oz_CA.paa";
		descriptionShort = "10oz Copper Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemCopperBar",10}};
				input[] = {{"ItemCopperBar10oz",1}};
			};
		};
	};
	
	class ItemBronzeBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Bronze";
		model = "\z\addons\dayz_epoch\models\bronze_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_bar_bronze_CA.paa";
		descriptionShort = "Bronze Bar";
	};
	class ItemAluminumBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Aluminum";
		model = "\z\addons\dayz_epoch\models\aluminum_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_alum_bar_CA.paa";
		descriptionShort = "Aluminum Bar";
		
	};
	class ItemAluminumBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Aluminum";
		model = "\z\addons\dayz_epoch\models\aluminum_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_alum_bar_10oz_CA.paa";
		descriptionShort = "10oz Aluminum Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemAluminumBar",10}};
				input[] = {{"ItemAluminumBar10oz",1}};
			};
		};
	};
	class ItemTinBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Tin";
		model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
		descriptionShort = "Tin Bar";
		
	};
	class ItemTinBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Tin";
		model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_10oz_CA.paa";
		descriptionShort = "10oz Tin Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemTinBar",10}};
				input[] = {{"ItemTinBar10oz",1}};
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
	
	class PartFueltank: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_8";
		model = "\dayz_equip\models\fueltank.p3d";
		picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_8";
		class ItemActions {
			class Crafting
			{
				text = "Salvage Scrap";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"PartGeneric",1}};
				input[] = {{"PartFueltank",1}};
			};
		};
	};
	class PartWheel: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_9";
		model = "\dayz_equip\models\wheel.p3d";
		picture = "\dayz_equip\textures\equip_wheel_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_9";
	};
	class PartGeneric: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_10";
		class ItemActions {
			class Crafting
			{
				text = "Craft Pole";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemPole",1}};
				input[] = {{"PartGeneric",2}};
			};
		};
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
				text = "Build Corrugated Fence";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Fence_corrugated_DZ";
			};
			class Crafting
			{
				text = "Craft Wooden Shed";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"wooden_shed_kit",1}};
				input[] = {{"ItemCorrugated",2},{"PartWoodPlywood",4},{"PartWoodLumber",4}};
			};
			class Crafting1
			{
				text = "Craft Outhouse";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"outhouse_kit",1}};
				input[] = {{"ItemCorrugated",1},{"PartWoodPlywood",3},{"PartWoodLumber",3},{"ItemTrashToiletpaper",1}};
			};
			class Crafting2
			{
				text = "Craft Storage Shed";
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
				text = "Craft Corrugated Fence";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemCorrugated",1}};
				input[] = {{"ItemPole",2},{"ItemTankTrap",2},{"PartWoodLumber",2}};
			};
			class Crafting1
			{
				text = "Craft Rusty Gate";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"rusty_gate_kit",1}};
				input[] = {{"ItemPole",3},{"ItemTankTrap",1}};
			};
			class Crafting2
			{
				text = "Craft Metal Panel";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"metal_panel_kit",1}};
				input[] = {{"ItemPole",4},{"ItemTankTrap",4}};
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
	};
	class ItemJerrycan: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 20;
		type = 256;
		displayName = "$STR_EQUIP_NAME_19";
		model = "\dayz_equip\models\jerrycan.p3d";
		picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_19";
	};
	class ItemJerrycanEmpty: ItemJerrycan
	{
		fuelQuantity = 0;
		type = 256;
		displayName = "$STR_EQUIP_NAME_39";
		picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_39";
	};
	
	class bulk: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Supply Crate";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "12 x Random Item";
		weight = 5;
	};
	class bulk_empty: bulk
	{
		descriptionShort = "Empty Supply Crate";
		weight = 5;
		class ItemActions
		{
			class Crafting
			{
				text = "Pack 6 Coke";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemSodaCoke",1}};
				input[] = {{"bulk_empty",1},{"ItemSodaCoke",6}};
			};
			class Crafting1
			{
				text = "Pack 6 Pepsi";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemSodaPepsi",1}};
				input[] = {{"bulk_empty",1},{"ItemSodaPepsi",6}};
			};

			class Crafting2
			{
				text = "Pack Scrap Metal";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_PartGenericHalf",1}};
				input[] = {{"bulk_empty",1},{"PartGeneric",6}};
			};
			class Crafting3
			{
				text = "Pack Tank Traps";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemTankTrapHalf",1}};
				input[] = {{"bulk_empty",1},{"ItemTankTrap",6}};
			};
			class Crafting4
			{
				text = "Pack Wire Kits";
				script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemWireHalf",1}};
				input[] = {{"bulk_empty",1},{"ItemWire",6}};
			};
		};
	};
	class bulk_ItemSodaCoke: bulk
	{
		descriptionShort = "6 x ItemSodaCoke";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSodaCoke",6,"magazine"};
			};
			class Crafting
			{
				text = "Pack 6 Coke";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemSodaCokeFull",1}};
				input[] = {{"bulk_ItemSodaCoke",1},{"ItemSodaCoke",6}};
			};
		};
	};
	class bulk_ItemSodaCokeFull: bulk
	{
		descriptionShort = "12 x ItemSodaCoke";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSodaCoke",12,"magazine"};
			};
		};
	};
	class bulk_ItemSodaPepsi: bulk
	{
		descriptionShort = "6 x ItemSodaPepsi";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSodaPepsi",6,"magazine"};
			};
			class Crafting
			{
				text = "Pack 6 Pepsi";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemSodaPepsiFull",1}};
				input[] = {{"bulk_ItemSodaPepsi",1},{"ItemSodaPepsi",6}};
			};
		};
	};
	class bulk_ItemSodaPepsiFull: bulk
	{
		descriptionShort = "12 x ItemSodaPepsi";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSodaPepsi",12,"magazine"};
			};
		};
	};
	class bulk_30Rnd_9x19_MP5SD: bulk
	{
		descriptionShort = "12 x 30Rnd_9x19_MP5SD";
		
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_9x19_MP5SD",12,"magazine"};
			};
		};
	};
	class bulk_15Rnd_9x19_M9SD: bulk
	{
		descriptionShort = "12 x 15Rnd_9x19_M9SD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"15Rnd_9x19_M9SD",12,"magazine"};
			};
		};
	};
	class bulk_30Rnd_556x45_StanagSD: bulk
	{
		descriptionShort = "12 x 30Rnd_556x45_StanagSD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_556x45_StanagSD",12,"magazine"};
			};
		};
	};
	class bulk_ItemSandbag: bulk
	{
		descriptionShort = "12 x SandBag";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSandbag",12,"magazine"};
			};
		};
	};
	
	class bulk_ItemTankTrap: bulk
	{
		descriptionShort = "12 x Tank Trap";
		weight = 25;
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemTankTrap",12,"magazine"};
			};
		};
	};
	class bulk_ItemTankTrapHalf: bulk
	{
		descriptionShort = "6 x Tank Trap";
		weight = 12.5;
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemTankTrap",6,"magazine"};
			};
			class Crafting
			{
				text = "Pack Scrap Metal";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemTankTrap",1}};
				input[] = {{"bulk_ItemTankTrapHalf",1},{"ItemTankTrap",6}};
			};
		};
	};
	
	class bulk_ItemWire: bulk
	{
		descriptionShort = "12 x Wire Kit";
		weight = 25;
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemWire",12,"magazine"};
			};
		};
	};
	class bulk_ItemWireHalf: bulk
	{
		descriptionShort = "6 x Wire Kit";
		weight = 12.5;
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemWire",6,"magazine"};
			};
			class Crafting
			{
				text = "Pack Wire Kits";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_ItemWire",1}};
				input[] = {{"bulk_ItemWireHalf",1},{"ItemWire",6}};
			};
		};
	};
	
	class bulk_PartGeneric: bulk
	{
		descriptionShort = "12 x Scrap Metal";
		weight = 60;
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"PartGeneric",12,"magazine"};
			};
		};
	};
	class bulk_PartGenericHalf: bulk
	{
		descriptionShort = "6 x Scrap Metal";
		weight = 30;
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"PartGeneric",6,"magazine"};
			};
			class Crafting
			{
				text = "Pack Scrap Metal";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_PartGeneric",1}};
				input[] = {{"bulk_PartGenericHalf",1},{"PartGeneric",6}};
			};
		};
	};

	class bulk_17Rnd_9x19_glock17: bulk
	{
		descriptionShort = "12 x 17Rnd_9x19_glock17";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"17Rnd_9x19_glock17",12,"magazine"};
			};
		};
	};
	
	class metal_floor_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Metal Floor";
		descriptionShort = "Metal Floor";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 325;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "MetalFloor_DZ";
			};
		};
	};

	class cinder_wall_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Cinder Block Wall";
		descriptionShort = "Half height cinder block wall";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 325;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "CinderWallHalf_DZ";
			};
		};
	};

	class cinder_garage_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Block Garage Doorway";
		descriptionShort = "Cinder block garage doorway";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 325;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "CinderWallDoorway_DZ";
			};
		};
	};

	class cinder_door_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Block Doorway";
		descriptionShort = "Cinder block doorway";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 325;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "CinderWallSmallDoorway_DZ";
			};
		};
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "MetalPanel_DZ";
			};
			class Crafting
			{
				text = "Craft Metal Floor";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "DesertCamoNet_DZ";
			};
			class Crafting
			{
				text = "Craft Lg Camo Net";
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
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "ForestCamoNet_DZ";
			};
			class Crafting
			{
				text = "Craft Lg Camo Net";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
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
		displayName = "$STR_EQUIP_NAME_31";
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_31";
		weight = 30;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
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
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "FuelPump_DZ";
				neednearby[] = {{"fueltank",30}};
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
				text = "Place Safe";
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
				text = "Place Lockbox";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "LockboxStorageLocked";
			};
		};
	};



	class ItemWoodFloor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Floor/Ceiling";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood Floor can also be used as a ceiling.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodFloor_DZ";
			};
		};
	};
	class ItemWoodFloorHalf: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Floor/Ceiling 1/2";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood Floor can also be used as a ceiling.";
		weight = 15;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodFloorHalf_DZ";
			};
			class Crafting
			{
				text = "Craft Wood Floor";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodFloor",1}};
				input[] = {{"ItemWoodFloorHalf",2}};
				
			};
		};
	};
	class ItemWoodFloorQuarter: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Floor/Ceiling 1/4";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood Floor can also be used as a ceiling.";
		weight = 10;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodFloorQuarter_DZ";
			};
			class Crafting
			{
				text = "Craft Wood Floor 1/2";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodFloorHalf",1}};
				input[] = {{"ItemWoodFloorQuarter",2}};
				
			};
		};
	};

	class ItemWoodStairs: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Stairs";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood stairs";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodStairsSans_DZ";
			};
			class Crafting
			{
				text = "Craft Stair Supports";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodStairsSupport",1}};
				input[] = {{"ItemWoodStairs",1},{"PartWoodLumber",2}};
				
			};
		};
	};

	class ItemWoodStairsSupport: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Stairs w/ supports";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood stairs with supports";
		weight = 30;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodStairs_DZ";
			};
		};
	};

	class ItemWoodLadder: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Ladder";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood Ladder";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodLadder_DZ";
			};
		};
	};

	class ItemWoodWall: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Wall";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood Floor can also be used as a ceiling.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodSmallWall_DZ";
			};
			
			class Crafting
			{
				text = "Craft Doorway";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallDoor",1}};
				input[] = {{"ItemWoodWall",1}};
				
			};
			class Crafting1
			{
				text = "Craft Window";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallWindow",1}};
				input[] = {{"ItemWoodWall",1},{"PartGlass",1}};
				
			};
			class Crafting2
			{
				text = "Craft Large Wall";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallLg",1}};
				input[] = {{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
				
			};
		};
	};
	class ItemWoodWallThird: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Wall 1/3";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wood Floor can also be used as a ceiling.";
		weight = 7;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodSmallWallThird_DZ";
			};
			class Crafting
			{
				text = "Craft Wood Wall";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWall",1}};
				input[] = {{"ItemWoodWallThird",3}};
				
			};
		};
	};
	class ItemWoodWallDoor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wall w/ Doorway";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wall with doorway constucted out of plywood and lumber.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodSmallWallDoor_DZ";
			};
			class Crafting
			{
				text = "Craft Door";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallWithDoor",1}};
				input[] = {{"ItemWoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
				
			};
		};
	};
	class ItemWoodWallWithDoor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wall w/ Door";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wall with door constucted out of plywood and lumber.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Land_DZE_WoodDoor";
			};
			class Crafting
			{
				text = "Craft Locked Door";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallWithDoorLocked",1}};
				input[] = {{"ItemWoodWallWithDoor",1},{"ItemComboLock",1}};
				
			};
		};
	};
	class ItemWoodWallWithDoorLocked: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wall w/ Door Locked";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wall with door constucted out of plywood and lumber.";
		weight = 30;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Land_DZE_WoodDoorLocked";
			};
		};
	};

	

	class ItemWoodWallWindow: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wall w/ Window";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wall with Window constucted out of plywood and lumber.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodSmallWallWin_DZ";
			};
		};
	};

	class ItemWoodWallLg: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Wood Wall";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Large wall constucted out of plywood and lumber.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodLargeWall_DZ";
			};
			class Crafting
			{
				text = "Craft Doorway";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallDoorLg",1}};
				input[] = {{"ItemWoodWallLg",1}};
				
			};
			class Crafting1
			{
				text = "Craft Window";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallWindowLg",1}};
				input[] = {{"ItemWoodWallLg",1},{"PartGlass",1}};
				
			};
			class Crafting2
			{
				text = "Craft Garage Door";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallGarageDoor",1}};
				input[] = {{"ItemWoodWallLg",1},{"PartWoodLumber",2}};
				
			};
		};
	};

	class ItemWoodWallGarageDoor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Garage Door";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Garage door constucted out of plywood and lumber.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Land_DZE_GarageWoodDoor";
			};
			class Crafting
			{
				text = "Craft Locked Garage Door";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallGarageDoorLocked",1}};
				input[] = {{"ItemWoodWallGarageDoor",1},{"ItemComboLock",1}};
				
			};
		};
	};
	class ItemWoodWallGarageDoorLocked: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Garage Door Locked";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Garage door with combination lock.";
		weight = 25;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Land_DZE_GarageWoodDoorLocked";
			};
		};
	};

	class ItemWoodWallDoorLg: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Wall w/ Doorway";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Large wall with doorway constucted out of plywood and lumber.";
		weight = 30;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodLargeWallDoor_DZ";
			};			
			class Crafting
			{
				text = "Craft Door";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallWithDoorLg",1}};
				input[] = {{"ItemWoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
				
			};
		};
	};

	class ItemWoodWallWithDoorLg: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Wall w/ Door";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wall with door constucted out of plywood and lumber.";
		weight = 30;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Land_DZE_LargeWoodDoor";
			};			
			class Crafting
			{
				text = "Craft Locked Door";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodWallWithDoorLgLocked",1}};
				input[] = {{"ItemWoodWallWithDoorLg",1},{"ItemComboLock",1}};
				
			};
		};
	};

	class ItemWoodWallWithDoorLgLocked: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Wall w/ Door Locked";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wall with combination lock door constucted out of plywood and lumber.";
		weight = 35;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Land_DZE_LargeWoodDoorLocked";
			};
		};
	};

	class ItemWoodWallWindowLg: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Wall w/ Window";
		model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		descriptionShort = "Large wall with doorway constucted out of plywood and lumber..";
		weight = 30;
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodLargeWallWin_DZ";
			};
		};
	};


	class PartEngine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_11";
		model = "\dayz_equip\models\engine.p3d";
		picture = "\dayz_equip\textures\equip_engine_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_11";
		class ItemActions {
			class Crafting
			{
				text = "Salvage Scrap";
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
		displayName = "$STR_EQUIP_NAME_40";
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_40";
		class ItemActions {
			class Build {
				text = "Build Fire";
				script = "spawn player_build;";
				require[] = {"ItemMatchbox_DZE"};
				create = "Land_Fire_DZ";
			};
			class Crafting
			{
				text = "Craft Lumber";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"PartWoodLumber",1}};
				input[] = {{"PartWoodPile",2}};
			};
			class Crafting1
			{
				text = "Craft Arrows";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemKnife"};
				output[] = {{"WoodenArrow",3}};
				input[] = {{"PartWoodPile",1},{"ItemTrashRazor",1}};
				
			};
			class Crafting2
			{
				text = "Craft Stick Fence";
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
				text = "Un pack";
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
				text = "Craft Half Wall";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"cinder_wall_kit",1}};
				input[] = {{"CinderBlocks",3},{"MortarBucket",1}};
			};
			class Crafting1
			{
				text = "Craft Garage Doorway";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"cinder_garage_kit",1}};
				input[] = {{"CinderBlocks",3},{"MortarBucket",1},{"ItemTankTrap",1}};
			};
			class Crafting2
			{
				text = "Craft Doorway";
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
				text = "Un pack";
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
				text = "Craft Plywood";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"PartWoodPlywood",1}};
				input[] = {{"PartWoodLumber",2}};
				
			};
			class Crafting1
			{
				text = "Craft Supply Crate";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"bulk_empty",1}};
				input[] = {{"PartWoodLumber",2},{"PartGeneric",1}};
				
			};
			class Crafting2
			{
				text = "Craft Deer Stand";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"deer_stand_kit",1}};
				input[] = {{"PartWoodLumber",8},{"PartWoodPile",2}};
				
			};
			
			class Crafting3
			{
				text = "Craft Wood Stairs";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodStairs",1}};
				input[] = {{"PartWoodLumber",8}};
				
			};
			class Crafting4
			{
				text = "Craft Wood Ladder";
				script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemWoodLadder",1}};
				input[] = {{"PartWoodLumber",8}};
				
			};
			class Crafting5
            {
                text = "Craft Lumber Pack";
                Script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
                neednearby[] = {"workshop"};
                requiretools[] = {"ItemToolbox"};
                output[] = {{"PartPlankPack",1}};
                input[] = {{"PartWoodLumber",3}};
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
				text = "Craft Workbench";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"workbench_kit",1}};
				input[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};
				
			};
			class Crafting1
			{
				text = "Craft Shack";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"wood_shack_kit",1}};
				input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};
			};
			class Crafting2
			{
				text = "Craft Floor 1/4";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemWoodFloorQuarter",1}};
				input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
			};
			class Crafting3
			{
				text = "Craft Wall 1/3";
				script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemWoodWallThird",1}};
				input[] = {{"PartWoodPlywood",3},{"PartWoodLumber",3}};
			};
			class Crafting4
            {
                text = "Craft Plywood Pack";
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
				text = "Craft Scrap Metal";
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
				text = "Smelt Silver Bar";
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
				text = "Smelt Gold Bar";
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
		displayName = "$STR_EQUIP_NAME_32";
		model = "\dayz_equip\models\vrotor.p3d";
		picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_32";
		 class ItemActions {
            class Crafting
            {
                text = "Salvage Scrap";
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
		displayName = "$STR_EQUIP_NAME_30";
		model = "\dayz_equip\models\carglass.p3d";
		picture = "\dayz_equip\textures\equip_carglass_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_30";
	};

	// Skins
	class SkinBase: CA_Magazine
	{
		scope = 0;
		count = 1;
		type = 256;
		displayName = "Clothes";
		model = "\dayz_equip\models\cloth_parcel.p3d";
		picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
		descriptionShort = "Clothes Parcel";
		weight = 1;
		class ItemActions
		{
			class Use
			{
				text = "Wear %1";
				script = "spawn player_wearClothes;";
			};
			class Crafting
			{
				text = "Craft Canvas";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemCanvas",1}};
				input[] = {{"SkinBase",2}};
			};
			class Crafting1
			{
				text = "Craft Bandages";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemBandage",2}};
				input[] = {{"SkinBase",1},{"ItemTrashToiletpaper",1}};
			};
		};
	};
	class Skin_Sniper1_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_43";
		descriptionShort = "$STR_EQUIP_DESC_43";
	};
	class Skin_Rocket_DZ: SkinBase
	{
		scope = 2;
		displayName = "Officer Suit";
		descriptionShort = "Officer Suit";
	};
	class Skin_RU_Policeman_DZ: SkinBase
	{
		scope = 2;
		displayName = "Sergei";
		descriptionShort = "Police Officer Uniform";
	};
	class Skin_Pilot_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Ethan";
		descriptionShort = "Pilot Uniform";
	};
	class Skin_Haris_Press_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Harry";
		descriptionShort = "Press Uniform";
	};
	class Skin_Ins_Soldier_GL_DZ: SkinBase
	{
		scope = 2;
		displayName = "Terrorist Uniform";
		descriptionShort = "Terrorist Uniform";
	};
	class Skin_GUE_Commander_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rebel Uniform";
		descriptionShort = "Rebel Uniform";
	};
	class Skin_Functionary1_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Donald";
		descriptionShort = "Business Suit";
	};
	class Skin_Priest_DZ: SkinBase
	{
		scope = 2;
		displayName = "James";
		descriptionShort = "Priest Outfit";
	};
	class Skin_Rocker1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Duane";
		descriptionShort = "Rocker (black)";
	};	
	class Skin_Rocker2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rod";
		descriptionShort = "Rocker (brown)";
	};
	class Skin_Rocker3_DZ: SkinBase
	{
		scope = 2;
		displayName = "Van";
		descriptionShort = "Rocker (blue)";
	};
	class Skin_Rocker4_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bruce";
		descriptionShort = "Rocker (green)";
	};
	class Skin_Bandit1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Outfit";
		descriptionShort = "Bandit Outfit";
	};	
	class Skin_Bandit2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Camo";
		descriptionShort = "Bandit Camo Outfit";
	};
	class Skin_GUE_Soldier_MG_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Gunner";
		descriptionShort = "Bandit Gunner Outfit";
	};
	class Skin_GUE_Soldier_Sniper_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Sniper";
		descriptionShort = "Bandit Sniper Outfit";
	};
	class Skin_GUE_Soldier_Crew_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Baklava";
		descriptionShort = "Bandit Baklava Outfit";
	};
	class Skin_GUE_Soldier_CO_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Mask";
		descriptionShort = "Bandit Mask Outfit";
	};
	class Skin_GUE_Soldier_2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Hat";
		descriptionShort = "Bandit Hat with Baklava";
	};
	class Skin_BanditW1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Annie";
		descriptionShort = "Bandit wrap blue top with brown pants.";
	};
	class Skin_BanditW2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Jane";
		descriptionShort = "Bandit wrap grey top with brown camo pants.";
	};
	class Skin_SurvivorW3_DZ: SkinBase
	{
		scope = 2;
		displayName = "Jane";
		descriptionShort = "Grey top with brown camo pants.";
	};
	class Skin_SurvivorW2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Annie";
		descriptionShort = "Civilian (female)";
	};
	class Skin_SurvivorWpink_DZ: SkinBase
	{
		scope = 2;
		displayName = "Melly (female)";
		descriptionShort = "Purple top with blue pants.";
	};
	class Skin_SurvivorWsequisha_DZ: SkinBase
	{
		scope = 2;
		displayName = "Maria (female)";
		descriptionShort = "Maria Clothes (female)";
	};
	class Skin_SurvivorWsequishaD_DZ: SkinBase
	{
		scope = 2;
		displayName = "Sequisha (female)";
		descriptionShort = "Sequisha Clothes (female)";
	};
	class Skin_SurvivorWcombat_DZ: SkinBase
	{
		scope = 2;
		displayName = "Alejandria";
		descriptionShort = "Blue camo top with brown camo pants.";
	};
	class Skin_SurvivorWdesert_DZ: SkinBase
	{
		scope = 2;
		displayName = "Savannah";
		descriptionShort = "White top with brown pants.";
	};
	class Skin_SurvivorWurban_DZ: SkinBase
	{
		scope = 2;
		displayName = "Sophia";
		descriptionShort = "Maroon top with grey pants.";
	};


	class Skin_TK_INS_Warlord_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Takistani Warlord";
		descriptionShort = "Takistani Warlord";
	};
	class Skin_TK_INS_Soldier_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Takistani Soldier";
		descriptionShort = "Takistani Soldier";
	};
	class Skin_CZ_Special_Forces_GL_DES_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Special Forces";
		descriptionShort = "Special Forces";
	};
	class Skin_Drake_Light_DZ: SkinBase
	{
		scope = 2;
		displayName = "Desert Camo";
		descriptionShort = "Desert Camo";
	};
	class Skin_Soldier_Bodyguard_AA12_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bodyguard";
		descriptionShort = "Bodyguard";
	};
	class Skin_FR_OHara_DZ: SkinBase
	{
		scope = 2;
		displayName = "Jungle Camo";
		descriptionShort = "Jungle Camo";
	};
	class Skin_FR_Rodriguez_DZ: SkinBase
	{
		scope = 2;
		displayName = "Gunner Outfit";
		descriptionShort = "Gunner Outfit";
	};
	class Skin_CZ_Soldier_Sniper_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Desert Ghillie";
		descriptionShort = "Desert Ghillie";
	};
	class Skin_Graves_Light_DZ: SkinBase
	{
		scope = 2;
		displayName = "Urban Camo";
		descriptionShort = "Urban Camo";
	};
	class Skin_Soldier_Sniper_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Marksman";
		descriptionShort = "Marksman";
	};
	class Skin_Soldier_TL_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Team Leader";
		descriptionShort = "Team Leader";
	};
	//

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
				text = "Craft Desert Net";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = "Craft Forest Net";
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
				text = "Craft Desert Net";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = "Craft Forest Net";
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
				text = "Craft Desert Net";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_net_kit",1}};
				input[] = {{"ItemTent",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = "Craft Forest Net";
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
				text = "Build Sandbag";
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Sandbag1_DZ";
			};
			class Crafting
			{
				text = "Craft Large Sandbag";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemSandbagLarge",1}};
				input[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
			};
			class Crafting1
			{
				text = "Craft Sandbag Nest";
				script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"sandbag_nest_kit",1}};
				input[] = {{"ItemSandbag",4},{"PartWoodPlywood",2},{"PartWoodLumber",4}};
			};
			/*
			class Crafting2
			{
				text = "Craft M240 Nest";
				script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox","M240_DZ"};
				output[] = {{"m240_nest_kit",1}};
				input[] = {{"ItemSandbag",4},{"ItemCanvas",1},{"PartWoodPlywood",4},{"PartWoodLumber",3}};
				inputweapons[] = {"M240_DZ"};
			};
			*/
			
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
				text = "Craft Sledge";
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
				text = "Craft Sledge";
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
	
	class HandGrenade;//External class reference
	
	class ItemSodaEmpty: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_35";
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_35";
		ammo = "SodaCan";
		class ItemActions
		{
			class Crafting
			{
				text = "Melt into Bars";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemAluminumBar",1}};
				input[] = {{"ItemSodaEmpty",6}};
			};
		};
	};
	
	
	class ItemSodaCoke; //External class reference
	
	class ItemSodaCokeEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};
	class ItemSodaPepsiEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_pepsi_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};
	class ItemSodaMdewEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_mdew_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};

	class ItemSodaMtngreen : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_0;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_0;
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_full_ca.paa";
	};
	class ItemSodaMtngreenEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaR4z0r : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_1;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_1;
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_full_ca.paa";
	};
	class ItemSodaR4z0rEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaRbull : ItemSodaCoke {
		displayName = $STR_FOOD_NAME_RBULL;
		descriptionShort = $STR_FOOD_DESC_RBULL;
		model = "z\addons\dayz_epoch\models\soda_redbull.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_soda_rbull_CA.paa";
	};
	class ItemSodaOrangeSherbet : ItemSodaCoke {
		displayName = $STR_FOOD_NAME_OSHERBET;
		descriptionShort = $STR_FOOD_DESC_OSHERBET;
		model = "z\addons\dayz_epoch\models\soda_sherbet.p3d";
		picture = "\z\addons\dayz_epoch\pictures\soda_orangesherbet_ca.paa";
	};

	class ItemSodaClays : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_2;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_2;
		model = "z\addons\dayz_communityassets\models\soda_clays_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_full_ca.paa";
	};
	class ItemSodaClaysEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_clays_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaSmasht : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_3;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_3;
		model = "z\addons\dayz_communityassets\models\soda_smasht_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_full_ca.paa";
	};
	class ItemSodaSmashtEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_smasht_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaDrwaste : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_4;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_4;
		model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_full_ca.paa";
	};
	class ItemSodaDrwasteEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
/*
	class ItemSodaFranka : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_5;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_5;
		model = "z\addons\dayz_communityassets\models\soda_franka_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_full_ca.paa";
	};
	class ItemSodaFrankaEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_franka_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_empty_ca";
		//ammo = "SodaCanMtngreen";
	};
*/
	class ItemSodaLemonade : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_6;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_6;
		model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_full_ca.paa";
	};
	class ItemSodaLemonadeEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
/*
	class ItemSodaLirik : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_7;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_7;
		model = "z\addons\dayz_communityassets\models\soda_lirik_clean_full.p3d";
		//picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_full_ca.paa";
	};
	class ItemSodaLirikEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_lirik_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
*/
	class ItemSodaLvg : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_8;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_8;
		model = "z\addons\dayz_communityassets\models\soda_lvg_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_full_ca.paa";
	};
	class ItemSodaLvgEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_lvg_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaMzly : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_9;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_9;
		model = "z\addons\dayz_communityassets\models\soda_mzly_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_full_ca.paa";
	};
	class ItemSodaMzlyEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_mzly_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
/*
	class ItemSodaPeppsy : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_10;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_10;
		model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_full_ca.paa";
	};
	class ItemSodaPeppsyEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
*/
	class ItemSodaRabbit : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_11;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_11;
		model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_full_ca.paa";
	};
	class ItemSodaRabbitEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";

	};
/*
	class ItemSodaSacrite : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_12;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_12;
		model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_full_ca.paa";
	};
	class ItemSodaSacriteEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
*/
	class FoodEdible;
	
	
	class FoodCanFrankBeans: FoodEdible
	{
		scope = 2;
		// displayName = "$STR_EQUIP_NAME_28";
		displayName = "Can (Frank n Beans)"; // addactions cannot have &amp;
		model = "\dayz_equip\models\food_fbtin.p3d";
		picture = "\dayz_equip\textures\equip_fbtin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_28";
	};

	class ItemTrout : FoodEdible {
		scope = 2;
		displayName = "Rainbow Trout";
		descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
		model = "\z\addons\dayz_epoch\models\trout.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_rainbowtrout_CA.paa";
		bloodRegen = 400;
	};
	class ItemSeaBass : FoodEdible {
		scope = 2;
		displayName = "Sea Bass";
		descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
		model = "\z\addons\dayz_epoch\models\seabass.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_seabass_CA.paa";
		bloodRegen = 800;
	};
	class ItemTuna : FoodEdible {
		scope = 2;
		displayName = "Blue Fin Tuna";
		descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
		model = "\z\addons\dayz_epoch\models\tuna.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_tuna_CA.paa";
		bloodRegen = 2500;
	};
	class ItemTroutCooked : FoodEdible {
		scope = 2;
		displayName = "Rainbow Trout (Cooked)";
		descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
		model = "\z\addons\dayz_epoch\models\trout_cooked.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_trout_cooked_CA.paa";
		bloodRegen = 800;
	};
	class ItemSeaBassCooked : FoodEdible {
		scope = 2;
		displayName = "Sea Bass (Cooked)";
		descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
		model = "\z\addons\dayz_epoch\models\seabass_cooked.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_seabass_cooked_CA.paa";
		bloodRegen = 1600;
	};
	class ItemTunaCooked : FoodEdible {
		scope = 2;
		displayName = "Blue Fin Tuna (Cooked)";
		descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
		model = "\z\addons\dayz_epoch\models\tuna_cooked.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_tuna_cooked_CA.paa";
		bloodRegen = 5000;
	};
	class FoodBioMeat: FoodEdible
	{
		scope = 2;
		displayName = "Bio Meat";
		model = "\z\addons\dayz_epoch\models\biomeat_can.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_biomeat_CA.paa";
		descriptionShort = "Bio Meat: A very good source of nutrition, and a very high chance of infection. Eat at own risk.";
		bloodRegen = 1600;
	};

	class FoodmeatRaw : FoodEdible {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_FOOD_EQIP_CODE_NAME_0;
		model = "\dayz_equip\models\food_steak_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_ca.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_0;
		bloodRegen = 100;
	};
	class FoodmuttonRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_1;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_1;
		bloodRegen = 100;
	};
	
	class FoodchickenRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_2;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_2;
		bloodRegen = 100;
	};
	
	class FoodrabbitRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_3;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_3;
		bloodRegen = 400;
	};
	
	class FoodbaconRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_4;
		model = "z\addons\dayz_communityassets\models\bacon_raw.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_raw_CA.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_4;
		bloodRegen = 150;
	};
	class FoodbeefRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_6;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_6;
		bloodRegen = 100;
			};
	
	class FoodmeatCooked : FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_0;
		model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_0;
		bloodRegen = 800;
	};
	class FoodmuttonCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_1;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_1;
		bloodRegen = 400;
	};
	
	class FoodchickenCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_2;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_2;
		bloodRegen = 400;
	};
	
	class FoodbaconCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_4;
		model = "z\addons\dayz_communityassets\models\bacon_fried.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_fried_CA.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_4;
		bloodRegen = 400;
	};
	class FoodrabbitCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_3;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_3;
		bloodRegen = 1600;
	};
	class FoodbeefCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_6;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_6;
		bloodRegen = 600;
	};
	
	class AngelCookies : FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_5;
		model = "z\addons\dayz_communityassets\models\buiscits_box.p3d";
		picture = "z\addons\dayz_communityassets\pictures\i_buiscit_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_5;
		bloodRegen = 100;
	};
	class FoodMRE : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 800;
		displayName = $STR_FOOD_NAME_MRE;
		descriptionShort = $STR_FOOD_DESC_MRE;
		model = "z\addons\dayz_communityassets\models\mre.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_mre_CA.paa";
	};
	
	class FoodPistachio : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_PISTACHIO;
		descriptionShort = $STR_FOOD_DESC_PISTACHIO;
		model = "z\addons\dayz_communityassets\models\pistachio.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
	};
	class FoodNutmix : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_NUTMIX;
		descriptionShort = $STR_FOOD_DESC_NUTMIX;
		model = "z\addons\dayz_communityassets\models\nutmix.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_nutmix_CA.paa";
	};
	
	class FoodCanGriff : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_GRIFF;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF;
		model = "z\addons\dayz_communityassets\models\can_griff_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_full_ca.paa";
	};
	class FoodCanBadguy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BADGUY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY;
		model = "z\addons\dayz_communityassets\models\can_badguy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_full_ca.paa";
	};
	class FoodCanBoneboy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_full_ca.paa";
	};
	class FoodCanCorn : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN;
		model = "z\addons\dayz_communityassets\models\can_corn_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_full_ca.paa";
	};
	class FoodCanCurgon : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CURGON;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON;
		model = "z\addons\dayz_communityassets\models\can_curgon_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_full_ca.paa";
	};
	class FoodCanDemon : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DEMON;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON;
		model = "z\addons\dayz_communityassets\models\can_demon_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_full_ca.paa";
	};
	class FoodCanFraggleos : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_full_ca.paa";
	};
	class FoodCanHerpy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_HERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY;
		model = "z\addons\dayz_communityassets\models\can_herpy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_full_ca.paa";
	};
	class FoodCanOrlok : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_ORLOK;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK;
		model = "z\addons\dayz_communityassets\models\can_orlok_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_full_ca.paa";
	};
	class FoodCanPowell : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_POWELL;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_full_ca.paa";
	};
	class FoodCanTylers : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_TYLERS;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS;
		model = "z\addons\dayz_communityassets\models\can_tylers_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_full_ca.paa";
	};
	class FoodCanUnlabeled : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_full_ca.paa";
	};
	
	// new DZE harvested food
	class FoodPumpkin : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = "Pumpkin";
		descriptionShort = "Pumpkin";
		weight = 1;
		model = "z\addons\dayz_communityassets\models\pistachio.p3d"; // TODO: model + icon
		picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
	};
	class FoodSunFlowerSeed : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = "Bag of Sunflower Seeds";
		descriptionShort = "Bag of Sunflower Seeds";
		weight = 0.1;
		model = "z\addons\dayz_communityassets\models\pistachio.p3d"; // TODO: model + icon
		picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
	};
	
	class TrashTinCan: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_33";
		model = "\dayz_equip\models\trash_tincan.p3d";
		picture = "\dayz_equip\textures\equip_tincan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_33";
		ammo = "TinCan";
		class ItemActions
		{
			class Crafting
			{
				text = "Melt into Bars";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemTinBar",1}};
				input[] = {{"TrashTinCan",6}};
			};
		};
	};

	class FoodCanGriffEmpty : TrashTinCan {
		scope = public;
		count = 1;
		model = "z\addons\dayz_communityassets\models\can_griff_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_empty_ca.paa";
		displayName = $STR_FOOD_NAME_CAN_GRIFF_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF_EMPTY;
		ammo = "TinCan";
	};
	class FoodCanBadguyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BADGUY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_badguy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanBoneboyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCornEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CORN_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_corn_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCurgonEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CURGON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_curgon_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDemonEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_DEMON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_demon_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanFraggleosEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanHerpyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_HERPY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_herpy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanOrlokEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_ORLOK_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_orlok_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanPowellEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_POWELL_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanTylersEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_TYLERS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_tylers_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanUnlabeledEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	
	class ItemWaterbottle;
	class ItemWaterbottleBoiled : ItemWaterbottle {
		displayName = $STR_ITEMWATERBOTTLEBOILED_CODE_NAME;
		descriptionShort = $STR_ITEMWATERBOTTLEBOILED_CODE_DESC;
	 };
	 class Hatchet_Swing;
	 class Machete_Swing : Hatchet_Swing {
		displayName = "Machete";
		displayNameMagazine = "Machete";
		shortNameMagazine = "Machete";
		ammo = "Machete_Swing_Ammo";
	};
	class Fishing_Swing : Hatchet_Swing {
		displayName = "Fishing";
		displayNameMagazine = "Fishing";
		shortNameMagazine = "Fishing";
		ammo = "Fishing_Swing_Ammo";
	};
	class sledge_swing : Hatchet_Swing {
		displayName = "Sledge";
		displayNameMagazine = "Sledge";
		shortNameMagazine = "Sledge";
		ammo = "Sledge_Swing_Ammo";
	};
	// Inventory Placeholder
	class DummyItem : Hatchet_Swing {
		displayName = "Dummy";
		displayNameMagazine = "Dummy";
		shortNameMagazine = "Dummy";
		ammo = "Dummy_Swing_Ammo";
	};
	class ItemTrashToiletpaper : CA_Magazine {
		scope = public;
		count = 1;
		displayName = $STR_JUNK_NAME_TOILETPAPER;
		descriptionShort = $STR_JUNK_DESC_TOILETPAPER;
		model = "z\addons\dayz_communityassets\models\toiletpaper.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_toiletpaper_CA.paa";
		type = 256;
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
				text = "Craft Canvas";
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
