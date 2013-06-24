class CfgWeapons {
	class ItemCore;
	class ItemMap_Debug: ItemCore {
		descriptionshort = "Debug Map - Admin use only";
		displayname = "Map";
		picture = "\ca\ui\data\gear_picture_map_ca.paa";
		scope = 2;
		simulation = "ItemMap";
		class Library {
			libtextdesc = "Debug Map - Admin use only";
		};
	};
	class ItemKeyKit: ItemCore {
		scope = 2;
		displayname = "Keymakers kit";
		model="\z\addons\dayz_epoch\models\keykit.p3d";
		descriptionShort="Kit including the tools required to smelt, mold and shape keys.";
		picture="\z\addons\dayz_epoch\pictures\equip_keykit_ca.paa";
	};
	class ItemAnvil: ItemCore {
		displayname = "Anvil";
	};
	class ItemCompass: ItemCore {
		model="z\addons\dayz_communityassets\models\compass.p3d";
	};
	
	class Crossbow;
	class Crossbow_DZ : Crossbow {
		magazines[] =
		{
			"Quiver",
			"WoodenArrow"
		};
	};
	class MeleeWeapon;
	class MeleeHatchet: MeleeWeapon
	{
		scope=2;
		autoreload=1;
		magazineReloadTime=0;
		model="\dayz_weapons\models\Hatchet_weaponized";
		picture="\dayz_equip\textures\equip_hatchet_CA.paa";
		displayName="$STR_EQUIP_NAME_41";
		magazines[]=
		{
			"Hatchet_Swing"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\dayz_weapons\anim\melee_hatchet_holding.rtm"
		};
		class ItemActions
		{
			class Use
			{
				text="$STR_ACTIONS_CHOPWOOD";
				script="spawn player_chopWood;";
			};
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeHatchet"
				};
				output[]=
				{
					"ItemHatchet"
				};
			};
		};
		class Library
		{
			libTextDesc="$STR_EQUIP_DESC_41";
		};
		descriptionShort="$STR_EQUIP_DESC_41";
	};	
	class MeleeCrowbar: MeleeHatchet
	{
		scope=2;
		autoreload=1;
		magazineReloadTime=0;
		model="\dayz_weapons\models\crowbar_weaponized";
		picture="\dayz_weapons\textures\equip_crowbar_CA.paa";
		displayName="Crowbar";
		magazines[]=
		{
			"Crowbar_Swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeCrowbar"
				};
				output[]=
				{
					"ItemCrowbar"
				};
			};
		};
		class Library
		{
			libTextDesc="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		};
		descriptionShort="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
	};	
	class ItemCrowbar: ItemCore
	{
		scope=2;
		displayName="Crowbar";
		model="\dayz_equip\models\crowbar.p3d";
		picture="\dayz_weapons\textures\equip_crowbar_CA.paa";
		descriptionShort="A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemCrowbar"
				};
				output[]=
				{
					"MeleeCrowbar"
				};
			};
		};
	};
	class MeleeFishingPole: MeleeHatchet
	{
		scope=2;
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_epoch\models\fishing_rod_weaponized.p3d";
		picture="\z\addons\dayz_epoch\pictures\equip_fishingpole_CA.paa";
		displayName="Fishing Pole";
		magazines[]=
		{
			"Fishing_Swing"
		};
		class ItemActions
		{
			class Use
			{
				text="Cast Fishing Pole";
				script="spawn player_goFishing;";
			};
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeFishingPole"
				};
				output[]=
				{
					"ItemFishingPole"
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="Fishing Pole: This carbon fiber rod may be old but, she still works like a charm.";
	};	
	class ItemFishingPole: ItemCore
	{
		scope=2;
		displayName="Fishing Pole";
		model="\z\addons\dayz_epoch\models\fishing_rod_loot_item.p3d";
		picture="\z\addons\dayz_epoch\pictures\equip_fishingpole_CA.paa";
		descriptionShort="Fishing Pole: This carbon fiber rod may be old but, she still works like a charm.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemFishingPole"
				};
				output[]=
				{
					"MeleeFishingPole"
				};
			};
		};
	};
	class MeleeMachete: MeleeHatchet
	{
		scope=2;
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_communityassets\models\machete_weaponized.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
		displayName="Machete";
		magazines[]=
		{
			"Machete_Swing"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text="Add to Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeMachete"
				};
				output[]=
				{
					"ItemMachete"
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
	};	
	class ItemMachete: ItemCore
	{
		scope=2;
		displayName="Machete";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		picture="\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
		descriptionShort="An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";
		class ItemActions
		{
			class Toolbelt
			{
				text="Remove from Toolbelt";
				script="spawn player_addToolbelt;";
				use[]=
				{
					"ItemMachete"
				};
				output[]=
				{
					"MeleeMachete"
				};
			};
		};
	};
	
	class GrenadeLauncher;  // External class reference
	class Flare : GrenadeLauncher {
		class ThrowMuzzle;
		class MolotovCocktailMuzzle : ThrowMuzzle {
			displayName = "$STR_ACTION_THROW";
			magazines[] = {
				"TrashJackDaniels", 
				"ItemSodaEmpty", 
				"TrashTinCan",
				"FoodCanGriffEmpty",
				"FoodCanBadguyEmpty",
				"FoodCanBoneboyEmpty",
				"FoodCanCornEmpty",
				"FoodCanCurgonEmpty",
				"FoodCanDemonEmpty",
				"FoodCanFraggleosEmpty",
				"FoodCanHerpyEmpty",
				"FoodCanOrlokEmpty",
				"FoodCanPowellEmpty",
				"FoodCanTylersEmpty",
				"FoodCanUnlabeledEmpty",
				"ItemSodaCokeEmpty",
				"ItemSodaPepsiEmpty",
				"ItemSodaMdewEmpty",
				"ItemSodaMtngreenEmpty",
				"ItemSodaR4z0rEmpty",
				"ItemSodaClaysEmpty",
				"ItemSodaSmashtEmpty", 
				"ItemSodaDrwasteEmpty", 
				"ItemSodaLemonadeEmpty", 
				"ItemSodaLvgEmpty", 
				"ItemSodaMzlyEmpty", 
				"ItemSodaRabbitEmpty"
			};          
		};
	}; 

	
	// Experimental keys
	class ItemKey: ItemCore {
		model = "\z\addons\dayz_epoch\models\key.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_key_CA.paa";
		displayname = "Black Key";
		keyid = 0;
		scope = 2;
		class ItemActions
		{
			class Toolbelt
			{
				text="Make Copy";
				script="spawn player_copyKey;";
			};
		};
	};
	class ItemKeyBlack: ItemKey {
		keyid = 0;
		scope = 2;
	};
	class ItemKeyGreen: ItemKey {
		displayname = "Green Key";
		model = "\z\addons\dayz_epoch\models\key_green.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_key_CA_green.paa";
		scope = 2;
	};
	class ItemKeyBlue: ItemKey {
		displayname = "Blue Key";
		model = "\z\addons\dayz_epoch\models\key_blue.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_key_CA_blue.paa";
		scope = 2;
	};
	class ItemKeyYellow: ItemKey {
		displayname = "Yellow Key";
		model = "\z\addons\dayz_epoch\models\key_yellow.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_key_CA_yellow.paa";
		scope = 2;
	};
	class ItemKeyRed: ItemKey {
		displayname = "Red Key";
		model = "\z\addons\dayz_epoch\models\key_red.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_key_CA_red.paa";
		scope = 2;
	};

	class ItemKeyGreen1: ItemKeyGreen {
		keyid = 1;
	};
	class ItemKeyGreen2: ItemKeyGreen {
		keyid = 2;
	};
	class ItemKeyGreen3: ItemKeyGreen {
		keyid = 3;
	};
	class ItemKeyGreen4: ItemKeyGreen {
		keyid = 4;
	};
	class ItemKeyGreen5: ItemKeyGreen {
		keyid = 5;
	};
	class ItemKeyGreen6: ItemKeyGreen {
		keyid = 6;
	};
	class ItemKeyGreen7: ItemKeyGreen {
		keyid = 7;
	};
	class ItemKeyGreen8: ItemKeyGreen {
		keyid = 8;
	};
	class ItemKeyGreen9: ItemKeyGreen {
		keyid = 9;
	};
	class ItemKeyGreen10: ItemKeyGreen {
		keyid = 10;
	};
	class ItemKeyGreen11: ItemKeyGreen {
		keyid = 11;
	};
	class ItemKeyGreen12: ItemKeyGreen {
		keyid = 12;
	};
	class ItemKeyGreen13: ItemKeyGreen {
		keyid = 13;
	};
	class ItemKeyGreen14: ItemKeyGreen {
		keyid = 14;
	};
	class ItemKeyGreen15: ItemKeyGreen {
		keyid = 15;
	};
	class ItemKeyGreen16: ItemKeyGreen {
		keyid = 16;
	};
	class ItemKeyGreen17: ItemKeyGreen {
		keyid = 17;
	};
	class ItemKeyGreen18: ItemKeyGreen {
		keyid = 18;
	};
	class ItemKeyGreen19: ItemKeyGreen {
		keyid = 19;
	};
	class ItemKeyGreen20: ItemKeyGreen {
		keyid = 20;
	};
	class ItemKeyGreen21: ItemKeyGreen {
		keyid = 21;
	};
	class ItemKeyGreen22: ItemKeyGreen {
		keyid = 22;
	};
	class ItemKeyGreen23: ItemKeyGreen {
		keyid = 23;
	};
	class ItemKeyGreen24: ItemKeyGreen {
		keyid = 24;
	};
	class ItemKeyGreen25: ItemKeyGreen {
		keyid = 25;
	};
	class ItemKeyGreen26: ItemKeyGreen {
		keyid = 26;
	};
	class ItemKeyGreen27: ItemKeyGreen {
		keyid = 27;
	};
	class ItemKeyGreen28: ItemKeyGreen {
		keyid = 28;
	};
	class ItemKeyGreen29: ItemKeyGreen {
		keyid = 29;
	};
	class ItemKeyGreen30: ItemKeyGreen {
		keyid = 30;
	};
	class ItemKeyGreen31: ItemKeyGreen {
		keyid = 31;
	};
	class ItemKeyGreen32: ItemKeyGreen {
		keyid = 32;
	};
	class ItemKeyGreen33: ItemKeyGreen {
		keyid = 33;
	};
	class ItemKeyGreen34: ItemKeyGreen {
		keyid = 34;
	};
	class ItemKeyGreen35: ItemKeyGreen {
		keyid = 35;
	};
	class ItemKeyGreen36: ItemKeyGreen {
		keyid = 36;
	};
	class ItemKeyGreen37: ItemKeyGreen {
		keyid = 37;
	};
	class ItemKeyGreen38: ItemKeyGreen {
		keyid = 38;
	};
	class ItemKeyGreen39: ItemKeyGreen {
		keyid = 39;
	};
	class ItemKeyGreen40: ItemKeyGreen {
		keyid = 40;
	};
	class ItemKeyGreen41: ItemKeyGreen {
		keyid = 41;
	};
	class ItemKeyGreen42: ItemKeyGreen {
		keyid = 42;
	};
	class ItemKeyGreen43: ItemKeyGreen {
		keyid = 43;
	};
	class ItemKeyGreen44: ItemKeyGreen {
		keyid = 44;
	};
	class ItemKeyGreen45: ItemKeyGreen {
		keyid = 45;
	};
	class ItemKeyGreen46: ItemKeyGreen {
		keyid = 46;
	};
	class ItemKeyGreen47: ItemKeyGreen {
		keyid = 47;
	};
	class ItemKeyGreen48: ItemKeyGreen {
		keyid = 48;
	};
	class ItemKeyGreen49: ItemKeyGreen {
		keyid = 49;
	};
	class ItemKeyGreen50: ItemKeyGreen {
		keyid = 50;
	};
	class ItemKeyGreen51: ItemKeyGreen {
		keyid = 51;
	};
	class ItemKeyGreen52: ItemKeyGreen {
		keyid = 52;
	};
	class ItemKeyGreen53: ItemKeyGreen {
		keyid = 53;
	};
	class ItemKeyGreen54: ItemKeyGreen {
		keyid = 54;
	};
	class ItemKeyGreen55: ItemKeyGreen {
		keyid = 55;
	};
	class ItemKeyGreen56: ItemKeyGreen {
		keyid = 56;
	};
	class ItemKeyGreen57: ItemKeyGreen {
		keyid = 57;
	};
	class ItemKeyGreen58: ItemKeyGreen {
		keyid = 58;
	};
	class ItemKeyGreen59: ItemKeyGreen {
		keyid = 59;
	};
	class ItemKeyGreen60: ItemKeyGreen {
		keyid = 60;
	};
	class ItemKeyGreen61: ItemKeyGreen {
		keyid = 61;
	};
	class ItemKeyGreen62: ItemKeyGreen {
		keyid = 62;
	};
	class ItemKeyGreen63: ItemKeyGreen {
		keyid = 63;
	};
	class ItemKeyGreen64: ItemKeyGreen {
		keyid = 64;
	};
	class ItemKeyGreen65: ItemKeyGreen {
		keyid = 65;
	};
	class ItemKeyGreen66: ItemKeyGreen {
		keyid = 66;
	};
	class ItemKeyGreen67: ItemKeyGreen {
		keyid = 67;
	};
	class ItemKeyGreen68: ItemKeyGreen {
		keyid = 68;
	};
	class ItemKeyGreen69: ItemKeyGreen {
		keyid = 69;
	};
	class ItemKeyGreen70: ItemKeyGreen {
		keyid = 70;
	};
	class ItemKeyGreen71: ItemKeyGreen {
		keyid = 71;
	};
	class ItemKeyGreen72: ItemKeyGreen {
		keyid = 72;
	};
	class ItemKeyGreen73: ItemKeyGreen {
		keyid = 73;
	};
	class ItemKeyGreen74: ItemKeyGreen {
		keyid = 74;
	};
	class ItemKeyGreen75: ItemKeyGreen {
		keyid = 75;
	};
	class ItemKeyGreen76: ItemKeyGreen {
		keyid = 76;
	};
	class ItemKeyGreen77: ItemKeyGreen {
		keyid = 77;
	};
	class ItemKeyGreen78: ItemKeyGreen {
		keyid = 78;
	};
	class ItemKeyGreen79: ItemKeyGreen {
		keyid = 79;
	};
	class ItemKeyGreen80: ItemKeyGreen {
		keyid = 80;
	};
	class ItemKeyGreen81: ItemKeyGreen {
		keyid = 81;
	};
	class ItemKeyGreen82: ItemKeyGreen {
		keyid = 82;
	};
	class ItemKeyGreen83: ItemKeyGreen {
		keyid = 83;
	};
	class ItemKeyGreen84: ItemKeyGreen {
		keyid = 84;
	};
	class ItemKeyGreen85: ItemKeyGreen {
		keyid = 85;
	};
	class ItemKeyGreen86: ItemKeyGreen {
		keyid = 86;
	};
	class ItemKeyGreen87: ItemKeyGreen {
		keyid = 87;
	};
	class ItemKeyGreen88: ItemKeyGreen {
		keyid = 88;
	};
	class ItemKeyGreen89: ItemKeyGreen {
		keyid = 89;
	};
	class ItemKeyGreen90: ItemKeyGreen {
		keyid = 90;
	};
	class ItemKeyGreen91: ItemKeyGreen {
		keyid = 91;
	};
	class ItemKeyGreen92: ItemKeyGreen {
		keyid = 92;
	};
	class ItemKeyGreen93: ItemKeyGreen {
		keyid = 93;
	};
	class ItemKeyGreen94: ItemKeyGreen {
		keyid = 94;
	};
	class ItemKeyGreen95: ItemKeyGreen {
		keyid = 95;
	};
	class ItemKeyGreen96: ItemKeyGreen {
		keyid = 96;
	};
	class ItemKeyGreen97: ItemKeyGreen {
		keyid = 97;
	};
	class ItemKeyGreen98: ItemKeyGreen {
		keyid = 98;
	};
	class ItemKeyGreen99: ItemKeyGreen {
		keyid = 99;
	};
	class ItemKeyGreen100: ItemKeyGreen {
		keyid = 100;
	};
	class ItemKeyGreen101: ItemKeyGreen {
		keyid = 101;
	};
	class ItemKeyGreen102: ItemKeyGreen {
		keyid = 102;
	};
	class ItemKeyGreen103: ItemKeyGreen {
		keyid = 103;
	};
	class ItemKeyGreen104: ItemKeyGreen {
		keyid = 104;
	};
	class ItemKeyGreen105: ItemKeyGreen {
		keyid = 105;
	};
	class ItemKeyGreen106: ItemKeyGreen {
		keyid = 106;
	};
	class ItemKeyGreen107: ItemKeyGreen {
		keyid = 107;
	};
	class ItemKeyGreen108: ItemKeyGreen {
		keyid = 108;
	};
	class ItemKeyGreen109: ItemKeyGreen {
		keyid = 109;
	};
	class ItemKeyGreen110: ItemKeyGreen {
		keyid = 110;
	};
	class ItemKeyGreen111: ItemKeyGreen {
		keyid = 111;
	};
	class ItemKeyGreen112: ItemKeyGreen {
		keyid = 112;
	};
	class ItemKeyGreen113: ItemKeyGreen {
		keyid = 113;
	};
	class ItemKeyGreen114: ItemKeyGreen {
		keyid = 114;
	};
	class ItemKeyGreen115: ItemKeyGreen {
		keyid = 115;
	};
	class ItemKeyGreen116: ItemKeyGreen {
		keyid = 116;
	};
	class ItemKeyGreen117: ItemKeyGreen {
		keyid = 117;
	};
	class ItemKeyGreen118: ItemKeyGreen {
		keyid = 118;
	};
	class ItemKeyGreen119: ItemKeyGreen {
		keyid = 119;
	};
	class ItemKeyGreen120: ItemKeyGreen {
		keyid = 120;
	};
	class ItemKeyGreen121: ItemKeyGreen {
		keyid = 121;
	};
	class ItemKeyGreen122: ItemKeyGreen {
		keyid = 122;
	};
	class ItemKeyGreen123: ItemKeyGreen {
		keyid = 123;
	};
	class ItemKeyGreen124: ItemKeyGreen {
		keyid = 124;
	};
	class ItemKeyGreen125: ItemKeyGreen {
		keyid = 125;
	};
	class ItemKeyGreen126: ItemKeyGreen {
		keyid = 126;
	};
	class ItemKeyGreen127: ItemKeyGreen {
		keyid = 127;
	};
	class ItemKeyGreen128: ItemKeyGreen {
		keyid = 128;
	};
	class ItemKeyGreen129: ItemKeyGreen {
		keyid = 129;
	};
	class ItemKeyGreen130: ItemKeyGreen {
		keyid = 130;
	};
	class ItemKeyGreen131: ItemKeyGreen {
		keyid = 131;
	};
	class ItemKeyGreen132: ItemKeyGreen {
		keyid = 132;
	};
	class ItemKeyGreen133: ItemKeyGreen {
		keyid = 133;
	};
	class ItemKeyGreen134: ItemKeyGreen {
		keyid = 134;
	};
	class ItemKeyGreen135: ItemKeyGreen {
		keyid = 135;
	};
	class ItemKeyGreen136: ItemKeyGreen {
		keyid = 136;
	};
	class ItemKeyGreen137: ItemKeyGreen {
		keyid = 137;
	};
	class ItemKeyGreen138: ItemKeyGreen {
		keyid = 138;
	};
	class ItemKeyGreen139: ItemKeyGreen {
		keyid = 139;
	};
	class ItemKeyGreen140: ItemKeyGreen {
		keyid = 140;
	};
	class ItemKeyGreen141: ItemKeyGreen {
		keyid = 141;
	};
	class ItemKeyGreen142: ItemKeyGreen {
		keyid = 142;
	};
	class ItemKeyGreen143: ItemKeyGreen {
		keyid = 143;
	};
	class ItemKeyGreen144: ItemKeyGreen {
		keyid = 144;
	};
	class ItemKeyGreen145: ItemKeyGreen {
		keyid = 145;
	};
	class ItemKeyGreen146: ItemKeyGreen {
		keyid = 146;
	};
	class ItemKeyGreen147: ItemKeyGreen {
		keyid = 147;
	};
	class ItemKeyGreen148: ItemKeyGreen {
		keyid = 148;
	};
	class ItemKeyGreen149: ItemKeyGreen {
		keyid = 149;
	};
	class ItemKeyGreen150: ItemKeyGreen {
		keyid = 150;
	};
	class ItemKeyGreen151: ItemKeyGreen {
		keyid = 151;
	};
	class ItemKeyGreen152: ItemKeyGreen {
		keyid = 152;
	};
	class ItemKeyGreen153: ItemKeyGreen {
		keyid = 153;
	};
	class ItemKeyGreen154: ItemKeyGreen {
		keyid = 154;
	};
	class ItemKeyGreen155: ItemKeyGreen {
		keyid = 155;
	};
	class ItemKeyGreen156: ItemKeyGreen {
		keyid = 156;
	};
	class ItemKeyGreen157: ItemKeyGreen {
		keyid = 157;
	};
	class ItemKeyGreen158: ItemKeyGreen {
		keyid = 158;
	};
	class ItemKeyGreen159: ItemKeyGreen {
		keyid = 159;
	};
	class ItemKeyGreen160: ItemKeyGreen {
		keyid = 160;
	};
	class ItemKeyGreen161: ItemKeyGreen {
		keyid = 161;
	};
	class ItemKeyGreen162: ItemKeyGreen {
		keyid = 162;
	};
	class ItemKeyGreen163: ItemKeyGreen {
		keyid = 163;
	};
	class ItemKeyGreen164: ItemKeyGreen {
		keyid = 164;
	};
	class ItemKeyGreen165: ItemKeyGreen {
		keyid = 165;
	};
	class ItemKeyGreen166: ItemKeyGreen {
		keyid = 166;
	};
	class ItemKeyGreen167: ItemKeyGreen {
		keyid = 167;
	};
	class ItemKeyGreen168: ItemKeyGreen {
		keyid = 168;
	};
	class ItemKeyGreen169: ItemKeyGreen {
		keyid = 169;
	};
	class ItemKeyGreen170: ItemKeyGreen {
		keyid = 170;
	};
	class ItemKeyGreen171: ItemKeyGreen {
		keyid = 171;
	};
	class ItemKeyGreen172: ItemKeyGreen {
		keyid = 172;
	};
	class ItemKeyGreen173: ItemKeyGreen {
		keyid = 173;
	};
	class ItemKeyGreen174: ItemKeyGreen {
		keyid = 174;
	};
	class ItemKeyGreen175: ItemKeyGreen {
		keyid = 175;
	};
	class ItemKeyGreen176: ItemKeyGreen {
		keyid = 176;
	};
	class ItemKeyGreen177: ItemKeyGreen {
		keyid = 177;
	};
	class ItemKeyGreen178: ItemKeyGreen {
		keyid = 178;
	};
	class ItemKeyGreen179: ItemKeyGreen {
		keyid = 179;
	};
	class ItemKeyGreen180: ItemKeyGreen {
		keyid = 180;
	};
	class ItemKeyGreen181: ItemKeyGreen {
		keyid = 181;
	};
	class ItemKeyGreen182: ItemKeyGreen {
		keyid = 182;
	};
	class ItemKeyGreen183: ItemKeyGreen {
		keyid = 183;
	};
	class ItemKeyGreen184: ItemKeyGreen {
		keyid = 184;
	};
	class ItemKeyGreen185: ItemKeyGreen {
		keyid = 185;
	};
	class ItemKeyGreen186: ItemKeyGreen {
		keyid = 186;
	};
	class ItemKeyGreen187: ItemKeyGreen {
		keyid = 187;
	};
	class ItemKeyGreen188: ItemKeyGreen {
		keyid = 188;
	};
	class ItemKeyGreen189: ItemKeyGreen {
		keyid = 189;
	};
	class ItemKeyGreen190: ItemKeyGreen {
		keyid = 190;
	};
	class ItemKeyGreen191: ItemKeyGreen {
		keyid = 191;
	};
	class ItemKeyGreen192: ItemKeyGreen {
		keyid = 192;
	};
	class ItemKeyGreen193: ItemKeyGreen {
		keyid = 193;
	};
	class ItemKeyGreen194: ItemKeyGreen {
		keyid = 194;
	};
	class ItemKeyGreen195: ItemKeyGreen {
		keyid = 195;
	};
	class ItemKeyGreen196: ItemKeyGreen {
		keyid = 196;
	};
	class ItemKeyGreen197: ItemKeyGreen {
		keyid = 197;
	};
	class ItemKeyGreen198: ItemKeyGreen {
		keyid = 198;
	};
	class ItemKeyGreen199: ItemKeyGreen {
		keyid = 199;
	};
	class ItemKeyGreen200: ItemKeyGreen {
		keyid = 200;
	};
	class ItemKeyGreen201: ItemKeyGreen {
		keyid = 201;
	};
	class ItemKeyGreen202: ItemKeyGreen {
		keyid = 202;
	};
	class ItemKeyGreen203: ItemKeyGreen {
		keyid = 203;
	};
	class ItemKeyGreen204: ItemKeyGreen {
		keyid = 204;
	};
	class ItemKeyGreen205: ItemKeyGreen {
		keyid = 205;
	};
	class ItemKeyGreen206: ItemKeyGreen {
		keyid = 206;
	};
	class ItemKeyGreen207: ItemKeyGreen {
		keyid = 207;
	};
	class ItemKeyGreen208: ItemKeyGreen {
		keyid = 208;
	};
	class ItemKeyGreen209: ItemKeyGreen {
		keyid = 209;
	};
	class ItemKeyGreen210: ItemKeyGreen {
		keyid = 210;
	};
	class ItemKeyGreen211: ItemKeyGreen {
		keyid = 211;
	};
	class ItemKeyGreen212: ItemKeyGreen {
		keyid = 212;
	};
	class ItemKeyGreen213: ItemKeyGreen {
		keyid = 213;
	};
	class ItemKeyGreen214: ItemKeyGreen {
		keyid = 214;
	};
	class ItemKeyGreen215: ItemKeyGreen {
		keyid = 215;
	};
	class ItemKeyGreen216: ItemKeyGreen {
		keyid = 216;
	};
	class ItemKeyGreen217: ItemKeyGreen {
		keyid = 217;
	};
	class ItemKeyGreen218: ItemKeyGreen {
		keyid = 218;
	};
	class ItemKeyGreen219: ItemKeyGreen {
		keyid = 219;
	};
	class ItemKeyGreen220: ItemKeyGreen {
		keyid = 220;
	};
	class ItemKeyGreen221: ItemKeyGreen {
		keyid = 221;
	};
	class ItemKeyGreen222: ItemKeyGreen {
		keyid = 222;
	};
	class ItemKeyGreen223: ItemKeyGreen {
		keyid = 223;
	};
	class ItemKeyGreen224: ItemKeyGreen {
		keyid = 224;
	};
	class ItemKeyGreen225: ItemKeyGreen {
		keyid = 225;
	};
	class ItemKeyGreen226: ItemKeyGreen {
		keyid = 226;
	};
	class ItemKeyGreen227: ItemKeyGreen {
		keyid = 227;
	};
	class ItemKeyGreen228: ItemKeyGreen {
		keyid = 228;
	};
	class ItemKeyGreen229: ItemKeyGreen {
		keyid = 229;
	};
	class ItemKeyGreen230: ItemKeyGreen {
		keyid = 230;
	};
	class ItemKeyGreen231: ItemKeyGreen {
		keyid = 231;
	};
	class ItemKeyGreen232: ItemKeyGreen {
		keyid = 232;
	};
	class ItemKeyGreen233: ItemKeyGreen {
		keyid = 233;
	};
	class ItemKeyGreen234: ItemKeyGreen {
		keyid = 234;
	};
	class ItemKeyGreen235: ItemKeyGreen {
		keyid = 235;
	};
	class ItemKeyGreen236: ItemKeyGreen {
		keyid = 236;
	};
	class ItemKeyGreen237: ItemKeyGreen {
		keyid = 237;
	};
	class ItemKeyGreen238: ItemKeyGreen {
		keyid = 238;
	};
	class ItemKeyGreen239: ItemKeyGreen {
		keyid = 239;
	};
	class ItemKeyGreen240: ItemKeyGreen {
		keyid = 240;
	};
	class ItemKeyGreen241: ItemKeyGreen {
		keyid = 241;
	};
	class ItemKeyGreen242: ItemKeyGreen {
		keyid = 242;
	};
	class ItemKeyGreen243: ItemKeyGreen {
		keyid = 243;
	};
	class ItemKeyGreen244: ItemKeyGreen {
		keyid = 244;
	};
	class ItemKeyGreen245: ItemKeyGreen {
		keyid = 245;
	};
	class ItemKeyGreen246: ItemKeyGreen {
		keyid = 246;
	};
	class ItemKeyGreen247: ItemKeyGreen {
		keyid = 247;
	};
	class ItemKeyGreen248: ItemKeyGreen {
		keyid = 248;
	};
	class ItemKeyGreen249: ItemKeyGreen {
		keyid = 249;
	};
	class ItemKeyGreen250: ItemKeyGreen {
		keyid = 250;
	};
	class ItemKeyGreen251: ItemKeyGreen {
		keyid = 251;
	};
	class ItemKeyGreen252: ItemKeyGreen {
		keyid = 252;
	};
	class ItemKeyGreen253: ItemKeyGreen {
		keyid = 253;
	};
	class ItemKeyGreen254: ItemKeyGreen {
		keyid = 254;
	};
	class ItemKeyGreen255: ItemKeyGreen {
		keyid = 255;
	};
	class ItemKeyGreen256: ItemKeyGreen {
		keyid = 256;
	};
	class ItemKeyGreen257: ItemKeyGreen {
		keyid = 257;
	};
	class ItemKeyGreen258: ItemKeyGreen {
		keyid = 258;
	};
	class ItemKeyGreen259: ItemKeyGreen {
		keyid = 259;
	};
	class ItemKeyGreen260: ItemKeyGreen {
		keyid = 260;
	};
	class ItemKeyGreen261: ItemKeyGreen {
		keyid = 261;
	};
	class ItemKeyGreen262: ItemKeyGreen {
		keyid = 262;
	};
	class ItemKeyGreen263: ItemKeyGreen {
		keyid = 263;
	};
	class ItemKeyGreen264: ItemKeyGreen {
		keyid = 264;
	};
	class ItemKeyGreen265: ItemKeyGreen {
		keyid = 265;
	};
	class ItemKeyGreen266: ItemKeyGreen {
		keyid = 266;
	};
	class ItemKeyGreen267: ItemKeyGreen {
		keyid = 267;
	};
	class ItemKeyGreen268: ItemKeyGreen {
		keyid = 268;
	};
	class ItemKeyGreen269: ItemKeyGreen {
		keyid = 269;
	};
	class ItemKeyGreen270: ItemKeyGreen {
		keyid = 270;
	};
	class ItemKeyGreen271: ItemKeyGreen {
		keyid = 271;
	};
	class ItemKeyGreen272: ItemKeyGreen {
		keyid = 272;
	};
	class ItemKeyGreen273: ItemKeyGreen {
		keyid = 273;
	};
	class ItemKeyGreen274: ItemKeyGreen {
		keyid = 274;
	};
	class ItemKeyGreen275: ItemKeyGreen {
		keyid = 275;
	};
	class ItemKeyGreen276: ItemKeyGreen {
		keyid = 276;
	};
	class ItemKeyGreen277: ItemKeyGreen {
		keyid = 277;
	};
	class ItemKeyGreen278: ItemKeyGreen {
		keyid = 278;
	};
	class ItemKeyGreen279: ItemKeyGreen {
		keyid = 279;
	};
	class ItemKeyGreen280: ItemKeyGreen {
		keyid = 280;
	};
	class ItemKeyGreen281: ItemKeyGreen {
		keyid = 281;
	};
	class ItemKeyGreen282: ItemKeyGreen {
		keyid = 282;
	};
	class ItemKeyGreen283: ItemKeyGreen {
		keyid = 283;
	};
	class ItemKeyGreen284: ItemKeyGreen {
		keyid = 284;
	};
	class ItemKeyGreen285: ItemKeyGreen {
		keyid = 285;
	};
	class ItemKeyGreen286: ItemKeyGreen {
		keyid = 286;
	};
	class ItemKeyGreen287: ItemKeyGreen {
		keyid = 287;
	};
	class ItemKeyGreen288: ItemKeyGreen {
		keyid = 288;
	};
	class ItemKeyGreen289: ItemKeyGreen {
		keyid = 289;
	};
	class ItemKeyGreen290: ItemKeyGreen {
		keyid = 290;
	};
	class ItemKeyGreen291: ItemKeyGreen {
		keyid = 291;
	};
	class ItemKeyGreen292: ItemKeyGreen {
		keyid = 292;
	};
	class ItemKeyGreen293: ItemKeyGreen {
		keyid = 293;
	};
	class ItemKeyGreen294: ItemKeyGreen {
		keyid = 294;
	};
	class ItemKeyGreen295: ItemKeyGreen {
		keyid = 295;
	};
	class ItemKeyGreen296: ItemKeyGreen {
		keyid = 296;
	};
	class ItemKeyGreen297: ItemKeyGreen {
		keyid = 297;
	};
	class ItemKeyGreen298: ItemKeyGreen {
		keyid = 298;
	};
	class ItemKeyGreen299: ItemKeyGreen {
		keyid = 299;
	};
	class ItemKeyGreen300: ItemKeyGreen {
		keyid = 300;
	};
	class ItemKeyGreen301: ItemKeyGreen {
		keyid = 301;
	};
	class ItemKeyGreen302: ItemKeyGreen {
		keyid = 302;
	};
	class ItemKeyGreen303: ItemKeyGreen {
		keyid = 303;
	};
	class ItemKeyGreen304: ItemKeyGreen {
		keyid = 304;
	};
	class ItemKeyGreen305: ItemKeyGreen {
		keyid = 305;
	};
	class ItemKeyGreen306: ItemKeyGreen {
		keyid = 306;
	};
	class ItemKeyGreen307: ItemKeyGreen {
		keyid = 307;
	};
	class ItemKeyGreen308: ItemKeyGreen {
		keyid = 308;
	};
	class ItemKeyGreen309: ItemKeyGreen {
		keyid = 309;
	};
	class ItemKeyGreen310: ItemKeyGreen {
		keyid = 310;
	};
	class ItemKeyGreen311: ItemKeyGreen {
		keyid = 311;
	};
	class ItemKeyGreen312: ItemKeyGreen {
		keyid = 312;
	};
	class ItemKeyGreen313: ItemKeyGreen {
		keyid = 313;
	};
	class ItemKeyGreen314: ItemKeyGreen {
		keyid = 314;
	};
	class ItemKeyGreen315: ItemKeyGreen {
		keyid = 315;
	};
	class ItemKeyGreen316: ItemKeyGreen {
		keyid = 316;
	};
	class ItemKeyGreen317: ItemKeyGreen {
		keyid = 317;
	};
	class ItemKeyGreen318: ItemKeyGreen {
		keyid = 318;
	};
	class ItemKeyGreen319: ItemKeyGreen {
		keyid = 319;
	};
	class ItemKeyGreen320: ItemKeyGreen {
		keyid = 320;
	};
	class ItemKeyGreen321: ItemKeyGreen {
		keyid = 321;
	};
	class ItemKeyGreen322: ItemKeyGreen {
		keyid = 322;
	};
	class ItemKeyGreen323: ItemKeyGreen {
		keyid = 323;
	};
	class ItemKeyGreen324: ItemKeyGreen {
		keyid = 324;
	};
	class ItemKeyGreen325: ItemKeyGreen {
		keyid = 325;
	};
	class ItemKeyGreen326: ItemKeyGreen {
		keyid = 326;
	};
	class ItemKeyGreen327: ItemKeyGreen {
		keyid = 327;
	};
	class ItemKeyGreen328: ItemKeyGreen {
		keyid = 328;
	};
	class ItemKeyGreen329: ItemKeyGreen {
		keyid = 329;
	};
	class ItemKeyGreen330: ItemKeyGreen {
		keyid = 330;
	};
	class ItemKeyGreen331: ItemKeyGreen {
		keyid = 331;
	};
	class ItemKeyGreen332: ItemKeyGreen {
		keyid = 332;
	};
	class ItemKeyGreen333: ItemKeyGreen {
		keyid = 333;
	};
	class ItemKeyGreen334: ItemKeyGreen {
		keyid = 334;
	};
	class ItemKeyGreen335: ItemKeyGreen {
		keyid = 335;
	};
	class ItemKeyGreen336: ItemKeyGreen {
		keyid = 336;
	};
	class ItemKeyGreen337: ItemKeyGreen {
		keyid = 337;
	};
	class ItemKeyGreen338: ItemKeyGreen {
		keyid = 338;
	};
	class ItemKeyGreen339: ItemKeyGreen {
		keyid = 339;
	};
	class ItemKeyGreen340: ItemKeyGreen {
		keyid = 340;
	};
	class ItemKeyGreen341: ItemKeyGreen {
		keyid = 341;
	};
	class ItemKeyGreen342: ItemKeyGreen {
		keyid = 342;
	};
	class ItemKeyGreen343: ItemKeyGreen {
		keyid = 343;
	};
	class ItemKeyGreen344: ItemKeyGreen {
		keyid = 344;
	};
	class ItemKeyGreen345: ItemKeyGreen {
		keyid = 345;
	};
	class ItemKeyGreen346: ItemKeyGreen {
		keyid = 346;
	};
	class ItemKeyGreen347: ItemKeyGreen {
		keyid = 347;
	};
	class ItemKeyGreen348: ItemKeyGreen {
		keyid = 348;
	};
	class ItemKeyGreen349: ItemKeyGreen {
		keyid = 349;
	};
	class ItemKeyGreen350: ItemKeyGreen {
		keyid = 350;
	};
	class ItemKeyGreen351: ItemKeyGreen {
		keyid = 351;
	};
	class ItemKeyGreen352: ItemKeyGreen {
		keyid = 352;
	};
	class ItemKeyGreen353: ItemKeyGreen {
		keyid = 353;
	};
	class ItemKeyGreen354: ItemKeyGreen {
		keyid = 354;
	};
	class ItemKeyGreen355: ItemKeyGreen {
		keyid = 355;
	};
	class ItemKeyGreen356: ItemKeyGreen {
		keyid = 356;
	};
	class ItemKeyGreen357: ItemKeyGreen {
		keyid = 357;
	};
	class ItemKeyGreen358: ItemKeyGreen {
		keyid = 358;
	};
	class ItemKeyGreen359: ItemKeyGreen {
		keyid = 359;
	};
	class ItemKeyGreen360: ItemKeyGreen {
		keyid = 360;
	};
	class ItemKeyGreen361: ItemKeyGreen {
		keyid = 361;
	};
	class ItemKeyGreen362: ItemKeyGreen {
		keyid = 362;
	};
	class ItemKeyGreen363: ItemKeyGreen {
		keyid = 363;
	};
	class ItemKeyGreen364: ItemKeyGreen {
		keyid = 364;
	};
	class ItemKeyGreen365: ItemKeyGreen {
		keyid = 365;
	};
	class ItemKeyGreen366: ItemKeyGreen {
		keyid = 366;
	};
	class ItemKeyGreen367: ItemKeyGreen {
		keyid = 367;
	};
	class ItemKeyGreen368: ItemKeyGreen {
		keyid = 368;
	};
	class ItemKeyGreen369: ItemKeyGreen {
		keyid = 369;
	};
	class ItemKeyGreen370: ItemKeyGreen {
		keyid = 370;
	};
	class ItemKeyGreen371: ItemKeyGreen {
		keyid = 371;
	};
	class ItemKeyGreen372: ItemKeyGreen {
		keyid = 372;
	};
	class ItemKeyGreen373: ItemKeyGreen {
		keyid = 373;
	};
	class ItemKeyGreen374: ItemKeyGreen {
		keyid = 374;
	};
	class ItemKeyGreen375: ItemKeyGreen {
		keyid = 375;
	};
	class ItemKeyGreen376: ItemKeyGreen {
		keyid = 376;
	};
	class ItemKeyGreen377: ItemKeyGreen {
		keyid = 377;
	};
	class ItemKeyGreen378: ItemKeyGreen {
		keyid = 378;
	};
	class ItemKeyGreen379: ItemKeyGreen {
		keyid = 379;
	};
	class ItemKeyGreen380: ItemKeyGreen {
		keyid = 380;
	};
	class ItemKeyGreen381: ItemKeyGreen {
		keyid = 381;
	};
	class ItemKeyGreen382: ItemKeyGreen {
		keyid = 382;
	};
	class ItemKeyGreen383: ItemKeyGreen {
		keyid = 383;
	};
	class ItemKeyGreen384: ItemKeyGreen {
		keyid = 384;
	};
	class ItemKeyGreen385: ItemKeyGreen {
		keyid = 385;
	};
	class ItemKeyGreen386: ItemKeyGreen {
		keyid = 386;
	};
	class ItemKeyGreen387: ItemKeyGreen {
		keyid = 387;
	};
	class ItemKeyGreen388: ItemKeyGreen {
		keyid = 388;
	};
	class ItemKeyGreen389: ItemKeyGreen {
		keyid = 389;
	};
	class ItemKeyGreen390: ItemKeyGreen {
		keyid = 390;
	};
	class ItemKeyGreen391: ItemKeyGreen {
		keyid = 391;
	};
	class ItemKeyGreen392: ItemKeyGreen {
		keyid = 392;
	};
	class ItemKeyGreen393: ItemKeyGreen {
		keyid = 393;
	};
	class ItemKeyGreen394: ItemKeyGreen {
		keyid = 394;
	};
	class ItemKeyGreen395: ItemKeyGreen {
		keyid = 395;
	};
	class ItemKeyGreen396: ItemKeyGreen {
		keyid = 396;
	};
	class ItemKeyGreen397: ItemKeyGreen {
		keyid = 397;
	};
	class ItemKeyGreen398: ItemKeyGreen {
		keyid = 398;
	};
	class ItemKeyGreen399: ItemKeyGreen {
		keyid = 399;
	};
	class ItemKeyGreen400: ItemKeyGreen {
		keyid = 400;
	};
	class ItemKeyGreen401: ItemKeyGreen {
		keyid = 401;
	};
	class ItemKeyGreen402: ItemKeyGreen {
		keyid = 402;
	};
	class ItemKeyGreen403: ItemKeyGreen {
		keyid = 403;
	};
	class ItemKeyGreen404: ItemKeyGreen {
		keyid = 404;
	};
	class ItemKeyGreen405: ItemKeyGreen {
		keyid = 405;
	};
	class ItemKeyGreen406: ItemKeyGreen {
		keyid = 406;
	};
	class ItemKeyGreen407: ItemKeyGreen {
		keyid = 407;
	};
	class ItemKeyGreen408: ItemKeyGreen {
		keyid = 408;
	};
	class ItemKeyGreen409: ItemKeyGreen {
		keyid = 409;
	};
	class ItemKeyGreen410: ItemKeyGreen {
		keyid = 410;
	};
	class ItemKeyGreen411: ItemKeyGreen {
		keyid = 411;
	};
	class ItemKeyGreen412: ItemKeyGreen {
		keyid = 412;
	};
	class ItemKeyGreen413: ItemKeyGreen {
		keyid = 413;
	};
	class ItemKeyGreen414: ItemKeyGreen {
		keyid = 414;
	};
	class ItemKeyGreen415: ItemKeyGreen {
		keyid = 415;
	};
	class ItemKeyGreen416: ItemKeyGreen {
		keyid = 416;
	};
	class ItemKeyGreen417: ItemKeyGreen {
		keyid = 417;
	};
	class ItemKeyGreen418: ItemKeyGreen {
		keyid = 418;
	};
	class ItemKeyGreen419: ItemKeyGreen {
		keyid = 419;
	};
	class ItemKeyGreen420: ItemKeyGreen {
		keyid = 420;
	};
	class ItemKeyGreen421: ItemKeyGreen {
		keyid = 421;
	};
	class ItemKeyGreen422: ItemKeyGreen {
		keyid = 422;
	};
	class ItemKeyGreen423: ItemKeyGreen {
		keyid = 423;
	};
	class ItemKeyGreen424: ItemKeyGreen {
		keyid = 424;
	};
	class ItemKeyGreen425: ItemKeyGreen {
		keyid = 425;
	};
	class ItemKeyGreen426: ItemKeyGreen {
		keyid = 426;
	};
	class ItemKeyGreen427: ItemKeyGreen {
		keyid = 427;
	};
	class ItemKeyGreen428: ItemKeyGreen {
		keyid = 428;
	};
	class ItemKeyGreen429: ItemKeyGreen {
		keyid = 429;
	};
	class ItemKeyGreen430: ItemKeyGreen {
		keyid = 430;
	};
	class ItemKeyGreen431: ItemKeyGreen {
		keyid = 431;
	};
	class ItemKeyGreen432: ItemKeyGreen {
		keyid = 432;
	};
	class ItemKeyGreen433: ItemKeyGreen {
		keyid = 433;
	};
	class ItemKeyGreen434: ItemKeyGreen {
		keyid = 434;
	};
	class ItemKeyGreen435: ItemKeyGreen {
		keyid = 435;
	};
	class ItemKeyGreen436: ItemKeyGreen {
		keyid = 436;
	};
	class ItemKeyGreen437: ItemKeyGreen {
		keyid = 437;
	};
	class ItemKeyGreen438: ItemKeyGreen {
		keyid = 438;
	};
	class ItemKeyGreen439: ItemKeyGreen {
		keyid = 439;
	};
	class ItemKeyGreen440: ItemKeyGreen {
		keyid = 440;
	};
	class ItemKeyGreen441: ItemKeyGreen {
		keyid = 441;
	};
	class ItemKeyGreen442: ItemKeyGreen {
		keyid = 442;
	};
	class ItemKeyGreen443: ItemKeyGreen {
		keyid = 443;
	};
	class ItemKeyGreen444: ItemKeyGreen {
		keyid = 444;
	};
	class ItemKeyGreen445: ItemKeyGreen {
		keyid = 445;
	};
	class ItemKeyGreen446: ItemKeyGreen {
		keyid = 446;
	};
	class ItemKeyGreen447: ItemKeyGreen {
		keyid = 447;
	};
	class ItemKeyGreen448: ItemKeyGreen {
		keyid = 448;
	};
	class ItemKeyGreen449: ItemKeyGreen {
		keyid = 449;
	};
	class ItemKeyGreen450: ItemKeyGreen {
		keyid = 450;
	};
	class ItemKeyGreen451: ItemKeyGreen {
		keyid = 451;
	};
	class ItemKeyGreen452: ItemKeyGreen {
		keyid = 452;
	};
	class ItemKeyGreen453: ItemKeyGreen {
		keyid = 453;
	};
	class ItemKeyGreen454: ItemKeyGreen {
		keyid = 454;
	};
	class ItemKeyGreen455: ItemKeyGreen {
		keyid = 455;
	};
	class ItemKeyGreen456: ItemKeyGreen {
		keyid = 456;
	};
	class ItemKeyGreen457: ItemKeyGreen {
		keyid = 457;
	};
	class ItemKeyGreen458: ItemKeyGreen {
		keyid = 458;
	};
	class ItemKeyGreen459: ItemKeyGreen {
		keyid = 459;
	};
	class ItemKeyGreen460: ItemKeyGreen {
		keyid = 460;
	};
	class ItemKeyGreen461: ItemKeyGreen {
		keyid = 461;
	};
	class ItemKeyGreen462: ItemKeyGreen {
		keyid = 462;
	};
	class ItemKeyGreen463: ItemKeyGreen {
		keyid = 463;
	};
	class ItemKeyGreen464: ItemKeyGreen {
		keyid = 464;
	};
	class ItemKeyGreen465: ItemKeyGreen {
		keyid = 465;
	};
	class ItemKeyGreen466: ItemKeyGreen {
		keyid = 466;
	};
	class ItemKeyGreen467: ItemKeyGreen {
		keyid = 467;
	};
	class ItemKeyGreen468: ItemKeyGreen {
		keyid = 468;
	};
	class ItemKeyGreen469: ItemKeyGreen {
		keyid = 469;
	};
	class ItemKeyGreen470: ItemKeyGreen {
		keyid = 470;
	};
	class ItemKeyGreen471: ItemKeyGreen {
		keyid = 471;
	};
	class ItemKeyGreen472: ItemKeyGreen {
		keyid = 472;
	};
	class ItemKeyGreen473: ItemKeyGreen {
		keyid = 473;
	};
	class ItemKeyGreen474: ItemKeyGreen {
		keyid = 474;
	};
	class ItemKeyGreen475: ItemKeyGreen {
		keyid = 475;
	};
	class ItemKeyGreen476: ItemKeyGreen {
		keyid = 476;
	};
	class ItemKeyGreen477: ItemKeyGreen {
		keyid = 477;
	};
	class ItemKeyGreen478: ItemKeyGreen {
		keyid = 478;
	};
	class ItemKeyGreen479: ItemKeyGreen {
		keyid = 479;
	};
	class ItemKeyGreen480: ItemKeyGreen {
		keyid = 480;
	};
	class ItemKeyGreen481: ItemKeyGreen {
		keyid = 481;
	};
	class ItemKeyGreen482: ItemKeyGreen {
		keyid = 482;
	};
	class ItemKeyGreen483: ItemKeyGreen {
		keyid = 483;
	};
	class ItemKeyGreen484: ItemKeyGreen {
		keyid = 484;
	};
	class ItemKeyGreen485: ItemKeyGreen {
		keyid = 485;
	};
	class ItemKeyGreen486: ItemKeyGreen {
		keyid = 486;
	};
	class ItemKeyGreen487: ItemKeyGreen {
		keyid = 487;
	};
	class ItemKeyGreen488: ItemKeyGreen {
		keyid = 488;
	};
	class ItemKeyGreen489: ItemKeyGreen {
		keyid = 489;
	};
	class ItemKeyGreen490: ItemKeyGreen {
		keyid = 490;
	};
	class ItemKeyGreen491: ItemKeyGreen {
		keyid = 491;
	};
	class ItemKeyGreen492: ItemKeyGreen {
		keyid = 492;
	};
	class ItemKeyGreen493: ItemKeyGreen {
		keyid = 493;
	};
	class ItemKeyGreen494: ItemKeyGreen {
		keyid = 494;
	};
	class ItemKeyGreen495: ItemKeyGreen {
		keyid = 495;
	};
	class ItemKeyGreen496: ItemKeyGreen {
		keyid = 496;
	};
	class ItemKeyGreen497: ItemKeyGreen {
		keyid = 497;
	};
	class ItemKeyGreen498: ItemKeyGreen {
		keyid = 498;
	};
	class ItemKeyGreen499: ItemKeyGreen {
		keyid = 499;
	};
	class ItemKeyGreen500: ItemKeyGreen {
		keyid = 500;
	};
	class ItemKeyGreen501: ItemKeyGreen {
		keyid = 501;
	};
	class ItemKeyGreen502: ItemKeyGreen {
		keyid = 502;
	};
	class ItemKeyGreen503: ItemKeyGreen {
		keyid = 503;
	};
	class ItemKeyGreen504: ItemKeyGreen {
		keyid = 504;
	};
	class ItemKeyGreen505: ItemKeyGreen {
		keyid = 505;
	};
	class ItemKeyGreen506: ItemKeyGreen {
		keyid = 506;
	};
	class ItemKeyGreen507: ItemKeyGreen {
		keyid = 507;
	};
	class ItemKeyGreen508: ItemKeyGreen {
		keyid = 508;
	};
	class ItemKeyGreen509: ItemKeyGreen {
		keyid = 509;
	};
	class ItemKeyGreen510: ItemKeyGreen {
		keyid = 510;
	};
	class ItemKeyGreen511: ItemKeyGreen {
		keyid = 511;
	};
	class ItemKeyGreen512: ItemKeyGreen {
		keyid = 512;
	};
	class ItemKeyGreen513: ItemKeyGreen {
		keyid = 513;
	};
	class ItemKeyGreen514: ItemKeyGreen {
		keyid = 514;
	};
	class ItemKeyGreen515: ItemKeyGreen {
		keyid = 515;
	};
	class ItemKeyGreen516: ItemKeyGreen {
		keyid = 516;
	};
	class ItemKeyGreen517: ItemKeyGreen {
		keyid = 517;
	};
	class ItemKeyGreen518: ItemKeyGreen {
		keyid = 518;
	};
	class ItemKeyGreen519: ItemKeyGreen {
		keyid = 519;
	};
	class ItemKeyGreen520: ItemKeyGreen {
		keyid = 520;
	};
	class ItemKeyGreen521: ItemKeyGreen {
		keyid = 521;
	};
	class ItemKeyGreen522: ItemKeyGreen {
		keyid = 522;
	};
	class ItemKeyGreen523: ItemKeyGreen {
		keyid = 523;
	};
	class ItemKeyGreen524: ItemKeyGreen {
		keyid = 524;
	};
	class ItemKeyGreen525: ItemKeyGreen {
		keyid = 525;
	};
	class ItemKeyGreen526: ItemKeyGreen {
		keyid = 526;
	};
	class ItemKeyGreen527: ItemKeyGreen {
		keyid = 527;
	};
	class ItemKeyGreen528: ItemKeyGreen {
		keyid = 528;
	};
	class ItemKeyGreen529: ItemKeyGreen {
		keyid = 529;
	};
	class ItemKeyGreen530: ItemKeyGreen {
		keyid = 530;
	};
	class ItemKeyGreen531: ItemKeyGreen {
		keyid = 531;
	};
	class ItemKeyGreen532: ItemKeyGreen {
		keyid = 532;
	};
	class ItemKeyGreen533: ItemKeyGreen {
		keyid = 533;
	};
	class ItemKeyGreen534: ItemKeyGreen {
		keyid = 534;
	};
	class ItemKeyGreen535: ItemKeyGreen {
		keyid = 535;
	};
	class ItemKeyGreen536: ItemKeyGreen {
		keyid = 536;
	};
	class ItemKeyGreen537: ItemKeyGreen {
		keyid = 537;
	};
	class ItemKeyGreen538: ItemKeyGreen {
		keyid = 538;
	};
	class ItemKeyGreen539: ItemKeyGreen {
		keyid = 539;
	};
	class ItemKeyGreen540: ItemKeyGreen {
		keyid = 540;
	};
	class ItemKeyGreen541: ItemKeyGreen {
		keyid = 541;
	};
	class ItemKeyGreen542: ItemKeyGreen {
		keyid = 542;
	};
	class ItemKeyGreen543: ItemKeyGreen {
		keyid = 543;
	};
	class ItemKeyGreen544: ItemKeyGreen {
		keyid = 544;
	};
	class ItemKeyGreen545: ItemKeyGreen {
		keyid = 545;
	};
	class ItemKeyGreen546: ItemKeyGreen {
		keyid = 546;
	};
	class ItemKeyGreen547: ItemKeyGreen {
		keyid = 547;
	};
	class ItemKeyGreen548: ItemKeyGreen {
		keyid = 548;
	};
	class ItemKeyGreen549: ItemKeyGreen {
		keyid = 549;
	};
	class ItemKeyGreen550: ItemKeyGreen {
		keyid = 550;
	};
	class ItemKeyGreen551: ItemKeyGreen {
		keyid = 551;
	};
	class ItemKeyGreen552: ItemKeyGreen {
		keyid = 552;
	};
	class ItemKeyGreen553: ItemKeyGreen {
		keyid = 553;
	};
	class ItemKeyGreen554: ItemKeyGreen {
		keyid = 554;
	};
	class ItemKeyGreen555: ItemKeyGreen {
		keyid = 555;
	};
	class ItemKeyGreen556: ItemKeyGreen {
		keyid = 556;
	};
	class ItemKeyGreen557: ItemKeyGreen {
		keyid = 557;
	};
	class ItemKeyGreen558: ItemKeyGreen {
		keyid = 558;
	};
	class ItemKeyGreen559: ItemKeyGreen {
		keyid = 559;
	};
	class ItemKeyGreen560: ItemKeyGreen {
		keyid = 560;
	};
	class ItemKeyGreen561: ItemKeyGreen {
		keyid = 561;
	};
	class ItemKeyGreen562: ItemKeyGreen {
		keyid = 562;
	};
	class ItemKeyGreen563: ItemKeyGreen {
		keyid = 563;
	};
	class ItemKeyGreen564: ItemKeyGreen {
		keyid = 564;
	};
	class ItemKeyGreen565: ItemKeyGreen {
		keyid = 565;
	};
	class ItemKeyGreen566: ItemKeyGreen {
		keyid = 566;
	};
	class ItemKeyGreen567: ItemKeyGreen {
		keyid = 567;
	};
	class ItemKeyGreen568: ItemKeyGreen {
		keyid = 568;
	};
	class ItemKeyGreen569: ItemKeyGreen {
		keyid = 569;
	};
	class ItemKeyGreen570: ItemKeyGreen {
		keyid = 570;
	};
	class ItemKeyGreen571: ItemKeyGreen {
		keyid = 571;
	};
	class ItemKeyGreen572: ItemKeyGreen {
		keyid = 572;
	};
	class ItemKeyGreen573: ItemKeyGreen {
		keyid = 573;
	};
	class ItemKeyGreen574: ItemKeyGreen {
		keyid = 574;
	};
	class ItemKeyGreen575: ItemKeyGreen {
		keyid = 575;
	};
	class ItemKeyGreen576: ItemKeyGreen {
		keyid = 576;
	};
	class ItemKeyGreen577: ItemKeyGreen {
		keyid = 577;
	};
	class ItemKeyGreen578: ItemKeyGreen {
		keyid = 578;
	};
	class ItemKeyGreen579: ItemKeyGreen {
		keyid = 579;
	};
	class ItemKeyGreen580: ItemKeyGreen {
		keyid = 580;
	};
	class ItemKeyGreen581: ItemKeyGreen {
		keyid = 581;
	};
	class ItemKeyGreen582: ItemKeyGreen {
		keyid = 582;
	};
	class ItemKeyGreen583: ItemKeyGreen {
		keyid = 583;
	};
	class ItemKeyGreen584: ItemKeyGreen {
		keyid = 584;
	};
	class ItemKeyGreen585: ItemKeyGreen {
		keyid = 585;
	};
	class ItemKeyGreen586: ItemKeyGreen {
		keyid = 586;
	};
	class ItemKeyGreen587: ItemKeyGreen {
		keyid = 587;
	};
	class ItemKeyGreen588: ItemKeyGreen {
		keyid = 588;
	};
	class ItemKeyGreen589: ItemKeyGreen {
		keyid = 589;
	};
	class ItemKeyGreen590: ItemKeyGreen {
		keyid = 590;
	};
	class ItemKeyGreen591: ItemKeyGreen {
		keyid = 591;
	};
	class ItemKeyGreen592: ItemKeyGreen {
		keyid = 592;
	};
	class ItemKeyGreen593: ItemKeyGreen {
		keyid = 593;
	};
	class ItemKeyGreen594: ItemKeyGreen {
		keyid = 594;
	};
	class ItemKeyGreen595: ItemKeyGreen {
		keyid = 595;
	};
	class ItemKeyGreen596: ItemKeyGreen {
		keyid = 596;
	};
	class ItemKeyGreen597: ItemKeyGreen {
		keyid = 597;
	};
	class ItemKeyGreen598: ItemKeyGreen {
		keyid = 598;
	};
	class ItemKeyGreen599: ItemKeyGreen {
		keyid = 599;
	};
	class ItemKeyGreen600: ItemKeyGreen {
		keyid = 600;
	};
	class ItemKeyGreen601: ItemKeyGreen {
		keyid = 601;
	};
	class ItemKeyGreen602: ItemKeyGreen {
		keyid = 602;
	};
	class ItemKeyGreen603: ItemKeyGreen {
		keyid = 603;
	};
	class ItemKeyGreen604: ItemKeyGreen {
		keyid = 604;
	};
	class ItemKeyGreen605: ItemKeyGreen {
		keyid = 605;
	};
	class ItemKeyGreen606: ItemKeyGreen {
		keyid = 606;
	};
	class ItemKeyGreen607: ItemKeyGreen {
		keyid = 607;
	};
	class ItemKeyGreen608: ItemKeyGreen {
		keyid = 608;
	};
	class ItemKeyGreen609: ItemKeyGreen {
		keyid = 609;
	};
	class ItemKeyGreen610: ItemKeyGreen {
		keyid = 610;
	};
	class ItemKeyGreen611: ItemKeyGreen {
		keyid = 611;
	};
	class ItemKeyGreen612: ItemKeyGreen {
		keyid = 612;
	};
	class ItemKeyGreen613: ItemKeyGreen {
		keyid = 613;
	};
	class ItemKeyGreen614: ItemKeyGreen {
		keyid = 614;
	};
	class ItemKeyGreen615: ItemKeyGreen {
		keyid = 615;
	};
	class ItemKeyGreen616: ItemKeyGreen {
		keyid = 616;
	};
	class ItemKeyGreen617: ItemKeyGreen {
		keyid = 617;
	};
	class ItemKeyGreen618: ItemKeyGreen {
		keyid = 618;
	};
	class ItemKeyGreen619: ItemKeyGreen {
		keyid = 619;
	};
	class ItemKeyGreen620: ItemKeyGreen {
		keyid = 620;
	};
	class ItemKeyGreen621: ItemKeyGreen {
		keyid = 621;
	};
	class ItemKeyGreen622: ItemKeyGreen {
		keyid = 622;
	};
	class ItemKeyGreen623: ItemKeyGreen {
		keyid = 623;
	};
	class ItemKeyGreen624: ItemKeyGreen {
		keyid = 624;
	};
	class ItemKeyGreen625: ItemKeyGreen {
		keyid = 625;
	};
	class ItemKeyGreen626: ItemKeyGreen {
		keyid = 626;
	};
	class ItemKeyGreen627: ItemKeyGreen {
		keyid = 627;
	};
	class ItemKeyGreen628: ItemKeyGreen {
		keyid = 628;
	};
	class ItemKeyGreen629: ItemKeyGreen {
		keyid = 629;
	};
	class ItemKeyGreen630: ItemKeyGreen {
		keyid = 630;
	};
	class ItemKeyGreen631: ItemKeyGreen {
		keyid = 631;
	};
	class ItemKeyGreen632: ItemKeyGreen {
		keyid = 632;
	};
	class ItemKeyGreen633: ItemKeyGreen {
		keyid = 633;
	};
	class ItemKeyGreen634: ItemKeyGreen {
		keyid = 634;
	};
	class ItemKeyGreen635: ItemKeyGreen {
		keyid = 635;
	};
	class ItemKeyGreen636: ItemKeyGreen {
		keyid = 636;
	};
	class ItemKeyGreen637: ItemKeyGreen {
		keyid = 637;
	};
	class ItemKeyGreen638: ItemKeyGreen {
		keyid = 638;
	};
	class ItemKeyGreen639: ItemKeyGreen {
		keyid = 639;
	};
	class ItemKeyGreen640: ItemKeyGreen {
		keyid = 640;
	};
	class ItemKeyGreen641: ItemKeyGreen {
		keyid = 641;
	};
	class ItemKeyGreen642: ItemKeyGreen {
		keyid = 642;
	};
	class ItemKeyGreen643: ItemKeyGreen {
		keyid = 643;
	};
	class ItemKeyGreen644: ItemKeyGreen {
		keyid = 644;
	};
	class ItemKeyGreen645: ItemKeyGreen {
		keyid = 645;
	};
	class ItemKeyGreen646: ItemKeyGreen {
		keyid = 646;
	};
	class ItemKeyGreen647: ItemKeyGreen {
		keyid = 647;
	};
	class ItemKeyGreen648: ItemKeyGreen {
		keyid = 648;
	};
	class ItemKeyGreen649: ItemKeyGreen {
		keyid = 649;
	};
	class ItemKeyGreen650: ItemKeyGreen {
		keyid = 650;
	};
	class ItemKeyGreen651: ItemKeyGreen {
		keyid = 651;
	};
	class ItemKeyGreen652: ItemKeyGreen {
		keyid = 652;
	};
	class ItemKeyGreen653: ItemKeyGreen {
		keyid = 653;
	};
	class ItemKeyGreen654: ItemKeyGreen {
		keyid = 654;
	};
	class ItemKeyGreen655: ItemKeyGreen {
		keyid = 655;
	};
	class ItemKeyGreen656: ItemKeyGreen {
		keyid = 656;
	};
	class ItemKeyGreen657: ItemKeyGreen {
		keyid = 657;
	};
	class ItemKeyGreen658: ItemKeyGreen {
		keyid = 658;
	};
	class ItemKeyGreen659: ItemKeyGreen {
		keyid = 659;
	};
	class ItemKeyGreen660: ItemKeyGreen {
		keyid = 660;
	};
	class ItemKeyGreen661: ItemKeyGreen {
		keyid = 661;
	};
	class ItemKeyGreen662: ItemKeyGreen {
		keyid = 662;
	};
	class ItemKeyGreen663: ItemKeyGreen {
		keyid = 663;
	};
	class ItemKeyGreen664: ItemKeyGreen {
		keyid = 664;
	};
	class ItemKeyGreen665: ItemKeyGreen {
		keyid = 665;
	};
	class ItemKeyGreen666: ItemKeyGreen {
		keyid = 666;
	};
	class ItemKeyGreen667: ItemKeyGreen {
		keyid = 667;
	};
	class ItemKeyGreen668: ItemKeyGreen {
		keyid = 668;
	};
	class ItemKeyGreen669: ItemKeyGreen {
		keyid = 669;
	};
	class ItemKeyGreen670: ItemKeyGreen {
		keyid = 670;
	};
	class ItemKeyGreen671: ItemKeyGreen {
		keyid = 671;
	};
	class ItemKeyGreen672: ItemKeyGreen {
		keyid = 672;
	};
	class ItemKeyGreen673: ItemKeyGreen {
		keyid = 673;
	};
	class ItemKeyGreen674: ItemKeyGreen {
		keyid = 674;
	};
	class ItemKeyGreen675: ItemKeyGreen {
		keyid = 675;
	};
	class ItemKeyGreen676: ItemKeyGreen {
		keyid = 676;
	};
	class ItemKeyGreen677: ItemKeyGreen {
		keyid = 677;
	};
	class ItemKeyGreen678: ItemKeyGreen {
		keyid = 678;
	};
	class ItemKeyGreen679: ItemKeyGreen {
		keyid = 679;
	};
	class ItemKeyGreen680: ItemKeyGreen {
		keyid = 680;
	};
	class ItemKeyGreen681: ItemKeyGreen {
		keyid = 681;
	};
	class ItemKeyGreen682: ItemKeyGreen {
		keyid = 682;
	};
	class ItemKeyGreen683: ItemKeyGreen {
		keyid = 683;
	};
	class ItemKeyGreen684: ItemKeyGreen {
		keyid = 684;
	};
	class ItemKeyGreen685: ItemKeyGreen {
		keyid = 685;
	};
	class ItemKeyGreen686: ItemKeyGreen {
		keyid = 686;
	};
	class ItemKeyGreen687: ItemKeyGreen {
		keyid = 687;
	};
	class ItemKeyGreen688: ItemKeyGreen {
		keyid = 688;
	};
	class ItemKeyGreen689: ItemKeyGreen {
		keyid = 689;
	};
	class ItemKeyGreen690: ItemKeyGreen {
		keyid = 690;
	};
	class ItemKeyGreen691: ItemKeyGreen {
		keyid = 691;
	};
	class ItemKeyGreen692: ItemKeyGreen {
		keyid = 692;
	};
	class ItemKeyGreen693: ItemKeyGreen {
		keyid = 693;
	};
	class ItemKeyGreen694: ItemKeyGreen {
		keyid = 694;
	};
	class ItemKeyGreen695: ItemKeyGreen {
		keyid = 695;
	};
	class ItemKeyGreen696: ItemKeyGreen {
		keyid = 696;
	};
	class ItemKeyGreen697: ItemKeyGreen {
		keyid = 697;
	};
	class ItemKeyGreen698: ItemKeyGreen {
		keyid = 698;
	};
	class ItemKeyGreen699: ItemKeyGreen {
		keyid = 699;
	};
	class ItemKeyGreen700: ItemKeyGreen {
		keyid = 700;
	};
	class ItemKeyGreen701: ItemKeyGreen {
		keyid = 701;
	};
	class ItemKeyGreen702: ItemKeyGreen {
		keyid = 702;
	};
	class ItemKeyGreen703: ItemKeyGreen {
		keyid = 703;
	};
	class ItemKeyGreen704: ItemKeyGreen {
		keyid = 704;
	};
	class ItemKeyGreen705: ItemKeyGreen {
		keyid = 705;
	};
	class ItemKeyGreen706: ItemKeyGreen {
		keyid = 706;
	};
	class ItemKeyGreen707: ItemKeyGreen {
		keyid = 707;
	};
	class ItemKeyGreen708: ItemKeyGreen {
		keyid = 708;
	};
	class ItemKeyGreen709: ItemKeyGreen {
		keyid = 709;
	};
	class ItemKeyGreen710: ItemKeyGreen {
		keyid = 710;
	};
	class ItemKeyGreen711: ItemKeyGreen {
		keyid = 711;
	};
	class ItemKeyGreen712: ItemKeyGreen {
		keyid = 712;
	};
	class ItemKeyGreen713: ItemKeyGreen {
		keyid = 713;
	};
	class ItemKeyGreen714: ItemKeyGreen {
		keyid = 714;
	};
	class ItemKeyGreen715: ItemKeyGreen {
		keyid = 715;
	};
	class ItemKeyGreen716: ItemKeyGreen {
		keyid = 716;
	};
	class ItemKeyGreen717: ItemKeyGreen {
		keyid = 717;
	};
	class ItemKeyGreen718: ItemKeyGreen {
		keyid = 718;
	};
	class ItemKeyGreen719: ItemKeyGreen {
		keyid = 719;
	};
	class ItemKeyGreen720: ItemKeyGreen {
		keyid = 720;
	};
	class ItemKeyGreen721: ItemKeyGreen {
		keyid = 721;
	};
	class ItemKeyGreen722: ItemKeyGreen {
		keyid = 722;
	};
	class ItemKeyGreen723: ItemKeyGreen {
		keyid = 723;
	};
	class ItemKeyGreen724: ItemKeyGreen {
		keyid = 724;
	};
	class ItemKeyGreen725: ItemKeyGreen {
		keyid = 725;
	};
	class ItemKeyGreen726: ItemKeyGreen {
		keyid = 726;
	};
	class ItemKeyGreen727: ItemKeyGreen {
		keyid = 727;
	};
	class ItemKeyGreen728: ItemKeyGreen {
		keyid = 728;
	};
	class ItemKeyGreen729: ItemKeyGreen {
		keyid = 729;
	};
	class ItemKeyGreen730: ItemKeyGreen {
		keyid = 730;
	};
	class ItemKeyGreen731: ItemKeyGreen {
		keyid = 731;
	};
	class ItemKeyGreen732: ItemKeyGreen {
		keyid = 732;
	};
	class ItemKeyGreen733: ItemKeyGreen {
		keyid = 733;
	};
	class ItemKeyGreen734: ItemKeyGreen {
		keyid = 734;
	};
	class ItemKeyGreen735: ItemKeyGreen {
		keyid = 735;
	};
	class ItemKeyGreen736: ItemKeyGreen {
		keyid = 736;
	};
	class ItemKeyGreen737: ItemKeyGreen {
		keyid = 737;
	};
	class ItemKeyGreen738: ItemKeyGreen {
		keyid = 738;
	};
	class ItemKeyGreen739: ItemKeyGreen {
		keyid = 739;
	};
	class ItemKeyGreen740: ItemKeyGreen {
		keyid = 740;
	};
	class ItemKeyGreen741: ItemKeyGreen {
		keyid = 741;
	};
	class ItemKeyGreen742: ItemKeyGreen {
		keyid = 742;
	};
	class ItemKeyGreen743: ItemKeyGreen {
		keyid = 743;
	};
	class ItemKeyGreen744: ItemKeyGreen {
		keyid = 744;
	};
	class ItemKeyGreen745: ItemKeyGreen {
		keyid = 745;
	};
	class ItemKeyGreen746: ItemKeyGreen {
		keyid = 746;
	};
	class ItemKeyGreen747: ItemKeyGreen {
		keyid = 747;
	};
	class ItemKeyGreen748: ItemKeyGreen {
		keyid = 748;
	};
	class ItemKeyGreen749: ItemKeyGreen {
		keyid = 749;
	};
	class ItemKeyGreen750: ItemKeyGreen {
		keyid = 750;
	};
	class ItemKeyGreen751: ItemKeyGreen {
		keyid = 751;
	};
	class ItemKeyGreen752: ItemKeyGreen {
		keyid = 752;
	};
	class ItemKeyGreen753: ItemKeyGreen {
		keyid = 753;
	};
	class ItemKeyGreen754: ItemKeyGreen {
		keyid = 754;
	};
	class ItemKeyGreen755: ItemKeyGreen {
		keyid = 755;
	};
	class ItemKeyGreen756: ItemKeyGreen {
		keyid = 756;
	};
	class ItemKeyGreen757: ItemKeyGreen {
		keyid = 757;
	};
	class ItemKeyGreen758: ItemKeyGreen {
		keyid = 758;
	};
	class ItemKeyGreen759: ItemKeyGreen {
		keyid = 759;
	};
	class ItemKeyGreen760: ItemKeyGreen {
		keyid = 760;
	};
	class ItemKeyGreen761: ItemKeyGreen {
		keyid = 761;
	};
	class ItemKeyGreen762: ItemKeyGreen {
		keyid = 762;
	};
	class ItemKeyGreen763: ItemKeyGreen {
		keyid = 763;
	};
	class ItemKeyGreen764: ItemKeyGreen {
		keyid = 764;
	};
	class ItemKeyGreen765: ItemKeyGreen {
		keyid = 765;
	};
	class ItemKeyGreen766: ItemKeyGreen {
		keyid = 766;
	};
	class ItemKeyGreen767: ItemKeyGreen {
		keyid = 767;
	};
	class ItemKeyGreen768: ItemKeyGreen {
		keyid = 768;
	};
	class ItemKeyGreen769: ItemKeyGreen {
		keyid = 769;
	};
	class ItemKeyGreen770: ItemKeyGreen {
		keyid = 770;
	};
	class ItemKeyGreen771: ItemKeyGreen {
		keyid = 771;
	};
	class ItemKeyGreen772: ItemKeyGreen {
		keyid = 772;
	};
	class ItemKeyGreen773: ItemKeyGreen {
		keyid = 773;
	};
	class ItemKeyGreen774: ItemKeyGreen {
		keyid = 774;
	};
	class ItemKeyGreen775: ItemKeyGreen {
		keyid = 775;
	};
	class ItemKeyGreen776: ItemKeyGreen {
		keyid = 776;
	};
	class ItemKeyGreen777: ItemKeyGreen {
		keyid = 777;
	};
	class ItemKeyGreen778: ItemKeyGreen {
		keyid = 778;
	};
	class ItemKeyGreen779: ItemKeyGreen {
		keyid = 779;
	};
	class ItemKeyGreen780: ItemKeyGreen {
		keyid = 780;
	};
	class ItemKeyGreen781: ItemKeyGreen {
		keyid = 781;
	};
	class ItemKeyGreen782: ItemKeyGreen {
		keyid = 782;
	};
	class ItemKeyGreen783: ItemKeyGreen {
		keyid = 783;
	};
	class ItemKeyGreen784: ItemKeyGreen {
		keyid = 784;
	};
	class ItemKeyGreen785: ItemKeyGreen {
		keyid = 785;
	};
	class ItemKeyGreen786: ItemKeyGreen {
		keyid = 786;
	};
	class ItemKeyGreen787: ItemKeyGreen {
		keyid = 787;
	};
	class ItemKeyGreen788: ItemKeyGreen {
		keyid = 788;
	};
	class ItemKeyGreen789: ItemKeyGreen {
		keyid = 789;
	};
	class ItemKeyGreen790: ItemKeyGreen {
		keyid = 790;
	};
	class ItemKeyGreen791: ItemKeyGreen {
		keyid = 791;
	};
	class ItemKeyGreen792: ItemKeyGreen {
		keyid = 792;
	};
	class ItemKeyGreen793: ItemKeyGreen {
		keyid = 793;
	};
	class ItemKeyGreen794: ItemKeyGreen {
		keyid = 794;
	};
	class ItemKeyGreen795: ItemKeyGreen {
		keyid = 795;
	};
	class ItemKeyGreen796: ItemKeyGreen {
		keyid = 796;
	};
	class ItemKeyGreen797: ItemKeyGreen {
		keyid = 797;
	};
	class ItemKeyGreen798: ItemKeyGreen {
		keyid = 798;
	};
	class ItemKeyGreen799: ItemKeyGreen {
		keyid = 799;
	};
	class ItemKeyGreen800: ItemKeyGreen {
		keyid = 800;
	};
	class ItemKeyGreen801: ItemKeyGreen {
		keyid = 801;
	};
	class ItemKeyGreen802: ItemKeyGreen {
		keyid = 802;
	};
	class ItemKeyGreen803: ItemKeyGreen {
		keyid = 803;
	};
	class ItemKeyGreen804: ItemKeyGreen {
		keyid = 804;
	};
	class ItemKeyGreen805: ItemKeyGreen {
		keyid = 805;
	};
	class ItemKeyGreen806: ItemKeyGreen {
		keyid = 806;
	};
	class ItemKeyGreen807: ItemKeyGreen {
		keyid = 807;
	};
	class ItemKeyGreen808: ItemKeyGreen {
		keyid = 808;
	};
	class ItemKeyGreen809: ItemKeyGreen {
		keyid = 809;
	};
	class ItemKeyGreen810: ItemKeyGreen {
		keyid = 810;
	};
	class ItemKeyGreen811: ItemKeyGreen {
		keyid = 811;
	};
	class ItemKeyGreen812: ItemKeyGreen {
		keyid = 812;
	};
	class ItemKeyGreen813: ItemKeyGreen {
		keyid = 813;
	};
	class ItemKeyGreen814: ItemKeyGreen {
		keyid = 814;
	};
	class ItemKeyGreen815: ItemKeyGreen {
		keyid = 815;
	};
	class ItemKeyGreen816: ItemKeyGreen {
		keyid = 816;
	};
	class ItemKeyGreen817: ItemKeyGreen {
		keyid = 817;
	};
	class ItemKeyGreen818: ItemKeyGreen {
		keyid = 818;
	};
	class ItemKeyGreen819: ItemKeyGreen {
		keyid = 819;
	};
	class ItemKeyGreen820: ItemKeyGreen {
		keyid = 820;
	};
	class ItemKeyGreen821: ItemKeyGreen {
		keyid = 821;
	};
	class ItemKeyGreen822: ItemKeyGreen {
		keyid = 822;
	};
	class ItemKeyGreen823: ItemKeyGreen {
		keyid = 823;
	};
	class ItemKeyGreen824: ItemKeyGreen {
		keyid = 824;
	};
	class ItemKeyGreen825: ItemKeyGreen {
		keyid = 825;
	};
	class ItemKeyGreen826: ItemKeyGreen {
		keyid = 826;
	};
	class ItemKeyGreen827: ItemKeyGreen {
		keyid = 827;
	};
	class ItemKeyGreen828: ItemKeyGreen {
		keyid = 828;
	};
	class ItemKeyGreen829: ItemKeyGreen {
		keyid = 829;
	};
	class ItemKeyGreen830: ItemKeyGreen {
		keyid = 830;
	};
	class ItemKeyGreen831: ItemKeyGreen {
		keyid = 831;
	};
	class ItemKeyGreen832: ItemKeyGreen {
		keyid = 832;
	};
	class ItemKeyGreen833: ItemKeyGreen {
		keyid = 833;
	};
	class ItemKeyGreen834: ItemKeyGreen {
		keyid = 834;
	};
	class ItemKeyGreen835: ItemKeyGreen {
		keyid = 835;
	};
	class ItemKeyGreen836: ItemKeyGreen {
		keyid = 836;
	};
	class ItemKeyGreen837: ItemKeyGreen {
		keyid = 837;
	};
	class ItemKeyGreen838: ItemKeyGreen {
		keyid = 838;
	};
	class ItemKeyGreen839: ItemKeyGreen {
		keyid = 839;
	};
	class ItemKeyGreen840: ItemKeyGreen {
		keyid = 840;
	};
	class ItemKeyGreen841: ItemKeyGreen {
		keyid = 841;
	};
	class ItemKeyGreen842: ItemKeyGreen {
		keyid = 842;
	};
	class ItemKeyGreen843: ItemKeyGreen {
		keyid = 843;
	};
	class ItemKeyGreen844: ItemKeyGreen {
		keyid = 844;
	};
	class ItemKeyGreen845: ItemKeyGreen {
		keyid = 845;
	};
	class ItemKeyGreen846: ItemKeyGreen {
		keyid = 846;
	};
	class ItemKeyGreen847: ItemKeyGreen {
		keyid = 847;
	};
	class ItemKeyGreen848: ItemKeyGreen {
		keyid = 848;
	};
	class ItemKeyGreen849: ItemKeyGreen {
		keyid = 849;
	};
	class ItemKeyGreen850: ItemKeyGreen {
		keyid = 850;
	};
	class ItemKeyGreen851: ItemKeyGreen {
		keyid = 851;
	};
	class ItemKeyGreen852: ItemKeyGreen {
		keyid = 852;
	};
	class ItemKeyGreen853: ItemKeyGreen {
		keyid = 853;
	};
	class ItemKeyGreen854: ItemKeyGreen {
		keyid = 854;
	};
	class ItemKeyGreen855: ItemKeyGreen {
		keyid = 855;
	};
	class ItemKeyGreen856: ItemKeyGreen {
		keyid = 856;
	};
	class ItemKeyGreen857: ItemKeyGreen {
		keyid = 857;
	};
	class ItemKeyGreen858: ItemKeyGreen {
		keyid = 858;
	};
	class ItemKeyGreen859: ItemKeyGreen {
		keyid = 859;
	};
	class ItemKeyGreen860: ItemKeyGreen {
		keyid = 860;
	};
	class ItemKeyGreen861: ItemKeyGreen {
		keyid = 861;
	};
	class ItemKeyGreen862: ItemKeyGreen {
		keyid = 862;
	};
	class ItemKeyGreen863: ItemKeyGreen {
		keyid = 863;
	};
	class ItemKeyGreen864: ItemKeyGreen {
		keyid = 864;
	};
	class ItemKeyGreen865: ItemKeyGreen {
		keyid = 865;
	};
	class ItemKeyGreen866: ItemKeyGreen {
		keyid = 866;
	};
	class ItemKeyGreen867: ItemKeyGreen {
		keyid = 867;
	};
	class ItemKeyGreen868: ItemKeyGreen {
		keyid = 868;
	};
	class ItemKeyGreen869: ItemKeyGreen {
		keyid = 869;
	};
	class ItemKeyGreen870: ItemKeyGreen {
		keyid = 870;
	};
	class ItemKeyGreen871: ItemKeyGreen {
		keyid = 871;
	};
	class ItemKeyGreen872: ItemKeyGreen {
		keyid = 872;
	};
	class ItemKeyGreen873: ItemKeyGreen {
		keyid = 873;
	};
	class ItemKeyGreen874: ItemKeyGreen {
		keyid = 874;
	};
	class ItemKeyGreen875: ItemKeyGreen {
		keyid = 875;
	};
	class ItemKeyGreen876: ItemKeyGreen {
		keyid = 876;
	};
	class ItemKeyGreen877: ItemKeyGreen {
		keyid = 877;
	};
	class ItemKeyGreen878: ItemKeyGreen {
		keyid = 878;
	};
	class ItemKeyGreen879: ItemKeyGreen {
		keyid = 879;
	};
	class ItemKeyGreen880: ItemKeyGreen {
		keyid = 880;
	};
	class ItemKeyGreen881: ItemKeyGreen {
		keyid = 881;
	};
	class ItemKeyGreen882: ItemKeyGreen {
		keyid = 882;
	};
	class ItemKeyGreen883: ItemKeyGreen {
		keyid = 883;
	};
	class ItemKeyGreen884: ItemKeyGreen {
		keyid = 884;
	};
	class ItemKeyGreen885: ItemKeyGreen {
		keyid = 885;
	};
	class ItemKeyGreen886: ItemKeyGreen {
		keyid = 886;
	};
	class ItemKeyGreen887: ItemKeyGreen {
		keyid = 887;
	};
	class ItemKeyGreen888: ItemKeyGreen {
		keyid = 888;
	};
	class ItemKeyGreen889: ItemKeyGreen {
		keyid = 889;
	};
	class ItemKeyGreen890: ItemKeyGreen {
		keyid = 890;
	};
	class ItemKeyGreen891: ItemKeyGreen {
		keyid = 891;
	};
	class ItemKeyGreen892: ItemKeyGreen {
		keyid = 892;
	};
	class ItemKeyGreen893: ItemKeyGreen {
		keyid = 893;
	};
	class ItemKeyGreen894: ItemKeyGreen {
		keyid = 894;
	};
	class ItemKeyGreen895: ItemKeyGreen {
		keyid = 895;
	};
	class ItemKeyGreen896: ItemKeyGreen {
		keyid = 896;
	};
	class ItemKeyGreen897: ItemKeyGreen {
		keyid = 897;
	};
	class ItemKeyGreen898: ItemKeyGreen {
		keyid = 898;
	};
	class ItemKeyGreen899: ItemKeyGreen {
		keyid = 899;
	};
	class ItemKeyGreen900: ItemKeyGreen {
		keyid = 900;
	};
	class ItemKeyGreen901: ItemKeyGreen {
		keyid = 901;
	};
	class ItemKeyGreen902: ItemKeyGreen {
		keyid = 902;
	};
	class ItemKeyGreen903: ItemKeyGreen {
		keyid = 903;
	};
	class ItemKeyGreen904: ItemKeyGreen {
		keyid = 904;
	};
	class ItemKeyGreen905: ItemKeyGreen {
		keyid = 905;
	};
	class ItemKeyGreen906: ItemKeyGreen {
		keyid = 906;
	};
	class ItemKeyGreen907: ItemKeyGreen {
		keyid = 907;
	};
	class ItemKeyGreen908: ItemKeyGreen {
		keyid = 908;
	};
	class ItemKeyGreen909: ItemKeyGreen {
		keyid = 909;
	};
	class ItemKeyGreen910: ItemKeyGreen {
		keyid = 910;
	};
	class ItemKeyGreen911: ItemKeyGreen {
		keyid = 911;
	};
	class ItemKeyGreen912: ItemKeyGreen {
		keyid = 912;
	};
	class ItemKeyGreen913: ItemKeyGreen {
		keyid = 913;
	};
	class ItemKeyGreen914: ItemKeyGreen {
		keyid = 914;
	};
	class ItemKeyGreen915: ItemKeyGreen {
		keyid = 915;
	};
	class ItemKeyGreen916: ItemKeyGreen {
		keyid = 916;
	};
	class ItemKeyGreen917: ItemKeyGreen {
		keyid = 917;
	};
	class ItemKeyGreen918: ItemKeyGreen {
		keyid = 918;
	};
	class ItemKeyGreen919: ItemKeyGreen {
		keyid = 919;
	};
	class ItemKeyGreen920: ItemKeyGreen {
		keyid = 920;
	};
	class ItemKeyGreen921: ItemKeyGreen {
		keyid = 921;
	};
	class ItemKeyGreen922: ItemKeyGreen {
		keyid = 922;
	};
	class ItemKeyGreen923: ItemKeyGreen {
		keyid = 923;
	};
	class ItemKeyGreen924: ItemKeyGreen {
		keyid = 924;
	};
	class ItemKeyGreen925: ItemKeyGreen {
		keyid = 925;
	};
	class ItemKeyGreen926: ItemKeyGreen {
		keyid = 926;
	};
	class ItemKeyGreen927: ItemKeyGreen {
		keyid = 927;
	};
	class ItemKeyGreen928: ItemKeyGreen {
		keyid = 928;
	};
	class ItemKeyGreen929: ItemKeyGreen {
		keyid = 929;
	};
	class ItemKeyGreen930: ItemKeyGreen {
		keyid = 930;
	};
	class ItemKeyGreen931: ItemKeyGreen {
		keyid = 931;
	};
	class ItemKeyGreen932: ItemKeyGreen {
		keyid = 932;
	};
	class ItemKeyGreen933: ItemKeyGreen {
		keyid = 933;
	};
	class ItemKeyGreen934: ItemKeyGreen {
		keyid = 934;
	};
	class ItemKeyGreen935: ItemKeyGreen {
		keyid = 935;
	};
	class ItemKeyGreen936: ItemKeyGreen {
		keyid = 936;
	};
	class ItemKeyGreen937: ItemKeyGreen {
		keyid = 937;
	};
	class ItemKeyGreen938: ItemKeyGreen {
		keyid = 938;
	};
	class ItemKeyGreen939: ItemKeyGreen {
		keyid = 939;
	};
	class ItemKeyGreen940: ItemKeyGreen {
		keyid = 940;
	};
	class ItemKeyGreen941: ItemKeyGreen {
		keyid = 941;
	};
	class ItemKeyGreen942: ItemKeyGreen {
		keyid = 942;
	};
	class ItemKeyGreen943: ItemKeyGreen {
		keyid = 943;
	};
	class ItemKeyGreen944: ItemKeyGreen {
		keyid = 944;
	};
	class ItemKeyGreen945: ItemKeyGreen {
		keyid = 945;
	};
	class ItemKeyGreen946: ItemKeyGreen {
		keyid = 946;
	};
	class ItemKeyGreen947: ItemKeyGreen {
		keyid = 947;
	};
	class ItemKeyGreen948: ItemKeyGreen {
		keyid = 948;
	};
	class ItemKeyGreen949: ItemKeyGreen {
		keyid = 949;
	};
	class ItemKeyGreen950: ItemKeyGreen {
		keyid = 950;
	};
	class ItemKeyGreen951: ItemKeyGreen {
		keyid = 951;
	};
	class ItemKeyGreen952: ItemKeyGreen {
		keyid = 952;
	};
	class ItemKeyGreen953: ItemKeyGreen {
		keyid = 953;
	};
	class ItemKeyGreen954: ItemKeyGreen {
		keyid = 954;
	};
	class ItemKeyGreen955: ItemKeyGreen {
		keyid = 955;
	};
	class ItemKeyGreen956: ItemKeyGreen {
		keyid = 956;
	};
	class ItemKeyGreen957: ItemKeyGreen {
		keyid = 957;
	};
	class ItemKeyGreen958: ItemKeyGreen {
		keyid = 958;
	};
	class ItemKeyGreen959: ItemKeyGreen {
		keyid = 959;
	};
	class ItemKeyGreen960: ItemKeyGreen {
		keyid = 960;
	};
	class ItemKeyGreen961: ItemKeyGreen {
		keyid = 961;
	};
	class ItemKeyGreen962: ItemKeyGreen {
		keyid = 962;
	};
	class ItemKeyGreen963: ItemKeyGreen {
		keyid = 963;
	};
	class ItemKeyGreen964: ItemKeyGreen {
		keyid = 964;
	};
	class ItemKeyGreen965: ItemKeyGreen {
		keyid = 965;
	};
	class ItemKeyGreen966: ItemKeyGreen {
		keyid = 966;
	};
	class ItemKeyGreen967: ItemKeyGreen {
		keyid = 967;
	};
	class ItemKeyGreen968: ItemKeyGreen {
		keyid = 968;
	};
	class ItemKeyGreen969: ItemKeyGreen {
		keyid = 969;
	};
	class ItemKeyGreen970: ItemKeyGreen {
		keyid = 970;
	};
	class ItemKeyGreen971: ItemKeyGreen {
		keyid = 971;
	};
	class ItemKeyGreen972: ItemKeyGreen {
		keyid = 972;
	};
	class ItemKeyGreen973: ItemKeyGreen {
		keyid = 973;
	};
	class ItemKeyGreen974: ItemKeyGreen {
		keyid = 974;
	};
	class ItemKeyGreen975: ItemKeyGreen {
		keyid = 975;
	};
	class ItemKeyGreen976: ItemKeyGreen {
		keyid = 976;
	};
	class ItemKeyGreen977: ItemKeyGreen {
		keyid = 977;
	};
	class ItemKeyGreen978: ItemKeyGreen {
		keyid = 978;
	};
	class ItemKeyGreen979: ItemKeyGreen {
		keyid = 979;
	};
	class ItemKeyGreen980: ItemKeyGreen {
		keyid = 980;
	};
	class ItemKeyGreen981: ItemKeyGreen {
		keyid = 981;
	};
	class ItemKeyGreen982: ItemKeyGreen {
		keyid = 982;
	};
	class ItemKeyGreen983: ItemKeyGreen {
		keyid = 983;
	};
	class ItemKeyGreen984: ItemKeyGreen {
		keyid = 984;
	};
	class ItemKeyGreen985: ItemKeyGreen {
		keyid = 985;
	};
	class ItemKeyGreen986: ItemKeyGreen {
		keyid = 986;
	};
	class ItemKeyGreen987: ItemKeyGreen {
		keyid = 987;
	};
	class ItemKeyGreen988: ItemKeyGreen {
		keyid = 988;
	};
	class ItemKeyGreen989: ItemKeyGreen {
		keyid = 989;
	};
	class ItemKeyGreen990: ItemKeyGreen {
		keyid = 990;
	};
	class ItemKeyGreen991: ItemKeyGreen {
		keyid = 991;
	};
	class ItemKeyGreen992: ItemKeyGreen {
		keyid = 992;
	};
	class ItemKeyGreen993: ItemKeyGreen {
		keyid = 993;
	};
	class ItemKeyGreen994: ItemKeyGreen {
		keyid = 994;
	};
	class ItemKeyGreen995: ItemKeyGreen {
		keyid = 995;
	};
	class ItemKeyGreen996: ItemKeyGreen {
		keyid = 996;
	};
	class ItemKeyGreen997: ItemKeyGreen {
		keyid = 997;
	};
	class ItemKeyGreen998: ItemKeyGreen {
		keyid = 998;
	};
	class ItemKeyGreen999: ItemKeyGreen {
		keyid = 999;
	};
	class ItemKeyGreen1000: ItemKeyGreen {
		keyid = 1000;
	};
	class ItemKeyGreen1001: ItemKeyGreen {
		keyid = 1001;
	};
	class ItemKeyGreen1002: ItemKeyGreen {
		keyid = 1002;
	};
	class ItemKeyGreen1003: ItemKeyGreen {
		keyid = 1003;
	};
	class ItemKeyGreen1004: ItemKeyGreen {
		keyid = 1004;
	};
	class ItemKeyGreen1005: ItemKeyGreen {
		keyid = 1005;
	};
	class ItemKeyGreen1006: ItemKeyGreen {
		keyid = 1006;
	};
	class ItemKeyGreen1007: ItemKeyGreen {
		keyid = 1007;
	};
	class ItemKeyGreen1008: ItemKeyGreen {
		keyid = 1008;
	};
	class ItemKeyGreen1009: ItemKeyGreen {
		keyid = 1009;
	};
	class ItemKeyGreen1010: ItemKeyGreen {
		keyid = 1010;
	};
	class ItemKeyGreen1011: ItemKeyGreen {
		keyid = 1011;
	};
	class ItemKeyGreen1012: ItemKeyGreen {
		keyid = 1012;
	};
	class ItemKeyGreen1013: ItemKeyGreen {
		keyid = 1013;
	};
	class ItemKeyGreen1014: ItemKeyGreen {
		keyid = 1014;
	};
	class ItemKeyGreen1015: ItemKeyGreen {
		keyid = 1015;
	};
	class ItemKeyGreen1016: ItemKeyGreen {
		keyid = 1016;
	};
	class ItemKeyGreen1017: ItemKeyGreen {
		keyid = 1017;
	};
	class ItemKeyGreen1018: ItemKeyGreen {
		keyid = 1018;
	};
	class ItemKeyGreen1019: ItemKeyGreen {
		keyid = 1019;
	};
	class ItemKeyGreen1020: ItemKeyGreen {
		keyid = 1020;
	};
	class ItemKeyGreen1021: ItemKeyGreen {
		keyid = 1021;
	};
	class ItemKeyGreen1022: ItemKeyGreen {
		keyid = 1022;
	};
	class ItemKeyGreen1023: ItemKeyGreen {
		keyid = 1023;
	};
	class ItemKeyGreen1024: ItemKeyGreen {
		keyid = 1024;
	};
	class ItemKeyGreen1025: ItemKeyGreen {
		keyid = 1025;
	};
	class ItemKeyGreen1026: ItemKeyGreen {
		keyid = 1026;
	};
	class ItemKeyGreen1027: ItemKeyGreen {
		keyid = 1027;
	};
	class ItemKeyGreen1028: ItemKeyGreen {
		keyid = 1028;
	};
	class ItemKeyGreen1029: ItemKeyGreen {
		keyid = 1029;
	};
	class ItemKeyGreen1030: ItemKeyGreen {
		keyid = 1030;
	};
	class ItemKeyGreen1031: ItemKeyGreen {
		keyid = 1031;
	};
	class ItemKeyGreen1032: ItemKeyGreen {
		keyid = 1032;
	};
	class ItemKeyGreen1033: ItemKeyGreen {
		keyid = 1033;
	};
	class ItemKeyGreen1034: ItemKeyGreen {
		keyid = 1034;
	};
	class ItemKeyGreen1035: ItemKeyGreen {
		keyid = 1035;
	};
	class ItemKeyGreen1036: ItemKeyGreen {
		keyid = 1036;
	};
	class ItemKeyGreen1037: ItemKeyGreen {
		keyid = 1037;
	};
	class ItemKeyGreen1038: ItemKeyGreen {
		keyid = 1038;
	};
	class ItemKeyGreen1039: ItemKeyGreen {
		keyid = 1039;
	};
	class ItemKeyGreen1040: ItemKeyGreen {
		keyid = 1040;
	};
	class ItemKeyGreen1041: ItemKeyGreen {
		keyid = 1041;
	};
	class ItemKeyGreen1042: ItemKeyGreen {
		keyid = 1042;
	};
	class ItemKeyGreen1043: ItemKeyGreen {
		keyid = 1043;
	};
	class ItemKeyGreen1044: ItemKeyGreen {
		keyid = 1044;
	};
	class ItemKeyGreen1045: ItemKeyGreen {
		keyid = 1045;
	};
	class ItemKeyGreen1046: ItemKeyGreen {
		keyid = 1046;
	};
	class ItemKeyGreen1047: ItemKeyGreen {
		keyid = 1047;
	};
	class ItemKeyGreen1048: ItemKeyGreen {
		keyid = 1048;
	};
	class ItemKeyGreen1049: ItemKeyGreen {
		keyid = 1049;
	};
	class ItemKeyGreen1050: ItemKeyGreen {
		keyid = 1050;
	};
	class ItemKeyGreen1051: ItemKeyGreen {
		keyid = 1051;
	};
	class ItemKeyGreen1052: ItemKeyGreen {
		keyid = 1052;
	};
	class ItemKeyGreen1053: ItemKeyGreen {
		keyid = 1053;
	};
	class ItemKeyGreen1054: ItemKeyGreen {
		keyid = 1054;
	};
	class ItemKeyGreen1055: ItemKeyGreen {
		keyid = 1055;
	};
	class ItemKeyGreen1056: ItemKeyGreen {
		keyid = 1056;
	};
	class ItemKeyGreen1057: ItemKeyGreen {
		keyid = 1057;
	};
	class ItemKeyGreen1058: ItemKeyGreen {
		keyid = 1058;
	};
	class ItemKeyGreen1059: ItemKeyGreen {
		keyid = 1059;
	};
	class ItemKeyGreen1060: ItemKeyGreen {
		keyid = 1060;
	};
	class ItemKeyGreen1061: ItemKeyGreen {
		keyid = 1061;
	};
	class ItemKeyGreen1062: ItemKeyGreen {
		keyid = 1062;
	};
	class ItemKeyGreen1063: ItemKeyGreen {
		keyid = 1063;
	};
	class ItemKeyGreen1064: ItemKeyGreen {
		keyid = 1064;
	};
	class ItemKeyGreen1065: ItemKeyGreen {
		keyid = 1065;
	};
	class ItemKeyGreen1066: ItemKeyGreen {
		keyid = 1066;
	};
	class ItemKeyGreen1067: ItemKeyGreen {
		keyid = 1067;
	};
	class ItemKeyGreen1068: ItemKeyGreen {
		keyid = 1068;
	};
	class ItemKeyGreen1069: ItemKeyGreen {
		keyid = 1069;
	};
	class ItemKeyGreen1070: ItemKeyGreen {
		keyid = 1070;
	};
	class ItemKeyGreen1071: ItemKeyGreen {
		keyid = 1071;
	};
	class ItemKeyGreen1072: ItemKeyGreen {
		keyid = 1072;
	};
	class ItemKeyGreen1073: ItemKeyGreen {
		keyid = 1073;
	};
	class ItemKeyGreen1074: ItemKeyGreen {
		keyid = 1074;
	};
	class ItemKeyGreen1075: ItemKeyGreen {
		keyid = 1075;
	};
	class ItemKeyGreen1076: ItemKeyGreen {
		keyid = 1076;
	};
	class ItemKeyGreen1077: ItemKeyGreen {
		keyid = 1077;
	};
	class ItemKeyGreen1078: ItemKeyGreen {
		keyid = 1078;
	};
	class ItemKeyGreen1079: ItemKeyGreen {
		keyid = 1079;
	};
	class ItemKeyGreen1080: ItemKeyGreen {
		keyid = 1080;
	};
	class ItemKeyGreen1081: ItemKeyGreen {
		keyid = 1081;
	};
	class ItemKeyGreen1082: ItemKeyGreen {
		keyid = 1082;
	};
	class ItemKeyGreen1083: ItemKeyGreen {
		keyid = 1083;
	};
	class ItemKeyGreen1084: ItemKeyGreen {
		keyid = 1084;
	};
	class ItemKeyGreen1085: ItemKeyGreen {
		keyid = 1085;
	};
	class ItemKeyGreen1086: ItemKeyGreen {
		keyid = 1086;
	};
	class ItemKeyGreen1087: ItemKeyGreen {
		keyid = 1087;
	};
	class ItemKeyGreen1088: ItemKeyGreen {
		keyid = 1088;
	};
	class ItemKeyGreen1089: ItemKeyGreen {
		keyid = 1089;
	};
	class ItemKeyGreen1090: ItemKeyGreen {
		keyid = 1090;
	};
	class ItemKeyGreen1091: ItemKeyGreen {
		keyid = 1091;
	};
	class ItemKeyGreen1092: ItemKeyGreen {
		keyid = 1092;
	};
	class ItemKeyGreen1093: ItemKeyGreen {
		keyid = 1093;
	};
	class ItemKeyGreen1094: ItemKeyGreen {
		keyid = 1094;
	};
	class ItemKeyGreen1095: ItemKeyGreen {
		keyid = 1095;
	};
	class ItemKeyGreen1096: ItemKeyGreen {
		keyid = 1096;
	};
	class ItemKeyGreen1097: ItemKeyGreen {
		keyid = 1097;
	};
	class ItemKeyGreen1098: ItemKeyGreen {
		keyid = 1098;
	};
	class ItemKeyGreen1099: ItemKeyGreen {
		keyid = 1099;
	};
	class ItemKeyGreen1100: ItemKeyGreen {
		keyid = 1100;
	};
	class ItemKeyGreen1101: ItemKeyGreen {
		keyid = 1101;
	};
	class ItemKeyGreen1102: ItemKeyGreen {
		keyid = 1102;
	};
	class ItemKeyGreen1103: ItemKeyGreen {
		keyid = 1103;
	};
	class ItemKeyGreen1104: ItemKeyGreen {
		keyid = 1104;
	};
	class ItemKeyGreen1105: ItemKeyGreen {
		keyid = 1105;
	};
	class ItemKeyGreen1106: ItemKeyGreen {
		keyid = 1106;
	};
	class ItemKeyGreen1107: ItemKeyGreen {
		keyid = 1107;
	};
	class ItemKeyGreen1108: ItemKeyGreen {
		keyid = 1108;
	};
	class ItemKeyGreen1109: ItemKeyGreen {
		keyid = 1109;
	};
	class ItemKeyGreen1110: ItemKeyGreen {
		keyid = 1110;
	};
	class ItemKeyGreen1111: ItemKeyGreen {
		keyid = 1111;
	};
	class ItemKeyGreen1112: ItemKeyGreen {
		keyid = 1112;
	};
	class ItemKeyGreen1113: ItemKeyGreen {
		keyid = 1113;
	};
	class ItemKeyGreen1114: ItemKeyGreen {
		keyid = 1114;
	};
	class ItemKeyGreen1115: ItemKeyGreen {
		keyid = 1115;
	};
	class ItemKeyGreen1116: ItemKeyGreen {
		keyid = 1116;
	};
	class ItemKeyGreen1117: ItemKeyGreen {
		keyid = 1117;
	};
	class ItemKeyGreen1118: ItemKeyGreen {
		keyid = 1118;
	};
	class ItemKeyGreen1119: ItemKeyGreen {
		keyid = 1119;
	};
	class ItemKeyGreen1120: ItemKeyGreen {
		keyid = 1120;
	};
	class ItemKeyGreen1121: ItemKeyGreen {
		keyid = 1121;
	};
	class ItemKeyGreen1122: ItemKeyGreen {
		keyid = 1122;
	};
	class ItemKeyGreen1123: ItemKeyGreen {
		keyid = 1123;
	};
	class ItemKeyGreen1124: ItemKeyGreen {
		keyid = 1124;
	};
	class ItemKeyGreen1125: ItemKeyGreen {
		keyid = 1125;
	};
	class ItemKeyGreen1126: ItemKeyGreen {
		keyid = 1126;
	};
	class ItemKeyGreen1127: ItemKeyGreen {
		keyid = 1127;
	};
	class ItemKeyGreen1128: ItemKeyGreen {
		keyid = 1128;
	};
	class ItemKeyGreen1129: ItemKeyGreen {
		keyid = 1129;
	};
	class ItemKeyGreen1130: ItemKeyGreen {
		keyid = 1130;
	};
	class ItemKeyGreen1131: ItemKeyGreen {
		keyid = 1131;
	};
	class ItemKeyGreen1132: ItemKeyGreen {
		keyid = 1132;
	};
	class ItemKeyGreen1133: ItemKeyGreen {
		keyid = 1133;
	};
	class ItemKeyGreen1134: ItemKeyGreen {
		keyid = 1134;
	};
	class ItemKeyGreen1135: ItemKeyGreen {
		keyid = 1135;
	};
	class ItemKeyGreen1136: ItemKeyGreen {
		keyid = 1136;
	};
	class ItemKeyGreen1137: ItemKeyGreen {
		keyid = 1137;
	};
	class ItemKeyGreen1138: ItemKeyGreen {
		keyid = 1138;
	};
	class ItemKeyGreen1139: ItemKeyGreen {
		keyid = 1139;
	};
	class ItemKeyGreen1140: ItemKeyGreen {
		keyid = 1140;
	};
	class ItemKeyGreen1141: ItemKeyGreen {
		keyid = 1141;
	};
	class ItemKeyGreen1142: ItemKeyGreen {
		keyid = 1142;
	};
	class ItemKeyGreen1143: ItemKeyGreen {
		keyid = 1143;
	};
	class ItemKeyGreen1144: ItemKeyGreen {
		keyid = 1144;
	};
	class ItemKeyGreen1145: ItemKeyGreen {
		keyid = 1145;
	};
	class ItemKeyGreen1146: ItemKeyGreen {
		keyid = 1146;
	};
	class ItemKeyGreen1147: ItemKeyGreen {
		keyid = 1147;
	};
	class ItemKeyGreen1148: ItemKeyGreen {
		keyid = 1148;
	};
	class ItemKeyGreen1149: ItemKeyGreen {
		keyid = 1149;
	};
	class ItemKeyGreen1150: ItemKeyGreen {
		keyid = 1150;
	};
	class ItemKeyGreen1151: ItemKeyGreen {
		keyid = 1151;
	};
	class ItemKeyGreen1152: ItemKeyGreen {
		keyid = 1152;
	};
	class ItemKeyGreen1153: ItemKeyGreen {
		keyid = 1153;
	};
	class ItemKeyGreen1154: ItemKeyGreen {
		keyid = 1154;
	};
	class ItemKeyGreen1155: ItemKeyGreen {
		keyid = 1155;
	};
	class ItemKeyGreen1156: ItemKeyGreen {
		keyid = 1156;
	};
	class ItemKeyGreen1157: ItemKeyGreen {
		keyid = 1157;
	};
	class ItemKeyGreen1158: ItemKeyGreen {
		keyid = 1158;
	};
	class ItemKeyGreen1159: ItemKeyGreen {
		keyid = 1159;
	};
	class ItemKeyGreen1160: ItemKeyGreen {
		keyid = 1160;
	};
	class ItemKeyGreen1161: ItemKeyGreen {
		keyid = 1161;
	};
	class ItemKeyGreen1162: ItemKeyGreen {
		keyid = 1162;
	};
	class ItemKeyGreen1163: ItemKeyGreen {
		keyid = 1163;
	};
	class ItemKeyGreen1164: ItemKeyGreen {
		keyid = 1164;
	};
	class ItemKeyGreen1165: ItemKeyGreen {
		keyid = 1165;
	};
	class ItemKeyGreen1166: ItemKeyGreen {
		keyid = 1166;
	};
	class ItemKeyGreen1167: ItemKeyGreen {
		keyid = 1167;
	};
	class ItemKeyGreen1168: ItemKeyGreen {
		keyid = 1168;
	};
	class ItemKeyGreen1169: ItemKeyGreen {
		keyid = 1169;
	};
	class ItemKeyGreen1170: ItemKeyGreen {
		keyid = 1170;
	};
	class ItemKeyGreen1171: ItemKeyGreen {
		keyid = 1171;
	};
	class ItemKeyGreen1172: ItemKeyGreen {
		keyid = 1172;
	};
	class ItemKeyGreen1173: ItemKeyGreen {
		keyid = 1173;
	};
	class ItemKeyGreen1174: ItemKeyGreen {
		keyid = 1174;
	};
	class ItemKeyGreen1175: ItemKeyGreen {
		keyid = 1175;
	};
	class ItemKeyGreen1176: ItemKeyGreen {
		keyid = 1176;
	};
	class ItemKeyGreen1177: ItemKeyGreen {
		keyid = 1177;
	};
	class ItemKeyGreen1178: ItemKeyGreen {
		keyid = 1178;
	};
	class ItemKeyGreen1179: ItemKeyGreen {
		keyid = 1179;
	};
	class ItemKeyGreen1180: ItemKeyGreen {
		keyid = 1180;
	};
	class ItemKeyGreen1181: ItemKeyGreen {
		keyid = 1181;
	};
	class ItemKeyGreen1182: ItemKeyGreen {
		keyid = 1182;
	};
	class ItemKeyGreen1183: ItemKeyGreen {
		keyid = 1183;
	};
	class ItemKeyGreen1184: ItemKeyGreen {
		keyid = 1184;
	};
	class ItemKeyGreen1185: ItemKeyGreen {
		keyid = 1185;
	};
	class ItemKeyGreen1186: ItemKeyGreen {
		keyid = 1186;
	};
	class ItemKeyGreen1187: ItemKeyGreen {
		keyid = 1187;
	};
	class ItemKeyGreen1188: ItemKeyGreen {
		keyid = 1188;
	};
	class ItemKeyGreen1189: ItemKeyGreen {
		keyid = 1189;
	};
	class ItemKeyGreen1190: ItemKeyGreen {
		keyid = 1190;
	};
	class ItemKeyGreen1191: ItemKeyGreen {
		keyid = 1191;
	};
	class ItemKeyGreen1192: ItemKeyGreen {
		keyid = 1192;
	};
	class ItemKeyGreen1193: ItemKeyGreen {
		keyid = 1193;
	};
	class ItemKeyGreen1194: ItemKeyGreen {
		keyid = 1194;
	};
	class ItemKeyGreen1195: ItemKeyGreen {
		keyid = 1195;
	};
	class ItemKeyGreen1196: ItemKeyGreen {
		keyid = 1196;
	};
	class ItemKeyGreen1197: ItemKeyGreen {
		keyid = 1197;
	};
	class ItemKeyGreen1198: ItemKeyGreen {
		keyid = 1198;
	};
	class ItemKeyGreen1199: ItemKeyGreen {
		keyid = 1199;
	};
	class ItemKeyGreen1200: ItemKeyGreen {
		keyid = 1200;
	};
	class ItemKeyGreen1201: ItemKeyGreen {
		keyid = 1201;
	};
	class ItemKeyGreen1202: ItemKeyGreen {
		keyid = 1202;
	};
	class ItemKeyGreen1203: ItemKeyGreen {
		keyid = 1203;
	};
	class ItemKeyGreen1204: ItemKeyGreen {
		keyid = 1204;
	};
	class ItemKeyGreen1205: ItemKeyGreen {
		keyid = 1205;
	};
	class ItemKeyGreen1206: ItemKeyGreen {
		keyid = 1206;
	};
	class ItemKeyGreen1207: ItemKeyGreen {
		keyid = 1207;
	};
	class ItemKeyGreen1208: ItemKeyGreen {
		keyid = 1208;
	};
	class ItemKeyGreen1209: ItemKeyGreen {
		keyid = 1209;
	};
	class ItemKeyGreen1210: ItemKeyGreen {
		keyid = 1210;
	};
	class ItemKeyGreen1211: ItemKeyGreen {
		keyid = 1211;
	};
	class ItemKeyGreen1212: ItemKeyGreen {
		keyid = 1212;
	};
	class ItemKeyGreen1213: ItemKeyGreen {
		keyid = 1213;
	};
	class ItemKeyGreen1214: ItemKeyGreen {
		keyid = 1214;
	};
	class ItemKeyGreen1215: ItemKeyGreen {
		keyid = 1215;
	};
	class ItemKeyGreen1216: ItemKeyGreen {
		keyid = 1216;
	};
	class ItemKeyGreen1217: ItemKeyGreen {
		keyid = 1217;
	};
	class ItemKeyGreen1218: ItemKeyGreen {
		keyid = 1218;
	};
	class ItemKeyGreen1219: ItemKeyGreen {
		keyid = 1219;
	};
	class ItemKeyGreen1220: ItemKeyGreen {
		keyid = 1220;
	};
	class ItemKeyGreen1221: ItemKeyGreen {
		keyid = 1221;
	};
	class ItemKeyGreen1222: ItemKeyGreen {
		keyid = 1222;
	};
	class ItemKeyGreen1223: ItemKeyGreen {
		keyid = 1223;
	};
	class ItemKeyGreen1224: ItemKeyGreen {
		keyid = 1224;
	};
	class ItemKeyGreen1225: ItemKeyGreen {
		keyid = 1225;
	};
	class ItemKeyGreen1226: ItemKeyGreen {
		keyid = 1226;
	};
	class ItemKeyGreen1227: ItemKeyGreen {
		keyid = 1227;
	};
	class ItemKeyGreen1228: ItemKeyGreen {
		keyid = 1228;
	};
	class ItemKeyGreen1229: ItemKeyGreen {
		keyid = 1229;
	};
	class ItemKeyGreen1230: ItemKeyGreen {
		keyid = 1230;
	};
	class ItemKeyGreen1231: ItemKeyGreen {
		keyid = 1231;
	};
	class ItemKeyGreen1232: ItemKeyGreen {
		keyid = 1232;
	};
	class ItemKeyGreen1233: ItemKeyGreen {
		keyid = 1233;
	};
	class ItemKeyGreen1234: ItemKeyGreen {
		keyid = 1234;
	};
	class ItemKeyGreen1235: ItemKeyGreen {
		keyid = 1235;
	};
	class ItemKeyGreen1236: ItemKeyGreen {
		keyid = 1236;
	};
	class ItemKeyGreen1237: ItemKeyGreen {
		keyid = 1237;
	};
	class ItemKeyGreen1238: ItemKeyGreen {
		keyid = 1238;
	};
	class ItemKeyGreen1239: ItemKeyGreen {
		keyid = 1239;
	};
	class ItemKeyGreen1240: ItemKeyGreen {
		keyid = 1240;
	};
	class ItemKeyGreen1241: ItemKeyGreen {
		keyid = 1241;
	};
	class ItemKeyGreen1242: ItemKeyGreen {
		keyid = 1242;
	};
	class ItemKeyGreen1243: ItemKeyGreen {
		keyid = 1243;
	};
	class ItemKeyGreen1244: ItemKeyGreen {
		keyid = 1244;
	};
	class ItemKeyGreen1245: ItemKeyGreen {
		keyid = 1245;
	};
	class ItemKeyGreen1246: ItemKeyGreen {
		keyid = 1246;
	};
	class ItemKeyGreen1247: ItemKeyGreen {
		keyid = 1247;
	};
	class ItemKeyGreen1248: ItemKeyGreen {
		keyid = 1248;
	};
	class ItemKeyGreen1249: ItemKeyGreen {
		keyid = 1249;
	};
	class ItemKeyGreen1250: ItemKeyGreen {
		keyid = 1250;
	};
	class ItemKeyGreen1251: ItemKeyGreen {
		keyid = 1251;
	};
	class ItemKeyGreen1252: ItemKeyGreen {
		keyid = 1252;
	};
	class ItemKeyGreen1253: ItemKeyGreen {
		keyid = 1253;
	};
	class ItemKeyGreen1254: ItemKeyGreen {
		keyid = 1254;
	};
	class ItemKeyGreen1255: ItemKeyGreen {
		keyid = 1255;
	};
	class ItemKeyGreen1256: ItemKeyGreen {
		keyid = 1256;
	};
	class ItemKeyGreen1257: ItemKeyGreen {
		keyid = 1257;
	};
	class ItemKeyGreen1258: ItemKeyGreen {
		keyid = 1258;
	};
	class ItemKeyGreen1259: ItemKeyGreen {
		keyid = 1259;
	};
	class ItemKeyGreen1260: ItemKeyGreen {
		keyid = 1260;
	};
	class ItemKeyGreen1261: ItemKeyGreen {
		keyid = 1261;
	};
	class ItemKeyGreen1262: ItemKeyGreen {
		keyid = 1262;
	};
	class ItemKeyGreen1263: ItemKeyGreen {
		keyid = 1263;
	};
	class ItemKeyGreen1264: ItemKeyGreen {
		keyid = 1264;
	};
	class ItemKeyGreen1265: ItemKeyGreen {
		keyid = 1265;
	};
	class ItemKeyGreen1266: ItemKeyGreen {
		keyid = 1266;
	};
	class ItemKeyGreen1267: ItemKeyGreen {
		keyid = 1267;
	};
	class ItemKeyGreen1268: ItemKeyGreen {
		keyid = 1268;
	};
	class ItemKeyGreen1269: ItemKeyGreen {
		keyid = 1269;
	};
	class ItemKeyGreen1270: ItemKeyGreen {
		keyid = 1270;
	};
	class ItemKeyGreen1271: ItemKeyGreen {
		keyid = 1271;
	};
	class ItemKeyGreen1272: ItemKeyGreen {
		keyid = 1272;
	};
	class ItemKeyGreen1273: ItemKeyGreen {
		keyid = 1273;
	};
	class ItemKeyGreen1274: ItemKeyGreen {
		keyid = 1274;
	};
	class ItemKeyGreen1275: ItemKeyGreen {
		keyid = 1275;
	};
	class ItemKeyGreen1276: ItemKeyGreen {
		keyid = 1276;
	};
	class ItemKeyGreen1277: ItemKeyGreen {
		keyid = 1277;
	};
	class ItemKeyGreen1278: ItemKeyGreen {
		keyid = 1278;
	};
	class ItemKeyGreen1279: ItemKeyGreen {
		keyid = 1279;
	};
	class ItemKeyGreen1280: ItemKeyGreen {
		keyid = 1280;
	};
	class ItemKeyGreen1281: ItemKeyGreen {
		keyid = 1281;
	};
	class ItemKeyGreen1282: ItemKeyGreen {
		keyid = 1282;
	};
	class ItemKeyGreen1283: ItemKeyGreen {
		keyid = 1283;
	};
	class ItemKeyGreen1284: ItemKeyGreen {
		keyid = 1284;
	};
	class ItemKeyGreen1285: ItemKeyGreen {
		keyid = 1285;
	};
	class ItemKeyGreen1286: ItemKeyGreen {
		keyid = 1286;
	};
	class ItemKeyGreen1287: ItemKeyGreen {
		keyid = 1287;
	};
	class ItemKeyGreen1288: ItemKeyGreen {
		keyid = 1288;
	};
	class ItemKeyGreen1289: ItemKeyGreen {
		keyid = 1289;
	};
	class ItemKeyGreen1290: ItemKeyGreen {
		keyid = 1290;
	};
	class ItemKeyGreen1291: ItemKeyGreen {
		keyid = 1291;
	};
	class ItemKeyGreen1292: ItemKeyGreen {
		keyid = 1292;
	};
	class ItemKeyGreen1293: ItemKeyGreen {
		keyid = 1293;
	};
	class ItemKeyGreen1294: ItemKeyGreen {
		keyid = 1294;
	};
	class ItemKeyGreen1295: ItemKeyGreen {
		keyid = 1295;
	};
	class ItemKeyGreen1296: ItemKeyGreen {
		keyid = 1296;
	};
	class ItemKeyGreen1297: ItemKeyGreen {
		keyid = 1297;
	};
	class ItemKeyGreen1298: ItemKeyGreen {
		keyid = 1298;
	};
	class ItemKeyGreen1299: ItemKeyGreen {
		keyid = 1299;
	};
	class ItemKeyGreen1300: ItemKeyGreen {
		keyid = 1300;
	};
	class ItemKeyGreen1301: ItemKeyGreen {
		keyid = 1301;
	};
	class ItemKeyGreen1302: ItemKeyGreen {
		keyid = 1302;
	};
	class ItemKeyGreen1303: ItemKeyGreen {
		keyid = 1303;
	};
	class ItemKeyGreen1304: ItemKeyGreen {
		keyid = 1304;
	};
	class ItemKeyGreen1305: ItemKeyGreen {
		keyid = 1305;
	};
	class ItemKeyGreen1306: ItemKeyGreen {
		keyid = 1306;
	};
	class ItemKeyGreen1307: ItemKeyGreen {
		keyid = 1307;
	};
	class ItemKeyGreen1308: ItemKeyGreen {
		keyid = 1308;
	};
	class ItemKeyGreen1309: ItemKeyGreen {
		keyid = 1309;
	};
	class ItemKeyGreen1310: ItemKeyGreen {
		keyid = 1310;
	};
	class ItemKeyGreen1311: ItemKeyGreen {
		keyid = 1311;
	};
	class ItemKeyGreen1312: ItemKeyGreen {
		keyid = 1312;
	};
	class ItemKeyGreen1313: ItemKeyGreen {
		keyid = 1313;
	};
	class ItemKeyGreen1314: ItemKeyGreen {
		keyid = 1314;
	};
	class ItemKeyGreen1315: ItemKeyGreen {
		keyid = 1315;
	};
	class ItemKeyGreen1316: ItemKeyGreen {
		keyid = 1316;
	};
	class ItemKeyGreen1317: ItemKeyGreen {
		keyid = 1317;
	};
	class ItemKeyGreen1318: ItemKeyGreen {
		keyid = 1318;
	};
	class ItemKeyGreen1319: ItemKeyGreen {
		keyid = 1319;
	};
	class ItemKeyGreen1320: ItemKeyGreen {
		keyid = 1320;
	};
	class ItemKeyGreen1321: ItemKeyGreen {
		keyid = 1321;
	};
	class ItemKeyGreen1322: ItemKeyGreen {
		keyid = 1322;
	};
	class ItemKeyGreen1323: ItemKeyGreen {
		keyid = 1323;
	};
	class ItemKeyGreen1324: ItemKeyGreen {
		keyid = 1324;
	};
	class ItemKeyGreen1325: ItemKeyGreen {
		keyid = 1325;
	};
	class ItemKeyGreen1326: ItemKeyGreen {
		keyid = 1326;
	};
	class ItemKeyGreen1327: ItemKeyGreen {
		keyid = 1327;
	};
	class ItemKeyGreen1328: ItemKeyGreen {
		keyid = 1328;
	};
	class ItemKeyGreen1329: ItemKeyGreen {
		keyid = 1329;
	};
	class ItemKeyGreen1330: ItemKeyGreen {
		keyid = 1330;
	};
	class ItemKeyGreen1331: ItemKeyGreen {
		keyid = 1331;
	};
	class ItemKeyGreen1332: ItemKeyGreen {
		keyid = 1332;
	};
	class ItemKeyGreen1333: ItemKeyGreen {
		keyid = 1333;
	};
	class ItemKeyGreen1334: ItemKeyGreen {
		keyid = 1334;
	};
	class ItemKeyGreen1335: ItemKeyGreen {
		keyid = 1335;
	};
	class ItemKeyGreen1336: ItemKeyGreen {
		keyid = 1336;
	};
	class ItemKeyGreen1337: ItemKeyGreen {
		keyid = 1337;
	};
	class ItemKeyGreen1338: ItemKeyGreen {
		keyid = 1338;
	};
	class ItemKeyGreen1339: ItemKeyGreen {
		keyid = 1339;
	};
	class ItemKeyGreen1340: ItemKeyGreen {
		keyid = 1340;
	};
	class ItemKeyGreen1341: ItemKeyGreen {
		keyid = 1341;
	};
	class ItemKeyGreen1342: ItemKeyGreen {
		keyid = 1342;
	};
	class ItemKeyGreen1343: ItemKeyGreen {
		keyid = 1343;
	};
	class ItemKeyGreen1344: ItemKeyGreen {
		keyid = 1344;
	};
	class ItemKeyGreen1345: ItemKeyGreen {
		keyid = 1345;
	};
	class ItemKeyGreen1346: ItemKeyGreen {
		keyid = 1346;
	};
	class ItemKeyGreen1347: ItemKeyGreen {
		keyid = 1347;
	};
	class ItemKeyGreen1348: ItemKeyGreen {
		keyid = 1348;
	};
	class ItemKeyGreen1349: ItemKeyGreen {
		keyid = 1349;
	};
	class ItemKeyGreen1350: ItemKeyGreen {
		keyid = 1350;
	};
	class ItemKeyGreen1351: ItemKeyGreen {
		keyid = 1351;
	};
	class ItemKeyGreen1352: ItemKeyGreen {
		keyid = 1352;
	};
	class ItemKeyGreen1353: ItemKeyGreen {
		keyid = 1353;
	};
	class ItemKeyGreen1354: ItemKeyGreen {
		keyid = 1354;
	};
	class ItemKeyGreen1355: ItemKeyGreen {
		keyid = 1355;
	};
	class ItemKeyGreen1356: ItemKeyGreen {
		keyid = 1356;
	};
	class ItemKeyGreen1357: ItemKeyGreen {
		keyid = 1357;
	};
	class ItemKeyGreen1358: ItemKeyGreen {
		keyid = 1358;
	};
	class ItemKeyGreen1359: ItemKeyGreen {
		keyid = 1359;
	};
	class ItemKeyGreen1360: ItemKeyGreen {
		keyid = 1360;
	};
	class ItemKeyGreen1361: ItemKeyGreen {
		keyid = 1361;
	};
	class ItemKeyGreen1362: ItemKeyGreen {
		keyid = 1362;
	};
	class ItemKeyGreen1363: ItemKeyGreen {
		keyid = 1363;
	};
	class ItemKeyGreen1364: ItemKeyGreen {
		keyid = 1364;
	};
	class ItemKeyGreen1365: ItemKeyGreen {
		keyid = 1365;
	};
	class ItemKeyGreen1366: ItemKeyGreen {
		keyid = 1366;
	};
	class ItemKeyGreen1367: ItemKeyGreen {
		keyid = 1367;
	};
	class ItemKeyGreen1368: ItemKeyGreen {
		keyid = 1368;
	};
	class ItemKeyGreen1369: ItemKeyGreen {
		keyid = 1369;
	};
	class ItemKeyGreen1370: ItemKeyGreen {
		keyid = 1370;
	};
	class ItemKeyGreen1371: ItemKeyGreen {
		keyid = 1371;
	};
	class ItemKeyGreen1372: ItemKeyGreen {
		keyid = 1372;
	};
	class ItemKeyGreen1373: ItemKeyGreen {
		keyid = 1373;
	};
	class ItemKeyGreen1374: ItemKeyGreen {
		keyid = 1374;
	};
	class ItemKeyGreen1375: ItemKeyGreen {
		keyid = 1375;
	};
	class ItemKeyGreen1376: ItemKeyGreen {
		keyid = 1376;
	};
	class ItemKeyGreen1377: ItemKeyGreen {
		keyid = 1377;
	};
	class ItemKeyGreen1378: ItemKeyGreen {
		keyid = 1378;
	};
	class ItemKeyGreen1379: ItemKeyGreen {
		keyid = 1379;
	};
	class ItemKeyGreen1380: ItemKeyGreen {
		keyid = 1380;
	};
	class ItemKeyGreen1381: ItemKeyGreen {
		keyid = 1381;
	};
	class ItemKeyGreen1382: ItemKeyGreen {
		keyid = 1382;
	};
	class ItemKeyGreen1383: ItemKeyGreen {
		keyid = 1383;
	};
	class ItemKeyGreen1384: ItemKeyGreen {
		keyid = 1384;
	};
	class ItemKeyGreen1385: ItemKeyGreen {
		keyid = 1385;
	};
	class ItemKeyGreen1386: ItemKeyGreen {
		keyid = 1386;
	};
	class ItemKeyGreen1387: ItemKeyGreen {
		keyid = 1387;
	};
	class ItemKeyGreen1388: ItemKeyGreen {
		keyid = 1388;
	};
	class ItemKeyGreen1389: ItemKeyGreen {
		keyid = 1389;
	};
	class ItemKeyGreen1390: ItemKeyGreen {
		keyid = 1390;
	};
	class ItemKeyGreen1391: ItemKeyGreen {
		keyid = 1391;
	};
	class ItemKeyGreen1392: ItemKeyGreen {
		keyid = 1392;
	};
	class ItemKeyGreen1393: ItemKeyGreen {
		keyid = 1393;
	};
	class ItemKeyGreen1394: ItemKeyGreen {
		keyid = 1394;
	};
	class ItemKeyGreen1395: ItemKeyGreen {
		keyid = 1395;
	};
	class ItemKeyGreen1396: ItemKeyGreen {
		keyid = 1396;
	};
	class ItemKeyGreen1397: ItemKeyGreen {
		keyid = 1397;
	};
	class ItemKeyGreen1398: ItemKeyGreen {
		keyid = 1398;
	};
	class ItemKeyGreen1399: ItemKeyGreen {
		keyid = 1399;
	};
	class ItemKeyGreen1400: ItemKeyGreen {
		keyid = 1400;
	};
	class ItemKeyGreen1401: ItemKeyGreen {
		keyid = 1401;
	};
	class ItemKeyGreen1402: ItemKeyGreen {
		keyid = 1402;
	};
	class ItemKeyGreen1403: ItemKeyGreen {
		keyid = 1403;
	};
	class ItemKeyGreen1404: ItemKeyGreen {
		keyid = 1404;
	};
	class ItemKeyGreen1405: ItemKeyGreen {
		keyid = 1405;
	};
	class ItemKeyGreen1406: ItemKeyGreen {
		keyid = 1406;
	};
	class ItemKeyGreen1407: ItemKeyGreen {
		keyid = 1407;
	};
	class ItemKeyGreen1408: ItemKeyGreen {
		keyid = 1408;
	};
	class ItemKeyGreen1409: ItemKeyGreen {
		keyid = 1409;
	};
	class ItemKeyGreen1410: ItemKeyGreen {
		keyid = 1410;
	};
	class ItemKeyGreen1411: ItemKeyGreen {
		keyid = 1411;
	};
	class ItemKeyGreen1412: ItemKeyGreen {
		keyid = 1412;
	};
	class ItemKeyGreen1413: ItemKeyGreen {
		keyid = 1413;
	};
	class ItemKeyGreen1414: ItemKeyGreen {
		keyid = 1414;
	};
	class ItemKeyGreen1415: ItemKeyGreen {
		keyid = 1415;
	};
	class ItemKeyGreen1416: ItemKeyGreen {
		keyid = 1416;
	};
	class ItemKeyGreen1417: ItemKeyGreen {
		keyid = 1417;
	};
	class ItemKeyGreen1418: ItemKeyGreen {
		keyid = 1418;
	};
	class ItemKeyGreen1419: ItemKeyGreen {
		keyid = 1419;
	};
	class ItemKeyGreen1420: ItemKeyGreen {
		keyid = 1420;
	};
	class ItemKeyGreen1421: ItemKeyGreen {
		keyid = 1421;
	};
	class ItemKeyGreen1422: ItemKeyGreen {
		keyid = 1422;
	};
	class ItemKeyGreen1423: ItemKeyGreen {
		keyid = 1423;
	};
	class ItemKeyGreen1424: ItemKeyGreen {
		keyid = 1424;
	};
	class ItemKeyGreen1425: ItemKeyGreen {
		keyid = 1425;
	};
	class ItemKeyGreen1426: ItemKeyGreen {
		keyid = 1426;
	};
	class ItemKeyGreen1427: ItemKeyGreen {
		keyid = 1427;
	};
	class ItemKeyGreen1428: ItemKeyGreen {
		keyid = 1428;
	};
	class ItemKeyGreen1429: ItemKeyGreen {
		keyid = 1429;
	};
	class ItemKeyGreen1430: ItemKeyGreen {
		keyid = 1430;
	};
	class ItemKeyGreen1431: ItemKeyGreen {
		keyid = 1431;
	};
	class ItemKeyGreen1432: ItemKeyGreen {
		keyid = 1432;
	};
	class ItemKeyGreen1433: ItemKeyGreen {
		keyid = 1433;
	};
	class ItemKeyGreen1434: ItemKeyGreen {
		keyid = 1434;
	};
	class ItemKeyGreen1435: ItemKeyGreen {
		keyid = 1435;
	};
	class ItemKeyGreen1436: ItemKeyGreen {
		keyid = 1436;
	};
	class ItemKeyGreen1437: ItemKeyGreen {
		keyid = 1437;
	};
	class ItemKeyGreen1438: ItemKeyGreen {
		keyid = 1438;
	};
	class ItemKeyGreen1439: ItemKeyGreen {
		keyid = 1439;
	};
	class ItemKeyGreen1440: ItemKeyGreen {
		keyid = 1440;
	};
	class ItemKeyGreen1441: ItemKeyGreen {
		keyid = 1441;
	};
	class ItemKeyGreen1442: ItemKeyGreen {
		keyid = 1442;
	};
	class ItemKeyGreen1443: ItemKeyGreen {
		keyid = 1443;
	};
	class ItemKeyGreen1444: ItemKeyGreen {
		keyid = 1444;
	};
	class ItemKeyGreen1445: ItemKeyGreen {
		keyid = 1445;
	};
	class ItemKeyGreen1446: ItemKeyGreen {
		keyid = 1446;
	};
	class ItemKeyGreen1447: ItemKeyGreen {
		keyid = 1447;
	};
	class ItemKeyGreen1448: ItemKeyGreen {
		keyid = 1448;
	};
	class ItemKeyGreen1449: ItemKeyGreen {
		keyid = 1449;
	};
	class ItemKeyGreen1450: ItemKeyGreen {
		keyid = 1450;
	};
	class ItemKeyGreen1451: ItemKeyGreen {
		keyid = 1451;
	};
	class ItemKeyGreen1452: ItemKeyGreen {
		keyid = 1452;
	};
	class ItemKeyGreen1453: ItemKeyGreen {
		keyid = 1453;
	};
	class ItemKeyGreen1454: ItemKeyGreen {
		keyid = 1454;
	};
	class ItemKeyGreen1455: ItemKeyGreen {
		keyid = 1455;
	};
	class ItemKeyGreen1456: ItemKeyGreen {
		keyid = 1456;
	};
	class ItemKeyGreen1457: ItemKeyGreen {
		keyid = 1457;
	};
	class ItemKeyGreen1458: ItemKeyGreen {
		keyid = 1458;
	};
	class ItemKeyGreen1459: ItemKeyGreen {
		keyid = 1459;
	};
	class ItemKeyGreen1460: ItemKeyGreen {
		keyid = 1460;
	};
	class ItemKeyGreen1461: ItemKeyGreen {
		keyid = 1461;
	};
	class ItemKeyGreen1462: ItemKeyGreen {
		keyid = 1462;
	};
	class ItemKeyGreen1463: ItemKeyGreen {
		keyid = 1463;
	};
	class ItemKeyGreen1464: ItemKeyGreen {
		keyid = 1464;
	};
	class ItemKeyGreen1465: ItemKeyGreen {
		keyid = 1465;
	};
	class ItemKeyGreen1466: ItemKeyGreen {
		keyid = 1466;
	};
	class ItemKeyGreen1467: ItemKeyGreen {
		keyid = 1467;
	};
	class ItemKeyGreen1468: ItemKeyGreen {
		keyid = 1468;
	};
	class ItemKeyGreen1469: ItemKeyGreen {
		keyid = 1469;
	};
	class ItemKeyGreen1470: ItemKeyGreen {
		keyid = 1470;
	};
	class ItemKeyGreen1471: ItemKeyGreen {
		keyid = 1471;
	};
	class ItemKeyGreen1472: ItemKeyGreen {
		keyid = 1472;
	};
	class ItemKeyGreen1473: ItemKeyGreen {
		keyid = 1473;
	};
	class ItemKeyGreen1474: ItemKeyGreen {
		keyid = 1474;
	};
	class ItemKeyGreen1475: ItemKeyGreen {
		keyid = 1475;
	};
	class ItemKeyGreen1476: ItemKeyGreen {
		keyid = 1476;
	};
	class ItemKeyGreen1477: ItemKeyGreen {
		keyid = 1477;
	};
	class ItemKeyGreen1478: ItemKeyGreen {
		keyid = 1478;
	};
	class ItemKeyGreen1479: ItemKeyGreen {
		keyid = 1479;
	};
	class ItemKeyGreen1480: ItemKeyGreen {
		keyid = 1480;
	};
	class ItemKeyGreen1481: ItemKeyGreen {
		keyid = 1481;
	};
	class ItemKeyGreen1482: ItemKeyGreen {
		keyid = 1482;
	};
	class ItemKeyGreen1483: ItemKeyGreen {
		keyid = 1483;
	};
	class ItemKeyGreen1484: ItemKeyGreen {
		keyid = 1484;
	};
	class ItemKeyGreen1485: ItemKeyGreen {
		keyid = 1485;
	};
	class ItemKeyGreen1486: ItemKeyGreen {
		keyid = 1486;
	};
	class ItemKeyGreen1487: ItemKeyGreen {
		keyid = 1487;
	};
	class ItemKeyGreen1488: ItemKeyGreen {
		keyid = 1488;
	};
	class ItemKeyGreen1489: ItemKeyGreen {
		keyid = 1489;
	};
	class ItemKeyGreen1490: ItemKeyGreen {
		keyid = 1490;
	};
	class ItemKeyGreen1491: ItemKeyGreen {
		keyid = 1491;
	};
	class ItemKeyGreen1492: ItemKeyGreen {
		keyid = 1492;
	};
	class ItemKeyGreen1493: ItemKeyGreen {
		keyid = 1493;
	};
	class ItemKeyGreen1494: ItemKeyGreen {
		keyid = 1494;
	};
	class ItemKeyGreen1495: ItemKeyGreen {
		keyid = 1495;
	};
	class ItemKeyGreen1496: ItemKeyGreen {
		keyid = 1496;
	};
	class ItemKeyGreen1497: ItemKeyGreen {
		keyid = 1497;
	};
	class ItemKeyGreen1498: ItemKeyGreen {
		keyid = 1498;
	};
	class ItemKeyGreen1499: ItemKeyGreen {
		keyid = 1499;
	};
	class ItemKeyGreen1500: ItemKeyGreen {
		keyid = 1500;
	};
	class ItemKeyGreen1501: ItemKeyGreen {
		keyid = 1501;
	};
	class ItemKeyGreen1502: ItemKeyGreen {
		keyid = 1502;
	};
	class ItemKeyGreen1503: ItemKeyGreen {
		keyid = 1503;
	};
	class ItemKeyGreen1504: ItemKeyGreen {
		keyid = 1504;
	};
	class ItemKeyGreen1505: ItemKeyGreen {
		keyid = 1505;
	};
	class ItemKeyGreen1506: ItemKeyGreen {
		keyid = 1506;
	};
	class ItemKeyGreen1507: ItemKeyGreen {
		keyid = 1507;
	};
	class ItemKeyGreen1508: ItemKeyGreen {
		keyid = 1508;
	};
	class ItemKeyGreen1509: ItemKeyGreen {
		keyid = 1509;
	};
	class ItemKeyGreen1510: ItemKeyGreen {
		keyid = 1510;
	};
	class ItemKeyGreen1511: ItemKeyGreen {
		keyid = 1511;
	};
	class ItemKeyGreen1512: ItemKeyGreen {
		keyid = 1512;
	};
	class ItemKeyGreen1513: ItemKeyGreen {
		keyid = 1513;
	};
	class ItemKeyGreen1514: ItemKeyGreen {
		keyid = 1514;
	};
	class ItemKeyGreen1515: ItemKeyGreen {
		keyid = 1515;
	};
	class ItemKeyGreen1516: ItemKeyGreen {
		keyid = 1516;
	};
	class ItemKeyGreen1517: ItemKeyGreen {
		keyid = 1517;
	};
	class ItemKeyGreen1518: ItemKeyGreen {
		keyid = 1518;
	};
	class ItemKeyGreen1519: ItemKeyGreen {
		keyid = 1519;
	};
	class ItemKeyGreen1520: ItemKeyGreen {
		keyid = 1520;
	};
	class ItemKeyGreen1521: ItemKeyGreen {
		keyid = 1521;
	};
	class ItemKeyGreen1522: ItemKeyGreen {
		keyid = 1522;
	};
	class ItemKeyGreen1523: ItemKeyGreen {
		keyid = 1523;
	};
	class ItemKeyGreen1524: ItemKeyGreen {
		keyid = 1524;
	};
	class ItemKeyGreen1525: ItemKeyGreen {
		keyid = 1525;
	};
	class ItemKeyGreen1526: ItemKeyGreen {
		keyid = 1526;
	};
	class ItemKeyGreen1527: ItemKeyGreen {
		keyid = 1527;
	};
	class ItemKeyGreen1528: ItemKeyGreen {
		keyid = 1528;
	};
	class ItemKeyGreen1529: ItemKeyGreen {
		keyid = 1529;
	};
	class ItemKeyGreen1530: ItemKeyGreen {
		keyid = 1530;
	};
	class ItemKeyGreen1531: ItemKeyGreen {
		keyid = 1531;
	};
	class ItemKeyGreen1532: ItemKeyGreen {
		keyid = 1532;
	};
	class ItemKeyGreen1533: ItemKeyGreen {
		keyid = 1533;
	};
	class ItemKeyGreen1534: ItemKeyGreen {
		keyid = 1534;
	};
	class ItemKeyGreen1535: ItemKeyGreen {
		keyid = 1535;
	};
	class ItemKeyGreen1536: ItemKeyGreen {
		keyid = 1536;
	};
	class ItemKeyGreen1537: ItemKeyGreen {
		keyid = 1537;
	};
	class ItemKeyGreen1538: ItemKeyGreen {
		keyid = 1538;
	};
	class ItemKeyGreen1539: ItemKeyGreen {
		keyid = 1539;
	};
	class ItemKeyGreen1540: ItemKeyGreen {
		keyid = 1540;
	};
	class ItemKeyGreen1541: ItemKeyGreen {
		keyid = 1541;
	};
	class ItemKeyGreen1542: ItemKeyGreen {
		keyid = 1542;
	};
	class ItemKeyGreen1543: ItemKeyGreen {
		keyid = 1543;
	};
	class ItemKeyGreen1544: ItemKeyGreen {
		keyid = 1544;
	};
	class ItemKeyGreen1545: ItemKeyGreen {
		keyid = 1545;
	};
	class ItemKeyGreen1546: ItemKeyGreen {
		keyid = 1546;
	};
	class ItemKeyGreen1547: ItemKeyGreen {
		keyid = 1547;
	};
	class ItemKeyGreen1548: ItemKeyGreen {
		keyid = 1548;
	};
	class ItemKeyGreen1549: ItemKeyGreen {
		keyid = 1549;
	};
	class ItemKeyGreen1550: ItemKeyGreen {
		keyid = 1550;
	};
	class ItemKeyGreen1551: ItemKeyGreen {
		keyid = 1551;
	};
	class ItemKeyGreen1552: ItemKeyGreen {
		keyid = 1552;
	};
	class ItemKeyGreen1553: ItemKeyGreen {
		keyid = 1553;
	};
	class ItemKeyGreen1554: ItemKeyGreen {
		keyid = 1554;
	};
	class ItemKeyGreen1555: ItemKeyGreen {
		keyid = 1555;
	};
	class ItemKeyGreen1556: ItemKeyGreen {
		keyid = 1556;
	};
	class ItemKeyGreen1557: ItemKeyGreen {
		keyid = 1557;
	};
	class ItemKeyGreen1558: ItemKeyGreen {
		keyid = 1558;
	};
	class ItemKeyGreen1559: ItemKeyGreen {
		keyid = 1559;
	};
	class ItemKeyGreen1560: ItemKeyGreen {
		keyid = 1560;
	};
	class ItemKeyGreen1561: ItemKeyGreen {
		keyid = 1561;
	};
	class ItemKeyGreen1562: ItemKeyGreen {
		keyid = 1562;
	};
	class ItemKeyGreen1563: ItemKeyGreen {
		keyid = 1563;
	};
	class ItemKeyGreen1564: ItemKeyGreen {
		keyid = 1564;
	};
	class ItemKeyGreen1565: ItemKeyGreen {
		keyid = 1565;
	};
	class ItemKeyGreen1566: ItemKeyGreen {
		keyid = 1566;
	};
	class ItemKeyGreen1567: ItemKeyGreen {
		keyid = 1567;
	};
	class ItemKeyGreen1568: ItemKeyGreen {
		keyid = 1568;
	};
	class ItemKeyGreen1569: ItemKeyGreen {
		keyid = 1569;
	};
	class ItemKeyGreen1570: ItemKeyGreen {
		keyid = 1570;
	};
	class ItemKeyGreen1571: ItemKeyGreen {
		keyid = 1571;
	};
	class ItemKeyGreen1572: ItemKeyGreen {
		keyid = 1572;
	};
	class ItemKeyGreen1573: ItemKeyGreen {
		keyid = 1573;
	};
	class ItemKeyGreen1574: ItemKeyGreen {
		keyid = 1574;
	};
	class ItemKeyGreen1575: ItemKeyGreen {
		keyid = 1575;
	};
	class ItemKeyGreen1576: ItemKeyGreen {
		keyid = 1576;
	};
	class ItemKeyGreen1577: ItemKeyGreen {
		keyid = 1577;
	};
	class ItemKeyGreen1578: ItemKeyGreen {
		keyid = 1578;
	};
	class ItemKeyGreen1579: ItemKeyGreen {
		keyid = 1579;
	};
	class ItemKeyGreen1580: ItemKeyGreen {
		keyid = 1580;
	};
	class ItemKeyGreen1581: ItemKeyGreen {
		keyid = 1581;
	};
	class ItemKeyGreen1582: ItemKeyGreen {
		keyid = 1582;
	};
	class ItemKeyGreen1583: ItemKeyGreen {
		keyid = 1583;
	};
	class ItemKeyGreen1584: ItemKeyGreen {
		keyid = 1584;
	};
	class ItemKeyGreen1585: ItemKeyGreen {
		keyid = 1585;
	};
	class ItemKeyGreen1586: ItemKeyGreen {
		keyid = 1586;
	};
	class ItemKeyGreen1587: ItemKeyGreen {
		keyid = 1587;
	};
	class ItemKeyGreen1588: ItemKeyGreen {
		keyid = 1588;
	};
	class ItemKeyGreen1589: ItemKeyGreen {
		keyid = 1589;
	};
	class ItemKeyGreen1590: ItemKeyGreen {
		keyid = 1590;
	};
	class ItemKeyGreen1591: ItemKeyGreen {
		keyid = 1591;
	};
	class ItemKeyGreen1592: ItemKeyGreen {
		keyid = 1592;
	};
	class ItemKeyGreen1593: ItemKeyGreen {
		keyid = 1593;
	};
	class ItemKeyGreen1594: ItemKeyGreen {
		keyid = 1594;
	};
	class ItemKeyGreen1595: ItemKeyGreen {
		keyid = 1595;
	};
	class ItemKeyGreen1596: ItemKeyGreen {
		keyid = 1596;
	};
	class ItemKeyGreen1597: ItemKeyGreen {
		keyid = 1597;
	};
	class ItemKeyGreen1598: ItemKeyGreen {
		keyid = 1598;
	};
	class ItemKeyGreen1599: ItemKeyGreen {
		keyid = 1599;
	};
	class ItemKeyGreen1600: ItemKeyGreen {
		keyid = 1600;
	};
	class ItemKeyGreen1601: ItemKeyGreen {
		keyid = 1601;
	};
	class ItemKeyGreen1602: ItemKeyGreen {
		keyid = 1602;
	};
	class ItemKeyGreen1603: ItemKeyGreen {
		keyid = 1603;
	};
	class ItemKeyGreen1604: ItemKeyGreen {
		keyid = 1604;
	};
	class ItemKeyGreen1605: ItemKeyGreen {
		keyid = 1605;
	};
	class ItemKeyGreen1606: ItemKeyGreen {
		keyid = 1606;
	};
	class ItemKeyGreen1607: ItemKeyGreen {
		keyid = 1607;
	};
	class ItemKeyGreen1608: ItemKeyGreen {
		keyid = 1608;
	};
	class ItemKeyGreen1609: ItemKeyGreen {
		keyid = 1609;
	};
	class ItemKeyGreen1610: ItemKeyGreen {
		keyid = 1610;
	};
	class ItemKeyGreen1611: ItemKeyGreen {
		keyid = 1611;
	};
	class ItemKeyGreen1612: ItemKeyGreen {
		keyid = 1612;
	};
	class ItemKeyGreen1613: ItemKeyGreen {
		keyid = 1613;
	};
	class ItemKeyGreen1614: ItemKeyGreen {
		keyid = 1614;
	};
	class ItemKeyGreen1615: ItemKeyGreen {
		keyid = 1615;
	};
	class ItemKeyGreen1616: ItemKeyGreen {
		keyid = 1616;
	};
	class ItemKeyGreen1617: ItemKeyGreen {
		keyid = 1617;
	};
	class ItemKeyGreen1618: ItemKeyGreen {
		keyid = 1618;
	};
	class ItemKeyGreen1619: ItemKeyGreen {
		keyid = 1619;
	};
	class ItemKeyGreen1620: ItemKeyGreen {
		keyid = 1620;
	};
	class ItemKeyGreen1621: ItemKeyGreen {
		keyid = 1621;
	};
	class ItemKeyGreen1622: ItemKeyGreen {
		keyid = 1622;
	};
	class ItemKeyGreen1623: ItemKeyGreen {
		keyid = 1623;
	};
	class ItemKeyGreen1624: ItemKeyGreen {
		keyid = 1624;
	};
	class ItemKeyGreen1625: ItemKeyGreen {
		keyid = 1625;
	};
	class ItemKeyGreen1626: ItemKeyGreen {
		keyid = 1626;
	};
	class ItemKeyGreen1627: ItemKeyGreen {
		keyid = 1627;
	};
	class ItemKeyGreen1628: ItemKeyGreen {
		keyid = 1628;
	};
	class ItemKeyGreen1629: ItemKeyGreen {
		keyid = 1629;
	};
	class ItemKeyGreen1630: ItemKeyGreen {
		keyid = 1630;
	};
	class ItemKeyGreen1631: ItemKeyGreen {
		keyid = 1631;
	};
	class ItemKeyGreen1632: ItemKeyGreen {
		keyid = 1632;
	};
	class ItemKeyGreen1633: ItemKeyGreen {
		keyid = 1633;
	};
	class ItemKeyGreen1634: ItemKeyGreen {
		keyid = 1634;
	};
	class ItemKeyGreen1635: ItemKeyGreen {
		keyid = 1635;
	};
	class ItemKeyGreen1636: ItemKeyGreen {
		keyid = 1636;
	};
	class ItemKeyGreen1637: ItemKeyGreen {
		keyid = 1637;
	};
	class ItemKeyGreen1638: ItemKeyGreen {
		keyid = 1638;
	};
	class ItemKeyGreen1639: ItemKeyGreen {
		keyid = 1639;
	};
	class ItemKeyGreen1640: ItemKeyGreen {
		keyid = 1640;
	};
	class ItemKeyGreen1641: ItemKeyGreen {
		keyid = 1641;
	};
	class ItemKeyGreen1642: ItemKeyGreen {
		keyid = 1642;
	};
	class ItemKeyGreen1643: ItemKeyGreen {
		keyid = 1643;
	};
	class ItemKeyGreen1644: ItemKeyGreen {
		keyid = 1644;
	};
	class ItemKeyGreen1645: ItemKeyGreen {
		keyid = 1645;
	};
	class ItemKeyGreen1646: ItemKeyGreen {
		keyid = 1646;
	};
	class ItemKeyGreen1647: ItemKeyGreen {
		keyid = 1647;
	};
	class ItemKeyGreen1648: ItemKeyGreen {
		keyid = 1648;
	};
	class ItemKeyGreen1649: ItemKeyGreen {
		keyid = 1649;
	};
	class ItemKeyGreen1650: ItemKeyGreen {
		keyid = 1650;
	};
	class ItemKeyGreen1651: ItemKeyGreen {
		keyid = 1651;
	};
	class ItemKeyGreen1652: ItemKeyGreen {
		keyid = 1652;
	};
	class ItemKeyGreen1653: ItemKeyGreen {
		keyid = 1653;
	};
	class ItemKeyGreen1654: ItemKeyGreen {
		keyid = 1654;
	};
	class ItemKeyGreen1655: ItemKeyGreen {
		keyid = 1655;
	};
	class ItemKeyGreen1656: ItemKeyGreen {
		keyid = 1656;
	};
	class ItemKeyGreen1657: ItemKeyGreen {
		keyid = 1657;
	};
	class ItemKeyGreen1658: ItemKeyGreen {
		keyid = 1658;
	};
	class ItemKeyGreen1659: ItemKeyGreen {
		keyid = 1659;
	};
	class ItemKeyGreen1660: ItemKeyGreen {
		keyid = 1660;
	};
	class ItemKeyGreen1661: ItemKeyGreen {
		keyid = 1661;
	};
	class ItemKeyGreen1662: ItemKeyGreen {
		keyid = 1662;
	};
	class ItemKeyGreen1663: ItemKeyGreen {
		keyid = 1663;
	};
	class ItemKeyGreen1664: ItemKeyGreen {
		keyid = 1664;
	};
	class ItemKeyGreen1665: ItemKeyGreen {
		keyid = 1665;
	};
	class ItemKeyGreen1666: ItemKeyGreen {
		keyid = 1666;
	};
	class ItemKeyGreen1667: ItemKeyGreen {
		keyid = 1667;
	};
	class ItemKeyGreen1668: ItemKeyGreen {
		keyid = 1668;
	};
	class ItemKeyGreen1669: ItemKeyGreen {
		keyid = 1669;
	};
	class ItemKeyGreen1670: ItemKeyGreen {
		keyid = 1670;
	};
	class ItemKeyGreen1671: ItemKeyGreen {
		keyid = 1671;
	};
	class ItemKeyGreen1672: ItemKeyGreen {
		keyid = 1672;
	};
	class ItemKeyGreen1673: ItemKeyGreen {
		keyid = 1673;
	};
	class ItemKeyGreen1674: ItemKeyGreen {
		keyid = 1674;
	};
	class ItemKeyGreen1675: ItemKeyGreen {
		keyid = 1675;
	};
	class ItemKeyGreen1676: ItemKeyGreen {
		keyid = 1676;
	};
	class ItemKeyGreen1677: ItemKeyGreen {
		keyid = 1677;
	};
	class ItemKeyGreen1678: ItemKeyGreen {
		keyid = 1678;
	};
	class ItemKeyGreen1679: ItemKeyGreen {
		keyid = 1679;
	};
	class ItemKeyGreen1680: ItemKeyGreen {
		keyid = 1680;
	};
	class ItemKeyGreen1681: ItemKeyGreen {
		keyid = 1681;
	};
	class ItemKeyGreen1682: ItemKeyGreen {
		keyid = 1682;
	};
	class ItemKeyGreen1683: ItemKeyGreen {
		keyid = 1683;
	};
	class ItemKeyGreen1684: ItemKeyGreen {
		keyid = 1684;
	};
	class ItemKeyGreen1685: ItemKeyGreen {
		keyid = 1685;
	};
	class ItemKeyGreen1686: ItemKeyGreen {
		keyid = 1686;
	};
	class ItemKeyGreen1687: ItemKeyGreen {
		keyid = 1687;
	};
	class ItemKeyGreen1688: ItemKeyGreen {
		keyid = 1688;
	};
	class ItemKeyGreen1689: ItemKeyGreen {
		keyid = 1689;
	};
	class ItemKeyGreen1690: ItemKeyGreen {
		keyid = 1690;
	};
	class ItemKeyGreen1691: ItemKeyGreen {
		keyid = 1691;
	};
	class ItemKeyGreen1692: ItemKeyGreen {
		keyid = 1692;
	};
	class ItemKeyGreen1693: ItemKeyGreen {
		keyid = 1693;
	};
	class ItemKeyGreen1694: ItemKeyGreen {
		keyid = 1694;
	};
	class ItemKeyGreen1695: ItemKeyGreen {
		keyid = 1695;
	};
	class ItemKeyGreen1696: ItemKeyGreen {
		keyid = 1696;
	};
	class ItemKeyGreen1697: ItemKeyGreen {
		keyid = 1697;
	};
	class ItemKeyGreen1698: ItemKeyGreen {
		keyid = 1698;
	};
	class ItemKeyGreen1699: ItemKeyGreen {
		keyid = 1699;
	};
	class ItemKeyGreen1700: ItemKeyGreen {
		keyid = 1700;
	};
	class ItemKeyGreen1701: ItemKeyGreen {
		keyid = 1701;
	};
	class ItemKeyGreen1702: ItemKeyGreen {
		keyid = 1702;
	};
	class ItemKeyGreen1703: ItemKeyGreen {
		keyid = 1703;
	};
	class ItemKeyGreen1704: ItemKeyGreen {
		keyid = 1704;
	};
	class ItemKeyGreen1705: ItemKeyGreen {
		keyid = 1705;
	};
	class ItemKeyGreen1706: ItemKeyGreen {
		keyid = 1706;
	};
	class ItemKeyGreen1707: ItemKeyGreen {
		keyid = 1707;
	};
	class ItemKeyGreen1708: ItemKeyGreen {
		keyid = 1708;
	};
	class ItemKeyGreen1709: ItemKeyGreen {
		keyid = 1709;
	};
	class ItemKeyGreen1710: ItemKeyGreen {
		keyid = 1710;
	};
	class ItemKeyGreen1711: ItemKeyGreen {
		keyid = 1711;
	};
	class ItemKeyGreen1712: ItemKeyGreen {
		keyid = 1712;
	};
	class ItemKeyGreen1713: ItemKeyGreen {
		keyid = 1713;
	};
	class ItemKeyGreen1714: ItemKeyGreen {
		keyid = 1714;
	};
	class ItemKeyGreen1715: ItemKeyGreen {
		keyid = 1715;
	};
	class ItemKeyGreen1716: ItemKeyGreen {
		keyid = 1716;
	};
	class ItemKeyGreen1717: ItemKeyGreen {
		keyid = 1717;
	};
	class ItemKeyGreen1718: ItemKeyGreen {
		keyid = 1718;
	};
	class ItemKeyGreen1719: ItemKeyGreen {
		keyid = 1719;
	};
	class ItemKeyGreen1720: ItemKeyGreen {
		keyid = 1720;
	};
	class ItemKeyGreen1721: ItemKeyGreen {
		keyid = 1721;
	};
	class ItemKeyGreen1722: ItemKeyGreen {
		keyid = 1722;
	};
	class ItemKeyGreen1723: ItemKeyGreen {
		keyid = 1723;
	};
	class ItemKeyGreen1724: ItemKeyGreen {
		keyid = 1724;
	};
	class ItemKeyGreen1725: ItemKeyGreen {
		keyid = 1725;
	};
	class ItemKeyGreen1726: ItemKeyGreen {
		keyid = 1726;
	};
	class ItemKeyGreen1727: ItemKeyGreen {
		keyid = 1727;
	};
	class ItemKeyGreen1728: ItemKeyGreen {
		keyid = 1728;
	};
	class ItemKeyGreen1729: ItemKeyGreen {
		keyid = 1729;
	};
	class ItemKeyGreen1730: ItemKeyGreen {
		keyid = 1730;
	};
	class ItemKeyGreen1731: ItemKeyGreen {
		keyid = 1731;
	};
	class ItemKeyGreen1732: ItemKeyGreen {
		keyid = 1732;
	};
	class ItemKeyGreen1733: ItemKeyGreen {
		keyid = 1733;
	};
	class ItemKeyGreen1734: ItemKeyGreen {
		keyid = 1734;
	};
	class ItemKeyGreen1735: ItemKeyGreen {
		keyid = 1735;
	};
	class ItemKeyGreen1736: ItemKeyGreen {
		keyid = 1736;
	};
	class ItemKeyGreen1737: ItemKeyGreen {
		keyid = 1737;
	};
	class ItemKeyGreen1738: ItemKeyGreen {
		keyid = 1738;
	};
	class ItemKeyGreen1739: ItemKeyGreen {
		keyid = 1739;
	};
	class ItemKeyGreen1740: ItemKeyGreen {
		keyid = 1740;
	};
	class ItemKeyGreen1741: ItemKeyGreen {
		keyid = 1741;
	};
	class ItemKeyGreen1742: ItemKeyGreen {
		keyid = 1742;
	};
	class ItemKeyGreen1743: ItemKeyGreen {
		keyid = 1743;
	};
	class ItemKeyGreen1744: ItemKeyGreen {
		keyid = 1744;
	};
	class ItemKeyGreen1745: ItemKeyGreen {
		keyid = 1745;
	};
	class ItemKeyGreen1746: ItemKeyGreen {
		keyid = 1746;
	};
	class ItemKeyGreen1747: ItemKeyGreen {
		keyid = 1747;
	};
	class ItemKeyGreen1748: ItemKeyGreen {
		keyid = 1748;
	};
	class ItemKeyGreen1749: ItemKeyGreen {
		keyid = 1749;
	};
	class ItemKeyGreen1750: ItemKeyGreen {
		keyid = 1750;
	};
	class ItemKeyGreen1751: ItemKeyGreen {
		keyid = 1751;
	};
	class ItemKeyGreen1752: ItemKeyGreen {
		keyid = 1752;
	};
	class ItemKeyGreen1753: ItemKeyGreen {
		keyid = 1753;
	};
	class ItemKeyGreen1754: ItemKeyGreen {
		keyid = 1754;
	};
	class ItemKeyGreen1755: ItemKeyGreen {
		keyid = 1755;
	};
	class ItemKeyGreen1756: ItemKeyGreen {
		keyid = 1756;
	};
	class ItemKeyGreen1757: ItemKeyGreen {
		keyid = 1757;
	};
	class ItemKeyGreen1758: ItemKeyGreen {
		keyid = 1758;
	};
	class ItemKeyGreen1759: ItemKeyGreen {
		keyid = 1759;
	};
	class ItemKeyGreen1760: ItemKeyGreen {
		keyid = 1760;
	};
	class ItemKeyGreen1761: ItemKeyGreen {
		keyid = 1761;
	};
	class ItemKeyGreen1762: ItemKeyGreen {
		keyid = 1762;
	};
	class ItemKeyGreen1763: ItemKeyGreen {
		keyid = 1763;
	};
	class ItemKeyGreen1764: ItemKeyGreen {
		keyid = 1764;
	};
	class ItemKeyGreen1765: ItemKeyGreen {
		keyid = 1765;
	};
	class ItemKeyGreen1766: ItemKeyGreen {
		keyid = 1766;
	};
	class ItemKeyGreen1767: ItemKeyGreen {
		keyid = 1767;
	};
	class ItemKeyGreen1768: ItemKeyGreen {
		keyid = 1768;
	};
	class ItemKeyGreen1769: ItemKeyGreen {
		keyid = 1769;
	};
	class ItemKeyGreen1770: ItemKeyGreen {
		keyid = 1770;
	};
	class ItemKeyGreen1771: ItemKeyGreen {
		keyid = 1771;
	};
	class ItemKeyGreen1772: ItemKeyGreen {
		keyid = 1772;
	};
	class ItemKeyGreen1773: ItemKeyGreen {
		keyid = 1773;
	};
	class ItemKeyGreen1774: ItemKeyGreen {
		keyid = 1774;
	};
	class ItemKeyGreen1775: ItemKeyGreen {
		keyid = 1775;
	};
	class ItemKeyGreen1776: ItemKeyGreen {
		keyid = 1776;
	};
	class ItemKeyGreen1777: ItemKeyGreen {
		keyid = 1777;
	};
	class ItemKeyGreen1778: ItemKeyGreen {
		keyid = 1778;
	};
	class ItemKeyGreen1779: ItemKeyGreen {
		keyid = 1779;
	};
	class ItemKeyGreen1780: ItemKeyGreen {
		keyid = 1780;
	};
	class ItemKeyGreen1781: ItemKeyGreen {
		keyid = 1781;
	};
	class ItemKeyGreen1782: ItemKeyGreen {
		keyid = 1782;
	};
	class ItemKeyGreen1783: ItemKeyGreen {
		keyid = 1783;
	};
	class ItemKeyGreen1784: ItemKeyGreen {
		keyid = 1784;
	};
	class ItemKeyGreen1785: ItemKeyGreen {
		keyid = 1785;
	};
	class ItemKeyGreen1786: ItemKeyGreen {
		keyid = 1786;
	};
	class ItemKeyGreen1787: ItemKeyGreen {
		keyid = 1787;
	};
	class ItemKeyGreen1788: ItemKeyGreen {
		keyid = 1788;
	};
	class ItemKeyGreen1789: ItemKeyGreen {
		keyid = 1789;
	};
	class ItemKeyGreen1790: ItemKeyGreen {
		keyid = 1790;
	};
	class ItemKeyGreen1791: ItemKeyGreen {
		keyid = 1791;
	};
	class ItemKeyGreen1792: ItemKeyGreen {
		keyid = 1792;
	};
	class ItemKeyGreen1793: ItemKeyGreen {
		keyid = 1793;
	};
	class ItemKeyGreen1794: ItemKeyGreen {
		keyid = 1794;
	};
	class ItemKeyGreen1795: ItemKeyGreen {
		keyid = 1795;
	};
	class ItemKeyGreen1796: ItemKeyGreen {
		keyid = 1796;
	};
	class ItemKeyGreen1797: ItemKeyGreen {
		keyid = 1797;
	};
	class ItemKeyGreen1798: ItemKeyGreen {
		keyid = 1798;
	};
	class ItemKeyGreen1799: ItemKeyGreen {
		keyid = 1799;
	};
	class ItemKeyGreen1800: ItemKeyGreen {
		keyid = 1800;
	};
	class ItemKeyGreen1801: ItemKeyGreen {
		keyid = 1801;
	};
	class ItemKeyGreen1802: ItemKeyGreen {
		keyid = 1802;
	};
	class ItemKeyGreen1803: ItemKeyGreen {
		keyid = 1803;
	};
	class ItemKeyGreen1804: ItemKeyGreen {
		keyid = 1804;
	};
	class ItemKeyGreen1805: ItemKeyGreen {
		keyid = 1805;
	};
	class ItemKeyGreen1806: ItemKeyGreen {
		keyid = 1806;
	};
	class ItemKeyGreen1807: ItemKeyGreen {
		keyid = 1807;
	};
	class ItemKeyGreen1808: ItemKeyGreen {
		keyid = 1808;
	};
	class ItemKeyGreen1809: ItemKeyGreen {
		keyid = 1809;
	};
	class ItemKeyGreen1810: ItemKeyGreen {
		keyid = 1810;
	};
	class ItemKeyGreen1811: ItemKeyGreen {
		keyid = 1811;
	};
	class ItemKeyGreen1812: ItemKeyGreen {
		keyid = 1812;
	};
	class ItemKeyGreen1813: ItemKeyGreen {
		keyid = 1813;
	};
	class ItemKeyGreen1814: ItemKeyGreen {
		keyid = 1814;
	};
	class ItemKeyGreen1815: ItemKeyGreen {
		keyid = 1815;
	};
	class ItemKeyGreen1816: ItemKeyGreen {
		keyid = 1816;
	};
	class ItemKeyGreen1817: ItemKeyGreen {
		keyid = 1817;
	};
	class ItemKeyGreen1818: ItemKeyGreen {
		keyid = 1818;
	};
	class ItemKeyGreen1819: ItemKeyGreen {
		keyid = 1819;
	};
	class ItemKeyGreen1820: ItemKeyGreen {
		keyid = 1820;
	};
	class ItemKeyGreen1821: ItemKeyGreen {
		keyid = 1821;
	};
	class ItemKeyGreen1822: ItemKeyGreen {
		keyid = 1822;
	};
	class ItemKeyGreen1823: ItemKeyGreen {
		keyid = 1823;
	};
	class ItemKeyGreen1824: ItemKeyGreen {
		keyid = 1824;
	};
	class ItemKeyGreen1825: ItemKeyGreen {
		keyid = 1825;
	};
	class ItemKeyGreen1826: ItemKeyGreen {
		keyid = 1826;
	};
	class ItemKeyGreen1827: ItemKeyGreen {
		keyid = 1827;
	};
	class ItemKeyGreen1828: ItemKeyGreen {
		keyid = 1828;
	};
	class ItemKeyGreen1829: ItemKeyGreen {
		keyid = 1829;
	};
	class ItemKeyGreen1830: ItemKeyGreen {
		keyid = 1830;
	};
	class ItemKeyGreen1831: ItemKeyGreen {
		keyid = 1831;
	};
	class ItemKeyGreen1832: ItemKeyGreen {
		keyid = 1832;
	};
	class ItemKeyGreen1833: ItemKeyGreen {
		keyid = 1833;
	};
	class ItemKeyGreen1834: ItemKeyGreen {
		keyid = 1834;
	};
	class ItemKeyGreen1835: ItemKeyGreen {
		keyid = 1835;
	};
	class ItemKeyGreen1836: ItemKeyGreen {
		keyid = 1836;
	};
	class ItemKeyGreen1837: ItemKeyGreen {
		keyid = 1837;
	};
	class ItemKeyGreen1838: ItemKeyGreen {
		keyid = 1838;
	};
	class ItemKeyGreen1839: ItemKeyGreen {
		keyid = 1839;
	};
	class ItemKeyGreen1840: ItemKeyGreen {
		keyid = 1840;
	};
	class ItemKeyGreen1841: ItemKeyGreen {
		keyid = 1841;
	};
	class ItemKeyGreen1842: ItemKeyGreen {
		keyid = 1842;
	};
	class ItemKeyGreen1843: ItemKeyGreen {
		keyid = 1843;
	};
	class ItemKeyGreen1844: ItemKeyGreen {
		keyid = 1844;
	};
	class ItemKeyGreen1845: ItemKeyGreen {
		keyid = 1845;
	};
	class ItemKeyGreen1846: ItemKeyGreen {
		keyid = 1846;
	};
	class ItemKeyGreen1847: ItemKeyGreen {
		keyid = 1847;
	};
	class ItemKeyGreen1848: ItemKeyGreen {
		keyid = 1848;
	};
	class ItemKeyGreen1849: ItemKeyGreen {
		keyid = 1849;
	};
	class ItemKeyGreen1850: ItemKeyGreen {
		keyid = 1850;
	};
	class ItemKeyGreen1851: ItemKeyGreen {
		keyid = 1851;
	};
	class ItemKeyGreen1852: ItemKeyGreen {
		keyid = 1852;
	};
	class ItemKeyGreen1853: ItemKeyGreen {
		keyid = 1853;
	};
	class ItemKeyGreen1854: ItemKeyGreen {
		keyid = 1854;
	};
	class ItemKeyGreen1855: ItemKeyGreen {
		keyid = 1855;
	};
	class ItemKeyGreen1856: ItemKeyGreen {
		keyid = 1856;
	};
	class ItemKeyGreen1857: ItemKeyGreen {
		keyid = 1857;
	};
	class ItemKeyGreen1858: ItemKeyGreen {
		keyid = 1858;
	};
	class ItemKeyGreen1859: ItemKeyGreen {
		keyid = 1859;
	};
	class ItemKeyGreen1860: ItemKeyGreen {
		keyid = 1860;
	};
	class ItemKeyGreen1861: ItemKeyGreen {
		keyid = 1861;
	};
	class ItemKeyGreen1862: ItemKeyGreen {
		keyid = 1862;
	};
	class ItemKeyGreen1863: ItemKeyGreen {
		keyid = 1863;
	};
	class ItemKeyGreen1864: ItemKeyGreen {
		keyid = 1864;
	};
	class ItemKeyGreen1865: ItemKeyGreen {
		keyid = 1865;
	};
	class ItemKeyGreen1866: ItemKeyGreen {
		keyid = 1866;
	};
	class ItemKeyGreen1867: ItemKeyGreen {
		keyid = 1867;
	};
	class ItemKeyGreen1868: ItemKeyGreen {
		keyid = 1868;
	};
	class ItemKeyGreen1869: ItemKeyGreen {
		keyid = 1869;
	};
	class ItemKeyGreen1870: ItemKeyGreen {
		keyid = 1870;
	};
	class ItemKeyGreen1871: ItemKeyGreen {
		keyid = 1871;
	};
	class ItemKeyGreen1872: ItemKeyGreen {
		keyid = 1872;
	};
	class ItemKeyGreen1873: ItemKeyGreen {
		keyid = 1873;
	};
	class ItemKeyGreen1874: ItemKeyGreen {
		keyid = 1874;
	};
	class ItemKeyGreen1875: ItemKeyGreen {
		keyid = 1875;
	};
	class ItemKeyGreen1876: ItemKeyGreen {
		keyid = 1876;
	};
	class ItemKeyGreen1877: ItemKeyGreen {
		keyid = 1877;
	};
	class ItemKeyGreen1878: ItemKeyGreen {
		keyid = 1878;
	};
	class ItemKeyGreen1879: ItemKeyGreen {
		keyid = 1879;
	};
	class ItemKeyGreen1880: ItemKeyGreen {
		keyid = 1880;
	};
	class ItemKeyGreen1881: ItemKeyGreen {
		keyid = 1881;
	};
	class ItemKeyGreen1882: ItemKeyGreen {
		keyid = 1882;
	};
	class ItemKeyGreen1883: ItemKeyGreen {
		keyid = 1883;
	};
	class ItemKeyGreen1884: ItemKeyGreen {
		keyid = 1884;
	};
	class ItemKeyGreen1885: ItemKeyGreen {
		keyid = 1885;
	};
	class ItemKeyGreen1886: ItemKeyGreen {
		keyid = 1886;
	};
	class ItemKeyGreen1887: ItemKeyGreen {
		keyid = 1887;
	};
	class ItemKeyGreen1888: ItemKeyGreen {
		keyid = 1888;
	};
	class ItemKeyGreen1889: ItemKeyGreen {
		keyid = 1889;
	};
	class ItemKeyGreen1890: ItemKeyGreen {
		keyid = 1890;
	};
	class ItemKeyGreen1891: ItemKeyGreen {
		keyid = 1891;
	};
	class ItemKeyGreen1892: ItemKeyGreen {
		keyid = 1892;
	};
	class ItemKeyGreen1893: ItemKeyGreen {
		keyid = 1893;
	};
	class ItemKeyGreen1894: ItemKeyGreen {
		keyid = 1894;
	};
	class ItemKeyGreen1895: ItemKeyGreen {
		keyid = 1895;
	};
	class ItemKeyGreen1896: ItemKeyGreen {
		keyid = 1896;
	};
	class ItemKeyGreen1897: ItemKeyGreen {
		keyid = 1897;
	};
	class ItemKeyGreen1898: ItemKeyGreen {
		keyid = 1898;
	};
	class ItemKeyGreen1899: ItemKeyGreen {
		keyid = 1899;
	};
	class ItemKeyGreen1900: ItemKeyGreen {
		keyid = 1900;
	};
	class ItemKeyGreen1901: ItemKeyGreen {
		keyid = 1901;
	};
	class ItemKeyGreen1902: ItemKeyGreen {
		keyid = 1902;
	};
	class ItemKeyGreen1903: ItemKeyGreen {
		keyid = 1903;
	};
	class ItemKeyGreen1904: ItemKeyGreen {
		keyid = 1904;
	};
	class ItemKeyGreen1905: ItemKeyGreen {
		keyid = 1905;
	};
	class ItemKeyGreen1906: ItemKeyGreen {
		keyid = 1906;
	};
	class ItemKeyGreen1907: ItemKeyGreen {
		keyid = 1907;
	};
	class ItemKeyGreen1908: ItemKeyGreen {
		keyid = 1908;
	};
	class ItemKeyGreen1909: ItemKeyGreen {
		keyid = 1909;
	};
	class ItemKeyGreen1910: ItemKeyGreen {
		keyid = 1910;
	};
	class ItemKeyGreen1911: ItemKeyGreen {
		keyid = 1911;
	};
	class ItemKeyGreen1912: ItemKeyGreen {
		keyid = 1912;
	};
	class ItemKeyGreen1913: ItemKeyGreen {
		keyid = 1913;
	};
	class ItemKeyGreen1914: ItemKeyGreen {
		keyid = 1914;
	};
	class ItemKeyGreen1915: ItemKeyGreen {
		keyid = 1915;
	};
	class ItemKeyGreen1916: ItemKeyGreen {
		keyid = 1916;
	};
	class ItemKeyGreen1917: ItemKeyGreen {
		keyid = 1917;
	};
	class ItemKeyGreen1918: ItemKeyGreen {
		keyid = 1918;
	};
	class ItemKeyGreen1919: ItemKeyGreen {
		keyid = 1919;
	};
	class ItemKeyGreen1920: ItemKeyGreen {
		keyid = 1920;
	};
	class ItemKeyGreen1921: ItemKeyGreen {
		keyid = 1921;
	};
	class ItemKeyGreen1922: ItemKeyGreen {
		keyid = 1922;
	};
	class ItemKeyGreen1923: ItemKeyGreen {
		keyid = 1923;
	};
	class ItemKeyGreen1924: ItemKeyGreen {
		keyid = 1924;
	};
	class ItemKeyGreen1925: ItemKeyGreen {
		keyid = 1925;
	};
	class ItemKeyGreen1926: ItemKeyGreen {
		keyid = 1926;
	};
	class ItemKeyGreen1927: ItemKeyGreen {
		keyid = 1927;
	};
	class ItemKeyGreen1928: ItemKeyGreen {
		keyid = 1928;
	};
	class ItemKeyGreen1929: ItemKeyGreen {
		keyid = 1929;
	};
	class ItemKeyGreen1930: ItemKeyGreen {
		keyid = 1930;
	};
	class ItemKeyGreen1931: ItemKeyGreen {
		keyid = 1931;
	};
	class ItemKeyGreen1932: ItemKeyGreen {
		keyid = 1932;
	};
	class ItemKeyGreen1933: ItemKeyGreen {
		keyid = 1933;
	};
	class ItemKeyGreen1934: ItemKeyGreen {
		keyid = 1934;
	};
	class ItemKeyGreen1935: ItemKeyGreen {
		keyid = 1935;
	};
	class ItemKeyGreen1936: ItemKeyGreen {
		keyid = 1936;
	};
	class ItemKeyGreen1937: ItemKeyGreen {
		keyid = 1937;
	};
	class ItemKeyGreen1938: ItemKeyGreen {
		keyid = 1938;
	};
	class ItemKeyGreen1939: ItemKeyGreen {
		keyid = 1939;
	};
	class ItemKeyGreen1940: ItemKeyGreen {
		keyid = 1940;
	};
	class ItemKeyGreen1941: ItemKeyGreen {
		keyid = 1941;
	};
	class ItemKeyGreen1942: ItemKeyGreen {
		keyid = 1942;
	};
	class ItemKeyGreen1943: ItemKeyGreen {
		keyid = 1943;
	};
	class ItemKeyGreen1944: ItemKeyGreen {
		keyid = 1944;
	};
	class ItemKeyGreen1945: ItemKeyGreen {
		keyid = 1945;
	};
	class ItemKeyGreen1946: ItemKeyGreen {
		keyid = 1946;
	};
	class ItemKeyGreen1947: ItemKeyGreen {
		keyid = 1947;
	};
	class ItemKeyGreen1948: ItemKeyGreen {
		keyid = 1948;
	};
	class ItemKeyGreen1949: ItemKeyGreen {
		keyid = 1949;
	};
	class ItemKeyGreen1950: ItemKeyGreen {
		keyid = 1950;
	};
	class ItemKeyGreen1951: ItemKeyGreen {
		keyid = 1951;
	};
	class ItemKeyGreen1952: ItemKeyGreen {
		keyid = 1952;
	};
	class ItemKeyGreen1953: ItemKeyGreen {
		keyid = 1953;
	};
	class ItemKeyGreen1954: ItemKeyGreen {
		keyid = 1954;
	};
	class ItemKeyGreen1955: ItemKeyGreen {
		keyid = 1955;
	};
	class ItemKeyGreen1956: ItemKeyGreen {
		keyid = 1956;
	};
	class ItemKeyGreen1957: ItemKeyGreen {
		keyid = 1957;
	};
	class ItemKeyGreen1958: ItemKeyGreen {
		keyid = 1958;
	};
	class ItemKeyGreen1959: ItemKeyGreen {
		keyid = 1959;
	};
	class ItemKeyGreen1960: ItemKeyGreen {
		keyid = 1960;
	};
	class ItemKeyGreen1961: ItemKeyGreen {
		keyid = 1961;
	};
	class ItemKeyGreen1962: ItemKeyGreen {
		keyid = 1962;
	};
	class ItemKeyGreen1963: ItemKeyGreen {
		keyid = 1963;
	};
	class ItemKeyGreen1964: ItemKeyGreen {
		keyid = 1964;
	};
	class ItemKeyGreen1965: ItemKeyGreen {
		keyid = 1965;
	};
	class ItemKeyGreen1966: ItemKeyGreen {
		keyid = 1966;
	};
	class ItemKeyGreen1967: ItemKeyGreen {
		keyid = 1967;
	};
	class ItemKeyGreen1968: ItemKeyGreen {
		keyid = 1968;
	};
	class ItemKeyGreen1969: ItemKeyGreen {
		keyid = 1969;
	};
	class ItemKeyGreen1970: ItemKeyGreen {
		keyid = 1970;
	};
	class ItemKeyGreen1971: ItemKeyGreen {
		keyid = 1971;
	};
	class ItemKeyGreen1972: ItemKeyGreen {
		keyid = 1972;
	};
	class ItemKeyGreen1973: ItemKeyGreen {
		keyid = 1973;
	};
	class ItemKeyGreen1974: ItemKeyGreen {
		keyid = 1974;
	};
	class ItemKeyGreen1975: ItemKeyGreen {
		keyid = 1975;
	};
	class ItemKeyGreen1976: ItemKeyGreen {
		keyid = 1976;
	};
	class ItemKeyGreen1977: ItemKeyGreen {
		keyid = 1977;
	};
	class ItemKeyGreen1978: ItemKeyGreen {
		keyid = 1978;
	};
	class ItemKeyGreen1979: ItemKeyGreen {
		keyid = 1979;
	};
	class ItemKeyGreen1980: ItemKeyGreen {
		keyid = 1980;
	};
	class ItemKeyGreen1981: ItemKeyGreen {
		keyid = 1981;
	};
	class ItemKeyGreen1982: ItemKeyGreen {
		keyid = 1982;
	};
	class ItemKeyGreen1983: ItemKeyGreen {
		keyid = 1983;
	};
	class ItemKeyGreen1984: ItemKeyGreen {
		keyid = 1984;
	};
	class ItemKeyGreen1985: ItemKeyGreen {
		keyid = 1985;
	};
	class ItemKeyGreen1986: ItemKeyGreen {
		keyid = 1986;
	};
	class ItemKeyGreen1987: ItemKeyGreen {
		keyid = 1987;
	};
	class ItemKeyGreen1988: ItemKeyGreen {
		keyid = 1988;
	};
	class ItemKeyGreen1989: ItemKeyGreen {
		keyid = 1989;
	};
	class ItemKeyGreen1990: ItemKeyGreen {
		keyid = 1990;
	};
	class ItemKeyGreen1991: ItemKeyGreen {
		keyid = 1991;
	};
	class ItemKeyGreen1992: ItemKeyGreen {
		keyid = 1992;
	};
	class ItemKeyGreen1993: ItemKeyGreen {
		keyid = 1993;
	};
	class ItemKeyGreen1994: ItemKeyGreen {
		keyid = 1994;
	};
	class ItemKeyGreen1995: ItemKeyGreen {
		keyid = 1995;
	};
	class ItemKeyGreen1996: ItemKeyGreen {
		keyid = 1996;
	};
	class ItemKeyGreen1997: ItemKeyGreen {
		keyid = 1997;
	};
	class ItemKeyGreen1998: ItemKeyGreen {
		keyid = 1998;
	};
	class ItemKeyGreen1999: ItemKeyGreen {
		keyid = 1999;
	};
	class ItemKeyGreen2000: ItemKeyGreen {
		keyid = 2000;
	};
	class ItemKeyGreen2001: ItemKeyGreen {
		keyid = 2001;
	};
	class ItemKeyGreen2002: ItemKeyGreen {
		keyid = 2002;
	};
	class ItemKeyGreen2003: ItemKeyGreen {
		keyid = 2003;
	};
	class ItemKeyGreen2004: ItemKeyGreen {
		keyid = 2004;
	};
	class ItemKeyGreen2005: ItemKeyGreen {
		keyid = 2005;
	};
	class ItemKeyGreen2006: ItemKeyGreen {
		keyid = 2006;
	};
	class ItemKeyGreen2007: ItemKeyGreen {
		keyid = 2007;
	};
	class ItemKeyGreen2008: ItemKeyGreen {
		keyid = 2008;
	};
	class ItemKeyGreen2009: ItemKeyGreen {
		keyid = 2009;
	};
	class ItemKeyGreen2010: ItemKeyGreen {
		keyid = 2010;
	};
	class ItemKeyGreen2011: ItemKeyGreen {
		keyid = 2011;
	};
	class ItemKeyGreen2012: ItemKeyGreen {
		keyid = 2012;
	};
	class ItemKeyGreen2013: ItemKeyGreen {
		keyid = 2013;
	};
	class ItemKeyGreen2014: ItemKeyGreen {
		keyid = 2014;
	};
	class ItemKeyGreen2015: ItemKeyGreen {
		keyid = 2015;
	};
	class ItemKeyGreen2016: ItemKeyGreen {
		keyid = 2016;
	};
	class ItemKeyGreen2017: ItemKeyGreen {
		keyid = 2017;
	};
	class ItemKeyGreen2018: ItemKeyGreen {
		keyid = 2018;
	};
	class ItemKeyGreen2019: ItemKeyGreen {
		keyid = 2019;
	};
	class ItemKeyGreen2020: ItemKeyGreen {
		keyid = 2020;
	};
	class ItemKeyGreen2021: ItemKeyGreen {
		keyid = 2021;
	};
	class ItemKeyGreen2022: ItemKeyGreen {
		keyid = 2022;
	};
	class ItemKeyGreen2023: ItemKeyGreen {
		keyid = 2023;
	};
	class ItemKeyGreen2024: ItemKeyGreen {
		keyid = 2024;
	};
	class ItemKeyGreen2025: ItemKeyGreen {
		keyid = 2025;
	};
	class ItemKeyGreen2026: ItemKeyGreen {
		keyid = 2026;
	};
	class ItemKeyGreen2027: ItemKeyGreen {
		keyid = 2027;
	};
	class ItemKeyGreen2028: ItemKeyGreen {
		keyid = 2028;
	};
	class ItemKeyGreen2029: ItemKeyGreen {
		keyid = 2029;
	};
	class ItemKeyGreen2030: ItemKeyGreen {
		keyid = 2030;
	};
	class ItemKeyGreen2031: ItemKeyGreen {
		keyid = 2031;
	};
	class ItemKeyGreen2032: ItemKeyGreen {
		keyid = 2032;
	};
	class ItemKeyGreen2033: ItemKeyGreen {
		keyid = 2033;
	};
	class ItemKeyGreen2034: ItemKeyGreen {
		keyid = 2034;
	};
	class ItemKeyGreen2035: ItemKeyGreen {
		keyid = 2035;
	};
	class ItemKeyGreen2036: ItemKeyGreen {
		keyid = 2036;
	};
	class ItemKeyGreen2037: ItemKeyGreen {
		keyid = 2037;
	};
	class ItemKeyGreen2038: ItemKeyGreen {
		keyid = 2038;
	};
	class ItemKeyGreen2039: ItemKeyGreen {
		keyid = 2039;
	};
	class ItemKeyGreen2040: ItemKeyGreen {
		keyid = 2040;
	};
	class ItemKeyGreen2041: ItemKeyGreen {
		keyid = 2041;
	};
	class ItemKeyGreen2042: ItemKeyGreen {
		keyid = 2042;
	};
	class ItemKeyGreen2043: ItemKeyGreen {
		keyid = 2043;
	};
	class ItemKeyGreen2044: ItemKeyGreen {
		keyid = 2044;
	};
	class ItemKeyGreen2045: ItemKeyGreen {
		keyid = 2045;
	};
	class ItemKeyGreen2046: ItemKeyGreen {
		keyid = 2046;
	};
	class ItemKeyGreen2047: ItemKeyGreen {
		keyid = 2047;
	};
	class ItemKeyGreen2048: ItemKeyGreen {
		keyid = 2048;
	};
	class ItemKeyGreen2049: ItemKeyGreen {
		keyid = 2049;
	};
	class ItemKeyGreen2050: ItemKeyGreen {
		keyid = 2050;
	};
	class ItemKeyGreen2051: ItemKeyGreen {
		keyid = 2051;
	};
	class ItemKeyGreen2052: ItemKeyGreen {
		keyid = 2052;
	};
	class ItemKeyGreen2053: ItemKeyGreen {
		keyid = 2053;
	};
	class ItemKeyGreen2054: ItemKeyGreen {
		keyid = 2054;
	};
	class ItemKeyGreen2055: ItemKeyGreen {
		keyid = 2055;
	};
	class ItemKeyGreen2056: ItemKeyGreen {
		keyid = 2056;
	};
	class ItemKeyGreen2057: ItemKeyGreen {
		keyid = 2057;
	};
	class ItemKeyGreen2058: ItemKeyGreen {
		keyid = 2058;
	};
	class ItemKeyGreen2059: ItemKeyGreen {
		keyid = 2059;
	};
	class ItemKeyGreen2060: ItemKeyGreen {
		keyid = 2060;
	};
	class ItemKeyGreen2061: ItemKeyGreen {
		keyid = 2061;
	};
	class ItemKeyGreen2062: ItemKeyGreen {
		keyid = 2062;
	};
	class ItemKeyGreen2063: ItemKeyGreen {
		keyid = 2063;
	};
	class ItemKeyGreen2064: ItemKeyGreen {
		keyid = 2064;
	};
	class ItemKeyGreen2065: ItemKeyGreen {
		keyid = 2065;
	};
	class ItemKeyGreen2066: ItemKeyGreen {
		keyid = 2066;
	};
	class ItemKeyGreen2067: ItemKeyGreen {
		keyid = 2067;
	};
	class ItemKeyGreen2068: ItemKeyGreen {
		keyid = 2068;
	};
	class ItemKeyGreen2069: ItemKeyGreen {
		keyid = 2069;
	};
	class ItemKeyGreen2070: ItemKeyGreen {
		keyid = 2070;
	};
	class ItemKeyGreen2071: ItemKeyGreen {
		keyid = 2071;
	};
	class ItemKeyGreen2072: ItemKeyGreen {
		keyid = 2072;
	};
	class ItemKeyGreen2073: ItemKeyGreen {
		keyid = 2073;
	};
	class ItemKeyGreen2074: ItemKeyGreen {
		keyid = 2074;
	};
	class ItemKeyGreen2075: ItemKeyGreen {
		keyid = 2075;
	};
	class ItemKeyGreen2076: ItemKeyGreen {
		keyid = 2076;
	};
	class ItemKeyGreen2077: ItemKeyGreen {
		keyid = 2077;
	};
	class ItemKeyGreen2078: ItemKeyGreen {
		keyid = 2078;
	};
	class ItemKeyGreen2079: ItemKeyGreen {
		keyid = 2079;
	};
	class ItemKeyGreen2080: ItemKeyGreen {
		keyid = 2080;
	};
	class ItemKeyGreen2081: ItemKeyGreen {
		keyid = 2081;
	};
	class ItemKeyGreen2082: ItemKeyGreen {
		keyid = 2082;
	};
	class ItemKeyGreen2083: ItemKeyGreen {
		keyid = 2083;
	};
	class ItemKeyGreen2084: ItemKeyGreen {
		keyid = 2084;
	};
	class ItemKeyGreen2085: ItemKeyGreen {
		keyid = 2085;
	};
	class ItemKeyGreen2086: ItemKeyGreen {
		keyid = 2086;
	};
	class ItemKeyGreen2087: ItemKeyGreen {
		keyid = 2087;
	};
	class ItemKeyGreen2088: ItemKeyGreen {
		keyid = 2088;
	};
	class ItemKeyGreen2089: ItemKeyGreen {
		keyid = 2089;
	};
	class ItemKeyGreen2090: ItemKeyGreen {
		keyid = 2090;
	};
	class ItemKeyGreen2091: ItemKeyGreen {
		keyid = 2091;
	};
	class ItemKeyGreen2092: ItemKeyGreen {
		keyid = 2092;
	};
	class ItemKeyGreen2093: ItemKeyGreen {
		keyid = 2093;
	};
	class ItemKeyGreen2094: ItemKeyGreen {
		keyid = 2094;
	};
	class ItemKeyGreen2095: ItemKeyGreen {
		keyid = 2095;
	};
	class ItemKeyGreen2096: ItemKeyGreen {
		keyid = 2096;
	};
	class ItemKeyGreen2097: ItemKeyGreen {
		keyid = 2097;
	};
	class ItemKeyGreen2098: ItemKeyGreen {
		keyid = 2098;
	};
	class ItemKeyGreen2099: ItemKeyGreen {
		keyid = 2099;
	};
	class ItemKeyGreen2100: ItemKeyGreen {
		keyid = 2100;
	};
	class ItemKeyGreen2101: ItemKeyGreen {
		keyid = 2101;
	};
	class ItemKeyGreen2102: ItemKeyGreen {
		keyid = 2102;
	};
	class ItemKeyGreen2103: ItemKeyGreen {
		keyid = 2103;
	};
	class ItemKeyGreen2104: ItemKeyGreen {
		keyid = 2104;
	};
	class ItemKeyGreen2105: ItemKeyGreen {
		keyid = 2105;
	};
	class ItemKeyGreen2106: ItemKeyGreen {
		keyid = 2106;
	};
	class ItemKeyGreen2107: ItemKeyGreen {
		keyid = 2107;
	};
	class ItemKeyGreen2108: ItemKeyGreen {
		keyid = 2108;
	};
	class ItemKeyGreen2109: ItemKeyGreen {
		keyid = 2109;
	};
	class ItemKeyGreen2110: ItemKeyGreen {
		keyid = 2110;
	};
	class ItemKeyGreen2111: ItemKeyGreen {
		keyid = 2111;
	};
	class ItemKeyGreen2112: ItemKeyGreen {
		keyid = 2112;
	};
	class ItemKeyGreen2113: ItemKeyGreen {
		keyid = 2113;
	};
	class ItemKeyGreen2114: ItemKeyGreen {
		keyid = 2114;
	};
	class ItemKeyGreen2115: ItemKeyGreen {
		keyid = 2115;
	};
	class ItemKeyGreen2116: ItemKeyGreen {
		keyid = 2116;
	};
	class ItemKeyGreen2117: ItemKeyGreen {
		keyid = 2117;
	};
	class ItemKeyGreen2118: ItemKeyGreen {
		keyid = 2118;
	};
	class ItemKeyGreen2119: ItemKeyGreen {
		keyid = 2119;
	};
	class ItemKeyGreen2120: ItemKeyGreen {
		keyid = 2120;
	};
	class ItemKeyGreen2121: ItemKeyGreen {
		keyid = 2121;
	};
	class ItemKeyGreen2122: ItemKeyGreen {
		keyid = 2122;
	};
	class ItemKeyGreen2123: ItemKeyGreen {
		keyid = 2123;
	};
	class ItemKeyGreen2124: ItemKeyGreen {
		keyid = 2124;
	};
	class ItemKeyGreen2125: ItemKeyGreen {
		keyid = 2125;
	};
	class ItemKeyGreen2126: ItemKeyGreen {
		keyid = 2126;
	};
	class ItemKeyGreen2127: ItemKeyGreen {
		keyid = 2127;
	};
	class ItemKeyGreen2128: ItemKeyGreen {
		keyid = 2128;
	};
	class ItemKeyGreen2129: ItemKeyGreen {
		keyid = 2129;
	};
	class ItemKeyGreen2130: ItemKeyGreen {
		keyid = 2130;
	};
	class ItemKeyGreen2131: ItemKeyGreen {
		keyid = 2131;
	};
	class ItemKeyGreen2132: ItemKeyGreen {
		keyid = 2132;
	};
	class ItemKeyGreen2133: ItemKeyGreen {
		keyid = 2133;
	};
	class ItemKeyGreen2134: ItemKeyGreen {
		keyid = 2134;
	};
	class ItemKeyGreen2135: ItemKeyGreen {
		keyid = 2135;
	};
	class ItemKeyGreen2136: ItemKeyGreen {
		keyid = 2136;
	};
	class ItemKeyGreen2137: ItemKeyGreen {
		keyid = 2137;
	};
	class ItemKeyGreen2138: ItemKeyGreen {
		keyid = 2138;
	};
	class ItemKeyGreen2139: ItemKeyGreen {
		keyid = 2139;
	};
	class ItemKeyGreen2140: ItemKeyGreen {
		keyid = 2140;
	};
	class ItemKeyGreen2141: ItemKeyGreen {
		keyid = 2141;
	};
	class ItemKeyGreen2142: ItemKeyGreen {
		keyid = 2142;
	};
	class ItemKeyGreen2143: ItemKeyGreen {
		keyid = 2143;
	};
	class ItemKeyGreen2144: ItemKeyGreen {
		keyid = 2144;
	};
	class ItemKeyGreen2145: ItemKeyGreen {
		keyid = 2145;
	};
	class ItemKeyGreen2146: ItemKeyGreen {
		keyid = 2146;
	};
	class ItemKeyGreen2147: ItemKeyGreen {
		keyid = 2147;
	};
	class ItemKeyGreen2148: ItemKeyGreen {
		keyid = 2148;
	};
	class ItemKeyGreen2149: ItemKeyGreen {
		keyid = 2149;
	};
	class ItemKeyGreen2150: ItemKeyGreen {
		keyid = 2150;
	};
	class ItemKeyGreen2151: ItemKeyGreen {
		keyid = 2151;
	};
	class ItemKeyGreen2152: ItemKeyGreen {
		keyid = 2152;
	};
	class ItemKeyGreen2153: ItemKeyGreen {
		keyid = 2153;
	};
	class ItemKeyGreen2154: ItemKeyGreen {
		keyid = 2154;
	};
	class ItemKeyGreen2155: ItemKeyGreen {
		keyid = 2155;
	};
	class ItemKeyGreen2156: ItemKeyGreen {
		keyid = 2156;
	};
	class ItemKeyGreen2157: ItemKeyGreen {
		keyid = 2157;
	};
	class ItemKeyGreen2158: ItemKeyGreen {
		keyid = 2158;
	};
	class ItemKeyGreen2159: ItemKeyGreen {
		keyid = 2159;
	};
	class ItemKeyGreen2160: ItemKeyGreen {
		keyid = 2160;
	};
	class ItemKeyGreen2161: ItemKeyGreen {
		keyid = 2161;
	};
	class ItemKeyGreen2162: ItemKeyGreen {
		keyid = 2162;
	};
	class ItemKeyGreen2163: ItemKeyGreen {
		keyid = 2163;
	};
	class ItemKeyGreen2164: ItemKeyGreen {
		keyid = 2164;
	};
	class ItemKeyGreen2165: ItemKeyGreen {
		keyid = 2165;
	};
	class ItemKeyGreen2166: ItemKeyGreen {
		keyid = 2166;
	};
	class ItemKeyGreen2167: ItemKeyGreen {
		keyid = 2167;
	};
	class ItemKeyGreen2168: ItemKeyGreen {
		keyid = 2168;
	};
	class ItemKeyGreen2169: ItemKeyGreen {
		keyid = 2169;
	};
	class ItemKeyGreen2170: ItemKeyGreen {
		keyid = 2170;
	};
	class ItemKeyGreen2171: ItemKeyGreen {
		keyid = 2171;
	};
	class ItemKeyGreen2172: ItemKeyGreen {
		keyid = 2172;
	};
	class ItemKeyGreen2173: ItemKeyGreen {
		keyid = 2173;
	};
	class ItemKeyGreen2174: ItemKeyGreen {
		keyid = 2174;
	};
	class ItemKeyGreen2175: ItemKeyGreen {
		keyid = 2175;
	};
	class ItemKeyGreen2176: ItemKeyGreen {
		keyid = 2176;
	};
	class ItemKeyGreen2177: ItemKeyGreen {
		keyid = 2177;
	};
	class ItemKeyGreen2178: ItemKeyGreen {
		keyid = 2178;
	};
	class ItemKeyGreen2179: ItemKeyGreen {
		keyid = 2179;
	};
	class ItemKeyGreen2180: ItemKeyGreen {
		keyid = 2180;
	};
	class ItemKeyGreen2181: ItemKeyGreen {
		keyid = 2181;
	};
	class ItemKeyGreen2182: ItemKeyGreen {
		keyid = 2182;
	};
	class ItemKeyGreen2183: ItemKeyGreen {
		keyid = 2183;
	};
	class ItemKeyGreen2184: ItemKeyGreen {
		keyid = 2184;
	};
	class ItemKeyGreen2185: ItemKeyGreen {
		keyid = 2185;
	};
	class ItemKeyGreen2186: ItemKeyGreen {
		keyid = 2186;
	};
	class ItemKeyGreen2187: ItemKeyGreen {
		keyid = 2187;
	};
	class ItemKeyGreen2188: ItemKeyGreen {
		keyid = 2188;
	};
	class ItemKeyGreen2189: ItemKeyGreen {
		keyid = 2189;
	};
	class ItemKeyGreen2190: ItemKeyGreen {
		keyid = 2190;
	};
	class ItemKeyGreen2191: ItemKeyGreen {
		keyid = 2191;
	};
	class ItemKeyGreen2192: ItemKeyGreen {
		keyid = 2192;
	};
	class ItemKeyGreen2193: ItemKeyGreen {
		keyid = 2193;
	};
	class ItemKeyGreen2194: ItemKeyGreen {
		keyid = 2194;
	};
	class ItemKeyGreen2195: ItemKeyGreen {
		keyid = 2195;
	};
	class ItemKeyGreen2196: ItemKeyGreen {
		keyid = 2196;
	};
	class ItemKeyGreen2197: ItemKeyGreen {
		keyid = 2197;
	};
	class ItemKeyGreen2198: ItemKeyGreen {
		keyid = 2198;
	};
	class ItemKeyGreen2199: ItemKeyGreen {
		keyid = 2199;
	};
	class ItemKeyGreen2200: ItemKeyGreen {
		keyid = 2200;
	};
	class ItemKeyGreen2201: ItemKeyGreen {
		keyid = 2201;
	};
	class ItemKeyGreen2202: ItemKeyGreen {
		keyid = 2202;
	};
	class ItemKeyGreen2203: ItemKeyGreen {
		keyid = 2203;
	};
	class ItemKeyGreen2204: ItemKeyGreen {
		keyid = 2204;
	};
	class ItemKeyGreen2205: ItemKeyGreen {
		keyid = 2205;
	};
	class ItemKeyGreen2206: ItemKeyGreen {
		keyid = 2206;
	};
	class ItemKeyGreen2207: ItemKeyGreen {
		keyid = 2207;
	};
	class ItemKeyGreen2208: ItemKeyGreen {
		keyid = 2208;
	};
	class ItemKeyGreen2209: ItemKeyGreen {
		keyid = 2209;
	};
	class ItemKeyGreen2210: ItemKeyGreen {
		keyid = 2210;
	};
	class ItemKeyGreen2211: ItemKeyGreen {
		keyid = 2211;
	};
	class ItemKeyGreen2212: ItemKeyGreen {
		keyid = 2212;
	};
	class ItemKeyGreen2213: ItemKeyGreen {
		keyid = 2213;
	};
	class ItemKeyGreen2214: ItemKeyGreen {
		keyid = 2214;
	};
	class ItemKeyGreen2215: ItemKeyGreen {
		keyid = 2215;
	};
	class ItemKeyGreen2216: ItemKeyGreen {
		keyid = 2216;
	};
	class ItemKeyGreen2217: ItemKeyGreen {
		keyid = 2217;
	};
	class ItemKeyGreen2218: ItemKeyGreen {
		keyid = 2218;
	};
	class ItemKeyGreen2219: ItemKeyGreen {
		keyid = 2219;
	};
	class ItemKeyGreen2220: ItemKeyGreen {
		keyid = 2220;
	};
	class ItemKeyGreen2221: ItemKeyGreen {
		keyid = 2221;
	};
	class ItemKeyGreen2222: ItemKeyGreen {
		keyid = 2222;
	};
	class ItemKeyGreen2223: ItemKeyGreen {
		keyid = 2223;
	};
	class ItemKeyGreen2224: ItemKeyGreen {
		keyid = 2224;
	};
	class ItemKeyGreen2225: ItemKeyGreen {
		keyid = 2225;
	};
	class ItemKeyGreen2226: ItemKeyGreen {
		keyid = 2226;
	};
	class ItemKeyGreen2227: ItemKeyGreen {
		keyid = 2227;
	};
	class ItemKeyGreen2228: ItemKeyGreen {
		keyid = 2228;
	};
	class ItemKeyGreen2229: ItemKeyGreen {
		keyid = 2229;
	};
	class ItemKeyGreen2230: ItemKeyGreen {
		keyid = 2230;
	};
	class ItemKeyGreen2231: ItemKeyGreen {
		keyid = 2231;
	};
	class ItemKeyGreen2232: ItemKeyGreen {
		keyid = 2232;
	};
	class ItemKeyGreen2233: ItemKeyGreen {
		keyid = 2233;
	};
	class ItemKeyGreen2234: ItemKeyGreen {
		keyid = 2234;
	};
	class ItemKeyGreen2235: ItemKeyGreen {
		keyid = 2235;
	};
	class ItemKeyGreen2236: ItemKeyGreen {
		keyid = 2236;
	};
	class ItemKeyGreen2237: ItemKeyGreen {
		keyid = 2237;
	};
	class ItemKeyGreen2238: ItemKeyGreen {
		keyid = 2238;
	};
	class ItemKeyGreen2239: ItemKeyGreen {
		keyid = 2239;
	};
	class ItemKeyGreen2240: ItemKeyGreen {
		keyid = 2240;
	};
	class ItemKeyGreen2241: ItemKeyGreen {
		keyid = 2241;
	};
	class ItemKeyGreen2242: ItemKeyGreen {
		keyid = 2242;
	};
	class ItemKeyGreen2243: ItemKeyGreen {
		keyid = 2243;
	};
	class ItemKeyGreen2244: ItemKeyGreen {
		keyid = 2244;
	};
	class ItemKeyGreen2245: ItemKeyGreen {
		keyid = 2245;
	};
	class ItemKeyGreen2246: ItemKeyGreen {
		keyid = 2246;
	};
	class ItemKeyGreen2247: ItemKeyGreen {
		keyid = 2247;
	};
	class ItemKeyGreen2248: ItemKeyGreen {
		keyid = 2248;
	};
	class ItemKeyGreen2249: ItemKeyGreen {
		keyid = 2249;
	};
	class ItemKeyGreen2250: ItemKeyGreen {
		keyid = 2250;
	};
	class ItemKeyGreen2251: ItemKeyGreen {
		keyid = 2251;
	};
	class ItemKeyGreen2252: ItemKeyGreen {
		keyid = 2252;
	};
	class ItemKeyGreen2253: ItemKeyGreen {
		keyid = 2253;
	};
	class ItemKeyGreen2254: ItemKeyGreen {
		keyid = 2254;
	};
	class ItemKeyGreen2255: ItemKeyGreen {
		keyid = 2255;
	};
	class ItemKeyGreen2256: ItemKeyGreen {
		keyid = 2256;
	};
	class ItemKeyGreen2257: ItemKeyGreen {
		keyid = 2257;
	};
	class ItemKeyGreen2258: ItemKeyGreen {
		keyid = 2258;
	};
	class ItemKeyGreen2259: ItemKeyGreen {
		keyid = 2259;
	};
	class ItemKeyGreen2260: ItemKeyGreen {
		keyid = 2260;
	};
	class ItemKeyGreen2261: ItemKeyGreen {
		keyid = 2261;
	};
	class ItemKeyGreen2262: ItemKeyGreen {
		keyid = 2262;
	};
	class ItemKeyGreen2263: ItemKeyGreen {
		keyid = 2263;
	};
	class ItemKeyGreen2264: ItemKeyGreen {
		keyid = 2264;
	};
	class ItemKeyGreen2265: ItemKeyGreen {
		keyid = 2265;
	};
	class ItemKeyGreen2266: ItemKeyGreen {
		keyid = 2266;
	};
	class ItemKeyGreen2267: ItemKeyGreen {
		keyid = 2267;
	};
	class ItemKeyGreen2268: ItemKeyGreen {
		keyid = 2268;
	};
	class ItemKeyGreen2269: ItemKeyGreen {
		keyid = 2269;
	};
	class ItemKeyGreen2270: ItemKeyGreen {
		keyid = 2270;
	};
	class ItemKeyGreen2271: ItemKeyGreen {
		keyid = 2271;
	};
	class ItemKeyGreen2272: ItemKeyGreen {
		keyid = 2272;
	};
	class ItemKeyGreen2273: ItemKeyGreen {
		keyid = 2273;
	};
	class ItemKeyGreen2274: ItemKeyGreen {
		keyid = 2274;
	};
	class ItemKeyGreen2275: ItemKeyGreen {
		keyid = 2275;
	};
	class ItemKeyGreen2276: ItemKeyGreen {
		keyid = 2276;
	};
	class ItemKeyGreen2277: ItemKeyGreen {
		keyid = 2277;
	};
	class ItemKeyGreen2278: ItemKeyGreen {
		keyid = 2278;
	};
	class ItemKeyGreen2279: ItemKeyGreen {
		keyid = 2279;
	};
	class ItemKeyGreen2280: ItemKeyGreen {
		keyid = 2280;
	};
	class ItemKeyGreen2281: ItemKeyGreen {
		keyid = 2281;
	};
	class ItemKeyGreen2282: ItemKeyGreen {
		keyid = 2282;
	};
	class ItemKeyGreen2283: ItemKeyGreen {
		keyid = 2283;
	};
	class ItemKeyGreen2284: ItemKeyGreen {
		keyid = 2284;
	};
	class ItemKeyGreen2285: ItemKeyGreen {
		keyid = 2285;
	};
	class ItemKeyGreen2286: ItemKeyGreen {
		keyid = 2286;
	};
	class ItemKeyGreen2287: ItemKeyGreen {
		keyid = 2287;
	};
	class ItemKeyGreen2288: ItemKeyGreen {
		keyid = 2288;
	};
	class ItemKeyGreen2289: ItemKeyGreen {
		keyid = 2289;
	};
	class ItemKeyGreen2290: ItemKeyGreen {
		keyid = 2290;
	};
	class ItemKeyGreen2291: ItemKeyGreen {
		keyid = 2291;
	};
	class ItemKeyGreen2292: ItemKeyGreen {
		keyid = 2292;
	};
	class ItemKeyGreen2293: ItemKeyGreen {
		keyid = 2293;
	};
	class ItemKeyGreen2294: ItemKeyGreen {
		keyid = 2294;
	};
	class ItemKeyGreen2295: ItemKeyGreen {
		keyid = 2295;
	};
	class ItemKeyGreen2296: ItemKeyGreen {
		keyid = 2296;
	};
	class ItemKeyGreen2297: ItemKeyGreen {
		keyid = 2297;
	};
	class ItemKeyGreen2298: ItemKeyGreen {
		keyid = 2298;
	};
	class ItemKeyGreen2299: ItemKeyGreen {
		keyid = 2299;
	};
	class ItemKeyGreen2300: ItemKeyGreen {
		keyid = 2300;
	};
	class ItemKeyGreen2301: ItemKeyGreen {
		keyid = 2301;
	};
	class ItemKeyGreen2302: ItemKeyGreen {
		keyid = 2302;
	};
	class ItemKeyGreen2303: ItemKeyGreen {
		keyid = 2303;
	};
	class ItemKeyGreen2304: ItemKeyGreen {
		keyid = 2304;
	};
	class ItemKeyGreen2305: ItemKeyGreen {
		keyid = 2305;
	};
	class ItemKeyGreen2306: ItemKeyGreen {
		keyid = 2306;
	};
	class ItemKeyGreen2307: ItemKeyGreen {
		keyid = 2307;
	};
	class ItemKeyGreen2308: ItemKeyGreen {
		keyid = 2308;
	};
	class ItemKeyGreen2309: ItemKeyGreen {
		keyid = 2309;
	};
	class ItemKeyGreen2310: ItemKeyGreen {
		keyid = 2310;
	};
	class ItemKeyGreen2311: ItemKeyGreen {
		keyid = 2311;
	};
	class ItemKeyGreen2312: ItemKeyGreen {
		keyid = 2312;
	};
	class ItemKeyGreen2313: ItemKeyGreen {
		keyid = 2313;
	};
	class ItemKeyGreen2314: ItemKeyGreen {
		keyid = 2314;
	};
	class ItemKeyGreen2315: ItemKeyGreen {
		keyid = 2315;
	};
	class ItemKeyGreen2316: ItemKeyGreen {
		keyid = 2316;
	};
	class ItemKeyGreen2317: ItemKeyGreen {
		keyid = 2317;
	};
	class ItemKeyGreen2318: ItemKeyGreen {
		keyid = 2318;
	};
	class ItemKeyGreen2319: ItemKeyGreen {
		keyid = 2319;
	};
	class ItemKeyGreen2320: ItemKeyGreen {
		keyid = 2320;
	};
	class ItemKeyGreen2321: ItemKeyGreen {
		keyid = 2321;
	};
	class ItemKeyGreen2322: ItemKeyGreen {
		keyid = 2322;
	};
	class ItemKeyGreen2323: ItemKeyGreen {
		keyid = 2323;
	};
	class ItemKeyGreen2324: ItemKeyGreen {
		keyid = 2324;
	};
	class ItemKeyGreen2325: ItemKeyGreen {
		keyid = 2325;
	};
	class ItemKeyGreen2326: ItemKeyGreen {
		keyid = 2326;
	};
	class ItemKeyGreen2327: ItemKeyGreen {
		keyid = 2327;
	};
	class ItemKeyGreen2328: ItemKeyGreen {
		keyid = 2328;
	};
	class ItemKeyGreen2329: ItemKeyGreen {
		keyid = 2329;
	};
	class ItemKeyGreen2330: ItemKeyGreen {
		keyid = 2330;
	};
	class ItemKeyGreen2331: ItemKeyGreen {
		keyid = 2331;
	};
	class ItemKeyGreen2332: ItemKeyGreen {
		keyid = 2332;
	};
	class ItemKeyGreen2333: ItemKeyGreen {
		keyid = 2333;
	};
	class ItemKeyGreen2334: ItemKeyGreen {
		keyid = 2334;
	};
	class ItemKeyGreen2335: ItemKeyGreen {
		keyid = 2335;
	};
	class ItemKeyGreen2336: ItemKeyGreen {
		keyid = 2336;
	};
	class ItemKeyGreen2337: ItemKeyGreen {
		keyid = 2337;
	};
	class ItemKeyGreen2338: ItemKeyGreen {
		keyid = 2338;
	};
	class ItemKeyGreen2339: ItemKeyGreen {
		keyid = 2339;
	};
	class ItemKeyGreen2340: ItemKeyGreen {
		keyid = 2340;
	};
	class ItemKeyGreen2341: ItemKeyGreen {
		keyid = 2341;
	};
	class ItemKeyGreen2342: ItemKeyGreen {
		keyid = 2342;
	};
	class ItemKeyGreen2343: ItemKeyGreen {
		keyid = 2343;
	};
	class ItemKeyGreen2344: ItemKeyGreen {
		keyid = 2344;
	};
	class ItemKeyGreen2345: ItemKeyGreen {
		keyid = 2345;
	};
	class ItemKeyGreen2346: ItemKeyGreen {
		keyid = 2346;
	};
	class ItemKeyGreen2347: ItemKeyGreen {
		keyid = 2347;
	};
	class ItemKeyGreen2348: ItemKeyGreen {
		keyid = 2348;
	};
	class ItemKeyGreen2349: ItemKeyGreen {
		keyid = 2349;
	};
	class ItemKeyGreen2350: ItemKeyGreen {
		keyid = 2350;
	};
	class ItemKeyGreen2351: ItemKeyGreen {
		keyid = 2351;
	};
	class ItemKeyGreen2352: ItemKeyGreen {
		keyid = 2352;
	};
	class ItemKeyGreen2353: ItemKeyGreen {
		keyid = 2353;
	};
	class ItemKeyGreen2354: ItemKeyGreen {
		keyid = 2354;
	};
	class ItemKeyGreen2355: ItemKeyGreen {
		keyid = 2355;
	};
	class ItemKeyGreen2356: ItemKeyGreen {
		keyid = 2356;
	};
	class ItemKeyGreen2357: ItemKeyGreen {
		keyid = 2357;
	};
	class ItemKeyGreen2358: ItemKeyGreen {
		keyid = 2358;
	};
	class ItemKeyGreen2359: ItemKeyGreen {
		keyid = 2359;
	};
	class ItemKeyGreen2360: ItemKeyGreen {
		keyid = 2360;
	};
	class ItemKeyGreen2361: ItemKeyGreen {
		keyid = 2361;
	};
	class ItemKeyGreen2362: ItemKeyGreen {
		keyid = 2362;
	};
	class ItemKeyGreen2363: ItemKeyGreen {
		keyid = 2363;
	};
	class ItemKeyGreen2364: ItemKeyGreen {
		keyid = 2364;
	};
	class ItemKeyGreen2365: ItemKeyGreen {
		keyid = 2365;
	};
	class ItemKeyGreen2366: ItemKeyGreen {
		keyid = 2366;
	};
	class ItemKeyGreen2367: ItemKeyGreen {
		keyid = 2367;
	};
	class ItemKeyGreen2368: ItemKeyGreen {
		keyid = 2368;
	};
	class ItemKeyGreen2369: ItemKeyGreen {
		keyid = 2369;
	};
	class ItemKeyGreen2370: ItemKeyGreen {
		keyid = 2370;
	};
	class ItemKeyGreen2371: ItemKeyGreen {
		keyid = 2371;
	};
	class ItemKeyGreen2372: ItemKeyGreen {
		keyid = 2372;
	};
	class ItemKeyGreen2373: ItemKeyGreen {
		keyid = 2373;
	};
	class ItemKeyGreen2374: ItemKeyGreen {
		keyid = 2374;
	};
	class ItemKeyGreen2375: ItemKeyGreen {
		keyid = 2375;
	};
	class ItemKeyGreen2376: ItemKeyGreen {
		keyid = 2376;
	};
	class ItemKeyGreen2377: ItemKeyGreen {
		keyid = 2377;
	};
	class ItemKeyGreen2378: ItemKeyGreen {
		keyid = 2378;
	};
	class ItemKeyGreen2379: ItemKeyGreen {
		keyid = 2379;
	};
	class ItemKeyGreen2380: ItemKeyGreen {
		keyid = 2380;
	};
	class ItemKeyGreen2381: ItemKeyGreen {
		keyid = 2381;
	};
	class ItemKeyGreen2382: ItemKeyGreen {
		keyid = 2382;
	};
	class ItemKeyGreen2383: ItemKeyGreen {
		keyid = 2383;
	};
	class ItemKeyGreen2384: ItemKeyGreen {
		keyid = 2384;
	};
	class ItemKeyGreen2385: ItemKeyGreen {
		keyid = 2385;
	};
	class ItemKeyGreen2386: ItemKeyGreen {
		keyid = 2386;
	};
	class ItemKeyGreen2387: ItemKeyGreen {
		keyid = 2387;
	};
	class ItemKeyGreen2388: ItemKeyGreen {
		keyid = 2388;
	};
	class ItemKeyGreen2389: ItemKeyGreen {
		keyid = 2389;
	};
	class ItemKeyGreen2390: ItemKeyGreen {
		keyid = 2390;
	};
	class ItemKeyGreen2391: ItemKeyGreen {
		keyid = 2391;
	};
	class ItemKeyGreen2392: ItemKeyGreen {
		keyid = 2392;
	};
	class ItemKeyGreen2393: ItemKeyGreen {
		keyid = 2393;
	};
	class ItemKeyGreen2394: ItemKeyGreen {
		keyid = 2394;
	};
	class ItemKeyGreen2395: ItemKeyGreen {
		keyid = 2395;
	};
	class ItemKeyGreen2396: ItemKeyGreen {
		keyid = 2396;
	};
	class ItemKeyGreen2397: ItemKeyGreen {
		keyid = 2397;
	};
	class ItemKeyGreen2398: ItemKeyGreen {
		keyid = 2398;
	};
	class ItemKeyGreen2399: ItemKeyGreen {
		keyid = 2399;
	};
	class ItemKeyGreen2400: ItemKeyGreen {
		keyid = 2400;
	};
	class ItemKeyGreen2401: ItemKeyGreen {
		keyid = 2401;
	};
	class ItemKeyGreen2402: ItemKeyGreen {
		keyid = 2402;
	};
	class ItemKeyGreen2403: ItemKeyGreen {
		keyid = 2403;
	};
	class ItemKeyGreen2404: ItemKeyGreen {
		keyid = 2404;
	};
	class ItemKeyGreen2405: ItemKeyGreen {
		keyid = 2405;
	};
	class ItemKeyGreen2406: ItemKeyGreen {
		keyid = 2406;
	};
	class ItemKeyGreen2407: ItemKeyGreen {
		keyid = 2407;
	};
	class ItemKeyGreen2408: ItemKeyGreen {
		keyid = 2408;
	};
	class ItemKeyGreen2409: ItemKeyGreen {
		keyid = 2409;
	};
	class ItemKeyGreen2410: ItemKeyGreen {
		keyid = 2410;
	};
	class ItemKeyGreen2411: ItemKeyGreen {
		keyid = 2411;
	};
	class ItemKeyGreen2412: ItemKeyGreen {
		keyid = 2412;
	};
	class ItemKeyGreen2413: ItemKeyGreen {
		keyid = 2413;
	};
	class ItemKeyGreen2414: ItemKeyGreen {
		keyid = 2414;
	};
	class ItemKeyGreen2415: ItemKeyGreen {
		keyid = 2415;
	};
	class ItemKeyGreen2416: ItemKeyGreen {
		keyid = 2416;
	};
	class ItemKeyGreen2417: ItemKeyGreen {
		keyid = 2417;
	};
	class ItemKeyGreen2418: ItemKeyGreen {
		keyid = 2418;
	};
	class ItemKeyGreen2419: ItemKeyGreen {
		keyid = 2419;
	};
	class ItemKeyGreen2420: ItemKeyGreen {
		keyid = 2420;
	};
	class ItemKeyGreen2421: ItemKeyGreen {
		keyid = 2421;
	};
	class ItemKeyGreen2422: ItemKeyGreen {
		keyid = 2422;
	};
	class ItemKeyGreen2423: ItemKeyGreen {
		keyid = 2423;
	};
	class ItemKeyGreen2424: ItemKeyGreen {
		keyid = 2424;
	};
	class ItemKeyGreen2425: ItemKeyGreen {
		keyid = 2425;
	};
	class ItemKeyGreen2426: ItemKeyGreen {
		keyid = 2426;
	};
	class ItemKeyGreen2427: ItemKeyGreen {
		keyid = 2427;
	};
	class ItemKeyGreen2428: ItemKeyGreen {
		keyid = 2428;
	};
	class ItemKeyGreen2429: ItemKeyGreen {
		keyid = 2429;
	};
	class ItemKeyGreen2430: ItemKeyGreen {
		keyid = 2430;
	};
	class ItemKeyGreen2431: ItemKeyGreen {
		keyid = 2431;
	};
	class ItemKeyGreen2432: ItemKeyGreen {
		keyid = 2432;
	};
	class ItemKeyGreen2433: ItemKeyGreen {
		keyid = 2433;
	};
	class ItemKeyGreen2434: ItemKeyGreen {
		keyid = 2434;
	};
	class ItemKeyGreen2435: ItemKeyGreen {
		keyid = 2435;
	};
	class ItemKeyGreen2436: ItemKeyGreen {
		keyid = 2436;
	};
	class ItemKeyGreen2437: ItemKeyGreen {
		keyid = 2437;
	};
	class ItemKeyGreen2438: ItemKeyGreen {
		keyid = 2438;
	};
	class ItemKeyGreen2439: ItemKeyGreen {
		keyid = 2439;
	};
	class ItemKeyGreen2440: ItemKeyGreen {
		keyid = 2440;
	};
	class ItemKeyGreen2441: ItemKeyGreen {
		keyid = 2441;
	};
	class ItemKeyGreen2442: ItemKeyGreen {
		keyid = 2442;
	};
	class ItemKeyGreen2443: ItemKeyGreen {
		keyid = 2443;
	};
	class ItemKeyGreen2444: ItemKeyGreen {
		keyid = 2444;
	};
	class ItemKeyGreen2445: ItemKeyGreen {
		keyid = 2445;
	};
	class ItemKeyGreen2446: ItemKeyGreen {
		keyid = 2446;
	};
	class ItemKeyGreen2447: ItemKeyGreen {
		keyid = 2447;
	};
	class ItemKeyGreen2448: ItemKeyGreen {
		keyid = 2448;
	};
	class ItemKeyGreen2449: ItemKeyGreen {
		keyid = 2449;
	};
	class ItemKeyGreen2450: ItemKeyGreen {
		keyid = 2450;
	};
	class ItemKeyGreen2451: ItemKeyGreen {
		keyid = 2451;
	};
	class ItemKeyGreen2452: ItemKeyGreen {
		keyid = 2452;
	};
	class ItemKeyGreen2453: ItemKeyGreen {
		keyid = 2453;
	};
	class ItemKeyGreen2454: ItemKeyGreen {
		keyid = 2454;
	};
	class ItemKeyGreen2455: ItemKeyGreen {
		keyid = 2455;
	};
	class ItemKeyGreen2456: ItemKeyGreen {
		keyid = 2456;
	};
	class ItemKeyGreen2457: ItemKeyGreen {
		keyid = 2457;
	};
	class ItemKeyGreen2458: ItemKeyGreen {
		keyid = 2458;
	};
	class ItemKeyGreen2459: ItemKeyGreen {
		keyid = 2459;
	};
	class ItemKeyGreen2460: ItemKeyGreen {
		keyid = 2460;
	};
	class ItemKeyGreen2461: ItemKeyGreen {
		keyid = 2461;
	};
	class ItemKeyGreen2462: ItemKeyGreen {
		keyid = 2462;
	};
	class ItemKeyGreen2463: ItemKeyGreen {
		keyid = 2463;
	};
	class ItemKeyGreen2464: ItemKeyGreen {
		keyid = 2464;
	};
	class ItemKeyGreen2465: ItemKeyGreen {
		keyid = 2465;
	};
	class ItemKeyGreen2466: ItemKeyGreen {
		keyid = 2466;
	};
	class ItemKeyGreen2467: ItemKeyGreen {
		keyid = 2467;
	};
	class ItemKeyGreen2468: ItemKeyGreen {
		keyid = 2468;
	};
	class ItemKeyGreen2469: ItemKeyGreen {
		keyid = 2469;
	};
	class ItemKeyGreen2470: ItemKeyGreen {
		keyid = 2470;
	};
	class ItemKeyGreen2471: ItemKeyGreen {
		keyid = 2471;
	};
	class ItemKeyGreen2472: ItemKeyGreen {
		keyid = 2472;
	};
	class ItemKeyGreen2473: ItemKeyGreen {
		keyid = 2473;
	};
	class ItemKeyGreen2474: ItemKeyGreen {
		keyid = 2474;
	};
	class ItemKeyGreen2475: ItemKeyGreen {
		keyid = 2475;
	};
	class ItemKeyGreen2476: ItemKeyGreen {
		keyid = 2476;
	};
	class ItemKeyGreen2477: ItemKeyGreen {
		keyid = 2477;
	};
	class ItemKeyGreen2478: ItemKeyGreen {
		keyid = 2478;
	};
	class ItemKeyGreen2479: ItemKeyGreen {
		keyid = 2479;
	};
	class ItemKeyGreen2480: ItemKeyGreen {
		keyid = 2480;
	};
	class ItemKeyGreen2481: ItemKeyGreen {
		keyid = 2481;
	};
	class ItemKeyGreen2482: ItemKeyGreen {
		keyid = 2482;
	};
	class ItemKeyGreen2483: ItemKeyGreen {
		keyid = 2483;
	};
	class ItemKeyGreen2484: ItemKeyGreen {
		keyid = 2484;
	};
	class ItemKeyGreen2485: ItemKeyGreen {
		keyid = 2485;
	};
	class ItemKeyGreen2486: ItemKeyGreen {
		keyid = 2486;
	};
	class ItemKeyGreen2487: ItemKeyGreen {
		keyid = 2487;
	};
	class ItemKeyGreen2488: ItemKeyGreen {
		keyid = 2488;
	};
	class ItemKeyGreen2489: ItemKeyGreen {
		keyid = 2489;
	};
	class ItemKeyGreen2490: ItemKeyGreen {
		keyid = 2490;
	};
	class ItemKeyGreen2491: ItemKeyGreen {
		keyid = 2491;
	};
	class ItemKeyGreen2492: ItemKeyGreen {
		keyid = 2492;
	};
	class ItemKeyGreen2493: ItemKeyGreen {
		keyid = 2493;
	};
	class ItemKeyGreen2494: ItemKeyGreen {
		keyid = 2494;
	};
	class ItemKeyGreen2495: ItemKeyGreen {
		keyid = 2495;
	};
	class ItemKeyGreen2496: ItemKeyGreen {
		keyid = 2496;
	};
	class ItemKeyGreen2497: ItemKeyGreen {
		keyid = 2497;
	};
	class ItemKeyGreen2498: ItemKeyGreen {
		keyid = 2498;
	};
	class ItemKeyGreen2499: ItemKeyGreen {
		keyid = 2499;
	};
	class ItemKeyGreen2500: ItemKeyGreen {
		keyid = 2500;
	};

	// Red keys
		class ItemKeyRed1: ItemKeyRed {
		keyid = 2501;
	};
	class ItemKeyRed2: ItemKeyRed {
		keyid = 2502;
	};
	class ItemKeyRed3: ItemKeyRed {
		keyid = 2503;
	};
	class ItemKeyRed4: ItemKeyRed {
		keyid = 2504;
	};
	class ItemKeyRed5: ItemKeyRed {
		keyid = 2505;
	};
	class ItemKeyRed6: ItemKeyRed {
		keyid = 2506;
	};
	class ItemKeyRed7: ItemKeyRed {
		keyid = 2507;
	};
	class ItemKeyRed8: ItemKeyRed {
		keyid = 2508;
	};
	class ItemKeyRed9: ItemKeyRed {
		keyid = 2509;
	};
	class ItemKeyRed10: ItemKeyRed {
		keyid = 2510;
	};
	class ItemKeyRed11: ItemKeyRed {
		keyid = 2511;
	};
	class ItemKeyRed12: ItemKeyRed {
		keyid = 2512;
	};
	class ItemKeyRed13: ItemKeyRed {
		keyid = 2513;
	};
	class ItemKeyRed14: ItemKeyRed {
		keyid = 2514;
	};
	class ItemKeyRed15: ItemKeyRed {
		keyid = 2515;
	};
	class ItemKeyRed16: ItemKeyRed {
		keyid = 2516;
	};
	class ItemKeyRed17: ItemKeyRed {
		keyid = 2517;
	};
	class ItemKeyRed18: ItemKeyRed {
		keyid = 2518;
	};
	class ItemKeyRed19: ItemKeyRed {
		keyid = 2519;
	};
	class ItemKeyRed20: ItemKeyRed {
		keyid = 2520;
	};
	class ItemKeyRed21: ItemKeyRed {
		keyid = 2521;
	};
	class ItemKeyRed22: ItemKeyRed {
		keyid = 2522;
	};
	class ItemKeyRed23: ItemKeyRed {
		keyid = 2523;
	};
	class ItemKeyRed24: ItemKeyRed {
		keyid = 2524;
	};
	class ItemKeyRed25: ItemKeyRed {
		keyid = 2525;
	};
	class ItemKeyRed26: ItemKeyRed {
		keyid = 2526;
	};
	class ItemKeyRed27: ItemKeyRed {
		keyid = 2527;
	};
	class ItemKeyRed28: ItemKeyRed {
		keyid = 2528;
	};
	class ItemKeyRed29: ItemKeyRed {
		keyid = 2529;
	};
	class ItemKeyRed30: ItemKeyRed {
		keyid = 2530;
	};
	class ItemKeyRed31: ItemKeyRed {
		keyid = 2531;
	};
	class ItemKeyRed32: ItemKeyRed {
		keyid = 2532;
	};
	class ItemKeyRed33: ItemKeyRed {
		keyid = 2533;
	};
	class ItemKeyRed34: ItemKeyRed {
		keyid = 2534;
	};
	class ItemKeyRed35: ItemKeyRed {
		keyid = 2535;
	};
	class ItemKeyRed36: ItemKeyRed {
		keyid = 2536;
	};
	class ItemKeyRed37: ItemKeyRed {
		keyid = 2537;
	};
	class ItemKeyRed38: ItemKeyRed {
		keyid = 2538;
	};
	class ItemKeyRed39: ItemKeyRed {
		keyid = 2539;
	};
	class ItemKeyRed40: ItemKeyRed {
		keyid = 2540;
	};
	class ItemKeyRed41: ItemKeyRed {
		keyid = 2541;
	};
	class ItemKeyRed42: ItemKeyRed {
		keyid = 2542;
	};
	class ItemKeyRed43: ItemKeyRed {
		keyid = 2543;
	};
	class ItemKeyRed44: ItemKeyRed {
		keyid = 2544;
	};
	class ItemKeyRed45: ItemKeyRed {
		keyid = 2545;
	};
	class ItemKeyRed46: ItemKeyRed {
		keyid = 2546;
	};
	class ItemKeyRed47: ItemKeyRed {
		keyid = 2547;
	};
	class ItemKeyRed48: ItemKeyRed {
		keyid = 2548;
	};
	class ItemKeyRed49: ItemKeyRed {
		keyid = 2549;
	};
	class ItemKeyRed50: ItemKeyRed {
		keyid = 2550;
	};
	class ItemKeyRed51: ItemKeyRed {
		keyid = 2551;
	};
	class ItemKeyRed52: ItemKeyRed {
		keyid = 2552;
	};
	class ItemKeyRed53: ItemKeyRed {
		keyid = 2553;
	};
	class ItemKeyRed54: ItemKeyRed {
		keyid = 2554;
	};
	class ItemKeyRed55: ItemKeyRed {
		keyid = 2555;
	};
	class ItemKeyRed56: ItemKeyRed {
		keyid = 2556;
	};
	class ItemKeyRed57: ItemKeyRed {
		keyid = 2557;
	};
	class ItemKeyRed58: ItemKeyRed {
		keyid = 2558;
	};
	class ItemKeyRed59: ItemKeyRed {
		keyid = 2559;
	};
	class ItemKeyRed60: ItemKeyRed {
		keyid = 2560;
	};
	class ItemKeyRed61: ItemKeyRed {
		keyid = 2561;
	};
	class ItemKeyRed62: ItemKeyRed {
		keyid = 2562;
	};
	class ItemKeyRed63: ItemKeyRed {
		keyid = 2563;
	};
	class ItemKeyRed64: ItemKeyRed {
		keyid = 2564;
	};
	class ItemKeyRed65: ItemKeyRed {
		keyid = 2565;
	};
	class ItemKeyRed66: ItemKeyRed {
		keyid = 2566;
	};
	class ItemKeyRed67: ItemKeyRed {
		keyid = 2567;
	};
	class ItemKeyRed68: ItemKeyRed {
		keyid = 2568;
	};
	class ItemKeyRed69: ItemKeyRed {
		keyid = 2569;
	};
	class ItemKeyRed70: ItemKeyRed {
		keyid = 2570;
	};
	class ItemKeyRed71: ItemKeyRed {
		keyid = 2571;
	};
	class ItemKeyRed72: ItemKeyRed {
		keyid = 2572;
	};
	class ItemKeyRed73: ItemKeyRed {
		keyid = 2573;
	};
	class ItemKeyRed74: ItemKeyRed {
		keyid = 2574;
	};
	class ItemKeyRed75: ItemKeyRed {
		keyid = 2575;
	};
	class ItemKeyRed76: ItemKeyRed {
		keyid = 2576;
	};
	class ItemKeyRed77: ItemKeyRed {
		keyid = 2577;
	};
	class ItemKeyRed78: ItemKeyRed {
		keyid = 2578;
	};
	class ItemKeyRed79: ItemKeyRed {
		keyid = 2579;
	};
	class ItemKeyRed80: ItemKeyRed {
		keyid = 2580;
	};
	class ItemKeyRed81: ItemKeyRed {
		keyid = 2581;
	};
	class ItemKeyRed82: ItemKeyRed {
		keyid = 2582;
	};
	class ItemKeyRed83: ItemKeyRed {
		keyid = 2583;
	};
	class ItemKeyRed84: ItemKeyRed {
		keyid = 2584;
	};
	class ItemKeyRed85: ItemKeyRed {
		keyid = 2585;
	};
	class ItemKeyRed86: ItemKeyRed {
		keyid = 2586;
	};
	class ItemKeyRed87: ItemKeyRed {
		keyid = 2587;
	};
	class ItemKeyRed88: ItemKeyRed {
		keyid = 2588;
	};
	class ItemKeyRed89: ItemKeyRed {
		keyid = 2589;
	};
	class ItemKeyRed90: ItemKeyRed {
		keyid = 2590;
	};
	class ItemKeyRed91: ItemKeyRed {
		keyid = 2591;
	};
	class ItemKeyRed92: ItemKeyRed {
		keyid = 2592;
	};
	class ItemKeyRed93: ItemKeyRed {
		keyid = 2593;
	};
	class ItemKeyRed94: ItemKeyRed {
		keyid = 2594;
	};
	class ItemKeyRed95: ItemKeyRed {
		keyid = 2595;
	};
	class ItemKeyRed96: ItemKeyRed {
		keyid = 2596;
	};
	class ItemKeyRed97: ItemKeyRed {
		keyid = 2597;
	};
	class ItemKeyRed98: ItemKeyRed {
		keyid = 2598;
	};
	class ItemKeyRed99: ItemKeyRed {
		keyid = 2599;
	};
	class ItemKeyRed100: ItemKeyRed {
		keyid = 2600;
	};
	class ItemKeyRed101: ItemKeyRed {
		keyid = 2601;
	};
	class ItemKeyRed102: ItemKeyRed {
		keyid = 2602;
	};
	class ItemKeyRed103: ItemKeyRed {
		keyid = 2603;
	};
	class ItemKeyRed104: ItemKeyRed {
		keyid = 2604;
	};
	class ItemKeyRed105: ItemKeyRed {
		keyid = 2605;
	};
	class ItemKeyRed106: ItemKeyRed {
		keyid = 2606;
	};
	class ItemKeyRed107: ItemKeyRed {
		keyid = 2607;
	};
	class ItemKeyRed108: ItemKeyRed {
		keyid = 2608;
	};
	class ItemKeyRed109: ItemKeyRed {
		keyid = 2609;
	};
	class ItemKeyRed110: ItemKeyRed {
		keyid = 2610;
	};
	class ItemKeyRed111: ItemKeyRed {
		keyid = 2611;
	};
	class ItemKeyRed112: ItemKeyRed {
		keyid = 2612;
	};
	class ItemKeyRed113: ItemKeyRed {
		keyid = 2613;
	};
	class ItemKeyRed114: ItemKeyRed {
		keyid = 2614;
	};
	class ItemKeyRed115: ItemKeyRed {
		keyid = 2615;
	};
	class ItemKeyRed116: ItemKeyRed {
		keyid = 2616;
	};
	class ItemKeyRed117: ItemKeyRed {
		keyid = 2617;
	};
	class ItemKeyRed118: ItemKeyRed {
		keyid = 2618;
	};
	class ItemKeyRed119: ItemKeyRed {
		keyid = 2619;
	};
	class ItemKeyRed120: ItemKeyRed {
		keyid = 2620;
	};
	class ItemKeyRed121: ItemKeyRed {
		keyid = 2621;
	};
	class ItemKeyRed122: ItemKeyRed {
		keyid = 2622;
	};
	class ItemKeyRed123: ItemKeyRed {
		keyid = 2623;
	};
	class ItemKeyRed124: ItemKeyRed {
		keyid = 2624;
	};
	class ItemKeyRed125: ItemKeyRed {
		keyid = 2625;
	};
	class ItemKeyRed126: ItemKeyRed {
		keyid = 2626;
	};
	class ItemKeyRed127: ItemKeyRed {
		keyid = 2627;
	};
	class ItemKeyRed128: ItemKeyRed {
		keyid = 2628;
	};
	class ItemKeyRed129: ItemKeyRed {
		keyid = 2629;
	};
	class ItemKeyRed130: ItemKeyRed {
		keyid = 2630;
	};
	class ItemKeyRed131: ItemKeyRed {
		keyid = 2631;
	};
	class ItemKeyRed132: ItemKeyRed {
		keyid = 2632;
	};
	class ItemKeyRed133: ItemKeyRed {
		keyid = 2633;
	};
	class ItemKeyRed134: ItemKeyRed {
		keyid = 2634;
	};
	class ItemKeyRed135: ItemKeyRed {
		keyid = 2635;
	};
	class ItemKeyRed136: ItemKeyRed {
		keyid = 2636;
	};
	class ItemKeyRed137: ItemKeyRed {
		keyid = 2637;
	};
	class ItemKeyRed138: ItemKeyRed {
		keyid = 2638;
	};
	class ItemKeyRed139: ItemKeyRed {
		keyid = 2639;
	};
	class ItemKeyRed140: ItemKeyRed {
		keyid = 2640;
	};
	class ItemKeyRed141: ItemKeyRed {
		keyid = 2641;
	};
	class ItemKeyRed142: ItemKeyRed {
		keyid = 2642;
	};
	class ItemKeyRed143: ItemKeyRed {
		keyid = 2643;
	};
	class ItemKeyRed144: ItemKeyRed {
		keyid = 2644;
	};
	class ItemKeyRed145: ItemKeyRed {
		keyid = 2645;
	};
	class ItemKeyRed146: ItemKeyRed {
		keyid = 2646;
	};
	class ItemKeyRed147: ItemKeyRed {
		keyid = 2647;
	};
	class ItemKeyRed148: ItemKeyRed {
		keyid = 2648;
	};
	class ItemKeyRed149: ItemKeyRed {
		keyid = 2649;
	};
	class ItemKeyRed150: ItemKeyRed {
		keyid = 2650;
	};
	class ItemKeyRed151: ItemKeyRed {
		keyid = 2651;
	};
	class ItemKeyRed152: ItemKeyRed {
		keyid = 2652;
	};
	class ItemKeyRed153: ItemKeyRed {
		keyid = 2653;
	};
	class ItemKeyRed154: ItemKeyRed {
		keyid = 2654;
	};
	class ItemKeyRed155: ItemKeyRed {
		keyid = 2655;
	};
	class ItemKeyRed156: ItemKeyRed {
		keyid = 2656;
	};
	class ItemKeyRed157: ItemKeyRed {
		keyid = 2657;
	};
	class ItemKeyRed158: ItemKeyRed {
		keyid = 2658;
	};
	class ItemKeyRed159: ItemKeyRed {
		keyid = 2659;
	};
	class ItemKeyRed160: ItemKeyRed {
		keyid = 2660;
	};
	class ItemKeyRed161: ItemKeyRed {
		keyid = 2661;
	};
	class ItemKeyRed162: ItemKeyRed {
		keyid = 2662;
	};
	class ItemKeyRed163: ItemKeyRed {
		keyid = 2663;
	};
	class ItemKeyRed164: ItemKeyRed {
		keyid = 2664;
	};
	class ItemKeyRed165: ItemKeyRed {
		keyid = 2665;
	};
	class ItemKeyRed166: ItemKeyRed {
		keyid = 2666;
	};
	class ItemKeyRed167: ItemKeyRed {
		keyid = 2667;
	};
	class ItemKeyRed168: ItemKeyRed {
		keyid = 2668;
	};
	class ItemKeyRed169: ItemKeyRed {
		keyid = 2669;
	};
	class ItemKeyRed170: ItemKeyRed {
		keyid = 2670;
	};
	class ItemKeyRed171: ItemKeyRed {
		keyid = 2671;
	};
	class ItemKeyRed172: ItemKeyRed {
		keyid = 2672;
	};
	class ItemKeyRed173: ItemKeyRed {
		keyid = 2673;
	};
	class ItemKeyRed174: ItemKeyRed {
		keyid = 2674;
	};
	class ItemKeyRed175: ItemKeyRed {
		keyid = 2675;
	};
	class ItemKeyRed176: ItemKeyRed {
		keyid = 2676;
	};
	class ItemKeyRed177: ItemKeyRed {
		keyid = 2677;
	};
	class ItemKeyRed178: ItemKeyRed {
		keyid = 2678;
	};
	class ItemKeyRed179: ItemKeyRed {
		keyid = 2679;
	};
	class ItemKeyRed180: ItemKeyRed {
		keyid = 2680;
	};
	class ItemKeyRed181: ItemKeyRed {
		keyid = 2681;
	};
	class ItemKeyRed182: ItemKeyRed {
		keyid = 2682;
	};
	class ItemKeyRed183: ItemKeyRed {
		keyid = 2683;
	};
	class ItemKeyRed184: ItemKeyRed {
		keyid = 2684;
	};
	class ItemKeyRed185: ItemKeyRed {
		keyid = 2685;
	};
	class ItemKeyRed186: ItemKeyRed {
		keyid = 2686;
	};
	class ItemKeyRed187: ItemKeyRed {
		keyid = 2687;
	};
	class ItemKeyRed188: ItemKeyRed {
		keyid = 2688;
	};
	class ItemKeyRed189: ItemKeyRed {
		keyid = 2689;
	};
	class ItemKeyRed190: ItemKeyRed {
		keyid = 2690;
	};
	class ItemKeyRed191: ItemKeyRed {
		keyid = 2691;
	};
	class ItemKeyRed192: ItemKeyRed {
		keyid = 2692;
	};
	class ItemKeyRed193: ItemKeyRed {
		keyid = 2693;
	};
	class ItemKeyRed194: ItemKeyRed {
		keyid = 2694;
	};
	class ItemKeyRed195: ItemKeyRed {
		keyid = 2695;
	};
	class ItemKeyRed196: ItemKeyRed {
		keyid = 2696;
	};
	class ItemKeyRed197: ItemKeyRed {
		keyid = 2697;
	};
	class ItemKeyRed198: ItemKeyRed {
		keyid = 2698;
	};
	class ItemKeyRed199: ItemKeyRed {
		keyid = 2699;
	};
	class ItemKeyRed200: ItemKeyRed {
		keyid = 2700;
	};
	class ItemKeyRed201: ItemKeyRed {
		keyid = 2701;
	};
	class ItemKeyRed202: ItemKeyRed {
		keyid = 2702;
	};
	class ItemKeyRed203: ItemKeyRed {
		keyid = 2703;
	};
	class ItemKeyRed204: ItemKeyRed {
		keyid = 2704;
	};
	class ItemKeyRed205: ItemKeyRed {
		keyid = 2705;
	};
	class ItemKeyRed206: ItemKeyRed {
		keyid = 2706;
	};
	class ItemKeyRed207: ItemKeyRed {
		keyid = 2707;
	};
	class ItemKeyRed208: ItemKeyRed {
		keyid = 2708;
	};
	class ItemKeyRed209: ItemKeyRed {
		keyid = 2709;
	};
	class ItemKeyRed210: ItemKeyRed {
		keyid = 2710;
	};
	class ItemKeyRed211: ItemKeyRed {
		keyid = 2711;
	};
	class ItemKeyRed212: ItemKeyRed {
		keyid = 2712;
	};
	class ItemKeyRed213: ItemKeyRed {
		keyid = 2713;
	};
	class ItemKeyRed214: ItemKeyRed {
		keyid = 2714;
	};
	class ItemKeyRed215: ItemKeyRed {
		keyid = 2715;
	};
	class ItemKeyRed216: ItemKeyRed {
		keyid = 2716;
	};
	class ItemKeyRed217: ItemKeyRed {
		keyid = 2717;
	};
	class ItemKeyRed218: ItemKeyRed {
		keyid = 2718;
	};
	class ItemKeyRed219: ItemKeyRed {
		keyid = 2719;
	};
	class ItemKeyRed220: ItemKeyRed {
		keyid = 2720;
	};
	class ItemKeyRed221: ItemKeyRed {
		keyid = 2721;
	};
	class ItemKeyRed222: ItemKeyRed {
		keyid = 2722;
	};
	class ItemKeyRed223: ItemKeyRed {
		keyid = 2723;
	};
	class ItemKeyRed224: ItemKeyRed {
		keyid = 2724;
	};
	class ItemKeyRed225: ItemKeyRed {
		keyid = 2725;
	};
	class ItemKeyRed226: ItemKeyRed {
		keyid = 2726;
	};
	class ItemKeyRed227: ItemKeyRed {
		keyid = 2727;
	};
	class ItemKeyRed228: ItemKeyRed {
		keyid = 2728;
	};
	class ItemKeyRed229: ItemKeyRed {
		keyid = 2729;
	};
	class ItemKeyRed230: ItemKeyRed {
		keyid = 2730;
	};
	class ItemKeyRed231: ItemKeyRed {
		keyid = 2731;
	};
	class ItemKeyRed232: ItemKeyRed {
		keyid = 2732;
	};
	class ItemKeyRed233: ItemKeyRed {
		keyid = 2733;
	};
	class ItemKeyRed234: ItemKeyRed {
		keyid = 2734;
	};
	class ItemKeyRed235: ItemKeyRed {
		keyid = 2735;
	};
	class ItemKeyRed236: ItemKeyRed {
		keyid = 2736;
	};
	class ItemKeyRed237: ItemKeyRed {
		keyid = 2737;
	};
	class ItemKeyRed238: ItemKeyRed {
		keyid = 2738;
	};
	class ItemKeyRed239: ItemKeyRed {
		keyid = 2739;
	};
	class ItemKeyRed240: ItemKeyRed {
		keyid = 2740;
	};
	class ItemKeyRed241: ItemKeyRed {
		keyid = 2741;
	};
	class ItemKeyRed242: ItemKeyRed {
		keyid = 2742;
	};
	class ItemKeyRed243: ItemKeyRed {
		keyid = 2743;
	};
	class ItemKeyRed244: ItemKeyRed {
		keyid = 2744;
	};
	class ItemKeyRed245: ItemKeyRed {
		keyid = 2745;
	};
	class ItemKeyRed246: ItemKeyRed {
		keyid = 2746;
	};
	class ItemKeyRed247: ItemKeyRed {
		keyid = 2747;
	};
	class ItemKeyRed248: ItemKeyRed {
		keyid = 2748;
	};
	class ItemKeyRed249: ItemKeyRed {
		keyid = 2749;
	};
	class ItemKeyRed250: ItemKeyRed {
		keyid = 2750;
	};
	class ItemKeyRed251: ItemKeyRed {
		keyid = 2751;
	};
	class ItemKeyRed252: ItemKeyRed {
		keyid = 2752;
	};
	class ItemKeyRed253: ItemKeyRed {
		keyid = 2753;
	};
	class ItemKeyRed254: ItemKeyRed {
		keyid = 2754;
	};
	class ItemKeyRed255: ItemKeyRed {
		keyid = 2755;
	};
	class ItemKeyRed256: ItemKeyRed {
		keyid = 2756;
	};
	class ItemKeyRed257: ItemKeyRed {
		keyid = 2757;
	};
	class ItemKeyRed258: ItemKeyRed {
		keyid = 2758;
	};
	class ItemKeyRed259: ItemKeyRed {
		keyid = 2759;
	};
	class ItemKeyRed260: ItemKeyRed {
		keyid = 2760;
	};
	class ItemKeyRed261: ItemKeyRed {
		keyid = 2761;
	};
	class ItemKeyRed262: ItemKeyRed {
		keyid = 2762;
	};
	class ItemKeyRed263: ItemKeyRed {
		keyid = 2763;
	};
	class ItemKeyRed264: ItemKeyRed {
		keyid = 2764;
	};
	class ItemKeyRed265: ItemKeyRed {
		keyid = 2765;
	};
	class ItemKeyRed266: ItemKeyRed {
		keyid = 2766;
	};
	class ItemKeyRed267: ItemKeyRed {
		keyid = 2767;
	};
	class ItemKeyRed268: ItemKeyRed {
		keyid = 2768;
	};
	class ItemKeyRed269: ItemKeyRed {
		keyid = 2769;
	};
	class ItemKeyRed270: ItemKeyRed {
		keyid = 2770;
	};
	class ItemKeyRed271: ItemKeyRed {
		keyid = 2771;
	};
	class ItemKeyRed272: ItemKeyRed {
		keyid = 2772;
	};
	class ItemKeyRed273: ItemKeyRed {
		keyid = 2773;
	};
	class ItemKeyRed274: ItemKeyRed {
		keyid = 2774;
	};
	class ItemKeyRed275: ItemKeyRed {
		keyid = 2775;
	};
	class ItemKeyRed276: ItemKeyRed {
		keyid = 2776;
	};
	class ItemKeyRed277: ItemKeyRed {
		keyid = 2777;
	};
	class ItemKeyRed278: ItemKeyRed {
		keyid = 2778;
	};
	class ItemKeyRed279: ItemKeyRed {
		keyid = 2779;
	};
	class ItemKeyRed280: ItemKeyRed {
		keyid = 2780;
	};
	class ItemKeyRed281: ItemKeyRed {
		keyid = 2781;
	};
	class ItemKeyRed282: ItemKeyRed {
		keyid = 2782;
	};
	class ItemKeyRed283: ItemKeyRed {
		keyid = 2783;
	};
	class ItemKeyRed284: ItemKeyRed {
		keyid = 2784;
	};
	class ItemKeyRed285: ItemKeyRed {
		keyid = 2785;
	};
	class ItemKeyRed286: ItemKeyRed {
		keyid = 2786;
	};
	class ItemKeyRed287: ItemKeyRed {
		keyid = 2787;
	};
	class ItemKeyRed288: ItemKeyRed {
		keyid = 2788;
	};
	class ItemKeyRed289: ItemKeyRed {
		keyid = 2789;
	};
	class ItemKeyRed290: ItemKeyRed {
		keyid = 2790;
	};
	class ItemKeyRed291: ItemKeyRed {
		keyid = 2791;
	};
	class ItemKeyRed292: ItemKeyRed {
		keyid = 2792;
	};
	class ItemKeyRed293: ItemKeyRed {
		keyid = 2793;
	};
	class ItemKeyRed294: ItemKeyRed {
		keyid = 2794;
	};
	class ItemKeyRed295: ItemKeyRed {
		keyid = 2795;
	};
	class ItemKeyRed296: ItemKeyRed {
		keyid = 2796;
	};
	class ItemKeyRed297: ItemKeyRed {
		keyid = 2797;
	};
	class ItemKeyRed298: ItemKeyRed {
		keyid = 2798;
	};
	class ItemKeyRed299: ItemKeyRed {
		keyid = 2799;
	};
	class ItemKeyRed300: ItemKeyRed {
		keyid = 2800;
	};
	class ItemKeyRed301: ItemKeyRed {
		keyid = 2801;
	};
	class ItemKeyRed302: ItemKeyRed {
		keyid = 2802;
	};
	class ItemKeyRed303: ItemKeyRed {
		keyid = 2803;
	};
	class ItemKeyRed304: ItemKeyRed {
		keyid = 2804;
	};
	class ItemKeyRed305: ItemKeyRed {
		keyid = 2805;
	};
	class ItemKeyRed306: ItemKeyRed {
		keyid = 2806;
	};
	class ItemKeyRed307: ItemKeyRed {
		keyid = 2807;
	};
	class ItemKeyRed308: ItemKeyRed {
		keyid = 2808;
	};
	class ItemKeyRed309: ItemKeyRed {
		keyid = 2809;
	};
	class ItemKeyRed310: ItemKeyRed {
		keyid = 2810;
	};
	class ItemKeyRed311: ItemKeyRed {
		keyid = 2811;
	};
	class ItemKeyRed312: ItemKeyRed {
		keyid = 2812;
	};
	class ItemKeyRed313: ItemKeyRed {
		keyid = 2813;
	};
	class ItemKeyRed314: ItemKeyRed {
		keyid = 2814;
	};
	class ItemKeyRed315: ItemKeyRed {
		keyid = 2815;
	};
	class ItemKeyRed316: ItemKeyRed {
		keyid = 2816;
	};
	class ItemKeyRed317: ItemKeyRed {
		keyid = 2817;
	};
	class ItemKeyRed318: ItemKeyRed {
		keyid = 2818;
	};
	class ItemKeyRed319: ItemKeyRed {
		keyid = 2819;
	};
	class ItemKeyRed320: ItemKeyRed {
		keyid = 2820;
	};
	class ItemKeyRed321: ItemKeyRed {
		keyid = 2821;
	};
	class ItemKeyRed322: ItemKeyRed {
		keyid = 2822;
	};
	class ItemKeyRed323: ItemKeyRed {
		keyid = 2823;
	};
	class ItemKeyRed324: ItemKeyRed {
		keyid = 2824;
	};
	class ItemKeyRed325: ItemKeyRed {
		keyid = 2825;
	};
	class ItemKeyRed326: ItemKeyRed {
		keyid = 2826;
	};
	class ItemKeyRed327: ItemKeyRed {
		keyid = 2827;
	};
	class ItemKeyRed328: ItemKeyRed {
		keyid = 2828;
	};
	class ItemKeyRed329: ItemKeyRed {
		keyid = 2829;
	};
	class ItemKeyRed330: ItemKeyRed {
		keyid = 2830;
	};
	class ItemKeyRed331: ItemKeyRed {
		keyid = 2831;
	};
	class ItemKeyRed332: ItemKeyRed {
		keyid = 2832;
	};
	class ItemKeyRed333: ItemKeyRed {
		keyid = 2833;
	};
	class ItemKeyRed334: ItemKeyRed {
		keyid = 2834;
	};
	class ItemKeyRed335: ItemKeyRed {
		keyid = 2835;
	};
	class ItemKeyRed336: ItemKeyRed {
		keyid = 2836;
	};
	class ItemKeyRed337: ItemKeyRed {
		keyid = 2837;
	};
	class ItemKeyRed338: ItemKeyRed {
		keyid = 2838;
	};
	class ItemKeyRed339: ItemKeyRed {
		keyid = 2839;
	};
	class ItemKeyRed340: ItemKeyRed {
		keyid = 2840;
	};
	class ItemKeyRed341: ItemKeyRed {
		keyid = 2841;
	};
	class ItemKeyRed342: ItemKeyRed {
		keyid = 2842;
	};
	class ItemKeyRed343: ItemKeyRed {
		keyid = 2843;
	};
	class ItemKeyRed344: ItemKeyRed {
		keyid = 2844;
	};
	class ItemKeyRed345: ItemKeyRed {
		keyid = 2845;
	};
	class ItemKeyRed346: ItemKeyRed {
		keyid = 2846;
	};
	class ItemKeyRed347: ItemKeyRed {
		keyid = 2847;
	};
	class ItemKeyRed348: ItemKeyRed {
		keyid = 2848;
	};
	class ItemKeyRed349: ItemKeyRed {
		keyid = 2849;
	};
	class ItemKeyRed350: ItemKeyRed {
		keyid = 2850;
	};
	class ItemKeyRed351: ItemKeyRed {
		keyid = 2851;
	};
	class ItemKeyRed352: ItemKeyRed {
		keyid = 2852;
	};
	class ItemKeyRed353: ItemKeyRed {
		keyid = 2853;
	};
	class ItemKeyRed354: ItemKeyRed {
		keyid = 2854;
	};
	class ItemKeyRed355: ItemKeyRed {
		keyid = 2855;
	};
	class ItemKeyRed356: ItemKeyRed {
		keyid = 2856;
	};
	class ItemKeyRed357: ItemKeyRed {
		keyid = 2857;
	};
	class ItemKeyRed358: ItemKeyRed {
		keyid = 2858;
	};
	class ItemKeyRed359: ItemKeyRed {
		keyid = 2859;
	};
	class ItemKeyRed360: ItemKeyRed {
		keyid = 2860;
	};
	class ItemKeyRed361: ItemKeyRed {
		keyid = 2861;
	};
	class ItemKeyRed362: ItemKeyRed {
		keyid = 2862;
	};
	class ItemKeyRed363: ItemKeyRed {
		keyid = 2863;
	};
	class ItemKeyRed364: ItemKeyRed {
		keyid = 2864;
	};
	class ItemKeyRed365: ItemKeyRed {
		keyid = 2865;
	};
	class ItemKeyRed366: ItemKeyRed {
		keyid = 2866;
	};
	class ItemKeyRed367: ItemKeyRed {
		keyid = 2867;
	};
	class ItemKeyRed368: ItemKeyRed {
		keyid = 2868;
	};
	class ItemKeyRed369: ItemKeyRed {
		keyid = 2869;
	};
	class ItemKeyRed370: ItemKeyRed {
		keyid = 2870;
	};
	class ItemKeyRed371: ItemKeyRed {
		keyid = 2871;
	};
	class ItemKeyRed372: ItemKeyRed {
		keyid = 2872;
	};
	class ItemKeyRed373: ItemKeyRed {
		keyid = 2873;
	};
	class ItemKeyRed374: ItemKeyRed {
		keyid = 2874;
	};
	class ItemKeyRed375: ItemKeyRed {
		keyid = 2875;
	};
	class ItemKeyRed376: ItemKeyRed {
		keyid = 2876;
	};
	class ItemKeyRed377: ItemKeyRed {
		keyid = 2877;
	};
	class ItemKeyRed378: ItemKeyRed {
		keyid = 2878;
	};
	class ItemKeyRed379: ItemKeyRed {
		keyid = 2879;
	};
	class ItemKeyRed380: ItemKeyRed {
		keyid = 2880;
	};
	class ItemKeyRed381: ItemKeyRed {
		keyid = 2881;
	};
	class ItemKeyRed382: ItemKeyRed {
		keyid = 2882;
	};
	class ItemKeyRed383: ItemKeyRed {
		keyid = 2883;
	};
	class ItemKeyRed384: ItemKeyRed {
		keyid = 2884;
	};
	class ItemKeyRed385: ItemKeyRed {
		keyid = 2885;
	};
	class ItemKeyRed386: ItemKeyRed {
		keyid = 2886;
	};
	class ItemKeyRed387: ItemKeyRed {
		keyid = 2887;
	};
	class ItemKeyRed388: ItemKeyRed {
		keyid = 2888;
	};
	class ItemKeyRed389: ItemKeyRed {
		keyid = 2889;
	};
	class ItemKeyRed390: ItemKeyRed {
		keyid = 2890;
	};
	class ItemKeyRed391: ItemKeyRed {
		keyid = 2891;
	};
	class ItemKeyRed392: ItemKeyRed {
		keyid = 2892;
	};
	class ItemKeyRed393: ItemKeyRed {
		keyid = 2893;
	};
	class ItemKeyRed394: ItemKeyRed {
		keyid = 2894;
	};
	class ItemKeyRed395: ItemKeyRed {
		keyid = 2895;
	};
	class ItemKeyRed396: ItemKeyRed {
		keyid = 2896;
	};
	class ItemKeyRed397: ItemKeyRed {
		keyid = 2897;
	};
	class ItemKeyRed398: ItemKeyRed {
		keyid = 2898;
	};
	class ItemKeyRed399: ItemKeyRed {
		keyid = 2899;
	};
	class ItemKeyRed400: ItemKeyRed {
		keyid = 2900;
	};
	class ItemKeyRed401: ItemKeyRed {
		keyid = 2901;
	};
	class ItemKeyRed402: ItemKeyRed {
		keyid = 2902;
	};
	class ItemKeyRed403: ItemKeyRed {
		keyid = 2903;
	};
	class ItemKeyRed404: ItemKeyRed {
		keyid = 2904;
	};
	class ItemKeyRed405: ItemKeyRed {
		keyid = 2905;
	};
	class ItemKeyRed406: ItemKeyRed {
		keyid = 2906;
	};
	class ItemKeyRed407: ItemKeyRed {
		keyid = 2907;
	};
	class ItemKeyRed408: ItemKeyRed {
		keyid = 2908;
	};
	class ItemKeyRed409: ItemKeyRed {
		keyid = 2909;
	};
	class ItemKeyRed410: ItemKeyRed {
		keyid = 2910;
	};
	class ItemKeyRed411: ItemKeyRed {
		keyid = 2911;
	};
	class ItemKeyRed412: ItemKeyRed {
		keyid = 2912;
	};
	class ItemKeyRed413: ItemKeyRed {
		keyid = 2913;
	};
	class ItemKeyRed414: ItemKeyRed {
		keyid = 2914;
	};
	class ItemKeyRed415: ItemKeyRed {
		keyid = 2915;
	};
	class ItemKeyRed416: ItemKeyRed {
		keyid = 2916;
	};
	class ItemKeyRed417: ItemKeyRed {
		keyid = 2917;
	};
	class ItemKeyRed418: ItemKeyRed {
		keyid = 2918;
	};
	class ItemKeyRed419: ItemKeyRed {
		keyid = 2919;
	};
	class ItemKeyRed420: ItemKeyRed {
		keyid = 2920;
	};
	class ItemKeyRed421: ItemKeyRed {
		keyid = 2921;
	};
	class ItemKeyRed422: ItemKeyRed {
		keyid = 2922;
	};
	class ItemKeyRed423: ItemKeyRed {
		keyid = 2923;
	};
	class ItemKeyRed424: ItemKeyRed {
		keyid = 2924;
	};
	class ItemKeyRed425: ItemKeyRed {
		keyid = 2925;
	};
	class ItemKeyRed426: ItemKeyRed {
		keyid = 2926;
	};
	class ItemKeyRed427: ItemKeyRed {
		keyid = 2927;
	};
	class ItemKeyRed428: ItemKeyRed {
		keyid = 2928;
	};
	class ItemKeyRed429: ItemKeyRed {
		keyid = 2929;
	};
	class ItemKeyRed430: ItemKeyRed {
		keyid = 2930;
	};
	class ItemKeyRed431: ItemKeyRed {
		keyid = 2931;
	};
	class ItemKeyRed432: ItemKeyRed {
		keyid = 2932;
	};
	class ItemKeyRed433: ItemKeyRed {
		keyid = 2933;
	};
	class ItemKeyRed434: ItemKeyRed {
		keyid = 2934;
	};
	class ItemKeyRed435: ItemKeyRed {
		keyid = 2935;
	};
	class ItemKeyRed436: ItemKeyRed {
		keyid = 2936;
	};
	class ItemKeyRed437: ItemKeyRed {
		keyid = 2937;
	};
	class ItemKeyRed438: ItemKeyRed {
		keyid = 2938;
	};
	class ItemKeyRed439: ItemKeyRed {
		keyid = 2939;
	};
	class ItemKeyRed440: ItemKeyRed {
		keyid = 2940;
	};
	class ItemKeyRed441: ItemKeyRed {
		keyid = 2941;
	};
	class ItemKeyRed442: ItemKeyRed {
		keyid = 2942;
	};
	class ItemKeyRed443: ItemKeyRed {
		keyid = 2943;
	};
	class ItemKeyRed444: ItemKeyRed {
		keyid = 2944;
	};
	class ItemKeyRed445: ItemKeyRed {
		keyid = 2945;
	};
	class ItemKeyRed446: ItemKeyRed {
		keyid = 2946;
	};
	class ItemKeyRed447: ItemKeyRed {
		keyid = 2947;
	};
	class ItemKeyRed448: ItemKeyRed {
		keyid = 2948;
	};
	class ItemKeyRed449: ItemKeyRed {
		keyid = 2949;
	};
	class ItemKeyRed450: ItemKeyRed {
		keyid = 2950;
	};
	class ItemKeyRed451: ItemKeyRed {
		keyid = 2951;
	};
	class ItemKeyRed452: ItemKeyRed {
		keyid = 2952;
	};
	class ItemKeyRed453: ItemKeyRed {
		keyid = 2953;
	};
	class ItemKeyRed454: ItemKeyRed {
		keyid = 2954;
	};
	class ItemKeyRed455: ItemKeyRed {
		keyid = 2955;
	};
	class ItemKeyRed456: ItemKeyRed {
		keyid = 2956;
	};
	class ItemKeyRed457: ItemKeyRed {
		keyid = 2957;
	};
	class ItemKeyRed458: ItemKeyRed {
		keyid = 2958;
	};
	class ItemKeyRed459: ItemKeyRed {
		keyid = 2959;
	};
	class ItemKeyRed460: ItemKeyRed {
		keyid = 2960;
	};
	class ItemKeyRed461: ItemKeyRed {
		keyid = 2961;
	};
	class ItemKeyRed462: ItemKeyRed {
		keyid = 2962;
	};
	class ItemKeyRed463: ItemKeyRed {
		keyid = 2963;
	};
	class ItemKeyRed464: ItemKeyRed {
		keyid = 2964;
	};
	class ItemKeyRed465: ItemKeyRed {
		keyid = 2965;
	};
	class ItemKeyRed466: ItemKeyRed {
		keyid = 2966;
	};
	class ItemKeyRed467: ItemKeyRed {
		keyid = 2967;
	};
	class ItemKeyRed468: ItemKeyRed {
		keyid = 2968;
	};
	class ItemKeyRed469: ItemKeyRed {
		keyid = 2969;
	};
	class ItemKeyRed470: ItemKeyRed {
		keyid = 2970;
	};
	class ItemKeyRed471: ItemKeyRed {
		keyid = 2971;
	};
	class ItemKeyRed472: ItemKeyRed {
		keyid = 2972;
	};
	class ItemKeyRed473: ItemKeyRed {
		keyid = 2973;
	};
	class ItemKeyRed474: ItemKeyRed {
		keyid = 2974;
	};
	class ItemKeyRed475: ItemKeyRed {
		keyid = 2975;
	};
	class ItemKeyRed476: ItemKeyRed {
		keyid = 2976;
	};
	class ItemKeyRed477: ItemKeyRed {
		keyid = 2977;
	};
	class ItemKeyRed478: ItemKeyRed {
		keyid = 2978;
	};
	class ItemKeyRed479: ItemKeyRed {
		keyid = 2979;
	};
	class ItemKeyRed480: ItemKeyRed {
		keyid = 2980;
	};
	class ItemKeyRed481: ItemKeyRed {
		keyid = 2981;
	};
	class ItemKeyRed482: ItemKeyRed {
		keyid = 2982;
	};
	class ItemKeyRed483: ItemKeyRed {
		keyid = 2983;
	};
	class ItemKeyRed484: ItemKeyRed {
		keyid = 2984;
	};
	class ItemKeyRed485: ItemKeyRed {
		keyid = 2985;
	};
	class ItemKeyRed486: ItemKeyRed {
		keyid = 2986;
	};
	class ItemKeyRed487: ItemKeyRed {
		keyid = 2987;
	};
	class ItemKeyRed488: ItemKeyRed {
		keyid = 2988;
	};
	class ItemKeyRed489: ItemKeyRed {
		keyid = 2989;
	};
	class ItemKeyRed490: ItemKeyRed {
		keyid = 2990;
	};
	class ItemKeyRed491: ItemKeyRed {
		keyid = 2991;
	};
	class ItemKeyRed492: ItemKeyRed {
		keyid = 2992;
	};
	class ItemKeyRed493: ItemKeyRed {
		keyid = 2993;
	};
	class ItemKeyRed494: ItemKeyRed {
		keyid = 2994;
	};
	class ItemKeyRed495: ItemKeyRed {
		keyid = 2995;
	};
	class ItemKeyRed496: ItemKeyRed {
		keyid = 2996;
	};
	class ItemKeyRed497: ItemKeyRed {
		keyid = 2997;
	};
	class ItemKeyRed498: ItemKeyRed {
		keyid = 2998;
	};
	class ItemKeyRed499: ItemKeyRed {
		keyid = 2999;
	};
	class ItemKeyRed500: ItemKeyRed {
		keyid = 3000;
	};
	class ItemKeyRed501: ItemKeyRed {
		keyid = 3001;
	};
	class ItemKeyRed502: ItemKeyRed {
		keyid = 3002;
	};
	class ItemKeyRed503: ItemKeyRed {
		keyid = 3003;
	};
	class ItemKeyRed504: ItemKeyRed {
		keyid = 3004;
	};
	class ItemKeyRed505: ItemKeyRed {
		keyid = 3005;
	};
	class ItemKeyRed506: ItemKeyRed {
		keyid = 3006;
	};
	class ItemKeyRed507: ItemKeyRed {
		keyid = 3007;
	};
	class ItemKeyRed508: ItemKeyRed {
		keyid = 3008;
	};
	class ItemKeyRed509: ItemKeyRed {
		keyid = 3009;
	};
	class ItemKeyRed510: ItemKeyRed {
		keyid = 3010;
	};
	class ItemKeyRed511: ItemKeyRed {
		keyid = 3011;
	};
	class ItemKeyRed512: ItemKeyRed {
		keyid = 3012;
	};
	class ItemKeyRed513: ItemKeyRed {
		keyid = 3013;
	};
	class ItemKeyRed514: ItemKeyRed {
		keyid = 3014;
	};
	class ItemKeyRed515: ItemKeyRed {
		keyid = 3015;
	};
	class ItemKeyRed516: ItemKeyRed {
		keyid = 3016;
	};
	class ItemKeyRed517: ItemKeyRed {
		keyid = 3017;
	};
	class ItemKeyRed518: ItemKeyRed {
		keyid = 3018;
	};
	class ItemKeyRed519: ItemKeyRed {
		keyid = 3019;
	};
	class ItemKeyRed520: ItemKeyRed {
		keyid = 3020;
	};
	class ItemKeyRed521: ItemKeyRed {
		keyid = 3021;
	};
	class ItemKeyRed522: ItemKeyRed {
		keyid = 3022;
	};
	class ItemKeyRed523: ItemKeyRed {
		keyid = 3023;
	};
	class ItemKeyRed524: ItemKeyRed {
		keyid = 3024;
	};
	class ItemKeyRed525: ItemKeyRed {
		keyid = 3025;
	};
	class ItemKeyRed526: ItemKeyRed {
		keyid = 3026;
	};
	class ItemKeyRed527: ItemKeyRed {
		keyid = 3027;
	};
	class ItemKeyRed528: ItemKeyRed {
		keyid = 3028;
	};
	class ItemKeyRed529: ItemKeyRed {
		keyid = 3029;
	};
	class ItemKeyRed530: ItemKeyRed {
		keyid = 3030;
	};
	class ItemKeyRed531: ItemKeyRed {
		keyid = 3031;
	};
	class ItemKeyRed532: ItemKeyRed {
		keyid = 3032;
	};
	class ItemKeyRed533: ItemKeyRed {
		keyid = 3033;
	};
	class ItemKeyRed534: ItemKeyRed {
		keyid = 3034;
	};
	class ItemKeyRed535: ItemKeyRed {
		keyid = 3035;
	};
	class ItemKeyRed536: ItemKeyRed {
		keyid = 3036;
	};
	class ItemKeyRed537: ItemKeyRed {
		keyid = 3037;
	};
	class ItemKeyRed538: ItemKeyRed {
		keyid = 3038;
	};
	class ItemKeyRed539: ItemKeyRed {
		keyid = 3039;
	};
	class ItemKeyRed540: ItemKeyRed {
		keyid = 3040;
	};
	class ItemKeyRed541: ItemKeyRed {
		keyid = 3041;
	};
	class ItemKeyRed542: ItemKeyRed {
		keyid = 3042;
	};
	class ItemKeyRed543: ItemKeyRed {
		keyid = 3043;
	};
	class ItemKeyRed544: ItemKeyRed {
		keyid = 3044;
	};
	class ItemKeyRed545: ItemKeyRed {
		keyid = 3045;
	};
	class ItemKeyRed546: ItemKeyRed {
		keyid = 3046;
	};
	class ItemKeyRed547: ItemKeyRed {
		keyid = 3047;
	};
	class ItemKeyRed548: ItemKeyRed {
		keyid = 3048;
	};
	class ItemKeyRed549: ItemKeyRed {
		keyid = 3049;
	};
	class ItemKeyRed550: ItemKeyRed {
		keyid = 3050;
	};
	class ItemKeyRed551: ItemKeyRed {
		keyid = 3051;
	};
	class ItemKeyRed552: ItemKeyRed {
		keyid = 3052;
	};
	class ItemKeyRed553: ItemKeyRed {
		keyid = 3053;
	};
	class ItemKeyRed554: ItemKeyRed {
		keyid = 3054;
	};
	class ItemKeyRed555: ItemKeyRed {
		keyid = 3055;
	};
	class ItemKeyRed556: ItemKeyRed {
		keyid = 3056;
	};
	class ItemKeyRed557: ItemKeyRed {
		keyid = 3057;
	};
	class ItemKeyRed558: ItemKeyRed {
		keyid = 3058;
	};
	class ItemKeyRed559: ItemKeyRed {
		keyid = 3059;
	};
	class ItemKeyRed560: ItemKeyRed {
		keyid = 3060;
	};
	class ItemKeyRed561: ItemKeyRed {
		keyid = 3061;
	};
	class ItemKeyRed562: ItemKeyRed {
		keyid = 3062;
	};
	class ItemKeyRed563: ItemKeyRed {
		keyid = 3063;
	};
	class ItemKeyRed564: ItemKeyRed {
		keyid = 3064;
	};
	class ItemKeyRed565: ItemKeyRed {
		keyid = 3065;
	};
	class ItemKeyRed566: ItemKeyRed {
		keyid = 3066;
	};
	class ItemKeyRed567: ItemKeyRed {
		keyid = 3067;
	};
	class ItemKeyRed568: ItemKeyRed {
		keyid = 3068;
	};
	class ItemKeyRed569: ItemKeyRed {
		keyid = 3069;
	};
	class ItemKeyRed570: ItemKeyRed {
		keyid = 3070;
	};
	class ItemKeyRed571: ItemKeyRed {
		keyid = 3071;
	};
	class ItemKeyRed572: ItemKeyRed {
		keyid = 3072;
	};
	class ItemKeyRed573: ItemKeyRed {
		keyid = 3073;
	};
	class ItemKeyRed574: ItemKeyRed {
		keyid = 3074;
	};
	class ItemKeyRed575: ItemKeyRed {
		keyid = 3075;
	};
	class ItemKeyRed576: ItemKeyRed {
		keyid = 3076;
	};
	class ItemKeyRed577: ItemKeyRed {
		keyid = 3077;
	};
	class ItemKeyRed578: ItemKeyRed {
		keyid = 3078;
	};
	class ItemKeyRed579: ItemKeyRed {
		keyid = 3079;
	};
	class ItemKeyRed580: ItemKeyRed {
		keyid = 3080;
	};
	class ItemKeyRed581: ItemKeyRed {
		keyid = 3081;
	};
	class ItemKeyRed582: ItemKeyRed {
		keyid = 3082;
	};
	class ItemKeyRed583: ItemKeyRed {
		keyid = 3083;
	};
	class ItemKeyRed584: ItemKeyRed {
		keyid = 3084;
	};
	class ItemKeyRed585: ItemKeyRed {
		keyid = 3085;
	};
	class ItemKeyRed586: ItemKeyRed {
		keyid = 3086;
	};
	class ItemKeyRed587: ItemKeyRed {
		keyid = 3087;
	};
	class ItemKeyRed588: ItemKeyRed {
		keyid = 3088;
	};
	class ItemKeyRed589: ItemKeyRed {
		keyid = 3089;
	};
	class ItemKeyRed590: ItemKeyRed {
		keyid = 3090;
	};
	class ItemKeyRed591: ItemKeyRed {
		keyid = 3091;
	};
	class ItemKeyRed592: ItemKeyRed {
		keyid = 3092;
	};
	class ItemKeyRed593: ItemKeyRed {
		keyid = 3093;
	};
	class ItemKeyRed594: ItemKeyRed {
		keyid = 3094;
	};
	class ItemKeyRed595: ItemKeyRed {
		keyid = 3095;
	};
	class ItemKeyRed596: ItemKeyRed {
		keyid = 3096;
	};
	class ItemKeyRed597: ItemKeyRed {
		keyid = 3097;
	};
	class ItemKeyRed598: ItemKeyRed {
		keyid = 3098;
	};
	class ItemKeyRed599: ItemKeyRed {
		keyid = 3099;
	};
	class ItemKeyRed600: ItemKeyRed {
		keyid = 3100;
	};
	class ItemKeyRed601: ItemKeyRed {
		keyid = 3101;
	};
	class ItemKeyRed602: ItemKeyRed {
		keyid = 3102;
	};
	class ItemKeyRed603: ItemKeyRed {
		keyid = 3103;
	};
	class ItemKeyRed604: ItemKeyRed {
		keyid = 3104;
	};
	class ItemKeyRed605: ItemKeyRed {
		keyid = 3105;
	};
	class ItemKeyRed606: ItemKeyRed {
		keyid = 3106;
	};
	class ItemKeyRed607: ItemKeyRed {
		keyid = 3107;
	};
	class ItemKeyRed608: ItemKeyRed {
		keyid = 3108;
	};
	class ItemKeyRed609: ItemKeyRed {
		keyid = 3109;
	};
	class ItemKeyRed610: ItemKeyRed {
		keyid = 3110;
	};
	class ItemKeyRed611: ItemKeyRed {
		keyid = 3111;
	};
	class ItemKeyRed612: ItemKeyRed {
		keyid = 3112;
	};
	class ItemKeyRed613: ItemKeyRed {
		keyid = 3113;
	};
	class ItemKeyRed614: ItemKeyRed {
		keyid = 3114;
	};
	class ItemKeyRed615: ItemKeyRed {
		keyid = 3115;
	};
	class ItemKeyRed616: ItemKeyRed {
		keyid = 3116;
	};
	class ItemKeyRed617: ItemKeyRed {
		keyid = 3117;
	};
	class ItemKeyRed618: ItemKeyRed {
		keyid = 3118;
	};
	class ItemKeyRed619: ItemKeyRed {
		keyid = 3119;
	};
	class ItemKeyRed620: ItemKeyRed {
		keyid = 3120;
	};
	class ItemKeyRed621: ItemKeyRed {
		keyid = 3121;
	};
	class ItemKeyRed622: ItemKeyRed {
		keyid = 3122;
	};
	class ItemKeyRed623: ItemKeyRed {
		keyid = 3123;
	};
	class ItemKeyRed624: ItemKeyRed {
		keyid = 3124;
	};
	class ItemKeyRed625: ItemKeyRed {
		keyid = 3125;
	};
	class ItemKeyRed626: ItemKeyRed {
		keyid = 3126;
	};
	class ItemKeyRed627: ItemKeyRed {
		keyid = 3127;
	};
	class ItemKeyRed628: ItemKeyRed {
		keyid = 3128;
	};
	class ItemKeyRed629: ItemKeyRed {
		keyid = 3129;
	};
	class ItemKeyRed630: ItemKeyRed {
		keyid = 3130;
	};
	class ItemKeyRed631: ItemKeyRed {
		keyid = 3131;
	};
	class ItemKeyRed632: ItemKeyRed {
		keyid = 3132;
	};
	class ItemKeyRed633: ItemKeyRed {
		keyid = 3133;
	};
	class ItemKeyRed634: ItemKeyRed {
		keyid = 3134;
	};
	class ItemKeyRed635: ItemKeyRed {
		keyid = 3135;
	};
	class ItemKeyRed636: ItemKeyRed {
		keyid = 3136;
	};
	class ItemKeyRed637: ItemKeyRed {
		keyid = 3137;
	};
	class ItemKeyRed638: ItemKeyRed {
		keyid = 3138;
	};
	class ItemKeyRed639: ItemKeyRed {
		keyid = 3139;
	};
	class ItemKeyRed640: ItemKeyRed {
		keyid = 3140;
	};
	class ItemKeyRed641: ItemKeyRed {
		keyid = 3141;
	};
	class ItemKeyRed642: ItemKeyRed {
		keyid = 3142;
	};
	class ItemKeyRed643: ItemKeyRed {
		keyid = 3143;
	};
	class ItemKeyRed644: ItemKeyRed {
		keyid = 3144;
	};
	class ItemKeyRed645: ItemKeyRed {
		keyid = 3145;
	};
	class ItemKeyRed646: ItemKeyRed {
		keyid = 3146;
	};
	class ItemKeyRed647: ItemKeyRed {
		keyid = 3147;
	};
	class ItemKeyRed648: ItemKeyRed {
		keyid = 3148;
	};
	class ItemKeyRed649: ItemKeyRed {
		keyid = 3149;
	};
	class ItemKeyRed650: ItemKeyRed {
		keyid = 3150;
	};
	class ItemKeyRed651: ItemKeyRed {
		keyid = 3151;
	};
	class ItemKeyRed652: ItemKeyRed {
		keyid = 3152;
	};
	class ItemKeyRed653: ItemKeyRed {
		keyid = 3153;
	};
	class ItemKeyRed654: ItemKeyRed {
		keyid = 3154;
	};
	class ItemKeyRed655: ItemKeyRed {
		keyid = 3155;
	};
	class ItemKeyRed656: ItemKeyRed {
		keyid = 3156;
	};
	class ItemKeyRed657: ItemKeyRed {
		keyid = 3157;
	};
	class ItemKeyRed658: ItemKeyRed {
		keyid = 3158;
	};
	class ItemKeyRed659: ItemKeyRed {
		keyid = 3159;
	};
	class ItemKeyRed660: ItemKeyRed {
		keyid = 3160;
	};
	class ItemKeyRed661: ItemKeyRed {
		keyid = 3161;
	};
	class ItemKeyRed662: ItemKeyRed {
		keyid = 3162;
	};
	class ItemKeyRed663: ItemKeyRed {
		keyid = 3163;
	};
	class ItemKeyRed664: ItemKeyRed {
		keyid = 3164;
	};
	class ItemKeyRed665: ItemKeyRed {
		keyid = 3165;
	};
	class ItemKeyRed666: ItemKeyRed {
		keyid = 3166;
	};
	class ItemKeyRed667: ItemKeyRed {
		keyid = 3167;
	};
	class ItemKeyRed668: ItemKeyRed {
		keyid = 3168;
	};
	class ItemKeyRed669: ItemKeyRed {
		keyid = 3169;
	};
	class ItemKeyRed670: ItemKeyRed {
		keyid = 3170;
	};
	class ItemKeyRed671: ItemKeyRed {
		keyid = 3171;
	};
	class ItemKeyRed672: ItemKeyRed {
		keyid = 3172;
	};
	class ItemKeyRed673: ItemKeyRed {
		keyid = 3173;
	};
	class ItemKeyRed674: ItemKeyRed {
		keyid = 3174;
	};
	class ItemKeyRed675: ItemKeyRed {
		keyid = 3175;
	};
	class ItemKeyRed676: ItemKeyRed {
		keyid = 3176;
	};
	class ItemKeyRed677: ItemKeyRed {
		keyid = 3177;
	};
	class ItemKeyRed678: ItemKeyRed {
		keyid = 3178;
	};
	class ItemKeyRed679: ItemKeyRed {
		keyid = 3179;
	};
	class ItemKeyRed680: ItemKeyRed {
		keyid = 3180;
	};
	class ItemKeyRed681: ItemKeyRed {
		keyid = 3181;
	};
	class ItemKeyRed682: ItemKeyRed {
		keyid = 3182;
	};
	class ItemKeyRed683: ItemKeyRed {
		keyid = 3183;
	};
	class ItemKeyRed684: ItemKeyRed {
		keyid = 3184;
	};
	class ItemKeyRed685: ItemKeyRed {
		keyid = 3185;
	};
	class ItemKeyRed686: ItemKeyRed {
		keyid = 3186;
	};
	class ItemKeyRed687: ItemKeyRed {
		keyid = 3187;
	};
	class ItemKeyRed688: ItemKeyRed {
		keyid = 3188;
	};
	class ItemKeyRed689: ItemKeyRed {
		keyid = 3189;
	};
	class ItemKeyRed690: ItemKeyRed {
		keyid = 3190;
	};
	class ItemKeyRed691: ItemKeyRed {
		keyid = 3191;
	};
	class ItemKeyRed692: ItemKeyRed {
		keyid = 3192;
	};
	class ItemKeyRed693: ItemKeyRed {
		keyid = 3193;
	};
	class ItemKeyRed694: ItemKeyRed {
		keyid = 3194;
	};
	class ItemKeyRed695: ItemKeyRed {
		keyid = 3195;
	};
	class ItemKeyRed696: ItemKeyRed {
		keyid = 3196;
	};
	class ItemKeyRed697: ItemKeyRed {
		keyid = 3197;
	};
	class ItemKeyRed698: ItemKeyRed {
		keyid = 3198;
	};
	class ItemKeyRed699: ItemKeyRed {
		keyid = 3199;
	};
	class ItemKeyRed700: ItemKeyRed {
		keyid = 3200;
	};
	class ItemKeyRed701: ItemKeyRed {
		keyid = 3201;
	};
	class ItemKeyRed702: ItemKeyRed {
		keyid = 3202;
	};
	class ItemKeyRed703: ItemKeyRed {
		keyid = 3203;
	};
	class ItemKeyRed704: ItemKeyRed {
		keyid = 3204;
	};
	class ItemKeyRed705: ItemKeyRed {
		keyid = 3205;
	};
	class ItemKeyRed706: ItemKeyRed {
		keyid = 3206;
	};
	class ItemKeyRed707: ItemKeyRed {
		keyid = 3207;
	};
	class ItemKeyRed708: ItemKeyRed {
		keyid = 3208;
	};
	class ItemKeyRed709: ItemKeyRed {
		keyid = 3209;
	};
	class ItemKeyRed710: ItemKeyRed {
		keyid = 3210;
	};
	class ItemKeyRed711: ItemKeyRed {
		keyid = 3211;
	};
	class ItemKeyRed712: ItemKeyRed {
		keyid = 3212;
	};
	class ItemKeyRed713: ItemKeyRed {
		keyid = 3213;
	};
	class ItemKeyRed714: ItemKeyRed {
		keyid = 3214;
	};
	class ItemKeyRed715: ItemKeyRed {
		keyid = 3215;
	};
	class ItemKeyRed716: ItemKeyRed {
		keyid = 3216;
	};
	class ItemKeyRed717: ItemKeyRed {
		keyid = 3217;
	};
	class ItemKeyRed718: ItemKeyRed {
		keyid = 3218;
	};
	class ItemKeyRed719: ItemKeyRed {
		keyid = 3219;
	};
	class ItemKeyRed720: ItemKeyRed {
		keyid = 3220;
	};
	class ItemKeyRed721: ItemKeyRed {
		keyid = 3221;
	};
	class ItemKeyRed722: ItemKeyRed {
		keyid = 3222;
	};
	class ItemKeyRed723: ItemKeyRed {
		keyid = 3223;
	};
	class ItemKeyRed724: ItemKeyRed {
		keyid = 3224;
	};
	class ItemKeyRed725: ItemKeyRed {
		keyid = 3225;
	};
	class ItemKeyRed726: ItemKeyRed {
		keyid = 3226;
	};
	class ItemKeyRed727: ItemKeyRed {
		keyid = 3227;
	};
	class ItemKeyRed728: ItemKeyRed {
		keyid = 3228;
	};
	class ItemKeyRed729: ItemKeyRed {
		keyid = 3229;
	};
	class ItemKeyRed730: ItemKeyRed {
		keyid = 3230;
	};
	class ItemKeyRed731: ItemKeyRed {
		keyid = 3231;
	};
	class ItemKeyRed732: ItemKeyRed {
		keyid = 3232;
	};
	class ItemKeyRed733: ItemKeyRed {
		keyid = 3233;
	};
	class ItemKeyRed734: ItemKeyRed {
		keyid = 3234;
	};
	class ItemKeyRed735: ItemKeyRed {
		keyid = 3235;
	};
	class ItemKeyRed736: ItemKeyRed {
		keyid = 3236;
	};
	class ItemKeyRed737: ItemKeyRed {
		keyid = 3237;
	};
	class ItemKeyRed738: ItemKeyRed {
		keyid = 3238;
	};
	class ItemKeyRed739: ItemKeyRed {
		keyid = 3239;
	};
	class ItemKeyRed740: ItemKeyRed {
		keyid = 3240;
	};
	class ItemKeyRed741: ItemKeyRed {
		keyid = 3241;
	};
	class ItemKeyRed742: ItemKeyRed {
		keyid = 3242;
	};
	class ItemKeyRed743: ItemKeyRed {
		keyid = 3243;
	};
	class ItemKeyRed744: ItemKeyRed {
		keyid = 3244;
	};
	class ItemKeyRed745: ItemKeyRed {
		keyid = 3245;
	};
	class ItemKeyRed746: ItemKeyRed {
		keyid = 3246;
	};
	class ItemKeyRed747: ItemKeyRed {
		keyid = 3247;
	};
	class ItemKeyRed748: ItemKeyRed {
		keyid = 3248;
	};
	class ItemKeyRed749: ItemKeyRed {
		keyid = 3249;
	};
	class ItemKeyRed750: ItemKeyRed {
		keyid = 3250;
	};
	class ItemKeyRed751: ItemKeyRed {
		keyid = 3251;
	};
	class ItemKeyRed752: ItemKeyRed {
		keyid = 3252;
	};
	class ItemKeyRed753: ItemKeyRed {
		keyid = 3253;
	};
	class ItemKeyRed754: ItemKeyRed {
		keyid = 3254;
	};
	class ItemKeyRed755: ItemKeyRed {
		keyid = 3255;
	};
	class ItemKeyRed756: ItemKeyRed {
		keyid = 3256;
	};
	class ItemKeyRed757: ItemKeyRed {
		keyid = 3257;
	};
	class ItemKeyRed758: ItemKeyRed {
		keyid = 3258;
	};
	class ItemKeyRed759: ItemKeyRed {
		keyid = 3259;
	};
	class ItemKeyRed760: ItemKeyRed {
		keyid = 3260;
	};
	class ItemKeyRed761: ItemKeyRed {
		keyid = 3261;
	};
	class ItemKeyRed762: ItemKeyRed {
		keyid = 3262;
	};
	class ItemKeyRed763: ItemKeyRed {
		keyid = 3263;
	};
	class ItemKeyRed764: ItemKeyRed {
		keyid = 3264;
	};
	class ItemKeyRed765: ItemKeyRed {
		keyid = 3265;
	};
	class ItemKeyRed766: ItemKeyRed {
		keyid = 3266;
	};
	class ItemKeyRed767: ItemKeyRed {
		keyid = 3267;
	};
	class ItemKeyRed768: ItemKeyRed {
		keyid = 3268;
	};
	class ItemKeyRed769: ItemKeyRed {
		keyid = 3269;
	};
	class ItemKeyRed770: ItemKeyRed {
		keyid = 3270;
	};
	class ItemKeyRed771: ItemKeyRed {
		keyid = 3271;
	};
	class ItemKeyRed772: ItemKeyRed {
		keyid = 3272;
	};
	class ItemKeyRed773: ItemKeyRed {
		keyid = 3273;
	};
	class ItemKeyRed774: ItemKeyRed {
		keyid = 3274;
	};
	class ItemKeyRed775: ItemKeyRed {
		keyid = 3275;
	};
	class ItemKeyRed776: ItemKeyRed {
		keyid = 3276;
	};
	class ItemKeyRed777: ItemKeyRed {
		keyid = 3277;
	};
	class ItemKeyRed778: ItemKeyRed {
		keyid = 3278;
	};
	class ItemKeyRed779: ItemKeyRed {
		keyid = 3279;
	};
	class ItemKeyRed780: ItemKeyRed {
		keyid = 3280;
	};
	class ItemKeyRed781: ItemKeyRed {
		keyid = 3281;
	};
	class ItemKeyRed782: ItemKeyRed {
		keyid = 3282;
	};
	class ItemKeyRed783: ItemKeyRed {
		keyid = 3283;
	};
	class ItemKeyRed784: ItemKeyRed {
		keyid = 3284;
	};
	class ItemKeyRed785: ItemKeyRed {
		keyid = 3285;
	};
	class ItemKeyRed786: ItemKeyRed {
		keyid = 3286;
	};
	class ItemKeyRed787: ItemKeyRed {
		keyid = 3287;
	};
	class ItemKeyRed788: ItemKeyRed {
		keyid = 3288;
	};
	class ItemKeyRed789: ItemKeyRed {
		keyid = 3289;
	};
	class ItemKeyRed790: ItemKeyRed {
		keyid = 3290;
	};
	class ItemKeyRed791: ItemKeyRed {
		keyid = 3291;
	};
	class ItemKeyRed792: ItemKeyRed {
		keyid = 3292;
	};
	class ItemKeyRed793: ItemKeyRed {
		keyid = 3293;
	};
	class ItemKeyRed794: ItemKeyRed {
		keyid = 3294;
	};
	class ItemKeyRed795: ItemKeyRed {
		keyid = 3295;
	};
	class ItemKeyRed796: ItemKeyRed {
		keyid = 3296;
	};
	class ItemKeyRed797: ItemKeyRed {
		keyid = 3297;
	};
	class ItemKeyRed798: ItemKeyRed {
		keyid = 3298;
	};
	class ItemKeyRed799: ItemKeyRed {
		keyid = 3299;
	};
	class ItemKeyRed800: ItemKeyRed {
		keyid = 3300;
	};
	class ItemKeyRed801: ItemKeyRed {
		keyid = 3301;
	};
	class ItemKeyRed802: ItemKeyRed {
		keyid = 3302;
	};
	class ItemKeyRed803: ItemKeyRed {
		keyid = 3303;
	};
	class ItemKeyRed804: ItemKeyRed {
		keyid = 3304;
	};
	class ItemKeyRed805: ItemKeyRed {
		keyid = 3305;
	};
	class ItemKeyRed806: ItemKeyRed {
		keyid = 3306;
	};
	class ItemKeyRed807: ItemKeyRed {
		keyid = 3307;
	};
	class ItemKeyRed808: ItemKeyRed {
		keyid = 3308;
	};
	class ItemKeyRed809: ItemKeyRed {
		keyid = 3309;
	};
	class ItemKeyRed810: ItemKeyRed {
		keyid = 3310;
	};
	class ItemKeyRed811: ItemKeyRed {
		keyid = 3311;
	};
	class ItemKeyRed812: ItemKeyRed {
		keyid = 3312;
	};
	class ItemKeyRed813: ItemKeyRed {
		keyid = 3313;
	};
	class ItemKeyRed814: ItemKeyRed {
		keyid = 3314;
	};
	class ItemKeyRed815: ItemKeyRed {
		keyid = 3315;
	};
	class ItemKeyRed816: ItemKeyRed {
		keyid = 3316;
	};
	class ItemKeyRed817: ItemKeyRed {
		keyid = 3317;
	};
	class ItemKeyRed818: ItemKeyRed {
		keyid = 3318;
	};
	class ItemKeyRed819: ItemKeyRed {
		keyid = 3319;
	};
	class ItemKeyRed820: ItemKeyRed {
		keyid = 3320;
	};
	class ItemKeyRed821: ItemKeyRed {
		keyid = 3321;
	};
	class ItemKeyRed822: ItemKeyRed {
		keyid = 3322;
	};
	class ItemKeyRed823: ItemKeyRed {
		keyid = 3323;
	};
	class ItemKeyRed824: ItemKeyRed {
		keyid = 3324;
	};
	class ItemKeyRed825: ItemKeyRed {
		keyid = 3325;
	};
	class ItemKeyRed826: ItemKeyRed {
		keyid = 3326;
	};
	class ItemKeyRed827: ItemKeyRed {
		keyid = 3327;
	};
	class ItemKeyRed828: ItemKeyRed {
		keyid = 3328;
	};
	class ItemKeyRed829: ItemKeyRed {
		keyid = 3329;
	};
	class ItemKeyRed830: ItemKeyRed {
		keyid = 3330;
	};
	class ItemKeyRed831: ItemKeyRed {
		keyid = 3331;
	};
	class ItemKeyRed832: ItemKeyRed {
		keyid = 3332;
	};
	class ItemKeyRed833: ItemKeyRed {
		keyid = 3333;
	};
	class ItemKeyRed834: ItemKeyRed {
		keyid = 3334;
	};
	class ItemKeyRed835: ItemKeyRed {
		keyid = 3335;
	};
	class ItemKeyRed836: ItemKeyRed {
		keyid = 3336;
	};
	class ItemKeyRed837: ItemKeyRed {
		keyid = 3337;
	};
	class ItemKeyRed838: ItemKeyRed {
		keyid = 3338;
	};
	class ItemKeyRed839: ItemKeyRed {
		keyid = 3339;
	};
	class ItemKeyRed840: ItemKeyRed {
		keyid = 3340;
	};
	class ItemKeyRed841: ItemKeyRed {
		keyid = 3341;
	};
	class ItemKeyRed842: ItemKeyRed {
		keyid = 3342;
	};
	class ItemKeyRed843: ItemKeyRed {
		keyid = 3343;
	};
	class ItemKeyRed844: ItemKeyRed {
		keyid = 3344;
	};
	class ItemKeyRed845: ItemKeyRed {
		keyid = 3345;
	};
	class ItemKeyRed846: ItemKeyRed {
		keyid = 3346;
	};
	class ItemKeyRed847: ItemKeyRed {
		keyid = 3347;
	};
	class ItemKeyRed848: ItemKeyRed {
		keyid = 3348;
	};
	class ItemKeyRed849: ItemKeyRed {
		keyid = 3349;
	};
	class ItemKeyRed850: ItemKeyRed {
		keyid = 3350;
	};
	class ItemKeyRed851: ItemKeyRed {
		keyid = 3351;
	};
	class ItemKeyRed852: ItemKeyRed {
		keyid = 3352;
	};
	class ItemKeyRed853: ItemKeyRed {
		keyid = 3353;
	};
	class ItemKeyRed854: ItemKeyRed {
		keyid = 3354;
	};
	class ItemKeyRed855: ItemKeyRed {
		keyid = 3355;
	};
	class ItemKeyRed856: ItemKeyRed {
		keyid = 3356;
	};
	class ItemKeyRed857: ItemKeyRed {
		keyid = 3357;
	};
	class ItemKeyRed858: ItemKeyRed {
		keyid = 3358;
	};
	class ItemKeyRed859: ItemKeyRed {
		keyid = 3359;
	};
	class ItemKeyRed860: ItemKeyRed {
		keyid = 3360;
	};
	class ItemKeyRed861: ItemKeyRed {
		keyid = 3361;
	};
	class ItemKeyRed862: ItemKeyRed {
		keyid = 3362;
	};
	class ItemKeyRed863: ItemKeyRed {
		keyid = 3363;
	};
	class ItemKeyRed864: ItemKeyRed {
		keyid = 3364;
	};
	class ItemKeyRed865: ItemKeyRed {
		keyid = 3365;
	};
	class ItemKeyRed866: ItemKeyRed {
		keyid = 3366;
	};
	class ItemKeyRed867: ItemKeyRed {
		keyid = 3367;
	};
	class ItemKeyRed868: ItemKeyRed {
		keyid = 3368;
	};
	class ItemKeyRed869: ItemKeyRed {
		keyid = 3369;
	};
	class ItemKeyRed870: ItemKeyRed {
		keyid = 3370;
	};
	class ItemKeyRed871: ItemKeyRed {
		keyid = 3371;
	};
	class ItemKeyRed872: ItemKeyRed {
		keyid = 3372;
	};
	class ItemKeyRed873: ItemKeyRed {
		keyid = 3373;
	};
	class ItemKeyRed874: ItemKeyRed {
		keyid = 3374;
	};
	class ItemKeyRed875: ItemKeyRed {
		keyid = 3375;
	};
	class ItemKeyRed876: ItemKeyRed {
		keyid = 3376;
	};
	class ItemKeyRed877: ItemKeyRed {
		keyid = 3377;
	};
	class ItemKeyRed878: ItemKeyRed {
		keyid = 3378;
	};
	class ItemKeyRed879: ItemKeyRed {
		keyid = 3379;
	};
	class ItemKeyRed880: ItemKeyRed {
		keyid = 3380;
	};
	class ItemKeyRed881: ItemKeyRed {
		keyid = 3381;
	};
	class ItemKeyRed882: ItemKeyRed {
		keyid = 3382;
	};
	class ItemKeyRed883: ItemKeyRed {
		keyid = 3383;
	};
	class ItemKeyRed884: ItemKeyRed {
		keyid = 3384;
	};
	class ItemKeyRed885: ItemKeyRed {
		keyid = 3385;
	};
	class ItemKeyRed886: ItemKeyRed {
		keyid = 3386;
	};
	class ItemKeyRed887: ItemKeyRed {
		keyid = 3387;
	};
	class ItemKeyRed888: ItemKeyRed {
		keyid = 3388;
	};
	class ItemKeyRed889: ItemKeyRed {
		keyid = 3389;
	};
	class ItemKeyRed890: ItemKeyRed {
		keyid = 3390;
	};
	class ItemKeyRed891: ItemKeyRed {
		keyid = 3391;
	};
	class ItemKeyRed892: ItemKeyRed {
		keyid = 3392;
	};
	class ItemKeyRed893: ItemKeyRed {
		keyid = 3393;
	};
	class ItemKeyRed894: ItemKeyRed {
		keyid = 3394;
	};
	class ItemKeyRed895: ItemKeyRed {
		keyid = 3395;
	};
	class ItemKeyRed896: ItemKeyRed {
		keyid = 3396;
	};
	class ItemKeyRed897: ItemKeyRed {
		keyid = 3397;
	};
	class ItemKeyRed898: ItemKeyRed {
		keyid = 3398;
	};
	class ItemKeyRed899: ItemKeyRed {
		keyid = 3399;
	};
	class ItemKeyRed900: ItemKeyRed {
		keyid = 3400;
	};
	class ItemKeyRed901: ItemKeyRed {
		keyid = 3401;
	};
	class ItemKeyRed902: ItemKeyRed {
		keyid = 3402;
	};
	class ItemKeyRed903: ItemKeyRed {
		keyid = 3403;
	};
	class ItemKeyRed904: ItemKeyRed {
		keyid = 3404;
	};
	class ItemKeyRed905: ItemKeyRed {
		keyid = 3405;
	};
	class ItemKeyRed906: ItemKeyRed {
		keyid = 3406;
	};
	class ItemKeyRed907: ItemKeyRed {
		keyid = 3407;
	};
	class ItemKeyRed908: ItemKeyRed {
		keyid = 3408;
	};
	class ItemKeyRed909: ItemKeyRed {
		keyid = 3409;
	};
	class ItemKeyRed910: ItemKeyRed {
		keyid = 3410;
	};
	class ItemKeyRed911: ItemKeyRed {
		keyid = 3411;
	};
	class ItemKeyRed912: ItemKeyRed {
		keyid = 3412;
	};
	class ItemKeyRed913: ItemKeyRed {
		keyid = 3413;
	};
	class ItemKeyRed914: ItemKeyRed {
		keyid = 3414;
	};
	class ItemKeyRed915: ItemKeyRed {
		keyid = 3415;
	};
	class ItemKeyRed916: ItemKeyRed {
		keyid = 3416;
	};
	class ItemKeyRed917: ItemKeyRed {
		keyid = 3417;
	};
	class ItemKeyRed918: ItemKeyRed {
		keyid = 3418;
	};
	class ItemKeyRed919: ItemKeyRed {
		keyid = 3419;
	};
	class ItemKeyRed920: ItemKeyRed {
		keyid = 3420;
	};
	class ItemKeyRed921: ItemKeyRed {
		keyid = 3421;
	};
	class ItemKeyRed922: ItemKeyRed {
		keyid = 3422;
	};
	class ItemKeyRed923: ItemKeyRed {
		keyid = 3423;
	};
	class ItemKeyRed924: ItemKeyRed {
		keyid = 3424;
	};
	class ItemKeyRed925: ItemKeyRed {
		keyid = 3425;
	};
	class ItemKeyRed926: ItemKeyRed {
		keyid = 3426;
	};
	class ItemKeyRed927: ItemKeyRed {
		keyid = 3427;
	};
	class ItemKeyRed928: ItemKeyRed {
		keyid = 3428;
	};
	class ItemKeyRed929: ItemKeyRed {
		keyid = 3429;
	};
	class ItemKeyRed930: ItemKeyRed {
		keyid = 3430;
	};
	class ItemKeyRed931: ItemKeyRed {
		keyid = 3431;
	};
	class ItemKeyRed932: ItemKeyRed {
		keyid = 3432;
	};
	class ItemKeyRed933: ItemKeyRed {
		keyid = 3433;
	};
	class ItemKeyRed934: ItemKeyRed {
		keyid = 3434;
	};
	class ItemKeyRed935: ItemKeyRed {
		keyid = 3435;
	};
	class ItemKeyRed936: ItemKeyRed {
		keyid = 3436;
	};
	class ItemKeyRed937: ItemKeyRed {
		keyid = 3437;
	};
	class ItemKeyRed938: ItemKeyRed {
		keyid = 3438;
	};
	class ItemKeyRed939: ItemKeyRed {
		keyid = 3439;
	};
	class ItemKeyRed940: ItemKeyRed {
		keyid = 3440;
	};
	class ItemKeyRed941: ItemKeyRed {
		keyid = 3441;
	};
	class ItemKeyRed942: ItemKeyRed {
		keyid = 3442;
	};
	class ItemKeyRed943: ItemKeyRed {
		keyid = 3443;
	};
	class ItemKeyRed944: ItemKeyRed {
		keyid = 3444;
	};
	class ItemKeyRed945: ItemKeyRed {
		keyid = 3445;
	};
	class ItemKeyRed946: ItemKeyRed {
		keyid = 3446;
	};
	class ItemKeyRed947: ItemKeyRed {
		keyid = 3447;
	};
	class ItemKeyRed948: ItemKeyRed {
		keyid = 3448;
	};
	class ItemKeyRed949: ItemKeyRed {
		keyid = 3449;
	};
	class ItemKeyRed950: ItemKeyRed {
		keyid = 3450;
	};
	class ItemKeyRed951: ItemKeyRed {
		keyid = 3451;
	};
	class ItemKeyRed952: ItemKeyRed {
		keyid = 3452;
	};
	class ItemKeyRed953: ItemKeyRed {
		keyid = 3453;
	};
	class ItemKeyRed954: ItemKeyRed {
		keyid = 3454;
	};
	class ItemKeyRed955: ItemKeyRed {
		keyid = 3455;
	};
	class ItemKeyRed956: ItemKeyRed {
		keyid = 3456;
	};
	class ItemKeyRed957: ItemKeyRed {
		keyid = 3457;
	};
	class ItemKeyRed958: ItemKeyRed {
		keyid = 3458;
	};
	class ItemKeyRed959: ItemKeyRed {
		keyid = 3459;
	};
	class ItemKeyRed960: ItemKeyRed {
		keyid = 3460;
	};
	class ItemKeyRed961: ItemKeyRed {
		keyid = 3461;
	};
	class ItemKeyRed962: ItemKeyRed {
		keyid = 3462;
	};
	class ItemKeyRed963: ItemKeyRed {
		keyid = 3463;
	};
	class ItemKeyRed964: ItemKeyRed {
		keyid = 3464;
	};
	class ItemKeyRed965: ItemKeyRed {
		keyid = 3465;
	};
	class ItemKeyRed966: ItemKeyRed {
		keyid = 3466;
	};
	class ItemKeyRed967: ItemKeyRed {
		keyid = 3467;
	};
	class ItemKeyRed968: ItemKeyRed {
		keyid = 3468;
	};
	class ItemKeyRed969: ItemKeyRed {
		keyid = 3469;
	};
	class ItemKeyRed970: ItemKeyRed {
		keyid = 3470;
	};
	class ItemKeyRed971: ItemKeyRed {
		keyid = 3471;
	};
	class ItemKeyRed972: ItemKeyRed {
		keyid = 3472;
	};
	class ItemKeyRed973: ItemKeyRed {
		keyid = 3473;
	};
	class ItemKeyRed974: ItemKeyRed {
		keyid = 3474;
	};
	class ItemKeyRed975: ItemKeyRed {
		keyid = 3475;
	};
	class ItemKeyRed976: ItemKeyRed {
		keyid = 3476;
	};
	class ItemKeyRed977: ItemKeyRed {
		keyid = 3477;
	};
	class ItemKeyRed978: ItemKeyRed {
		keyid = 3478;
	};
	class ItemKeyRed979: ItemKeyRed {
		keyid = 3479;
	};
	class ItemKeyRed980: ItemKeyRed {
		keyid = 3480;
	};
	class ItemKeyRed981: ItemKeyRed {
		keyid = 3481;
	};
	class ItemKeyRed982: ItemKeyRed {
		keyid = 3482;
	};
	class ItemKeyRed983: ItemKeyRed {
		keyid = 3483;
	};
	class ItemKeyRed984: ItemKeyRed {
		keyid = 3484;
	};
	class ItemKeyRed985: ItemKeyRed {
		keyid = 3485;
	};
	class ItemKeyRed986: ItemKeyRed {
		keyid = 3486;
	};
	class ItemKeyRed987: ItemKeyRed {
		keyid = 3487;
	};
	class ItemKeyRed988: ItemKeyRed {
		keyid = 3488;
	};
	class ItemKeyRed989: ItemKeyRed {
		keyid = 3489;
	};
	class ItemKeyRed990: ItemKeyRed {
		keyid = 3490;
	};
	class ItemKeyRed991: ItemKeyRed {
		keyid = 3491;
	};
	class ItemKeyRed992: ItemKeyRed {
		keyid = 3492;
	};
	class ItemKeyRed993: ItemKeyRed {
		keyid = 3493;
	};
	class ItemKeyRed994: ItemKeyRed {
		keyid = 3494;
	};
	class ItemKeyRed995: ItemKeyRed {
		keyid = 3495;
	};
	class ItemKeyRed996: ItemKeyRed {
		keyid = 3496;
	};
	class ItemKeyRed997: ItemKeyRed {
		keyid = 3497;
	};
	class ItemKeyRed998: ItemKeyRed {
		keyid = 3498;
	};
	class ItemKeyRed999: ItemKeyRed {
		keyid = 3499;
	};
	class ItemKeyRed1000: ItemKeyRed {
		keyid = 3500;
	};
	class ItemKeyRed1001: ItemKeyRed {
		keyid = 3501;
	};
	class ItemKeyRed1002: ItemKeyRed {
		keyid = 3502;
	};
	class ItemKeyRed1003: ItemKeyRed {
		keyid = 3503;
	};
	class ItemKeyRed1004: ItemKeyRed {
		keyid = 3504;
	};
	class ItemKeyRed1005: ItemKeyRed {
		keyid = 3505;
	};
	class ItemKeyRed1006: ItemKeyRed {
		keyid = 3506;
	};
	class ItemKeyRed1007: ItemKeyRed {
		keyid = 3507;
	};
	class ItemKeyRed1008: ItemKeyRed {
		keyid = 3508;
	};
	class ItemKeyRed1009: ItemKeyRed {
		keyid = 3509;
	};
	class ItemKeyRed1010: ItemKeyRed {
		keyid = 3510;
	};
	class ItemKeyRed1011: ItemKeyRed {
		keyid = 3511;
	};
	class ItemKeyRed1012: ItemKeyRed {
		keyid = 3512;
	};
	class ItemKeyRed1013: ItemKeyRed {
		keyid = 3513;
	};
	class ItemKeyRed1014: ItemKeyRed {
		keyid = 3514;
	};
	class ItemKeyRed1015: ItemKeyRed {
		keyid = 3515;
	};
	class ItemKeyRed1016: ItemKeyRed {
		keyid = 3516;
	};
	class ItemKeyRed1017: ItemKeyRed {
		keyid = 3517;
	};
	class ItemKeyRed1018: ItemKeyRed {
		keyid = 3518;
	};
	class ItemKeyRed1019: ItemKeyRed {
		keyid = 3519;
	};
	class ItemKeyRed1020: ItemKeyRed {
		keyid = 3520;
	};
	class ItemKeyRed1021: ItemKeyRed {
		keyid = 3521;
	};
	class ItemKeyRed1022: ItemKeyRed {
		keyid = 3522;
	};
	class ItemKeyRed1023: ItemKeyRed {
		keyid = 3523;
	};
	class ItemKeyRed1024: ItemKeyRed {
		keyid = 3524;
	};
	class ItemKeyRed1025: ItemKeyRed {
		keyid = 3525;
	};
	class ItemKeyRed1026: ItemKeyRed {
		keyid = 3526;
	};
	class ItemKeyRed1027: ItemKeyRed {
		keyid = 3527;
	};
	class ItemKeyRed1028: ItemKeyRed {
		keyid = 3528;
	};
	class ItemKeyRed1029: ItemKeyRed {
		keyid = 3529;
	};
	class ItemKeyRed1030: ItemKeyRed {
		keyid = 3530;
	};
	class ItemKeyRed1031: ItemKeyRed {
		keyid = 3531;
	};
	class ItemKeyRed1032: ItemKeyRed {
		keyid = 3532;
	};
	class ItemKeyRed1033: ItemKeyRed {
		keyid = 3533;
	};
	class ItemKeyRed1034: ItemKeyRed {
		keyid = 3534;
	};
	class ItemKeyRed1035: ItemKeyRed {
		keyid = 3535;
	};
	class ItemKeyRed1036: ItemKeyRed {
		keyid = 3536;
	};
	class ItemKeyRed1037: ItemKeyRed {
		keyid = 3537;
	};
	class ItemKeyRed1038: ItemKeyRed {
		keyid = 3538;
	};
	class ItemKeyRed1039: ItemKeyRed {
		keyid = 3539;
	};
	class ItemKeyRed1040: ItemKeyRed {
		keyid = 3540;
	};
	class ItemKeyRed1041: ItemKeyRed {
		keyid = 3541;
	};
	class ItemKeyRed1042: ItemKeyRed {
		keyid = 3542;
	};
	class ItemKeyRed1043: ItemKeyRed {
		keyid = 3543;
	};
	class ItemKeyRed1044: ItemKeyRed {
		keyid = 3544;
	};
	class ItemKeyRed1045: ItemKeyRed {
		keyid = 3545;
	};
	class ItemKeyRed1046: ItemKeyRed {
		keyid = 3546;
	};
	class ItemKeyRed1047: ItemKeyRed {
		keyid = 3547;
	};
	class ItemKeyRed1048: ItemKeyRed {
		keyid = 3548;
	};
	class ItemKeyRed1049: ItemKeyRed {
		keyid = 3549;
	};
	class ItemKeyRed1050: ItemKeyRed {
		keyid = 3550;
	};
	class ItemKeyRed1051: ItemKeyRed {
		keyid = 3551;
	};
	class ItemKeyRed1052: ItemKeyRed {
		keyid = 3552;
	};
	class ItemKeyRed1053: ItemKeyRed {
		keyid = 3553;
	};
	class ItemKeyRed1054: ItemKeyRed {
		keyid = 3554;
	};
	class ItemKeyRed1055: ItemKeyRed {
		keyid = 3555;
	};
	class ItemKeyRed1056: ItemKeyRed {
		keyid = 3556;
	};
	class ItemKeyRed1057: ItemKeyRed {
		keyid = 3557;
	};
	class ItemKeyRed1058: ItemKeyRed {
		keyid = 3558;
	};
	class ItemKeyRed1059: ItemKeyRed {
		keyid = 3559;
	};
	class ItemKeyRed1060: ItemKeyRed {
		keyid = 3560;
	};
	class ItemKeyRed1061: ItemKeyRed {
		keyid = 3561;
	};
	class ItemKeyRed1062: ItemKeyRed {
		keyid = 3562;
	};
	class ItemKeyRed1063: ItemKeyRed {
		keyid = 3563;
	};
	class ItemKeyRed1064: ItemKeyRed {
		keyid = 3564;
	};
	class ItemKeyRed1065: ItemKeyRed {
		keyid = 3565;
	};
	class ItemKeyRed1066: ItemKeyRed {
		keyid = 3566;
	};
	class ItemKeyRed1067: ItemKeyRed {
		keyid = 3567;
	};
	class ItemKeyRed1068: ItemKeyRed {
		keyid = 3568;
	};
	class ItemKeyRed1069: ItemKeyRed {
		keyid = 3569;
	};
	class ItemKeyRed1070: ItemKeyRed {
		keyid = 3570;
	};
	class ItemKeyRed1071: ItemKeyRed {
		keyid = 3571;
	};
	class ItemKeyRed1072: ItemKeyRed {
		keyid = 3572;
	};
	class ItemKeyRed1073: ItemKeyRed {
		keyid = 3573;
	};
	class ItemKeyRed1074: ItemKeyRed {
		keyid = 3574;
	};
	class ItemKeyRed1075: ItemKeyRed {
		keyid = 3575;
	};
	class ItemKeyRed1076: ItemKeyRed {
		keyid = 3576;
	};
	class ItemKeyRed1077: ItemKeyRed {
		keyid = 3577;
	};
	class ItemKeyRed1078: ItemKeyRed {
		keyid = 3578;
	};
	class ItemKeyRed1079: ItemKeyRed {
		keyid = 3579;
	};
	class ItemKeyRed1080: ItemKeyRed {
		keyid = 3580;
	};
	class ItemKeyRed1081: ItemKeyRed {
		keyid = 3581;
	};
	class ItemKeyRed1082: ItemKeyRed {
		keyid = 3582;
	};
	class ItemKeyRed1083: ItemKeyRed {
		keyid = 3583;
	};
	class ItemKeyRed1084: ItemKeyRed {
		keyid = 3584;
	};
	class ItemKeyRed1085: ItemKeyRed {
		keyid = 3585;
	};
	class ItemKeyRed1086: ItemKeyRed {
		keyid = 3586;
	};
	class ItemKeyRed1087: ItemKeyRed {
		keyid = 3587;
	};
	class ItemKeyRed1088: ItemKeyRed {
		keyid = 3588;
	};
	class ItemKeyRed1089: ItemKeyRed {
		keyid = 3589;
	};
	class ItemKeyRed1090: ItemKeyRed {
		keyid = 3590;
	};
	class ItemKeyRed1091: ItemKeyRed {
		keyid = 3591;
	};
	class ItemKeyRed1092: ItemKeyRed {
		keyid = 3592;
	};
	class ItemKeyRed1093: ItemKeyRed {
		keyid = 3593;
	};
	class ItemKeyRed1094: ItemKeyRed {
		keyid = 3594;
	};
	class ItemKeyRed1095: ItemKeyRed {
		keyid = 3595;
	};
	class ItemKeyRed1096: ItemKeyRed {
		keyid = 3596;
	};
	class ItemKeyRed1097: ItemKeyRed {
		keyid = 3597;
	};
	class ItemKeyRed1098: ItemKeyRed {
		keyid = 3598;
	};
	class ItemKeyRed1099: ItemKeyRed {
		keyid = 3599;
	};
	class ItemKeyRed1100: ItemKeyRed {
		keyid = 3600;
	};
	class ItemKeyRed1101: ItemKeyRed {
		keyid = 3601;
	};
	class ItemKeyRed1102: ItemKeyRed {
		keyid = 3602;
	};
	class ItemKeyRed1103: ItemKeyRed {
		keyid = 3603;
	};
	class ItemKeyRed1104: ItemKeyRed {
		keyid = 3604;
	};
	class ItemKeyRed1105: ItemKeyRed {
		keyid = 3605;
	};
	class ItemKeyRed1106: ItemKeyRed {
		keyid = 3606;
	};
	class ItemKeyRed1107: ItemKeyRed {
		keyid = 3607;
	};
	class ItemKeyRed1108: ItemKeyRed {
		keyid = 3608;
	};
	class ItemKeyRed1109: ItemKeyRed {
		keyid = 3609;
	};
	class ItemKeyRed1110: ItemKeyRed {
		keyid = 3610;
	};
	class ItemKeyRed1111: ItemKeyRed {
		keyid = 3611;
	};
	class ItemKeyRed1112: ItemKeyRed {
		keyid = 3612;
	};
	class ItemKeyRed1113: ItemKeyRed {
		keyid = 3613;
	};
	class ItemKeyRed1114: ItemKeyRed {
		keyid = 3614;
	};
	class ItemKeyRed1115: ItemKeyRed {
		keyid = 3615;
	};
	class ItemKeyRed1116: ItemKeyRed {
		keyid = 3616;
	};
	class ItemKeyRed1117: ItemKeyRed {
		keyid = 3617;
	};
	class ItemKeyRed1118: ItemKeyRed {
		keyid = 3618;
	};
	class ItemKeyRed1119: ItemKeyRed {
		keyid = 3619;
	};
	class ItemKeyRed1120: ItemKeyRed {
		keyid = 3620;
	};
	class ItemKeyRed1121: ItemKeyRed {
		keyid = 3621;
	};
	class ItemKeyRed1122: ItemKeyRed {
		keyid = 3622;
	};
	class ItemKeyRed1123: ItemKeyRed {
		keyid = 3623;
	};
	class ItemKeyRed1124: ItemKeyRed {
		keyid = 3624;
	};
	class ItemKeyRed1125: ItemKeyRed {
		keyid = 3625;
	};
	class ItemKeyRed1126: ItemKeyRed {
		keyid = 3626;
	};
	class ItemKeyRed1127: ItemKeyRed {
		keyid = 3627;
	};
	class ItemKeyRed1128: ItemKeyRed {
		keyid = 3628;
	};
	class ItemKeyRed1129: ItemKeyRed {
		keyid = 3629;
	};
	class ItemKeyRed1130: ItemKeyRed {
		keyid = 3630;
	};
	class ItemKeyRed1131: ItemKeyRed {
		keyid = 3631;
	};
	class ItemKeyRed1132: ItemKeyRed {
		keyid = 3632;
	};
	class ItemKeyRed1133: ItemKeyRed {
		keyid = 3633;
	};
	class ItemKeyRed1134: ItemKeyRed {
		keyid = 3634;
	};
	class ItemKeyRed1135: ItemKeyRed {
		keyid = 3635;
	};
	class ItemKeyRed1136: ItemKeyRed {
		keyid = 3636;
	};
	class ItemKeyRed1137: ItemKeyRed {
		keyid = 3637;
	};
	class ItemKeyRed1138: ItemKeyRed {
		keyid = 3638;
	};
	class ItemKeyRed1139: ItemKeyRed {
		keyid = 3639;
	};
	class ItemKeyRed1140: ItemKeyRed {
		keyid = 3640;
	};
	class ItemKeyRed1141: ItemKeyRed {
		keyid = 3641;
	};
	class ItemKeyRed1142: ItemKeyRed {
		keyid = 3642;
	};
	class ItemKeyRed1143: ItemKeyRed {
		keyid = 3643;
	};
	class ItemKeyRed1144: ItemKeyRed {
		keyid = 3644;
	};
	class ItemKeyRed1145: ItemKeyRed {
		keyid = 3645;
	};
	class ItemKeyRed1146: ItemKeyRed {
		keyid = 3646;
	};
	class ItemKeyRed1147: ItemKeyRed {
		keyid = 3647;
	};
	class ItemKeyRed1148: ItemKeyRed {
		keyid = 3648;
	};
	class ItemKeyRed1149: ItemKeyRed {
		keyid = 3649;
	};
	class ItemKeyRed1150: ItemKeyRed {
		keyid = 3650;
	};
	class ItemKeyRed1151: ItemKeyRed {
		keyid = 3651;
	};
	class ItemKeyRed1152: ItemKeyRed {
		keyid = 3652;
	};
	class ItemKeyRed1153: ItemKeyRed {
		keyid = 3653;
	};
	class ItemKeyRed1154: ItemKeyRed {
		keyid = 3654;
	};
	class ItemKeyRed1155: ItemKeyRed {
		keyid = 3655;
	};
	class ItemKeyRed1156: ItemKeyRed {
		keyid = 3656;
	};
	class ItemKeyRed1157: ItemKeyRed {
		keyid = 3657;
	};
	class ItemKeyRed1158: ItemKeyRed {
		keyid = 3658;
	};
	class ItemKeyRed1159: ItemKeyRed {
		keyid = 3659;
	};
	class ItemKeyRed1160: ItemKeyRed {
		keyid = 3660;
	};
	class ItemKeyRed1161: ItemKeyRed {
		keyid = 3661;
	};
	class ItemKeyRed1162: ItemKeyRed {
		keyid = 3662;
	};
	class ItemKeyRed1163: ItemKeyRed {
		keyid = 3663;
	};
	class ItemKeyRed1164: ItemKeyRed {
		keyid = 3664;
	};
	class ItemKeyRed1165: ItemKeyRed {
		keyid = 3665;
	};
	class ItemKeyRed1166: ItemKeyRed {
		keyid = 3666;
	};
	class ItemKeyRed1167: ItemKeyRed {
		keyid = 3667;
	};
	class ItemKeyRed1168: ItemKeyRed {
		keyid = 3668;
	};
	class ItemKeyRed1169: ItemKeyRed {
		keyid = 3669;
	};
	class ItemKeyRed1170: ItemKeyRed {
		keyid = 3670;
	};
	class ItemKeyRed1171: ItemKeyRed {
		keyid = 3671;
	};
	class ItemKeyRed1172: ItemKeyRed {
		keyid = 3672;
	};
	class ItemKeyRed1173: ItemKeyRed {
		keyid = 3673;
	};
	class ItemKeyRed1174: ItemKeyRed {
		keyid = 3674;
	};
	class ItemKeyRed1175: ItemKeyRed {
		keyid = 3675;
	};
	class ItemKeyRed1176: ItemKeyRed {
		keyid = 3676;
	};
	class ItemKeyRed1177: ItemKeyRed {
		keyid = 3677;
	};
	class ItemKeyRed1178: ItemKeyRed {
		keyid = 3678;
	};
	class ItemKeyRed1179: ItemKeyRed {
		keyid = 3679;
	};
	class ItemKeyRed1180: ItemKeyRed {
		keyid = 3680;
	};
	class ItemKeyRed1181: ItemKeyRed {
		keyid = 3681;
	};
	class ItemKeyRed1182: ItemKeyRed {
		keyid = 3682;
	};
	class ItemKeyRed1183: ItemKeyRed {
		keyid = 3683;
	};
	class ItemKeyRed1184: ItemKeyRed {
		keyid = 3684;
	};
	class ItemKeyRed1185: ItemKeyRed {
		keyid = 3685;
	};
	class ItemKeyRed1186: ItemKeyRed {
		keyid = 3686;
	};
	class ItemKeyRed1187: ItemKeyRed {
		keyid = 3687;
	};
	class ItemKeyRed1188: ItemKeyRed {
		keyid = 3688;
	};
	class ItemKeyRed1189: ItemKeyRed {
		keyid = 3689;
	};
	class ItemKeyRed1190: ItemKeyRed {
		keyid = 3690;
	};
	class ItemKeyRed1191: ItemKeyRed {
		keyid = 3691;
	};
	class ItemKeyRed1192: ItemKeyRed {
		keyid = 3692;
	};
	class ItemKeyRed1193: ItemKeyRed {
		keyid = 3693;
	};
	class ItemKeyRed1194: ItemKeyRed {
		keyid = 3694;
	};
	class ItemKeyRed1195: ItemKeyRed {
		keyid = 3695;
	};
	class ItemKeyRed1196: ItemKeyRed {
		keyid = 3696;
	};
	class ItemKeyRed1197: ItemKeyRed {
		keyid = 3697;
	};
	class ItemKeyRed1198: ItemKeyRed {
		keyid = 3698;
	};
	class ItemKeyRed1199: ItemKeyRed {
		keyid = 3699;
	};
	class ItemKeyRed1200: ItemKeyRed {
		keyid = 3700;
	};
	class ItemKeyRed1201: ItemKeyRed {
		keyid = 3701;
	};
	class ItemKeyRed1202: ItemKeyRed {
		keyid = 3702;
	};
	class ItemKeyRed1203: ItemKeyRed {
		keyid = 3703;
	};
	class ItemKeyRed1204: ItemKeyRed {
		keyid = 3704;
	};
	class ItemKeyRed1205: ItemKeyRed {
		keyid = 3705;
	};
	class ItemKeyRed1206: ItemKeyRed {
		keyid = 3706;
	};
	class ItemKeyRed1207: ItemKeyRed {
		keyid = 3707;
	};
	class ItemKeyRed1208: ItemKeyRed {
		keyid = 3708;
	};
	class ItemKeyRed1209: ItemKeyRed {
		keyid = 3709;
	};
	class ItemKeyRed1210: ItemKeyRed {
		keyid = 3710;
	};
	class ItemKeyRed1211: ItemKeyRed {
		keyid = 3711;
	};
	class ItemKeyRed1212: ItemKeyRed {
		keyid = 3712;
	};
	class ItemKeyRed1213: ItemKeyRed {
		keyid = 3713;
	};
	class ItemKeyRed1214: ItemKeyRed {
		keyid = 3714;
	};
	class ItemKeyRed1215: ItemKeyRed {
		keyid = 3715;
	};
	class ItemKeyRed1216: ItemKeyRed {
		keyid = 3716;
	};
	class ItemKeyRed1217: ItemKeyRed {
		keyid = 3717;
	};
	class ItemKeyRed1218: ItemKeyRed {
		keyid = 3718;
	};
	class ItemKeyRed1219: ItemKeyRed {
		keyid = 3719;
	};
	class ItemKeyRed1220: ItemKeyRed {
		keyid = 3720;
	};
	class ItemKeyRed1221: ItemKeyRed {
		keyid = 3721;
	};
	class ItemKeyRed1222: ItemKeyRed {
		keyid = 3722;
	};
	class ItemKeyRed1223: ItemKeyRed {
		keyid = 3723;
	};
	class ItemKeyRed1224: ItemKeyRed {
		keyid = 3724;
	};
	class ItemKeyRed1225: ItemKeyRed {
		keyid = 3725;
	};
	class ItemKeyRed1226: ItemKeyRed {
		keyid = 3726;
	};
	class ItemKeyRed1227: ItemKeyRed {
		keyid = 3727;
	};
	class ItemKeyRed1228: ItemKeyRed {
		keyid = 3728;
	};
	class ItemKeyRed1229: ItemKeyRed {
		keyid = 3729;
	};
	class ItemKeyRed1230: ItemKeyRed {
		keyid = 3730;
	};
	class ItemKeyRed1231: ItemKeyRed {
		keyid = 3731;
	};
	class ItemKeyRed1232: ItemKeyRed {
		keyid = 3732;
	};
	class ItemKeyRed1233: ItemKeyRed {
		keyid = 3733;
	};
	class ItemKeyRed1234: ItemKeyRed {
		keyid = 3734;
	};
	class ItemKeyRed1235: ItemKeyRed {
		keyid = 3735;
	};
	class ItemKeyRed1236: ItemKeyRed {
		keyid = 3736;
	};
	class ItemKeyRed1237: ItemKeyRed {
		keyid = 3737;
	};
	class ItemKeyRed1238: ItemKeyRed {
		keyid = 3738;
	};
	class ItemKeyRed1239: ItemKeyRed {
		keyid = 3739;
	};
	class ItemKeyRed1240: ItemKeyRed {
		keyid = 3740;
	};
	class ItemKeyRed1241: ItemKeyRed {
		keyid = 3741;
	};
	class ItemKeyRed1242: ItemKeyRed {
		keyid = 3742;
	};
	class ItemKeyRed1243: ItemKeyRed {
		keyid = 3743;
	};
	class ItemKeyRed1244: ItemKeyRed {
		keyid = 3744;
	};
	class ItemKeyRed1245: ItemKeyRed {
		keyid = 3745;
	};
	class ItemKeyRed1246: ItemKeyRed {
		keyid = 3746;
	};
	class ItemKeyRed1247: ItemKeyRed {
		keyid = 3747;
	};
	class ItemKeyRed1248: ItemKeyRed {
		keyid = 3748;
	};
	class ItemKeyRed1249: ItemKeyRed {
		keyid = 3749;
	};
	class ItemKeyRed1250: ItemKeyRed {
		keyid = 3750;
	};
	class ItemKeyRed1251: ItemKeyRed {
		keyid = 3751;
	};
	class ItemKeyRed1252: ItemKeyRed {
		keyid = 3752;
	};
	class ItemKeyRed1253: ItemKeyRed {
		keyid = 3753;
	};
	class ItemKeyRed1254: ItemKeyRed {
		keyid = 3754;
	};
	class ItemKeyRed1255: ItemKeyRed {
		keyid = 3755;
	};
	class ItemKeyRed1256: ItemKeyRed {
		keyid = 3756;
	};
	class ItemKeyRed1257: ItemKeyRed {
		keyid = 3757;
	};
	class ItemKeyRed1258: ItemKeyRed {
		keyid = 3758;
	};
	class ItemKeyRed1259: ItemKeyRed {
		keyid = 3759;
	};
	class ItemKeyRed1260: ItemKeyRed {
		keyid = 3760;
	};
	class ItemKeyRed1261: ItemKeyRed {
		keyid = 3761;
	};
	class ItemKeyRed1262: ItemKeyRed {
		keyid = 3762;
	};
	class ItemKeyRed1263: ItemKeyRed {
		keyid = 3763;
	};
	class ItemKeyRed1264: ItemKeyRed {
		keyid = 3764;
	};
	class ItemKeyRed1265: ItemKeyRed {
		keyid = 3765;
	};
	class ItemKeyRed1266: ItemKeyRed {
		keyid = 3766;
	};
	class ItemKeyRed1267: ItemKeyRed {
		keyid = 3767;
	};
	class ItemKeyRed1268: ItemKeyRed {
		keyid = 3768;
	};
	class ItemKeyRed1269: ItemKeyRed {
		keyid = 3769;
	};
	class ItemKeyRed1270: ItemKeyRed {
		keyid = 3770;
	};
	class ItemKeyRed1271: ItemKeyRed {
		keyid = 3771;
	};
	class ItemKeyRed1272: ItemKeyRed {
		keyid = 3772;
	};
	class ItemKeyRed1273: ItemKeyRed {
		keyid = 3773;
	};
	class ItemKeyRed1274: ItemKeyRed {
		keyid = 3774;
	};
	class ItemKeyRed1275: ItemKeyRed {
		keyid = 3775;
	};
	class ItemKeyRed1276: ItemKeyRed {
		keyid = 3776;
	};
	class ItemKeyRed1277: ItemKeyRed {
		keyid = 3777;
	};
	class ItemKeyRed1278: ItemKeyRed {
		keyid = 3778;
	};
	class ItemKeyRed1279: ItemKeyRed {
		keyid = 3779;
	};
	class ItemKeyRed1280: ItemKeyRed {
		keyid = 3780;
	};
	class ItemKeyRed1281: ItemKeyRed {
		keyid = 3781;
	};
	class ItemKeyRed1282: ItemKeyRed {
		keyid = 3782;
	};
	class ItemKeyRed1283: ItemKeyRed {
		keyid = 3783;
	};
	class ItemKeyRed1284: ItemKeyRed {
		keyid = 3784;
	};
	class ItemKeyRed1285: ItemKeyRed {
		keyid = 3785;
	};
	class ItemKeyRed1286: ItemKeyRed {
		keyid = 3786;
	};
	class ItemKeyRed1287: ItemKeyRed {
		keyid = 3787;
	};
	class ItemKeyRed1288: ItemKeyRed {
		keyid = 3788;
	};
	class ItemKeyRed1289: ItemKeyRed {
		keyid = 3789;
	};
	class ItemKeyRed1290: ItemKeyRed {
		keyid = 3790;
	};
	class ItemKeyRed1291: ItemKeyRed {
		keyid = 3791;
	};
	class ItemKeyRed1292: ItemKeyRed {
		keyid = 3792;
	};
	class ItemKeyRed1293: ItemKeyRed {
		keyid = 3793;
	};
	class ItemKeyRed1294: ItemKeyRed {
		keyid = 3794;
	};
	class ItemKeyRed1295: ItemKeyRed {
		keyid = 3795;
	};
	class ItemKeyRed1296: ItemKeyRed {
		keyid = 3796;
	};
	class ItemKeyRed1297: ItemKeyRed {
		keyid = 3797;
	};
	class ItemKeyRed1298: ItemKeyRed {
		keyid = 3798;
	};
	class ItemKeyRed1299: ItemKeyRed {
		keyid = 3799;
	};
	class ItemKeyRed1300: ItemKeyRed {
		keyid = 3800;
	};
	class ItemKeyRed1301: ItemKeyRed {
		keyid = 3801;
	};
	class ItemKeyRed1302: ItemKeyRed {
		keyid = 3802;
	};
	class ItemKeyRed1303: ItemKeyRed {
		keyid = 3803;
	};
	class ItemKeyRed1304: ItemKeyRed {
		keyid = 3804;
	};
	class ItemKeyRed1305: ItemKeyRed {
		keyid = 3805;
	};
	class ItemKeyRed1306: ItemKeyRed {
		keyid = 3806;
	};
	class ItemKeyRed1307: ItemKeyRed {
		keyid = 3807;
	};
	class ItemKeyRed1308: ItemKeyRed {
		keyid = 3808;
	};
	class ItemKeyRed1309: ItemKeyRed {
		keyid = 3809;
	};
	class ItemKeyRed1310: ItemKeyRed {
		keyid = 3810;
	};
	class ItemKeyRed1311: ItemKeyRed {
		keyid = 3811;
	};
	class ItemKeyRed1312: ItemKeyRed {
		keyid = 3812;
	};
	class ItemKeyRed1313: ItemKeyRed {
		keyid = 3813;
	};
	class ItemKeyRed1314: ItemKeyRed {
		keyid = 3814;
	};
	class ItemKeyRed1315: ItemKeyRed {
		keyid = 3815;
	};
	class ItemKeyRed1316: ItemKeyRed {
		keyid = 3816;
	};
	class ItemKeyRed1317: ItemKeyRed {
		keyid = 3817;
	};
	class ItemKeyRed1318: ItemKeyRed {
		keyid = 3818;
	};
	class ItemKeyRed1319: ItemKeyRed {
		keyid = 3819;
	};
	class ItemKeyRed1320: ItemKeyRed {
		keyid = 3820;
	};
	class ItemKeyRed1321: ItemKeyRed {
		keyid = 3821;
	};
	class ItemKeyRed1322: ItemKeyRed {
		keyid = 3822;
	};
	class ItemKeyRed1323: ItemKeyRed {
		keyid = 3823;
	};
	class ItemKeyRed1324: ItemKeyRed {
		keyid = 3824;
	};
	class ItemKeyRed1325: ItemKeyRed {
		keyid = 3825;
	};
	class ItemKeyRed1326: ItemKeyRed {
		keyid = 3826;
	};
	class ItemKeyRed1327: ItemKeyRed {
		keyid = 3827;
	};
	class ItemKeyRed1328: ItemKeyRed {
		keyid = 3828;
	};
	class ItemKeyRed1329: ItemKeyRed {
		keyid = 3829;
	};
	class ItemKeyRed1330: ItemKeyRed {
		keyid = 3830;
	};
	class ItemKeyRed1331: ItemKeyRed {
		keyid = 3831;
	};
	class ItemKeyRed1332: ItemKeyRed {
		keyid = 3832;
	};
	class ItemKeyRed1333: ItemKeyRed {
		keyid = 3833;
	};
	class ItemKeyRed1334: ItemKeyRed {
		keyid = 3834;
	};
	class ItemKeyRed1335: ItemKeyRed {
		keyid = 3835;
	};
	class ItemKeyRed1336: ItemKeyRed {
		keyid = 3836;
	};
	class ItemKeyRed1337: ItemKeyRed {
		keyid = 3837;
	};
	class ItemKeyRed1338: ItemKeyRed {
		keyid = 3838;
	};
	class ItemKeyRed1339: ItemKeyRed {
		keyid = 3839;
	};
	class ItemKeyRed1340: ItemKeyRed {
		keyid = 3840;
	};
	class ItemKeyRed1341: ItemKeyRed {
		keyid = 3841;
	};
	class ItemKeyRed1342: ItemKeyRed {
		keyid = 3842;
	};
	class ItemKeyRed1343: ItemKeyRed {
		keyid = 3843;
	};
	class ItemKeyRed1344: ItemKeyRed {
		keyid = 3844;
	};
	class ItemKeyRed1345: ItemKeyRed {
		keyid = 3845;
	};
	class ItemKeyRed1346: ItemKeyRed {
		keyid = 3846;
	};
	class ItemKeyRed1347: ItemKeyRed {
		keyid = 3847;
	};
	class ItemKeyRed1348: ItemKeyRed {
		keyid = 3848;
	};
	class ItemKeyRed1349: ItemKeyRed {
		keyid = 3849;
	};
	class ItemKeyRed1350: ItemKeyRed {
		keyid = 3850;
	};
	class ItemKeyRed1351: ItemKeyRed {
		keyid = 3851;
	};
	class ItemKeyRed1352: ItemKeyRed {
		keyid = 3852;
	};
	class ItemKeyRed1353: ItemKeyRed {
		keyid = 3853;
	};
	class ItemKeyRed1354: ItemKeyRed {
		keyid = 3854;
	};
	class ItemKeyRed1355: ItemKeyRed {
		keyid = 3855;
	};
	class ItemKeyRed1356: ItemKeyRed {
		keyid = 3856;
	};
	class ItemKeyRed1357: ItemKeyRed {
		keyid = 3857;
	};
	class ItemKeyRed1358: ItemKeyRed {
		keyid = 3858;
	};
	class ItemKeyRed1359: ItemKeyRed {
		keyid = 3859;
	};
	class ItemKeyRed1360: ItemKeyRed {
		keyid = 3860;
	};
	class ItemKeyRed1361: ItemKeyRed {
		keyid = 3861;
	};
	class ItemKeyRed1362: ItemKeyRed {
		keyid = 3862;
	};
	class ItemKeyRed1363: ItemKeyRed {
		keyid = 3863;
	};
	class ItemKeyRed1364: ItemKeyRed {
		keyid = 3864;
	};
	class ItemKeyRed1365: ItemKeyRed {
		keyid = 3865;
	};
	class ItemKeyRed1366: ItemKeyRed {
		keyid = 3866;
	};
	class ItemKeyRed1367: ItemKeyRed {
		keyid = 3867;
	};
	class ItemKeyRed1368: ItemKeyRed {
		keyid = 3868;
	};
	class ItemKeyRed1369: ItemKeyRed {
		keyid = 3869;
	};
	class ItemKeyRed1370: ItemKeyRed {
		keyid = 3870;
	};
	class ItemKeyRed1371: ItemKeyRed {
		keyid = 3871;
	};
	class ItemKeyRed1372: ItemKeyRed {
		keyid = 3872;
	};
	class ItemKeyRed1373: ItemKeyRed {
		keyid = 3873;
	};
	class ItemKeyRed1374: ItemKeyRed {
		keyid = 3874;
	};
	class ItemKeyRed1375: ItemKeyRed {
		keyid = 3875;
	};
	class ItemKeyRed1376: ItemKeyRed {
		keyid = 3876;
	};
	class ItemKeyRed1377: ItemKeyRed {
		keyid = 3877;
	};
	class ItemKeyRed1378: ItemKeyRed {
		keyid = 3878;
	};
	class ItemKeyRed1379: ItemKeyRed {
		keyid = 3879;
	};
	class ItemKeyRed1380: ItemKeyRed {
		keyid = 3880;
	};
	class ItemKeyRed1381: ItemKeyRed {
		keyid = 3881;
	};
	class ItemKeyRed1382: ItemKeyRed {
		keyid = 3882;
	};
	class ItemKeyRed1383: ItemKeyRed {
		keyid = 3883;
	};
	class ItemKeyRed1384: ItemKeyRed {
		keyid = 3884;
	};
	class ItemKeyRed1385: ItemKeyRed {
		keyid = 3885;
	};
	class ItemKeyRed1386: ItemKeyRed {
		keyid = 3886;
	};
	class ItemKeyRed1387: ItemKeyRed {
		keyid = 3887;
	};
	class ItemKeyRed1388: ItemKeyRed {
		keyid = 3888;
	};
	class ItemKeyRed1389: ItemKeyRed {
		keyid = 3889;
	};
	class ItemKeyRed1390: ItemKeyRed {
		keyid = 3890;
	};
	class ItemKeyRed1391: ItemKeyRed {
		keyid = 3891;
	};
	class ItemKeyRed1392: ItemKeyRed {
		keyid = 3892;
	};
	class ItemKeyRed1393: ItemKeyRed {
		keyid = 3893;
	};
	class ItemKeyRed1394: ItemKeyRed {
		keyid = 3894;
	};
	class ItemKeyRed1395: ItemKeyRed {
		keyid = 3895;
	};
	class ItemKeyRed1396: ItemKeyRed {
		keyid = 3896;
	};
	class ItemKeyRed1397: ItemKeyRed {
		keyid = 3897;
	};
	class ItemKeyRed1398: ItemKeyRed {
		keyid = 3898;
	};
	class ItemKeyRed1399: ItemKeyRed {
		keyid = 3899;
	};
	class ItemKeyRed1400: ItemKeyRed {
		keyid = 3900;
	};
	class ItemKeyRed1401: ItemKeyRed {
		keyid = 3901;
	};
	class ItemKeyRed1402: ItemKeyRed {
		keyid = 3902;
	};
	class ItemKeyRed1403: ItemKeyRed {
		keyid = 3903;
	};
	class ItemKeyRed1404: ItemKeyRed {
		keyid = 3904;
	};
	class ItemKeyRed1405: ItemKeyRed {
		keyid = 3905;
	};
	class ItemKeyRed1406: ItemKeyRed {
		keyid = 3906;
	};
	class ItemKeyRed1407: ItemKeyRed {
		keyid = 3907;
	};
	class ItemKeyRed1408: ItemKeyRed {
		keyid = 3908;
	};
	class ItemKeyRed1409: ItemKeyRed {
		keyid = 3909;
	};
	class ItemKeyRed1410: ItemKeyRed {
		keyid = 3910;
	};
	class ItemKeyRed1411: ItemKeyRed {
		keyid = 3911;
	};
	class ItemKeyRed1412: ItemKeyRed {
		keyid = 3912;
	};
	class ItemKeyRed1413: ItemKeyRed {
		keyid = 3913;
	};
	class ItemKeyRed1414: ItemKeyRed {
		keyid = 3914;
	};
	class ItemKeyRed1415: ItemKeyRed {
		keyid = 3915;
	};
	class ItemKeyRed1416: ItemKeyRed {
		keyid = 3916;
	};
	class ItemKeyRed1417: ItemKeyRed {
		keyid = 3917;
	};
	class ItemKeyRed1418: ItemKeyRed {
		keyid = 3918;
	};
	class ItemKeyRed1419: ItemKeyRed {
		keyid = 3919;
	};
	class ItemKeyRed1420: ItemKeyRed {
		keyid = 3920;
	};
	class ItemKeyRed1421: ItemKeyRed {
		keyid = 3921;
	};
	class ItemKeyRed1422: ItemKeyRed {
		keyid = 3922;
	};
	class ItemKeyRed1423: ItemKeyRed {
		keyid = 3923;
	};
	class ItemKeyRed1424: ItemKeyRed {
		keyid = 3924;
	};
	class ItemKeyRed1425: ItemKeyRed {
		keyid = 3925;
	};
	class ItemKeyRed1426: ItemKeyRed {
		keyid = 3926;
	};
	class ItemKeyRed1427: ItemKeyRed {
		keyid = 3927;
	};
	class ItemKeyRed1428: ItemKeyRed {
		keyid = 3928;
	};
	class ItemKeyRed1429: ItemKeyRed {
		keyid = 3929;
	};
	class ItemKeyRed1430: ItemKeyRed {
		keyid = 3930;
	};
	class ItemKeyRed1431: ItemKeyRed {
		keyid = 3931;
	};
	class ItemKeyRed1432: ItemKeyRed {
		keyid = 3932;
	};
	class ItemKeyRed1433: ItemKeyRed {
		keyid = 3933;
	};
	class ItemKeyRed1434: ItemKeyRed {
		keyid = 3934;
	};
	class ItemKeyRed1435: ItemKeyRed {
		keyid = 3935;
	};
	class ItemKeyRed1436: ItemKeyRed {
		keyid = 3936;
	};
	class ItemKeyRed1437: ItemKeyRed {
		keyid = 3937;
	};
	class ItemKeyRed1438: ItemKeyRed {
		keyid = 3938;
	};
	class ItemKeyRed1439: ItemKeyRed {
		keyid = 3939;
	};
	class ItemKeyRed1440: ItemKeyRed {
		keyid = 3940;
	};
	class ItemKeyRed1441: ItemKeyRed {
		keyid = 3941;
	};
	class ItemKeyRed1442: ItemKeyRed {
		keyid = 3942;
	};
	class ItemKeyRed1443: ItemKeyRed {
		keyid = 3943;
	};
	class ItemKeyRed1444: ItemKeyRed {
		keyid = 3944;
	};
	class ItemKeyRed1445: ItemKeyRed {
		keyid = 3945;
	};
	class ItemKeyRed1446: ItemKeyRed {
		keyid = 3946;
	};
	class ItemKeyRed1447: ItemKeyRed {
		keyid = 3947;
	};
	class ItemKeyRed1448: ItemKeyRed {
		keyid = 3948;
	};
	class ItemKeyRed1449: ItemKeyRed {
		keyid = 3949;
	};
	class ItemKeyRed1450: ItemKeyRed {
		keyid = 3950;
	};
	class ItemKeyRed1451: ItemKeyRed {
		keyid = 3951;
	};
	class ItemKeyRed1452: ItemKeyRed {
		keyid = 3952;
	};
	class ItemKeyRed1453: ItemKeyRed {
		keyid = 3953;
	};
	class ItemKeyRed1454: ItemKeyRed {
		keyid = 3954;
	};
	class ItemKeyRed1455: ItemKeyRed {
		keyid = 3955;
	};
	class ItemKeyRed1456: ItemKeyRed {
		keyid = 3956;
	};
	class ItemKeyRed1457: ItemKeyRed {
		keyid = 3957;
	};
	class ItemKeyRed1458: ItemKeyRed {
		keyid = 3958;
	};
	class ItemKeyRed1459: ItemKeyRed {
		keyid = 3959;
	};
	class ItemKeyRed1460: ItemKeyRed {
		keyid = 3960;
	};
	class ItemKeyRed1461: ItemKeyRed {
		keyid = 3961;
	};
	class ItemKeyRed1462: ItemKeyRed {
		keyid = 3962;
	};
	class ItemKeyRed1463: ItemKeyRed {
		keyid = 3963;
	};
	class ItemKeyRed1464: ItemKeyRed {
		keyid = 3964;
	};
	class ItemKeyRed1465: ItemKeyRed {
		keyid = 3965;
	};
	class ItemKeyRed1466: ItemKeyRed {
		keyid = 3966;
	};
	class ItemKeyRed1467: ItemKeyRed {
		keyid = 3967;
	};
	class ItemKeyRed1468: ItemKeyRed {
		keyid = 3968;
	};
	class ItemKeyRed1469: ItemKeyRed {
		keyid = 3969;
	};
	class ItemKeyRed1470: ItemKeyRed {
		keyid = 3970;
	};
	class ItemKeyRed1471: ItemKeyRed {
		keyid = 3971;
	};
	class ItemKeyRed1472: ItemKeyRed {
		keyid = 3972;
	};
	class ItemKeyRed1473: ItemKeyRed {
		keyid = 3973;
	};
	class ItemKeyRed1474: ItemKeyRed {
		keyid = 3974;
	};
	class ItemKeyRed1475: ItemKeyRed {
		keyid = 3975;
	};
	class ItemKeyRed1476: ItemKeyRed {
		keyid = 3976;
	};
	class ItemKeyRed1477: ItemKeyRed {
		keyid = 3977;
	};
	class ItemKeyRed1478: ItemKeyRed {
		keyid = 3978;
	};
	class ItemKeyRed1479: ItemKeyRed {
		keyid = 3979;
	};
	class ItemKeyRed1480: ItemKeyRed {
		keyid = 3980;
	};
	class ItemKeyRed1481: ItemKeyRed {
		keyid = 3981;
	};
	class ItemKeyRed1482: ItemKeyRed {
		keyid = 3982;
	};
	class ItemKeyRed1483: ItemKeyRed {
		keyid = 3983;
	};
	class ItemKeyRed1484: ItemKeyRed {
		keyid = 3984;
	};
	class ItemKeyRed1485: ItemKeyRed {
		keyid = 3985;
	};
	class ItemKeyRed1486: ItemKeyRed {
		keyid = 3986;
	};
	class ItemKeyRed1487: ItemKeyRed {
		keyid = 3987;
	};
	class ItemKeyRed1488: ItemKeyRed {
		keyid = 3988;
	};
	class ItemKeyRed1489: ItemKeyRed {
		keyid = 3989;
	};
	class ItemKeyRed1490: ItemKeyRed {
		keyid = 3990;
	};
	class ItemKeyRed1491: ItemKeyRed {
		keyid = 3991;
	};
	class ItemKeyRed1492: ItemKeyRed {
		keyid = 3992;
	};
	class ItemKeyRed1493: ItemKeyRed {
		keyid = 3993;
	};
	class ItemKeyRed1494: ItemKeyRed {
		keyid = 3994;
	};
	class ItemKeyRed1495: ItemKeyRed {
		keyid = 3995;
	};
	class ItemKeyRed1496: ItemKeyRed {
		keyid = 3996;
	};
	class ItemKeyRed1497: ItemKeyRed {
		keyid = 3997;
	};
	class ItemKeyRed1498: ItemKeyRed {
		keyid = 3998;
	};
	class ItemKeyRed1499: ItemKeyRed {
		keyid = 3999;
	};
	class ItemKeyRed1500: ItemKeyRed {
		keyid = 4000;
	};
	class ItemKeyRed1501: ItemKeyRed {
		keyid = 4001;
	};
	class ItemKeyRed1502: ItemKeyRed {
		keyid = 4002;
	};
	class ItemKeyRed1503: ItemKeyRed {
		keyid = 4003;
	};
	class ItemKeyRed1504: ItemKeyRed {
		keyid = 4004;
	};
	class ItemKeyRed1505: ItemKeyRed {
		keyid = 4005;
	};
	class ItemKeyRed1506: ItemKeyRed {
		keyid = 4006;
	};
	class ItemKeyRed1507: ItemKeyRed {
		keyid = 4007;
	};
	class ItemKeyRed1508: ItemKeyRed {
		keyid = 4008;
	};
	class ItemKeyRed1509: ItemKeyRed {
		keyid = 4009;
	};
	class ItemKeyRed1510: ItemKeyRed {
		keyid = 4010;
	};
	class ItemKeyRed1511: ItemKeyRed {
		keyid = 4011;
	};
	class ItemKeyRed1512: ItemKeyRed {
		keyid = 4012;
	};
	class ItemKeyRed1513: ItemKeyRed {
		keyid = 4013;
	};
	class ItemKeyRed1514: ItemKeyRed {
		keyid = 4014;
	};
	class ItemKeyRed1515: ItemKeyRed {
		keyid = 4015;
	};
	class ItemKeyRed1516: ItemKeyRed {
		keyid = 4016;
	};
	class ItemKeyRed1517: ItemKeyRed {
		keyid = 4017;
	};
	class ItemKeyRed1518: ItemKeyRed {
		keyid = 4018;
	};
	class ItemKeyRed1519: ItemKeyRed {
		keyid = 4019;
	};
	class ItemKeyRed1520: ItemKeyRed {
		keyid = 4020;
	};
	class ItemKeyRed1521: ItemKeyRed {
		keyid = 4021;
	};
	class ItemKeyRed1522: ItemKeyRed {
		keyid = 4022;
	};
	class ItemKeyRed1523: ItemKeyRed {
		keyid = 4023;
	};
	class ItemKeyRed1524: ItemKeyRed {
		keyid = 4024;
	};
	class ItemKeyRed1525: ItemKeyRed {
		keyid = 4025;
	};
	class ItemKeyRed1526: ItemKeyRed {
		keyid = 4026;
	};
	class ItemKeyRed1527: ItemKeyRed {
		keyid = 4027;
	};
	class ItemKeyRed1528: ItemKeyRed {
		keyid = 4028;
	};
	class ItemKeyRed1529: ItemKeyRed {
		keyid = 4029;
	};
	class ItemKeyRed1530: ItemKeyRed {
		keyid = 4030;
	};
	class ItemKeyRed1531: ItemKeyRed {
		keyid = 4031;
	};
	class ItemKeyRed1532: ItemKeyRed {
		keyid = 4032;
	};
	class ItemKeyRed1533: ItemKeyRed {
		keyid = 4033;
	};
	class ItemKeyRed1534: ItemKeyRed {
		keyid = 4034;
	};
	class ItemKeyRed1535: ItemKeyRed {
		keyid = 4035;
	};
	class ItemKeyRed1536: ItemKeyRed {
		keyid = 4036;
	};
	class ItemKeyRed1537: ItemKeyRed {
		keyid = 4037;
	};
	class ItemKeyRed1538: ItemKeyRed {
		keyid = 4038;
	};
	class ItemKeyRed1539: ItemKeyRed {
		keyid = 4039;
	};
	class ItemKeyRed1540: ItemKeyRed {
		keyid = 4040;
	};
	class ItemKeyRed1541: ItemKeyRed {
		keyid = 4041;
	};
	class ItemKeyRed1542: ItemKeyRed {
		keyid = 4042;
	};
	class ItemKeyRed1543: ItemKeyRed {
		keyid = 4043;
	};
	class ItemKeyRed1544: ItemKeyRed {
		keyid = 4044;
	};
	class ItemKeyRed1545: ItemKeyRed {
		keyid = 4045;
	};
	class ItemKeyRed1546: ItemKeyRed {
		keyid = 4046;
	};
	class ItemKeyRed1547: ItemKeyRed {
		keyid = 4047;
	};
	class ItemKeyRed1548: ItemKeyRed {
		keyid = 4048;
	};
	class ItemKeyRed1549: ItemKeyRed {
		keyid = 4049;
	};
	class ItemKeyRed1550: ItemKeyRed {
		keyid = 4050;
	};
	class ItemKeyRed1551: ItemKeyRed {
		keyid = 4051;
	};
	class ItemKeyRed1552: ItemKeyRed {
		keyid = 4052;
	};
	class ItemKeyRed1553: ItemKeyRed {
		keyid = 4053;
	};
	class ItemKeyRed1554: ItemKeyRed {
		keyid = 4054;
	};
	class ItemKeyRed1555: ItemKeyRed {
		keyid = 4055;
	};
	class ItemKeyRed1556: ItemKeyRed {
		keyid = 4056;
	};
	class ItemKeyRed1557: ItemKeyRed {
		keyid = 4057;
	};
	class ItemKeyRed1558: ItemKeyRed {
		keyid = 4058;
	};
	class ItemKeyRed1559: ItemKeyRed {
		keyid = 4059;
	};
	class ItemKeyRed1560: ItemKeyRed {
		keyid = 4060;
	};
	class ItemKeyRed1561: ItemKeyRed {
		keyid = 4061;
	};
	class ItemKeyRed1562: ItemKeyRed {
		keyid = 4062;
	};
	class ItemKeyRed1563: ItemKeyRed {
		keyid = 4063;
	};
	class ItemKeyRed1564: ItemKeyRed {
		keyid = 4064;
	};
	class ItemKeyRed1565: ItemKeyRed {
		keyid = 4065;
	};
	class ItemKeyRed1566: ItemKeyRed {
		keyid = 4066;
	};
	class ItemKeyRed1567: ItemKeyRed {
		keyid = 4067;
	};
	class ItemKeyRed1568: ItemKeyRed {
		keyid = 4068;
	};
	class ItemKeyRed1569: ItemKeyRed {
		keyid = 4069;
	};
	class ItemKeyRed1570: ItemKeyRed {
		keyid = 4070;
	};
	class ItemKeyRed1571: ItemKeyRed {
		keyid = 4071;
	};
	class ItemKeyRed1572: ItemKeyRed {
		keyid = 4072;
	};
	class ItemKeyRed1573: ItemKeyRed {
		keyid = 4073;
	};
	class ItemKeyRed1574: ItemKeyRed {
		keyid = 4074;
	};
	class ItemKeyRed1575: ItemKeyRed {
		keyid = 4075;
	};
	class ItemKeyRed1576: ItemKeyRed {
		keyid = 4076;
	};
	class ItemKeyRed1577: ItemKeyRed {
		keyid = 4077;
	};
	class ItemKeyRed1578: ItemKeyRed {
		keyid = 4078;
	};
	class ItemKeyRed1579: ItemKeyRed {
		keyid = 4079;
	};
	class ItemKeyRed1580: ItemKeyRed {
		keyid = 4080;
	};
	class ItemKeyRed1581: ItemKeyRed {
		keyid = 4081;
	};
	class ItemKeyRed1582: ItemKeyRed {
		keyid = 4082;
	};
	class ItemKeyRed1583: ItemKeyRed {
		keyid = 4083;
	};
	class ItemKeyRed1584: ItemKeyRed {
		keyid = 4084;
	};
	class ItemKeyRed1585: ItemKeyRed {
		keyid = 4085;
	};
	class ItemKeyRed1586: ItemKeyRed {
		keyid = 4086;
	};
	class ItemKeyRed1587: ItemKeyRed {
		keyid = 4087;
	};
	class ItemKeyRed1588: ItemKeyRed {
		keyid = 4088;
	};
	class ItemKeyRed1589: ItemKeyRed {
		keyid = 4089;
	};
	class ItemKeyRed1590: ItemKeyRed {
		keyid = 4090;
	};
	class ItemKeyRed1591: ItemKeyRed {
		keyid = 4091;
	};
	class ItemKeyRed1592: ItemKeyRed {
		keyid = 4092;
	};
	class ItemKeyRed1593: ItemKeyRed {
		keyid = 4093;
	};
	class ItemKeyRed1594: ItemKeyRed {
		keyid = 4094;
	};
	class ItemKeyRed1595: ItemKeyRed {
		keyid = 4095;
	};
	class ItemKeyRed1596: ItemKeyRed {
		keyid = 4096;
	};
	class ItemKeyRed1597: ItemKeyRed {
		keyid = 4097;
	};
	class ItemKeyRed1598: ItemKeyRed {
		keyid = 4098;
	};
	class ItemKeyRed1599: ItemKeyRed {
		keyid = 4099;
	};
	class ItemKeyRed1600: ItemKeyRed {
		keyid = 4100;
	};
	class ItemKeyRed1601: ItemKeyRed {
		keyid = 4101;
	};
	class ItemKeyRed1602: ItemKeyRed {
		keyid = 4102;
	};
	class ItemKeyRed1603: ItemKeyRed {
		keyid = 4103;
	};
	class ItemKeyRed1604: ItemKeyRed {
		keyid = 4104;
	};
	class ItemKeyRed1605: ItemKeyRed {
		keyid = 4105;
	};
	class ItemKeyRed1606: ItemKeyRed {
		keyid = 4106;
	};
	class ItemKeyRed1607: ItemKeyRed {
		keyid = 4107;
	};
	class ItemKeyRed1608: ItemKeyRed {
		keyid = 4108;
	};
	class ItemKeyRed1609: ItemKeyRed {
		keyid = 4109;
	};
	class ItemKeyRed1610: ItemKeyRed {
		keyid = 4110;
	};
	class ItemKeyRed1611: ItemKeyRed {
		keyid = 4111;
	};
	class ItemKeyRed1612: ItemKeyRed {
		keyid = 4112;
	};
	class ItemKeyRed1613: ItemKeyRed {
		keyid = 4113;
	};
	class ItemKeyRed1614: ItemKeyRed {
		keyid = 4114;
	};
	class ItemKeyRed1615: ItemKeyRed {
		keyid = 4115;
	};
	class ItemKeyRed1616: ItemKeyRed {
		keyid = 4116;
	};
	class ItemKeyRed1617: ItemKeyRed {
		keyid = 4117;
	};
	class ItemKeyRed1618: ItemKeyRed {
		keyid = 4118;
	};
	class ItemKeyRed1619: ItemKeyRed {
		keyid = 4119;
	};
	class ItemKeyRed1620: ItemKeyRed {
		keyid = 4120;
	};
	class ItemKeyRed1621: ItemKeyRed {
		keyid = 4121;
	};
	class ItemKeyRed1622: ItemKeyRed {
		keyid = 4122;
	};
	class ItemKeyRed1623: ItemKeyRed {
		keyid = 4123;
	};
	class ItemKeyRed1624: ItemKeyRed {
		keyid = 4124;
	};
	class ItemKeyRed1625: ItemKeyRed {
		keyid = 4125;
	};
	class ItemKeyRed1626: ItemKeyRed {
		keyid = 4126;
	};
	class ItemKeyRed1627: ItemKeyRed {
		keyid = 4127;
	};
	class ItemKeyRed1628: ItemKeyRed {
		keyid = 4128;
	};
	class ItemKeyRed1629: ItemKeyRed {
		keyid = 4129;
	};
	class ItemKeyRed1630: ItemKeyRed {
		keyid = 4130;
	};
	class ItemKeyRed1631: ItemKeyRed {
		keyid = 4131;
	};
	class ItemKeyRed1632: ItemKeyRed {
		keyid = 4132;
	};
	class ItemKeyRed1633: ItemKeyRed {
		keyid = 4133;
	};
	class ItemKeyRed1634: ItemKeyRed {
		keyid = 4134;
	};
	class ItemKeyRed1635: ItemKeyRed {
		keyid = 4135;
	};
	class ItemKeyRed1636: ItemKeyRed {
		keyid = 4136;
	};
	class ItemKeyRed1637: ItemKeyRed {
		keyid = 4137;
	};
	class ItemKeyRed1638: ItemKeyRed {
		keyid = 4138;
	};
	class ItemKeyRed1639: ItemKeyRed {
		keyid = 4139;
	};
	class ItemKeyRed1640: ItemKeyRed {
		keyid = 4140;
	};
	class ItemKeyRed1641: ItemKeyRed {
		keyid = 4141;
	};
	class ItemKeyRed1642: ItemKeyRed {
		keyid = 4142;
	};
	class ItemKeyRed1643: ItemKeyRed {
		keyid = 4143;
	};
	class ItemKeyRed1644: ItemKeyRed {
		keyid = 4144;
	};
	class ItemKeyRed1645: ItemKeyRed {
		keyid = 4145;
	};
	class ItemKeyRed1646: ItemKeyRed {
		keyid = 4146;
	};
	class ItemKeyRed1647: ItemKeyRed {
		keyid = 4147;
	};
	class ItemKeyRed1648: ItemKeyRed {
		keyid = 4148;
	};
	class ItemKeyRed1649: ItemKeyRed {
		keyid = 4149;
	};
	class ItemKeyRed1650: ItemKeyRed {
		keyid = 4150;
	};
	class ItemKeyRed1651: ItemKeyRed {
		keyid = 4151;
	};
	class ItemKeyRed1652: ItemKeyRed {
		keyid = 4152;
	};
	class ItemKeyRed1653: ItemKeyRed {
		keyid = 4153;
	};
	class ItemKeyRed1654: ItemKeyRed {
		keyid = 4154;
	};
	class ItemKeyRed1655: ItemKeyRed {
		keyid = 4155;
	};
	class ItemKeyRed1656: ItemKeyRed {
		keyid = 4156;
	};
	class ItemKeyRed1657: ItemKeyRed {
		keyid = 4157;
	};
	class ItemKeyRed1658: ItemKeyRed {
		keyid = 4158;
	};
	class ItemKeyRed1659: ItemKeyRed {
		keyid = 4159;
	};
	class ItemKeyRed1660: ItemKeyRed {
		keyid = 4160;
	};
	class ItemKeyRed1661: ItemKeyRed {
		keyid = 4161;
	};
	class ItemKeyRed1662: ItemKeyRed {
		keyid = 4162;
	};
	class ItemKeyRed1663: ItemKeyRed {
		keyid = 4163;
	};
	class ItemKeyRed1664: ItemKeyRed {
		keyid = 4164;
	};
	class ItemKeyRed1665: ItemKeyRed {
		keyid = 4165;
	};
	class ItemKeyRed1666: ItemKeyRed {
		keyid = 4166;
	};
	class ItemKeyRed1667: ItemKeyRed {
		keyid = 4167;
	};
	class ItemKeyRed1668: ItemKeyRed {
		keyid = 4168;
	};
	class ItemKeyRed1669: ItemKeyRed {
		keyid = 4169;
	};
	class ItemKeyRed1670: ItemKeyRed {
		keyid = 4170;
	};
	class ItemKeyRed1671: ItemKeyRed {
		keyid = 4171;
	};
	class ItemKeyRed1672: ItemKeyRed {
		keyid = 4172;
	};
	class ItemKeyRed1673: ItemKeyRed {
		keyid = 4173;
	};
	class ItemKeyRed1674: ItemKeyRed {
		keyid = 4174;
	};
	class ItemKeyRed1675: ItemKeyRed {
		keyid = 4175;
	};
	class ItemKeyRed1676: ItemKeyRed {
		keyid = 4176;
	};
	class ItemKeyRed1677: ItemKeyRed {
		keyid = 4177;
	};
	class ItemKeyRed1678: ItemKeyRed {
		keyid = 4178;
	};
	class ItemKeyRed1679: ItemKeyRed {
		keyid = 4179;
	};
	class ItemKeyRed1680: ItemKeyRed {
		keyid = 4180;
	};
	class ItemKeyRed1681: ItemKeyRed {
		keyid = 4181;
	};
	class ItemKeyRed1682: ItemKeyRed {
		keyid = 4182;
	};
	class ItemKeyRed1683: ItemKeyRed {
		keyid = 4183;
	};
	class ItemKeyRed1684: ItemKeyRed {
		keyid = 4184;
	};
	class ItemKeyRed1685: ItemKeyRed {
		keyid = 4185;
	};
	class ItemKeyRed1686: ItemKeyRed {
		keyid = 4186;
	};
	class ItemKeyRed1687: ItemKeyRed {
		keyid = 4187;
	};
	class ItemKeyRed1688: ItemKeyRed {
		keyid = 4188;
	};
	class ItemKeyRed1689: ItemKeyRed {
		keyid = 4189;
	};
	class ItemKeyRed1690: ItemKeyRed {
		keyid = 4190;
	};
	class ItemKeyRed1691: ItemKeyRed {
		keyid = 4191;
	};
	class ItemKeyRed1692: ItemKeyRed {
		keyid = 4192;
	};
	class ItemKeyRed1693: ItemKeyRed {
		keyid = 4193;
	};
	class ItemKeyRed1694: ItemKeyRed {
		keyid = 4194;
	};
	class ItemKeyRed1695: ItemKeyRed {
		keyid = 4195;
	};
	class ItemKeyRed1696: ItemKeyRed {
		keyid = 4196;
	};
	class ItemKeyRed1697: ItemKeyRed {
		keyid = 4197;
	};
	class ItemKeyRed1698: ItemKeyRed {
		keyid = 4198;
	};
	class ItemKeyRed1699: ItemKeyRed {
		keyid = 4199;
	};
	class ItemKeyRed1700: ItemKeyRed {
		keyid = 4200;
	};
	class ItemKeyRed1701: ItemKeyRed {
		keyid = 4201;
	};
	class ItemKeyRed1702: ItemKeyRed {
		keyid = 4202;
	};
	class ItemKeyRed1703: ItemKeyRed {
		keyid = 4203;
	};
	class ItemKeyRed1704: ItemKeyRed {
		keyid = 4204;
	};
	class ItemKeyRed1705: ItemKeyRed {
		keyid = 4205;
	};
	class ItemKeyRed1706: ItemKeyRed {
		keyid = 4206;
	};
	class ItemKeyRed1707: ItemKeyRed {
		keyid = 4207;
	};
	class ItemKeyRed1708: ItemKeyRed {
		keyid = 4208;
	};
	class ItemKeyRed1709: ItemKeyRed {
		keyid = 4209;
	};
	class ItemKeyRed1710: ItemKeyRed {
		keyid = 4210;
	};
	class ItemKeyRed1711: ItemKeyRed {
		keyid = 4211;
	};
	class ItemKeyRed1712: ItemKeyRed {
		keyid = 4212;
	};
	class ItemKeyRed1713: ItemKeyRed {
		keyid = 4213;
	};
	class ItemKeyRed1714: ItemKeyRed {
		keyid = 4214;
	};
	class ItemKeyRed1715: ItemKeyRed {
		keyid = 4215;
	};
	class ItemKeyRed1716: ItemKeyRed {
		keyid = 4216;
	};
	class ItemKeyRed1717: ItemKeyRed {
		keyid = 4217;
	};
	class ItemKeyRed1718: ItemKeyRed {
		keyid = 4218;
	};
	class ItemKeyRed1719: ItemKeyRed {
		keyid = 4219;
	};
	class ItemKeyRed1720: ItemKeyRed {
		keyid = 4220;
	};
	class ItemKeyRed1721: ItemKeyRed {
		keyid = 4221;
	};
	class ItemKeyRed1722: ItemKeyRed {
		keyid = 4222;
	};
	class ItemKeyRed1723: ItemKeyRed {
		keyid = 4223;
	};
	class ItemKeyRed1724: ItemKeyRed {
		keyid = 4224;
	};
	class ItemKeyRed1725: ItemKeyRed {
		keyid = 4225;
	};
	class ItemKeyRed1726: ItemKeyRed {
		keyid = 4226;
	};
	class ItemKeyRed1727: ItemKeyRed {
		keyid = 4227;
	};
	class ItemKeyRed1728: ItemKeyRed {
		keyid = 4228;
	};
	class ItemKeyRed1729: ItemKeyRed {
		keyid = 4229;
	};
	class ItemKeyRed1730: ItemKeyRed {
		keyid = 4230;
	};
	class ItemKeyRed1731: ItemKeyRed {
		keyid = 4231;
	};
	class ItemKeyRed1732: ItemKeyRed {
		keyid = 4232;
	};
	class ItemKeyRed1733: ItemKeyRed {
		keyid = 4233;
	};
	class ItemKeyRed1734: ItemKeyRed {
		keyid = 4234;
	};
	class ItemKeyRed1735: ItemKeyRed {
		keyid = 4235;
	};
	class ItemKeyRed1736: ItemKeyRed {
		keyid = 4236;
	};
	class ItemKeyRed1737: ItemKeyRed {
		keyid = 4237;
	};
	class ItemKeyRed1738: ItemKeyRed {
		keyid = 4238;
	};
	class ItemKeyRed1739: ItemKeyRed {
		keyid = 4239;
	};
	class ItemKeyRed1740: ItemKeyRed {
		keyid = 4240;
	};
	class ItemKeyRed1741: ItemKeyRed {
		keyid = 4241;
	};
	class ItemKeyRed1742: ItemKeyRed {
		keyid = 4242;
	};
	class ItemKeyRed1743: ItemKeyRed {
		keyid = 4243;
	};
	class ItemKeyRed1744: ItemKeyRed {
		keyid = 4244;
	};
	class ItemKeyRed1745: ItemKeyRed {
		keyid = 4245;
	};
	class ItemKeyRed1746: ItemKeyRed {
		keyid = 4246;
	};
	class ItemKeyRed1747: ItemKeyRed {
		keyid = 4247;
	};
	class ItemKeyRed1748: ItemKeyRed {
		keyid = 4248;
	};
	class ItemKeyRed1749: ItemKeyRed {
		keyid = 4249;
	};
	class ItemKeyRed1750: ItemKeyRed {
		keyid = 4250;
	};
	class ItemKeyRed1751: ItemKeyRed {
		keyid = 4251;
	};
	class ItemKeyRed1752: ItemKeyRed {
		keyid = 4252;
	};
	class ItemKeyRed1753: ItemKeyRed {
		keyid = 4253;
	};
	class ItemKeyRed1754: ItemKeyRed {
		keyid = 4254;
	};
	class ItemKeyRed1755: ItemKeyRed {
		keyid = 4255;
	};
	class ItemKeyRed1756: ItemKeyRed {
		keyid = 4256;
	};
	class ItemKeyRed1757: ItemKeyRed {
		keyid = 4257;
	};
	class ItemKeyRed1758: ItemKeyRed {
		keyid = 4258;
	};
	class ItemKeyRed1759: ItemKeyRed {
		keyid = 4259;
	};
	class ItemKeyRed1760: ItemKeyRed {
		keyid = 4260;
	};
	class ItemKeyRed1761: ItemKeyRed {
		keyid = 4261;
	};
	class ItemKeyRed1762: ItemKeyRed {
		keyid = 4262;
	};
	class ItemKeyRed1763: ItemKeyRed {
		keyid = 4263;
	};
	class ItemKeyRed1764: ItemKeyRed {
		keyid = 4264;
	};
	class ItemKeyRed1765: ItemKeyRed {
		keyid = 4265;
	};
	class ItemKeyRed1766: ItemKeyRed {
		keyid = 4266;
	};
	class ItemKeyRed1767: ItemKeyRed {
		keyid = 4267;
	};
	class ItemKeyRed1768: ItemKeyRed {
		keyid = 4268;
	};
	class ItemKeyRed1769: ItemKeyRed {
		keyid = 4269;
	};
	class ItemKeyRed1770: ItemKeyRed {
		keyid = 4270;
	};
	class ItemKeyRed1771: ItemKeyRed {
		keyid = 4271;
	};
	class ItemKeyRed1772: ItemKeyRed {
		keyid = 4272;
	};
	class ItemKeyRed1773: ItemKeyRed {
		keyid = 4273;
	};
	class ItemKeyRed1774: ItemKeyRed {
		keyid = 4274;
	};
	class ItemKeyRed1775: ItemKeyRed {
		keyid = 4275;
	};
	class ItemKeyRed1776: ItemKeyRed {
		keyid = 4276;
	};
	class ItemKeyRed1777: ItemKeyRed {
		keyid = 4277;
	};
	class ItemKeyRed1778: ItemKeyRed {
		keyid = 4278;
	};
	class ItemKeyRed1779: ItemKeyRed {
		keyid = 4279;
	};
	class ItemKeyRed1780: ItemKeyRed {
		keyid = 4280;
	};
	class ItemKeyRed1781: ItemKeyRed {
		keyid = 4281;
	};
	class ItemKeyRed1782: ItemKeyRed {
		keyid = 4282;
	};
	class ItemKeyRed1783: ItemKeyRed {
		keyid = 4283;
	};
	class ItemKeyRed1784: ItemKeyRed {
		keyid = 4284;
	};
	class ItemKeyRed1785: ItemKeyRed {
		keyid = 4285;
	};
	class ItemKeyRed1786: ItemKeyRed {
		keyid = 4286;
	};
	class ItemKeyRed1787: ItemKeyRed {
		keyid = 4287;
	};
	class ItemKeyRed1788: ItemKeyRed {
		keyid = 4288;
	};
	class ItemKeyRed1789: ItemKeyRed {
		keyid = 4289;
	};
	class ItemKeyRed1790: ItemKeyRed {
		keyid = 4290;
	};
	class ItemKeyRed1791: ItemKeyRed {
		keyid = 4291;
	};
	class ItemKeyRed1792: ItemKeyRed {
		keyid = 4292;
	};
	class ItemKeyRed1793: ItemKeyRed {
		keyid = 4293;
	};
	class ItemKeyRed1794: ItemKeyRed {
		keyid = 4294;
	};
	class ItemKeyRed1795: ItemKeyRed {
		keyid = 4295;
	};
	class ItemKeyRed1796: ItemKeyRed {
		keyid = 4296;
	};
	class ItemKeyRed1797: ItemKeyRed {
		keyid = 4297;
	};
	class ItemKeyRed1798: ItemKeyRed {
		keyid = 4298;
	};
	class ItemKeyRed1799: ItemKeyRed {
		keyid = 4299;
	};
	class ItemKeyRed1800: ItemKeyRed {
		keyid = 4300;
	};
	class ItemKeyRed1801: ItemKeyRed {
		keyid = 4301;
	};
	class ItemKeyRed1802: ItemKeyRed {
		keyid = 4302;
	};
	class ItemKeyRed1803: ItemKeyRed {
		keyid = 4303;
	};
	class ItemKeyRed1804: ItemKeyRed {
		keyid = 4304;
	};
	class ItemKeyRed1805: ItemKeyRed {
		keyid = 4305;
	};
	class ItemKeyRed1806: ItemKeyRed {
		keyid = 4306;
	};
	class ItemKeyRed1807: ItemKeyRed {
		keyid = 4307;
	};
	class ItemKeyRed1808: ItemKeyRed {
		keyid = 4308;
	};
	class ItemKeyRed1809: ItemKeyRed {
		keyid = 4309;
	};
	class ItemKeyRed1810: ItemKeyRed {
		keyid = 4310;
	};
	class ItemKeyRed1811: ItemKeyRed {
		keyid = 4311;
	};
	class ItemKeyRed1812: ItemKeyRed {
		keyid = 4312;
	};
	class ItemKeyRed1813: ItemKeyRed {
		keyid = 4313;
	};
	class ItemKeyRed1814: ItemKeyRed {
		keyid = 4314;
	};
	class ItemKeyRed1815: ItemKeyRed {
		keyid = 4315;
	};
	class ItemKeyRed1816: ItemKeyRed {
		keyid = 4316;
	};
	class ItemKeyRed1817: ItemKeyRed {
		keyid = 4317;
	};
	class ItemKeyRed1818: ItemKeyRed {
		keyid = 4318;
	};
	class ItemKeyRed1819: ItemKeyRed {
		keyid = 4319;
	};
	class ItemKeyRed1820: ItemKeyRed {
		keyid = 4320;
	};
	class ItemKeyRed1821: ItemKeyRed {
		keyid = 4321;
	};
	class ItemKeyRed1822: ItemKeyRed {
		keyid = 4322;
	};
	class ItemKeyRed1823: ItemKeyRed {
		keyid = 4323;
	};
	class ItemKeyRed1824: ItemKeyRed {
		keyid = 4324;
	};
	class ItemKeyRed1825: ItemKeyRed {
		keyid = 4325;
	};
	class ItemKeyRed1826: ItemKeyRed {
		keyid = 4326;
	};
	class ItemKeyRed1827: ItemKeyRed {
		keyid = 4327;
	};
	class ItemKeyRed1828: ItemKeyRed {
		keyid = 4328;
	};
	class ItemKeyRed1829: ItemKeyRed {
		keyid = 4329;
	};
	class ItemKeyRed1830: ItemKeyRed {
		keyid = 4330;
	};
	class ItemKeyRed1831: ItemKeyRed {
		keyid = 4331;
	};
	class ItemKeyRed1832: ItemKeyRed {
		keyid = 4332;
	};
	class ItemKeyRed1833: ItemKeyRed {
		keyid = 4333;
	};
	class ItemKeyRed1834: ItemKeyRed {
		keyid = 4334;
	};
	class ItemKeyRed1835: ItemKeyRed {
		keyid = 4335;
	};
	class ItemKeyRed1836: ItemKeyRed {
		keyid = 4336;
	};
	class ItemKeyRed1837: ItemKeyRed {
		keyid = 4337;
	};
	class ItemKeyRed1838: ItemKeyRed {
		keyid = 4338;
	};
	class ItemKeyRed1839: ItemKeyRed {
		keyid = 4339;
	};
	class ItemKeyRed1840: ItemKeyRed {
		keyid = 4340;
	};
	class ItemKeyRed1841: ItemKeyRed {
		keyid = 4341;
	};
	class ItemKeyRed1842: ItemKeyRed {
		keyid = 4342;
	};
	class ItemKeyRed1843: ItemKeyRed {
		keyid = 4343;
	};
	class ItemKeyRed1844: ItemKeyRed {
		keyid = 4344;
	};
	class ItemKeyRed1845: ItemKeyRed {
		keyid = 4345;
	};
	class ItemKeyRed1846: ItemKeyRed {
		keyid = 4346;
	};
	class ItemKeyRed1847: ItemKeyRed {
		keyid = 4347;
	};
	class ItemKeyRed1848: ItemKeyRed {
		keyid = 4348;
	};
	class ItemKeyRed1849: ItemKeyRed {
		keyid = 4349;
	};
	class ItemKeyRed1850: ItemKeyRed {
		keyid = 4350;
	};
	class ItemKeyRed1851: ItemKeyRed {
		keyid = 4351;
	};
	class ItemKeyRed1852: ItemKeyRed {
		keyid = 4352;
	};
	class ItemKeyRed1853: ItemKeyRed {
		keyid = 4353;
	};
	class ItemKeyRed1854: ItemKeyRed {
		keyid = 4354;
	};
	class ItemKeyRed1855: ItemKeyRed {
		keyid = 4355;
	};
	class ItemKeyRed1856: ItemKeyRed {
		keyid = 4356;
	};
	class ItemKeyRed1857: ItemKeyRed {
		keyid = 4357;
	};
	class ItemKeyRed1858: ItemKeyRed {
		keyid = 4358;
	};
	class ItemKeyRed1859: ItemKeyRed {
		keyid = 4359;
	};
	class ItemKeyRed1860: ItemKeyRed {
		keyid = 4360;
	};
	class ItemKeyRed1861: ItemKeyRed {
		keyid = 4361;
	};
	class ItemKeyRed1862: ItemKeyRed {
		keyid = 4362;
	};
	class ItemKeyRed1863: ItemKeyRed {
		keyid = 4363;
	};
	class ItemKeyRed1864: ItemKeyRed {
		keyid = 4364;
	};
	class ItemKeyRed1865: ItemKeyRed {
		keyid = 4365;
	};
	class ItemKeyRed1866: ItemKeyRed {
		keyid = 4366;
	};
	class ItemKeyRed1867: ItemKeyRed {
		keyid = 4367;
	};
	class ItemKeyRed1868: ItemKeyRed {
		keyid = 4368;
	};
	class ItemKeyRed1869: ItemKeyRed {
		keyid = 4369;
	};
	class ItemKeyRed1870: ItemKeyRed {
		keyid = 4370;
	};
	class ItemKeyRed1871: ItemKeyRed {
		keyid = 4371;
	};
	class ItemKeyRed1872: ItemKeyRed {
		keyid = 4372;
	};
	class ItemKeyRed1873: ItemKeyRed {
		keyid = 4373;
	};
	class ItemKeyRed1874: ItemKeyRed {
		keyid = 4374;
	};
	class ItemKeyRed1875: ItemKeyRed {
		keyid = 4375;
	};
	class ItemKeyRed1876: ItemKeyRed {
		keyid = 4376;
	};
	class ItemKeyRed1877: ItemKeyRed {
		keyid = 4377;
	};
	class ItemKeyRed1878: ItemKeyRed {
		keyid = 4378;
	};
	class ItemKeyRed1879: ItemKeyRed {
		keyid = 4379;
	};
	class ItemKeyRed1880: ItemKeyRed {
		keyid = 4380;
	};
	class ItemKeyRed1881: ItemKeyRed {
		keyid = 4381;
	};
	class ItemKeyRed1882: ItemKeyRed {
		keyid = 4382;
	};
	class ItemKeyRed1883: ItemKeyRed {
		keyid = 4383;
	};
	class ItemKeyRed1884: ItemKeyRed {
		keyid = 4384;
	};
	class ItemKeyRed1885: ItemKeyRed {
		keyid = 4385;
	};
	class ItemKeyRed1886: ItemKeyRed {
		keyid = 4386;
	};
	class ItemKeyRed1887: ItemKeyRed {
		keyid = 4387;
	};
	class ItemKeyRed1888: ItemKeyRed {
		keyid = 4388;
	};
	class ItemKeyRed1889: ItemKeyRed {
		keyid = 4389;
	};
	class ItemKeyRed1890: ItemKeyRed {
		keyid = 4390;
	};
	class ItemKeyRed1891: ItemKeyRed {
		keyid = 4391;
	};
	class ItemKeyRed1892: ItemKeyRed {
		keyid = 4392;
	};
	class ItemKeyRed1893: ItemKeyRed {
		keyid = 4393;
	};
	class ItemKeyRed1894: ItemKeyRed {
		keyid = 4394;
	};
	class ItemKeyRed1895: ItemKeyRed {
		keyid = 4395;
	};
	class ItemKeyRed1896: ItemKeyRed {
		keyid = 4396;
	};
	class ItemKeyRed1897: ItemKeyRed {
		keyid = 4397;
	};
	class ItemKeyRed1898: ItemKeyRed {
		keyid = 4398;
	};
	class ItemKeyRed1899: ItemKeyRed {
		keyid = 4399;
	};
	class ItemKeyRed1900: ItemKeyRed {
		keyid = 4400;
	};
	class ItemKeyRed1901: ItemKeyRed {
		keyid = 4401;
	};
	class ItemKeyRed1902: ItemKeyRed {
		keyid = 4402;
	};
	class ItemKeyRed1903: ItemKeyRed {
		keyid = 4403;
	};
	class ItemKeyRed1904: ItemKeyRed {
		keyid = 4404;
	};
	class ItemKeyRed1905: ItemKeyRed {
		keyid = 4405;
	};
	class ItemKeyRed1906: ItemKeyRed {
		keyid = 4406;
	};
	class ItemKeyRed1907: ItemKeyRed {
		keyid = 4407;
	};
	class ItemKeyRed1908: ItemKeyRed {
		keyid = 4408;
	};
	class ItemKeyRed1909: ItemKeyRed {
		keyid = 4409;
	};
	class ItemKeyRed1910: ItemKeyRed {
		keyid = 4410;
	};
	class ItemKeyRed1911: ItemKeyRed {
		keyid = 4411;
	};
	class ItemKeyRed1912: ItemKeyRed {
		keyid = 4412;
	};
	class ItemKeyRed1913: ItemKeyRed {
		keyid = 4413;
	};
	class ItemKeyRed1914: ItemKeyRed {
		keyid = 4414;
	};
	class ItemKeyRed1915: ItemKeyRed {
		keyid = 4415;
	};
	class ItemKeyRed1916: ItemKeyRed {
		keyid = 4416;
	};
	class ItemKeyRed1917: ItemKeyRed {
		keyid = 4417;
	};
	class ItemKeyRed1918: ItemKeyRed {
		keyid = 4418;
	};
	class ItemKeyRed1919: ItemKeyRed {
		keyid = 4419;
	};
	class ItemKeyRed1920: ItemKeyRed {
		keyid = 4420;
	};
	class ItemKeyRed1921: ItemKeyRed {
		keyid = 4421;
	};
	class ItemKeyRed1922: ItemKeyRed {
		keyid = 4422;
	};
	class ItemKeyRed1923: ItemKeyRed {
		keyid = 4423;
	};
	class ItemKeyRed1924: ItemKeyRed {
		keyid = 4424;
	};
	class ItemKeyRed1925: ItemKeyRed {
		keyid = 4425;
	};
	class ItemKeyRed1926: ItemKeyRed {
		keyid = 4426;
	};
	class ItemKeyRed1927: ItemKeyRed {
		keyid = 4427;
	};
	class ItemKeyRed1928: ItemKeyRed {
		keyid = 4428;
	};
	class ItemKeyRed1929: ItemKeyRed {
		keyid = 4429;
	};
	class ItemKeyRed1930: ItemKeyRed {
		keyid = 4430;
	};
	class ItemKeyRed1931: ItemKeyRed {
		keyid = 4431;
	};
	class ItemKeyRed1932: ItemKeyRed {
		keyid = 4432;
	};
	class ItemKeyRed1933: ItemKeyRed {
		keyid = 4433;
	};
	class ItemKeyRed1934: ItemKeyRed {
		keyid = 4434;
	};
	class ItemKeyRed1935: ItemKeyRed {
		keyid = 4435;
	};
	class ItemKeyRed1936: ItemKeyRed {
		keyid = 4436;
	};
	class ItemKeyRed1937: ItemKeyRed {
		keyid = 4437;
	};
	class ItemKeyRed1938: ItemKeyRed {
		keyid = 4438;
	};
	class ItemKeyRed1939: ItemKeyRed {
		keyid = 4439;
	};
	class ItemKeyRed1940: ItemKeyRed {
		keyid = 4440;
	};
	class ItemKeyRed1941: ItemKeyRed {
		keyid = 4441;
	};
	class ItemKeyRed1942: ItemKeyRed {
		keyid = 4442;
	};
	class ItemKeyRed1943: ItemKeyRed {
		keyid = 4443;
	};
	class ItemKeyRed1944: ItemKeyRed {
		keyid = 4444;
	};
	class ItemKeyRed1945: ItemKeyRed {
		keyid = 4445;
	};
	class ItemKeyRed1946: ItemKeyRed {
		keyid = 4446;
	};
	class ItemKeyRed1947: ItemKeyRed {
		keyid = 4447;
	};
	class ItemKeyRed1948: ItemKeyRed {
		keyid = 4448;
	};
	class ItemKeyRed1949: ItemKeyRed {
		keyid = 4449;
	};
	class ItemKeyRed1950: ItemKeyRed {
		keyid = 4450;
	};
	class ItemKeyRed1951: ItemKeyRed {
		keyid = 4451;
	};
	class ItemKeyRed1952: ItemKeyRed {
		keyid = 4452;
	};
	class ItemKeyRed1953: ItemKeyRed {
		keyid = 4453;
	};
	class ItemKeyRed1954: ItemKeyRed {
		keyid = 4454;
	};
	class ItemKeyRed1955: ItemKeyRed {
		keyid = 4455;
	};
	class ItemKeyRed1956: ItemKeyRed {
		keyid = 4456;
	};
	class ItemKeyRed1957: ItemKeyRed {
		keyid = 4457;
	};
	class ItemKeyRed1958: ItemKeyRed {
		keyid = 4458;
	};
	class ItemKeyRed1959: ItemKeyRed {
		keyid = 4459;
	};
	class ItemKeyRed1960: ItemKeyRed {
		keyid = 4460;
	};
	class ItemKeyRed1961: ItemKeyRed {
		keyid = 4461;
	};
	class ItemKeyRed1962: ItemKeyRed {
		keyid = 4462;
	};
	class ItemKeyRed1963: ItemKeyRed {
		keyid = 4463;
	};
	class ItemKeyRed1964: ItemKeyRed {
		keyid = 4464;
	};
	class ItemKeyRed1965: ItemKeyRed {
		keyid = 4465;
	};
	class ItemKeyRed1966: ItemKeyRed {
		keyid = 4466;
	};
	class ItemKeyRed1967: ItemKeyRed {
		keyid = 4467;
	};
	class ItemKeyRed1968: ItemKeyRed {
		keyid = 4468;
	};
	class ItemKeyRed1969: ItemKeyRed {
		keyid = 4469;
	};
	class ItemKeyRed1970: ItemKeyRed {
		keyid = 4470;
	};
	class ItemKeyRed1971: ItemKeyRed {
		keyid = 4471;
	};
	class ItemKeyRed1972: ItemKeyRed {
		keyid = 4472;
	};
	class ItemKeyRed1973: ItemKeyRed {
		keyid = 4473;
	};
	class ItemKeyRed1974: ItemKeyRed {
		keyid = 4474;
	};
	class ItemKeyRed1975: ItemKeyRed {
		keyid = 4475;
	};
	class ItemKeyRed1976: ItemKeyRed {
		keyid = 4476;
	};
	class ItemKeyRed1977: ItemKeyRed {
		keyid = 4477;
	};
	class ItemKeyRed1978: ItemKeyRed {
		keyid = 4478;
	};
	class ItemKeyRed1979: ItemKeyRed {
		keyid = 4479;
	};
	class ItemKeyRed1980: ItemKeyRed {
		keyid = 4480;
	};
	class ItemKeyRed1981: ItemKeyRed {
		keyid = 4481;
	};
	class ItemKeyRed1982: ItemKeyRed {
		keyid = 4482;
	};
	class ItemKeyRed1983: ItemKeyRed {
		keyid = 4483;
	};
	class ItemKeyRed1984: ItemKeyRed {
		keyid = 4484;
	};
	class ItemKeyRed1985: ItemKeyRed {
		keyid = 4485;
	};
	class ItemKeyRed1986: ItemKeyRed {
		keyid = 4486;
	};
	class ItemKeyRed1987: ItemKeyRed {
		keyid = 4487;
	};
	class ItemKeyRed1988: ItemKeyRed {
		keyid = 4488;
	};
	class ItemKeyRed1989: ItemKeyRed {
		keyid = 4489;
	};
	class ItemKeyRed1990: ItemKeyRed {
		keyid = 4490;
	};
	class ItemKeyRed1991: ItemKeyRed {
		keyid = 4491;
	};
	class ItemKeyRed1992: ItemKeyRed {
		keyid = 4492;
	};
	class ItemKeyRed1993: ItemKeyRed {
		keyid = 4493;
	};
	class ItemKeyRed1994: ItemKeyRed {
		keyid = 4494;
	};
	class ItemKeyRed1995: ItemKeyRed {
		keyid = 4495;
	};
	class ItemKeyRed1996: ItemKeyRed {
		keyid = 4496;
	};
	class ItemKeyRed1997: ItemKeyRed {
		keyid = 4497;
	};
	class ItemKeyRed1998: ItemKeyRed {
		keyid = 4498;
	};
	class ItemKeyRed1999: ItemKeyRed {
		keyid = 4499;
	};
	class ItemKeyRed2000: ItemKeyRed {
		keyid = 4500;
	};
	class ItemKeyRed2001: ItemKeyRed {
		keyid = 4501;
	};
	class ItemKeyRed2002: ItemKeyRed {
		keyid = 4502;
	};
	class ItemKeyRed2003: ItemKeyRed {
		keyid = 4503;
	};
	class ItemKeyRed2004: ItemKeyRed {
		keyid = 4504;
	};
	class ItemKeyRed2005: ItemKeyRed {
		keyid = 4505;
	};
	class ItemKeyRed2006: ItemKeyRed {
		keyid = 4506;
	};
	class ItemKeyRed2007: ItemKeyRed {
		keyid = 4507;
	};
	class ItemKeyRed2008: ItemKeyRed {
		keyid = 4508;
	};
	class ItemKeyRed2009: ItemKeyRed {
		keyid = 4509;
	};
	class ItemKeyRed2010: ItemKeyRed {
		keyid = 4510;
	};
	class ItemKeyRed2011: ItemKeyRed {
		keyid = 4511;
	};
	class ItemKeyRed2012: ItemKeyRed {
		keyid = 4512;
	};
	class ItemKeyRed2013: ItemKeyRed {
		keyid = 4513;
	};
	class ItemKeyRed2014: ItemKeyRed {
		keyid = 4514;
	};
	class ItemKeyRed2015: ItemKeyRed {
		keyid = 4515;
	};
	class ItemKeyRed2016: ItemKeyRed {
		keyid = 4516;
	};
	class ItemKeyRed2017: ItemKeyRed {
		keyid = 4517;
	};
	class ItemKeyRed2018: ItemKeyRed {
		keyid = 4518;
	};
	class ItemKeyRed2019: ItemKeyRed {
		keyid = 4519;
	};
	class ItemKeyRed2020: ItemKeyRed {
		keyid = 4520;
	};
	class ItemKeyRed2021: ItemKeyRed {
		keyid = 4521;
	};
	class ItemKeyRed2022: ItemKeyRed {
		keyid = 4522;
	};
	class ItemKeyRed2023: ItemKeyRed {
		keyid = 4523;
	};
	class ItemKeyRed2024: ItemKeyRed {
		keyid = 4524;
	};
	class ItemKeyRed2025: ItemKeyRed {
		keyid = 4525;
	};
	class ItemKeyRed2026: ItemKeyRed {
		keyid = 4526;
	};
	class ItemKeyRed2027: ItemKeyRed {
		keyid = 4527;
	};
	class ItemKeyRed2028: ItemKeyRed {
		keyid = 4528;
	};
	class ItemKeyRed2029: ItemKeyRed {
		keyid = 4529;
	};
	class ItemKeyRed2030: ItemKeyRed {
		keyid = 4530;
	};
	class ItemKeyRed2031: ItemKeyRed {
		keyid = 4531;
	};
	class ItemKeyRed2032: ItemKeyRed {
		keyid = 4532;
	};
	class ItemKeyRed2033: ItemKeyRed {
		keyid = 4533;
	};
	class ItemKeyRed2034: ItemKeyRed {
		keyid = 4534;
	};
	class ItemKeyRed2035: ItemKeyRed {
		keyid = 4535;
	};
	class ItemKeyRed2036: ItemKeyRed {
		keyid = 4536;
	};
	class ItemKeyRed2037: ItemKeyRed {
		keyid = 4537;
	};
	class ItemKeyRed2038: ItemKeyRed {
		keyid = 4538;
	};
	class ItemKeyRed2039: ItemKeyRed {
		keyid = 4539;
	};
	class ItemKeyRed2040: ItemKeyRed {
		keyid = 4540;
	};
	class ItemKeyRed2041: ItemKeyRed {
		keyid = 4541;
	};
	class ItemKeyRed2042: ItemKeyRed {
		keyid = 4542;
	};
	class ItemKeyRed2043: ItemKeyRed {
		keyid = 4543;
	};
	class ItemKeyRed2044: ItemKeyRed {
		keyid = 4544;
	};
	class ItemKeyRed2045: ItemKeyRed {
		keyid = 4545;
	};
	class ItemKeyRed2046: ItemKeyRed {
		keyid = 4546;
	};
	class ItemKeyRed2047: ItemKeyRed {
		keyid = 4547;
	};
	class ItemKeyRed2048: ItemKeyRed {
		keyid = 4548;
	};
	class ItemKeyRed2049: ItemKeyRed {
		keyid = 4549;
	};
	class ItemKeyRed2050: ItemKeyRed {
		keyid = 4550;
	};
	class ItemKeyRed2051: ItemKeyRed {
		keyid = 4551;
	};
	class ItemKeyRed2052: ItemKeyRed {
		keyid = 4552;
	};
	class ItemKeyRed2053: ItemKeyRed {
		keyid = 4553;
	};
	class ItemKeyRed2054: ItemKeyRed {
		keyid = 4554;
	};
	class ItemKeyRed2055: ItemKeyRed {
		keyid = 4555;
	};
	class ItemKeyRed2056: ItemKeyRed {
		keyid = 4556;
	};
	class ItemKeyRed2057: ItemKeyRed {
		keyid = 4557;
	};
	class ItemKeyRed2058: ItemKeyRed {
		keyid = 4558;
	};
	class ItemKeyRed2059: ItemKeyRed {
		keyid = 4559;
	};
	class ItemKeyRed2060: ItemKeyRed {
		keyid = 4560;
	};
	class ItemKeyRed2061: ItemKeyRed {
		keyid = 4561;
	};
	class ItemKeyRed2062: ItemKeyRed {
		keyid = 4562;
	};
	class ItemKeyRed2063: ItemKeyRed {
		keyid = 4563;
	};
	class ItemKeyRed2064: ItemKeyRed {
		keyid = 4564;
	};
	class ItemKeyRed2065: ItemKeyRed {
		keyid = 4565;
	};
	class ItemKeyRed2066: ItemKeyRed {
		keyid = 4566;
	};
	class ItemKeyRed2067: ItemKeyRed {
		keyid = 4567;
	};
	class ItemKeyRed2068: ItemKeyRed {
		keyid = 4568;
	};
	class ItemKeyRed2069: ItemKeyRed {
		keyid = 4569;
	};
	class ItemKeyRed2070: ItemKeyRed {
		keyid = 4570;
	};
	class ItemKeyRed2071: ItemKeyRed {
		keyid = 4571;
	};
	class ItemKeyRed2072: ItemKeyRed {
		keyid = 4572;
	};
	class ItemKeyRed2073: ItemKeyRed {
		keyid = 4573;
	};
	class ItemKeyRed2074: ItemKeyRed {
		keyid = 4574;
	};
	class ItemKeyRed2075: ItemKeyRed {
		keyid = 4575;
	};
	class ItemKeyRed2076: ItemKeyRed {
		keyid = 4576;
	};
	class ItemKeyRed2077: ItemKeyRed {
		keyid = 4577;
	};
	class ItemKeyRed2078: ItemKeyRed {
		keyid = 4578;
	};
	class ItemKeyRed2079: ItemKeyRed {
		keyid = 4579;
	};
	class ItemKeyRed2080: ItemKeyRed {
		keyid = 4580;
	};
	class ItemKeyRed2081: ItemKeyRed {
		keyid = 4581;
	};
	class ItemKeyRed2082: ItemKeyRed {
		keyid = 4582;
	};
	class ItemKeyRed2083: ItemKeyRed {
		keyid = 4583;
	};
	class ItemKeyRed2084: ItemKeyRed {
		keyid = 4584;
	};
	class ItemKeyRed2085: ItemKeyRed {
		keyid = 4585;
	};
	class ItemKeyRed2086: ItemKeyRed {
		keyid = 4586;
	};
	class ItemKeyRed2087: ItemKeyRed {
		keyid = 4587;
	};
	class ItemKeyRed2088: ItemKeyRed {
		keyid = 4588;
	};
	class ItemKeyRed2089: ItemKeyRed {
		keyid = 4589;
	};
	class ItemKeyRed2090: ItemKeyRed {
		keyid = 4590;
	};
	class ItemKeyRed2091: ItemKeyRed {
		keyid = 4591;
	};
	class ItemKeyRed2092: ItemKeyRed {
		keyid = 4592;
	};
	class ItemKeyRed2093: ItemKeyRed {
		keyid = 4593;
	};
	class ItemKeyRed2094: ItemKeyRed {
		keyid = 4594;
	};
	class ItemKeyRed2095: ItemKeyRed {
		keyid = 4595;
	};
	class ItemKeyRed2096: ItemKeyRed {
		keyid = 4596;
	};
	class ItemKeyRed2097: ItemKeyRed {
		keyid = 4597;
	};
	class ItemKeyRed2098: ItemKeyRed {
		keyid = 4598;
	};
	class ItemKeyRed2099: ItemKeyRed {
		keyid = 4599;
	};
	class ItemKeyRed2100: ItemKeyRed {
		keyid = 4600;
	};
	class ItemKeyRed2101: ItemKeyRed {
		keyid = 4601;
	};
	class ItemKeyRed2102: ItemKeyRed {
		keyid = 4602;
	};
	class ItemKeyRed2103: ItemKeyRed {
		keyid = 4603;
	};
	class ItemKeyRed2104: ItemKeyRed {
		keyid = 4604;
	};
	class ItemKeyRed2105: ItemKeyRed {
		keyid = 4605;
	};
	class ItemKeyRed2106: ItemKeyRed {
		keyid = 4606;
	};
	class ItemKeyRed2107: ItemKeyRed {
		keyid = 4607;
	};
	class ItemKeyRed2108: ItemKeyRed {
		keyid = 4608;
	};
	class ItemKeyRed2109: ItemKeyRed {
		keyid = 4609;
	};
	class ItemKeyRed2110: ItemKeyRed {
		keyid = 4610;
	};
	class ItemKeyRed2111: ItemKeyRed {
		keyid = 4611;
	};
	class ItemKeyRed2112: ItemKeyRed {
		keyid = 4612;
	};
	class ItemKeyRed2113: ItemKeyRed {
		keyid = 4613;
	};
	class ItemKeyRed2114: ItemKeyRed {
		keyid = 4614;
	};
	class ItemKeyRed2115: ItemKeyRed {
		keyid = 4615;
	};
	class ItemKeyRed2116: ItemKeyRed {
		keyid = 4616;
	};
	class ItemKeyRed2117: ItemKeyRed {
		keyid = 4617;
	};
	class ItemKeyRed2118: ItemKeyRed {
		keyid = 4618;
	};
	class ItemKeyRed2119: ItemKeyRed {
		keyid = 4619;
	};
	class ItemKeyRed2120: ItemKeyRed {
		keyid = 4620;
	};
	class ItemKeyRed2121: ItemKeyRed {
		keyid = 4621;
	};
	class ItemKeyRed2122: ItemKeyRed {
		keyid = 4622;
	};
	class ItemKeyRed2123: ItemKeyRed {
		keyid = 4623;
	};
	class ItemKeyRed2124: ItemKeyRed {
		keyid = 4624;
	};
	class ItemKeyRed2125: ItemKeyRed {
		keyid = 4625;
	};
	class ItemKeyRed2126: ItemKeyRed {
		keyid = 4626;
	};
	class ItemKeyRed2127: ItemKeyRed {
		keyid = 4627;
	};
	class ItemKeyRed2128: ItemKeyRed {
		keyid = 4628;
	};
	class ItemKeyRed2129: ItemKeyRed {
		keyid = 4629;
	};
	class ItemKeyRed2130: ItemKeyRed {
		keyid = 4630;
	};
	class ItemKeyRed2131: ItemKeyRed {
		keyid = 4631;
	};
	class ItemKeyRed2132: ItemKeyRed {
		keyid = 4632;
	};
	class ItemKeyRed2133: ItemKeyRed {
		keyid = 4633;
	};
	class ItemKeyRed2134: ItemKeyRed {
		keyid = 4634;
	};
	class ItemKeyRed2135: ItemKeyRed {
		keyid = 4635;
	};
	class ItemKeyRed2136: ItemKeyRed {
		keyid = 4636;
	};
	class ItemKeyRed2137: ItemKeyRed {
		keyid = 4637;
	};
	class ItemKeyRed2138: ItemKeyRed {
		keyid = 4638;
	};
	class ItemKeyRed2139: ItemKeyRed {
		keyid = 4639;
	};
	class ItemKeyRed2140: ItemKeyRed {
		keyid = 4640;
	};
	class ItemKeyRed2141: ItemKeyRed {
		keyid = 4641;
	};
	class ItemKeyRed2142: ItemKeyRed {
		keyid = 4642;
	};
	class ItemKeyRed2143: ItemKeyRed {
		keyid = 4643;
	};
	class ItemKeyRed2144: ItemKeyRed {
		keyid = 4644;
	};
	class ItemKeyRed2145: ItemKeyRed {
		keyid = 4645;
	};
	class ItemKeyRed2146: ItemKeyRed {
		keyid = 4646;
	};
	class ItemKeyRed2147: ItemKeyRed {
		keyid = 4647;
	};
	class ItemKeyRed2148: ItemKeyRed {
		keyid = 4648;
	};
	class ItemKeyRed2149: ItemKeyRed {
		keyid = 4649;
	};
	class ItemKeyRed2150: ItemKeyRed {
		keyid = 4650;
	};
	class ItemKeyRed2151: ItemKeyRed {
		keyid = 4651;
	};
	class ItemKeyRed2152: ItemKeyRed {
		keyid = 4652;
	};
	class ItemKeyRed2153: ItemKeyRed {
		keyid = 4653;
	};
	class ItemKeyRed2154: ItemKeyRed {
		keyid = 4654;
	};
	class ItemKeyRed2155: ItemKeyRed {
		keyid = 4655;
	};
	class ItemKeyRed2156: ItemKeyRed {
		keyid = 4656;
	};
	class ItemKeyRed2157: ItemKeyRed {
		keyid = 4657;
	};
	class ItemKeyRed2158: ItemKeyRed {
		keyid = 4658;
	};
	class ItemKeyRed2159: ItemKeyRed {
		keyid = 4659;
	};
	class ItemKeyRed2160: ItemKeyRed {
		keyid = 4660;
	};
	class ItemKeyRed2161: ItemKeyRed {
		keyid = 4661;
	};
	class ItemKeyRed2162: ItemKeyRed {
		keyid = 4662;
	};
	class ItemKeyRed2163: ItemKeyRed {
		keyid = 4663;
	};
	class ItemKeyRed2164: ItemKeyRed {
		keyid = 4664;
	};
	class ItemKeyRed2165: ItemKeyRed {
		keyid = 4665;
	};
	class ItemKeyRed2166: ItemKeyRed {
		keyid = 4666;
	};
	class ItemKeyRed2167: ItemKeyRed {
		keyid = 4667;
	};
	class ItemKeyRed2168: ItemKeyRed {
		keyid = 4668;
	};
	class ItemKeyRed2169: ItemKeyRed {
		keyid = 4669;
	};
	class ItemKeyRed2170: ItemKeyRed {
		keyid = 4670;
	};
	class ItemKeyRed2171: ItemKeyRed {
		keyid = 4671;
	};
	class ItemKeyRed2172: ItemKeyRed {
		keyid = 4672;
	};
	class ItemKeyRed2173: ItemKeyRed {
		keyid = 4673;
	};
	class ItemKeyRed2174: ItemKeyRed {
		keyid = 4674;
	};
	class ItemKeyRed2175: ItemKeyRed {
		keyid = 4675;
	};
	class ItemKeyRed2176: ItemKeyRed {
		keyid = 4676;
	};
	class ItemKeyRed2177: ItemKeyRed {
		keyid = 4677;
	};
	class ItemKeyRed2178: ItemKeyRed {
		keyid = 4678;
	};
	class ItemKeyRed2179: ItemKeyRed {
		keyid = 4679;
	};
	class ItemKeyRed2180: ItemKeyRed {
		keyid = 4680;
	};
	class ItemKeyRed2181: ItemKeyRed {
		keyid = 4681;
	};
	class ItemKeyRed2182: ItemKeyRed {
		keyid = 4682;
	};
	class ItemKeyRed2183: ItemKeyRed {
		keyid = 4683;
	};
	class ItemKeyRed2184: ItemKeyRed {
		keyid = 4684;
	};
	class ItemKeyRed2185: ItemKeyRed {
		keyid = 4685;
	};
	class ItemKeyRed2186: ItemKeyRed {
		keyid = 4686;
	};
	class ItemKeyRed2187: ItemKeyRed {
		keyid = 4687;
	};
	class ItemKeyRed2188: ItemKeyRed {
		keyid = 4688;
	};
	class ItemKeyRed2189: ItemKeyRed {
		keyid = 4689;
	};
	class ItemKeyRed2190: ItemKeyRed {
		keyid = 4690;
	};
	class ItemKeyRed2191: ItemKeyRed {
		keyid = 4691;
	};
	class ItemKeyRed2192: ItemKeyRed {
		keyid = 4692;
	};
	class ItemKeyRed2193: ItemKeyRed {
		keyid = 4693;
	};
	class ItemKeyRed2194: ItemKeyRed {
		keyid = 4694;
	};
	class ItemKeyRed2195: ItemKeyRed {
		keyid = 4695;
	};
	class ItemKeyRed2196: ItemKeyRed {
		keyid = 4696;
	};
	class ItemKeyRed2197: ItemKeyRed {
		keyid = 4697;
	};
	class ItemKeyRed2198: ItemKeyRed {
		keyid = 4698;
	};
	class ItemKeyRed2199: ItemKeyRed {
		keyid = 4699;
	};
	class ItemKeyRed2200: ItemKeyRed {
		keyid = 4700;
	};
	class ItemKeyRed2201: ItemKeyRed {
		keyid = 4701;
	};
	class ItemKeyRed2202: ItemKeyRed {
		keyid = 4702;
	};
	class ItemKeyRed2203: ItemKeyRed {
		keyid = 4703;
	};
	class ItemKeyRed2204: ItemKeyRed {
		keyid = 4704;
	};
	class ItemKeyRed2205: ItemKeyRed {
		keyid = 4705;
	};
	class ItemKeyRed2206: ItemKeyRed {
		keyid = 4706;
	};
	class ItemKeyRed2207: ItemKeyRed {
		keyid = 4707;
	};
	class ItemKeyRed2208: ItemKeyRed {
		keyid = 4708;
	};
	class ItemKeyRed2209: ItemKeyRed {
		keyid = 4709;
	};
	class ItemKeyRed2210: ItemKeyRed {
		keyid = 4710;
	};
	class ItemKeyRed2211: ItemKeyRed {
		keyid = 4711;
	};
	class ItemKeyRed2212: ItemKeyRed {
		keyid = 4712;
	};
	class ItemKeyRed2213: ItemKeyRed {
		keyid = 4713;
	};
	class ItemKeyRed2214: ItemKeyRed {
		keyid = 4714;
	};
	class ItemKeyRed2215: ItemKeyRed {
		keyid = 4715;
	};
	class ItemKeyRed2216: ItemKeyRed {
		keyid = 4716;
	};
	class ItemKeyRed2217: ItemKeyRed {
		keyid = 4717;
	};
	class ItemKeyRed2218: ItemKeyRed {
		keyid = 4718;
	};
	class ItemKeyRed2219: ItemKeyRed {
		keyid = 4719;
	};
	class ItemKeyRed2220: ItemKeyRed {
		keyid = 4720;
	};
	class ItemKeyRed2221: ItemKeyRed {
		keyid = 4721;
	};
	class ItemKeyRed2222: ItemKeyRed {
		keyid = 4722;
	};
	class ItemKeyRed2223: ItemKeyRed {
		keyid = 4723;
	};
	class ItemKeyRed2224: ItemKeyRed {
		keyid = 4724;
	};
	class ItemKeyRed2225: ItemKeyRed {
		keyid = 4725;
	};
	class ItemKeyRed2226: ItemKeyRed {
		keyid = 4726;
	};
	class ItemKeyRed2227: ItemKeyRed {
		keyid = 4727;
	};
	class ItemKeyRed2228: ItemKeyRed {
		keyid = 4728;
	};
	class ItemKeyRed2229: ItemKeyRed {
		keyid = 4729;
	};
	class ItemKeyRed2230: ItemKeyRed {
		keyid = 4730;
	};
	class ItemKeyRed2231: ItemKeyRed {
		keyid = 4731;
	};
	class ItemKeyRed2232: ItemKeyRed {
		keyid = 4732;
	};
	class ItemKeyRed2233: ItemKeyRed {
		keyid = 4733;
	};
	class ItemKeyRed2234: ItemKeyRed {
		keyid = 4734;
	};
	class ItemKeyRed2235: ItemKeyRed {
		keyid = 4735;
	};
	class ItemKeyRed2236: ItemKeyRed {
		keyid = 4736;
	};
	class ItemKeyRed2237: ItemKeyRed {
		keyid = 4737;
	};
	class ItemKeyRed2238: ItemKeyRed {
		keyid = 4738;
	};
	class ItemKeyRed2239: ItemKeyRed {
		keyid = 4739;
	};
	class ItemKeyRed2240: ItemKeyRed {
		keyid = 4740;
	};
	class ItemKeyRed2241: ItemKeyRed {
		keyid = 4741;
	};
	class ItemKeyRed2242: ItemKeyRed {
		keyid = 4742;
	};
	class ItemKeyRed2243: ItemKeyRed {
		keyid = 4743;
	};
	class ItemKeyRed2244: ItemKeyRed {
		keyid = 4744;
	};
	class ItemKeyRed2245: ItemKeyRed {
		keyid = 4745;
	};
	class ItemKeyRed2246: ItemKeyRed {
		keyid = 4746;
	};
	class ItemKeyRed2247: ItemKeyRed {
		keyid = 4747;
	};
	class ItemKeyRed2248: ItemKeyRed {
		keyid = 4748;
	};
	class ItemKeyRed2249: ItemKeyRed {
		keyid = 4749;
	};
	class ItemKeyRed2250: ItemKeyRed {
		keyid = 4750;
	};
	class ItemKeyRed2251: ItemKeyRed {
		keyid = 4751;
	};
	class ItemKeyRed2252: ItemKeyRed {
		keyid = 4752;
	};
	class ItemKeyRed2253: ItemKeyRed {
		keyid = 4753;
	};
	class ItemKeyRed2254: ItemKeyRed {
		keyid = 4754;
	};
	class ItemKeyRed2255: ItemKeyRed {
		keyid = 4755;
	};
	class ItemKeyRed2256: ItemKeyRed {
		keyid = 4756;
	};
	class ItemKeyRed2257: ItemKeyRed {
		keyid = 4757;
	};
	class ItemKeyRed2258: ItemKeyRed {
		keyid = 4758;
	};
	class ItemKeyRed2259: ItemKeyRed {
		keyid = 4759;
	};
	class ItemKeyRed2260: ItemKeyRed {
		keyid = 4760;
	};
	class ItemKeyRed2261: ItemKeyRed {
		keyid = 4761;
	};
	class ItemKeyRed2262: ItemKeyRed {
		keyid = 4762;
	};
	class ItemKeyRed2263: ItemKeyRed {
		keyid = 4763;
	};
	class ItemKeyRed2264: ItemKeyRed {
		keyid = 4764;
	};
	class ItemKeyRed2265: ItemKeyRed {
		keyid = 4765;
	};
	class ItemKeyRed2266: ItemKeyRed {
		keyid = 4766;
	};
	class ItemKeyRed2267: ItemKeyRed {
		keyid = 4767;
	};
	class ItemKeyRed2268: ItemKeyRed {
		keyid = 4768;
	};
	class ItemKeyRed2269: ItemKeyRed {
		keyid = 4769;
	};
	class ItemKeyRed2270: ItemKeyRed {
		keyid = 4770;
	};
	class ItemKeyRed2271: ItemKeyRed {
		keyid = 4771;
	};
	class ItemKeyRed2272: ItemKeyRed {
		keyid = 4772;
	};
	class ItemKeyRed2273: ItemKeyRed {
		keyid = 4773;
	};
	class ItemKeyRed2274: ItemKeyRed {
		keyid = 4774;
	};
	class ItemKeyRed2275: ItemKeyRed {
		keyid = 4775;
	};
	class ItemKeyRed2276: ItemKeyRed {
		keyid = 4776;
	};
	class ItemKeyRed2277: ItemKeyRed {
		keyid = 4777;
	};
	class ItemKeyRed2278: ItemKeyRed {
		keyid = 4778;
	};
	class ItemKeyRed2279: ItemKeyRed {
		keyid = 4779;
	};
	class ItemKeyRed2280: ItemKeyRed {
		keyid = 4780;
	};
	class ItemKeyRed2281: ItemKeyRed {
		keyid = 4781;
	};
	class ItemKeyRed2282: ItemKeyRed {
		keyid = 4782;
	};
	class ItemKeyRed2283: ItemKeyRed {
		keyid = 4783;
	};
	class ItemKeyRed2284: ItemKeyRed {
		keyid = 4784;
	};
	class ItemKeyRed2285: ItemKeyRed {
		keyid = 4785;
	};
	class ItemKeyRed2286: ItemKeyRed {
		keyid = 4786;
	};
	class ItemKeyRed2287: ItemKeyRed {
		keyid = 4787;
	};
	class ItemKeyRed2288: ItemKeyRed {
		keyid = 4788;
	};
	class ItemKeyRed2289: ItemKeyRed {
		keyid = 4789;
	};
	class ItemKeyRed2290: ItemKeyRed {
		keyid = 4790;
	};
	class ItemKeyRed2291: ItemKeyRed {
		keyid = 4791;
	};
	class ItemKeyRed2292: ItemKeyRed {
		keyid = 4792;
	};
	class ItemKeyRed2293: ItemKeyRed {
		keyid = 4793;
	};
	class ItemKeyRed2294: ItemKeyRed {
		keyid = 4794;
	};
	class ItemKeyRed2295: ItemKeyRed {
		keyid = 4795;
	};
	class ItemKeyRed2296: ItemKeyRed {
		keyid = 4796;
	};
	class ItemKeyRed2297: ItemKeyRed {
		keyid = 4797;
	};
	class ItemKeyRed2298: ItemKeyRed {
		keyid = 4798;
	};
	class ItemKeyRed2299: ItemKeyRed {
		keyid = 4799;
	};
	class ItemKeyRed2300: ItemKeyRed {
		keyid = 4800;
	};
	class ItemKeyRed2301: ItemKeyRed {
		keyid = 4801;
	};
	class ItemKeyRed2302: ItemKeyRed {
		keyid = 4802;
	};
	class ItemKeyRed2303: ItemKeyRed {
		keyid = 4803;
	};
	class ItemKeyRed2304: ItemKeyRed {
		keyid = 4804;
	};
	class ItemKeyRed2305: ItemKeyRed {
		keyid = 4805;
	};
	class ItemKeyRed2306: ItemKeyRed {
		keyid = 4806;
	};
	class ItemKeyRed2307: ItemKeyRed {
		keyid = 4807;
	};
	class ItemKeyRed2308: ItemKeyRed {
		keyid = 4808;
	};
	class ItemKeyRed2309: ItemKeyRed {
		keyid = 4809;
	};
	class ItemKeyRed2310: ItemKeyRed {
		keyid = 4810;
	};
	class ItemKeyRed2311: ItemKeyRed {
		keyid = 4811;
	};
	class ItemKeyRed2312: ItemKeyRed {
		keyid = 4812;
	};
	class ItemKeyRed2313: ItemKeyRed {
		keyid = 4813;
	};
	class ItemKeyRed2314: ItemKeyRed {
		keyid = 4814;
	};
	class ItemKeyRed2315: ItemKeyRed {
		keyid = 4815;
	};
	class ItemKeyRed2316: ItemKeyRed {
		keyid = 4816;
	};
	class ItemKeyRed2317: ItemKeyRed {
		keyid = 4817;
	};
	class ItemKeyRed2318: ItemKeyRed {
		keyid = 4818;
	};
	class ItemKeyRed2319: ItemKeyRed {
		keyid = 4819;
	};
	class ItemKeyRed2320: ItemKeyRed {
		keyid = 4820;
	};
	class ItemKeyRed2321: ItemKeyRed {
		keyid = 4821;
	};
	class ItemKeyRed2322: ItemKeyRed {
		keyid = 4822;
	};
	class ItemKeyRed2323: ItemKeyRed {
		keyid = 4823;
	};
	class ItemKeyRed2324: ItemKeyRed {
		keyid = 4824;
	};
	class ItemKeyRed2325: ItemKeyRed {
		keyid = 4825;
	};
	class ItemKeyRed2326: ItemKeyRed {
		keyid = 4826;
	};
	class ItemKeyRed2327: ItemKeyRed {
		keyid = 4827;
	};
	class ItemKeyRed2328: ItemKeyRed {
		keyid = 4828;
	};
	class ItemKeyRed2329: ItemKeyRed {
		keyid = 4829;
	};
	class ItemKeyRed2330: ItemKeyRed {
		keyid = 4830;
	};
	class ItemKeyRed2331: ItemKeyRed {
		keyid = 4831;
	};
	class ItemKeyRed2332: ItemKeyRed {
		keyid = 4832;
	};
	class ItemKeyRed2333: ItemKeyRed {
		keyid = 4833;
	};
	class ItemKeyRed2334: ItemKeyRed {
		keyid = 4834;
	};
	class ItemKeyRed2335: ItemKeyRed {
		keyid = 4835;
	};
	class ItemKeyRed2336: ItemKeyRed {
		keyid = 4836;
	};
	class ItemKeyRed2337: ItemKeyRed {
		keyid = 4837;
	};
	class ItemKeyRed2338: ItemKeyRed {
		keyid = 4838;
	};
	class ItemKeyRed2339: ItemKeyRed {
		keyid = 4839;
	};
	class ItemKeyRed2340: ItemKeyRed {
		keyid = 4840;
	};
	class ItemKeyRed2341: ItemKeyRed {
		keyid = 4841;
	};
	class ItemKeyRed2342: ItemKeyRed {
		keyid = 4842;
	};
	class ItemKeyRed2343: ItemKeyRed {
		keyid = 4843;
	};
	class ItemKeyRed2344: ItemKeyRed {
		keyid = 4844;
	};
	class ItemKeyRed2345: ItemKeyRed {
		keyid = 4845;
	};
	class ItemKeyRed2346: ItemKeyRed {
		keyid = 4846;
	};
	class ItemKeyRed2347: ItemKeyRed {
		keyid = 4847;
	};
	class ItemKeyRed2348: ItemKeyRed {
		keyid = 4848;
	};
	class ItemKeyRed2349: ItemKeyRed {
		keyid = 4849;
	};
	class ItemKeyRed2350: ItemKeyRed {
		keyid = 4850;
	};
	class ItemKeyRed2351: ItemKeyRed {
		keyid = 4851;
	};
	class ItemKeyRed2352: ItemKeyRed {
		keyid = 4852;
	};
	class ItemKeyRed2353: ItemKeyRed {
		keyid = 4853;
	};
	class ItemKeyRed2354: ItemKeyRed {
		keyid = 4854;
	};
	class ItemKeyRed2355: ItemKeyRed {
		keyid = 4855;
	};
	class ItemKeyRed2356: ItemKeyRed {
		keyid = 4856;
	};
	class ItemKeyRed2357: ItemKeyRed {
		keyid = 4857;
	};
	class ItemKeyRed2358: ItemKeyRed {
		keyid = 4858;
	};
	class ItemKeyRed2359: ItemKeyRed {
		keyid = 4859;
	};
	class ItemKeyRed2360: ItemKeyRed {
		keyid = 4860;
	};
	class ItemKeyRed2361: ItemKeyRed {
		keyid = 4861;
	};
	class ItemKeyRed2362: ItemKeyRed {
		keyid = 4862;
	};
	class ItemKeyRed2363: ItemKeyRed {
		keyid = 4863;
	};
	class ItemKeyRed2364: ItemKeyRed {
		keyid = 4864;
	};
	class ItemKeyRed2365: ItemKeyRed {
		keyid = 4865;
	};
	class ItemKeyRed2366: ItemKeyRed {
		keyid = 4866;
	};
	class ItemKeyRed2367: ItemKeyRed {
		keyid = 4867;
	};
	class ItemKeyRed2368: ItemKeyRed {
		keyid = 4868;
	};
	class ItemKeyRed2369: ItemKeyRed {
		keyid = 4869;
	};
	class ItemKeyRed2370: ItemKeyRed {
		keyid = 4870;
	};
	class ItemKeyRed2371: ItemKeyRed {
		keyid = 4871;
	};
	class ItemKeyRed2372: ItemKeyRed {
		keyid = 4872;
	};
	class ItemKeyRed2373: ItemKeyRed {
		keyid = 4873;
	};
	class ItemKeyRed2374: ItemKeyRed {
		keyid = 4874;
	};
	class ItemKeyRed2375: ItemKeyRed {
		keyid = 4875;
	};
	class ItemKeyRed2376: ItemKeyRed {
		keyid = 4876;
	};
	class ItemKeyRed2377: ItemKeyRed {
		keyid = 4877;
	};
	class ItemKeyRed2378: ItemKeyRed {
		keyid = 4878;
	};
	class ItemKeyRed2379: ItemKeyRed {
		keyid = 4879;
	};
	class ItemKeyRed2380: ItemKeyRed {
		keyid = 4880;
	};
	class ItemKeyRed2381: ItemKeyRed {
		keyid = 4881;
	};
	class ItemKeyRed2382: ItemKeyRed {
		keyid = 4882;
	};
	class ItemKeyRed2383: ItemKeyRed {
		keyid = 4883;
	};
	class ItemKeyRed2384: ItemKeyRed {
		keyid = 4884;
	};
	class ItemKeyRed2385: ItemKeyRed {
		keyid = 4885;
	};
	class ItemKeyRed2386: ItemKeyRed {
		keyid = 4886;
	};
	class ItemKeyRed2387: ItemKeyRed {
		keyid = 4887;
	};
	class ItemKeyRed2388: ItemKeyRed {
		keyid = 4888;
	};
	class ItemKeyRed2389: ItemKeyRed {
		keyid = 4889;
	};
	class ItemKeyRed2390: ItemKeyRed {
		keyid = 4890;
	};
	class ItemKeyRed2391: ItemKeyRed {
		keyid = 4891;
	};
	class ItemKeyRed2392: ItemKeyRed {
		keyid = 4892;
	};
	class ItemKeyRed2393: ItemKeyRed {
		keyid = 4893;
	};
	class ItemKeyRed2394: ItemKeyRed {
		keyid = 4894;
	};
	class ItemKeyRed2395: ItemKeyRed {
		keyid = 4895;
	};
	class ItemKeyRed2396: ItemKeyRed {
		keyid = 4896;
	};
	class ItemKeyRed2397: ItemKeyRed {
		keyid = 4897;
	};
	class ItemKeyRed2398: ItemKeyRed {
		keyid = 4898;
	};
	class ItemKeyRed2399: ItemKeyRed {
		keyid = 4899;
	};
	class ItemKeyRed2400: ItemKeyRed {
		keyid = 4900;
	};
	class ItemKeyRed2401: ItemKeyRed {
		keyid = 4901;
	};
	class ItemKeyRed2402: ItemKeyRed {
		keyid = 4902;
	};
	class ItemKeyRed2403: ItemKeyRed {
		keyid = 4903;
	};
	class ItemKeyRed2404: ItemKeyRed {
		keyid = 4904;
	};
	class ItemKeyRed2405: ItemKeyRed {
		keyid = 4905;
	};
	class ItemKeyRed2406: ItemKeyRed {
		keyid = 4906;
	};
	class ItemKeyRed2407: ItemKeyRed {
		keyid = 4907;
	};
	class ItemKeyRed2408: ItemKeyRed {
		keyid = 4908;
	};
	class ItemKeyRed2409: ItemKeyRed {
		keyid = 4909;
	};
	class ItemKeyRed2410: ItemKeyRed {
		keyid = 4910;
	};
	class ItemKeyRed2411: ItemKeyRed {
		keyid = 4911;
	};
	class ItemKeyRed2412: ItemKeyRed {
		keyid = 4912;
	};
	class ItemKeyRed2413: ItemKeyRed {
		keyid = 4913;
	};
	class ItemKeyRed2414: ItemKeyRed {
		keyid = 4914;
	};
	class ItemKeyRed2415: ItemKeyRed {
		keyid = 4915;
	};
	class ItemKeyRed2416: ItemKeyRed {
		keyid = 4916;
	};
	class ItemKeyRed2417: ItemKeyRed {
		keyid = 4917;
	};
	class ItemKeyRed2418: ItemKeyRed {
		keyid = 4918;
	};
	class ItemKeyRed2419: ItemKeyRed {
		keyid = 4919;
	};
	class ItemKeyRed2420: ItemKeyRed {
		keyid = 4920;
	};
	class ItemKeyRed2421: ItemKeyRed {
		keyid = 4921;
	};
	class ItemKeyRed2422: ItemKeyRed {
		keyid = 4922;
	};
	class ItemKeyRed2423: ItemKeyRed {
		keyid = 4923;
	};
	class ItemKeyRed2424: ItemKeyRed {
		keyid = 4924;
	};
	class ItemKeyRed2425: ItemKeyRed {
		keyid = 4925;
	};
	class ItemKeyRed2426: ItemKeyRed {
		keyid = 4926;
	};
	class ItemKeyRed2427: ItemKeyRed {
		keyid = 4927;
	};
	class ItemKeyRed2428: ItemKeyRed {
		keyid = 4928;
	};
	class ItemKeyRed2429: ItemKeyRed {
		keyid = 4929;
	};
	class ItemKeyRed2430: ItemKeyRed {
		keyid = 4930;
	};
	class ItemKeyRed2431: ItemKeyRed {
		keyid = 4931;
	};
	class ItemKeyRed2432: ItemKeyRed {
		keyid = 4932;
	};
	class ItemKeyRed2433: ItemKeyRed {
		keyid = 4933;
	};
	class ItemKeyRed2434: ItemKeyRed {
		keyid = 4934;
	};
	class ItemKeyRed2435: ItemKeyRed {
		keyid = 4935;
	};
	class ItemKeyRed2436: ItemKeyRed {
		keyid = 4936;
	};
	class ItemKeyRed2437: ItemKeyRed {
		keyid = 4937;
	};
	class ItemKeyRed2438: ItemKeyRed {
		keyid = 4938;
	};
	class ItemKeyRed2439: ItemKeyRed {
		keyid = 4939;
	};
	class ItemKeyRed2440: ItemKeyRed {
		keyid = 4940;
	};
	class ItemKeyRed2441: ItemKeyRed {
		keyid = 4941;
	};
	class ItemKeyRed2442: ItemKeyRed {
		keyid = 4942;
	};
	class ItemKeyRed2443: ItemKeyRed {
		keyid = 4943;
	};
	class ItemKeyRed2444: ItemKeyRed {
		keyid = 4944;
	};
	class ItemKeyRed2445: ItemKeyRed {
		keyid = 4945;
	};
	class ItemKeyRed2446: ItemKeyRed {
		keyid = 4946;
	};
	class ItemKeyRed2447: ItemKeyRed {
		keyid = 4947;
	};
	class ItemKeyRed2448: ItemKeyRed {
		keyid = 4948;
	};
	class ItemKeyRed2449: ItemKeyRed {
		keyid = 4949;
	};
	class ItemKeyRed2450: ItemKeyRed {
		keyid = 4950;
	};
	class ItemKeyRed2451: ItemKeyRed {
		keyid = 4951;
	};
	class ItemKeyRed2452: ItemKeyRed {
		keyid = 4952;
	};
	class ItemKeyRed2453: ItemKeyRed {
		keyid = 4953;
	};
	class ItemKeyRed2454: ItemKeyRed {
		keyid = 4954;
	};
	class ItemKeyRed2455: ItemKeyRed {
		keyid = 4955;
	};
	class ItemKeyRed2456: ItemKeyRed {
		keyid = 4956;
	};
	class ItemKeyRed2457: ItemKeyRed {
		keyid = 4957;
	};
	class ItemKeyRed2458: ItemKeyRed {
		keyid = 4958;
	};
	class ItemKeyRed2459: ItemKeyRed {
		keyid = 4959;
	};
	class ItemKeyRed2460: ItemKeyRed {
		keyid = 4960;
	};
	class ItemKeyRed2461: ItemKeyRed {
		keyid = 4961;
	};
	class ItemKeyRed2462: ItemKeyRed {
		keyid = 4962;
	};
	class ItemKeyRed2463: ItemKeyRed {
		keyid = 4963;
	};
	class ItemKeyRed2464: ItemKeyRed {
		keyid = 4964;
	};
	class ItemKeyRed2465: ItemKeyRed {
		keyid = 4965;
	};
	class ItemKeyRed2466: ItemKeyRed {
		keyid = 4966;
	};
	class ItemKeyRed2467: ItemKeyRed {
		keyid = 4967;
	};
	class ItemKeyRed2468: ItemKeyRed {
		keyid = 4968;
	};
	class ItemKeyRed2469: ItemKeyRed {
		keyid = 4969;
	};
	class ItemKeyRed2470: ItemKeyRed {
		keyid = 4970;
	};
	class ItemKeyRed2471: ItemKeyRed {
		keyid = 4971;
	};
	class ItemKeyRed2472: ItemKeyRed {
		keyid = 4972;
	};
	class ItemKeyRed2473: ItemKeyRed {
		keyid = 4973;
	};
	class ItemKeyRed2474: ItemKeyRed {
		keyid = 4974;
	};
	class ItemKeyRed2475: ItemKeyRed {
		keyid = 4975;
	};
	class ItemKeyRed2476: ItemKeyRed {
		keyid = 4976;
	};
	class ItemKeyRed2477: ItemKeyRed {
		keyid = 4977;
	};
	class ItemKeyRed2478: ItemKeyRed {
		keyid = 4978;
	};
	class ItemKeyRed2479: ItemKeyRed {
		keyid = 4979;
	};
	class ItemKeyRed2480: ItemKeyRed {
		keyid = 4980;
	};
	class ItemKeyRed2481: ItemKeyRed {
		keyid = 4981;
	};
	class ItemKeyRed2482: ItemKeyRed {
		keyid = 4982;
	};
	class ItemKeyRed2483: ItemKeyRed {
		keyid = 4983;
	};
	class ItemKeyRed2484: ItemKeyRed {
		keyid = 4984;
	};
	class ItemKeyRed2485: ItemKeyRed {
		keyid = 4985;
	};
	class ItemKeyRed2486: ItemKeyRed {
		keyid = 4986;
	};
	class ItemKeyRed2487: ItemKeyRed {
		keyid = 4987;
	};
	class ItemKeyRed2488: ItemKeyRed {
		keyid = 4988;
	};
	class ItemKeyRed2489: ItemKeyRed {
		keyid = 4989;
	};
	class ItemKeyRed2490: ItemKeyRed {
		keyid = 4990;
	};
	class ItemKeyRed2491: ItemKeyRed {
		keyid = 4991;
	};
	class ItemKeyRed2492: ItemKeyRed {
		keyid = 4992;
	};
	class ItemKeyRed2493: ItemKeyRed {
		keyid = 4993;
	};
	class ItemKeyRed2494: ItemKeyRed {
		keyid = 4994;
	};
	class ItemKeyRed2495: ItemKeyRed {
		keyid = 4995;
	};
	class ItemKeyRed2496: ItemKeyRed {
		keyid = 4996;
	};
	class ItemKeyRed2497: ItemKeyRed {
		keyid = 4997;
	};
	class ItemKeyRed2498: ItemKeyRed {
		keyid = 4998;
	};
	class ItemKeyRed2499: ItemKeyRed {
		keyid = 4999;
	};
	class ItemKeyRed2500: ItemKeyRed {
		keyid = 5000;
	};

	// Blue Keys
	class ItemKeyBlue1: ItemKeyBlue {
		keyid = 5001;
	};
	class ItemKeyBlue2: ItemKeyBlue {
		keyid = 5002;
	};
	class ItemKeyBlue3: ItemKeyBlue {
		keyid = 5003;
	};
	class ItemKeyBlue4: ItemKeyBlue {
		keyid = 5004;
	};
	class ItemKeyBlue5: ItemKeyBlue {
		keyid = 5005;
	};
	class ItemKeyBlue6: ItemKeyBlue {
		keyid = 5006;
	};
	class ItemKeyBlue7: ItemKeyBlue {
		keyid = 5007;
	};
	class ItemKeyBlue8: ItemKeyBlue {
		keyid = 5008;
	};
	class ItemKeyBlue9: ItemKeyBlue {
		keyid = 5009;
	};
	class ItemKeyBlue10: ItemKeyBlue {
		keyid = 5010;
	};
	class ItemKeyBlue11: ItemKeyBlue {
		keyid = 5011;
	};
	class ItemKeyBlue12: ItemKeyBlue {
		keyid = 5012;
	};
	class ItemKeyBlue13: ItemKeyBlue {
		keyid = 5013;
	};
	class ItemKeyBlue14: ItemKeyBlue {
		keyid = 5014;
	};
	class ItemKeyBlue15: ItemKeyBlue {
		keyid = 5015;
	};
	class ItemKeyBlue16: ItemKeyBlue {
		keyid = 5016;
	};
	class ItemKeyBlue17: ItemKeyBlue {
		keyid = 5017;
	};
	class ItemKeyBlue18: ItemKeyBlue {
		keyid = 5018;
	};
	class ItemKeyBlue19: ItemKeyBlue {
		keyid = 5019;
	};
	class ItemKeyBlue20: ItemKeyBlue {
		keyid = 5020;
	};
	class ItemKeyBlue21: ItemKeyBlue {
		keyid = 5021;
	};
	class ItemKeyBlue22: ItemKeyBlue {
		keyid = 5022;
	};
	class ItemKeyBlue23: ItemKeyBlue {
		keyid = 5023;
	};
	class ItemKeyBlue24: ItemKeyBlue {
		keyid = 5024;
	};
	class ItemKeyBlue25: ItemKeyBlue {
		keyid = 5025;
	};
	class ItemKeyBlue26: ItemKeyBlue {
		keyid = 5026;
	};
	class ItemKeyBlue27: ItemKeyBlue {
		keyid = 5027;
	};
	class ItemKeyBlue28: ItemKeyBlue {
		keyid = 5028;
	};
	class ItemKeyBlue29: ItemKeyBlue {
		keyid = 5029;
	};
	class ItemKeyBlue30: ItemKeyBlue {
		keyid = 5030;
	};
	class ItemKeyBlue31: ItemKeyBlue {
		keyid = 5031;
	};
	class ItemKeyBlue32: ItemKeyBlue {
		keyid = 5032;
	};
	class ItemKeyBlue33: ItemKeyBlue {
		keyid = 5033;
	};
	class ItemKeyBlue34: ItemKeyBlue {
		keyid = 5034;
	};
	class ItemKeyBlue35: ItemKeyBlue {
		keyid = 5035;
	};
	class ItemKeyBlue36: ItemKeyBlue {
		keyid = 5036;
	};
	class ItemKeyBlue37: ItemKeyBlue {
		keyid = 5037;
	};
	class ItemKeyBlue38: ItemKeyBlue {
		keyid = 5038;
	};
	class ItemKeyBlue39: ItemKeyBlue {
		keyid = 5039;
	};
	class ItemKeyBlue40: ItemKeyBlue {
		keyid = 5040;
	};
	class ItemKeyBlue41: ItemKeyBlue {
		keyid = 5041;
	};
	class ItemKeyBlue42: ItemKeyBlue {
		keyid = 5042;
	};
	class ItemKeyBlue43: ItemKeyBlue {
		keyid = 5043;
	};
	class ItemKeyBlue44: ItemKeyBlue {
		keyid = 5044;
	};
	class ItemKeyBlue45: ItemKeyBlue {
		keyid = 5045;
	};
	class ItemKeyBlue46: ItemKeyBlue {
		keyid = 5046;
	};
	class ItemKeyBlue47: ItemKeyBlue {
		keyid = 5047;
	};
	class ItemKeyBlue48: ItemKeyBlue {
		keyid = 5048;
	};
	class ItemKeyBlue49: ItemKeyBlue {
		keyid = 5049;
	};
	class ItemKeyBlue50: ItemKeyBlue {
		keyid = 5050;
	};
	class ItemKeyBlue51: ItemKeyBlue {
		keyid = 5051;
	};
	class ItemKeyBlue52: ItemKeyBlue {
		keyid = 5052;
	};
	class ItemKeyBlue53: ItemKeyBlue {
		keyid = 5053;
	};
	class ItemKeyBlue54: ItemKeyBlue {
		keyid = 5054;
	};
	class ItemKeyBlue55: ItemKeyBlue {
		keyid = 5055;
	};
	class ItemKeyBlue56: ItemKeyBlue {
		keyid = 5056;
	};
	class ItemKeyBlue57: ItemKeyBlue {
		keyid = 5057;
	};
	class ItemKeyBlue58: ItemKeyBlue {
		keyid = 5058;
	};
	class ItemKeyBlue59: ItemKeyBlue {
		keyid = 5059;
	};
	class ItemKeyBlue60: ItemKeyBlue {
		keyid = 5060;
	};
	class ItemKeyBlue61: ItemKeyBlue {
		keyid = 5061;
	};
	class ItemKeyBlue62: ItemKeyBlue {
		keyid = 5062;
	};
	class ItemKeyBlue63: ItemKeyBlue {
		keyid = 5063;
	};
	class ItemKeyBlue64: ItemKeyBlue {
		keyid = 5064;
	};
	class ItemKeyBlue65: ItemKeyBlue {
		keyid = 5065;
	};
	class ItemKeyBlue66: ItemKeyBlue {
		keyid = 5066;
	};
	class ItemKeyBlue67: ItemKeyBlue {
		keyid = 5067;
	};
	class ItemKeyBlue68: ItemKeyBlue {
		keyid = 5068;
	};
	class ItemKeyBlue69: ItemKeyBlue {
		keyid = 5069;
	};
	class ItemKeyBlue70: ItemKeyBlue {
		keyid = 5070;
	};
	class ItemKeyBlue71: ItemKeyBlue {
		keyid = 5071;
	};
	class ItemKeyBlue72: ItemKeyBlue {
		keyid = 5072;
	};
	class ItemKeyBlue73: ItemKeyBlue {
		keyid = 5073;
	};
	class ItemKeyBlue74: ItemKeyBlue {
		keyid = 5074;
	};
	class ItemKeyBlue75: ItemKeyBlue {
		keyid = 5075;
	};
	class ItemKeyBlue76: ItemKeyBlue {
		keyid = 5076;
	};
	class ItemKeyBlue77: ItemKeyBlue {
		keyid = 5077;
	};
	class ItemKeyBlue78: ItemKeyBlue {
		keyid = 5078;
	};
	class ItemKeyBlue79: ItemKeyBlue {
		keyid = 5079;
	};
	class ItemKeyBlue80: ItemKeyBlue {
		keyid = 5080;
	};
	class ItemKeyBlue81: ItemKeyBlue {
		keyid = 5081;
	};
	class ItemKeyBlue82: ItemKeyBlue {
		keyid = 5082;
	};
	class ItemKeyBlue83: ItemKeyBlue {
		keyid = 5083;
	};
	class ItemKeyBlue84: ItemKeyBlue {
		keyid = 5084;
	};
	class ItemKeyBlue85: ItemKeyBlue {
		keyid = 5085;
	};
	class ItemKeyBlue86: ItemKeyBlue {
		keyid = 5086;
	};
	class ItemKeyBlue87: ItemKeyBlue {
		keyid = 5087;
	};
	class ItemKeyBlue88: ItemKeyBlue {
		keyid = 5088;
	};
	class ItemKeyBlue89: ItemKeyBlue {
		keyid = 5089;
	};
	class ItemKeyBlue90: ItemKeyBlue {
		keyid = 5090;
	};
	class ItemKeyBlue91: ItemKeyBlue {
		keyid = 5091;
	};
	class ItemKeyBlue92: ItemKeyBlue {
		keyid = 5092;
	};
	class ItemKeyBlue93: ItemKeyBlue {
		keyid = 5093;
	};
	class ItemKeyBlue94: ItemKeyBlue {
		keyid = 5094;
	};
	class ItemKeyBlue95: ItemKeyBlue {
		keyid = 5095;
	};
	class ItemKeyBlue96: ItemKeyBlue {
		keyid = 5096;
	};
	class ItemKeyBlue97: ItemKeyBlue {
		keyid = 5097;
	};
	class ItemKeyBlue98: ItemKeyBlue {
		keyid = 5098;
	};
	class ItemKeyBlue99: ItemKeyBlue {
		keyid = 5099;
	};
	class ItemKeyBlue100: ItemKeyBlue {
		keyid = 5100;
	};
	class ItemKeyBlue101: ItemKeyBlue {
		keyid = 5101;
	};
	class ItemKeyBlue102: ItemKeyBlue {
		keyid = 5102;
	};
	class ItemKeyBlue103: ItemKeyBlue {
		keyid = 5103;
	};
	class ItemKeyBlue104: ItemKeyBlue {
		keyid = 5104;
	};
	class ItemKeyBlue105: ItemKeyBlue {
		keyid = 5105;
	};
	class ItemKeyBlue106: ItemKeyBlue {
		keyid = 5106;
	};
	class ItemKeyBlue107: ItemKeyBlue {
		keyid = 5107;
	};
	class ItemKeyBlue108: ItemKeyBlue {
		keyid = 5108;
	};
	class ItemKeyBlue109: ItemKeyBlue {
		keyid = 5109;
	};
	class ItemKeyBlue110: ItemKeyBlue {
		keyid = 5110;
	};
	class ItemKeyBlue111: ItemKeyBlue {
		keyid = 5111;
	};
	class ItemKeyBlue112: ItemKeyBlue {
		keyid = 5112;
	};
	class ItemKeyBlue113: ItemKeyBlue {
		keyid = 5113;
	};
	class ItemKeyBlue114: ItemKeyBlue {
		keyid = 5114;
	};
	class ItemKeyBlue115: ItemKeyBlue {
		keyid = 5115;
	};
	class ItemKeyBlue116: ItemKeyBlue {
		keyid = 5116;
	};
	class ItemKeyBlue117: ItemKeyBlue {
		keyid = 5117;
	};
	class ItemKeyBlue118: ItemKeyBlue {
		keyid = 5118;
	};
	class ItemKeyBlue119: ItemKeyBlue {
		keyid = 5119;
	};
	class ItemKeyBlue120: ItemKeyBlue {
		keyid = 5120;
	};
	class ItemKeyBlue121: ItemKeyBlue {
		keyid = 5121;
	};
	class ItemKeyBlue122: ItemKeyBlue {
		keyid = 5122;
	};
	class ItemKeyBlue123: ItemKeyBlue {
		keyid = 5123;
	};
	class ItemKeyBlue124: ItemKeyBlue {
		keyid = 5124;
	};
	class ItemKeyBlue125: ItemKeyBlue {
		keyid = 5125;
	};
	class ItemKeyBlue126: ItemKeyBlue {
		keyid = 5126;
	};
	class ItemKeyBlue127: ItemKeyBlue {
		keyid = 5127;
	};
	class ItemKeyBlue128: ItemKeyBlue {
		keyid = 5128;
	};
	class ItemKeyBlue129: ItemKeyBlue {
		keyid = 5129;
	};
	class ItemKeyBlue130: ItemKeyBlue {
		keyid = 5130;
	};
	class ItemKeyBlue131: ItemKeyBlue {
		keyid = 5131;
	};
	class ItemKeyBlue132: ItemKeyBlue {
		keyid = 5132;
	};
	class ItemKeyBlue133: ItemKeyBlue {
		keyid = 5133;
	};
	class ItemKeyBlue134: ItemKeyBlue {
		keyid = 5134;
	};
	class ItemKeyBlue135: ItemKeyBlue {
		keyid = 5135;
	};
	class ItemKeyBlue136: ItemKeyBlue {
		keyid = 5136;
	};
	class ItemKeyBlue137: ItemKeyBlue {
		keyid = 5137;
	};
	class ItemKeyBlue138: ItemKeyBlue {
		keyid = 5138;
	};
	class ItemKeyBlue139: ItemKeyBlue {
		keyid = 5139;
	};
	class ItemKeyBlue140: ItemKeyBlue {
		keyid = 5140;
	};
	class ItemKeyBlue141: ItemKeyBlue {
		keyid = 5141;
	};
	class ItemKeyBlue142: ItemKeyBlue {
		keyid = 5142;
	};
	class ItemKeyBlue143: ItemKeyBlue {
		keyid = 5143;
	};
	class ItemKeyBlue144: ItemKeyBlue {
		keyid = 5144;
	};
	class ItemKeyBlue145: ItemKeyBlue {
		keyid = 5145;
	};
	class ItemKeyBlue146: ItemKeyBlue {
		keyid = 5146;
	};
	class ItemKeyBlue147: ItemKeyBlue {
		keyid = 5147;
	};
	class ItemKeyBlue148: ItemKeyBlue {
		keyid = 5148;
	};
	class ItemKeyBlue149: ItemKeyBlue {
		keyid = 5149;
	};
	class ItemKeyBlue150: ItemKeyBlue {
		keyid = 5150;
	};
	class ItemKeyBlue151: ItemKeyBlue {
		keyid = 5151;
	};
	class ItemKeyBlue152: ItemKeyBlue {
		keyid = 5152;
	};
	class ItemKeyBlue153: ItemKeyBlue {
		keyid = 5153;
	};
	class ItemKeyBlue154: ItemKeyBlue {
		keyid = 5154;
	};
	class ItemKeyBlue155: ItemKeyBlue {
		keyid = 5155;
	};
	class ItemKeyBlue156: ItemKeyBlue {
		keyid = 5156;
	};
	class ItemKeyBlue157: ItemKeyBlue {
		keyid = 5157;
	};
	class ItemKeyBlue158: ItemKeyBlue {
		keyid = 5158;
	};
	class ItemKeyBlue159: ItemKeyBlue {
		keyid = 5159;
	};
	class ItemKeyBlue160: ItemKeyBlue {
		keyid = 5160;
	};
	class ItemKeyBlue161: ItemKeyBlue {
		keyid = 5161;
	};
	class ItemKeyBlue162: ItemKeyBlue {
		keyid = 5162;
	};
	class ItemKeyBlue163: ItemKeyBlue {
		keyid = 5163;
	};
	class ItemKeyBlue164: ItemKeyBlue {
		keyid = 5164;
	};
	class ItemKeyBlue165: ItemKeyBlue {
		keyid = 5165;
	};
	class ItemKeyBlue166: ItemKeyBlue {
		keyid = 5166;
	};
	class ItemKeyBlue167: ItemKeyBlue {
		keyid = 5167;
	};
	class ItemKeyBlue168: ItemKeyBlue {
		keyid = 5168;
	};
	class ItemKeyBlue169: ItemKeyBlue {
		keyid = 5169;
	};
	class ItemKeyBlue170: ItemKeyBlue {
		keyid = 5170;
	};
	class ItemKeyBlue171: ItemKeyBlue {
		keyid = 5171;
	};
	class ItemKeyBlue172: ItemKeyBlue {
		keyid = 5172;
	};
	class ItemKeyBlue173: ItemKeyBlue {
		keyid = 5173;
	};
	class ItemKeyBlue174: ItemKeyBlue {
		keyid = 5174;
	};
	class ItemKeyBlue175: ItemKeyBlue {
		keyid = 5175;
	};
	class ItemKeyBlue176: ItemKeyBlue {
		keyid = 5176;
	};
	class ItemKeyBlue177: ItemKeyBlue {
		keyid = 5177;
	};
	class ItemKeyBlue178: ItemKeyBlue {
		keyid = 5178;
	};
	class ItemKeyBlue179: ItemKeyBlue {
		keyid = 5179;
	};
	class ItemKeyBlue180: ItemKeyBlue {
		keyid = 5180;
	};
	class ItemKeyBlue181: ItemKeyBlue {
		keyid = 5181;
	};
	class ItemKeyBlue182: ItemKeyBlue {
		keyid = 5182;
	};
	class ItemKeyBlue183: ItemKeyBlue {
		keyid = 5183;
	};
	class ItemKeyBlue184: ItemKeyBlue {
		keyid = 5184;
	};
	class ItemKeyBlue185: ItemKeyBlue {
		keyid = 5185;
	};
	class ItemKeyBlue186: ItemKeyBlue {
		keyid = 5186;
	};
	class ItemKeyBlue187: ItemKeyBlue {
		keyid = 5187;
	};
	class ItemKeyBlue188: ItemKeyBlue {
		keyid = 5188;
	};
	class ItemKeyBlue189: ItemKeyBlue {
		keyid = 5189;
	};
	class ItemKeyBlue190: ItemKeyBlue {
		keyid = 5190;
	};
	class ItemKeyBlue191: ItemKeyBlue {
		keyid = 5191;
	};
	class ItemKeyBlue192: ItemKeyBlue {
		keyid = 5192;
	};
	class ItemKeyBlue193: ItemKeyBlue {
		keyid = 5193;
	};
	class ItemKeyBlue194: ItemKeyBlue {
		keyid = 5194;
	};
	class ItemKeyBlue195: ItemKeyBlue {
		keyid = 5195;
	};
	class ItemKeyBlue196: ItemKeyBlue {
		keyid = 5196;
	};
	class ItemKeyBlue197: ItemKeyBlue {
		keyid = 5197;
	};
	class ItemKeyBlue198: ItemKeyBlue {
		keyid = 5198;
	};
	class ItemKeyBlue199: ItemKeyBlue {
		keyid = 5199;
	};
	class ItemKeyBlue200: ItemKeyBlue {
		keyid = 5200;
	};
	class ItemKeyBlue201: ItemKeyBlue {
		keyid = 5201;
	};
	class ItemKeyBlue202: ItemKeyBlue {
		keyid = 5202;
	};
	class ItemKeyBlue203: ItemKeyBlue {
		keyid = 5203;
	};
	class ItemKeyBlue204: ItemKeyBlue {
		keyid = 5204;
	};
	class ItemKeyBlue205: ItemKeyBlue {
		keyid = 5205;
	};
	class ItemKeyBlue206: ItemKeyBlue {
		keyid = 5206;
	};
	class ItemKeyBlue207: ItemKeyBlue {
		keyid = 5207;
	};
	class ItemKeyBlue208: ItemKeyBlue {
		keyid = 5208;
	};
	class ItemKeyBlue209: ItemKeyBlue {
		keyid = 5209;
	};
	class ItemKeyBlue210: ItemKeyBlue {
		keyid = 5210;
	};
	class ItemKeyBlue211: ItemKeyBlue {
		keyid = 5211;
	};
	class ItemKeyBlue212: ItemKeyBlue {
		keyid = 5212;
	};
	class ItemKeyBlue213: ItemKeyBlue {
		keyid = 5213;
	};
	class ItemKeyBlue214: ItemKeyBlue {
		keyid = 5214;
	};
	class ItemKeyBlue215: ItemKeyBlue {
		keyid = 5215;
	};
	class ItemKeyBlue216: ItemKeyBlue {
		keyid = 5216;
	};
	class ItemKeyBlue217: ItemKeyBlue {
		keyid = 5217;
	};
	class ItemKeyBlue218: ItemKeyBlue {
		keyid = 5218;
	};
	class ItemKeyBlue219: ItemKeyBlue {
		keyid = 5219;
	};
	class ItemKeyBlue220: ItemKeyBlue {
		keyid = 5220;
	};
	class ItemKeyBlue221: ItemKeyBlue {
		keyid = 5221;
	};
	class ItemKeyBlue222: ItemKeyBlue {
		keyid = 5222;
	};
	class ItemKeyBlue223: ItemKeyBlue {
		keyid = 5223;
	};
	class ItemKeyBlue224: ItemKeyBlue {
		keyid = 5224;
	};
	class ItemKeyBlue225: ItemKeyBlue {
		keyid = 5225;
	};
	class ItemKeyBlue226: ItemKeyBlue {
		keyid = 5226;
	};
	class ItemKeyBlue227: ItemKeyBlue {
		keyid = 5227;
	};
	class ItemKeyBlue228: ItemKeyBlue {
		keyid = 5228;
	};
	class ItemKeyBlue229: ItemKeyBlue {
		keyid = 5229;
	};
	class ItemKeyBlue230: ItemKeyBlue {
		keyid = 5230;
	};
	class ItemKeyBlue231: ItemKeyBlue {
		keyid = 5231;
	};
	class ItemKeyBlue232: ItemKeyBlue {
		keyid = 5232;
	};
	class ItemKeyBlue233: ItemKeyBlue {
		keyid = 5233;
	};
	class ItemKeyBlue234: ItemKeyBlue {
		keyid = 5234;
	};
	class ItemKeyBlue235: ItemKeyBlue {
		keyid = 5235;
	};
	class ItemKeyBlue236: ItemKeyBlue {
		keyid = 5236;
	};
	class ItemKeyBlue237: ItemKeyBlue {
		keyid = 5237;
	};
	class ItemKeyBlue238: ItemKeyBlue {
		keyid = 5238;
	};
	class ItemKeyBlue239: ItemKeyBlue {
		keyid = 5239;
	};
	class ItemKeyBlue240: ItemKeyBlue {
		keyid = 5240;
	};
	class ItemKeyBlue241: ItemKeyBlue {
		keyid = 5241;
	};
	class ItemKeyBlue242: ItemKeyBlue {
		keyid = 5242;
	};
	class ItemKeyBlue243: ItemKeyBlue {
		keyid = 5243;
	};
	class ItemKeyBlue244: ItemKeyBlue {
		keyid = 5244;
	};
	class ItemKeyBlue245: ItemKeyBlue {
		keyid = 5245;
	};
	class ItemKeyBlue246: ItemKeyBlue {
		keyid = 5246;
	};
	class ItemKeyBlue247: ItemKeyBlue {
		keyid = 5247;
	};
	class ItemKeyBlue248: ItemKeyBlue {
		keyid = 5248;
	};
	class ItemKeyBlue249: ItemKeyBlue {
		keyid = 5249;
	};
	class ItemKeyBlue250: ItemKeyBlue {
		keyid = 5250;
	};
	class ItemKeyBlue251: ItemKeyBlue {
		keyid = 5251;
	};
	class ItemKeyBlue252: ItemKeyBlue {
		keyid = 5252;
	};
	class ItemKeyBlue253: ItemKeyBlue {
		keyid = 5253;
	};
	class ItemKeyBlue254: ItemKeyBlue {
		keyid = 5254;
	};
	class ItemKeyBlue255: ItemKeyBlue {
		keyid = 5255;
	};
	class ItemKeyBlue256: ItemKeyBlue {
		keyid = 5256;
	};
	class ItemKeyBlue257: ItemKeyBlue {
		keyid = 5257;
	};
	class ItemKeyBlue258: ItemKeyBlue {
		keyid = 5258;
	};
	class ItemKeyBlue259: ItemKeyBlue {
		keyid = 5259;
	};
	class ItemKeyBlue260: ItemKeyBlue {
		keyid = 5260;
	};
	class ItemKeyBlue261: ItemKeyBlue {
		keyid = 5261;
	};
	class ItemKeyBlue262: ItemKeyBlue {
		keyid = 5262;
	};
	class ItemKeyBlue263: ItemKeyBlue {
		keyid = 5263;
	};
	class ItemKeyBlue264: ItemKeyBlue {
		keyid = 5264;
	};
	class ItemKeyBlue265: ItemKeyBlue {
		keyid = 5265;
	};
	class ItemKeyBlue266: ItemKeyBlue {
		keyid = 5266;
	};
	class ItemKeyBlue267: ItemKeyBlue {
		keyid = 5267;
	};
	class ItemKeyBlue268: ItemKeyBlue {
		keyid = 5268;
	};
	class ItemKeyBlue269: ItemKeyBlue {
		keyid = 5269;
	};
	class ItemKeyBlue270: ItemKeyBlue {
		keyid = 5270;
	};
	class ItemKeyBlue271: ItemKeyBlue {
		keyid = 5271;
	};
	class ItemKeyBlue272: ItemKeyBlue {
		keyid = 5272;
	};
	class ItemKeyBlue273: ItemKeyBlue {
		keyid = 5273;
	};
	class ItemKeyBlue274: ItemKeyBlue {
		keyid = 5274;
	};
	class ItemKeyBlue275: ItemKeyBlue {
		keyid = 5275;
	};
	class ItemKeyBlue276: ItemKeyBlue {
		keyid = 5276;
	};
	class ItemKeyBlue277: ItemKeyBlue {
		keyid = 5277;
	};
	class ItemKeyBlue278: ItemKeyBlue {
		keyid = 5278;
	};
	class ItemKeyBlue279: ItemKeyBlue {
		keyid = 5279;
	};
	class ItemKeyBlue280: ItemKeyBlue {
		keyid = 5280;
	};
	class ItemKeyBlue281: ItemKeyBlue {
		keyid = 5281;
	};
	class ItemKeyBlue282: ItemKeyBlue {
		keyid = 5282;
	};
	class ItemKeyBlue283: ItemKeyBlue {
		keyid = 5283;
	};
	class ItemKeyBlue284: ItemKeyBlue {
		keyid = 5284;
	};
	class ItemKeyBlue285: ItemKeyBlue {
		keyid = 5285;
	};
	class ItemKeyBlue286: ItemKeyBlue {
		keyid = 5286;
	};
	class ItemKeyBlue287: ItemKeyBlue {
		keyid = 5287;
	};
	class ItemKeyBlue288: ItemKeyBlue {
		keyid = 5288;
	};
	class ItemKeyBlue289: ItemKeyBlue {
		keyid = 5289;
	};
	class ItemKeyBlue290: ItemKeyBlue {
		keyid = 5290;
	};
	class ItemKeyBlue291: ItemKeyBlue {
		keyid = 5291;
	};
	class ItemKeyBlue292: ItemKeyBlue {
		keyid = 5292;
	};
	class ItemKeyBlue293: ItemKeyBlue {
		keyid = 5293;
	};
	class ItemKeyBlue294: ItemKeyBlue {
		keyid = 5294;
	};
	class ItemKeyBlue295: ItemKeyBlue {
		keyid = 5295;
	};
	class ItemKeyBlue296: ItemKeyBlue {
		keyid = 5296;
	};
	class ItemKeyBlue297: ItemKeyBlue {
		keyid = 5297;
	};
	class ItemKeyBlue298: ItemKeyBlue {
		keyid = 5298;
	};
	class ItemKeyBlue299: ItemKeyBlue {
		keyid = 5299;
	};
	class ItemKeyBlue300: ItemKeyBlue {
		keyid = 5300;
	};
	class ItemKeyBlue301: ItemKeyBlue {
		keyid = 5301;
	};
	class ItemKeyBlue302: ItemKeyBlue {
		keyid = 5302;
	};
	class ItemKeyBlue303: ItemKeyBlue {
		keyid = 5303;
	};
	class ItemKeyBlue304: ItemKeyBlue {
		keyid = 5304;
	};
	class ItemKeyBlue305: ItemKeyBlue {
		keyid = 5305;
	};
	class ItemKeyBlue306: ItemKeyBlue {
		keyid = 5306;
	};
	class ItemKeyBlue307: ItemKeyBlue {
		keyid = 5307;
	};
	class ItemKeyBlue308: ItemKeyBlue {
		keyid = 5308;
	};
	class ItemKeyBlue309: ItemKeyBlue {
		keyid = 5309;
	};
	class ItemKeyBlue310: ItemKeyBlue {
		keyid = 5310;
	};
	class ItemKeyBlue311: ItemKeyBlue {
		keyid = 5311;
	};
	class ItemKeyBlue312: ItemKeyBlue {
		keyid = 5312;
	};
	class ItemKeyBlue313: ItemKeyBlue {
		keyid = 5313;
	};
	class ItemKeyBlue314: ItemKeyBlue {
		keyid = 5314;
	};
	class ItemKeyBlue315: ItemKeyBlue {
		keyid = 5315;
	};
	class ItemKeyBlue316: ItemKeyBlue {
		keyid = 5316;
	};
	class ItemKeyBlue317: ItemKeyBlue {
		keyid = 5317;
	};
	class ItemKeyBlue318: ItemKeyBlue {
		keyid = 5318;
	};
	class ItemKeyBlue319: ItemKeyBlue {
		keyid = 5319;
	};
	class ItemKeyBlue320: ItemKeyBlue {
		keyid = 5320;
	};
	class ItemKeyBlue321: ItemKeyBlue {
		keyid = 5321;
	};
	class ItemKeyBlue322: ItemKeyBlue {
		keyid = 5322;
	};
	class ItemKeyBlue323: ItemKeyBlue {
		keyid = 5323;
	};
	class ItemKeyBlue324: ItemKeyBlue {
		keyid = 5324;
	};
	class ItemKeyBlue325: ItemKeyBlue {
		keyid = 5325;
	};
	class ItemKeyBlue326: ItemKeyBlue {
		keyid = 5326;
	};
	class ItemKeyBlue327: ItemKeyBlue {
		keyid = 5327;
	};
	class ItemKeyBlue328: ItemKeyBlue {
		keyid = 5328;
	};
	class ItemKeyBlue329: ItemKeyBlue {
		keyid = 5329;
	};
	class ItemKeyBlue330: ItemKeyBlue {
		keyid = 5330;
	};
	class ItemKeyBlue331: ItemKeyBlue {
		keyid = 5331;
	};
	class ItemKeyBlue332: ItemKeyBlue {
		keyid = 5332;
	};
	class ItemKeyBlue333: ItemKeyBlue {
		keyid = 5333;
	};
	class ItemKeyBlue334: ItemKeyBlue {
		keyid = 5334;
	};
	class ItemKeyBlue335: ItemKeyBlue {
		keyid = 5335;
	};
	class ItemKeyBlue336: ItemKeyBlue {
		keyid = 5336;
	};
	class ItemKeyBlue337: ItemKeyBlue {
		keyid = 5337;
	};
	class ItemKeyBlue338: ItemKeyBlue {
		keyid = 5338;
	};
	class ItemKeyBlue339: ItemKeyBlue {
		keyid = 5339;
	};
	class ItemKeyBlue340: ItemKeyBlue {
		keyid = 5340;
	};
	class ItemKeyBlue341: ItemKeyBlue {
		keyid = 5341;
	};
	class ItemKeyBlue342: ItemKeyBlue {
		keyid = 5342;
	};
	class ItemKeyBlue343: ItemKeyBlue {
		keyid = 5343;
	};
	class ItemKeyBlue344: ItemKeyBlue {
		keyid = 5344;
	};
	class ItemKeyBlue345: ItemKeyBlue {
		keyid = 5345;
	};
	class ItemKeyBlue346: ItemKeyBlue {
		keyid = 5346;
	};
	class ItemKeyBlue347: ItemKeyBlue {
		keyid = 5347;
	};
	class ItemKeyBlue348: ItemKeyBlue {
		keyid = 5348;
	};
	class ItemKeyBlue349: ItemKeyBlue {
		keyid = 5349;
	};
	class ItemKeyBlue350: ItemKeyBlue {
		keyid = 5350;
	};
	class ItemKeyBlue351: ItemKeyBlue {
		keyid = 5351;
	};
	class ItemKeyBlue352: ItemKeyBlue {
		keyid = 5352;
	};
	class ItemKeyBlue353: ItemKeyBlue {
		keyid = 5353;
	};
	class ItemKeyBlue354: ItemKeyBlue {
		keyid = 5354;
	};
	class ItemKeyBlue355: ItemKeyBlue {
		keyid = 5355;
	};
	class ItemKeyBlue356: ItemKeyBlue {
		keyid = 5356;
	};
	class ItemKeyBlue357: ItemKeyBlue {
		keyid = 5357;
	};
	class ItemKeyBlue358: ItemKeyBlue {
		keyid = 5358;
	};
	class ItemKeyBlue359: ItemKeyBlue {
		keyid = 5359;
	};
	class ItemKeyBlue360: ItemKeyBlue {
		keyid = 5360;
	};
	class ItemKeyBlue361: ItemKeyBlue {
		keyid = 5361;
	};
	class ItemKeyBlue362: ItemKeyBlue {
		keyid = 5362;
	};
	class ItemKeyBlue363: ItemKeyBlue {
		keyid = 5363;
	};
	class ItemKeyBlue364: ItemKeyBlue {
		keyid = 5364;
	};
	class ItemKeyBlue365: ItemKeyBlue {
		keyid = 5365;
	};
	class ItemKeyBlue366: ItemKeyBlue {
		keyid = 5366;
	};
	class ItemKeyBlue367: ItemKeyBlue {
		keyid = 5367;
	};
	class ItemKeyBlue368: ItemKeyBlue {
		keyid = 5368;
	};
	class ItemKeyBlue369: ItemKeyBlue {
		keyid = 5369;
	};
	class ItemKeyBlue370: ItemKeyBlue {
		keyid = 5370;
	};
	class ItemKeyBlue371: ItemKeyBlue {
		keyid = 5371;
	};
	class ItemKeyBlue372: ItemKeyBlue {
		keyid = 5372;
	};
	class ItemKeyBlue373: ItemKeyBlue {
		keyid = 5373;
	};
	class ItemKeyBlue374: ItemKeyBlue {
		keyid = 5374;
	};
	class ItemKeyBlue375: ItemKeyBlue {
		keyid = 5375;
	};
	class ItemKeyBlue376: ItemKeyBlue {
		keyid = 5376;
	};
	class ItemKeyBlue377: ItemKeyBlue {
		keyid = 5377;
	};
	class ItemKeyBlue378: ItemKeyBlue {
		keyid = 5378;
	};
	class ItemKeyBlue379: ItemKeyBlue {
		keyid = 5379;
	};
	class ItemKeyBlue380: ItemKeyBlue {
		keyid = 5380;
	};
	class ItemKeyBlue381: ItemKeyBlue {
		keyid = 5381;
	};
	class ItemKeyBlue382: ItemKeyBlue {
		keyid = 5382;
	};
	class ItemKeyBlue383: ItemKeyBlue {
		keyid = 5383;
	};
	class ItemKeyBlue384: ItemKeyBlue {
		keyid = 5384;
	};
	class ItemKeyBlue385: ItemKeyBlue {
		keyid = 5385;
	};
	class ItemKeyBlue386: ItemKeyBlue {
		keyid = 5386;
	};
	class ItemKeyBlue387: ItemKeyBlue {
		keyid = 5387;
	};
	class ItemKeyBlue388: ItemKeyBlue {
		keyid = 5388;
	};
	class ItemKeyBlue389: ItemKeyBlue {
		keyid = 5389;
	};
	class ItemKeyBlue390: ItemKeyBlue {
		keyid = 5390;
	};
	class ItemKeyBlue391: ItemKeyBlue {
		keyid = 5391;
	};
	class ItemKeyBlue392: ItemKeyBlue {
		keyid = 5392;
	};
	class ItemKeyBlue393: ItemKeyBlue {
		keyid = 5393;
	};
	class ItemKeyBlue394: ItemKeyBlue {
		keyid = 5394;
	};
	class ItemKeyBlue395: ItemKeyBlue {
		keyid = 5395;
	};
	class ItemKeyBlue396: ItemKeyBlue {
		keyid = 5396;
	};
	class ItemKeyBlue397: ItemKeyBlue {
		keyid = 5397;
	};
	class ItemKeyBlue398: ItemKeyBlue {
		keyid = 5398;
	};
	class ItemKeyBlue399: ItemKeyBlue {
		keyid = 5399;
	};
	class ItemKeyBlue400: ItemKeyBlue {
		keyid = 5400;
	};
	class ItemKeyBlue401: ItemKeyBlue {
		keyid = 5401;
	};
	class ItemKeyBlue402: ItemKeyBlue {
		keyid = 5402;
	};
	class ItemKeyBlue403: ItemKeyBlue {
		keyid = 5403;
	};
	class ItemKeyBlue404: ItemKeyBlue {
		keyid = 5404;
	};
	class ItemKeyBlue405: ItemKeyBlue {
		keyid = 5405;
	};
	class ItemKeyBlue406: ItemKeyBlue {
		keyid = 5406;
	};
	class ItemKeyBlue407: ItemKeyBlue {
		keyid = 5407;
	};
	class ItemKeyBlue408: ItemKeyBlue {
		keyid = 5408;
	};
	class ItemKeyBlue409: ItemKeyBlue {
		keyid = 5409;
	};
	class ItemKeyBlue410: ItemKeyBlue {
		keyid = 5410;
	};
	class ItemKeyBlue411: ItemKeyBlue {
		keyid = 5411;
	};
	class ItemKeyBlue412: ItemKeyBlue {
		keyid = 5412;
	};
	class ItemKeyBlue413: ItemKeyBlue {
		keyid = 5413;
	};
	class ItemKeyBlue414: ItemKeyBlue {
		keyid = 5414;
	};
	class ItemKeyBlue415: ItemKeyBlue {
		keyid = 5415;
	};
	class ItemKeyBlue416: ItemKeyBlue {
		keyid = 5416;
	};
	class ItemKeyBlue417: ItemKeyBlue {
		keyid = 5417;
	};
	class ItemKeyBlue418: ItemKeyBlue {
		keyid = 5418;
	};
	class ItemKeyBlue419: ItemKeyBlue {
		keyid = 5419;
	};
	class ItemKeyBlue420: ItemKeyBlue {
		keyid = 5420;
	};
	class ItemKeyBlue421: ItemKeyBlue {
		keyid = 5421;
	};
	class ItemKeyBlue422: ItemKeyBlue {
		keyid = 5422;
	};
	class ItemKeyBlue423: ItemKeyBlue {
		keyid = 5423;
	};
	class ItemKeyBlue424: ItemKeyBlue {
		keyid = 5424;
	};
	class ItemKeyBlue425: ItemKeyBlue {
		keyid = 5425;
	};
	class ItemKeyBlue426: ItemKeyBlue {
		keyid = 5426;
	};
	class ItemKeyBlue427: ItemKeyBlue {
		keyid = 5427;
	};
	class ItemKeyBlue428: ItemKeyBlue {
		keyid = 5428;
	};
	class ItemKeyBlue429: ItemKeyBlue {
		keyid = 5429;
	};
	class ItemKeyBlue430: ItemKeyBlue {
		keyid = 5430;
	};
	class ItemKeyBlue431: ItemKeyBlue {
		keyid = 5431;
	};
	class ItemKeyBlue432: ItemKeyBlue {
		keyid = 5432;
	};
	class ItemKeyBlue433: ItemKeyBlue {
		keyid = 5433;
	};
	class ItemKeyBlue434: ItemKeyBlue {
		keyid = 5434;
	};
	class ItemKeyBlue435: ItemKeyBlue {
		keyid = 5435;
	};
	class ItemKeyBlue436: ItemKeyBlue {
		keyid = 5436;
	};
	class ItemKeyBlue437: ItemKeyBlue {
		keyid = 5437;
	};
	class ItemKeyBlue438: ItemKeyBlue {
		keyid = 5438;
	};
	class ItemKeyBlue439: ItemKeyBlue {
		keyid = 5439;
	};
	class ItemKeyBlue440: ItemKeyBlue {
		keyid = 5440;
	};
	class ItemKeyBlue441: ItemKeyBlue {
		keyid = 5441;
	};
	class ItemKeyBlue442: ItemKeyBlue {
		keyid = 5442;
	};
	class ItemKeyBlue443: ItemKeyBlue {
		keyid = 5443;
	};
	class ItemKeyBlue444: ItemKeyBlue {
		keyid = 5444;
	};
	class ItemKeyBlue445: ItemKeyBlue {
		keyid = 5445;
	};
	class ItemKeyBlue446: ItemKeyBlue {
		keyid = 5446;
	};
	class ItemKeyBlue447: ItemKeyBlue {
		keyid = 5447;
	};
	class ItemKeyBlue448: ItemKeyBlue {
		keyid = 5448;
	};
	class ItemKeyBlue449: ItemKeyBlue {
		keyid = 5449;
	};
	class ItemKeyBlue450: ItemKeyBlue {
		keyid = 5450;
	};
	class ItemKeyBlue451: ItemKeyBlue {
		keyid = 5451;
	};
	class ItemKeyBlue452: ItemKeyBlue {
		keyid = 5452;
	};
	class ItemKeyBlue453: ItemKeyBlue {
		keyid = 5453;
	};
	class ItemKeyBlue454: ItemKeyBlue {
		keyid = 5454;
	};
	class ItemKeyBlue455: ItemKeyBlue {
		keyid = 5455;
	};
	class ItemKeyBlue456: ItemKeyBlue {
		keyid = 5456;
	};
	class ItemKeyBlue457: ItemKeyBlue {
		keyid = 5457;
	};
	class ItemKeyBlue458: ItemKeyBlue {
		keyid = 5458;
	};
	class ItemKeyBlue459: ItemKeyBlue {
		keyid = 5459;
	};
	class ItemKeyBlue460: ItemKeyBlue {
		keyid = 5460;
	};
	class ItemKeyBlue461: ItemKeyBlue {
		keyid = 5461;
	};
	class ItemKeyBlue462: ItemKeyBlue {
		keyid = 5462;
	};
	class ItemKeyBlue463: ItemKeyBlue {
		keyid = 5463;
	};
	class ItemKeyBlue464: ItemKeyBlue {
		keyid = 5464;
	};
	class ItemKeyBlue465: ItemKeyBlue {
		keyid = 5465;
	};
	class ItemKeyBlue466: ItemKeyBlue {
		keyid = 5466;
	};
	class ItemKeyBlue467: ItemKeyBlue {
		keyid = 5467;
	};
	class ItemKeyBlue468: ItemKeyBlue {
		keyid = 5468;
	};
	class ItemKeyBlue469: ItemKeyBlue {
		keyid = 5469;
	};
	class ItemKeyBlue470: ItemKeyBlue {
		keyid = 5470;
	};
	class ItemKeyBlue471: ItemKeyBlue {
		keyid = 5471;
	};
	class ItemKeyBlue472: ItemKeyBlue {
		keyid = 5472;
	};
	class ItemKeyBlue473: ItemKeyBlue {
		keyid = 5473;
	};
	class ItemKeyBlue474: ItemKeyBlue {
		keyid = 5474;
	};
	class ItemKeyBlue475: ItemKeyBlue {
		keyid = 5475;
	};
	class ItemKeyBlue476: ItemKeyBlue {
		keyid = 5476;
	};
	class ItemKeyBlue477: ItemKeyBlue {
		keyid = 5477;
	};
	class ItemKeyBlue478: ItemKeyBlue {
		keyid = 5478;
	};
	class ItemKeyBlue479: ItemKeyBlue {
		keyid = 5479;
	};
	class ItemKeyBlue480: ItemKeyBlue {
		keyid = 5480;
	};
	class ItemKeyBlue481: ItemKeyBlue {
		keyid = 5481;
	};
	class ItemKeyBlue482: ItemKeyBlue {
		keyid = 5482;
	};
	class ItemKeyBlue483: ItemKeyBlue {
		keyid = 5483;
	};
	class ItemKeyBlue484: ItemKeyBlue {
		keyid = 5484;
	};
	class ItemKeyBlue485: ItemKeyBlue {
		keyid = 5485;
	};
	class ItemKeyBlue486: ItemKeyBlue {
		keyid = 5486;
	};
	class ItemKeyBlue487: ItemKeyBlue {
		keyid = 5487;
	};
	class ItemKeyBlue488: ItemKeyBlue {
		keyid = 5488;
	};
	class ItemKeyBlue489: ItemKeyBlue {
		keyid = 5489;
	};
	class ItemKeyBlue490: ItemKeyBlue {
		keyid = 5490;
	};
	class ItemKeyBlue491: ItemKeyBlue {
		keyid = 5491;
	};
	class ItemKeyBlue492: ItemKeyBlue {
		keyid = 5492;
	};
	class ItemKeyBlue493: ItemKeyBlue {
		keyid = 5493;
	};
	class ItemKeyBlue494: ItemKeyBlue {
		keyid = 5494;
	};
	class ItemKeyBlue495: ItemKeyBlue {
		keyid = 5495;
	};
	class ItemKeyBlue496: ItemKeyBlue {
		keyid = 5496;
	};
	class ItemKeyBlue497: ItemKeyBlue {
		keyid = 5497;
	};
	class ItemKeyBlue498: ItemKeyBlue {
		keyid = 5498;
	};
	class ItemKeyBlue499: ItemKeyBlue {
		keyid = 5499;
	};
	class ItemKeyBlue500: ItemKeyBlue {
		keyid = 5500;
	};
	class ItemKeyBlue501: ItemKeyBlue {
		keyid = 5501;
	};
	class ItemKeyBlue502: ItemKeyBlue {
		keyid = 5502;
	};
	class ItemKeyBlue503: ItemKeyBlue {
		keyid = 5503;
	};
	class ItemKeyBlue504: ItemKeyBlue {
		keyid = 5504;
	};
	class ItemKeyBlue505: ItemKeyBlue {
		keyid = 5505;
	};
	class ItemKeyBlue506: ItemKeyBlue {
		keyid = 5506;
	};
	class ItemKeyBlue507: ItemKeyBlue {
		keyid = 5507;
	};
	class ItemKeyBlue508: ItemKeyBlue {
		keyid = 5508;
	};
	class ItemKeyBlue509: ItemKeyBlue {
		keyid = 5509;
	};
	class ItemKeyBlue510: ItemKeyBlue {
		keyid = 5510;
	};
	class ItemKeyBlue511: ItemKeyBlue {
		keyid = 5511;
	};
	class ItemKeyBlue512: ItemKeyBlue {
		keyid = 5512;
	};
	class ItemKeyBlue513: ItemKeyBlue {
		keyid = 5513;
	};
	class ItemKeyBlue514: ItemKeyBlue {
		keyid = 5514;
	};
	class ItemKeyBlue515: ItemKeyBlue {
		keyid = 5515;
	};
	class ItemKeyBlue516: ItemKeyBlue {
		keyid = 5516;
	};
	class ItemKeyBlue517: ItemKeyBlue {
		keyid = 5517;
	};
	class ItemKeyBlue518: ItemKeyBlue {
		keyid = 5518;
	};
	class ItemKeyBlue519: ItemKeyBlue {
		keyid = 5519;
	};
	class ItemKeyBlue520: ItemKeyBlue {
		keyid = 5520;
	};
	class ItemKeyBlue521: ItemKeyBlue {
		keyid = 5521;
	};
	class ItemKeyBlue522: ItemKeyBlue {
		keyid = 5522;
	};
	class ItemKeyBlue523: ItemKeyBlue {
		keyid = 5523;
	};
	class ItemKeyBlue524: ItemKeyBlue {
		keyid = 5524;
	};
	class ItemKeyBlue525: ItemKeyBlue {
		keyid = 5525;
	};
	class ItemKeyBlue526: ItemKeyBlue {
		keyid = 5526;
	};
	class ItemKeyBlue527: ItemKeyBlue {
		keyid = 5527;
	};
	class ItemKeyBlue528: ItemKeyBlue {
		keyid = 5528;
	};
	class ItemKeyBlue529: ItemKeyBlue {
		keyid = 5529;
	};
	class ItemKeyBlue530: ItemKeyBlue {
		keyid = 5530;
	};
	class ItemKeyBlue531: ItemKeyBlue {
		keyid = 5531;
	};
	class ItemKeyBlue532: ItemKeyBlue {
		keyid = 5532;
	};
	class ItemKeyBlue533: ItemKeyBlue {
		keyid = 5533;
	};
	class ItemKeyBlue534: ItemKeyBlue {
		keyid = 5534;
	};
	class ItemKeyBlue535: ItemKeyBlue {
		keyid = 5535;
	};
	class ItemKeyBlue536: ItemKeyBlue {
		keyid = 5536;
	};
	class ItemKeyBlue537: ItemKeyBlue {
		keyid = 5537;
	};
	class ItemKeyBlue538: ItemKeyBlue {
		keyid = 5538;
	};
	class ItemKeyBlue539: ItemKeyBlue {
		keyid = 5539;
	};
	class ItemKeyBlue540: ItemKeyBlue {
		keyid = 5540;
	};
	class ItemKeyBlue541: ItemKeyBlue {
		keyid = 5541;
	};
	class ItemKeyBlue542: ItemKeyBlue {
		keyid = 5542;
	};
	class ItemKeyBlue543: ItemKeyBlue {
		keyid = 5543;
	};
	class ItemKeyBlue544: ItemKeyBlue {
		keyid = 5544;
	};
	class ItemKeyBlue545: ItemKeyBlue {
		keyid = 5545;
	};
	class ItemKeyBlue546: ItemKeyBlue {
		keyid = 5546;
	};
	class ItemKeyBlue547: ItemKeyBlue {
		keyid = 5547;
	};
	class ItemKeyBlue548: ItemKeyBlue {
		keyid = 5548;
	};
	class ItemKeyBlue549: ItemKeyBlue {
		keyid = 5549;
	};
	class ItemKeyBlue550: ItemKeyBlue {
		keyid = 5550;
	};
	class ItemKeyBlue551: ItemKeyBlue {
		keyid = 5551;
	};
	class ItemKeyBlue552: ItemKeyBlue {
		keyid = 5552;
	};
	class ItemKeyBlue553: ItemKeyBlue {
		keyid = 5553;
	};
	class ItemKeyBlue554: ItemKeyBlue {
		keyid = 5554;
	};
	class ItemKeyBlue555: ItemKeyBlue {
		keyid = 5555;
	};
	class ItemKeyBlue556: ItemKeyBlue {
		keyid = 5556;
	};
	class ItemKeyBlue557: ItemKeyBlue {
		keyid = 5557;
	};
	class ItemKeyBlue558: ItemKeyBlue {
		keyid = 5558;
	};
	class ItemKeyBlue559: ItemKeyBlue {
		keyid = 5559;
	};
	class ItemKeyBlue560: ItemKeyBlue {
		keyid = 5560;
	};
	class ItemKeyBlue561: ItemKeyBlue {
		keyid = 5561;
	};
	class ItemKeyBlue562: ItemKeyBlue {
		keyid = 5562;
	};
	class ItemKeyBlue563: ItemKeyBlue {
		keyid = 5563;
	};
	class ItemKeyBlue564: ItemKeyBlue {
		keyid = 5564;
	};
	class ItemKeyBlue565: ItemKeyBlue {
		keyid = 5565;
	};
	class ItemKeyBlue566: ItemKeyBlue {
		keyid = 5566;
	};
	class ItemKeyBlue567: ItemKeyBlue {
		keyid = 5567;
	};
	class ItemKeyBlue568: ItemKeyBlue {
		keyid = 5568;
	};
	class ItemKeyBlue569: ItemKeyBlue {
		keyid = 5569;
	};
	class ItemKeyBlue570: ItemKeyBlue {
		keyid = 5570;
	};
	class ItemKeyBlue571: ItemKeyBlue {
		keyid = 5571;
	};
	class ItemKeyBlue572: ItemKeyBlue {
		keyid = 5572;
	};
	class ItemKeyBlue573: ItemKeyBlue {
		keyid = 5573;
	};
	class ItemKeyBlue574: ItemKeyBlue {
		keyid = 5574;
	};
	class ItemKeyBlue575: ItemKeyBlue {
		keyid = 5575;
	};
	class ItemKeyBlue576: ItemKeyBlue {
		keyid = 5576;
	};
	class ItemKeyBlue577: ItemKeyBlue {
		keyid = 5577;
	};
	class ItemKeyBlue578: ItemKeyBlue {
		keyid = 5578;
	};
	class ItemKeyBlue579: ItemKeyBlue {
		keyid = 5579;
	};
	class ItemKeyBlue580: ItemKeyBlue {
		keyid = 5580;
	};
	class ItemKeyBlue581: ItemKeyBlue {
		keyid = 5581;
	};
	class ItemKeyBlue582: ItemKeyBlue {
		keyid = 5582;
	};
	class ItemKeyBlue583: ItemKeyBlue {
		keyid = 5583;
	};
	class ItemKeyBlue584: ItemKeyBlue {
		keyid = 5584;
	};
	class ItemKeyBlue585: ItemKeyBlue {
		keyid = 5585;
	};
	class ItemKeyBlue586: ItemKeyBlue {
		keyid = 5586;
	};
	class ItemKeyBlue587: ItemKeyBlue {
		keyid = 5587;
	};
	class ItemKeyBlue588: ItemKeyBlue {
		keyid = 5588;
	};
	class ItemKeyBlue589: ItemKeyBlue {
		keyid = 5589;
	};
	class ItemKeyBlue590: ItemKeyBlue {
		keyid = 5590;
	};
	class ItemKeyBlue591: ItemKeyBlue {
		keyid = 5591;
	};
	class ItemKeyBlue592: ItemKeyBlue {
		keyid = 5592;
	};
	class ItemKeyBlue593: ItemKeyBlue {
		keyid = 5593;
	};
	class ItemKeyBlue594: ItemKeyBlue {
		keyid = 5594;
	};
	class ItemKeyBlue595: ItemKeyBlue {
		keyid = 5595;
	};
	class ItemKeyBlue596: ItemKeyBlue {
		keyid = 5596;
	};
	class ItemKeyBlue597: ItemKeyBlue {
		keyid = 5597;
	};
	class ItemKeyBlue598: ItemKeyBlue {
		keyid = 5598;
	};
	class ItemKeyBlue599: ItemKeyBlue {
		keyid = 5599;
	};
	class ItemKeyBlue600: ItemKeyBlue {
		keyid = 5600;
	};
	class ItemKeyBlue601: ItemKeyBlue {
		keyid = 5601;
	};
	class ItemKeyBlue602: ItemKeyBlue {
		keyid = 5602;
	};
	class ItemKeyBlue603: ItemKeyBlue {
		keyid = 5603;
	};
	class ItemKeyBlue604: ItemKeyBlue {
		keyid = 5604;
	};
	class ItemKeyBlue605: ItemKeyBlue {
		keyid = 5605;
	};
	class ItemKeyBlue606: ItemKeyBlue {
		keyid = 5606;
	};
	class ItemKeyBlue607: ItemKeyBlue {
		keyid = 5607;
	};
	class ItemKeyBlue608: ItemKeyBlue {
		keyid = 5608;
	};
	class ItemKeyBlue609: ItemKeyBlue {
		keyid = 5609;
	};
	class ItemKeyBlue610: ItemKeyBlue {
		keyid = 5610;
	};
	class ItemKeyBlue611: ItemKeyBlue {
		keyid = 5611;
	};
	class ItemKeyBlue612: ItemKeyBlue {
		keyid = 5612;
	};
	class ItemKeyBlue613: ItemKeyBlue {
		keyid = 5613;
	};
	class ItemKeyBlue614: ItemKeyBlue {
		keyid = 5614;
	};
	class ItemKeyBlue615: ItemKeyBlue {
		keyid = 5615;
	};
	class ItemKeyBlue616: ItemKeyBlue {
		keyid = 5616;
	};
	class ItemKeyBlue617: ItemKeyBlue {
		keyid = 5617;
	};
	class ItemKeyBlue618: ItemKeyBlue {
		keyid = 5618;
	};
	class ItemKeyBlue619: ItemKeyBlue {
		keyid = 5619;
	};
	class ItemKeyBlue620: ItemKeyBlue {
		keyid = 5620;
	};
	class ItemKeyBlue621: ItemKeyBlue {
		keyid = 5621;
	};
	class ItemKeyBlue622: ItemKeyBlue {
		keyid = 5622;
	};
	class ItemKeyBlue623: ItemKeyBlue {
		keyid = 5623;
	};
	class ItemKeyBlue624: ItemKeyBlue {
		keyid = 5624;
	};
	class ItemKeyBlue625: ItemKeyBlue {
		keyid = 5625;
	};
	class ItemKeyBlue626: ItemKeyBlue {
		keyid = 5626;
	};
	class ItemKeyBlue627: ItemKeyBlue {
		keyid = 5627;
	};
	class ItemKeyBlue628: ItemKeyBlue {
		keyid = 5628;
	};
	class ItemKeyBlue629: ItemKeyBlue {
		keyid = 5629;
	};
	class ItemKeyBlue630: ItemKeyBlue {
		keyid = 5630;
	};
	class ItemKeyBlue631: ItemKeyBlue {
		keyid = 5631;
	};
	class ItemKeyBlue632: ItemKeyBlue {
		keyid = 5632;
	};
	class ItemKeyBlue633: ItemKeyBlue {
		keyid = 5633;
	};
	class ItemKeyBlue634: ItemKeyBlue {
		keyid = 5634;
	};
	class ItemKeyBlue635: ItemKeyBlue {
		keyid = 5635;
	};
	class ItemKeyBlue636: ItemKeyBlue {
		keyid = 5636;
	};
	class ItemKeyBlue637: ItemKeyBlue {
		keyid = 5637;
	};
	class ItemKeyBlue638: ItemKeyBlue {
		keyid = 5638;
	};
	class ItemKeyBlue639: ItemKeyBlue {
		keyid = 5639;
	};
	class ItemKeyBlue640: ItemKeyBlue {
		keyid = 5640;
	};
	class ItemKeyBlue641: ItemKeyBlue {
		keyid = 5641;
	};
	class ItemKeyBlue642: ItemKeyBlue {
		keyid = 5642;
	};
	class ItemKeyBlue643: ItemKeyBlue {
		keyid = 5643;
	};
	class ItemKeyBlue644: ItemKeyBlue {
		keyid = 5644;
	};
	class ItemKeyBlue645: ItemKeyBlue {
		keyid = 5645;
	};
	class ItemKeyBlue646: ItemKeyBlue {
		keyid = 5646;
	};
	class ItemKeyBlue647: ItemKeyBlue {
		keyid = 5647;
	};
	class ItemKeyBlue648: ItemKeyBlue {
		keyid = 5648;
	};
	class ItemKeyBlue649: ItemKeyBlue {
		keyid = 5649;
	};
	class ItemKeyBlue650: ItemKeyBlue {
		keyid = 5650;
	};
	class ItemKeyBlue651: ItemKeyBlue {
		keyid = 5651;
	};
	class ItemKeyBlue652: ItemKeyBlue {
		keyid = 5652;
	};
	class ItemKeyBlue653: ItemKeyBlue {
		keyid = 5653;
	};
	class ItemKeyBlue654: ItemKeyBlue {
		keyid = 5654;
	};
	class ItemKeyBlue655: ItemKeyBlue {
		keyid = 5655;
	};
	class ItemKeyBlue656: ItemKeyBlue {
		keyid = 5656;
	};
	class ItemKeyBlue657: ItemKeyBlue {
		keyid = 5657;
	};
	class ItemKeyBlue658: ItemKeyBlue {
		keyid = 5658;
	};
	class ItemKeyBlue659: ItemKeyBlue {
		keyid = 5659;
	};
	class ItemKeyBlue660: ItemKeyBlue {
		keyid = 5660;
	};
	class ItemKeyBlue661: ItemKeyBlue {
		keyid = 5661;
	};
	class ItemKeyBlue662: ItemKeyBlue {
		keyid = 5662;
	};
	class ItemKeyBlue663: ItemKeyBlue {
		keyid = 5663;
	};
	class ItemKeyBlue664: ItemKeyBlue {
		keyid = 5664;
	};
	class ItemKeyBlue665: ItemKeyBlue {
		keyid = 5665;
	};
	class ItemKeyBlue666: ItemKeyBlue {
		keyid = 5666;
	};
	class ItemKeyBlue667: ItemKeyBlue {
		keyid = 5667;
	};
	class ItemKeyBlue668: ItemKeyBlue {
		keyid = 5668;
	};
	class ItemKeyBlue669: ItemKeyBlue {
		keyid = 5669;
	};
	class ItemKeyBlue670: ItemKeyBlue {
		keyid = 5670;
	};
	class ItemKeyBlue671: ItemKeyBlue {
		keyid = 5671;
	};
	class ItemKeyBlue672: ItemKeyBlue {
		keyid = 5672;
	};
	class ItemKeyBlue673: ItemKeyBlue {
		keyid = 5673;
	};
	class ItemKeyBlue674: ItemKeyBlue {
		keyid = 5674;
	};
	class ItemKeyBlue675: ItemKeyBlue {
		keyid = 5675;
	};
	class ItemKeyBlue676: ItemKeyBlue {
		keyid = 5676;
	};
	class ItemKeyBlue677: ItemKeyBlue {
		keyid = 5677;
	};
	class ItemKeyBlue678: ItemKeyBlue {
		keyid = 5678;
	};
	class ItemKeyBlue679: ItemKeyBlue {
		keyid = 5679;
	};
	class ItemKeyBlue680: ItemKeyBlue {
		keyid = 5680;
	};
	class ItemKeyBlue681: ItemKeyBlue {
		keyid = 5681;
	};
	class ItemKeyBlue682: ItemKeyBlue {
		keyid = 5682;
	};
	class ItemKeyBlue683: ItemKeyBlue {
		keyid = 5683;
	};
	class ItemKeyBlue684: ItemKeyBlue {
		keyid = 5684;
	};
	class ItemKeyBlue685: ItemKeyBlue {
		keyid = 5685;
	};
	class ItemKeyBlue686: ItemKeyBlue {
		keyid = 5686;
	};
	class ItemKeyBlue687: ItemKeyBlue {
		keyid = 5687;
	};
	class ItemKeyBlue688: ItemKeyBlue {
		keyid = 5688;
	};
	class ItemKeyBlue689: ItemKeyBlue {
		keyid = 5689;
	};
	class ItemKeyBlue690: ItemKeyBlue {
		keyid = 5690;
	};
	class ItemKeyBlue691: ItemKeyBlue {
		keyid = 5691;
	};
	class ItemKeyBlue692: ItemKeyBlue {
		keyid = 5692;
	};
	class ItemKeyBlue693: ItemKeyBlue {
		keyid = 5693;
	};
	class ItemKeyBlue694: ItemKeyBlue {
		keyid = 5694;
	};
	class ItemKeyBlue695: ItemKeyBlue {
		keyid = 5695;
	};
	class ItemKeyBlue696: ItemKeyBlue {
		keyid = 5696;
	};
	class ItemKeyBlue697: ItemKeyBlue {
		keyid = 5697;
	};
	class ItemKeyBlue698: ItemKeyBlue {
		keyid = 5698;
	};
	class ItemKeyBlue699: ItemKeyBlue {
		keyid = 5699;
	};
	class ItemKeyBlue700: ItemKeyBlue {
		keyid = 5700;
	};
	class ItemKeyBlue701: ItemKeyBlue {
		keyid = 5701;
	};
	class ItemKeyBlue702: ItemKeyBlue {
		keyid = 5702;
	};
	class ItemKeyBlue703: ItemKeyBlue {
		keyid = 5703;
	};
	class ItemKeyBlue704: ItemKeyBlue {
		keyid = 5704;
	};
	class ItemKeyBlue705: ItemKeyBlue {
		keyid = 5705;
	};
	class ItemKeyBlue706: ItemKeyBlue {
		keyid = 5706;
	};
	class ItemKeyBlue707: ItemKeyBlue {
		keyid = 5707;
	};
	class ItemKeyBlue708: ItemKeyBlue {
		keyid = 5708;
	};
	class ItemKeyBlue709: ItemKeyBlue {
		keyid = 5709;
	};
	class ItemKeyBlue710: ItemKeyBlue {
		keyid = 5710;
	};
	class ItemKeyBlue711: ItemKeyBlue {
		keyid = 5711;
	};
	class ItemKeyBlue712: ItemKeyBlue {
		keyid = 5712;
	};
	class ItemKeyBlue713: ItemKeyBlue {
		keyid = 5713;
	};
	class ItemKeyBlue714: ItemKeyBlue {
		keyid = 5714;
	};
	class ItemKeyBlue715: ItemKeyBlue {
		keyid = 5715;
	};
	class ItemKeyBlue716: ItemKeyBlue {
		keyid = 5716;
	};
	class ItemKeyBlue717: ItemKeyBlue {
		keyid = 5717;
	};
	class ItemKeyBlue718: ItemKeyBlue {
		keyid = 5718;
	};
	class ItemKeyBlue719: ItemKeyBlue {
		keyid = 5719;
	};
	class ItemKeyBlue720: ItemKeyBlue {
		keyid = 5720;
	};
	class ItemKeyBlue721: ItemKeyBlue {
		keyid = 5721;
	};
	class ItemKeyBlue722: ItemKeyBlue {
		keyid = 5722;
	};
	class ItemKeyBlue723: ItemKeyBlue {
		keyid = 5723;
	};
	class ItemKeyBlue724: ItemKeyBlue {
		keyid = 5724;
	};
	class ItemKeyBlue725: ItemKeyBlue {
		keyid = 5725;
	};
	class ItemKeyBlue726: ItemKeyBlue {
		keyid = 5726;
	};
	class ItemKeyBlue727: ItemKeyBlue {
		keyid = 5727;
	};
	class ItemKeyBlue728: ItemKeyBlue {
		keyid = 5728;
	};
	class ItemKeyBlue729: ItemKeyBlue {
		keyid = 5729;
	};
	class ItemKeyBlue730: ItemKeyBlue {
		keyid = 5730;
	};
	class ItemKeyBlue731: ItemKeyBlue {
		keyid = 5731;
	};
	class ItemKeyBlue732: ItemKeyBlue {
		keyid = 5732;
	};
	class ItemKeyBlue733: ItemKeyBlue {
		keyid = 5733;
	};
	class ItemKeyBlue734: ItemKeyBlue {
		keyid = 5734;
	};
	class ItemKeyBlue735: ItemKeyBlue {
		keyid = 5735;
	};
	class ItemKeyBlue736: ItemKeyBlue {
		keyid = 5736;
	};
	class ItemKeyBlue737: ItemKeyBlue {
		keyid = 5737;
	};
	class ItemKeyBlue738: ItemKeyBlue {
		keyid = 5738;
	};
	class ItemKeyBlue739: ItemKeyBlue {
		keyid = 5739;
	};
	class ItemKeyBlue740: ItemKeyBlue {
		keyid = 5740;
	};
	class ItemKeyBlue741: ItemKeyBlue {
		keyid = 5741;
	};
	class ItemKeyBlue742: ItemKeyBlue {
		keyid = 5742;
	};
	class ItemKeyBlue743: ItemKeyBlue {
		keyid = 5743;
	};
	class ItemKeyBlue744: ItemKeyBlue {
		keyid = 5744;
	};
	class ItemKeyBlue745: ItemKeyBlue {
		keyid = 5745;
	};
	class ItemKeyBlue746: ItemKeyBlue {
		keyid = 5746;
	};
	class ItemKeyBlue747: ItemKeyBlue {
		keyid = 5747;
	};
	class ItemKeyBlue748: ItemKeyBlue {
		keyid = 5748;
	};
	class ItemKeyBlue749: ItemKeyBlue {
		keyid = 5749;
	};
	class ItemKeyBlue750: ItemKeyBlue {
		keyid = 5750;
	};
	class ItemKeyBlue751: ItemKeyBlue {
		keyid = 5751;
	};
	class ItemKeyBlue752: ItemKeyBlue {
		keyid = 5752;
	};
	class ItemKeyBlue753: ItemKeyBlue {
		keyid = 5753;
	};
	class ItemKeyBlue754: ItemKeyBlue {
		keyid = 5754;
	};
	class ItemKeyBlue755: ItemKeyBlue {
		keyid = 5755;
	};
	class ItemKeyBlue756: ItemKeyBlue {
		keyid = 5756;
	};
	class ItemKeyBlue757: ItemKeyBlue {
		keyid = 5757;
	};
	class ItemKeyBlue758: ItemKeyBlue {
		keyid = 5758;
	};
	class ItemKeyBlue759: ItemKeyBlue {
		keyid = 5759;
	};
	class ItemKeyBlue760: ItemKeyBlue {
		keyid = 5760;
	};
	class ItemKeyBlue761: ItemKeyBlue {
		keyid = 5761;
	};
	class ItemKeyBlue762: ItemKeyBlue {
		keyid = 5762;
	};
	class ItemKeyBlue763: ItemKeyBlue {
		keyid = 5763;
	};
	class ItemKeyBlue764: ItemKeyBlue {
		keyid = 5764;
	};
	class ItemKeyBlue765: ItemKeyBlue {
		keyid = 5765;
	};
	class ItemKeyBlue766: ItemKeyBlue {
		keyid = 5766;
	};
	class ItemKeyBlue767: ItemKeyBlue {
		keyid = 5767;
	};
	class ItemKeyBlue768: ItemKeyBlue {
		keyid = 5768;
	};
	class ItemKeyBlue769: ItemKeyBlue {
		keyid = 5769;
	};
	class ItemKeyBlue770: ItemKeyBlue {
		keyid = 5770;
	};
	class ItemKeyBlue771: ItemKeyBlue {
		keyid = 5771;
	};
	class ItemKeyBlue772: ItemKeyBlue {
		keyid = 5772;
	};
	class ItemKeyBlue773: ItemKeyBlue {
		keyid = 5773;
	};
	class ItemKeyBlue774: ItemKeyBlue {
		keyid = 5774;
	};
	class ItemKeyBlue775: ItemKeyBlue {
		keyid = 5775;
	};
	class ItemKeyBlue776: ItemKeyBlue {
		keyid = 5776;
	};
	class ItemKeyBlue777: ItemKeyBlue {
		keyid = 5777;
	};
	class ItemKeyBlue778: ItemKeyBlue {
		keyid = 5778;
	};
	class ItemKeyBlue779: ItemKeyBlue {
		keyid = 5779;
	};
	class ItemKeyBlue780: ItemKeyBlue {
		keyid = 5780;
	};
	class ItemKeyBlue781: ItemKeyBlue {
		keyid = 5781;
	};
	class ItemKeyBlue782: ItemKeyBlue {
		keyid = 5782;
	};
	class ItemKeyBlue783: ItemKeyBlue {
		keyid = 5783;
	};
	class ItemKeyBlue784: ItemKeyBlue {
		keyid = 5784;
	};
	class ItemKeyBlue785: ItemKeyBlue {
		keyid = 5785;
	};
	class ItemKeyBlue786: ItemKeyBlue {
		keyid = 5786;
	};
	class ItemKeyBlue787: ItemKeyBlue {
		keyid = 5787;
	};
	class ItemKeyBlue788: ItemKeyBlue {
		keyid = 5788;
	};
	class ItemKeyBlue789: ItemKeyBlue {
		keyid = 5789;
	};
	class ItemKeyBlue790: ItemKeyBlue {
		keyid = 5790;
	};
	class ItemKeyBlue791: ItemKeyBlue {
		keyid = 5791;
	};
	class ItemKeyBlue792: ItemKeyBlue {
		keyid = 5792;
	};
	class ItemKeyBlue793: ItemKeyBlue {
		keyid = 5793;
	};
	class ItemKeyBlue794: ItemKeyBlue {
		keyid = 5794;
	};
	class ItemKeyBlue795: ItemKeyBlue {
		keyid = 5795;
	};
	class ItemKeyBlue796: ItemKeyBlue {
		keyid = 5796;
	};
	class ItemKeyBlue797: ItemKeyBlue {
		keyid = 5797;
	};
	class ItemKeyBlue798: ItemKeyBlue {
		keyid = 5798;
	};
	class ItemKeyBlue799: ItemKeyBlue {
		keyid = 5799;
	};
	class ItemKeyBlue800: ItemKeyBlue {
		keyid = 5800;
	};
	class ItemKeyBlue801: ItemKeyBlue {
		keyid = 5801;
	};
	class ItemKeyBlue802: ItemKeyBlue {
		keyid = 5802;
	};
	class ItemKeyBlue803: ItemKeyBlue {
		keyid = 5803;
	};
	class ItemKeyBlue804: ItemKeyBlue {
		keyid = 5804;
	};
	class ItemKeyBlue805: ItemKeyBlue {
		keyid = 5805;
	};
	class ItemKeyBlue806: ItemKeyBlue {
		keyid = 5806;
	};
	class ItemKeyBlue807: ItemKeyBlue {
		keyid = 5807;
	};
	class ItemKeyBlue808: ItemKeyBlue {
		keyid = 5808;
	};
	class ItemKeyBlue809: ItemKeyBlue {
		keyid = 5809;
	};
	class ItemKeyBlue810: ItemKeyBlue {
		keyid = 5810;
	};
	class ItemKeyBlue811: ItemKeyBlue {
		keyid = 5811;
	};
	class ItemKeyBlue812: ItemKeyBlue {
		keyid = 5812;
	};
	class ItemKeyBlue813: ItemKeyBlue {
		keyid = 5813;
	};
	class ItemKeyBlue814: ItemKeyBlue {
		keyid = 5814;
	};
	class ItemKeyBlue815: ItemKeyBlue {
		keyid = 5815;
	};
	class ItemKeyBlue816: ItemKeyBlue {
		keyid = 5816;
	};
	class ItemKeyBlue817: ItemKeyBlue {
		keyid = 5817;
	};
	class ItemKeyBlue818: ItemKeyBlue {
		keyid = 5818;
	};
	class ItemKeyBlue819: ItemKeyBlue {
		keyid = 5819;
	};
	class ItemKeyBlue820: ItemKeyBlue {
		keyid = 5820;
	};
	class ItemKeyBlue821: ItemKeyBlue {
		keyid = 5821;
	};
	class ItemKeyBlue822: ItemKeyBlue {
		keyid = 5822;
	};
	class ItemKeyBlue823: ItemKeyBlue {
		keyid = 5823;
	};
	class ItemKeyBlue824: ItemKeyBlue {
		keyid = 5824;
	};
	class ItemKeyBlue825: ItemKeyBlue {
		keyid = 5825;
	};
	class ItemKeyBlue826: ItemKeyBlue {
		keyid = 5826;
	};
	class ItemKeyBlue827: ItemKeyBlue {
		keyid = 5827;
	};
	class ItemKeyBlue828: ItemKeyBlue {
		keyid = 5828;
	};
	class ItemKeyBlue829: ItemKeyBlue {
		keyid = 5829;
	};
	class ItemKeyBlue830: ItemKeyBlue {
		keyid = 5830;
	};
	class ItemKeyBlue831: ItemKeyBlue {
		keyid = 5831;
	};
	class ItemKeyBlue832: ItemKeyBlue {
		keyid = 5832;
	};
	class ItemKeyBlue833: ItemKeyBlue {
		keyid = 5833;
	};
	class ItemKeyBlue834: ItemKeyBlue {
		keyid = 5834;
	};
	class ItemKeyBlue835: ItemKeyBlue {
		keyid = 5835;
	};
	class ItemKeyBlue836: ItemKeyBlue {
		keyid = 5836;
	};
	class ItemKeyBlue837: ItemKeyBlue {
		keyid = 5837;
	};
	class ItemKeyBlue838: ItemKeyBlue {
		keyid = 5838;
	};
	class ItemKeyBlue839: ItemKeyBlue {
		keyid = 5839;
	};
	class ItemKeyBlue840: ItemKeyBlue {
		keyid = 5840;
	};
	class ItemKeyBlue841: ItemKeyBlue {
		keyid = 5841;
	};
	class ItemKeyBlue842: ItemKeyBlue {
		keyid = 5842;
	};
	class ItemKeyBlue843: ItemKeyBlue {
		keyid = 5843;
	};
	class ItemKeyBlue844: ItemKeyBlue {
		keyid = 5844;
	};
	class ItemKeyBlue845: ItemKeyBlue {
		keyid = 5845;
	};
	class ItemKeyBlue846: ItemKeyBlue {
		keyid = 5846;
	};
	class ItemKeyBlue847: ItemKeyBlue {
		keyid = 5847;
	};
	class ItemKeyBlue848: ItemKeyBlue {
		keyid = 5848;
	};
	class ItemKeyBlue849: ItemKeyBlue {
		keyid = 5849;
	};
	class ItemKeyBlue850: ItemKeyBlue {
		keyid = 5850;
	};
	class ItemKeyBlue851: ItemKeyBlue {
		keyid = 5851;
	};
	class ItemKeyBlue852: ItemKeyBlue {
		keyid = 5852;
	};
	class ItemKeyBlue853: ItemKeyBlue {
		keyid = 5853;
	};
	class ItemKeyBlue854: ItemKeyBlue {
		keyid = 5854;
	};
	class ItemKeyBlue855: ItemKeyBlue {
		keyid = 5855;
	};
	class ItemKeyBlue856: ItemKeyBlue {
		keyid = 5856;
	};
	class ItemKeyBlue857: ItemKeyBlue {
		keyid = 5857;
	};
	class ItemKeyBlue858: ItemKeyBlue {
		keyid = 5858;
	};
	class ItemKeyBlue859: ItemKeyBlue {
		keyid = 5859;
	};
	class ItemKeyBlue860: ItemKeyBlue {
		keyid = 5860;
	};
	class ItemKeyBlue861: ItemKeyBlue {
		keyid = 5861;
	};
	class ItemKeyBlue862: ItemKeyBlue {
		keyid = 5862;
	};
	class ItemKeyBlue863: ItemKeyBlue {
		keyid = 5863;
	};
	class ItemKeyBlue864: ItemKeyBlue {
		keyid = 5864;
	};
	class ItemKeyBlue865: ItemKeyBlue {
		keyid = 5865;
	};
	class ItemKeyBlue866: ItemKeyBlue {
		keyid = 5866;
	};
	class ItemKeyBlue867: ItemKeyBlue {
		keyid = 5867;
	};
	class ItemKeyBlue868: ItemKeyBlue {
		keyid = 5868;
	};
	class ItemKeyBlue869: ItemKeyBlue {
		keyid = 5869;
	};
	class ItemKeyBlue870: ItemKeyBlue {
		keyid = 5870;
	};
	class ItemKeyBlue871: ItemKeyBlue {
		keyid = 5871;
	};
	class ItemKeyBlue872: ItemKeyBlue {
		keyid = 5872;
	};
	class ItemKeyBlue873: ItemKeyBlue {
		keyid = 5873;
	};
	class ItemKeyBlue874: ItemKeyBlue {
		keyid = 5874;
	};
	class ItemKeyBlue875: ItemKeyBlue {
		keyid = 5875;
	};
	class ItemKeyBlue876: ItemKeyBlue {
		keyid = 5876;
	};
	class ItemKeyBlue877: ItemKeyBlue {
		keyid = 5877;
	};
	class ItemKeyBlue878: ItemKeyBlue {
		keyid = 5878;
	};
	class ItemKeyBlue879: ItemKeyBlue {
		keyid = 5879;
	};
	class ItemKeyBlue880: ItemKeyBlue {
		keyid = 5880;
	};
	class ItemKeyBlue881: ItemKeyBlue {
		keyid = 5881;
	};
	class ItemKeyBlue882: ItemKeyBlue {
		keyid = 5882;
	};
	class ItemKeyBlue883: ItemKeyBlue {
		keyid = 5883;
	};
	class ItemKeyBlue884: ItemKeyBlue {
		keyid = 5884;
	};
	class ItemKeyBlue885: ItemKeyBlue {
		keyid = 5885;
	};
	class ItemKeyBlue886: ItemKeyBlue {
		keyid = 5886;
	};
	class ItemKeyBlue887: ItemKeyBlue {
		keyid = 5887;
	};
	class ItemKeyBlue888: ItemKeyBlue {
		keyid = 5888;
	};
	class ItemKeyBlue889: ItemKeyBlue {
		keyid = 5889;
	};
	class ItemKeyBlue890: ItemKeyBlue {
		keyid = 5890;
	};
	class ItemKeyBlue891: ItemKeyBlue {
		keyid = 5891;
	};
	class ItemKeyBlue892: ItemKeyBlue {
		keyid = 5892;
	};
	class ItemKeyBlue893: ItemKeyBlue {
		keyid = 5893;
	};
	class ItemKeyBlue894: ItemKeyBlue {
		keyid = 5894;
	};
	class ItemKeyBlue895: ItemKeyBlue {
		keyid = 5895;
	};
	class ItemKeyBlue896: ItemKeyBlue {
		keyid = 5896;
	};
	class ItemKeyBlue897: ItemKeyBlue {
		keyid = 5897;
	};
	class ItemKeyBlue898: ItemKeyBlue {
		keyid = 5898;
	};
	class ItemKeyBlue899: ItemKeyBlue {
		keyid = 5899;
	};
	class ItemKeyBlue900: ItemKeyBlue {
		keyid = 5900;
	};
	class ItemKeyBlue901: ItemKeyBlue {
		keyid = 5901;
	};
	class ItemKeyBlue902: ItemKeyBlue {
		keyid = 5902;
	};
	class ItemKeyBlue903: ItemKeyBlue {
		keyid = 5903;
	};
	class ItemKeyBlue904: ItemKeyBlue {
		keyid = 5904;
	};
	class ItemKeyBlue905: ItemKeyBlue {
		keyid = 5905;
	};
	class ItemKeyBlue906: ItemKeyBlue {
		keyid = 5906;
	};
	class ItemKeyBlue907: ItemKeyBlue {
		keyid = 5907;
	};
	class ItemKeyBlue908: ItemKeyBlue {
		keyid = 5908;
	};
	class ItemKeyBlue909: ItemKeyBlue {
		keyid = 5909;
	};
	class ItemKeyBlue910: ItemKeyBlue {
		keyid = 5910;
	};
	class ItemKeyBlue911: ItemKeyBlue {
		keyid = 5911;
	};
	class ItemKeyBlue912: ItemKeyBlue {
		keyid = 5912;
	};
	class ItemKeyBlue913: ItemKeyBlue {
		keyid = 5913;
	};
	class ItemKeyBlue914: ItemKeyBlue {
		keyid = 5914;
	};
	class ItemKeyBlue915: ItemKeyBlue {
		keyid = 5915;
	};
	class ItemKeyBlue916: ItemKeyBlue {
		keyid = 5916;
	};
	class ItemKeyBlue917: ItemKeyBlue {
		keyid = 5917;
	};
	class ItemKeyBlue918: ItemKeyBlue {
		keyid = 5918;
	};
	class ItemKeyBlue919: ItemKeyBlue {
		keyid = 5919;
	};
	class ItemKeyBlue920: ItemKeyBlue {
		keyid = 5920;
	};
	class ItemKeyBlue921: ItemKeyBlue {
		keyid = 5921;
	};
	class ItemKeyBlue922: ItemKeyBlue {
		keyid = 5922;
	};
	class ItemKeyBlue923: ItemKeyBlue {
		keyid = 5923;
	};
	class ItemKeyBlue924: ItemKeyBlue {
		keyid = 5924;
	};
	class ItemKeyBlue925: ItemKeyBlue {
		keyid = 5925;
	};
	class ItemKeyBlue926: ItemKeyBlue {
		keyid = 5926;
	};
	class ItemKeyBlue927: ItemKeyBlue {
		keyid = 5927;
	};
	class ItemKeyBlue928: ItemKeyBlue {
		keyid = 5928;
	};
	class ItemKeyBlue929: ItemKeyBlue {
		keyid = 5929;
	};
	class ItemKeyBlue930: ItemKeyBlue {
		keyid = 5930;
	};
	class ItemKeyBlue931: ItemKeyBlue {
		keyid = 5931;
	};
	class ItemKeyBlue932: ItemKeyBlue {
		keyid = 5932;
	};
	class ItemKeyBlue933: ItemKeyBlue {
		keyid = 5933;
	};
	class ItemKeyBlue934: ItemKeyBlue {
		keyid = 5934;
	};
	class ItemKeyBlue935: ItemKeyBlue {
		keyid = 5935;
	};
	class ItemKeyBlue936: ItemKeyBlue {
		keyid = 5936;
	};
	class ItemKeyBlue937: ItemKeyBlue {
		keyid = 5937;
	};
	class ItemKeyBlue938: ItemKeyBlue {
		keyid = 5938;
	};
	class ItemKeyBlue939: ItemKeyBlue {
		keyid = 5939;
	};
	class ItemKeyBlue940: ItemKeyBlue {
		keyid = 5940;
	};
	class ItemKeyBlue941: ItemKeyBlue {
		keyid = 5941;
	};
	class ItemKeyBlue942: ItemKeyBlue {
		keyid = 5942;
	};
	class ItemKeyBlue943: ItemKeyBlue {
		keyid = 5943;
	};
	class ItemKeyBlue944: ItemKeyBlue {
		keyid = 5944;
	};
	class ItemKeyBlue945: ItemKeyBlue {
		keyid = 5945;
	};
	class ItemKeyBlue946: ItemKeyBlue {
		keyid = 5946;
	};
	class ItemKeyBlue947: ItemKeyBlue {
		keyid = 5947;
	};
	class ItemKeyBlue948: ItemKeyBlue {
		keyid = 5948;
	};
	class ItemKeyBlue949: ItemKeyBlue {
		keyid = 5949;
	};
	class ItemKeyBlue950: ItemKeyBlue {
		keyid = 5950;
	};
	class ItemKeyBlue951: ItemKeyBlue {
		keyid = 5951;
	};
	class ItemKeyBlue952: ItemKeyBlue {
		keyid = 5952;
	};
	class ItemKeyBlue953: ItemKeyBlue {
		keyid = 5953;
	};
	class ItemKeyBlue954: ItemKeyBlue {
		keyid = 5954;
	};
	class ItemKeyBlue955: ItemKeyBlue {
		keyid = 5955;
	};
	class ItemKeyBlue956: ItemKeyBlue {
		keyid = 5956;
	};
	class ItemKeyBlue957: ItemKeyBlue {
		keyid = 5957;
	};
	class ItemKeyBlue958: ItemKeyBlue {
		keyid = 5958;
	};
	class ItemKeyBlue959: ItemKeyBlue {
		keyid = 5959;
	};
	class ItemKeyBlue960: ItemKeyBlue {
		keyid = 5960;
	};
	class ItemKeyBlue961: ItemKeyBlue {
		keyid = 5961;
	};
	class ItemKeyBlue962: ItemKeyBlue {
		keyid = 5962;
	};
	class ItemKeyBlue963: ItemKeyBlue {
		keyid = 5963;
	};
	class ItemKeyBlue964: ItemKeyBlue {
		keyid = 5964;
	};
	class ItemKeyBlue965: ItemKeyBlue {
		keyid = 5965;
	};
	class ItemKeyBlue966: ItemKeyBlue {
		keyid = 5966;
	};
	class ItemKeyBlue967: ItemKeyBlue {
		keyid = 5967;
	};
	class ItemKeyBlue968: ItemKeyBlue {
		keyid = 5968;
	};
	class ItemKeyBlue969: ItemKeyBlue {
		keyid = 5969;
	};
	class ItemKeyBlue970: ItemKeyBlue {
		keyid = 5970;
	};
	class ItemKeyBlue971: ItemKeyBlue {
		keyid = 5971;
	};
	class ItemKeyBlue972: ItemKeyBlue {
		keyid = 5972;
	};
	class ItemKeyBlue973: ItemKeyBlue {
		keyid = 5973;
	};
	class ItemKeyBlue974: ItemKeyBlue {
		keyid = 5974;
	};
	class ItemKeyBlue975: ItemKeyBlue {
		keyid = 5975;
	};
	class ItemKeyBlue976: ItemKeyBlue {
		keyid = 5976;
	};
	class ItemKeyBlue977: ItemKeyBlue {
		keyid = 5977;
	};
	class ItemKeyBlue978: ItemKeyBlue {
		keyid = 5978;
	};
	class ItemKeyBlue979: ItemKeyBlue {
		keyid = 5979;
	};
	class ItemKeyBlue980: ItemKeyBlue {
		keyid = 5980;
	};
	class ItemKeyBlue981: ItemKeyBlue {
		keyid = 5981;
	};
	class ItemKeyBlue982: ItemKeyBlue {
		keyid = 5982;
	};
	class ItemKeyBlue983: ItemKeyBlue {
		keyid = 5983;
	};
	class ItemKeyBlue984: ItemKeyBlue {
		keyid = 5984;
	};
	class ItemKeyBlue985: ItemKeyBlue {
		keyid = 5985;
	};
	class ItemKeyBlue986: ItemKeyBlue {
		keyid = 5986;
	};
	class ItemKeyBlue987: ItemKeyBlue {
		keyid = 5987;
	};
	class ItemKeyBlue988: ItemKeyBlue {
		keyid = 5988;
	};
	class ItemKeyBlue989: ItemKeyBlue {
		keyid = 5989;
	};
	class ItemKeyBlue990: ItemKeyBlue {
		keyid = 5990;
	};
	class ItemKeyBlue991: ItemKeyBlue {
		keyid = 5991;
	};
	class ItemKeyBlue992: ItemKeyBlue {
		keyid = 5992;
	};
	class ItemKeyBlue993: ItemKeyBlue {
		keyid = 5993;
	};
	class ItemKeyBlue994: ItemKeyBlue {
		keyid = 5994;
	};
	class ItemKeyBlue995: ItemKeyBlue {
		keyid = 5995;
	};
	class ItemKeyBlue996: ItemKeyBlue {
		keyid = 5996;
	};
	class ItemKeyBlue997: ItemKeyBlue {
		keyid = 5997;
	};
	class ItemKeyBlue998: ItemKeyBlue {
		keyid = 5998;
	};
	class ItemKeyBlue999: ItemKeyBlue {
		keyid = 5999;
	};
	class ItemKeyBlue1000: ItemKeyBlue {
		keyid = 6000;
	};
	class ItemKeyBlue1001: ItemKeyBlue {
		keyid = 6001;
	};
	class ItemKeyBlue1002: ItemKeyBlue {
		keyid = 6002;
	};
	class ItemKeyBlue1003: ItemKeyBlue {
		keyid = 6003;
	};
	class ItemKeyBlue1004: ItemKeyBlue {
		keyid = 6004;
	};
	class ItemKeyBlue1005: ItemKeyBlue {
		keyid = 6005;
	};
	class ItemKeyBlue1006: ItemKeyBlue {
		keyid = 6006;
	};
	class ItemKeyBlue1007: ItemKeyBlue {
		keyid = 6007;
	};
	class ItemKeyBlue1008: ItemKeyBlue {
		keyid = 6008;
	};
	class ItemKeyBlue1009: ItemKeyBlue {
		keyid = 6009;
	};
	class ItemKeyBlue1010: ItemKeyBlue {
		keyid = 6010;
	};
	class ItemKeyBlue1011: ItemKeyBlue {
		keyid = 6011;
	};
	class ItemKeyBlue1012: ItemKeyBlue {
		keyid = 6012;
	};
	class ItemKeyBlue1013: ItemKeyBlue {
		keyid = 6013;
	};
	class ItemKeyBlue1014: ItemKeyBlue {
		keyid = 6014;
	};
	class ItemKeyBlue1015: ItemKeyBlue {
		keyid = 6015;
	};
	class ItemKeyBlue1016: ItemKeyBlue {
		keyid = 6016;
	};
	class ItemKeyBlue1017: ItemKeyBlue {
		keyid = 6017;
	};
	class ItemKeyBlue1018: ItemKeyBlue {
		keyid = 6018;
	};
	class ItemKeyBlue1019: ItemKeyBlue {
		keyid = 6019;
	};
	class ItemKeyBlue1020: ItemKeyBlue {
		keyid = 6020;
	};
	class ItemKeyBlue1021: ItemKeyBlue {
		keyid = 6021;
	};
	class ItemKeyBlue1022: ItemKeyBlue {
		keyid = 6022;
	};
	class ItemKeyBlue1023: ItemKeyBlue {
		keyid = 6023;
	};
	class ItemKeyBlue1024: ItemKeyBlue {
		keyid = 6024;
	};
	class ItemKeyBlue1025: ItemKeyBlue {
		keyid = 6025;
	};
	class ItemKeyBlue1026: ItemKeyBlue {
		keyid = 6026;
	};
	class ItemKeyBlue1027: ItemKeyBlue {
		keyid = 6027;
	};
	class ItemKeyBlue1028: ItemKeyBlue {
		keyid = 6028;
	};
	class ItemKeyBlue1029: ItemKeyBlue {
		keyid = 6029;
	};
	class ItemKeyBlue1030: ItemKeyBlue {
		keyid = 6030;
	};
	class ItemKeyBlue1031: ItemKeyBlue {
		keyid = 6031;
	};
	class ItemKeyBlue1032: ItemKeyBlue {
		keyid = 6032;
	};
	class ItemKeyBlue1033: ItemKeyBlue {
		keyid = 6033;
	};
	class ItemKeyBlue1034: ItemKeyBlue {
		keyid = 6034;
	};
	class ItemKeyBlue1035: ItemKeyBlue {
		keyid = 6035;
	};
	class ItemKeyBlue1036: ItemKeyBlue {
		keyid = 6036;
	};
	class ItemKeyBlue1037: ItemKeyBlue {
		keyid = 6037;
	};
	class ItemKeyBlue1038: ItemKeyBlue {
		keyid = 6038;
	};
	class ItemKeyBlue1039: ItemKeyBlue {
		keyid = 6039;
	};
	class ItemKeyBlue1040: ItemKeyBlue {
		keyid = 6040;
	};
	class ItemKeyBlue1041: ItemKeyBlue {
		keyid = 6041;
	};
	class ItemKeyBlue1042: ItemKeyBlue {
		keyid = 6042;
	};
	class ItemKeyBlue1043: ItemKeyBlue {
		keyid = 6043;
	};
	class ItemKeyBlue1044: ItemKeyBlue {
		keyid = 6044;
	};
	class ItemKeyBlue1045: ItemKeyBlue {
		keyid = 6045;
	};
	class ItemKeyBlue1046: ItemKeyBlue {
		keyid = 6046;
	};
	class ItemKeyBlue1047: ItemKeyBlue {
		keyid = 6047;
	};
	class ItemKeyBlue1048: ItemKeyBlue {
		keyid = 6048;
	};
	class ItemKeyBlue1049: ItemKeyBlue {
		keyid = 6049;
	};
	class ItemKeyBlue1050: ItemKeyBlue {
		keyid = 6050;
	};
	class ItemKeyBlue1051: ItemKeyBlue {
		keyid = 6051;
	};
	class ItemKeyBlue1052: ItemKeyBlue {
		keyid = 6052;
	};
	class ItemKeyBlue1053: ItemKeyBlue {
		keyid = 6053;
	};
	class ItemKeyBlue1054: ItemKeyBlue {
		keyid = 6054;
	};
	class ItemKeyBlue1055: ItemKeyBlue {
		keyid = 6055;
	};
	class ItemKeyBlue1056: ItemKeyBlue {
		keyid = 6056;
	};
	class ItemKeyBlue1057: ItemKeyBlue {
		keyid = 6057;
	};
	class ItemKeyBlue1058: ItemKeyBlue {
		keyid = 6058;
	};
	class ItemKeyBlue1059: ItemKeyBlue {
		keyid = 6059;
	};
	class ItemKeyBlue1060: ItemKeyBlue {
		keyid = 6060;
	};
	class ItemKeyBlue1061: ItemKeyBlue {
		keyid = 6061;
	};
	class ItemKeyBlue1062: ItemKeyBlue {
		keyid = 6062;
	};
	class ItemKeyBlue1063: ItemKeyBlue {
		keyid = 6063;
	};
	class ItemKeyBlue1064: ItemKeyBlue {
		keyid = 6064;
	};
	class ItemKeyBlue1065: ItemKeyBlue {
		keyid = 6065;
	};
	class ItemKeyBlue1066: ItemKeyBlue {
		keyid = 6066;
	};
	class ItemKeyBlue1067: ItemKeyBlue {
		keyid = 6067;
	};
	class ItemKeyBlue1068: ItemKeyBlue {
		keyid = 6068;
	};
	class ItemKeyBlue1069: ItemKeyBlue {
		keyid = 6069;
	};
	class ItemKeyBlue1070: ItemKeyBlue {
		keyid = 6070;
	};
	class ItemKeyBlue1071: ItemKeyBlue {
		keyid = 6071;
	};
	class ItemKeyBlue1072: ItemKeyBlue {
		keyid = 6072;
	};
	class ItemKeyBlue1073: ItemKeyBlue {
		keyid = 6073;
	};
	class ItemKeyBlue1074: ItemKeyBlue {
		keyid = 6074;
	};
	class ItemKeyBlue1075: ItemKeyBlue {
		keyid = 6075;
	};
	class ItemKeyBlue1076: ItemKeyBlue {
		keyid = 6076;
	};
	class ItemKeyBlue1077: ItemKeyBlue {
		keyid = 6077;
	};
	class ItemKeyBlue1078: ItemKeyBlue {
		keyid = 6078;
	};
	class ItemKeyBlue1079: ItemKeyBlue {
		keyid = 6079;
	};
	class ItemKeyBlue1080: ItemKeyBlue {
		keyid = 6080;
	};
	class ItemKeyBlue1081: ItemKeyBlue {
		keyid = 6081;
	};
	class ItemKeyBlue1082: ItemKeyBlue {
		keyid = 6082;
	};
	class ItemKeyBlue1083: ItemKeyBlue {
		keyid = 6083;
	};
	class ItemKeyBlue1084: ItemKeyBlue {
		keyid = 6084;
	};
	class ItemKeyBlue1085: ItemKeyBlue {
		keyid = 6085;
	};
	class ItemKeyBlue1086: ItemKeyBlue {
		keyid = 6086;
	};
	class ItemKeyBlue1087: ItemKeyBlue {
		keyid = 6087;
	};
	class ItemKeyBlue1088: ItemKeyBlue {
		keyid = 6088;
	};
	class ItemKeyBlue1089: ItemKeyBlue {
		keyid = 6089;
	};
	class ItemKeyBlue1090: ItemKeyBlue {
		keyid = 6090;
	};
	class ItemKeyBlue1091: ItemKeyBlue {
		keyid = 6091;
	};
	class ItemKeyBlue1092: ItemKeyBlue {
		keyid = 6092;
	};
	class ItemKeyBlue1093: ItemKeyBlue {
		keyid = 6093;
	};
	class ItemKeyBlue1094: ItemKeyBlue {
		keyid = 6094;
	};
	class ItemKeyBlue1095: ItemKeyBlue {
		keyid = 6095;
	};
	class ItemKeyBlue1096: ItemKeyBlue {
		keyid = 6096;
	};
	class ItemKeyBlue1097: ItemKeyBlue {
		keyid = 6097;
	};
	class ItemKeyBlue1098: ItemKeyBlue {
		keyid = 6098;
	};
	class ItemKeyBlue1099: ItemKeyBlue {
		keyid = 6099;
	};
	class ItemKeyBlue1100: ItemKeyBlue {
		keyid = 6100;
	};
	class ItemKeyBlue1101: ItemKeyBlue {
		keyid = 6101;
	};
	class ItemKeyBlue1102: ItemKeyBlue {
		keyid = 6102;
	};
	class ItemKeyBlue1103: ItemKeyBlue {
		keyid = 6103;
	};
	class ItemKeyBlue1104: ItemKeyBlue {
		keyid = 6104;
	};
	class ItemKeyBlue1105: ItemKeyBlue {
		keyid = 6105;
	};
	class ItemKeyBlue1106: ItemKeyBlue {
		keyid = 6106;
	};
	class ItemKeyBlue1107: ItemKeyBlue {
		keyid = 6107;
	};
	class ItemKeyBlue1108: ItemKeyBlue {
		keyid = 6108;
	};
	class ItemKeyBlue1109: ItemKeyBlue {
		keyid = 6109;
	};
	class ItemKeyBlue1110: ItemKeyBlue {
		keyid = 6110;
	};
	class ItemKeyBlue1111: ItemKeyBlue {
		keyid = 6111;
	};
	class ItemKeyBlue1112: ItemKeyBlue {
		keyid = 6112;
	};
	class ItemKeyBlue1113: ItemKeyBlue {
		keyid = 6113;
	};
	class ItemKeyBlue1114: ItemKeyBlue {
		keyid = 6114;
	};
	class ItemKeyBlue1115: ItemKeyBlue {
		keyid = 6115;
	};
	class ItemKeyBlue1116: ItemKeyBlue {
		keyid = 6116;
	};
	class ItemKeyBlue1117: ItemKeyBlue {
		keyid = 6117;
	};
	class ItemKeyBlue1118: ItemKeyBlue {
		keyid = 6118;
	};
	class ItemKeyBlue1119: ItemKeyBlue {
		keyid = 6119;
	};
	class ItemKeyBlue1120: ItemKeyBlue {
		keyid = 6120;
	};
	class ItemKeyBlue1121: ItemKeyBlue {
		keyid = 6121;
	};
	class ItemKeyBlue1122: ItemKeyBlue {
		keyid = 6122;
	};
	class ItemKeyBlue1123: ItemKeyBlue {
		keyid = 6123;
	};
	class ItemKeyBlue1124: ItemKeyBlue {
		keyid = 6124;
	};
	class ItemKeyBlue1125: ItemKeyBlue {
		keyid = 6125;
	};
	class ItemKeyBlue1126: ItemKeyBlue {
		keyid = 6126;
	};
	class ItemKeyBlue1127: ItemKeyBlue {
		keyid = 6127;
	};
	class ItemKeyBlue1128: ItemKeyBlue {
		keyid = 6128;
	};
	class ItemKeyBlue1129: ItemKeyBlue {
		keyid = 6129;
	};
	class ItemKeyBlue1130: ItemKeyBlue {
		keyid = 6130;
	};
	class ItemKeyBlue1131: ItemKeyBlue {
		keyid = 6131;
	};
	class ItemKeyBlue1132: ItemKeyBlue {
		keyid = 6132;
	};
	class ItemKeyBlue1133: ItemKeyBlue {
		keyid = 6133;
	};
	class ItemKeyBlue1134: ItemKeyBlue {
		keyid = 6134;
	};
	class ItemKeyBlue1135: ItemKeyBlue {
		keyid = 6135;
	};
	class ItemKeyBlue1136: ItemKeyBlue {
		keyid = 6136;
	};
	class ItemKeyBlue1137: ItemKeyBlue {
		keyid = 6137;
	};
	class ItemKeyBlue1138: ItemKeyBlue {
		keyid = 6138;
	};
	class ItemKeyBlue1139: ItemKeyBlue {
		keyid = 6139;
	};
	class ItemKeyBlue1140: ItemKeyBlue {
		keyid = 6140;
	};
	class ItemKeyBlue1141: ItemKeyBlue {
		keyid = 6141;
	};
	class ItemKeyBlue1142: ItemKeyBlue {
		keyid = 6142;
	};
	class ItemKeyBlue1143: ItemKeyBlue {
		keyid = 6143;
	};
	class ItemKeyBlue1144: ItemKeyBlue {
		keyid = 6144;
	};
	class ItemKeyBlue1145: ItemKeyBlue {
		keyid = 6145;
	};
	class ItemKeyBlue1146: ItemKeyBlue {
		keyid = 6146;
	};
	class ItemKeyBlue1147: ItemKeyBlue {
		keyid = 6147;
	};
	class ItemKeyBlue1148: ItemKeyBlue {
		keyid = 6148;
	};
	class ItemKeyBlue1149: ItemKeyBlue {
		keyid = 6149;
	};
	class ItemKeyBlue1150: ItemKeyBlue {
		keyid = 6150;
	};
	class ItemKeyBlue1151: ItemKeyBlue {
		keyid = 6151;
	};
	class ItemKeyBlue1152: ItemKeyBlue {
		keyid = 6152;
	};
	class ItemKeyBlue1153: ItemKeyBlue {
		keyid = 6153;
	};
	class ItemKeyBlue1154: ItemKeyBlue {
		keyid = 6154;
	};
	class ItemKeyBlue1155: ItemKeyBlue {
		keyid = 6155;
	};
	class ItemKeyBlue1156: ItemKeyBlue {
		keyid = 6156;
	};
	class ItemKeyBlue1157: ItemKeyBlue {
		keyid = 6157;
	};
	class ItemKeyBlue1158: ItemKeyBlue {
		keyid = 6158;
	};
	class ItemKeyBlue1159: ItemKeyBlue {
		keyid = 6159;
	};
	class ItemKeyBlue1160: ItemKeyBlue {
		keyid = 6160;
	};
	class ItemKeyBlue1161: ItemKeyBlue {
		keyid = 6161;
	};
	class ItemKeyBlue1162: ItemKeyBlue {
		keyid = 6162;
	};
	class ItemKeyBlue1163: ItemKeyBlue {
		keyid = 6163;
	};
	class ItemKeyBlue1164: ItemKeyBlue {
		keyid = 6164;
	};
	class ItemKeyBlue1165: ItemKeyBlue {
		keyid = 6165;
	};
	class ItemKeyBlue1166: ItemKeyBlue {
		keyid = 6166;
	};
	class ItemKeyBlue1167: ItemKeyBlue {
		keyid = 6167;
	};
	class ItemKeyBlue1168: ItemKeyBlue {
		keyid = 6168;
	};
	class ItemKeyBlue1169: ItemKeyBlue {
		keyid = 6169;
	};
	class ItemKeyBlue1170: ItemKeyBlue {
		keyid = 6170;
	};
	class ItemKeyBlue1171: ItemKeyBlue {
		keyid = 6171;
	};
	class ItemKeyBlue1172: ItemKeyBlue {
		keyid = 6172;
	};
	class ItemKeyBlue1173: ItemKeyBlue {
		keyid = 6173;
	};
	class ItemKeyBlue1174: ItemKeyBlue {
		keyid = 6174;
	};
	class ItemKeyBlue1175: ItemKeyBlue {
		keyid = 6175;
	};
	class ItemKeyBlue1176: ItemKeyBlue {
		keyid = 6176;
	};
	class ItemKeyBlue1177: ItemKeyBlue {
		keyid = 6177;
	};
	class ItemKeyBlue1178: ItemKeyBlue {
		keyid = 6178;
	};
	class ItemKeyBlue1179: ItemKeyBlue {
		keyid = 6179;
	};
	class ItemKeyBlue1180: ItemKeyBlue {
		keyid = 6180;
	};
	class ItemKeyBlue1181: ItemKeyBlue {
		keyid = 6181;
	};
	class ItemKeyBlue1182: ItemKeyBlue {
		keyid = 6182;
	};
	class ItemKeyBlue1183: ItemKeyBlue {
		keyid = 6183;
	};
	class ItemKeyBlue1184: ItemKeyBlue {
		keyid = 6184;
	};
	class ItemKeyBlue1185: ItemKeyBlue {
		keyid = 6185;
	};
	class ItemKeyBlue1186: ItemKeyBlue {
		keyid = 6186;
	};
	class ItemKeyBlue1187: ItemKeyBlue {
		keyid = 6187;
	};
	class ItemKeyBlue1188: ItemKeyBlue {
		keyid = 6188;
	};
	class ItemKeyBlue1189: ItemKeyBlue {
		keyid = 6189;
	};
	class ItemKeyBlue1190: ItemKeyBlue {
		keyid = 6190;
	};
	class ItemKeyBlue1191: ItemKeyBlue {
		keyid = 6191;
	};
	class ItemKeyBlue1192: ItemKeyBlue {
		keyid = 6192;
	};
	class ItemKeyBlue1193: ItemKeyBlue {
		keyid = 6193;
	};
	class ItemKeyBlue1194: ItemKeyBlue {
		keyid = 6194;
	};
	class ItemKeyBlue1195: ItemKeyBlue {
		keyid = 6195;
	};
	class ItemKeyBlue1196: ItemKeyBlue {
		keyid = 6196;
	};
	class ItemKeyBlue1197: ItemKeyBlue {
		keyid = 6197;
	};
	class ItemKeyBlue1198: ItemKeyBlue {
		keyid = 6198;
	};
	class ItemKeyBlue1199: ItemKeyBlue {
		keyid = 6199;
	};
	class ItemKeyBlue1200: ItemKeyBlue {
		keyid = 6200;
	};
	class ItemKeyBlue1201: ItemKeyBlue {
		keyid = 6201;
	};
	class ItemKeyBlue1202: ItemKeyBlue {
		keyid = 6202;
	};
	class ItemKeyBlue1203: ItemKeyBlue {
		keyid = 6203;
	};
	class ItemKeyBlue1204: ItemKeyBlue {
		keyid = 6204;
	};
	class ItemKeyBlue1205: ItemKeyBlue {
		keyid = 6205;
	};
	class ItemKeyBlue1206: ItemKeyBlue {
		keyid = 6206;
	};
	class ItemKeyBlue1207: ItemKeyBlue {
		keyid = 6207;
	};
	class ItemKeyBlue1208: ItemKeyBlue {
		keyid = 6208;
	};
	class ItemKeyBlue1209: ItemKeyBlue {
		keyid = 6209;
	};
	class ItemKeyBlue1210: ItemKeyBlue {
		keyid = 6210;
	};
	class ItemKeyBlue1211: ItemKeyBlue {
		keyid = 6211;
	};
	class ItemKeyBlue1212: ItemKeyBlue {
		keyid = 6212;
	};
	class ItemKeyBlue1213: ItemKeyBlue {
		keyid = 6213;
	};
	class ItemKeyBlue1214: ItemKeyBlue {
		keyid = 6214;
	};
	class ItemKeyBlue1215: ItemKeyBlue {
		keyid = 6215;
	};
	class ItemKeyBlue1216: ItemKeyBlue {
		keyid = 6216;
	};
	class ItemKeyBlue1217: ItemKeyBlue {
		keyid = 6217;
	};
	class ItemKeyBlue1218: ItemKeyBlue {
		keyid = 6218;
	};
	class ItemKeyBlue1219: ItemKeyBlue {
		keyid = 6219;
	};
	class ItemKeyBlue1220: ItemKeyBlue {
		keyid = 6220;
	};
	class ItemKeyBlue1221: ItemKeyBlue {
		keyid = 6221;
	};
	class ItemKeyBlue1222: ItemKeyBlue {
		keyid = 6222;
	};
	class ItemKeyBlue1223: ItemKeyBlue {
		keyid = 6223;
	};
	class ItemKeyBlue1224: ItemKeyBlue {
		keyid = 6224;
	};
	class ItemKeyBlue1225: ItemKeyBlue {
		keyid = 6225;
	};
	class ItemKeyBlue1226: ItemKeyBlue {
		keyid = 6226;
	};
	class ItemKeyBlue1227: ItemKeyBlue {
		keyid = 6227;
	};
	class ItemKeyBlue1228: ItemKeyBlue {
		keyid = 6228;
	};
	class ItemKeyBlue1229: ItemKeyBlue {
		keyid = 6229;
	};
	class ItemKeyBlue1230: ItemKeyBlue {
		keyid = 6230;
	};
	class ItemKeyBlue1231: ItemKeyBlue {
		keyid = 6231;
	};
	class ItemKeyBlue1232: ItemKeyBlue {
		keyid = 6232;
	};
	class ItemKeyBlue1233: ItemKeyBlue {
		keyid = 6233;
	};
	class ItemKeyBlue1234: ItemKeyBlue {
		keyid = 6234;
	};
	class ItemKeyBlue1235: ItemKeyBlue {
		keyid = 6235;
	};
	class ItemKeyBlue1236: ItemKeyBlue {
		keyid = 6236;
	};
	class ItemKeyBlue1237: ItemKeyBlue {
		keyid = 6237;
	};
	class ItemKeyBlue1238: ItemKeyBlue {
		keyid = 6238;
	};
	class ItemKeyBlue1239: ItemKeyBlue {
		keyid = 6239;
	};
	class ItemKeyBlue1240: ItemKeyBlue {
		keyid = 6240;
	};
	class ItemKeyBlue1241: ItemKeyBlue {
		keyid = 6241;
	};
	class ItemKeyBlue1242: ItemKeyBlue {
		keyid = 6242;
	};
	class ItemKeyBlue1243: ItemKeyBlue {
		keyid = 6243;
	};
	class ItemKeyBlue1244: ItemKeyBlue {
		keyid = 6244;
	};
	class ItemKeyBlue1245: ItemKeyBlue {
		keyid = 6245;
	};
	class ItemKeyBlue1246: ItemKeyBlue {
		keyid = 6246;
	};
	class ItemKeyBlue1247: ItemKeyBlue {
		keyid = 6247;
	};
	class ItemKeyBlue1248: ItemKeyBlue {
		keyid = 6248;
	};
	class ItemKeyBlue1249: ItemKeyBlue {
		keyid = 6249;
	};
	class ItemKeyBlue1250: ItemKeyBlue {
		keyid = 6250;
	};
	class ItemKeyBlue1251: ItemKeyBlue {
		keyid = 6251;
	};
	class ItemKeyBlue1252: ItemKeyBlue {
		keyid = 6252;
	};
	class ItemKeyBlue1253: ItemKeyBlue {
		keyid = 6253;
	};
	class ItemKeyBlue1254: ItemKeyBlue {
		keyid = 6254;
	};
	class ItemKeyBlue1255: ItemKeyBlue {
		keyid = 6255;
	};
	class ItemKeyBlue1256: ItemKeyBlue {
		keyid = 6256;
	};
	class ItemKeyBlue1257: ItemKeyBlue {
		keyid = 6257;
	};
	class ItemKeyBlue1258: ItemKeyBlue {
		keyid = 6258;
	};
	class ItemKeyBlue1259: ItemKeyBlue {
		keyid = 6259;
	};
	class ItemKeyBlue1260: ItemKeyBlue {
		keyid = 6260;
	};
	class ItemKeyBlue1261: ItemKeyBlue {
		keyid = 6261;
	};
	class ItemKeyBlue1262: ItemKeyBlue {
		keyid = 6262;
	};
	class ItemKeyBlue1263: ItemKeyBlue {
		keyid = 6263;
	};
	class ItemKeyBlue1264: ItemKeyBlue {
		keyid = 6264;
	};
	class ItemKeyBlue1265: ItemKeyBlue {
		keyid = 6265;
	};
	class ItemKeyBlue1266: ItemKeyBlue {
		keyid = 6266;
	};
	class ItemKeyBlue1267: ItemKeyBlue {
		keyid = 6267;
	};
	class ItemKeyBlue1268: ItemKeyBlue {
		keyid = 6268;
	};
	class ItemKeyBlue1269: ItemKeyBlue {
		keyid = 6269;
	};
	class ItemKeyBlue1270: ItemKeyBlue {
		keyid = 6270;
	};
	class ItemKeyBlue1271: ItemKeyBlue {
		keyid = 6271;
	};
	class ItemKeyBlue1272: ItemKeyBlue {
		keyid = 6272;
	};
	class ItemKeyBlue1273: ItemKeyBlue {
		keyid = 6273;
	};
	class ItemKeyBlue1274: ItemKeyBlue {
		keyid = 6274;
	};
	class ItemKeyBlue1275: ItemKeyBlue {
		keyid = 6275;
	};
	class ItemKeyBlue1276: ItemKeyBlue {
		keyid = 6276;
	};
	class ItemKeyBlue1277: ItemKeyBlue {
		keyid = 6277;
	};
	class ItemKeyBlue1278: ItemKeyBlue {
		keyid = 6278;
	};
	class ItemKeyBlue1279: ItemKeyBlue {
		keyid = 6279;
	};
	class ItemKeyBlue1280: ItemKeyBlue {
		keyid = 6280;
	};
	class ItemKeyBlue1281: ItemKeyBlue {
		keyid = 6281;
	};
	class ItemKeyBlue1282: ItemKeyBlue {
		keyid = 6282;
	};
	class ItemKeyBlue1283: ItemKeyBlue {
		keyid = 6283;
	};
	class ItemKeyBlue1284: ItemKeyBlue {
		keyid = 6284;
	};
	class ItemKeyBlue1285: ItemKeyBlue {
		keyid = 6285;
	};
	class ItemKeyBlue1286: ItemKeyBlue {
		keyid = 6286;
	};
	class ItemKeyBlue1287: ItemKeyBlue {
		keyid = 6287;
	};
	class ItemKeyBlue1288: ItemKeyBlue {
		keyid = 6288;
	};
	class ItemKeyBlue1289: ItemKeyBlue {
		keyid = 6289;
	};
	class ItemKeyBlue1290: ItemKeyBlue {
		keyid = 6290;
	};
	class ItemKeyBlue1291: ItemKeyBlue {
		keyid = 6291;
	};
	class ItemKeyBlue1292: ItemKeyBlue {
		keyid = 6292;
	};
	class ItemKeyBlue1293: ItemKeyBlue {
		keyid = 6293;
	};
	class ItemKeyBlue1294: ItemKeyBlue {
		keyid = 6294;
	};
	class ItemKeyBlue1295: ItemKeyBlue {
		keyid = 6295;
	};
	class ItemKeyBlue1296: ItemKeyBlue {
		keyid = 6296;
	};
	class ItemKeyBlue1297: ItemKeyBlue {
		keyid = 6297;
	};
	class ItemKeyBlue1298: ItemKeyBlue {
		keyid = 6298;
	};
	class ItemKeyBlue1299: ItemKeyBlue {
		keyid = 6299;
	};
	class ItemKeyBlue1300: ItemKeyBlue {
		keyid = 6300;
	};
	class ItemKeyBlue1301: ItemKeyBlue {
		keyid = 6301;
	};
	class ItemKeyBlue1302: ItemKeyBlue {
		keyid = 6302;
	};
	class ItemKeyBlue1303: ItemKeyBlue {
		keyid = 6303;
	};
	class ItemKeyBlue1304: ItemKeyBlue {
		keyid = 6304;
	};
	class ItemKeyBlue1305: ItemKeyBlue {
		keyid = 6305;
	};
	class ItemKeyBlue1306: ItemKeyBlue {
		keyid = 6306;
	};
	class ItemKeyBlue1307: ItemKeyBlue {
		keyid = 6307;
	};
	class ItemKeyBlue1308: ItemKeyBlue {
		keyid = 6308;
	};
	class ItemKeyBlue1309: ItemKeyBlue {
		keyid = 6309;
	};
	class ItemKeyBlue1310: ItemKeyBlue {
		keyid = 6310;
	};
	class ItemKeyBlue1311: ItemKeyBlue {
		keyid = 6311;
	};
	class ItemKeyBlue1312: ItemKeyBlue {
		keyid = 6312;
	};
	class ItemKeyBlue1313: ItemKeyBlue {
		keyid = 6313;
	};
	class ItemKeyBlue1314: ItemKeyBlue {
		keyid = 6314;
	};
	class ItemKeyBlue1315: ItemKeyBlue {
		keyid = 6315;
	};
	class ItemKeyBlue1316: ItemKeyBlue {
		keyid = 6316;
	};
	class ItemKeyBlue1317: ItemKeyBlue {
		keyid = 6317;
	};
	class ItemKeyBlue1318: ItemKeyBlue {
		keyid = 6318;
	};
	class ItemKeyBlue1319: ItemKeyBlue {
		keyid = 6319;
	};
	class ItemKeyBlue1320: ItemKeyBlue {
		keyid = 6320;
	};
	class ItemKeyBlue1321: ItemKeyBlue {
		keyid = 6321;
	};
	class ItemKeyBlue1322: ItemKeyBlue {
		keyid = 6322;
	};
	class ItemKeyBlue1323: ItemKeyBlue {
		keyid = 6323;
	};
	class ItemKeyBlue1324: ItemKeyBlue {
		keyid = 6324;
	};
	class ItemKeyBlue1325: ItemKeyBlue {
		keyid = 6325;
	};
	class ItemKeyBlue1326: ItemKeyBlue {
		keyid = 6326;
	};
	class ItemKeyBlue1327: ItemKeyBlue {
		keyid = 6327;
	};
	class ItemKeyBlue1328: ItemKeyBlue {
		keyid = 6328;
	};
	class ItemKeyBlue1329: ItemKeyBlue {
		keyid = 6329;
	};
	class ItemKeyBlue1330: ItemKeyBlue {
		keyid = 6330;
	};
	class ItemKeyBlue1331: ItemKeyBlue {
		keyid = 6331;
	};
	class ItemKeyBlue1332: ItemKeyBlue {
		keyid = 6332;
	};
	class ItemKeyBlue1333: ItemKeyBlue {
		keyid = 6333;
	};
	class ItemKeyBlue1334: ItemKeyBlue {
		keyid = 6334;
	};
	class ItemKeyBlue1335: ItemKeyBlue {
		keyid = 6335;
	};
	class ItemKeyBlue1336: ItemKeyBlue {
		keyid = 6336;
	};
	class ItemKeyBlue1337: ItemKeyBlue {
		keyid = 6337;
	};
	class ItemKeyBlue1338: ItemKeyBlue {
		keyid = 6338;
	};
	class ItemKeyBlue1339: ItemKeyBlue {
		keyid = 6339;
	};
	class ItemKeyBlue1340: ItemKeyBlue {
		keyid = 6340;
	};
	class ItemKeyBlue1341: ItemKeyBlue {
		keyid = 6341;
	};
	class ItemKeyBlue1342: ItemKeyBlue {
		keyid = 6342;
	};
	class ItemKeyBlue1343: ItemKeyBlue {
		keyid = 6343;
	};
	class ItemKeyBlue1344: ItemKeyBlue {
		keyid = 6344;
	};
	class ItemKeyBlue1345: ItemKeyBlue {
		keyid = 6345;
	};
	class ItemKeyBlue1346: ItemKeyBlue {
		keyid = 6346;
	};
	class ItemKeyBlue1347: ItemKeyBlue {
		keyid = 6347;
	};
	class ItemKeyBlue1348: ItemKeyBlue {
		keyid = 6348;
	};
	class ItemKeyBlue1349: ItemKeyBlue {
		keyid = 6349;
	};
	class ItemKeyBlue1350: ItemKeyBlue {
		keyid = 6350;
	};
	class ItemKeyBlue1351: ItemKeyBlue {
		keyid = 6351;
	};
	class ItemKeyBlue1352: ItemKeyBlue {
		keyid = 6352;
	};
	class ItemKeyBlue1353: ItemKeyBlue {
		keyid = 6353;
	};
	class ItemKeyBlue1354: ItemKeyBlue {
		keyid = 6354;
	};
	class ItemKeyBlue1355: ItemKeyBlue {
		keyid = 6355;
	};
	class ItemKeyBlue1356: ItemKeyBlue {
		keyid = 6356;
	};
	class ItemKeyBlue1357: ItemKeyBlue {
		keyid = 6357;
	};
	class ItemKeyBlue1358: ItemKeyBlue {
		keyid = 6358;
	};
	class ItemKeyBlue1359: ItemKeyBlue {
		keyid = 6359;
	};
	class ItemKeyBlue1360: ItemKeyBlue {
		keyid = 6360;
	};
	class ItemKeyBlue1361: ItemKeyBlue {
		keyid = 6361;
	};
	class ItemKeyBlue1362: ItemKeyBlue {
		keyid = 6362;
	};
	class ItemKeyBlue1363: ItemKeyBlue {
		keyid = 6363;
	};
	class ItemKeyBlue1364: ItemKeyBlue {
		keyid = 6364;
	};
	class ItemKeyBlue1365: ItemKeyBlue {
		keyid = 6365;
	};
	class ItemKeyBlue1366: ItemKeyBlue {
		keyid = 6366;
	};
	class ItemKeyBlue1367: ItemKeyBlue {
		keyid = 6367;
	};
	class ItemKeyBlue1368: ItemKeyBlue {
		keyid = 6368;
	};
	class ItemKeyBlue1369: ItemKeyBlue {
		keyid = 6369;
	};
	class ItemKeyBlue1370: ItemKeyBlue {
		keyid = 6370;
	};
	class ItemKeyBlue1371: ItemKeyBlue {
		keyid = 6371;
	};
	class ItemKeyBlue1372: ItemKeyBlue {
		keyid = 6372;
	};
	class ItemKeyBlue1373: ItemKeyBlue {
		keyid = 6373;
	};
	class ItemKeyBlue1374: ItemKeyBlue {
		keyid = 6374;
	};
	class ItemKeyBlue1375: ItemKeyBlue {
		keyid = 6375;
	};
	class ItemKeyBlue1376: ItemKeyBlue {
		keyid = 6376;
	};
	class ItemKeyBlue1377: ItemKeyBlue {
		keyid = 6377;
	};
	class ItemKeyBlue1378: ItemKeyBlue {
		keyid = 6378;
	};
	class ItemKeyBlue1379: ItemKeyBlue {
		keyid = 6379;
	};
	class ItemKeyBlue1380: ItemKeyBlue {
		keyid = 6380;
	};
	class ItemKeyBlue1381: ItemKeyBlue {
		keyid = 6381;
	};
	class ItemKeyBlue1382: ItemKeyBlue {
		keyid = 6382;
	};
	class ItemKeyBlue1383: ItemKeyBlue {
		keyid = 6383;
	};
	class ItemKeyBlue1384: ItemKeyBlue {
		keyid = 6384;
	};
	class ItemKeyBlue1385: ItemKeyBlue {
		keyid = 6385;
	};
	class ItemKeyBlue1386: ItemKeyBlue {
		keyid = 6386;
	};
	class ItemKeyBlue1387: ItemKeyBlue {
		keyid = 6387;
	};
	class ItemKeyBlue1388: ItemKeyBlue {
		keyid = 6388;
	};
	class ItemKeyBlue1389: ItemKeyBlue {
		keyid = 6389;
	};
	class ItemKeyBlue1390: ItemKeyBlue {
		keyid = 6390;
	};
	class ItemKeyBlue1391: ItemKeyBlue {
		keyid = 6391;
	};
	class ItemKeyBlue1392: ItemKeyBlue {
		keyid = 6392;
	};
	class ItemKeyBlue1393: ItemKeyBlue {
		keyid = 6393;
	};
	class ItemKeyBlue1394: ItemKeyBlue {
		keyid = 6394;
	};
	class ItemKeyBlue1395: ItemKeyBlue {
		keyid = 6395;
	};
	class ItemKeyBlue1396: ItemKeyBlue {
		keyid = 6396;
	};
	class ItemKeyBlue1397: ItemKeyBlue {
		keyid = 6397;
	};
	class ItemKeyBlue1398: ItemKeyBlue {
		keyid = 6398;
	};
	class ItemKeyBlue1399: ItemKeyBlue {
		keyid = 6399;
	};
	class ItemKeyBlue1400: ItemKeyBlue {
		keyid = 6400;
	};
	class ItemKeyBlue1401: ItemKeyBlue {
		keyid = 6401;
	};
	class ItemKeyBlue1402: ItemKeyBlue {
		keyid = 6402;
	};
	class ItemKeyBlue1403: ItemKeyBlue {
		keyid = 6403;
	};
	class ItemKeyBlue1404: ItemKeyBlue {
		keyid = 6404;
	};
	class ItemKeyBlue1405: ItemKeyBlue {
		keyid = 6405;
	};
	class ItemKeyBlue1406: ItemKeyBlue {
		keyid = 6406;
	};
	class ItemKeyBlue1407: ItemKeyBlue {
		keyid = 6407;
	};
	class ItemKeyBlue1408: ItemKeyBlue {
		keyid = 6408;
	};
	class ItemKeyBlue1409: ItemKeyBlue {
		keyid = 6409;
	};
	class ItemKeyBlue1410: ItemKeyBlue {
		keyid = 6410;
	};
	class ItemKeyBlue1411: ItemKeyBlue {
		keyid = 6411;
	};
	class ItemKeyBlue1412: ItemKeyBlue {
		keyid = 6412;
	};
	class ItemKeyBlue1413: ItemKeyBlue {
		keyid = 6413;
	};
	class ItemKeyBlue1414: ItemKeyBlue {
		keyid = 6414;
	};
	class ItemKeyBlue1415: ItemKeyBlue {
		keyid = 6415;
	};
	class ItemKeyBlue1416: ItemKeyBlue {
		keyid = 6416;
	};
	class ItemKeyBlue1417: ItemKeyBlue {
		keyid = 6417;
	};
	class ItemKeyBlue1418: ItemKeyBlue {
		keyid = 6418;
	};
	class ItemKeyBlue1419: ItemKeyBlue {
		keyid = 6419;
	};
	class ItemKeyBlue1420: ItemKeyBlue {
		keyid = 6420;
	};
	class ItemKeyBlue1421: ItemKeyBlue {
		keyid = 6421;
	};
	class ItemKeyBlue1422: ItemKeyBlue {
		keyid = 6422;
	};
	class ItemKeyBlue1423: ItemKeyBlue {
		keyid = 6423;
	};
	class ItemKeyBlue1424: ItemKeyBlue {
		keyid = 6424;
	};
	class ItemKeyBlue1425: ItemKeyBlue {
		keyid = 6425;
	};
	class ItemKeyBlue1426: ItemKeyBlue {
		keyid = 6426;
	};
	class ItemKeyBlue1427: ItemKeyBlue {
		keyid = 6427;
	};
	class ItemKeyBlue1428: ItemKeyBlue {
		keyid = 6428;
	};
	class ItemKeyBlue1429: ItemKeyBlue {
		keyid = 6429;
	};
	class ItemKeyBlue1430: ItemKeyBlue {
		keyid = 6430;
	};
	class ItemKeyBlue1431: ItemKeyBlue {
		keyid = 6431;
	};
	class ItemKeyBlue1432: ItemKeyBlue {
		keyid = 6432;
	};
	class ItemKeyBlue1433: ItemKeyBlue {
		keyid = 6433;
	};
	class ItemKeyBlue1434: ItemKeyBlue {
		keyid = 6434;
	};
	class ItemKeyBlue1435: ItemKeyBlue {
		keyid = 6435;
	};
	class ItemKeyBlue1436: ItemKeyBlue {
		keyid = 6436;
	};
	class ItemKeyBlue1437: ItemKeyBlue {
		keyid = 6437;
	};
	class ItemKeyBlue1438: ItemKeyBlue {
		keyid = 6438;
	};
	class ItemKeyBlue1439: ItemKeyBlue {
		keyid = 6439;
	};
	class ItemKeyBlue1440: ItemKeyBlue {
		keyid = 6440;
	};
	class ItemKeyBlue1441: ItemKeyBlue {
		keyid = 6441;
	};
	class ItemKeyBlue1442: ItemKeyBlue {
		keyid = 6442;
	};
	class ItemKeyBlue1443: ItemKeyBlue {
		keyid = 6443;
	};
	class ItemKeyBlue1444: ItemKeyBlue {
		keyid = 6444;
	};
	class ItemKeyBlue1445: ItemKeyBlue {
		keyid = 6445;
	};
	class ItemKeyBlue1446: ItemKeyBlue {
		keyid = 6446;
	};
	class ItemKeyBlue1447: ItemKeyBlue {
		keyid = 6447;
	};
	class ItemKeyBlue1448: ItemKeyBlue {
		keyid = 6448;
	};
	class ItemKeyBlue1449: ItemKeyBlue {
		keyid = 6449;
	};
	class ItemKeyBlue1450: ItemKeyBlue {
		keyid = 6450;
	};
	class ItemKeyBlue1451: ItemKeyBlue {
		keyid = 6451;
	};
	class ItemKeyBlue1452: ItemKeyBlue {
		keyid = 6452;
	};
	class ItemKeyBlue1453: ItemKeyBlue {
		keyid = 6453;
	};
	class ItemKeyBlue1454: ItemKeyBlue {
		keyid = 6454;
	};
	class ItemKeyBlue1455: ItemKeyBlue {
		keyid = 6455;
	};
	class ItemKeyBlue1456: ItemKeyBlue {
		keyid = 6456;
	};
	class ItemKeyBlue1457: ItemKeyBlue {
		keyid = 6457;
	};
	class ItemKeyBlue1458: ItemKeyBlue {
		keyid = 6458;
	};
	class ItemKeyBlue1459: ItemKeyBlue {
		keyid = 6459;
	};
	class ItemKeyBlue1460: ItemKeyBlue {
		keyid = 6460;
	};
	class ItemKeyBlue1461: ItemKeyBlue {
		keyid = 6461;
	};
	class ItemKeyBlue1462: ItemKeyBlue {
		keyid = 6462;
	};
	class ItemKeyBlue1463: ItemKeyBlue {
		keyid = 6463;
	};
	class ItemKeyBlue1464: ItemKeyBlue {
		keyid = 6464;
	};
	class ItemKeyBlue1465: ItemKeyBlue {
		keyid = 6465;
	};
	class ItemKeyBlue1466: ItemKeyBlue {
		keyid = 6466;
	};
	class ItemKeyBlue1467: ItemKeyBlue {
		keyid = 6467;
	};
	class ItemKeyBlue1468: ItemKeyBlue {
		keyid = 6468;
	};
	class ItemKeyBlue1469: ItemKeyBlue {
		keyid = 6469;
	};
	class ItemKeyBlue1470: ItemKeyBlue {
		keyid = 6470;
	};
	class ItemKeyBlue1471: ItemKeyBlue {
		keyid = 6471;
	};
	class ItemKeyBlue1472: ItemKeyBlue {
		keyid = 6472;
	};
	class ItemKeyBlue1473: ItemKeyBlue {
		keyid = 6473;
	};
	class ItemKeyBlue1474: ItemKeyBlue {
		keyid = 6474;
	};
	class ItemKeyBlue1475: ItemKeyBlue {
		keyid = 6475;
	};
	class ItemKeyBlue1476: ItemKeyBlue {
		keyid = 6476;
	};
	class ItemKeyBlue1477: ItemKeyBlue {
		keyid = 6477;
	};
	class ItemKeyBlue1478: ItemKeyBlue {
		keyid = 6478;
	};
	class ItemKeyBlue1479: ItemKeyBlue {
		keyid = 6479;
	};
	class ItemKeyBlue1480: ItemKeyBlue {
		keyid = 6480;
	};
	class ItemKeyBlue1481: ItemKeyBlue {
		keyid = 6481;
	};
	class ItemKeyBlue1482: ItemKeyBlue {
		keyid = 6482;
	};
	class ItemKeyBlue1483: ItemKeyBlue {
		keyid = 6483;
	};
	class ItemKeyBlue1484: ItemKeyBlue {
		keyid = 6484;
	};
	class ItemKeyBlue1485: ItemKeyBlue {
		keyid = 6485;
	};
	class ItemKeyBlue1486: ItemKeyBlue {
		keyid = 6486;
	};
	class ItemKeyBlue1487: ItemKeyBlue {
		keyid = 6487;
	};
	class ItemKeyBlue1488: ItemKeyBlue {
		keyid = 6488;
	};
	class ItemKeyBlue1489: ItemKeyBlue {
		keyid = 6489;
	};
	class ItemKeyBlue1490: ItemKeyBlue {
		keyid = 6490;
	};
	class ItemKeyBlue1491: ItemKeyBlue {
		keyid = 6491;
	};
	class ItemKeyBlue1492: ItemKeyBlue {
		keyid = 6492;
	};
	class ItemKeyBlue1493: ItemKeyBlue {
		keyid = 6493;
	};
	class ItemKeyBlue1494: ItemKeyBlue {
		keyid = 6494;
	};
	class ItemKeyBlue1495: ItemKeyBlue {
		keyid = 6495;
	};
	class ItemKeyBlue1496: ItemKeyBlue {
		keyid = 6496;
	};
	class ItemKeyBlue1497: ItemKeyBlue {
		keyid = 6497;
	};
	class ItemKeyBlue1498: ItemKeyBlue {
		keyid = 6498;
	};
	class ItemKeyBlue1499: ItemKeyBlue {
		keyid = 6499;
	};
	class ItemKeyBlue1500: ItemKeyBlue {
		keyid = 6500;
	};
	class ItemKeyBlue1501: ItemKeyBlue {
		keyid = 6501;
	};
	class ItemKeyBlue1502: ItemKeyBlue {
		keyid = 6502;
	};
	class ItemKeyBlue1503: ItemKeyBlue {
		keyid = 6503;
	};
	class ItemKeyBlue1504: ItemKeyBlue {
		keyid = 6504;
	};
	class ItemKeyBlue1505: ItemKeyBlue {
		keyid = 6505;
	};
	class ItemKeyBlue1506: ItemKeyBlue {
		keyid = 6506;
	};
	class ItemKeyBlue1507: ItemKeyBlue {
		keyid = 6507;
	};
	class ItemKeyBlue1508: ItemKeyBlue {
		keyid = 6508;
	};
	class ItemKeyBlue1509: ItemKeyBlue {
		keyid = 6509;
	};
	class ItemKeyBlue1510: ItemKeyBlue {
		keyid = 6510;
	};
	class ItemKeyBlue1511: ItemKeyBlue {
		keyid = 6511;
	};
	class ItemKeyBlue1512: ItemKeyBlue {
		keyid = 6512;
	};
	class ItemKeyBlue1513: ItemKeyBlue {
		keyid = 6513;
	};
	class ItemKeyBlue1514: ItemKeyBlue {
		keyid = 6514;
	};
	class ItemKeyBlue1515: ItemKeyBlue {
		keyid = 6515;
	};
	class ItemKeyBlue1516: ItemKeyBlue {
		keyid = 6516;
	};
	class ItemKeyBlue1517: ItemKeyBlue {
		keyid = 6517;
	};
	class ItemKeyBlue1518: ItemKeyBlue {
		keyid = 6518;
	};
	class ItemKeyBlue1519: ItemKeyBlue {
		keyid = 6519;
	};
	class ItemKeyBlue1520: ItemKeyBlue {
		keyid = 6520;
	};
	class ItemKeyBlue1521: ItemKeyBlue {
		keyid = 6521;
	};
	class ItemKeyBlue1522: ItemKeyBlue {
		keyid = 6522;
	};
	class ItemKeyBlue1523: ItemKeyBlue {
		keyid = 6523;
	};
	class ItemKeyBlue1524: ItemKeyBlue {
		keyid = 6524;
	};
	class ItemKeyBlue1525: ItemKeyBlue {
		keyid = 6525;
	};
	class ItemKeyBlue1526: ItemKeyBlue {
		keyid = 6526;
	};
	class ItemKeyBlue1527: ItemKeyBlue {
		keyid = 6527;
	};
	class ItemKeyBlue1528: ItemKeyBlue {
		keyid = 6528;
	};
	class ItemKeyBlue1529: ItemKeyBlue {
		keyid = 6529;
	};
	class ItemKeyBlue1530: ItemKeyBlue {
		keyid = 6530;
	};
	class ItemKeyBlue1531: ItemKeyBlue {
		keyid = 6531;
	};
	class ItemKeyBlue1532: ItemKeyBlue {
		keyid = 6532;
	};
	class ItemKeyBlue1533: ItemKeyBlue {
		keyid = 6533;
	};
	class ItemKeyBlue1534: ItemKeyBlue {
		keyid = 6534;
	};
	class ItemKeyBlue1535: ItemKeyBlue {
		keyid = 6535;
	};
	class ItemKeyBlue1536: ItemKeyBlue {
		keyid = 6536;
	};
	class ItemKeyBlue1537: ItemKeyBlue {
		keyid = 6537;
	};
	class ItemKeyBlue1538: ItemKeyBlue {
		keyid = 6538;
	};
	class ItemKeyBlue1539: ItemKeyBlue {
		keyid = 6539;
	};
	class ItemKeyBlue1540: ItemKeyBlue {
		keyid = 6540;
	};
	class ItemKeyBlue1541: ItemKeyBlue {
		keyid = 6541;
	};
	class ItemKeyBlue1542: ItemKeyBlue {
		keyid = 6542;
	};
	class ItemKeyBlue1543: ItemKeyBlue {
		keyid = 6543;
	};
	class ItemKeyBlue1544: ItemKeyBlue {
		keyid = 6544;
	};
	class ItemKeyBlue1545: ItemKeyBlue {
		keyid = 6545;
	};
	class ItemKeyBlue1546: ItemKeyBlue {
		keyid = 6546;
	};
	class ItemKeyBlue1547: ItemKeyBlue {
		keyid = 6547;
	};
	class ItemKeyBlue1548: ItemKeyBlue {
		keyid = 6548;
	};
	class ItemKeyBlue1549: ItemKeyBlue {
		keyid = 6549;
	};
	class ItemKeyBlue1550: ItemKeyBlue {
		keyid = 6550;
	};
	class ItemKeyBlue1551: ItemKeyBlue {
		keyid = 6551;
	};
	class ItemKeyBlue1552: ItemKeyBlue {
		keyid = 6552;
	};
	class ItemKeyBlue1553: ItemKeyBlue {
		keyid = 6553;
	};
	class ItemKeyBlue1554: ItemKeyBlue {
		keyid = 6554;
	};
	class ItemKeyBlue1555: ItemKeyBlue {
		keyid = 6555;
	};
	class ItemKeyBlue1556: ItemKeyBlue {
		keyid = 6556;
	};
	class ItemKeyBlue1557: ItemKeyBlue {
		keyid = 6557;
	};
	class ItemKeyBlue1558: ItemKeyBlue {
		keyid = 6558;
	};
	class ItemKeyBlue1559: ItemKeyBlue {
		keyid = 6559;
	};
	class ItemKeyBlue1560: ItemKeyBlue {
		keyid = 6560;
	};
	class ItemKeyBlue1561: ItemKeyBlue {
		keyid = 6561;
	};
	class ItemKeyBlue1562: ItemKeyBlue {
		keyid = 6562;
	};
	class ItemKeyBlue1563: ItemKeyBlue {
		keyid = 6563;
	};
	class ItemKeyBlue1564: ItemKeyBlue {
		keyid = 6564;
	};
	class ItemKeyBlue1565: ItemKeyBlue {
		keyid = 6565;
	};
	class ItemKeyBlue1566: ItemKeyBlue {
		keyid = 6566;
	};
	class ItemKeyBlue1567: ItemKeyBlue {
		keyid = 6567;
	};
	class ItemKeyBlue1568: ItemKeyBlue {
		keyid = 6568;
	};
	class ItemKeyBlue1569: ItemKeyBlue {
		keyid = 6569;
	};
	class ItemKeyBlue1570: ItemKeyBlue {
		keyid = 6570;
	};
	class ItemKeyBlue1571: ItemKeyBlue {
		keyid = 6571;
	};
	class ItemKeyBlue1572: ItemKeyBlue {
		keyid = 6572;
	};
	class ItemKeyBlue1573: ItemKeyBlue {
		keyid = 6573;
	};
	class ItemKeyBlue1574: ItemKeyBlue {
		keyid = 6574;
	};
	class ItemKeyBlue1575: ItemKeyBlue {
		keyid = 6575;
	};
	class ItemKeyBlue1576: ItemKeyBlue {
		keyid = 6576;
	};
	class ItemKeyBlue1577: ItemKeyBlue {
		keyid = 6577;
	};
	class ItemKeyBlue1578: ItemKeyBlue {
		keyid = 6578;
	};
	class ItemKeyBlue1579: ItemKeyBlue {
		keyid = 6579;
	};
	class ItemKeyBlue1580: ItemKeyBlue {
		keyid = 6580;
	};
	class ItemKeyBlue1581: ItemKeyBlue {
		keyid = 6581;
	};
	class ItemKeyBlue1582: ItemKeyBlue {
		keyid = 6582;
	};
	class ItemKeyBlue1583: ItemKeyBlue {
		keyid = 6583;
	};
	class ItemKeyBlue1584: ItemKeyBlue {
		keyid = 6584;
	};
	class ItemKeyBlue1585: ItemKeyBlue {
		keyid = 6585;
	};
	class ItemKeyBlue1586: ItemKeyBlue {
		keyid = 6586;
	};
	class ItemKeyBlue1587: ItemKeyBlue {
		keyid = 6587;
	};
	class ItemKeyBlue1588: ItemKeyBlue {
		keyid = 6588;
	};
	class ItemKeyBlue1589: ItemKeyBlue {
		keyid = 6589;
	};
	class ItemKeyBlue1590: ItemKeyBlue {
		keyid = 6590;
	};
	class ItemKeyBlue1591: ItemKeyBlue {
		keyid = 6591;
	};
	class ItemKeyBlue1592: ItemKeyBlue {
		keyid = 6592;
	};
	class ItemKeyBlue1593: ItemKeyBlue {
		keyid = 6593;
	};
	class ItemKeyBlue1594: ItemKeyBlue {
		keyid = 6594;
	};
	class ItemKeyBlue1595: ItemKeyBlue {
		keyid = 6595;
	};
	class ItemKeyBlue1596: ItemKeyBlue {
		keyid = 6596;
	};
	class ItemKeyBlue1597: ItemKeyBlue {
		keyid = 6597;
	};
	class ItemKeyBlue1598: ItemKeyBlue {
		keyid = 6598;
	};
	class ItemKeyBlue1599: ItemKeyBlue {
		keyid = 6599;
	};
	class ItemKeyBlue1600: ItemKeyBlue {
		keyid = 6600;
	};
	class ItemKeyBlue1601: ItemKeyBlue {
		keyid = 6601;
	};
	class ItemKeyBlue1602: ItemKeyBlue {
		keyid = 6602;
	};
	class ItemKeyBlue1603: ItemKeyBlue {
		keyid = 6603;
	};
	class ItemKeyBlue1604: ItemKeyBlue {
		keyid = 6604;
	};
	class ItemKeyBlue1605: ItemKeyBlue {
		keyid = 6605;
	};
	class ItemKeyBlue1606: ItemKeyBlue {
		keyid = 6606;
	};
	class ItemKeyBlue1607: ItemKeyBlue {
		keyid = 6607;
	};
	class ItemKeyBlue1608: ItemKeyBlue {
		keyid = 6608;
	};
	class ItemKeyBlue1609: ItemKeyBlue {
		keyid = 6609;
	};
	class ItemKeyBlue1610: ItemKeyBlue {
		keyid = 6610;
	};
	class ItemKeyBlue1611: ItemKeyBlue {
		keyid = 6611;
	};
	class ItemKeyBlue1612: ItemKeyBlue {
		keyid = 6612;
	};
	class ItemKeyBlue1613: ItemKeyBlue {
		keyid = 6613;
	};
	class ItemKeyBlue1614: ItemKeyBlue {
		keyid = 6614;
	};
	class ItemKeyBlue1615: ItemKeyBlue {
		keyid = 6615;
	};
	class ItemKeyBlue1616: ItemKeyBlue {
		keyid = 6616;
	};
	class ItemKeyBlue1617: ItemKeyBlue {
		keyid = 6617;
	};
	class ItemKeyBlue1618: ItemKeyBlue {
		keyid = 6618;
	};
	class ItemKeyBlue1619: ItemKeyBlue {
		keyid = 6619;
	};
	class ItemKeyBlue1620: ItemKeyBlue {
		keyid = 6620;
	};
	class ItemKeyBlue1621: ItemKeyBlue {
		keyid = 6621;
	};
	class ItemKeyBlue1622: ItemKeyBlue {
		keyid = 6622;
	};
	class ItemKeyBlue1623: ItemKeyBlue {
		keyid = 6623;
	};
	class ItemKeyBlue1624: ItemKeyBlue {
		keyid = 6624;
	};
	class ItemKeyBlue1625: ItemKeyBlue {
		keyid = 6625;
	};
	class ItemKeyBlue1626: ItemKeyBlue {
		keyid = 6626;
	};
	class ItemKeyBlue1627: ItemKeyBlue {
		keyid = 6627;
	};
	class ItemKeyBlue1628: ItemKeyBlue {
		keyid = 6628;
	};
	class ItemKeyBlue1629: ItemKeyBlue {
		keyid = 6629;
	};
	class ItemKeyBlue1630: ItemKeyBlue {
		keyid = 6630;
	};
	class ItemKeyBlue1631: ItemKeyBlue {
		keyid = 6631;
	};
	class ItemKeyBlue1632: ItemKeyBlue {
		keyid = 6632;
	};
	class ItemKeyBlue1633: ItemKeyBlue {
		keyid = 6633;
	};
	class ItemKeyBlue1634: ItemKeyBlue {
		keyid = 6634;
	};
	class ItemKeyBlue1635: ItemKeyBlue {
		keyid = 6635;
	};
	class ItemKeyBlue1636: ItemKeyBlue {
		keyid = 6636;
	};
	class ItemKeyBlue1637: ItemKeyBlue {
		keyid = 6637;
	};
	class ItemKeyBlue1638: ItemKeyBlue {
		keyid = 6638;
	};
	class ItemKeyBlue1639: ItemKeyBlue {
		keyid = 6639;
	};
	class ItemKeyBlue1640: ItemKeyBlue {
		keyid = 6640;
	};
	class ItemKeyBlue1641: ItemKeyBlue {
		keyid = 6641;
	};
	class ItemKeyBlue1642: ItemKeyBlue {
		keyid = 6642;
	};
	class ItemKeyBlue1643: ItemKeyBlue {
		keyid = 6643;
	};
	class ItemKeyBlue1644: ItemKeyBlue {
		keyid = 6644;
	};
	class ItemKeyBlue1645: ItemKeyBlue {
		keyid = 6645;
	};
	class ItemKeyBlue1646: ItemKeyBlue {
		keyid = 6646;
	};
	class ItemKeyBlue1647: ItemKeyBlue {
		keyid = 6647;
	};
	class ItemKeyBlue1648: ItemKeyBlue {
		keyid = 6648;
	};
	class ItemKeyBlue1649: ItemKeyBlue {
		keyid = 6649;
	};
	class ItemKeyBlue1650: ItemKeyBlue {
		keyid = 6650;
	};
	class ItemKeyBlue1651: ItemKeyBlue {
		keyid = 6651;
	};
	class ItemKeyBlue1652: ItemKeyBlue {
		keyid = 6652;
	};
	class ItemKeyBlue1653: ItemKeyBlue {
		keyid = 6653;
	};
	class ItemKeyBlue1654: ItemKeyBlue {
		keyid = 6654;
	};
	class ItemKeyBlue1655: ItemKeyBlue {
		keyid = 6655;
	};
	class ItemKeyBlue1656: ItemKeyBlue {
		keyid = 6656;
	};
	class ItemKeyBlue1657: ItemKeyBlue {
		keyid = 6657;
	};
	class ItemKeyBlue1658: ItemKeyBlue {
		keyid = 6658;
	};
	class ItemKeyBlue1659: ItemKeyBlue {
		keyid = 6659;
	};
	class ItemKeyBlue1660: ItemKeyBlue {
		keyid = 6660;
	};
	class ItemKeyBlue1661: ItemKeyBlue {
		keyid = 6661;
	};
	class ItemKeyBlue1662: ItemKeyBlue {
		keyid = 6662;
	};
	class ItemKeyBlue1663: ItemKeyBlue {
		keyid = 6663;
	};
	class ItemKeyBlue1664: ItemKeyBlue {
		keyid = 6664;
	};
	class ItemKeyBlue1665: ItemKeyBlue {
		keyid = 6665;
	};
	class ItemKeyBlue1666: ItemKeyBlue {
		keyid = 6666;
	};
	class ItemKeyBlue1667: ItemKeyBlue {
		keyid = 6667;
	};
	class ItemKeyBlue1668: ItemKeyBlue {
		keyid = 6668;
	};
	class ItemKeyBlue1669: ItemKeyBlue {
		keyid = 6669;
	};
	class ItemKeyBlue1670: ItemKeyBlue {
		keyid = 6670;
	};
	class ItemKeyBlue1671: ItemKeyBlue {
		keyid = 6671;
	};
	class ItemKeyBlue1672: ItemKeyBlue {
		keyid = 6672;
	};
	class ItemKeyBlue1673: ItemKeyBlue {
		keyid = 6673;
	};
	class ItemKeyBlue1674: ItemKeyBlue {
		keyid = 6674;
	};
	class ItemKeyBlue1675: ItemKeyBlue {
		keyid = 6675;
	};
	class ItemKeyBlue1676: ItemKeyBlue {
		keyid = 6676;
	};
	class ItemKeyBlue1677: ItemKeyBlue {
		keyid = 6677;
	};
	class ItemKeyBlue1678: ItemKeyBlue {
		keyid = 6678;
	};
	class ItemKeyBlue1679: ItemKeyBlue {
		keyid = 6679;
	};
	class ItemKeyBlue1680: ItemKeyBlue {
		keyid = 6680;
	};
	class ItemKeyBlue1681: ItemKeyBlue {
		keyid = 6681;
	};
	class ItemKeyBlue1682: ItemKeyBlue {
		keyid = 6682;
	};
	class ItemKeyBlue1683: ItemKeyBlue {
		keyid = 6683;
	};
	class ItemKeyBlue1684: ItemKeyBlue {
		keyid = 6684;
	};
	class ItemKeyBlue1685: ItemKeyBlue {
		keyid = 6685;
	};
	class ItemKeyBlue1686: ItemKeyBlue {
		keyid = 6686;
	};
	class ItemKeyBlue1687: ItemKeyBlue {
		keyid = 6687;
	};
	class ItemKeyBlue1688: ItemKeyBlue {
		keyid = 6688;
	};
	class ItemKeyBlue1689: ItemKeyBlue {
		keyid = 6689;
	};
	class ItemKeyBlue1690: ItemKeyBlue {
		keyid = 6690;
	};
	class ItemKeyBlue1691: ItemKeyBlue {
		keyid = 6691;
	};
	class ItemKeyBlue1692: ItemKeyBlue {
		keyid = 6692;
	};
	class ItemKeyBlue1693: ItemKeyBlue {
		keyid = 6693;
	};
	class ItemKeyBlue1694: ItemKeyBlue {
		keyid = 6694;
	};
	class ItemKeyBlue1695: ItemKeyBlue {
		keyid = 6695;
	};
	class ItemKeyBlue1696: ItemKeyBlue {
		keyid = 6696;
	};
	class ItemKeyBlue1697: ItemKeyBlue {
		keyid = 6697;
	};
	class ItemKeyBlue1698: ItemKeyBlue {
		keyid = 6698;
	};
	class ItemKeyBlue1699: ItemKeyBlue {
		keyid = 6699;
	};
	class ItemKeyBlue1700: ItemKeyBlue {
		keyid = 6700;
	};
	class ItemKeyBlue1701: ItemKeyBlue {
		keyid = 6701;
	};
	class ItemKeyBlue1702: ItemKeyBlue {
		keyid = 6702;
	};
	class ItemKeyBlue1703: ItemKeyBlue {
		keyid = 6703;
	};
	class ItemKeyBlue1704: ItemKeyBlue {
		keyid = 6704;
	};
	class ItemKeyBlue1705: ItemKeyBlue {
		keyid = 6705;
	};
	class ItemKeyBlue1706: ItemKeyBlue {
		keyid = 6706;
	};
	class ItemKeyBlue1707: ItemKeyBlue {
		keyid = 6707;
	};
	class ItemKeyBlue1708: ItemKeyBlue {
		keyid = 6708;
	};
	class ItemKeyBlue1709: ItemKeyBlue {
		keyid = 6709;
	};
	class ItemKeyBlue1710: ItemKeyBlue {
		keyid = 6710;
	};
	class ItemKeyBlue1711: ItemKeyBlue {
		keyid = 6711;
	};
	class ItemKeyBlue1712: ItemKeyBlue {
		keyid = 6712;
	};
	class ItemKeyBlue1713: ItemKeyBlue {
		keyid = 6713;
	};
	class ItemKeyBlue1714: ItemKeyBlue {
		keyid = 6714;
	};
	class ItemKeyBlue1715: ItemKeyBlue {
		keyid = 6715;
	};
	class ItemKeyBlue1716: ItemKeyBlue {
		keyid = 6716;
	};
	class ItemKeyBlue1717: ItemKeyBlue {
		keyid = 6717;
	};
	class ItemKeyBlue1718: ItemKeyBlue {
		keyid = 6718;
	};
	class ItemKeyBlue1719: ItemKeyBlue {
		keyid = 6719;
	};
	class ItemKeyBlue1720: ItemKeyBlue {
		keyid = 6720;
	};
	class ItemKeyBlue1721: ItemKeyBlue {
		keyid = 6721;
	};
	class ItemKeyBlue1722: ItemKeyBlue {
		keyid = 6722;
	};
	class ItemKeyBlue1723: ItemKeyBlue {
		keyid = 6723;
	};
	class ItemKeyBlue1724: ItemKeyBlue {
		keyid = 6724;
	};
	class ItemKeyBlue1725: ItemKeyBlue {
		keyid = 6725;
	};
	class ItemKeyBlue1726: ItemKeyBlue {
		keyid = 6726;
	};
	class ItemKeyBlue1727: ItemKeyBlue {
		keyid = 6727;
	};
	class ItemKeyBlue1728: ItemKeyBlue {
		keyid = 6728;
	};
	class ItemKeyBlue1729: ItemKeyBlue {
		keyid = 6729;
	};
	class ItemKeyBlue1730: ItemKeyBlue {
		keyid = 6730;
	};
	class ItemKeyBlue1731: ItemKeyBlue {
		keyid = 6731;
	};
	class ItemKeyBlue1732: ItemKeyBlue {
		keyid = 6732;
	};
	class ItemKeyBlue1733: ItemKeyBlue {
		keyid = 6733;
	};
	class ItemKeyBlue1734: ItemKeyBlue {
		keyid = 6734;
	};
	class ItemKeyBlue1735: ItemKeyBlue {
		keyid = 6735;
	};
	class ItemKeyBlue1736: ItemKeyBlue {
		keyid = 6736;
	};
	class ItemKeyBlue1737: ItemKeyBlue {
		keyid = 6737;
	};
	class ItemKeyBlue1738: ItemKeyBlue {
		keyid = 6738;
	};
	class ItemKeyBlue1739: ItemKeyBlue {
		keyid = 6739;
	};
	class ItemKeyBlue1740: ItemKeyBlue {
		keyid = 6740;
	};
	class ItemKeyBlue1741: ItemKeyBlue {
		keyid = 6741;
	};
	class ItemKeyBlue1742: ItemKeyBlue {
		keyid = 6742;
	};
	class ItemKeyBlue1743: ItemKeyBlue {
		keyid = 6743;
	};
	class ItemKeyBlue1744: ItemKeyBlue {
		keyid = 6744;
	};
	class ItemKeyBlue1745: ItemKeyBlue {
		keyid = 6745;
	};
	class ItemKeyBlue1746: ItemKeyBlue {
		keyid = 6746;
	};
	class ItemKeyBlue1747: ItemKeyBlue {
		keyid = 6747;
	};
	class ItemKeyBlue1748: ItemKeyBlue {
		keyid = 6748;
	};
	class ItemKeyBlue1749: ItemKeyBlue {
		keyid = 6749;
	};
	class ItemKeyBlue1750: ItemKeyBlue {
		keyid = 6750;
	};
	class ItemKeyBlue1751: ItemKeyBlue {
		keyid = 6751;
	};
	class ItemKeyBlue1752: ItemKeyBlue {
		keyid = 6752;
	};
	class ItemKeyBlue1753: ItemKeyBlue {
		keyid = 6753;
	};
	class ItemKeyBlue1754: ItemKeyBlue {
		keyid = 6754;
	};
	class ItemKeyBlue1755: ItemKeyBlue {
		keyid = 6755;
	};
	class ItemKeyBlue1756: ItemKeyBlue {
		keyid = 6756;
	};
	class ItemKeyBlue1757: ItemKeyBlue {
		keyid = 6757;
	};
	class ItemKeyBlue1758: ItemKeyBlue {
		keyid = 6758;
	};
	class ItemKeyBlue1759: ItemKeyBlue {
		keyid = 6759;
	};
	class ItemKeyBlue1760: ItemKeyBlue {
		keyid = 6760;
	};
	class ItemKeyBlue1761: ItemKeyBlue {
		keyid = 6761;
	};
	class ItemKeyBlue1762: ItemKeyBlue {
		keyid = 6762;
	};
	class ItemKeyBlue1763: ItemKeyBlue {
		keyid = 6763;
	};
	class ItemKeyBlue1764: ItemKeyBlue {
		keyid = 6764;
	};
	class ItemKeyBlue1765: ItemKeyBlue {
		keyid = 6765;
	};
	class ItemKeyBlue1766: ItemKeyBlue {
		keyid = 6766;
	};
	class ItemKeyBlue1767: ItemKeyBlue {
		keyid = 6767;
	};
	class ItemKeyBlue1768: ItemKeyBlue {
		keyid = 6768;
	};
	class ItemKeyBlue1769: ItemKeyBlue {
		keyid = 6769;
	};
	class ItemKeyBlue1770: ItemKeyBlue {
		keyid = 6770;
	};
	class ItemKeyBlue1771: ItemKeyBlue {
		keyid = 6771;
	};
	class ItemKeyBlue1772: ItemKeyBlue {
		keyid = 6772;
	};
	class ItemKeyBlue1773: ItemKeyBlue {
		keyid = 6773;
	};
	class ItemKeyBlue1774: ItemKeyBlue {
		keyid = 6774;
	};
	class ItemKeyBlue1775: ItemKeyBlue {
		keyid = 6775;
	};
	class ItemKeyBlue1776: ItemKeyBlue {
		keyid = 6776;
	};
	class ItemKeyBlue1777: ItemKeyBlue {
		keyid = 6777;
	};
	class ItemKeyBlue1778: ItemKeyBlue {
		keyid = 6778;
	};
	class ItemKeyBlue1779: ItemKeyBlue {
		keyid = 6779;
	};
	class ItemKeyBlue1780: ItemKeyBlue {
		keyid = 6780;
	};
	class ItemKeyBlue1781: ItemKeyBlue {
		keyid = 6781;
	};
	class ItemKeyBlue1782: ItemKeyBlue {
		keyid = 6782;
	};
	class ItemKeyBlue1783: ItemKeyBlue {
		keyid = 6783;
	};
	class ItemKeyBlue1784: ItemKeyBlue {
		keyid = 6784;
	};
	class ItemKeyBlue1785: ItemKeyBlue {
		keyid = 6785;
	};
	class ItemKeyBlue1786: ItemKeyBlue {
		keyid = 6786;
	};
	class ItemKeyBlue1787: ItemKeyBlue {
		keyid = 6787;
	};
	class ItemKeyBlue1788: ItemKeyBlue {
		keyid = 6788;
	};
	class ItemKeyBlue1789: ItemKeyBlue {
		keyid = 6789;
	};
	class ItemKeyBlue1790: ItemKeyBlue {
		keyid = 6790;
	};
	class ItemKeyBlue1791: ItemKeyBlue {
		keyid = 6791;
	};
	class ItemKeyBlue1792: ItemKeyBlue {
		keyid = 6792;
	};
	class ItemKeyBlue1793: ItemKeyBlue {
		keyid = 6793;
	};
	class ItemKeyBlue1794: ItemKeyBlue {
		keyid = 6794;
	};
	class ItemKeyBlue1795: ItemKeyBlue {
		keyid = 6795;
	};
	class ItemKeyBlue1796: ItemKeyBlue {
		keyid = 6796;
	};
	class ItemKeyBlue1797: ItemKeyBlue {
		keyid = 6797;
	};
	class ItemKeyBlue1798: ItemKeyBlue {
		keyid = 6798;
	};
	class ItemKeyBlue1799: ItemKeyBlue {
		keyid = 6799;
	};
	class ItemKeyBlue1800: ItemKeyBlue {
		keyid = 6800;
	};
	class ItemKeyBlue1801: ItemKeyBlue {
		keyid = 6801;
	};
	class ItemKeyBlue1802: ItemKeyBlue {
		keyid = 6802;
	};
	class ItemKeyBlue1803: ItemKeyBlue {
		keyid = 6803;
	};
	class ItemKeyBlue1804: ItemKeyBlue {
		keyid = 6804;
	};
	class ItemKeyBlue1805: ItemKeyBlue {
		keyid = 6805;
	};
	class ItemKeyBlue1806: ItemKeyBlue {
		keyid = 6806;
	};
	class ItemKeyBlue1807: ItemKeyBlue {
		keyid = 6807;
	};
	class ItemKeyBlue1808: ItemKeyBlue {
		keyid = 6808;
	};
	class ItemKeyBlue1809: ItemKeyBlue {
		keyid = 6809;
	};
	class ItemKeyBlue1810: ItemKeyBlue {
		keyid = 6810;
	};
	class ItemKeyBlue1811: ItemKeyBlue {
		keyid = 6811;
	};
	class ItemKeyBlue1812: ItemKeyBlue {
		keyid = 6812;
	};
	class ItemKeyBlue1813: ItemKeyBlue {
		keyid = 6813;
	};
	class ItemKeyBlue1814: ItemKeyBlue {
		keyid = 6814;
	};
	class ItemKeyBlue1815: ItemKeyBlue {
		keyid = 6815;
	};
	class ItemKeyBlue1816: ItemKeyBlue {
		keyid = 6816;
	};
	class ItemKeyBlue1817: ItemKeyBlue {
		keyid = 6817;
	};
	class ItemKeyBlue1818: ItemKeyBlue {
		keyid = 6818;
	};
	class ItemKeyBlue1819: ItemKeyBlue {
		keyid = 6819;
	};
	class ItemKeyBlue1820: ItemKeyBlue {
		keyid = 6820;
	};
	class ItemKeyBlue1821: ItemKeyBlue {
		keyid = 6821;
	};
	class ItemKeyBlue1822: ItemKeyBlue {
		keyid = 6822;
	};
	class ItemKeyBlue1823: ItemKeyBlue {
		keyid = 6823;
	};
	class ItemKeyBlue1824: ItemKeyBlue {
		keyid = 6824;
	};
	class ItemKeyBlue1825: ItemKeyBlue {
		keyid = 6825;
	};
	class ItemKeyBlue1826: ItemKeyBlue {
		keyid = 6826;
	};
	class ItemKeyBlue1827: ItemKeyBlue {
		keyid = 6827;
	};
	class ItemKeyBlue1828: ItemKeyBlue {
		keyid = 6828;
	};
	class ItemKeyBlue1829: ItemKeyBlue {
		keyid = 6829;
	};
	class ItemKeyBlue1830: ItemKeyBlue {
		keyid = 6830;
	};
	class ItemKeyBlue1831: ItemKeyBlue {
		keyid = 6831;
	};
	class ItemKeyBlue1832: ItemKeyBlue {
		keyid = 6832;
	};
	class ItemKeyBlue1833: ItemKeyBlue {
		keyid = 6833;
	};
	class ItemKeyBlue1834: ItemKeyBlue {
		keyid = 6834;
	};
	class ItemKeyBlue1835: ItemKeyBlue {
		keyid = 6835;
	};
	class ItemKeyBlue1836: ItemKeyBlue {
		keyid = 6836;
	};
	class ItemKeyBlue1837: ItemKeyBlue {
		keyid = 6837;
	};
	class ItemKeyBlue1838: ItemKeyBlue {
		keyid = 6838;
	};
	class ItemKeyBlue1839: ItemKeyBlue {
		keyid = 6839;
	};
	class ItemKeyBlue1840: ItemKeyBlue {
		keyid = 6840;
	};
	class ItemKeyBlue1841: ItemKeyBlue {
		keyid = 6841;
	};
	class ItemKeyBlue1842: ItemKeyBlue {
		keyid = 6842;
	};
	class ItemKeyBlue1843: ItemKeyBlue {
		keyid = 6843;
	};
	class ItemKeyBlue1844: ItemKeyBlue {
		keyid = 6844;
	};
	class ItemKeyBlue1845: ItemKeyBlue {
		keyid = 6845;
	};
	class ItemKeyBlue1846: ItemKeyBlue {
		keyid = 6846;
	};
	class ItemKeyBlue1847: ItemKeyBlue {
		keyid = 6847;
	};
	class ItemKeyBlue1848: ItemKeyBlue {
		keyid = 6848;
	};
	class ItemKeyBlue1849: ItemKeyBlue {
		keyid = 6849;
	};
	class ItemKeyBlue1850: ItemKeyBlue {
		keyid = 6850;
	};
	class ItemKeyBlue1851: ItemKeyBlue {
		keyid = 6851;
	};
	class ItemKeyBlue1852: ItemKeyBlue {
		keyid = 6852;
	};
	class ItemKeyBlue1853: ItemKeyBlue {
		keyid = 6853;
	};
	class ItemKeyBlue1854: ItemKeyBlue {
		keyid = 6854;
	};
	class ItemKeyBlue1855: ItemKeyBlue {
		keyid = 6855;
	};
	class ItemKeyBlue1856: ItemKeyBlue {
		keyid = 6856;
	};
	class ItemKeyBlue1857: ItemKeyBlue {
		keyid = 6857;
	};
	class ItemKeyBlue1858: ItemKeyBlue {
		keyid = 6858;
	};
	class ItemKeyBlue1859: ItemKeyBlue {
		keyid = 6859;
	};
	class ItemKeyBlue1860: ItemKeyBlue {
		keyid = 6860;
	};
	class ItemKeyBlue1861: ItemKeyBlue {
		keyid = 6861;
	};
	class ItemKeyBlue1862: ItemKeyBlue {
		keyid = 6862;
	};
	class ItemKeyBlue1863: ItemKeyBlue {
		keyid = 6863;
	};
	class ItemKeyBlue1864: ItemKeyBlue {
		keyid = 6864;
	};
	class ItemKeyBlue1865: ItemKeyBlue {
		keyid = 6865;
	};
	class ItemKeyBlue1866: ItemKeyBlue {
		keyid = 6866;
	};
	class ItemKeyBlue1867: ItemKeyBlue {
		keyid = 6867;
	};
	class ItemKeyBlue1868: ItemKeyBlue {
		keyid = 6868;
	};
	class ItemKeyBlue1869: ItemKeyBlue {
		keyid = 6869;
	};
	class ItemKeyBlue1870: ItemKeyBlue {
		keyid = 6870;
	};
	class ItemKeyBlue1871: ItemKeyBlue {
		keyid = 6871;
	};
	class ItemKeyBlue1872: ItemKeyBlue {
		keyid = 6872;
	};
	class ItemKeyBlue1873: ItemKeyBlue {
		keyid = 6873;
	};
	class ItemKeyBlue1874: ItemKeyBlue {
		keyid = 6874;
	};
	class ItemKeyBlue1875: ItemKeyBlue {
		keyid = 6875;
	};
	class ItemKeyBlue1876: ItemKeyBlue {
		keyid = 6876;
	};
	class ItemKeyBlue1877: ItemKeyBlue {
		keyid = 6877;
	};
	class ItemKeyBlue1878: ItemKeyBlue {
		keyid = 6878;
	};
	class ItemKeyBlue1879: ItemKeyBlue {
		keyid = 6879;
	};
	class ItemKeyBlue1880: ItemKeyBlue {
		keyid = 6880;
	};
	class ItemKeyBlue1881: ItemKeyBlue {
		keyid = 6881;
	};
	class ItemKeyBlue1882: ItemKeyBlue {
		keyid = 6882;
	};
	class ItemKeyBlue1883: ItemKeyBlue {
		keyid = 6883;
	};
	class ItemKeyBlue1884: ItemKeyBlue {
		keyid = 6884;
	};
	class ItemKeyBlue1885: ItemKeyBlue {
		keyid = 6885;
	};
	class ItemKeyBlue1886: ItemKeyBlue {
		keyid = 6886;
	};
	class ItemKeyBlue1887: ItemKeyBlue {
		keyid = 6887;
	};
	class ItemKeyBlue1888: ItemKeyBlue {
		keyid = 6888;
	};
	class ItemKeyBlue1889: ItemKeyBlue {
		keyid = 6889;
	};
	class ItemKeyBlue1890: ItemKeyBlue {
		keyid = 6890;
	};
	class ItemKeyBlue1891: ItemKeyBlue {
		keyid = 6891;
	};
	class ItemKeyBlue1892: ItemKeyBlue {
		keyid = 6892;
	};
	class ItemKeyBlue1893: ItemKeyBlue {
		keyid = 6893;
	};
	class ItemKeyBlue1894: ItemKeyBlue {
		keyid = 6894;
	};
	class ItemKeyBlue1895: ItemKeyBlue {
		keyid = 6895;
	};
	class ItemKeyBlue1896: ItemKeyBlue {
		keyid = 6896;
	};
	class ItemKeyBlue1897: ItemKeyBlue {
		keyid = 6897;
	};
	class ItemKeyBlue1898: ItemKeyBlue {
		keyid = 6898;
	};
	class ItemKeyBlue1899: ItemKeyBlue {
		keyid = 6899;
	};
	class ItemKeyBlue1900: ItemKeyBlue {
		keyid = 6900;
	};
	class ItemKeyBlue1901: ItemKeyBlue {
		keyid = 6901;
	};
	class ItemKeyBlue1902: ItemKeyBlue {
		keyid = 6902;
	};
	class ItemKeyBlue1903: ItemKeyBlue {
		keyid = 6903;
	};
	class ItemKeyBlue1904: ItemKeyBlue {
		keyid = 6904;
	};
	class ItemKeyBlue1905: ItemKeyBlue {
		keyid = 6905;
	};
	class ItemKeyBlue1906: ItemKeyBlue {
		keyid = 6906;
	};
	class ItemKeyBlue1907: ItemKeyBlue {
		keyid = 6907;
	};
	class ItemKeyBlue1908: ItemKeyBlue {
		keyid = 6908;
	};
	class ItemKeyBlue1909: ItemKeyBlue {
		keyid = 6909;
	};
	class ItemKeyBlue1910: ItemKeyBlue {
		keyid = 6910;
	};
	class ItemKeyBlue1911: ItemKeyBlue {
		keyid = 6911;
	};
	class ItemKeyBlue1912: ItemKeyBlue {
		keyid = 6912;
	};
	class ItemKeyBlue1913: ItemKeyBlue {
		keyid = 6913;
	};
	class ItemKeyBlue1914: ItemKeyBlue {
		keyid = 6914;
	};
	class ItemKeyBlue1915: ItemKeyBlue {
		keyid = 6915;
	};
	class ItemKeyBlue1916: ItemKeyBlue {
		keyid = 6916;
	};
	class ItemKeyBlue1917: ItemKeyBlue {
		keyid = 6917;
	};
	class ItemKeyBlue1918: ItemKeyBlue {
		keyid = 6918;
	};
	class ItemKeyBlue1919: ItemKeyBlue {
		keyid = 6919;
	};
	class ItemKeyBlue1920: ItemKeyBlue {
		keyid = 6920;
	};
	class ItemKeyBlue1921: ItemKeyBlue {
		keyid = 6921;
	};
	class ItemKeyBlue1922: ItemKeyBlue {
		keyid = 6922;
	};
	class ItemKeyBlue1923: ItemKeyBlue {
		keyid = 6923;
	};
	class ItemKeyBlue1924: ItemKeyBlue {
		keyid = 6924;
	};
	class ItemKeyBlue1925: ItemKeyBlue {
		keyid = 6925;
	};
	class ItemKeyBlue1926: ItemKeyBlue {
		keyid = 6926;
	};
	class ItemKeyBlue1927: ItemKeyBlue {
		keyid = 6927;
	};
	class ItemKeyBlue1928: ItemKeyBlue {
		keyid = 6928;
	};
	class ItemKeyBlue1929: ItemKeyBlue {
		keyid = 6929;
	};
	class ItemKeyBlue1930: ItemKeyBlue {
		keyid = 6930;
	};
	class ItemKeyBlue1931: ItemKeyBlue {
		keyid = 6931;
	};
	class ItemKeyBlue1932: ItemKeyBlue {
		keyid = 6932;
	};
	class ItemKeyBlue1933: ItemKeyBlue {
		keyid = 6933;
	};
	class ItemKeyBlue1934: ItemKeyBlue {
		keyid = 6934;
	};
	class ItemKeyBlue1935: ItemKeyBlue {
		keyid = 6935;
	};
	class ItemKeyBlue1936: ItemKeyBlue {
		keyid = 6936;
	};
	class ItemKeyBlue1937: ItemKeyBlue {
		keyid = 6937;
	};
	class ItemKeyBlue1938: ItemKeyBlue {
		keyid = 6938;
	};
	class ItemKeyBlue1939: ItemKeyBlue {
		keyid = 6939;
	};
	class ItemKeyBlue1940: ItemKeyBlue {
		keyid = 6940;
	};
	class ItemKeyBlue1941: ItemKeyBlue {
		keyid = 6941;
	};
	class ItemKeyBlue1942: ItemKeyBlue {
		keyid = 6942;
	};
	class ItemKeyBlue1943: ItemKeyBlue {
		keyid = 6943;
	};
	class ItemKeyBlue1944: ItemKeyBlue {
		keyid = 6944;
	};
	class ItemKeyBlue1945: ItemKeyBlue {
		keyid = 6945;
	};
	class ItemKeyBlue1946: ItemKeyBlue {
		keyid = 6946;
	};
	class ItemKeyBlue1947: ItemKeyBlue {
		keyid = 6947;
	};
	class ItemKeyBlue1948: ItemKeyBlue {
		keyid = 6948;
	};
	class ItemKeyBlue1949: ItemKeyBlue {
		keyid = 6949;
	};
	class ItemKeyBlue1950: ItemKeyBlue {
		keyid = 6950;
	};
	class ItemKeyBlue1951: ItemKeyBlue {
		keyid = 6951;
	};
	class ItemKeyBlue1952: ItemKeyBlue {
		keyid = 6952;
	};
	class ItemKeyBlue1953: ItemKeyBlue {
		keyid = 6953;
	};
	class ItemKeyBlue1954: ItemKeyBlue {
		keyid = 6954;
	};
	class ItemKeyBlue1955: ItemKeyBlue {
		keyid = 6955;
	};
	class ItemKeyBlue1956: ItemKeyBlue {
		keyid = 6956;
	};
	class ItemKeyBlue1957: ItemKeyBlue {
		keyid = 6957;
	};
	class ItemKeyBlue1958: ItemKeyBlue {
		keyid = 6958;
	};
	class ItemKeyBlue1959: ItemKeyBlue {
		keyid = 6959;
	};
	class ItemKeyBlue1960: ItemKeyBlue {
		keyid = 6960;
	};
	class ItemKeyBlue1961: ItemKeyBlue {
		keyid = 6961;
	};
	class ItemKeyBlue1962: ItemKeyBlue {
		keyid = 6962;
	};
	class ItemKeyBlue1963: ItemKeyBlue {
		keyid = 6963;
	};
	class ItemKeyBlue1964: ItemKeyBlue {
		keyid = 6964;
	};
	class ItemKeyBlue1965: ItemKeyBlue {
		keyid = 6965;
	};
	class ItemKeyBlue1966: ItemKeyBlue {
		keyid = 6966;
	};
	class ItemKeyBlue1967: ItemKeyBlue {
		keyid = 6967;
	};
	class ItemKeyBlue1968: ItemKeyBlue {
		keyid = 6968;
	};
	class ItemKeyBlue1969: ItemKeyBlue {
		keyid = 6969;
	};
	class ItemKeyBlue1970: ItemKeyBlue {
		keyid = 6970;
	};
	class ItemKeyBlue1971: ItemKeyBlue {
		keyid = 6971;
	};
	class ItemKeyBlue1972: ItemKeyBlue {
		keyid = 6972;
	};
	class ItemKeyBlue1973: ItemKeyBlue {
		keyid = 6973;
	};
	class ItemKeyBlue1974: ItemKeyBlue {
		keyid = 6974;
	};
	class ItemKeyBlue1975: ItemKeyBlue {
		keyid = 6975;
	};
	class ItemKeyBlue1976: ItemKeyBlue {
		keyid = 6976;
	};
	class ItemKeyBlue1977: ItemKeyBlue {
		keyid = 6977;
	};
	class ItemKeyBlue1978: ItemKeyBlue {
		keyid = 6978;
	};
	class ItemKeyBlue1979: ItemKeyBlue {
		keyid = 6979;
	};
	class ItemKeyBlue1980: ItemKeyBlue {
		keyid = 6980;
	};
	class ItemKeyBlue1981: ItemKeyBlue {
		keyid = 6981;
	};
	class ItemKeyBlue1982: ItemKeyBlue {
		keyid = 6982;
	};
	class ItemKeyBlue1983: ItemKeyBlue {
		keyid = 6983;
	};
	class ItemKeyBlue1984: ItemKeyBlue {
		keyid = 6984;
	};
	class ItemKeyBlue1985: ItemKeyBlue {
		keyid = 6985;
	};
	class ItemKeyBlue1986: ItemKeyBlue {
		keyid = 6986;
	};
	class ItemKeyBlue1987: ItemKeyBlue {
		keyid = 6987;
	};
	class ItemKeyBlue1988: ItemKeyBlue {
		keyid = 6988;
	};
	class ItemKeyBlue1989: ItemKeyBlue {
		keyid = 6989;
	};
	class ItemKeyBlue1990: ItemKeyBlue {
		keyid = 6990;
	};
	class ItemKeyBlue1991: ItemKeyBlue {
		keyid = 6991;
	};
	class ItemKeyBlue1992: ItemKeyBlue {
		keyid = 6992;
	};
	class ItemKeyBlue1993: ItemKeyBlue {
		keyid = 6993;
	};
	class ItemKeyBlue1994: ItemKeyBlue {
		keyid = 6994;
	};
	class ItemKeyBlue1995: ItemKeyBlue {
		keyid = 6995;
	};
	class ItemKeyBlue1996: ItemKeyBlue {
		keyid = 6996;
	};
	class ItemKeyBlue1997: ItemKeyBlue {
		keyid = 6997;
	};
	class ItemKeyBlue1998: ItemKeyBlue {
		keyid = 6998;
	};
	class ItemKeyBlue1999: ItemKeyBlue {
		keyid = 6999;
	};
	class ItemKeyBlue2000: ItemKeyBlue {
		keyid = 7000;
	};
	class ItemKeyBlue2001: ItemKeyBlue {
		keyid = 7001;
	};
	class ItemKeyBlue2002: ItemKeyBlue {
		keyid = 7002;
	};
	class ItemKeyBlue2003: ItemKeyBlue {
		keyid = 7003;
	};
	class ItemKeyBlue2004: ItemKeyBlue {
		keyid = 7004;
	};
	class ItemKeyBlue2005: ItemKeyBlue {
		keyid = 7005;
	};
	class ItemKeyBlue2006: ItemKeyBlue {
		keyid = 7006;
	};
	class ItemKeyBlue2007: ItemKeyBlue {
		keyid = 7007;
	};
	class ItemKeyBlue2008: ItemKeyBlue {
		keyid = 7008;
	};
	class ItemKeyBlue2009: ItemKeyBlue {
		keyid = 7009;
	};
	class ItemKeyBlue2010: ItemKeyBlue {
		keyid = 7010;
	};
	class ItemKeyBlue2011: ItemKeyBlue {
		keyid = 7011;
	};
	class ItemKeyBlue2012: ItemKeyBlue {
		keyid = 7012;
	};
	class ItemKeyBlue2013: ItemKeyBlue {
		keyid = 7013;
	};
	class ItemKeyBlue2014: ItemKeyBlue {
		keyid = 7014;
	};
	class ItemKeyBlue2015: ItemKeyBlue {
		keyid = 7015;
	};
	class ItemKeyBlue2016: ItemKeyBlue {
		keyid = 7016;
	};
	class ItemKeyBlue2017: ItemKeyBlue {
		keyid = 7017;
	};
	class ItemKeyBlue2018: ItemKeyBlue {
		keyid = 7018;
	};
	class ItemKeyBlue2019: ItemKeyBlue {
		keyid = 7019;
	};
	class ItemKeyBlue2020: ItemKeyBlue {
		keyid = 7020;
	};
	class ItemKeyBlue2021: ItemKeyBlue {
		keyid = 7021;
	};
	class ItemKeyBlue2022: ItemKeyBlue {
		keyid = 7022;
	};
	class ItemKeyBlue2023: ItemKeyBlue {
		keyid = 7023;
	};
	class ItemKeyBlue2024: ItemKeyBlue {
		keyid = 7024;
	};
	class ItemKeyBlue2025: ItemKeyBlue {
		keyid = 7025;
	};
	class ItemKeyBlue2026: ItemKeyBlue {
		keyid = 7026;
	};
	class ItemKeyBlue2027: ItemKeyBlue {
		keyid = 7027;
	};
	class ItemKeyBlue2028: ItemKeyBlue {
		keyid = 7028;
	};
	class ItemKeyBlue2029: ItemKeyBlue {
		keyid = 7029;
	};
	class ItemKeyBlue2030: ItemKeyBlue {
		keyid = 7030;
	};
	class ItemKeyBlue2031: ItemKeyBlue {
		keyid = 7031;
	};
	class ItemKeyBlue2032: ItemKeyBlue {
		keyid = 7032;
	};
	class ItemKeyBlue2033: ItemKeyBlue {
		keyid = 7033;
	};
	class ItemKeyBlue2034: ItemKeyBlue {
		keyid = 7034;
	};
	class ItemKeyBlue2035: ItemKeyBlue {
		keyid = 7035;
	};
	class ItemKeyBlue2036: ItemKeyBlue {
		keyid = 7036;
	};
	class ItemKeyBlue2037: ItemKeyBlue {
		keyid = 7037;
	};
	class ItemKeyBlue2038: ItemKeyBlue {
		keyid = 7038;
	};
	class ItemKeyBlue2039: ItemKeyBlue {
		keyid = 7039;
	};
	class ItemKeyBlue2040: ItemKeyBlue {
		keyid = 7040;
	};
	class ItemKeyBlue2041: ItemKeyBlue {
		keyid = 7041;
	};
	class ItemKeyBlue2042: ItemKeyBlue {
		keyid = 7042;
	};
	class ItemKeyBlue2043: ItemKeyBlue {
		keyid = 7043;
	};
	class ItemKeyBlue2044: ItemKeyBlue {
		keyid = 7044;
	};
	class ItemKeyBlue2045: ItemKeyBlue {
		keyid = 7045;
	};
	class ItemKeyBlue2046: ItemKeyBlue {
		keyid = 7046;
	};
	class ItemKeyBlue2047: ItemKeyBlue {
		keyid = 7047;
	};
	class ItemKeyBlue2048: ItemKeyBlue {
		keyid = 7048;
	};
	class ItemKeyBlue2049: ItemKeyBlue {
		keyid = 7049;
	};
	class ItemKeyBlue2050: ItemKeyBlue {
		keyid = 7050;
	};
	class ItemKeyBlue2051: ItemKeyBlue {
		keyid = 7051;
	};
	class ItemKeyBlue2052: ItemKeyBlue {
		keyid = 7052;
	};
	class ItemKeyBlue2053: ItemKeyBlue {
		keyid = 7053;
	};
	class ItemKeyBlue2054: ItemKeyBlue {
		keyid = 7054;
	};
	class ItemKeyBlue2055: ItemKeyBlue {
		keyid = 7055;
	};
	class ItemKeyBlue2056: ItemKeyBlue {
		keyid = 7056;
	};
	class ItemKeyBlue2057: ItemKeyBlue {
		keyid = 7057;
	};
	class ItemKeyBlue2058: ItemKeyBlue {
		keyid = 7058;
	};
	class ItemKeyBlue2059: ItemKeyBlue {
		keyid = 7059;
	};
	class ItemKeyBlue2060: ItemKeyBlue {
		keyid = 7060;
	};
	class ItemKeyBlue2061: ItemKeyBlue {
		keyid = 7061;
	};
	class ItemKeyBlue2062: ItemKeyBlue {
		keyid = 7062;
	};
	class ItemKeyBlue2063: ItemKeyBlue {
		keyid = 7063;
	};
	class ItemKeyBlue2064: ItemKeyBlue {
		keyid = 7064;
	};
	class ItemKeyBlue2065: ItemKeyBlue {
		keyid = 7065;
	};
	class ItemKeyBlue2066: ItemKeyBlue {
		keyid = 7066;
	};
	class ItemKeyBlue2067: ItemKeyBlue {
		keyid = 7067;
	};
	class ItemKeyBlue2068: ItemKeyBlue {
		keyid = 7068;
	};
	class ItemKeyBlue2069: ItemKeyBlue {
		keyid = 7069;
	};
	class ItemKeyBlue2070: ItemKeyBlue {
		keyid = 7070;
	};
	class ItemKeyBlue2071: ItemKeyBlue {
		keyid = 7071;
	};
	class ItemKeyBlue2072: ItemKeyBlue {
		keyid = 7072;
	};
	class ItemKeyBlue2073: ItemKeyBlue {
		keyid = 7073;
	};
	class ItemKeyBlue2074: ItemKeyBlue {
		keyid = 7074;
	};
	class ItemKeyBlue2075: ItemKeyBlue {
		keyid = 7075;
	};
	class ItemKeyBlue2076: ItemKeyBlue {
		keyid = 7076;
	};
	class ItemKeyBlue2077: ItemKeyBlue {
		keyid = 7077;
	};
	class ItemKeyBlue2078: ItemKeyBlue {
		keyid = 7078;
	};
	class ItemKeyBlue2079: ItemKeyBlue {
		keyid = 7079;
	};
	class ItemKeyBlue2080: ItemKeyBlue {
		keyid = 7080;
	};
	class ItemKeyBlue2081: ItemKeyBlue {
		keyid = 7081;
	};
	class ItemKeyBlue2082: ItemKeyBlue {
		keyid = 7082;
	};
	class ItemKeyBlue2083: ItemKeyBlue {
		keyid = 7083;
	};
	class ItemKeyBlue2084: ItemKeyBlue {
		keyid = 7084;
	};
	class ItemKeyBlue2085: ItemKeyBlue {
		keyid = 7085;
	};
	class ItemKeyBlue2086: ItemKeyBlue {
		keyid = 7086;
	};
	class ItemKeyBlue2087: ItemKeyBlue {
		keyid = 7087;
	};
	class ItemKeyBlue2088: ItemKeyBlue {
		keyid = 7088;
	};
	class ItemKeyBlue2089: ItemKeyBlue {
		keyid = 7089;
	};
	class ItemKeyBlue2090: ItemKeyBlue {
		keyid = 7090;
	};
	class ItemKeyBlue2091: ItemKeyBlue {
		keyid = 7091;
	};
	class ItemKeyBlue2092: ItemKeyBlue {
		keyid = 7092;
	};
	class ItemKeyBlue2093: ItemKeyBlue {
		keyid = 7093;
	};
	class ItemKeyBlue2094: ItemKeyBlue {
		keyid = 7094;
	};
	class ItemKeyBlue2095: ItemKeyBlue {
		keyid = 7095;
	};
	class ItemKeyBlue2096: ItemKeyBlue {
		keyid = 7096;
	};
	class ItemKeyBlue2097: ItemKeyBlue {
		keyid = 7097;
	};
	class ItemKeyBlue2098: ItemKeyBlue {
		keyid = 7098;
	};
	class ItemKeyBlue2099: ItemKeyBlue {
		keyid = 7099;
	};
	class ItemKeyBlue2100: ItemKeyBlue {
		keyid = 7100;
	};
	class ItemKeyBlue2101: ItemKeyBlue {
		keyid = 7101;
	};
	class ItemKeyBlue2102: ItemKeyBlue {
		keyid = 7102;
	};
	class ItemKeyBlue2103: ItemKeyBlue {
		keyid = 7103;
	};
	class ItemKeyBlue2104: ItemKeyBlue {
		keyid = 7104;
	};
	class ItemKeyBlue2105: ItemKeyBlue {
		keyid = 7105;
	};
	class ItemKeyBlue2106: ItemKeyBlue {
		keyid = 7106;
	};
	class ItemKeyBlue2107: ItemKeyBlue {
		keyid = 7107;
	};
	class ItemKeyBlue2108: ItemKeyBlue {
		keyid = 7108;
	};
	class ItemKeyBlue2109: ItemKeyBlue {
		keyid = 7109;
	};
	class ItemKeyBlue2110: ItemKeyBlue {
		keyid = 7110;
	};
	class ItemKeyBlue2111: ItemKeyBlue {
		keyid = 7111;
	};
	class ItemKeyBlue2112: ItemKeyBlue {
		keyid = 7112;
	};
	class ItemKeyBlue2113: ItemKeyBlue {
		keyid = 7113;
	};
	class ItemKeyBlue2114: ItemKeyBlue {
		keyid = 7114;
	};
	class ItemKeyBlue2115: ItemKeyBlue {
		keyid = 7115;
	};
	class ItemKeyBlue2116: ItemKeyBlue {
		keyid = 7116;
	};
	class ItemKeyBlue2117: ItemKeyBlue {
		keyid = 7117;
	};
	class ItemKeyBlue2118: ItemKeyBlue {
		keyid = 7118;
	};
	class ItemKeyBlue2119: ItemKeyBlue {
		keyid = 7119;
	};
	class ItemKeyBlue2120: ItemKeyBlue {
		keyid = 7120;
	};
	class ItemKeyBlue2121: ItemKeyBlue {
		keyid = 7121;
	};
	class ItemKeyBlue2122: ItemKeyBlue {
		keyid = 7122;
	};
	class ItemKeyBlue2123: ItemKeyBlue {
		keyid = 7123;
	};
	class ItemKeyBlue2124: ItemKeyBlue {
		keyid = 7124;
	};
	class ItemKeyBlue2125: ItemKeyBlue {
		keyid = 7125;
	};
	class ItemKeyBlue2126: ItemKeyBlue {
		keyid = 7126;
	};
	class ItemKeyBlue2127: ItemKeyBlue {
		keyid = 7127;
	};
	class ItemKeyBlue2128: ItemKeyBlue {
		keyid = 7128;
	};
	class ItemKeyBlue2129: ItemKeyBlue {
		keyid = 7129;
	};
	class ItemKeyBlue2130: ItemKeyBlue {
		keyid = 7130;
	};
	class ItemKeyBlue2131: ItemKeyBlue {
		keyid = 7131;
	};
	class ItemKeyBlue2132: ItemKeyBlue {
		keyid = 7132;
	};
	class ItemKeyBlue2133: ItemKeyBlue {
		keyid = 7133;
	};
	class ItemKeyBlue2134: ItemKeyBlue {
		keyid = 7134;
	};
	class ItemKeyBlue2135: ItemKeyBlue {
		keyid = 7135;
	};
	class ItemKeyBlue2136: ItemKeyBlue {
		keyid = 7136;
	};
	class ItemKeyBlue2137: ItemKeyBlue {
		keyid = 7137;
	};
	class ItemKeyBlue2138: ItemKeyBlue {
		keyid = 7138;
	};
	class ItemKeyBlue2139: ItemKeyBlue {
		keyid = 7139;
	};
	class ItemKeyBlue2140: ItemKeyBlue {
		keyid = 7140;
	};
	class ItemKeyBlue2141: ItemKeyBlue {
		keyid = 7141;
	};
	class ItemKeyBlue2142: ItemKeyBlue {
		keyid = 7142;
	};
	class ItemKeyBlue2143: ItemKeyBlue {
		keyid = 7143;
	};
	class ItemKeyBlue2144: ItemKeyBlue {
		keyid = 7144;
	};
	class ItemKeyBlue2145: ItemKeyBlue {
		keyid = 7145;
	};
	class ItemKeyBlue2146: ItemKeyBlue {
		keyid = 7146;
	};
	class ItemKeyBlue2147: ItemKeyBlue {
		keyid = 7147;
	};
	class ItemKeyBlue2148: ItemKeyBlue {
		keyid = 7148;
	};
	class ItemKeyBlue2149: ItemKeyBlue {
		keyid = 7149;
	};
	class ItemKeyBlue2150: ItemKeyBlue {
		keyid = 7150;
	};
	class ItemKeyBlue2151: ItemKeyBlue {
		keyid = 7151;
	};
	class ItemKeyBlue2152: ItemKeyBlue {
		keyid = 7152;
	};
	class ItemKeyBlue2153: ItemKeyBlue {
		keyid = 7153;
	};
	class ItemKeyBlue2154: ItemKeyBlue {
		keyid = 7154;
	};
	class ItemKeyBlue2155: ItemKeyBlue {
		keyid = 7155;
	};
	class ItemKeyBlue2156: ItemKeyBlue {
		keyid = 7156;
	};
	class ItemKeyBlue2157: ItemKeyBlue {
		keyid = 7157;
	};
	class ItemKeyBlue2158: ItemKeyBlue {
		keyid = 7158;
	};
	class ItemKeyBlue2159: ItemKeyBlue {
		keyid = 7159;
	};
	class ItemKeyBlue2160: ItemKeyBlue {
		keyid = 7160;
	};
	class ItemKeyBlue2161: ItemKeyBlue {
		keyid = 7161;
	};
	class ItemKeyBlue2162: ItemKeyBlue {
		keyid = 7162;
	};
	class ItemKeyBlue2163: ItemKeyBlue {
		keyid = 7163;
	};
	class ItemKeyBlue2164: ItemKeyBlue {
		keyid = 7164;
	};
	class ItemKeyBlue2165: ItemKeyBlue {
		keyid = 7165;
	};
	class ItemKeyBlue2166: ItemKeyBlue {
		keyid = 7166;
	};
	class ItemKeyBlue2167: ItemKeyBlue {
		keyid = 7167;
	};
	class ItemKeyBlue2168: ItemKeyBlue {
		keyid = 7168;
	};
	class ItemKeyBlue2169: ItemKeyBlue {
		keyid = 7169;
	};
	class ItemKeyBlue2170: ItemKeyBlue {
		keyid = 7170;
	};
	class ItemKeyBlue2171: ItemKeyBlue {
		keyid = 7171;
	};
	class ItemKeyBlue2172: ItemKeyBlue {
		keyid = 7172;
	};
	class ItemKeyBlue2173: ItemKeyBlue {
		keyid = 7173;
	};
	class ItemKeyBlue2174: ItemKeyBlue {
		keyid = 7174;
	};
	class ItemKeyBlue2175: ItemKeyBlue {
		keyid = 7175;
	};
	class ItemKeyBlue2176: ItemKeyBlue {
		keyid = 7176;
	};
	class ItemKeyBlue2177: ItemKeyBlue {
		keyid = 7177;
	};
	class ItemKeyBlue2178: ItemKeyBlue {
		keyid = 7178;
	};
	class ItemKeyBlue2179: ItemKeyBlue {
		keyid = 7179;
	};
	class ItemKeyBlue2180: ItemKeyBlue {
		keyid = 7180;
	};
	class ItemKeyBlue2181: ItemKeyBlue {
		keyid = 7181;
	};
	class ItemKeyBlue2182: ItemKeyBlue {
		keyid = 7182;
	};
	class ItemKeyBlue2183: ItemKeyBlue {
		keyid = 7183;
	};
	class ItemKeyBlue2184: ItemKeyBlue {
		keyid = 7184;
	};
	class ItemKeyBlue2185: ItemKeyBlue {
		keyid = 7185;
	};
	class ItemKeyBlue2186: ItemKeyBlue {
		keyid = 7186;
	};
	class ItemKeyBlue2187: ItemKeyBlue {
		keyid = 7187;
	};
	class ItemKeyBlue2188: ItemKeyBlue {
		keyid = 7188;
	};
	class ItemKeyBlue2189: ItemKeyBlue {
		keyid = 7189;
	};
	class ItemKeyBlue2190: ItemKeyBlue {
		keyid = 7190;
	};
	class ItemKeyBlue2191: ItemKeyBlue {
		keyid = 7191;
	};
	class ItemKeyBlue2192: ItemKeyBlue {
		keyid = 7192;
	};
	class ItemKeyBlue2193: ItemKeyBlue {
		keyid = 7193;
	};
	class ItemKeyBlue2194: ItemKeyBlue {
		keyid = 7194;
	};
	class ItemKeyBlue2195: ItemKeyBlue {
		keyid = 7195;
	};
	class ItemKeyBlue2196: ItemKeyBlue {
		keyid = 7196;
	};
	class ItemKeyBlue2197: ItemKeyBlue {
		keyid = 7197;
	};
	class ItemKeyBlue2198: ItemKeyBlue {
		keyid = 7198;
	};
	class ItemKeyBlue2199: ItemKeyBlue {
		keyid = 7199;
	};
	class ItemKeyBlue2200: ItemKeyBlue {
		keyid = 7200;
	};
	class ItemKeyBlue2201: ItemKeyBlue {
		keyid = 7201;
	};
	class ItemKeyBlue2202: ItemKeyBlue {
		keyid = 7202;
	};
	class ItemKeyBlue2203: ItemKeyBlue {
		keyid = 7203;
	};
	class ItemKeyBlue2204: ItemKeyBlue {
		keyid = 7204;
	};
	class ItemKeyBlue2205: ItemKeyBlue {
		keyid = 7205;
	};
	class ItemKeyBlue2206: ItemKeyBlue {
		keyid = 7206;
	};
	class ItemKeyBlue2207: ItemKeyBlue {
		keyid = 7207;
	};
	class ItemKeyBlue2208: ItemKeyBlue {
		keyid = 7208;
	};
	class ItemKeyBlue2209: ItemKeyBlue {
		keyid = 7209;
	};
	class ItemKeyBlue2210: ItemKeyBlue {
		keyid = 7210;
	};
	class ItemKeyBlue2211: ItemKeyBlue {
		keyid = 7211;
	};
	class ItemKeyBlue2212: ItemKeyBlue {
		keyid = 7212;
	};
	class ItemKeyBlue2213: ItemKeyBlue {
		keyid = 7213;
	};
	class ItemKeyBlue2214: ItemKeyBlue {
		keyid = 7214;
	};
	class ItemKeyBlue2215: ItemKeyBlue {
		keyid = 7215;
	};
	class ItemKeyBlue2216: ItemKeyBlue {
		keyid = 7216;
	};
	class ItemKeyBlue2217: ItemKeyBlue {
		keyid = 7217;
	};
	class ItemKeyBlue2218: ItemKeyBlue {
		keyid = 7218;
	};
	class ItemKeyBlue2219: ItemKeyBlue {
		keyid = 7219;
	};
	class ItemKeyBlue2220: ItemKeyBlue {
		keyid = 7220;
	};
	class ItemKeyBlue2221: ItemKeyBlue {
		keyid = 7221;
	};
	class ItemKeyBlue2222: ItemKeyBlue {
		keyid = 7222;
	};
	class ItemKeyBlue2223: ItemKeyBlue {
		keyid = 7223;
	};
	class ItemKeyBlue2224: ItemKeyBlue {
		keyid = 7224;
	};
	class ItemKeyBlue2225: ItemKeyBlue {
		keyid = 7225;
	};
	class ItemKeyBlue2226: ItemKeyBlue {
		keyid = 7226;
	};
	class ItemKeyBlue2227: ItemKeyBlue {
		keyid = 7227;
	};
	class ItemKeyBlue2228: ItemKeyBlue {
		keyid = 7228;
	};
	class ItemKeyBlue2229: ItemKeyBlue {
		keyid = 7229;
	};
	class ItemKeyBlue2230: ItemKeyBlue {
		keyid = 7230;
	};
	class ItemKeyBlue2231: ItemKeyBlue {
		keyid = 7231;
	};
	class ItemKeyBlue2232: ItemKeyBlue {
		keyid = 7232;
	};
	class ItemKeyBlue2233: ItemKeyBlue {
		keyid = 7233;
	};
	class ItemKeyBlue2234: ItemKeyBlue {
		keyid = 7234;
	};
	class ItemKeyBlue2235: ItemKeyBlue {
		keyid = 7235;
	};
	class ItemKeyBlue2236: ItemKeyBlue {
		keyid = 7236;
	};
	class ItemKeyBlue2237: ItemKeyBlue {
		keyid = 7237;
	};
	class ItemKeyBlue2238: ItemKeyBlue {
		keyid = 7238;
	};
	class ItemKeyBlue2239: ItemKeyBlue {
		keyid = 7239;
	};
	class ItemKeyBlue2240: ItemKeyBlue {
		keyid = 7240;
	};
	class ItemKeyBlue2241: ItemKeyBlue {
		keyid = 7241;
	};
	class ItemKeyBlue2242: ItemKeyBlue {
		keyid = 7242;
	};
	class ItemKeyBlue2243: ItemKeyBlue {
		keyid = 7243;
	};
	class ItemKeyBlue2244: ItemKeyBlue {
		keyid = 7244;
	};
	class ItemKeyBlue2245: ItemKeyBlue {
		keyid = 7245;
	};
	class ItemKeyBlue2246: ItemKeyBlue {
		keyid = 7246;
	};
	class ItemKeyBlue2247: ItemKeyBlue {
		keyid = 7247;
	};
	class ItemKeyBlue2248: ItemKeyBlue {
		keyid = 7248;
	};
	class ItemKeyBlue2249: ItemKeyBlue {
		keyid = 7249;
	};
	class ItemKeyBlue2250: ItemKeyBlue {
		keyid = 7250;
	};
	class ItemKeyBlue2251: ItemKeyBlue {
		keyid = 7251;
	};
	class ItemKeyBlue2252: ItemKeyBlue {
		keyid = 7252;
	};
	class ItemKeyBlue2253: ItemKeyBlue {
		keyid = 7253;
	};
	class ItemKeyBlue2254: ItemKeyBlue {
		keyid = 7254;
	};
	class ItemKeyBlue2255: ItemKeyBlue {
		keyid = 7255;
	};
	class ItemKeyBlue2256: ItemKeyBlue {
		keyid = 7256;
	};
	class ItemKeyBlue2257: ItemKeyBlue {
		keyid = 7257;
	};
	class ItemKeyBlue2258: ItemKeyBlue {
		keyid = 7258;
	};
	class ItemKeyBlue2259: ItemKeyBlue {
		keyid = 7259;
	};
	class ItemKeyBlue2260: ItemKeyBlue {
		keyid = 7260;
	};
	class ItemKeyBlue2261: ItemKeyBlue {
		keyid = 7261;
	};
	class ItemKeyBlue2262: ItemKeyBlue {
		keyid = 7262;
	};
	class ItemKeyBlue2263: ItemKeyBlue {
		keyid = 7263;
	};
	class ItemKeyBlue2264: ItemKeyBlue {
		keyid = 7264;
	};
	class ItemKeyBlue2265: ItemKeyBlue {
		keyid = 7265;
	};
	class ItemKeyBlue2266: ItemKeyBlue {
		keyid = 7266;
	};
	class ItemKeyBlue2267: ItemKeyBlue {
		keyid = 7267;
	};
	class ItemKeyBlue2268: ItemKeyBlue {
		keyid = 7268;
	};
	class ItemKeyBlue2269: ItemKeyBlue {
		keyid = 7269;
	};
	class ItemKeyBlue2270: ItemKeyBlue {
		keyid = 7270;
	};
	class ItemKeyBlue2271: ItemKeyBlue {
		keyid = 7271;
	};
	class ItemKeyBlue2272: ItemKeyBlue {
		keyid = 7272;
	};
	class ItemKeyBlue2273: ItemKeyBlue {
		keyid = 7273;
	};
	class ItemKeyBlue2274: ItemKeyBlue {
		keyid = 7274;
	};
	class ItemKeyBlue2275: ItemKeyBlue {
		keyid = 7275;
	};
	class ItemKeyBlue2276: ItemKeyBlue {
		keyid = 7276;
	};
	class ItemKeyBlue2277: ItemKeyBlue {
		keyid = 7277;
	};
	class ItemKeyBlue2278: ItemKeyBlue {
		keyid = 7278;
	};
	class ItemKeyBlue2279: ItemKeyBlue {
		keyid = 7279;
	};
	class ItemKeyBlue2280: ItemKeyBlue {
		keyid = 7280;
	};
	class ItemKeyBlue2281: ItemKeyBlue {
		keyid = 7281;
	};
	class ItemKeyBlue2282: ItemKeyBlue {
		keyid = 7282;
	};
	class ItemKeyBlue2283: ItemKeyBlue {
		keyid = 7283;
	};
	class ItemKeyBlue2284: ItemKeyBlue {
		keyid = 7284;
	};
	class ItemKeyBlue2285: ItemKeyBlue {
		keyid = 7285;
	};
	class ItemKeyBlue2286: ItemKeyBlue {
		keyid = 7286;
	};
	class ItemKeyBlue2287: ItemKeyBlue {
		keyid = 7287;
	};
	class ItemKeyBlue2288: ItemKeyBlue {
		keyid = 7288;
	};
	class ItemKeyBlue2289: ItemKeyBlue {
		keyid = 7289;
	};
	class ItemKeyBlue2290: ItemKeyBlue {
		keyid = 7290;
	};
	class ItemKeyBlue2291: ItemKeyBlue {
		keyid = 7291;
	};
	class ItemKeyBlue2292: ItemKeyBlue {
		keyid = 7292;
	};
	class ItemKeyBlue2293: ItemKeyBlue {
		keyid = 7293;
	};
	class ItemKeyBlue2294: ItemKeyBlue {
		keyid = 7294;
	};
	class ItemKeyBlue2295: ItemKeyBlue {
		keyid = 7295;
	};
	class ItemKeyBlue2296: ItemKeyBlue {
		keyid = 7296;
	};
	class ItemKeyBlue2297: ItemKeyBlue {
		keyid = 7297;
	};
	class ItemKeyBlue2298: ItemKeyBlue {
		keyid = 7298;
	};
	class ItemKeyBlue2299: ItemKeyBlue {
		keyid = 7299;
	};
	class ItemKeyBlue2300: ItemKeyBlue {
		keyid = 7300;
	};
	class ItemKeyBlue2301: ItemKeyBlue {
		keyid = 7301;
	};
	class ItemKeyBlue2302: ItemKeyBlue {
		keyid = 7302;
	};
	class ItemKeyBlue2303: ItemKeyBlue {
		keyid = 7303;
	};
	class ItemKeyBlue2304: ItemKeyBlue {
		keyid = 7304;
	};
	class ItemKeyBlue2305: ItemKeyBlue {
		keyid = 7305;
	};
	class ItemKeyBlue2306: ItemKeyBlue {
		keyid = 7306;
	};
	class ItemKeyBlue2307: ItemKeyBlue {
		keyid = 7307;
	};
	class ItemKeyBlue2308: ItemKeyBlue {
		keyid = 7308;
	};
	class ItemKeyBlue2309: ItemKeyBlue {
		keyid = 7309;
	};
	class ItemKeyBlue2310: ItemKeyBlue {
		keyid = 7310;
	};
	class ItemKeyBlue2311: ItemKeyBlue {
		keyid = 7311;
	};
	class ItemKeyBlue2312: ItemKeyBlue {
		keyid = 7312;
	};
	class ItemKeyBlue2313: ItemKeyBlue {
		keyid = 7313;
	};
	class ItemKeyBlue2314: ItemKeyBlue {
		keyid = 7314;
	};
	class ItemKeyBlue2315: ItemKeyBlue {
		keyid = 7315;
	};
	class ItemKeyBlue2316: ItemKeyBlue {
		keyid = 7316;
	};
	class ItemKeyBlue2317: ItemKeyBlue {
		keyid = 7317;
	};
	class ItemKeyBlue2318: ItemKeyBlue {
		keyid = 7318;
	};
	class ItemKeyBlue2319: ItemKeyBlue {
		keyid = 7319;
	};
	class ItemKeyBlue2320: ItemKeyBlue {
		keyid = 7320;
	};
	class ItemKeyBlue2321: ItemKeyBlue {
		keyid = 7321;
	};
	class ItemKeyBlue2322: ItemKeyBlue {
		keyid = 7322;
	};
	class ItemKeyBlue2323: ItemKeyBlue {
		keyid = 7323;
	};
	class ItemKeyBlue2324: ItemKeyBlue {
		keyid = 7324;
	};
	class ItemKeyBlue2325: ItemKeyBlue {
		keyid = 7325;
	};
	class ItemKeyBlue2326: ItemKeyBlue {
		keyid = 7326;
	};
	class ItemKeyBlue2327: ItemKeyBlue {
		keyid = 7327;
	};
	class ItemKeyBlue2328: ItemKeyBlue {
		keyid = 7328;
	};
	class ItemKeyBlue2329: ItemKeyBlue {
		keyid = 7329;
	};
	class ItemKeyBlue2330: ItemKeyBlue {
		keyid = 7330;
	};
	class ItemKeyBlue2331: ItemKeyBlue {
		keyid = 7331;
	};
	class ItemKeyBlue2332: ItemKeyBlue {
		keyid = 7332;
	};
	class ItemKeyBlue2333: ItemKeyBlue {
		keyid = 7333;
	};
	class ItemKeyBlue2334: ItemKeyBlue {
		keyid = 7334;
	};
	class ItemKeyBlue2335: ItemKeyBlue {
		keyid = 7335;
	};
	class ItemKeyBlue2336: ItemKeyBlue {
		keyid = 7336;
	};
	class ItemKeyBlue2337: ItemKeyBlue {
		keyid = 7337;
	};
	class ItemKeyBlue2338: ItemKeyBlue {
		keyid = 7338;
	};
	class ItemKeyBlue2339: ItemKeyBlue {
		keyid = 7339;
	};
	class ItemKeyBlue2340: ItemKeyBlue {
		keyid = 7340;
	};
	class ItemKeyBlue2341: ItemKeyBlue {
		keyid = 7341;
	};
	class ItemKeyBlue2342: ItemKeyBlue {
		keyid = 7342;
	};
	class ItemKeyBlue2343: ItemKeyBlue {
		keyid = 7343;
	};
	class ItemKeyBlue2344: ItemKeyBlue {
		keyid = 7344;
	};
	class ItemKeyBlue2345: ItemKeyBlue {
		keyid = 7345;
	};
	class ItemKeyBlue2346: ItemKeyBlue {
		keyid = 7346;
	};
	class ItemKeyBlue2347: ItemKeyBlue {
		keyid = 7347;
	};
	class ItemKeyBlue2348: ItemKeyBlue {
		keyid = 7348;
	};
	class ItemKeyBlue2349: ItemKeyBlue {
		keyid = 7349;
	};
	class ItemKeyBlue2350: ItemKeyBlue {
		keyid = 7350;
	};
	class ItemKeyBlue2351: ItemKeyBlue {
		keyid = 7351;
	};
	class ItemKeyBlue2352: ItemKeyBlue {
		keyid = 7352;
	};
	class ItemKeyBlue2353: ItemKeyBlue {
		keyid = 7353;
	};
	class ItemKeyBlue2354: ItemKeyBlue {
		keyid = 7354;
	};
	class ItemKeyBlue2355: ItemKeyBlue {
		keyid = 7355;
	};
	class ItemKeyBlue2356: ItemKeyBlue {
		keyid = 7356;
	};
	class ItemKeyBlue2357: ItemKeyBlue {
		keyid = 7357;
	};
	class ItemKeyBlue2358: ItemKeyBlue {
		keyid = 7358;
	};
	class ItemKeyBlue2359: ItemKeyBlue {
		keyid = 7359;
	};
	class ItemKeyBlue2360: ItemKeyBlue {
		keyid = 7360;
	};
	class ItemKeyBlue2361: ItemKeyBlue {
		keyid = 7361;
	};
	class ItemKeyBlue2362: ItemKeyBlue {
		keyid = 7362;
	};
	class ItemKeyBlue2363: ItemKeyBlue {
		keyid = 7363;
	};
	class ItemKeyBlue2364: ItemKeyBlue {
		keyid = 7364;
	};
	class ItemKeyBlue2365: ItemKeyBlue {
		keyid = 7365;
	};
	class ItemKeyBlue2366: ItemKeyBlue {
		keyid = 7366;
	};
	class ItemKeyBlue2367: ItemKeyBlue {
		keyid = 7367;
	};
	class ItemKeyBlue2368: ItemKeyBlue {
		keyid = 7368;
	};
	class ItemKeyBlue2369: ItemKeyBlue {
		keyid = 7369;
	};
	class ItemKeyBlue2370: ItemKeyBlue {
		keyid = 7370;
	};
	class ItemKeyBlue2371: ItemKeyBlue {
		keyid = 7371;
	};
	class ItemKeyBlue2372: ItemKeyBlue {
		keyid = 7372;
	};
	class ItemKeyBlue2373: ItemKeyBlue {
		keyid = 7373;
	};
	class ItemKeyBlue2374: ItemKeyBlue {
		keyid = 7374;
	};
	class ItemKeyBlue2375: ItemKeyBlue {
		keyid = 7375;
	};
	class ItemKeyBlue2376: ItemKeyBlue {
		keyid = 7376;
	};
	class ItemKeyBlue2377: ItemKeyBlue {
		keyid = 7377;
	};
	class ItemKeyBlue2378: ItemKeyBlue {
		keyid = 7378;
	};
	class ItemKeyBlue2379: ItemKeyBlue {
		keyid = 7379;
	};
	class ItemKeyBlue2380: ItemKeyBlue {
		keyid = 7380;
	};
	class ItemKeyBlue2381: ItemKeyBlue {
		keyid = 7381;
	};
	class ItemKeyBlue2382: ItemKeyBlue {
		keyid = 7382;
	};
	class ItemKeyBlue2383: ItemKeyBlue {
		keyid = 7383;
	};
	class ItemKeyBlue2384: ItemKeyBlue {
		keyid = 7384;
	};
	class ItemKeyBlue2385: ItemKeyBlue {
		keyid = 7385;
	};
	class ItemKeyBlue2386: ItemKeyBlue {
		keyid = 7386;
	};
	class ItemKeyBlue2387: ItemKeyBlue {
		keyid = 7387;
	};
	class ItemKeyBlue2388: ItemKeyBlue {
		keyid = 7388;
	};
	class ItemKeyBlue2389: ItemKeyBlue {
		keyid = 7389;
	};
	class ItemKeyBlue2390: ItemKeyBlue {
		keyid = 7390;
	};
	class ItemKeyBlue2391: ItemKeyBlue {
		keyid = 7391;
	};
	class ItemKeyBlue2392: ItemKeyBlue {
		keyid = 7392;
	};
	class ItemKeyBlue2393: ItemKeyBlue {
		keyid = 7393;
	};
	class ItemKeyBlue2394: ItemKeyBlue {
		keyid = 7394;
	};
	class ItemKeyBlue2395: ItemKeyBlue {
		keyid = 7395;
	};
	class ItemKeyBlue2396: ItemKeyBlue {
		keyid = 7396;
	};
	class ItemKeyBlue2397: ItemKeyBlue {
		keyid = 7397;
	};
	class ItemKeyBlue2398: ItemKeyBlue {
		keyid = 7398;
	};
	class ItemKeyBlue2399: ItemKeyBlue {
		keyid = 7399;
	};
	class ItemKeyBlue2400: ItemKeyBlue {
		keyid = 7400;
	};
	class ItemKeyBlue2401: ItemKeyBlue {
		keyid = 7401;
	};
	class ItemKeyBlue2402: ItemKeyBlue {
		keyid = 7402;
	};
	class ItemKeyBlue2403: ItemKeyBlue {
		keyid = 7403;
	};
	class ItemKeyBlue2404: ItemKeyBlue {
		keyid = 7404;
	};
	class ItemKeyBlue2405: ItemKeyBlue {
		keyid = 7405;
	};
	class ItemKeyBlue2406: ItemKeyBlue {
		keyid = 7406;
	};
	class ItemKeyBlue2407: ItemKeyBlue {
		keyid = 7407;
	};
	class ItemKeyBlue2408: ItemKeyBlue {
		keyid = 7408;
	};
	class ItemKeyBlue2409: ItemKeyBlue {
		keyid = 7409;
	};
	class ItemKeyBlue2410: ItemKeyBlue {
		keyid = 7410;
	};
	class ItemKeyBlue2411: ItemKeyBlue {
		keyid = 7411;
	};
	class ItemKeyBlue2412: ItemKeyBlue {
		keyid = 7412;
	};
	class ItemKeyBlue2413: ItemKeyBlue {
		keyid = 7413;
	};
	class ItemKeyBlue2414: ItemKeyBlue {
		keyid = 7414;
	};
	class ItemKeyBlue2415: ItemKeyBlue {
		keyid = 7415;
	};
	class ItemKeyBlue2416: ItemKeyBlue {
		keyid = 7416;
	};
	class ItemKeyBlue2417: ItemKeyBlue {
		keyid = 7417;
	};
	class ItemKeyBlue2418: ItemKeyBlue {
		keyid = 7418;
	};
	class ItemKeyBlue2419: ItemKeyBlue {
		keyid = 7419;
	};
	class ItemKeyBlue2420: ItemKeyBlue {
		keyid = 7420;
	};
	class ItemKeyBlue2421: ItemKeyBlue {
		keyid = 7421;
	};
	class ItemKeyBlue2422: ItemKeyBlue {
		keyid = 7422;
	};
	class ItemKeyBlue2423: ItemKeyBlue {
		keyid = 7423;
	};
	class ItemKeyBlue2424: ItemKeyBlue {
		keyid = 7424;
	};
	class ItemKeyBlue2425: ItemKeyBlue {
		keyid = 7425;
	};
	class ItemKeyBlue2426: ItemKeyBlue {
		keyid = 7426;
	};
	class ItemKeyBlue2427: ItemKeyBlue {
		keyid = 7427;
	};
	class ItemKeyBlue2428: ItemKeyBlue {
		keyid = 7428;
	};
	class ItemKeyBlue2429: ItemKeyBlue {
		keyid = 7429;
	};
	class ItemKeyBlue2430: ItemKeyBlue {
		keyid = 7430;
	};
	class ItemKeyBlue2431: ItemKeyBlue {
		keyid = 7431;
	};
	class ItemKeyBlue2432: ItemKeyBlue {
		keyid = 7432;
	};
	class ItemKeyBlue2433: ItemKeyBlue {
		keyid = 7433;
	};
	class ItemKeyBlue2434: ItemKeyBlue {
		keyid = 7434;
	};
	class ItemKeyBlue2435: ItemKeyBlue {
		keyid = 7435;
	};
	class ItemKeyBlue2436: ItemKeyBlue {
		keyid = 7436;
	};
	class ItemKeyBlue2437: ItemKeyBlue {
		keyid = 7437;
	};
	class ItemKeyBlue2438: ItemKeyBlue {
		keyid = 7438;
	};
	class ItemKeyBlue2439: ItemKeyBlue {
		keyid = 7439;
	};
	class ItemKeyBlue2440: ItemKeyBlue {
		keyid = 7440;
	};
	class ItemKeyBlue2441: ItemKeyBlue {
		keyid = 7441;
	};
	class ItemKeyBlue2442: ItemKeyBlue {
		keyid = 7442;
	};
	class ItemKeyBlue2443: ItemKeyBlue {
		keyid = 7443;
	};
	class ItemKeyBlue2444: ItemKeyBlue {
		keyid = 7444;
	};
	class ItemKeyBlue2445: ItemKeyBlue {
		keyid = 7445;
	};
	class ItemKeyBlue2446: ItemKeyBlue {
		keyid = 7446;
	};
	class ItemKeyBlue2447: ItemKeyBlue {
		keyid = 7447;
	};
	class ItemKeyBlue2448: ItemKeyBlue {
		keyid = 7448;
	};
	class ItemKeyBlue2449: ItemKeyBlue {
		keyid = 7449;
	};
	class ItemKeyBlue2450: ItemKeyBlue {
		keyid = 7450;
	};
	class ItemKeyBlue2451: ItemKeyBlue {
		keyid = 7451;
	};
	class ItemKeyBlue2452: ItemKeyBlue {
		keyid = 7452;
	};
	class ItemKeyBlue2453: ItemKeyBlue {
		keyid = 7453;
	};
	class ItemKeyBlue2454: ItemKeyBlue {
		keyid = 7454;
	};
	class ItemKeyBlue2455: ItemKeyBlue {
		keyid = 7455;
	};
	class ItemKeyBlue2456: ItemKeyBlue {
		keyid = 7456;
	};
	class ItemKeyBlue2457: ItemKeyBlue {
		keyid = 7457;
	};
	class ItemKeyBlue2458: ItemKeyBlue {
		keyid = 7458;
	};
	class ItemKeyBlue2459: ItemKeyBlue {
		keyid = 7459;
	};
	class ItemKeyBlue2460: ItemKeyBlue {
		keyid = 7460;
	};
	class ItemKeyBlue2461: ItemKeyBlue {
		keyid = 7461;
	};
	class ItemKeyBlue2462: ItemKeyBlue {
		keyid = 7462;
	};
	class ItemKeyBlue2463: ItemKeyBlue {
		keyid = 7463;
	};
	class ItemKeyBlue2464: ItemKeyBlue {
		keyid = 7464;
	};
	class ItemKeyBlue2465: ItemKeyBlue {
		keyid = 7465;
	};
	class ItemKeyBlue2466: ItemKeyBlue {
		keyid = 7466;
	};
	class ItemKeyBlue2467: ItemKeyBlue {
		keyid = 7467;
	};
	class ItemKeyBlue2468: ItemKeyBlue {
		keyid = 7468;
	};
	class ItemKeyBlue2469: ItemKeyBlue {
		keyid = 7469;
	};
	class ItemKeyBlue2470: ItemKeyBlue {
		keyid = 7470;
	};
	class ItemKeyBlue2471: ItemKeyBlue {
		keyid = 7471;
	};
	class ItemKeyBlue2472: ItemKeyBlue {
		keyid = 7472;
	};
	class ItemKeyBlue2473: ItemKeyBlue {
		keyid = 7473;
	};
	class ItemKeyBlue2474: ItemKeyBlue {
		keyid = 7474;
	};
	class ItemKeyBlue2475: ItemKeyBlue {
		keyid = 7475;
	};
	class ItemKeyBlue2476: ItemKeyBlue {
		keyid = 7476;
	};
	class ItemKeyBlue2477: ItemKeyBlue {
		keyid = 7477;
	};
	class ItemKeyBlue2478: ItemKeyBlue {
		keyid = 7478;
	};
	class ItemKeyBlue2479: ItemKeyBlue {
		keyid = 7479;
	};
	class ItemKeyBlue2480: ItemKeyBlue {
		keyid = 7480;
	};
	class ItemKeyBlue2481: ItemKeyBlue {
		keyid = 7481;
	};
	class ItemKeyBlue2482: ItemKeyBlue {
		keyid = 7482;
	};
	class ItemKeyBlue2483: ItemKeyBlue {
		keyid = 7483;
	};
	class ItemKeyBlue2484: ItemKeyBlue {
		keyid = 7484;
	};
	class ItemKeyBlue2485: ItemKeyBlue {
		keyid = 7485;
	};
	class ItemKeyBlue2486: ItemKeyBlue {
		keyid = 7486;
	};
	class ItemKeyBlue2487: ItemKeyBlue {
		keyid = 7487;
	};
	class ItemKeyBlue2488: ItemKeyBlue {
		keyid = 7488;
	};
	class ItemKeyBlue2489: ItemKeyBlue {
		keyid = 7489;
	};
	class ItemKeyBlue2490: ItemKeyBlue {
		keyid = 7490;
	};
	class ItemKeyBlue2491: ItemKeyBlue {
		keyid = 7491;
	};
	class ItemKeyBlue2492: ItemKeyBlue {
		keyid = 7492;
	};
	class ItemKeyBlue2493: ItemKeyBlue {
		keyid = 7493;
	};
	class ItemKeyBlue2494: ItemKeyBlue {
		keyid = 7494;
	};
	class ItemKeyBlue2495: ItemKeyBlue {
		keyid = 7495;
	};
	class ItemKeyBlue2496: ItemKeyBlue {
		keyid = 7496;
	};
	class ItemKeyBlue2497: ItemKeyBlue {
		keyid = 7497;
	};
	class ItemKeyBlue2498: ItemKeyBlue {
		keyid = 7498;
	};
	class ItemKeyBlue2499: ItemKeyBlue {
		keyid = 7499;
	};
	class ItemKeyBlue2500: ItemKeyBlue {
		keyid = 7500;
	};

	// Yellow
	class ItemKeyYellow1: ItemKeyYellow {
		keyid = 7501;
	};
	class ItemKeyYellow2: ItemKeyYellow {
		keyid = 7502;
	};
	class ItemKeyYellow3: ItemKeyYellow {
		keyid = 7503;
	};
	class ItemKeyYellow4: ItemKeyYellow {
		keyid = 7504;
	};
	class ItemKeyYellow5: ItemKeyYellow {
		keyid = 7505;
	};
	class ItemKeyYellow6: ItemKeyYellow {
		keyid = 7506;
	};
	class ItemKeyYellow7: ItemKeyYellow {
		keyid = 7507;
	};
	class ItemKeyYellow8: ItemKeyYellow {
		keyid = 7508;
	};
	class ItemKeyYellow9: ItemKeyYellow {
		keyid = 7509;
	};
	class ItemKeyYellow10: ItemKeyYellow {
		keyid = 7510;
	};
	class ItemKeyYellow11: ItemKeyYellow {
		keyid = 7511;
	};
	class ItemKeyYellow12: ItemKeyYellow {
		keyid = 7512;
	};
	class ItemKeyYellow13: ItemKeyYellow {
		keyid = 7513;
	};
	class ItemKeyYellow14: ItemKeyYellow {
		keyid = 7514;
	};
	class ItemKeyYellow15: ItemKeyYellow {
		keyid = 7515;
	};
	class ItemKeyYellow16: ItemKeyYellow {
		keyid = 7516;
	};
	class ItemKeyYellow17: ItemKeyYellow {
		keyid = 7517;
	};
	class ItemKeyYellow18: ItemKeyYellow {
		keyid = 7518;
	};
	class ItemKeyYellow19: ItemKeyYellow {
		keyid = 7519;
	};
	class ItemKeyYellow20: ItemKeyYellow {
		keyid = 7520;
	};
	class ItemKeyYellow21: ItemKeyYellow {
		keyid = 7521;
	};
	class ItemKeyYellow22: ItemKeyYellow {
		keyid = 7522;
	};
	class ItemKeyYellow23: ItemKeyYellow {
		keyid = 7523;
	};
	class ItemKeyYellow24: ItemKeyYellow {
		keyid = 7524;
	};
	class ItemKeyYellow25: ItemKeyYellow {
		keyid = 7525;
	};
	class ItemKeyYellow26: ItemKeyYellow {
		keyid = 7526;
	};
	class ItemKeyYellow27: ItemKeyYellow {
		keyid = 7527;
	};
	class ItemKeyYellow28: ItemKeyYellow {
		keyid = 7528;
	};
	class ItemKeyYellow29: ItemKeyYellow {
		keyid = 7529;
	};
	class ItemKeyYellow30: ItemKeyYellow {
		keyid = 7530;
	};
	class ItemKeyYellow31: ItemKeyYellow {
		keyid = 7531;
	};
	class ItemKeyYellow32: ItemKeyYellow {
		keyid = 7532;
	};
	class ItemKeyYellow33: ItemKeyYellow {
		keyid = 7533;
	};
	class ItemKeyYellow34: ItemKeyYellow {
		keyid = 7534;
	};
	class ItemKeyYellow35: ItemKeyYellow {
		keyid = 7535;
	};
	class ItemKeyYellow36: ItemKeyYellow {
		keyid = 7536;
	};
	class ItemKeyYellow37: ItemKeyYellow {
		keyid = 7537;
	};
	class ItemKeyYellow38: ItemKeyYellow {
		keyid = 7538;
	};
	class ItemKeyYellow39: ItemKeyYellow {
		keyid = 7539;
	};
	class ItemKeyYellow40: ItemKeyYellow {
		keyid = 7540;
	};
	class ItemKeyYellow41: ItemKeyYellow {
		keyid = 7541;
	};
	class ItemKeyYellow42: ItemKeyYellow {
		keyid = 7542;
	};
	class ItemKeyYellow43: ItemKeyYellow {
		keyid = 7543;
	};
	class ItemKeyYellow44: ItemKeyYellow {
		keyid = 7544;
	};
	class ItemKeyYellow45: ItemKeyYellow {
		keyid = 7545;
	};
	class ItemKeyYellow46: ItemKeyYellow {
		keyid = 7546;
	};
	class ItemKeyYellow47: ItemKeyYellow {
		keyid = 7547;
	};
	class ItemKeyYellow48: ItemKeyYellow {
		keyid = 7548;
	};
	class ItemKeyYellow49: ItemKeyYellow {
		keyid = 7549;
	};
	class ItemKeyYellow50: ItemKeyYellow {
		keyid = 7550;
	};
	class ItemKeyYellow51: ItemKeyYellow {
		keyid = 7551;
	};
	class ItemKeyYellow52: ItemKeyYellow {
		keyid = 7552;
	};
	class ItemKeyYellow53: ItemKeyYellow {
		keyid = 7553;
	};
	class ItemKeyYellow54: ItemKeyYellow {
		keyid = 7554;
	};
	class ItemKeyYellow55: ItemKeyYellow {
		keyid = 7555;
	};
	class ItemKeyYellow56: ItemKeyYellow {
		keyid = 7556;
	};
	class ItemKeyYellow57: ItemKeyYellow {
		keyid = 7557;
	};
	class ItemKeyYellow58: ItemKeyYellow {
		keyid = 7558;
	};
	class ItemKeyYellow59: ItemKeyYellow {
		keyid = 7559;
	};
	class ItemKeyYellow60: ItemKeyYellow {
		keyid = 7560;
	};
	class ItemKeyYellow61: ItemKeyYellow {
		keyid = 7561;
	};
	class ItemKeyYellow62: ItemKeyYellow {
		keyid = 7562;
	};
	class ItemKeyYellow63: ItemKeyYellow {
		keyid = 7563;
	};
	class ItemKeyYellow64: ItemKeyYellow {
		keyid = 7564;
	};
	class ItemKeyYellow65: ItemKeyYellow {
		keyid = 7565;
	};
	class ItemKeyYellow66: ItemKeyYellow {
		keyid = 7566;
	};
	class ItemKeyYellow67: ItemKeyYellow {
		keyid = 7567;
	};
	class ItemKeyYellow68: ItemKeyYellow {
		keyid = 7568;
	};
	class ItemKeyYellow69: ItemKeyYellow {
		keyid = 7569;
	};
	class ItemKeyYellow70: ItemKeyYellow {
		keyid = 7570;
	};
	class ItemKeyYellow71: ItemKeyYellow {
		keyid = 7571;
	};
	class ItemKeyYellow72: ItemKeyYellow {
		keyid = 7572;
	};
	class ItemKeyYellow73: ItemKeyYellow {
		keyid = 7573;
	};
	class ItemKeyYellow74: ItemKeyYellow {
		keyid = 7574;
	};
	class ItemKeyYellow75: ItemKeyYellow {
		keyid = 7575;
	};
	class ItemKeyYellow76: ItemKeyYellow {
		keyid = 7576;
	};
	class ItemKeyYellow77: ItemKeyYellow {
		keyid = 7577;
	};
	class ItemKeyYellow78: ItemKeyYellow {
		keyid = 7578;
	};
	class ItemKeyYellow79: ItemKeyYellow {
		keyid = 7579;
	};
	class ItemKeyYellow80: ItemKeyYellow {
		keyid = 7580;
	};
	class ItemKeyYellow81: ItemKeyYellow {
		keyid = 7581;
	};
	class ItemKeyYellow82: ItemKeyYellow {
		keyid = 7582;
	};
	class ItemKeyYellow83: ItemKeyYellow {
		keyid = 7583;
	};
	class ItemKeyYellow84: ItemKeyYellow {
		keyid = 7584;
	};
	class ItemKeyYellow85: ItemKeyYellow {
		keyid = 7585;
	};
	class ItemKeyYellow86: ItemKeyYellow {
		keyid = 7586;
	};
	class ItemKeyYellow87: ItemKeyYellow {
		keyid = 7587;
	};
	class ItemKeyYellow88: ItemKeyYellow {
		keyid = 7588;
	};
	class ItemKeyYellow89: ItemKeyYellow {
		keyid = 7589;
	};
	class ItemKeyYellow90: ItemKeyYellow {
		keyid = 7590;
	};
	class ItemKeyYellow91: ItemKeyYellow {
		keyid = 7591;
	};
	class ItemKeyYellow92: ItemKeyYellow {
		keyid = 7592;
	};
	class ItemKeyYellow93: ItemKeyYellow {
		keyid = 7593;
	};
	class ItemKeyYellow94: ItemKeyYellow {
		keyid = 7594;
	};
	class ItemKeyYellow95: ItemKeyYellow {
		keyid = 7595;
	};
	class ItemKeyYellow96: ItemKeyYellow {
		keyid = 7596;
	};
	class ItemKeyYellow97: ItemKeyYellow {
		keyid = 7597;
	};
	class ItemKeyYellow98: ItemKeyYellow {
		keyid = 7598;
	};
	class ItemKeyYellow99: ItemKeyYellow {
		keyid = 7599;
	};
	class ItemKeyYellow100: ItemKeyYellow {
		keyid = 7600;
	};
	class ItemKeyYellow101: ItemKeyYellow {
		keyid = 7601;
	};
	class ItemKeyYellow102: ItemKeyYellow {
		keyid = 7602;
	};
	class ItemKeyYellow103: ItemKeyYellow {
		keyid = 7603;
	};
	class ItemKeyYellow104: ItemKeyYellow {
		keyid = 7604;
	};
	class ItemKeyYellow105: ItemKeyYellow {
		keyid = 7605;
	};
	class ItemKeyYellow106: ItemKeyYellow {
		keyid = 7606;
	};
	class ItemKeyYellow107: ItemKeyYellow {
		keyid = 7607;
	};
	class ItemKeyYellow108: ItemKeyYellow {
		keyid = 7608;
	};
	class ItemKeyYellow109: ItemKeyYellow {
		keyid = 7609;
	};
	class ItemKeyYellow110: ItemKeyYellow {
		keyid = 7610;
	};
	class ItemKeyYellow111: ItemKeyYellow {
		keyid = 7611;
	};
	class ItemKeyYellow112: ItemKeyYellow {
		keyid = 7612;
	};
	class ItemKeyYellow113: ItemKeyYellow {
		keyid = 7613;
	};
	class ItemKeyYellow114: ItemKeyYellow {
		keyid = 7614;
	};
	class ItemKeyYellow115: ItemKeyYellow {
		keyid = 7615;
	};
	class ItemKeyYellow116: ItemKeyYellow {
		keyid = 7616;
	};
	class ItemKeyYellow117: ItemKeyYellow {
		keyid = 7617;
	};
	class ItemKeyYellow118: ItemKeyYellow {
		keyid = 7618;
	};
	class ItemKeyYellow119: ItemKeyYellow {
		keyid = 7619;
	};
	class ItemKeyYellow120: ItemKeyYellow {
		keyid = 7620;
	};
	class ItemKeyYellow121: ItemKeyYellow {
		keyid = 7621;
	};
	class ItemKeyYellow122: ItemKeyYellow {
		keyid = 7622;
	};
	class ItemKeyYellow123: ItemKeyYellow {
		keyid = 7623;
	};
	class ItemKeyYellow124: ItemKeyYellow {
		keyid = 7624;
	};
	class ItemKeyYellow125: ItemKeyYellow {
		keyid = 7625;
	};
	class ItemKeyYellow126: ItemKeyYellow {
		keyid = 7626;
	};
	class ItemKeyYellow127: ItemKeyYellow {
		keyid = 7627;
	};
	class ItemKeyYellow128: ItemKeyYellow {
		keyid = 7628;
	};
	class ItemKeyYellow129: ItemKeyYellow {
		keyid = 7629;
	};
	class ItemKeyYellow130: ItemKeyYellow {
		keyid = 7630;
	};
	class ItemKeyYellow131: ItemKeyYellow {
		keyid = 7631;
	};
	class ItemKeyYellow132: ItemKeyYellow {
		keyid = 7632;
	};
	class ItemKeyYellow133: ItemKeyYellow {
		keyid = 7633;
	};
	class ItemKeyYellow134: ItemKeyYellow {
		keyid = 7634;
	};
	class ItemKeyYellow135: ItemKeyYellow {
		keyid = 7635;
	};
	class ItemKeyYellow136: ItemKeyYellow {
		keyid = 7636;
	};
	class ItemKeyYellow137: ItemKeyYellow {
		keyid = 7637;
	};
	class ItemKeyYellow138: ItemKeyYellow {
		keyid = 7638;
	};
	class ItemKeyYellow139: ItemKeyYellow {
		keyid = 7639;
	};
	class ItemKeyYellow140: ItemKeyYellow {
		keyid = 7640;
	};
	class ItemKeyYellow141: ItemKeyYellow {
		keyid = 7641;
	};
	class ItemKeyYellow142: ItemKeyYellow {
		keyid = 7642;
	};
	class ItemKeyYellow143: ItemKeyYellow {
		keyid = 7643;
	};
	class ItemKeyYellow144: ItemKeyYellow {
		keyid = 7644;
	};
	class ItemKeyYellow145: ItemKeyYellow {
		keyid = 7645;
	};
	class ItemKeyYellow146: ItemKeyYellow {
		keyid = 7646;
	};
	class ItemKeyYellow147: ItemKeyYellow {
		keyid = 7647;
	};
	class ItemKeyYellow148: ItemKeyYellow {
		keyid = 7648;
	};
	class ItemKeyYellow149: ItemKeyYellow {
		keyid = 7649;
	};
	class ItemKeyYellow150: ItemKeyYellow {
		keyid = 7650;
	};
	class ItemKeyYellow151: ItemKeyYellow {
		keyid = 7651;
	};
	class ItemKeyYellow152: ItemKeyYellow {
		keyid = 7652;
	};
	class ItemKeyYellow153: ItemKeyYellow {
		keyid = 7653;
	};
	class ItemKeyYellow154: ItemKeyYellow {
		keyid = 7654;
	};
	class ItemKeyYellow155: ItemKeyYellow {
		keyid = 7655;
	};
	class ItemKeyYellow156: ItemKeyYellow {
		keyid = 7656;
	};
	class ItemKeyYellow157: ItemKeyYellow {
		keyid = 7657;
	};
	class ItemKeyYellow158: ItemKeyYellow {
		keyid = 7658;
	};
	class ItemKeyYellow159: ItemKeyYellow {
		keyid = 7659;
	};
	class ItemKeyYellow160: ItemKeyYellow {
		keyid = 7660;
	};
	class ItemKeyYellow161: ItemKeyYellow {
		keyid = 7661;
	};
	class ItemKeyYellow162: ItemKeyYellow {
		keyid = 7662;
	};
	class ItemKeyYellow163: ItemKeyYellow {
		keyid = 7663;
	};
	class ItemKeyYellow164: ItemKeyYellow {
		keyid = 7664;
	};
	class ItemKeyYellow165: ItemKeyYellow {
		keyid = 7665;
	};
	class ItemKeyYellow166: ItemKeyYellow {
		keyid = 7666;
	};
	class ItemKeyYellow167: ItemKeyYellow {
		keyid = 7667;
	};
	class ItemKeyYellow168: ItemKeyYellow {
		keyid = 7668;
	};
	class ItemKeyYellow169: ItemKeyYellow {
		keyid = 7669;
	};
	class ItemKeyYellow170: ItemKeyYellow {
		keyid = 7670;
	};
	class ItemKeyYellow171: ItemKeyYellow {
		keyid = 7671;
	};
	class ItemKeyYellow172: ItemKeyYellow {
		keyid = 7672;
	};
	class ItemKeyYellow173: ItemKeyYellow {
		keyid = 7673;
	};
	class ItemKeyYellow174: ItemKeyYellow {
		keyid = 7674;
	};
	class ItemKeyYellow175: ItemKeyYellow {
		keyid = 7675;
	};
	class ItemKeyYellow176: ItemKeyYellow {
		keyid = 7676;
	};
	class ItemKeyYellow177: ItemKeyYellow {
		keyid = 7677;
	};
	class ItemKeyYellow178: ItemKeyYellow {
		keyid = 7678;
	};
	class ItemKeyYellow179: ItemKeyYellow {
		keyid = 7679;
	};
	class ItemKeyYellow180: ItemKeyYellow {
		keyid = 7680;
	};
	class ItemKeyYellow181: ItemKeyYellow {
		keyid = 7681;
	};
	class ItemKeyYellow182: ItemKeyYellow {
		keyid = 7682;
	};
	class ItemKeyYellow183: ItemKeyYellow {
		keyid = 7683;
	};
	class ItemKeyYellow184: ItemKeyYellow {
		keyid = 7684;
	};
	class ItemKeyYellow185: ItemKeyYellow {
		keyid = 7685;
	};
	class ItemKeyYellow186: ItemKeyYellow {
		keyid = 7686;
	};
	class ItemKeyYellow187: ItemKeyYellow {
		keyid = 7687;
	};
	class ItemKeyYellow188: ItemKeyYellow {
		keyid = 7688;
	};
	class ItemKeyYellow189: ItemKeyYellow {
		keyid = 7689;
	};
	class ItemKeyYellow190: ItemKeyYellow {
		keyid = 7690;
	};
	class ItemKeyYellow191: ItemKeyYellow {
		keyid = 7691;
	};
	class ItemKeyYellow192: ItemKeyYellow {
		keyid = 7692;
	};
	class ItemKeyYellow193: ItemKeyYellow {
		keyid = 7693;
	};
	class ItemKeyYellow194: ItemKeyYellow {
		keyid = 7694;
	};
	class ItemKeyYellow195: ItemKeyYellow {
		keyid = 7695;
	};
	class ItemKeyYellow196: ItemKeyYellow {
		keyid = 7696;
	};
	class ItemKeyYellow197: ItemKeyYellow {
		keyid = 7697;
	};
	class ItemKeyYellow198: ItemKeyYellow {
		keyid = 7698;
	};
	class ItemKeyYellow199: ItemKeyYellow {
		keyid = 7699;
	};
	class ItemKeyYellow200: ItemKeyYellow {
		keyid = 7700;
	};
	class ItemKeyYellow201: ItemKeyYellow {
		keyid = 7701;
	};
	class ItemKeyYellow202: ItemKeyYellow {
		keyid = 7702;
	};
	class ItemKeyYellow203: ItemKeyYellow {
		keyid = 7703;
	};
	class ItemKeyYellow204: ItemKeyYellow {
		keyid = 7704;
	};
	class ItemKeyYellow205: ItemKeyYellow {
		keyid = 7705;
	};
	class ItemKeyYellow206: ItemKeyYellow {
		keyid = 7706;
	};
	class ItemKeyYellow207: ItemKeyYellow {
		keyid = 7707;
	};
	class ItemKeyYellow208: ItemKeyYellow {
		keyid = 7708;
	};
	class ItemKeyYellow209: ItemKeyYellow {
		keyid = 7709;
	};
	class ItemKeyYellow210: ItemKeyYellow {
		keyid = 7710;
	};
	class ItemKeyYellow211: ItemKeyYellow {
		keyid = 7711;
	};
	class ItemKeyYellow212: ItemKeyYellow {
		keyid = 7712;
	};
	class ItemKeyYellow213: ItemKeyYellow {
		keyid = 7713;
	};
	class ItemKeyYellow214: ItemKeyYellow {
		keyid = 7714;
	};
	class ItemKeyYellow215: ItemKeyYellow {
		keyid = 7715;
	};
	class ItemKeyYellow216: ItemKeyYellow {
		keyid = 7716;
	};
	class ItemKeyYellow217: ItemKeyYellow {
		keyid = 7717;
	};
	class ItemKeyYellow218: ItemKeyYellow {
		keyid = 7718;
	};
	class ItemKeyYellow219: ItemKeyYellow {
		keyid = 7719;
	};
	class ItemKeyYellow220: ItemKeyYellow {
		keyid = 7720;
	};
	class ItemKeyYellow221: ItemKeyYellow {
		keyid = 7721;
	};
	class ItemKeyYellow222: ItemKeyYellow {
		keyid = 7722;
	};
	class ItemKeyYellow223: ItemKeyYellow {
		keyid = 7723;
	};
	class ItemKeyYellow224: ItemKeyYellow {
		keyid = 7724;
	};
	class ItemKeyYellow225: ItemKeyYellow {
		keyid = 7725;
	};
	class ItemKeyYellow226: ItemKeyYellow {
		keyid = 7726;
	};
	class ItemKeyYellow227: ItemKeyYellow {
		keyid = 7727;
	};
	class ItemKeyYellow228: ItemKeyYellow {
		keyid = 7728;
	};
	class ItemKeyYellow229: ItemKeyYellow {
		keyid = 7729;
	};
	class ItemKeyYellow230: ItemKeyYellow {
		keyid = 7730;
	};
	class ItemKeyYellow231: ItemKeyYellow {
		keyid = 7731;
	};
	class ItemKeyYellow232: ItemKeyYellow {
		keyid = 7732;
	};
	class ItemKeyYellow233: ItemKeyYellow {
		keyid = 7733;
	};
	class ItemKeyYellow234: ItemKeyYellow {
		keyid = 7734;
	};
	class ItemKeyYellow235: ItemKeyYellow {
		keyid = 7735;
	};
	class ItemKeyYellow236: ItemKeyYellow {
		keyid = 7736;
	};
	class ItemKeyYellow237: ItemKeyYellow {
		keyid = 7737;
	};
	class ItemKeyYellow238: ItemKeyYellow {
		keyid = 7738;
	};
	class ItemKeyYellow239: ItemKeyYellow {
		keyid = 7739;
	};
	class ItemKeyYellow240: ItemKeyYellow {
		keyid = 7740;
	};
	class ItemKeyYellow241: ItemKeyYellow {
		keyid = 7741;
	};
	class ItemKeyYellow242: ItemKeyYellow {
		keyid = 7742;
	};
	class ItemKeyYellow243: ItemKeyYellow {
		keyid = 7743;
	};
	class ItemKeyYellow244: ItemKeyYellow {
		keyid = 7744;
	};
	class ItemKeyYellow245: ItemKeyYellow {
		keyid = 7745;
	};
	class ItemKeyYellow246: ItemKeyYellow {
		keyid = 7746;
	};
	class ItemKeyYellow247: ItemKeyYellow {
		keyid = 7747;
	};
	class ItemKeyYellow248: ItemKeyYellow {
		keyid = 7748;
	};
	class ItemKeyYellow249: ItemKeyYellow {
		keyid = 7749;
	};
	class ItemKeyYellow250: ItemKeyYellow {
		keyid = 7750;
	};
	class ItemKeyYellow251: ItemKeyYellow {
		keyid = 7751;
	};
	class ItemKeyYellow252: ItemKeyYellow {
		keyid = 7752;
	};
	class ItemKeyYellow253: ItemKeyYellow {
		keyid = 7753;
	};
	class ItemKeyYellow254: ItemKeyYellow {
		keyid = 7754;
	};
	class ItemKeyYellow255: ItemKeyYellow {
		keyid = 7755;
	};
	class ItemKeyYellow256: ItemKeyYellow {
		keyid = 7756;
	};
	class ItemKeyYellow257: ItemKeyYellow {
		keyid = 7757;
	};
	class ItemKeyYellow258: ItemKeyYellow {
		keyid = 7758;
	};
	class ItemKeyYellow259: ItemKeyYellow {
		keyid = 7759;
	};
	class ItemKeyYellow260: ItemKeyYellow {
		keyid = 7760;
	};
	class ItemKeyYellow261: ItemKeyYellow {
		keyid = 7761;
	};
	class ItemKeyYellow262: ItemKeyYellow {
		keyid = 7762;
	};
	class ItemKeyYellow263: ItemKeyYellow {
		keyid = 7763;
	};
	class ItemKeyYellow264: ItemKeyYellow {
		keyid = 7764;
	};
	class ItemKeyYellow265: ItemKeyYellow {
		keyid = 7765;
	};
	class ItemKeyYellow266: ItemKeyYellow {
		keyid = 7766;
	};
	class ItemKeyYellow267: ItemKeyYellow {
		keyid = 7767;
	};
	class ItemKeyYellow268: ItemKeyYellow {
		keyid = 7768;
	};
	class ItemKeyYellow269: ItemKeyYellow {
		keyid = 7769;
	};
	class ItemKeyYellow270: ItemKeyYellow {
		keyid = 7770;
	};
	class ItemKeyYellow271: ItemKeyYellow {
		keyid = 7771;
	};
	class ItemKeyYellow272: ItemKeyYellow {
		keyid = 7772;
	};
	class ItemKeyYellow273: ItemKeyYellow {
		keyid = 7773;
	};
	class ItemKeyYellow274: ItemKeyYellow {
		keyid = 7774;
	};
	class ItemKeyYellow275: ItemKeyYellow {
		keyid = 7775;
	};
	class ItemKeyYellow276: ItemKeyYellow {
		keyid = 7776;
	};
	class ItemKeyYellow277: ItemKeyYellow {
		keyid = 7777;
	};
	class ItemKeyYellow278: ItemKeyYellow {
		keyid = 7778;
	};
	class ItemKeyYellow279: ItemKeyYellow {
		keyid = 7779;
	};
	class ItemKeyYellow280: ItemKeyYellow {
		keyid = 7780;
	};
	class ItemKeyYellow281: ItemKeyYellow {
		keyid = 7781;
	};
	class ItemKeyYellow282: ItemKeyYellow {
		keyid = 7782;
	};
	class ItemKeyYellow283: ItemKeyYellow {
		keyid = 7783;
	};
	class ItemKeyYellow284: ItemKeyYellow {
		keyid = 7784;
	};
	class ItemKeyYellow285: ItemKeyYellow {
		keyid = 7785;
	};
	class ItemKeyYellow286: ItemKeyYellow {
		keyid = 7786;
	};
	class ItemKeyYellow287: ItemKeyYellow {
		keyid = 7787;
	};
	class ItemKeyYellow288: ItemKeyYellow {
		keyid = 7788;
	};
	class ItemKeyYellow289: ItemKeyYellow {
		keyid = 7789;
	};
	class ItemKeyYellow290: ItemKeyYellow {
		keyid = 7790;
	};
	class ItemKeyYellow291: ItemKeyYellow {
		keyid = 7791;
	};
	class ItemKeyYellow292: ItemKeyYellow {
		keyid = 7792;
	};
	class ItemKeyYellow293: ItemKeyYellow {
		keyid = 7793;
	};
	class ItemKeyYellow294: ItemKeyYellow {
		keyid = 7794;
	};
	class ItemKeyYellow295: ItemKeyYellow {
		keyid = 7795;
	};
	class ItemKeyYellow296: ItemKeyYellow {
		keyid = 7796;
	};
	class ItemKeyYellow297: ItemKeyYellow {
		keyid = 7797;
	};
	class ItemKeyYellow298: ItemKeyYellow {
		keyid = 7798;
	};
	class ItemKeyYellow299: ItemKeyYellow {
		keyid = 7799;
	};
	class ItemKeyYellow300: ItemKeyYellow {
		keyid = 7800;
	};
	class ItemKeyYellow301: ItemKeyYellow {
		keyid = 7801;
	};
	class ItemKeyYellow302: ItemKeyYellow {
		keyid = 7802;
	};
	class ItemKeyYellow303: ItemKeyYellow {
		keyid = 7803;
	};
	class ItemKeyYellow304: ItemKeyYellow {
		keyid = 7804;
	};
	class ItemKeyYellow305: ItemKeyYellow {
		keyid = 7805;
	};
	class ItemKeyYellow306: ItemKeyYellow {
		keyid = 7806;
	};
	class ItemKeyYellow307: ItemKeyYellow {
		keyid = 7807;
	};
	class ItemKeyYellow308: ItemKeyYellow {
		keyid = 7808;
	};
	class ItemKeyYellow309: ItemKeyYellow {
		keyid = 7809;
	};
	class ItemKeyYellow310: ItemKeyYellow {
		keyid = 7810;
	};
	class ItemKeyYellow311: ItemKeyYellow {
		keyid = 7811;
	};
	class ItemKeyYellow312: ItemKeyYellow {
		keyid = 7812;
	};
	class ItemKeyYellow313: ItemKeyYellow {
		keyid = 7813;
	};
	class ItemKeyYellow314: ItemKeyYellow {
		keyid = 7814;
	};
	class ItemKeyYellow315: ItemKeyYellow {
		keyid = 7815;
	};
	class ItemKeyYellow316: ItemKeyYellow {
		keyid = 7816;
	};
	class ItemKeyYellow317: ItemKeyYellow {
		keyid = 7817;
	};
	class ItemKeyYellow318: ItemKeyYellow {
		keyid = 7818;
	};
	class ItemKeyYellow319: ItemKeyYellow {
		keyid = 7819;
	};
	class ItemKeyYellow320: ItemKeyYellow {
		keyid = 7820;
	};
	class ItemKeyYellow321: ItemKeyYellow {
		keyid = 7821;
	};
	class ItemKeyYellow322: ItemKeyYellow {
		keyid = 7822;
	};
	class ItemKeyYellow323: ItemKeyYellow {
		keyid = 7823;
	};
	class ItemKeyYellow324: ItemKeyYellow {
		keyid = 7824;
	};
	class ItemKeyYellow325: ItemKeyYellow {
		keyid = 7825;
	};
	class ItemKeyYellow326: ItemKeyYellow {
		keyid = 7826;
	};
	class ItemKeyYellow327: ItemKeyYellow {
		keyid = 7827;
	};
	class ItemKeyYellow328: ItemKeyYellow {
		keyid = 7828;
	};
	class ItemKeyYellow329: ItemKeyYellow {
		keyid = 7829;
	};
	class ItemKeyYellow330: ItemKeyYellow {
		keyid = 7830;
	};
	class ItemKeyYellow331: ItemKeyYellow {
		keyid = 7831;
	};
	class ItemKeyYellow332: ItemKeyYellow {
		keyid = 7832;
	};
	class ItemKeyYellow333: ItemKeyYellow {
		keyid = 7833;
	};
	class ItemKeyYellow334: ItemKeyYellow {
		keyid = 7834;
	};
	class ItemKeyYellow335: ItemKeyYellow {
		keyid = 7835;
	};
	class ItemKeyYellow336: ItemKeyYellow {
		keyid = 7836;
	};
	class ItemKeyYellow337: ItemKeyYellow {
		keyid = 7837;
	};
	class ItemKeyYellow338: ItemKeyYellow {
		keyid = 7838;
	};
	class ItemKeyYellow339: ItemKeyYellow {
		keyid = 7839;
	};
	class ItemKeyYellow340: ItemKeyYellow {
		keyid = 7840;
	};
	class ItemKeyYellow341: ItemKeyYellow {
		keyid = 7841;
	};
	class ItemKeyYellow342: ItemKeyYellow {
		keyid = 7842;
	};
	class ItemKeyYellow343: ItemKeyYellow {
		keyid = 7843;
	};
	class ItemKeyYellow344: ItemKeyYellow {
		keyid = 7844;
	};
	class ItemKeyYellow345: ItemKeyYellow {
		keyid = 7845;
	};
	class ItemKeyYellow346: ItemKeyYellow {
		keyid = 7846;
	};
	class ItemKeyYellow347: ItemKeyYellow {
		keyid = 7847;
	};
	class ItemKeyYellow348: ItemKeyYellow {
		keyid = 7848;
	};
	class ItemKeyYellow349: ItemKeyYellow {
		keyid = 7849;
	};
	class ItemKeyYellow350: ItemKeyYellow {
		keyid = 7850;
	};
	class ItemKeyYellow351: ItemKeyYellow {
		keyid = 7851;
	};
	class ItemKeyYellow352: ItemKeyYellow {
		keyid = 7852;
	};
	class ItemKeyYellow353: ItemKeyYellow {
		keyid = 7853;
	};
	class ItemKeyYellow354: ItemKeyYellow {
		keyid = 7854;
	};
	class ItemKeyYellow355: ItemKeyYellow {
		keyid = 7855;
	};
	class ItemKeyYellow356: ItemKeyYellow {
		keyid = 7856;
	};
	class ItemKeyYellow357: ItemKeyYellow {
		keyid = 7857;
	};
	class ItemKeyYellow358: ItemKeyYellow {
		keyid = 7858;
	};
	class ItemKeyYellow359: ItemKeyYellow {
		keyid = 7859;
	};
	class ItemKeyYellow360: ItemKeyYellow {
		keyid = 7860;
	};
	class ItemKeyYellow361: ItemKeyYellow {
		keyid = 7861;
	};
	class ItemKeyYellow362: ItemKeyYellow {
		keyid = 7862;
	};
	class ItemKeyYellow363: ItemKeyYellow {
		keyid = 7863;
	};
	class ItemKeyYellow364: ItemKeyYellow {
		keyid = 7864;
	};
	class ItemKeyYellow365: ItemKeyYellow {
		keyid = 7865;
	};
	class ItemKeyYellow366: ItemKeyYellow {
		keyid = 7866;
	};
	class ItemKeyYellow367: ItemKeyYellow {
		keyid = 7867;
	};
	class ItemKeyYellow368: ItemKeyYellow {
		keyid = 7868;
	};
	class ItemKeyYellow369: ItemKeyYellow {
		keyid = 7869;
	};
	class ItemKeyYellow370: ItemKeyYellow {
		keyid = 7870;
	};
	class ItemKeyYellow371: ItemKeyYellow {
		keyid = 7871;
	};
	class ItemKeyYellow372: ItemKeyYellow {
		keyid = 7872;
	};
	class ItemKeyYellow373: ItemKeyYellow {
		keyid = 7873;
	};
	class ItemKeyYellow374: ItemKeyYellow {
		keyid = 7874;
	};
	class ItemKeyYellow375: ItemKeyYellow {
		keyid = 7875;
	};
	class ItemKeyYellow376: ItemKeyYellow {
		keyid = 7876;
	};
	class ItemKeyYellow377: ItemKeyYellow {
		keyid = 7877;
	};
	class ItemKeyYellow378: ItemKeyYellow {
		keyid = 7878;
	};
	class ItemKeyYellow379: ItemKeyYellow {
		keyid = 7879;
	};
	class ItemKeyYellow380: ItemKeyYellow {
		keyid = 7880;
	};
	class ItemKeyYellow381: ItemKeyYellow {
		keyid = 7881;
	};
	class ItemKeyYellow382: ItemKeyYellow {
		keyid = 7882;
	};
	class ItemKeyYellow383: ItemKeyYellow {
		keyid = 7883;
	};
	class ItemKeyYellow384: ItemKeyYellow {
		keyid = 7884;
	};
	class ItemKeyYellow385: ItemKeyYellow {
		keyid = 7885;
	};
	class ItemKeyYellow386: ItemKeyYellow {
		keyid = 7886;
	};
	class ItemKeyYellow387: ItemKeyYellow {
		keyid = 7887;
	};
	class ItemKeyYellow388: ItemKeyYellow {
		keyid = 7888;
	};
	class ItemKeyYellow389: ItemKeyYellow {
		keyid = 7889;
	};
	class ItemKeyYellow390: ItemKeyYellow {
		keyid = 7890;
	};
	class ItemKeyYellow391: ItemKeyYellow {
		keyid = 7891;
	};
	class ItemKeyYellow392: ItemKeyYellow {
		keyid = 7892;
	};
	class ItemKeyYellow393: ItemKeyYellow {
		keyid = 7893;
	};
	class ItemKeyYellow394: ItemKeyYellow {
		keyid = 7894;
	};
	class ItemKeyYellow395: ItemKeyYellow {
		keyid = 7895;
	};
	class ItemKeyYellow396: ItemKeyYellow {
		keyid = 7896;
	};
	class ItemKeyYellow397: ItemKeyYellow {
		keyid = 7897;
	};
	class ItemKeyYellow398: ItemKeyYellow {
		keyid = 7898;
	};
	class ItemKeyYellow399: ItemKeyYellow {
		keyid = 7899;
	};
	class ItemKeyYellow400: ItemKeyYellow {
		keyid = 7900;
	};
	class ItemKeyYellow401: ItemKeyYellow {
		keyid = 7901;
	};
	class ItemKeyYellow402: ItemKeyYellow {
		keyid = 7902;
	};
	class ItemKeyYellow403: ItemKeyYellow {
		keyid = 7903;
	};
	class ItemKeyYellow404: ItemKeyYellow {
		keyid = 7904;
	};
	class ItemKeyYellow405: ItemKeyYellow {
		keyid = 7905;
	};
	class ItemKeyYellow406: ItemKeyYellow {
		keyid = 7906;
	};
	class ItemKeyYellow407: ItemKeyYellow {
		keyid = 7907;
	};
	class ItemKeyYellow408: ItemKeyYellow {
		keyid = 7908;
	};
	class ItemKeyYellow409: ItemKeyYellow {
		keyid = 7909;
	};
	class ItemKeyYellow410: ItemKeyYellow {
		keyid = 7910;
	};
	class ItemKeyYellow411: ItemKeyYellow {
		keyid = 7911;
	};
	class ItemKeyYellow412: ItemKeyYellow {
		keyid = 7912;
	};
	class ItemKeyYellow413: ItemKeyYellow {
		keyid = 7913;
	};
	class ItemKeyYellow414: ItemKeyYellow {
		keyid = 7914;
	};
	class ItemKeyYellow415: ItemKeyYellow {
		keyid = 7915;
	};
	class ItemKeyYellow416: ItemKeyYellow {
		keyid = 7916;
	};
	class ItemKeyYellow417: ItemKeyYellow {
		keyid = 7917;
	};
	class ItemKeyYellow418: ItemKeyYellow {
		keyid = 7918;
	};
	class ItemKeyYellow419: ItemKeyYellow {
		keyid = 7919;
	};
	class ItemKeyYellow420: ItemKeyYellow {
		keyid = 7920;
	};
	class ItemKeyYellow421: ItemKeyYellow {
		keyid = 7921;
	};
	class ItemKeyYellow422: ItemKeyYellow {
		keyid = 7922;
	};
	class ItemKeyYellow423: ItemKeyYellow {
		keyid = 7923;
	};
	class ItemKeyYellow424: ItemKeyYellow {
		keyid = 7924;
	};
	class ItemKeyYellow425: ItemKeyYellow {
		keyid = 7925;
	};
	class ItemKeyYellow426: ItemKeyYellow {
		keyid = 7926;
	};
	class ItemKeyYellow427: ItemKeyYellow {
		keyid = 7927;
	};
	class ItemKeyYellow428: ItemKeyYellow {
		keyid = 7928;
	};
	class ItemKeyYellow429: ItemKeyYellow {
		keyid = 7929;
	};
	class ItemKeyYellow430: ItemKeyYellow {
		keyid = 7930;
	};
	class ItemKeyYellow431: ItemKeyYellow {
		keyid = 7931;
	};
	class ItemKeyYellow432: ItemKeyYellow {
		keyid = 7932;
	};
	class ItemKeyYellow433: ItemKeyYellow {
		keyid = 7933;
	};
	class ItemKeyYellow434: ItemKeyYellow {
		keyid = 7934;
	};
	class ItemKeyYellow435: ItemKeyYellow {
		keyid = 7935;
	};
	class ItemKeyYellow436: ItemKeyYellow {
		keyid = 7936;
	};
	class ItemKeyYellow437: ItemKeyYellow {
		keyid = 7937;
	};
	class ItemKeyYellow438: ItemKeyYellow {
		keyid = 7938;
	};
	class ItemKeyYellow439: ItemKeyYellow {
		keyid = 7939;
	};
	class ItemKeyYellow440: ItemKeyYellow {
		keyid = 7940;
	};
	class ItemKeyYellow441: ItemKeyYellow {
		keyid = 7941;
	};
	class ItemKeyYellow442: ItemKeyYellow {
		keyid = 7942;
	};
	class ItemKeyYellow443: ItemKeyYellow {
		keyid = 7943;
	};
	class ItemKeyYellow444: ItemKeyYellow {
		keyid = 7944;
	};
	class ItemKeyYellow445: ItemKeyYellow {
		keyid = 7945;
	};
	class ItemKeyYellow446: ItemKeyYellow {
		keyid = 7946;
	};
	class ItemKeyYellow447: ItemKeyYellow {
		keyid = 7947;
	};
	class ItemKeyYellow448: ItemKeyYellow {
		keyid = 7948;
	};
	class ItemKeyYellow449: ItemKeyYellow {
		keyid = 7949;
	};
	class ItemKeyYellow450: ItemKeyYellow {
		keyid = 7950;
	};
	class ItemKeyYellow451: ItemKeyYellow {
		keyid = 7951;
	};
	class ItemKeyYellow452: ItemKeyYellow {
		keyid = 7952;
	};
	class ItemKeyYellow453: ItemKeyYellow {
		keyid = 7953;
	};
	class ItemKeyYellow454: ItemKeyYellow {
		keyid = 7954;
	};
	class ItemKeyYellow455: ItemKeyYellow {
		keyid = 7955;
	};
	class ItemKeyYellow456: ItemKeyYellow {
		keyid = 7956;
	};
	class ItemKeyYellow457: ItemKeyYellow {
		keyid = 7957;
	};
	class ItemKeyYellow458: ItemKeyYellow {
		keyid = 7958;
	};
	class ItemKeyYellow459: ItemKeyYellow {
		keyid = 7959;
	};
	class ItemKeyYellow460: ItemKeyYellow {
		keyid = 7960;
	};
	class ItemKeyYellow461: ItemKeyYellow {
		keyid = 7961;
	};
	class ItemKeyYellow462: ItemKeyYellow {
		keyid = 7962;
	};
	class ItemKeyYellow463: ItemKeyYellow {
		keyid = 7963;
	};
	class ItemKeyYellow464: ItemKeyYellow {
		keyid = 7964;
	};
	class ItemKeyYellow465: ItemKeyYellow {
		keyid = 7965;
	};
	class ItemKeyYellow466: ItemKeyYellow {
		keyid = 7966;
	};
	class ItemKeyYellow467: ItemKeyYellow {
		keyid = 7967;
	};
	class ItemKeyYellow468: ItemKeyYellow {
		keyid = 7968;
	};
	class ItemKeyYellow469: ItemKeyYellow {
		keyid = 7969;
	};
	class ItemKeyYellow470: ItemKeyYellow {
		keyid = 7970;
	};
	class ItemKeyYellow471: ItemKeyYellow {
		keyid = 7971;
	};
	class ItemKeyYellow472: ItemKeyYellow {
		keyid = 7972;
	};
	class ItemKeyYellow473: ItemKeyYellow {
		keyid = 7973;
	};
	class ItemKeyYellow474: ItemKeyYellow {
		keyid = 7974;
	};
	class ItemKeyYellow475: ItemKeyYellow {
		keyid = 7975;
	};
	class ItemKeyYellow476: ItemKeyYellow {
		keyid = 7976;
	};
	class ItemKeyYellow477: ItemKeyYellow {
		keyid = 7977;
	};
	class ItemKeyYellow478: ItemKeyYellow {
		keyid = 7978;
	};
	class ItemKeyYellow479: ItemKeyYellow {
		keyid = 7979;
	};
	class ItemKeyYellow480: ItemKeyYellow {
		keyid = 7980;
	};
	class ItemKeyYellow481: ItemKeyYellow {
		keyid = 7981;
	};
	class ItemKeyYellow482: ItemKeyYellow {
		keyid = 7982;
	};
	class ItemKeyYellow483: ItemKeyYellow {
		keyid = 7983;
	};
	class ItemKeyYellow484: ItemKeyYellow {
		keyid = 7984;
	};
	class ItemKeyYellow485: ItemKeyYellow {
		keyid = 7985;
	};
	class ItemKeyYellow486: ItemKeyYellow {
		keyid = 7986;
	};
	class ItemKeyYellow487: ItemKeyYellow {
		keyid = 7987;
	};
	class ItemKeyYellow488: ItemKeyYellow {
		keyid = 7988;
	};
	class ItemKeyYellow489: ItemKeyYellow {
		keyid = 7989;
	};
	class ItemKeyYellow490: ItemKeyYellow {
		keyid = 7990;
	};
	class ItemKeyYellow491: ItemKeyYellow {
		keyid = 7991;
	};
	class ItemKeyYellow492: ItemKeyYellow {
		keyid = 7992;
	};
	class ItemKeyYellow493: ItemKeyYellow {
		keyid = 7993;
	};
	class ItemKeyYellow494: ItemKeyYellow {
		keyid = 7994;
	};
	class ItemKeyYellow495: ItemKeyYellow {
		keyid = 7995;
	};
	class ItemKeyYellow496: ItemKeyYellow {
		keyid = 7996;
	};
	class ItemKeyYellow497: ItemKeyYellow {
		keyid = 7997;
	};
	class ItemKeyYellow498: ItemKeyYellow {
		keyid = 7998;
	};
	class ItemKeyYellow499: ItemKeyYellow {
		keyid = 7999;
	};
	class ItemKeyYellow500: ItemKeyYellow {
		keyid = 8000;
	};
	class ItemKeyYellow501: ItemKeyYellow {
		keyid = 8001;
	};
	class ItemKeyYellow502: ItemKeyYellow {
		keyid = 8002;
	};
	class ItemKeyYellow503: ItemKeyYellow {
		keyid = 8003;
	};
	class ItemKeyYellow504: ItemKeyYellow {
		keyid = 8004;
	};
	class ItemKeyYellow505: ItemKeyYellow {
		keyid = 8005;
	};
	class ItemKeyYellow506: ItemKeyYellow {
		keyid = 8006;
	};
	class ItemKeyYellow507: ItemKeyYellow {
		keyid = 8007;
	};
	class ItemKeyYellow508: ItemKeyYellow {
		keyid = 8008;
	};
	class ItemKeyYellow509: ItemKeyYellow {
		keyid = 8009;
	};
	class ItemKeyYellow510: ItemKeyYellow {
		keyid = 8010;
	};
	class ItemKeyYellow511: ItemKeyYellow {
		keyid = 8011;
	};
	class ItemKeyYellow512: ItemKeyYellow {
		keyid = 8012;
	};
	class ItemKeyYellow513: ItemKeyYellow {
		keyid = 8013;
	};
	class ItemKeyYellow514: ItemKeyYellow {
		keyid = 8014;
	};
	class ItemKeyYellow515: ItemKeyYellow {
		keyid = 8015;
	};
	class ItemKeyYellow516: ItemKeyYellow {
		keyid = 8016;
	};
	class ItemKeyYellow517: ItemKeyYellow {
		keyid = 8017;
	};
	class ItemKeyYellow518: ItemKeyYellow {
		keyid = 8018;
	};
	class ItemKeyYellow519: ItemKeyYellow {
		keyid = 8019;
	};
	class ItemKeyYellow520: ItemKeyYellow {
		keyid = 8020;
	};
	class ItemKeyYellow521: ItemKeyYellow {
		keyid = 8021;
	};
	class ItemKeyYellow522: ItemKeyYellow {
		keyid = 8022;
	};
	class ItemKeyYellow523: ItemKeyYellow {
		keyid = 8023;
	};
	class ItemKeyYellow524: ItemKeyYellow {
		keyid = 8024;
	};
	class ItemKeyYellow525: ItemKeyYellow {
		keyid = 8025;
	};
	class ItemKeyYellow526: ItemKeyYellow {
		keyid = 8026;
	};
	class ItemKeyYellow527: ItemKeyYellow {
		keyid = 8027;
	};
	class ItemKeyYellow528: ItemKeyYellow {
		keyid = 8028;
	};
	class ItemKeyYellow529: ItemKeyYellow {
		keyid = 8029;
	};
	class ItemKeyYellow530: ItemKeyYellow {
		keyid = 8030;
	};
	class ItemKeyYellow531: ItemKeyYellow {
		keyid = 8031;
	};
	class ItemKeyYellow532: ItemKeyYellow {
		keyid = 8032;
	};
	class ItemKeyYellow533: ItemKeyYellow {
		keyid = 8033;
	};
	class ItemKeyYellow534: ItemKeyYellow {
		keyid = 8034;
	};
	class ItemKeyYellow535: ItemKeyYellow {
		keyid = 8035;
	};
	class ItemKeyYellow536: ItemKeyYellow {
		keyid = 8036;
	};
	class ItemKeyYellow537: ItemKeyYellow {
		keyid = 8037;
	};
	class ItemKeyYellow538: ItemKeyYellow {
		keyid = 8038;
	};
	class ItemKeyYellow539: ItemKeyYellow {
		keyid = 8039;
	};
	class ItemKeyYellow540: ItemKeyYellow {
		keyid = 8040;
	};
	class ItemKeyYellow541: ItemKeyYellow {
		keyid = 8041;
	};
	class ItemKeyYellow542: ItemKeyYellow {
		keyid = 8042;
	};
	class ItemKeyYellow543: ItemKeyYellow {
		keyid = 8043;
	};
	class ItemKeyYellow544: ItemKeyYellow {
		keyid = 8044;
	};
	class ItemKeyYellow545: ItemKeyYellow {
		keyid = 8045;
	};
	class ItemKeyYellow546: ItemKeyYellow {
		keyid = 8046;
	};
	class ItemKeyYellow547: ItemKeyYellow {
		keyid = 8047;
	};
	class ItemKeyYellow548: ItemKeyYellow {
		keyid = 8048;
	};
	class ItemKeyYellow549: ItemKeyYellow {
		keyid = 8049;
	};
	class ItemKeyYellow550: ItemKeyYellow {
		keyid = 8050;
	};
	class ItemKeyYellow551: ItemKeyYellow {
		keyid = 8051;
	};
	class ItemKeyYellow552: ItemKeyYellow {
		keyid = 8052;
	};
	class ItemKeyYellow553: ItemKeyYellow {
		keyid = 8053;
	};
	class ItemKeyYellow554: ItemKeyYellow {
		keyid = 8054;
	};
	class ItemKeyYellow555: ItemKeyYellow {
		keyid = 8055;
	};
	class ItemKeyYellow556: ItemKeyYellow {
		keyid = 8056;
	};
	class ItemKeyYellow557: ItemKeyYellow {
		keyid = 8057;
	};
	class ItemKeyYellow558: ItemKeyYellow {
		keyid = 8058;
	};
	class ItemKeyYellow559: ItemKeyYellow {
		keyid = 8059;
	};
	class ItemKeyYellow560: ItemKeyYellow {
		keyid = 8060;
	};
	class ItemKeyYellow561: ItemKeyYellow {
		keyid = 8061;
	};
	class ItemKeyYellow562: ItemKeyYellow {
		keyid = 8062;
	};
	class ItemKeyYellow563: ItemKeyYellow {
		keyid = 8063;
	};
	class ItemKeyYellow564: ItemKeyYellow {
		keyid = 8064;
	};
	class ItemKeyYellow565: ItemKeyYellow {
		keyid = 8065;
	};
	class ItemKeyYellow566: ItemKeyYellow {
		keyid = 8066;
	};
	class ItemKeyYellow567: ItemKeyYellow {
		keyid = 8067;
	};
	class ItemKeyYellow568: ItemKeyYellow {
		keyid = 8068;
	};
	class ItemKeyYellow569: ItemKeyYellow {
		keyid = 8069;
	};
	class ItemKeyYellow570: ItemKeyYellow {
		keyid = 8070;
	};
	class ItemKeyYellow571: ItemKeyYellow {
		keyid = 8071;
	};
	class ItemKeyYellow572: ItemKeyYellow {
		keyid = 8072;
	};
	class ItemKeyYellow573: ItemKeyYellow {
		keyid = 8073;
	};
	class ItemKeyYellow574: ItemKeyYellow {
		keyid = 8074;
	};
	class ItemKeyYellow575: ItemKeyYellow {
		keyid = 8075;
	};
	class ItemKeyYellow576: ItemKeyYellow {
		keyid = 8076;
	};
	class ItemKeyYellow577: ItemKeyYellow {
		keyid = 8077;
	};
	class ItemKeyYellow578: ItemKeyYellow {
		keyid = 8078;
	};
	class ItemKeyYellow579: ItemKeyYellow {
		keyid = 8079;
	};
	class ItemKeyYellow580: ItemKeyYellow {
		keyid = 8080;
	};
	class ItemKeyYellow581: ItemKeyYellow {
		keyid = 8081;
	};
	class ItemKeyYellow582: ItemKeyYellow {
		keyid = 8082;
	};
	class ItemKeyYellow583: ItemKeyYellow {
		keyid = 8083;
	};
	class ItemKeyYellow584: ItemKeyYellow {
		keyid = 8084;
	};
	class ItemKeyYellow585: ItemKeyYellow {
		keyid = 8085;
	};
	class ItemKeyYellow586: ItemKeyYellow {
		keyid = 8086;
	};
	class ItemKeyYellow587: ItemKeyYellow {
		keyid = 8087;
	};
	class ItemKeyYellow588: ItemKeyYellow {
		keyid = 8088;
	};
	class ItemKeyYellow589: ItemKeyYellow {
		keyid = 8089;
	};
	class ItemKeyYellow590: ItemKeyYellow {
		keyid = 8090;
	};
	class ItemKeyYellow591: ItemKeyYellow {
		keyid = 8091;
	};
	class ItemKeyYellow592: ItemKeyYellow {
		keyid = 8092;
	};
	class ItemKeyYellow593: ItemKeyYellow {
		keyid = 8093;
	};
	class ItemKeyYellow594: ItemKeyYellow {
		keyid = 8094;
	};
	class ItemKeyYellow595: ItemKeyYellow {
		keyid = 8095;
	};
	class ItemKeyYellow596: ItemKeyYellow {
		keyid = 8096;
	};
	class ItemKeyYellow597: ItemKeyYellow {
		keyid = 8097;
	};
	class ItemKeyYellow598: ItemKeyYellow {
		keyid = 8098;
	};
	class ItemKeyYellow599: ItemKeyYellow {
		keyid = 8099;
	};
	class ItemKeyYellow600: ItemKeyYellow {
		keyid = 8100;
	};
	class ItemKeyYellow601: ItemKeyYellow {
		keyid = 8101;
	};
	class ItemKeyYellow602: ItemKeyYellow {
		keyid = 8102;
	};
	class ItemKeyYellow603: ItemKeyYellow {
		keyid = 8103;
	};
	class ItemKeyYellow604: ItemKeyYellow {
		keyid = 8104;
	};
	class ItemKeyYellow605: ItemKeyYellow {
		keyid = 8105;
	};
	class ItemKeyYellow606: ItemKeyYellow {
		keyid = 8106;
	};
	class ItemKeyYellow607: ItemKeyYellow {
		keyid = 8107;
	};
	class ItemKeyYellow608: ItemKeyYellow {
		keyid = 8108;
	};
	class ItemKeyYellow609: ItemKeyYellow {
		keyid = 8109;
	};
	class ItemKeyYellow610: ItemKeyYellow {
		keyid = 8110;
	};
	class ItemKeyYellow611: ItemKeyYellow {
		keyid = 8111;
	};
	class ItemKeyYellow612: ItemKeyYellow {
		keyid = 8112;
	};
	class ItemKeyYellow613: ItemKeyYellow {
		keyid = 8113;
	};
	class ItemKeyYellow614: ItemKeyYellow {
		keyid = 8114;
	};
	class ItemKeyYellow615: ItemKeyYellow {
		keyid = 8115;
	};
	class ItemKeyYellow616: ItemKeyYellow {
		keyid = 8116;
	};
	class ItemKeyYellow617: ItemKeyYellow {
		keyid = 8117;
	};
	class ItemKeyYellow618: ItemKeyYellow {
		keyid = 8118;
	};
	class ItemKeyYellow619: ItemKeyYellow {
		keyid = 8119;
	};
	class ItemKeyYellow620: ItemKeyYellow {
		keyid = 8120;
	};
	class ItemKeyYellow621: ItemKeyYellow {
		keyid = 8121;
	};
	class ItemKeyYellow622: ItemKeyYellow {
		keyid = 8122;
	};
	class ItemKeyYellow623: ItemKeyYellow {
		keyid = 8123;
	};
	class ItemKeyYellow624: ItemKeyYellow {
		keyid = 8124;
	};
	class ItemKeyYellow625: ItemKeyYellow {
		keyid = 8125;
	};
	class ItemKeyYellow626: ItemKeyYellow {
		keyid = 8126;
	};
	class ItemKeyYellow627: ItemKeyYellow {
		keyid = 8127;
	};
	class ItemKeyYellow628: ItemKeyYellow {
		keyid = 8128;
	};
	class ItemKeyYellow629: ItemKeyYellow {
		keyid = 8129;
	};
	class ItemKeyYellow630: ItemKeyYellow {
		keyid = 8130;
	};
	class ItemKeyYellow631: ItemKeyYellow {
		keyid = 8131;
	};
	class ItemKeyYellow632: ItemKeyYellow {
		keyid = 8132;
	};
	class ItemKeyYellow633: ItemKeyYellow {
		keyid = 8133;
	};
	class ItemKeyYellow634: ItemKeyYellow {
		keyid = 8134;
	};
	class ItemKeyYellow635: ItemKeyYellow {
		keyid = 8135;
	};
	class ItemKeyYellow636: ItemKeyYellow {
		keyid = 8136;
	};
	class ItemKeyYellow637: ItemKeyYellow {
		keyid = 8137;
	};
	class ItemKeyYellow638: ItemKeyYellow {
		keyid = 8138;
	};
	class ItemKeyYellow639: ItemKeyYellow {
		keyid = 8139;
	};
	class ItemKeyYellow640: ItemKeyYellow {
		keyid = 8140;
	};
	class ItemKeyYellow641: ItemKeyYellow {
		keyid = 8141;
	};
	class ItemKeyYellow642: ItemKeyYellow {
		keyid = 8142;
	};
	class ItemKeyYellow643: ItemKeyYellow {
		keyid = 8143;
	};
	class ItemKeyYellow644: ItemKeyYellow {
		keyid = 8144;
	};
	class ItemKeyYellow645: ItemKeyYellow {
		keyid = 8145;
	};
	class ItemKeyYellow646: ItemKeyYellow {
		keyid = 8146;
	};
	class ItemKeyYellow647: ItemKeyYellow {
		keyid = 8147;
	};
	class ItemKeyYellow648: ItemKeyYellow {
		keyid = 8148;
	};
	class ItemKeyYellow649: ItemKeyYellow {
		keyid = 8149;
	};
	class ItemKeyYellow650: ItemKeyYellow {
		keyid = 8150;
	};
	class ItemKeyYellow651: ItemKeyYellow {
		keyid = 8151;
	};
	class ItemKeyYellow652: ItemKeyYellow {
		keyid = 8152;
	};
	class ItemKeyYellow653: ItemKeyYellow {
		keyid = 8153;
	};
	class ItemKeyYellow654: ItemKeyYellow {
		keyid = 8154;
	};
	class ItemKeyYellow655: ItemKeyYellow {
		keyid = 8155;
	};
	class ItemKeyYellow656: ItemKeyYellow {
		keyid = 8156;
	};
	class ItemKeyYellow657: ItemKeyYellow {
		keyid = 8157;
	};
	class ItemKeyYellow658: ItemKeyYellow {
		keyid = 8158;
	};
	class ItemKeyYellow659: ItemKeyYellow {
		keyid = 8159;
	};
	class ItemKeyYellow660: ItemKeyYellow {
		keyid = 8160;
	};
	class ItemKeyYellow661: ItemKeyYellow {
		keyid = 8161;
	};
	class ItemKeyYellow662: ItemKeyYellow {
		keyid = 8162;
	};
	class ItemKeyYellow663: ItemKeyYellow {
		keyid = 8163;
	};
	class ItemKeyYellow664: ItemKeyYellow {
		keyid = 8164;
	};
	class ItemKeyYellow665: ItemKeyYellow {
		keyid = 8165;
	};
	class ItemKeyYellow666: ItemKeyYellow {
		keyid = 8166;
	};
	class ItemKeyYellow667: ItemKeyYellow {
		keyid = 8167;
	};
	class ItemKeyYellow668: ItemKeyYellow {
		keyid = 8168;
	};
	class ItemKeyYellow669: ItemKeyYellow {
		keyid = 8169;
	};
	class ItemKeyYellow670: ItemKeyYellow {
		keyid = 8170;
	};
	class ItemKeyYellow671: ItemKeyYellow {
		keyid = 8171;
	};
	class ItemKeyYellow672: ItemKeyYellow {
		keyid = 8172;
	};
	class ItemKeyYellow673: ItemKeyYellow {
		keyid = 8173;
	};
	class ItemKeyYellow674: ItemKeyYellow {
		keyid = 8174;
	};
	class ItemKeyYellow675: ItemKeyYellow {
		keyid = 8175;
	};
	class ItemKeyYellow676: ItemKeyYellow {
		keyid = 8176;
	};
	class ItemKeyYellow677: ItemKeyYellow {
		keyid = 8177;
	};
	class ItemKeyYellow678: ItemKeyYellow {
		keyid = 8178;
	};
	class ItemKeyYellow679: ItemKeyYellow {
		keyid = 8179;
	};
	class ItemKeyYellow680: ItemKeyYellow {
		keyid = 8180;
	};
	class ItemKeyYellow681: ItemKeyYellow {
		keyid = 8181;
	};
	class ItemKeyYellow682: ItemKeyYellow {
		keyid = 8182;
	};
	class ItemKeyYellow683: ItemKeyYellow {
		keyid = 8183;
	};
	class ItemKeyYellow684: ItemKeyYellow {
		keyid = 8184;
	};
	class ItemKeyYellow685: ItemKeyYellow {
		keyid = 8185;
	};
	class ItemKeyYellow686: ItemKeyYellow {
		keyid = 8186;
	};
	class ItemKeyYellow687: ItemKeyYellow {
		keyid = 8187;
	};
	class ItemKeyYellow688: ItemKeyYellow {
		keyid = 8188;
	};
	class ItemKeyYellow689: ItemKeyYellow {
		keyid = 8189;
	};
	class ItemKeyYellow690: ItemKeyYellow {
		keyid = 8190;
	};
	class ItemKeyYellow691: ItemKeyYellow {
		keyid = 8191;
	};
	class ItemKeyYellow692: ItemKeyYellow {
		keyid = 8192;
	};
	class ItemKeyYellow693: ItemKeyYellow {
		keyid = 8193;
	};
	class ItemKeyYellow694: ItemKeyYellow {
		keyid = 8194;
	};
	class ItemKeyYellow695: ItemKeyYellow {
		keyid = 8195;
	};
	class ItemKeyYellow696: ItemKeyYellow {
		keyid = 8196;
	};
	class ItemKeyYellow697: ItemKeyYellow {
		keyid = 8197;
	};
	class ItemKeyYellow698: ItemKeyYellow {
		keyid = 8198;
	};
	class ItemKeyYellow699: ItemKeyYellow {
		keyid = 8199;
	};
	class ItemKeyYellow700: ItemKeyYellow {
		keyid = 8200;
	};
	class ItemKeyYellow701: ItemKeyYellow {
		keyid = 8201;
	};
	class ItemKeyYellow702: ItemKeyYellow {
		keyid = 8202;
	};
	class ItemKeyYellow703: ItemKeyYellow {
		keyid = 8203;
	};
	class ItemKeyYellow704: ItemKeyYellow {
		keyid = 8204;
	};
	class ItemKeyYellow705: ItemKeyYellow {
		keyid = 8205;
	};
	class ItemKeyYellow706: ItemKeyYellow {
		keyid = 8206;
	};
	class ItemKeyYellow707: ItemKeyYellow {
		keyid = 8207;
	};
	class ItemKeyYellow708: ItemKeyYellow {
		keyid = 8208;
	};
	class ItemKeyYellow709: ItemKeyYellow {
		keyid = 8209;
	};
	class ItemKeyYellow710: ItemKeyYellow {
		keyid = 8210;
	};
	class ItemKeyYellow711: ItemKeyYellow {
		keyid = 8211;
	};
	class ItemKeyYellow712: ItemKeyYellow {
		keyid = 8212;
	};
	class ItemKeyYellow713: ItemKeyYellow {
		keyid = 8213;
	};
	class ItemKeyYellow714: ItemKeyYellow {
		keyid = 8214;
	};
	class ItemKeyYellow715: ItemKeyYellow {
		keyid = 8215;
	};
	class ItemKeyYellow716: ItemKeyYellow {
		keyid = 8216;
	};
	class ItemKeyYellow717: ItemKeyYellow {
		keyid = 8217;
	};
	class ItemKeyYellow718: ItemKeyYellow {
		keyid = 8218;
	};
	class ItemKeyYellow719: ItemKeyYellow {
		keyid = 8219;
	};
	class ItemKeyYellow720: ItemKeyYellow {
		keyid = 8220;
	};
	class ItemKeyYellow721: ItemKeyYellow {
		keyid = 8221;
	};
	class ItemKeyYellow722: ItemKeyYellow {
		keyid = 8222;
	};
	class ItemKeyYellow723: ItemKeyYellow {
		keyid = 8223;
	};
	class ItemKeyYellow724: ItemKeyYellow {
		keyid = 8224;
	};
	class ItemKeyYellow725: ItemKeyYellow {
		keyid = 8225;
	};
	class ItemKeyYellow726: ItemKeyYellow {
		keyid = 8226;
	};
	class ItemKeyYellow727: ItemKeyYellow {
		keyid = 8227;
	};
	class ItemKeyYellow728: ItemKeyYellow {
		keyid = 8228;
	};
	class ItemKeyYellow729: ItemKeyYellow {
		keyid = 8229;
	};
	class ItemKeyYellow730: ItemKeyYellow {
		keyid = 8230;
	};
	class ItemKeyYellow731: ItemKeyYellow {
		keyid = 8231;
	};
	class ItemKeyYellow732: ItemKeyYellow {
		keyid = 8232;
	};
	class ItemKeyYellow733: ItemKeyYellow {
		keyid = 8233;
	};
	class ItemKeyYellow734: ItemKeyYellow {
		keyid = 8234;
	};
	class ItemKeyYellow735: ItemKeyYellow {
		keyid = 8235;
	};
	class ItemKeyYellow736: ItemKeyYellow {
		keyid = 8236;
	};
	class ItemKeyYellow737: ItemKeyYellow {
		keyid = 8237;
	};
	class ItemKeyYellow738: ItemKeyYellow {
		keyid = 8238;
	};
	class ItemKeyYellow739: ItemKeyYellow {
		keyid = 8239;
	};
	class ItemKeyYellow740: ItemKeyYellow {
		keyid = 8240;
	};
	class ItemKeyYellow741: ItemKeyYellow {
		keyid = 8241;
	};
	class ItemKeyYellow742: ItemKeyYellow {
		keyid = 8242;
	};
	class ItemKeyYellow743: ItemKeyYellow {
		keyid = 8243;
	};
	class ItemKeyYellow744: ItemKeyYellow {
		keyid = 8244;
	};
	class ItemKeyYellow745: ItemKeyYellow {
		keyid = 8245;
	};
	class ItemKeyYellow746: ItemKeyYellow {
		keyid = 8246;
	};
	class ItemKeyYellow747: ItemKeyYellow {
		keyid = 8247;
	};
	class ItemKeyYellow748: ItemKeyYellow {
		keyid = 8248;
	};
	class ItemKeyYellow749: ItemKeyYellow {
		keyid = 8249;
	};
	class ItemKeyYellow750: ItemKeyYellow {
		keyid = 8250;
	};
	class ItemKeyYellow751: ItemKeyYellow {
		keyid = 8251;
	};
	class ItemKeyYellow752: ItemKeyYellow {
		keyid = 8252;
	};
	class ItemKeyYellow753: ItemKeyYellow {
		keyid = 8253;
	};
	class ItemKeyYellow754: ItemKeyYellow {
		keyid = 8254;
	};
	class ItemKeyYellow755: ItemKeyYellow {
		keyid = 8255;
	};
	class ItemKeyYellow756: ItemKeyYellow {
		keyid = 8256;
	};
	class ItemKeyYellow757: ItemKeyYellow {
		keyid = 8257;
	};
	class ItemKeyYellow758: ItemKeyYellow {
		keyid = 8258;
	};
	class ItemKeyYellow759: ItemKeyYellow {
		keyid = 8259;
	};
	class ItemKeyYellow760: ItemKeyYellow {
		keyid = 8260;
	};
	class ItemKeyYellow761: ItemKeyYellow {
		keyid = 8261;
	};
	class ItemKeyYellow762: ItemKeyYellow {
		keyid = 8262;
	};
	class ItemKeyYellow763: ItemKeyYellow {
		keyid = 8263;
	};
	class ItemKeyYellow764: ItemKeyYellow {
		keyid = 8264;
	};
	class ItemKeyYellow765: ItemKeyYellow {
		keyid = 8265;
	};
	class ItemKeyYellow766: ItemKeyYellow {
		keyid = 8266;
	};
	class ItemKeyYellow767: ItemKeyYellow {
		keyid = 8267;
	};
	class ItemKeyYellow768: ItemKeyYellow {
		keyid = 8268;
	};
	class ItemKeyYellow769: ItemKeyYellow {
		keyid = 8269;
	};
	class ItemKeyYellow770: ItemKeyYellow {
		keyid = 8270;
	};
	class ItemKeyYellow771: ItemKeyYellow {
		keyid = 8271;
	};
	class ItemKeyYellow772: ItemKeyYellow {
		keyid = 8272;
	};
	class ItemKeyYellow773: ItemKeyYellow {
		keyid = 8273;
	};
	class ItemKeyYellow774: ItemKeyYellow {
		keyid = 8274;
	};
	class ItemKeyYellow775: ItemKeyYellow {
		keyid = 8275;
	};
	class ItemKeyYellow776: ItemKeyYellow {
		keyid = 8276;
	};
	class ItemKeyYellow777: ItemKeyYellow {
		keyid = 8277;
	};
	class ItemKeyYellow778: ItemKeyYellow {
		keyid = 8278;
	};
	class ItemKeyYellow779: ItemKeyYellow {
		keyid = 8279;
	};
	class ItemKeyYellow780: ItemKeyYellow {
		keyid = 8280;
	};
	class ItemKeyYellow781: ItemKeyYellow {
		keyid = 8281;
	};
	class ItemKeyYellow782: ItemKeyYellow {
		keyid = 8282;
	};
	class ItemKeyYellow783: ItemKeyYellow {
		keyid = 8283;
	};
	class ItemKeyYellow784: ItemKeyYellow {
		keyid = 8284;
	};
	class ItemKeyYellow785: ItemKeyYellow {
		keyid = 8285;
	};
	class ItemKeyYellow786: ItemKeyYellow {
		keyid = 8286;
	};
	class ItemKeyYellow787: ItemKeyYellow {
		keyid = 8287;
	};
	class ItemKeyYellow788: ItemKeyYellow {
		keyid = 8288;
	};
	class ItemKeyYellow789: ItemKeyYellow {
		keyid = 8289;
	};
	class ItemKeyYellow790: ItemKeyYellow {
		keyid = 8290;
	};
	class ItemKeyYellow791: ItemKeyYellow {
		keyid = 8291;
	};
	class ItemKeyYellow792: ItemKeyYellow {
		keyid = 8292;
	};
	class ItemKeyYellow793: ItemKeyYellow {
		keyid = 8293;
	};
	class ItemKeyYellow794: ItemKeyYellow {
		keyid = 8294;
	};
	class ItemKeyYellow795: ItemKeyYellow {
		keyid = 8295;
	};
	class ItemKeyYellow796: ItemKeyYellow {
		keyid = 8296;
	};
	class ItemKeyYellow797: ItemKeyYellow {
		keyid = 8297;
	};
	class ItemKeyYellow798: ItemKeyYellow {
		keyid = 8298;
	};
	class ItemKeyYellow799: ItemKeyYellow {
		keyid = 8299;
	};
	class ItemKeyYellow800: ItemKeyYellow {
		keyid = 8300;
	};
	class ItemKeyYellow801: ItemKeyYellow {
		keyid = 8301;
	};
	class ItemKeyYellow802: ItemKeyYellow {
		keyid = 8302;
	};
	class ItemKeyYellow803: ItemKeyYellow {
		keyid = 8303;
	};
	class ItemKeyYellow804: ItemKeyYellow {
		keyid = 8304;
	};
	class ItemKeyYellow805: ItemKeyYellow {
		keyid = 8305;
	};
	class ItemKeyYellow806: ItemKeyYellow {
		keyid = 8306;
	};
	class ItemKeyYellow807: ItemKeyYellow {
		keyid = 8307;
	};
	class ItemKeyYellow808: ItemKeyYellow {
		keyid = 8308;
	};
	class ItemKeyYellow809: ItemKeyYellow {
		keyid = 8309;
	};
	class ItemKeyYellow810: ItemKeyYellow {
		keyid = 8310;
	};
	class ItemKeyYellow811: ItemKeyYellow {
		keyid = 8311;
	};
	class ItemKeyYellow812: ItemKeyYellow {
		keyid = 8312;
	};
	class ItemKeyYellow813: ItemKeyYellow {
		keyid = 8313;
	};
	class ItemKeyYellow814: ItemKeyYellow {
		keyid = 8314;
	};
	class ItemKeyYellow815: ItemKeyYellow {
		keyid = 8315;
	};
	class ItemKeyYellow816: ItemKeyYellow {
		keyid = 8316;
	};
	class ItemKeyYellow817: ItemKeyYellow {
		keyid = 8317;
	};
	class ItemKeyYellow818: ItemKeyYellow {
		keyid = 8318;
	};
	class ItemKeyYellow819: ItemKeyYellow {
		keyid = 8319;
	};
	class ItemKeyYellow820: ItemKeyYellow {
		keyid = 8320;
	};
	class ItemKeyYellow821: ItemKeyYellow {
		keyid = 8321;
	};
	class ItemKeyYellow822: ItemKeyYellow {
		keyid = 8322;
	};
	class ItemKeyYellow823: ItemKeyYellow {
		keyid = 8323;
	};
	class ItemKeyYellow824: ItemKeyYellow {
		keyid = 8324;
	};
	class ItemKeyYellow825: ItemKeyYellow {
		keyid = 8325;
	};
	class ItemKeyYellow826: ItemKeyYellow {
		keyid = 8326;
	};
	class ItemKeyYellow827: ItemKeyYellow {
		keyid = 8327;
	};
	class ItemKeyYellow828: ItemKeyYellow {
		keyid = 8328;
	};
	class ItemKeyYellow829: ItemKeyYellow {
		keyid = 8329;
	};
	class ItemKeyYellow830: ItemKeyYellow {
		keyid = 8330;
	};
	class ItemKeyYellow831: ItemKeyYellow {
		keyid = 8331;
	};
	class ItemKeyYellow832: ItemKeyYellow {
		keyid = 8332;
	};
	class ItemKeyYellow833: ItemKeyYellow {
		keyid = 8333;
	};
	class ItemKeyYellow834: ItemKeyYellow {
		keyid = 8334;
	};
	class ItemKeyYellow835: ItemKeyYellow {
		keyid = 8335;
	};
	class ItemKeyYellow836: ItemKeyYellow {
		keyid = 8336;
	};
	class ItemKeyYellow837: ItemKeyYellow {
		keyid = 8337;
	};
	class ItemKeyYellow838: ItemKeyYellow {
		keyid = 8338;
	};
	class ItemKeyYellow839: ItemKeyYellow {
		keyid = 8339;
	};
	class ItemKeyYellow840: ItemKeyYellow {
		keyid = 8340;
	};
	class ItemKeyYellow841: ItemKeyYellow {
		keyid = 8341;
	};
	class ItemKeyYellow842: ItemKeyYellow {
		keyid = 8342;
	};
	class ItemKeyYellow843: ItemKeyYellow {
		keyid = 8343;
	};
	class ItemKeyYellow844: ItemKeyYellow {
		keyid = 8344;
	};
	class ItemKeyYellow845: ItemKeyYellow {
		keyid = 8345;
	};
	class ItemKeyYellow846: ItemKeyYellow {
		keyid = 8346;
	};
	class ItemKeyYellow847: ItemKeyYellow {
		keyid = 8347;
	};
	class ItemKeyYellow848: ItemKeyYellow {
		keyid = 8348;
	};
	class ItemKeyYellow849: ItemKeyYellow {
		keyid = 8349;
	};
	class ItemKeyYellow850: ItemKeyYellow {
		keyid = 8350;
	};
	class ItemKeyYellow851: ItemKeyYellow {
		keyid = 8351;
	};
	class ItemKeyYellow852: ItemKeyYellow {
		keyid = 8352;
	};
	class ItemKeyYellow853: ItemKeyYellow {
		keyid = 8353;
	};
	class ItemKeyYellow854: ItemKeyYellow {
		keyid = 8354;
	};
	class ItemKeyYellow855: ItemKeyYellow {
		keyid = 8355;
	};
	class ItemKeyYellow856: ItemKeyYellow {
		keyid = 8356;
	};
	class ItemKeyYellow857: ItemKeyYellow {
		keyid = 8357;
	};
	class ItemKeyYellow858: ItemKeyYellow {
		keyid = 8358;
	};
	class ItemKeyYellow859: ItemKeyYellow {
		keyid = 8359;
	};
	class ItemKeyYellow860: ItemKeyYellow {
		keyid = 8360;
	};
	class ItemKeyYellow861: ItemKeyYellow {
		keyid = 8361;
	};
	class ItemKeyYellow862: ItemKeyYellow {
		keyid = 8362;
	};
	class ItemKeyYellow863: ItemKeyYellow {
		keyid = 8363;
	};
	class ItemKeyYellow864: ItemKeyYellow {
		keyid = 8364;
	};
	class ItemKeyYellow865: ItemKeyYellow {
		keyid = 8365;
	};
	class ItemKeyYellow866: ItemKeyYellow {
		keyid = 8366;
	};
	class ItemKeyYellow867: ItemKeyYellow {
		keyid = 8367;
	};
	class ItemKeyYellow868: ItemKeyYellow {
		keyid = 8368;
	};
	class ItemKeyYellow869: ItemKeyYellow {
		keyid = 8369;
	};
	class ItemKeyYellow870: ItemKeyYellow {
		keyid = 8370;
	};
	class ItemKeyYellow871: ItemKeyYellow {
		keyid = 8371;
	};
	class ItemKeyYellow872: ItemKeyYellow {
		keyid = 8372;
	};
	class ItemKeyYellow873: ItemKeyYellow {
		keyid = 8373;
	};
	class ItemKeyYellow874: ItemKeyYellow {
		keyid = 8374;
	};
	class ItemKeyYellow875: ItemKeyYellow {
		keyid = 8375;
	};
	class ItemKeyYellow876: ItemKeyYellow {
		keyid = 8376;
	};
	class ItemKeyYellow877: ItemKeyYellow {
		keyid = 8377;
	};
	class ItemKeyYellow878: ItemKeyYellow {
		keyid = 8378;
	};
	class ItemKeyYellow879: ItemKeyYellow {
		keyid = 8379;
	};
	class ItemKeyYellow880: ItemKeyYellow {
		keyid = 8380;
	};
	class ItemKeyYellow881: ItemKeyYellow {
		keyid = 8381;
	};
	class ItemKeyYellow882: ItemKeyYellow {
		keyid = 8382;
	};
	class ItemKeyYellow883: ItemKeyYellow {
		keyid = 8383;
	};
	class ItemKeyYellow884: ItemKeyYellow {
		keyid = 8384;
	};
	class ItemKeyYellow885: ItemKeyYellow {
		keyid = 8385;
	};
	class ItemKeyYellow886: ItemKeyYellow {
		keyid = 8386;
	};
	class ItemKeyYellow887: ItemKeyYellow {
		keyid = 8387;
	};
	class ItemKeyYellow888: ItemKeyYellow {
		keyid = 8388;
	};
	class ItemKeyYellow889: ItemKeyYellow {
		keyid = 8389;
	};
	class ItemKeyYellow890: ItemKeyYellow {
		keyid = 8390;
	};
	class ItemKeyYellow891: ItemKeyYellow {
		keyid = 8391;
	};
	class ItemKeyYellow892: ItemKeyYellow {
		keyid = 8392;
	};
	class ItemKeyYellow893: ItemKeyYellow {
		keyid = 8393;
	};
	class ItemKeyYellow894: ItemKeyYellow {
		keyid = 8394;
	};
	class ItemKeyYellow895: ItemKeyYellow {
		keyid = 8395;
	};
	class ItemKeyYellow896: ItemKeyYellow {
		keyid = 8396;
	};
	class ItemKeyYellow897: ItemKeyYellow {
		keyid = 8397;
	};
	class ItemKeyYellow898: ItemKeyYellow {
		keyid = 8398;
	};
	class ItemKeyYellow899: ItemKeyYellow {
		keyid = 8399;
	};
	class ItemKeyYellow900: ItemKeyYellow {
		keyid = 8400;
	};
	class ItemKeyYellow901: ItemKeyYellow {
		keyid = 8401;
	};
	class ItemKeyYellow902: ItemKeyYellow {
		keyid = 8402;
	};
	class ItemKeyYellow903: ItemKeyYellow {
		keyid = 8403;
	};
	class ItemKeyYellow904: ItemKeyYellow {
		keyid = 8404;
	};
	class ItemKeyYellow905: ItemKeyYellow {
		keyid = 8405;
	};
	class ItemKeyYellow906: ItemKeyYellow {
		keyid = 8406;
	};
	class ItemKeyYellow907: ItemKeyYellow {
		keyid = 8407;
	};
	class ItemKeyYellow908: ItemKeyYellow {
		keyid = 8408;
	};
	class ItemKeyYellow909: ItemKeyYellow {
		keyid = 8409;
	};
	class ItemKeyYellow910: ItemKeyYellow {
		keyid = 8410;
	};
	class ItemKeyYellow911: ItemKeyYellow {
		keyid = 8411;
	};
	class ItemKeyYellow912: ItemKeyYellow {
		keyid = 8412;
	};
	class ItemKeyYellow913: ItemKeyYellow {
		keyid = 8413;
	};
	class ItemKeyYellow914: ItemKeyYellow {
		keyid = 8414;
	};
	class ItemKeyYellow915: ItemKeyYellow {
		keyid = 8415;
	};
	class ItemKeyYellow916: ItemKeyYellow {
		keyid = 8416;
	};
	class ItemKeyYellow917: ItemKeyYellow {
		keyid = 8417;
	};
	class ItemKeyYellow918: ItemKeyYellow {
		keyid = 8418;
	};
	class ItemKeyYellow919: ItemKeyYellow {
		keyid = 8419;
	};
	class ItemKeyYellow920: ItemKeyYellow {
		keyid = 8420;
	};
	class ItemKeyYellow921: ItemKeyYellow {
		keyid = 8421;
	};
	class ItemKeyYellow922: ItemKeyYellow {
		keyid = 8422;
	};
	class ItemKeyYellow923: ItemKeyYellow {
		keyid = 8423;
	};
	class ItemKeyYellow924: ItemKeyYellow {
		keyid = 8424;
	};
	class ItemKeyYellow925: ItemKeyYellow {
		keyid = 8425;
	};
	class ItemKeyYellow926: ItemKeyYellow {
		keyid = 8426;
	};
	class ItemKeyYellow927: ItemKeyYellow {
		keyid = 8427;
	};
	class ItemKeyYellow928: ItemKeyYellow {
		keyid = 8428;
	};
	class ItemKeyYellow929: ItemKeyYellow {
		keyid = 8429;
	};
	class ItemKeyYellow930: ItemKeyYellow {
		keyid = 8430;
	};
	class ItemKeyYellow931: ItemKeyYellow {
		keyid = 8431;
	};
	class ItemKeyYellow932: ItemKeyYellow {
		keyid = 8432;
	};
	class ItemKeyYellow933: ItemKeyYellow {
		keyid = 8433;
	};
	class ItemKeyYellow934: ItemKeyYellow {
		keyid = 8434;
	};
	class ItemKeyYellow935: ItemKeyYellow {
		keyid = 8435;
	};
	class ItemKeyYellow936: ItemKeyYellow {
		keyid = 8436;
	};
	class ItemKeyYellow937: ItemKeyYellow {
		keyid = 8437;
	};
	class ItemKeyYellow938: ItemKeyYellow {
		keyid = 8438;
	};
	class ItemKeyYellow939: ItemKeyYellow {
		keyid = 8439;
	};
	class ItemKeyYellow940: ItemKeyYellow {
		keyid = 8440;
	};
	class ItemKeyYellow941: ItemKeyYellow {
		keyid = 8441;
	};
	class ItemKeyYellow942: ItemKeyYellow {
		keyid = 8442;
	};
	class ItemKeyYellow943: ItemKeyYellow {
		keyid = 8443;
	};
	class ItemKeyYellow944: ItemKeyYellow {
		keyid = 8444;
	};
	class ItemKeyYellow945: ItemKeyYellow {
		keyid = 8445;
	};
	class ItemKeyYellow946: ItemKeyYellow {
		keyid = 8446;
	};
	class ItemKeyYellow947: ItemKeyYellow {
		keyid = 8447;
	};
	class ItemKeyYellow948: ItemKeyYellow {
		keyid = 8448;
	};
	class ItemKeyYellow949: ItemKeyYellow {
		keyid = 8449;
	};
	class ItemKeyYellow950: ItemKeyYellow {
		keyid = 8450;
	};
	class ItemKeyYellow951: ItemKeyYellow {
		keyid = 8451;
	};
	class ItemKeyYellow952: ItemKeyYellow {
		keyid = 8452;
	};
	class ItemKeyYellow953: ItemKeyYellow {
		keyid = 8453;
	};
	class ItemKeyYellow954: ItemKeyYellow {
		keyid = 8454;
	};
	class ItemKeyYellow955: ItemKeyYellow {
		keyid = 8455;
	};
	class ItemKeyYellow956: ItemKeyYellow {
		keyid = 8456;
	};
	class ItemKeyYellow957: ItemKeyYellow {
		keyid = 8457;
	};
	class ItemKeyYellow958: ItemKeyYellow {
		keyid = 8458;
	};
	class ItemKeyYellow959: ItemKeyYellow {
		keyid = 8459;
	};
	class ItemKeyYellow960: ItemKeyYellow {
		keyid = 8460;
	};
	class ItemKeyYellow961: ItemKeyYellow {
		keyid = 8461;
	};
	class ItemKeyYellow962: ItemKeyYellow {
		keyid = 8462;
	};
	class ItemKeyYellow963: ItemKeyYellow {
		keyid = 8463;
	};
	class ItemKeyYellow964: ItemKeyYellow {
		keyid = 8464;
	};
	class ItemKeyYellow965: ItemKeyYellow {
		keyid = 8465;
	};
	class ItemKeyYellow966: ItemKeyYellow {
		keyid = 8466;
	};
	class ItemKeyYellow967: ItemKeyYellow {
		keyid = 8467;
	};
	class ItemKeyYellow968: ItemKeyYellow {
		keyid = 8468;
	};
	class ItemKeyYellow969: ItemKeyYellow {
		keyid = 8469;
	};
	class ItemKeyYellow970: ItemKeyYellow {
		keyid = 8470;
	};
	class ItemKeyYellow971: ItemKeyYellow {
		keyid = 8471;
	};
	class ItemKeyYellow972: ItemKeyYellow {
		keyid = 8472;
	};
	class ItemKeyYellow973: ItemKeyYellow {
		keyid = 8473;
	};
	class ItemKeyYellow974: ItemKeyYellow {
		keyid = 8474;
	};
	class ItemKeyYellow975: ItemKeyYellow {
		keyid = 8475;
	};
	class ItemKeyYellow976: ItemKeyYellow {
		keyid = 8476;
	};
	class ItemKeyYellow977: ItemKeyYellow {
		keyid = 8477;
	};
	class ItemKeyYellow978: ItemKeyYellow {
		keyid = 8478;
	};
	class ItemKeyYellow979: ItemKeyYellow {
		keyid = 8479;
	};
	class ItemKeyYellow980: ItemKeyYellow {
		keyid = 8480;
	};
	class ItemKeyYellow981: ItemKeyYellow {
		keyid = 8481;
	};
	class ItemKeyYellow982: ItemKeyYellow {
		keyid = 8482;
	};
	class ItemKeyYellow983: ItemKeyYellow {
		keyid = 8483;
	};
	class ItemKeyYellow984: ItemKeyYellow {
		keyid = 8484;
	};
	class ItemKeyYellow985: ItemKeyYellow {
		keyid = 8485;
	};
	class ItemKeyYellow986: ItemKeyYellow {
		keyid = 8486;
	};
	class ItemKeyYellow987: ItemKeyYellow {
		keyid = 8487;
	};
	class ItemKeyYellow988: ItemKeyYellow {
		keyid = 8488;
	};
	class ItemKeyYellow989: ItemKeyYellow {
		keyid = 8489;
	};
	class ItemKeyYellow990: ItemKeyYellow {
		keyid = 8490;
	};
	class ItemKeyYellow991: ItemKeyYellow {
		keyid = 8491;
	};
	class ItemKeyYellow992: ItemKeyYellow {
		keyid = 8492;
	};
	class ItemKeyYellow993: ItemKeyYellow {
		keyid = 8493;
	};
	class ItemKeyYellow994: ItemKeyYellow {
		keyid = 8494;
	};
	class ItemKeyYellow995: ItemKeyYellow {
		keyid = 8495;
	};
	class ItemKeyYellow996: ItemKeyYellow {
		keyid = 8496;
	};
	class ItemKeyYellow997: ItemKeyYellow {
		keyid = 8497;
	};
	class ItemKeyYellow998: ItemKeyYellow {
		keyid = 8498;
	};
	class ItemKeyYellow999: ItemKeyYellow {
		keyid = 8499;
	};
	class ItemKeyYellow1000: ItemKeyYellow {
		keyid = 8500;
	};
	class ItemKeyYellow1001: ItemKeyYellow {
		keyid = 8501;
	};
	class ItemKeyYellow1002: ItemKeyYellow {
		keyid = 8502;
	};
	class ItemKeyYellow1003: ItemKeyYellow {
		keyid = 8503;
	};
	class ItemKeyYellow1004: ItemKeyYellow {
		keyid = 8504;
	};
	class ItemKeyYellow1005: ItemKeyYellow {
		keyid = 8505;
	};
	class ItemKeyYellow1006: ItemKeyYellow {
		keyid = 8506;
	};
	class ItemKeyYellow1007: ItemKeyYellow {
		keyid = 8507;
	};
	class ItemKeyYellow1008: ItemKeyYellow {
		keyid = 8508;
	};
	class ItemKeyYellow1009: ItemKeyYellow {
		keyid = 8509;
	};
	class ItemKeyYellow1010: ItemKeyYellow {
		keyid = 8510;
	};
	class ItemKeyYellow1011: ItemKeyYellow {
		keyid = 8511;
	};
	class ItemKeyYellow1012: ItemKeyYellow {
		keyid = 8512;
	};
	class ItemKeyYellow1013: ItemKeyYellow {
		keyid = 8513;
	};
	class ItemKeyYellow1014: ItemKeyYellow {
		keyid = 8514;
	};
	class ItemKeyYellow1015: ItemKeyYellow {
		keyid = 8515;
	};
	class ItemKeyYellow1016: ItemKeyYellow {
		keyid = 8516;
	};
	class ItemKeyYellow1017: ItemKeyYellow {
		keyid = 8517;
	};
	class ItemKeyYellow1018: ItemKeyYellow {
		keyid = 8518;
	};
	class ItemKeyYellow1019: ItemKeyYellow {
		keyid = 8519;
	};
	class ItemKeyYellow1020: ItemKeyYellow {
		keyid = 8520;
	};
	class ItemKeyYellow1021: ItemKeyYellow {
		keyid = 8521;
	};
	class ItemKeyYellow1022: ItemKeyYellow {
		keyid = 8522;
	};
	class ItemKeyYellow1023: ItemKeyYellow {
		keyid = 8523;
	};
	class ItemKeyYellow1024: ItemKeyYellow {
		keyid = 8524;
	};
	class ItemKeyYellow1025: ItemKeyYellow {
		keyid = 8525;
	};
	class ItemKeyYellow1026: ItemKeyYellow {
		keyid = 8526;
	};
	class ItemKeyYellow1027: ItemKeyYellow {
		keyid = 8527;
	};
	class ItemKeyYellow1028: ItemKeyYellow {
		keyid = 8528;
	};
	class ItemKeyYellow1029: ItemKeyYellow {
		keyid = 8529;
	};
	class ItemKeyYellow1030: ItemKeyYellow {
		keyid = 8530;
	};
	class ItemKeyYellow1031: ItemKeyYellow {
		keyid = 8531;
	};
	class ItemKeyYellow1032: ItemKeyYellow {
		keyid = 8532;
	};
	class ItemKeyYellow1033: ItemKeyYellow {
		keyid = 8533;
	};
	class ItemKeyYellow1034: ItemKeyYellow {
		keyid = 8534;
	};
	class ItemKeyYellow1035: ItemKeyYellow {
		keyid = 8535;
	};
	class ItemKeyYellow1036: ItemKeyYellow {
		keyid = 8536;
	};
	class ItemKeyYellow1037: ItemKeyYellow {
		keyid = 8537;
	};
	class ItemKeyYellow1038: ItemKeyYellow {
		keyid = 8538;
	};
	class ItemKeyYellow1039: ItemKeyYellow {
		keyid = 8539;
	};
	class ItemKeyYellow1040: ItemKeyYellow {
		keyid = 8540;
	};
	class ItemKeyYellow1041: ItemKeyYellow {
		keyid = 8541;
	};
	class ItemKeyYellow1042: ItemKeyYellow {
		keyid = 8542;
	};
	class ItemKeyYellow1043: ItemKeyYellow {
		keyid = 8543;
	};
	class ItemKeyYellow1044: ItemKeyYellow {
		keyid = 8544;
	};
	class ItemKeyYellow1045: ItemKeyYellow {
		keyid = 8545;
	};
	class ItemKeyYellow1046: ItemKeyYellow {
		keyid = 8546;
	};
	class ItemKeyYellow1047: ItemKeyYellow {
		keyid = 8547;
	};
	class ItemKeyYellow1048: ItemKeyYellow {
		keyid = 8548;
	};
	class ItemKeyYellow1049: ItemKeyYellow {
		keyid = 8549;
	};
	class ItemKeyYellow1050: ItemKeyYellow {
		keyid = 8550;
	};
	class ItemKeyYellow1051: ItemKeyYellow {
		keyid = 8551;
	};
	class ItemKeyYellow1052: ItemKeyYellow {
		keyid = 8552;
	};
	class ItemKeyYellow1053: ItemKeyYellow {
		keyid = 8553;
	};
	class ItemKeyYellow1054: ItemKeyYellow {
		keyid = 8554;
	};
	class ItemKeyYellow1055: ItemKeyYellow {
		keyid = 8555;
	};
	class ItemKeyYellow1056: ItemKeyYellow {
		keyid = 8556;
	};
	class ItemKeyYellow1057: ItemKeyYellow {
		keyid = 8557;
	};
	class ItemKeyYellow1058: ItemKeyYellow {
		keyid = 8558;
	};
	class ItemKeyYellow1059: ItemKeyYellow {
		keyid = 8559;
	};
	class ItemKeyYellow1060: ItemKeyYellow {
		keyid = 8560;
	};
	class ItemKeyYellow1061: ItemKeyYellow {
		keyid = 8561;
	};
	class ItemKeyYellow1062: ItemKeyYellow {
		keyid = 8562;
	};
	class ItemKeyYellow1063: ItemKeyYellow {
		keyid = 8563;
	};
	class ItemKeyYellow1064: ItemKeyYellow {
		keyid = 8564;
	};
	class ItemKeyYellow1065: ItemKeyYellow {
		keyid = 8565;
	};
	class ItemKeyYellow1066: ItemKeyYellow {
		keyid = 8566;
	};
	class ItemKeyYellow1067: ItemKeyYellow {
		keyid = 8567;
	};
	class ItemKeyYellow1068: ItemKeyYellow {
		keyid = 8568;
	};
	class ItemKeyYellow1069: ItemKeyYellow {
		keyid = 8569;
	};
	class ItemKeyYellow1070: ItemKeyYellow {
		keyid = 8570;
	};
	class ItemKeyYellow1071: ItemKeyYellow {
		keyid = 8571;
	};
	class ItemKeyYellow1072: ItemKeyYellow {
		keyid = 8572;
	};
	class ItemKeyYellow1073: ItemKeyYellow {
		keyid = 8573;
	};
	class ItemKeyYellow1074: ItemKeyYellow {
		keyid = 8574;
	};
	class ItemKeyYellow1075: ItemKeyYellow {
		keyid = 8575;
	};
	class ItemKeyYellow1076: ItemKeyYellow {
		keyid = 8576;
	};
	class ItemKeyYellow1077: ItemKeyYellow {
		keyid = 8577;
	};
	class ItemKeyYellow1078: ItemKeyYellow {
		keyid = 8578;
	};
	class ItemKeyYellow1079: ItemKeyYellow {
		keyid = 8579;
	};
	class ItemKeyYellow1080: ItemKeyYellow {
		keyid = 8580;
	};
	class ItemKeyYellow1081: ItemKeyYellow {
		keyid = 8581;
	};
	class ItemKeyYellow1082: ItemKeyYellow {
		keyid = 8582;
	};
	class ItemKeyYellow1083: ItemKeyYellow {
		keyid = 8583;
	};
	class ItemKeyYellow1084: ItemKeyYellow {
		keyid = 8584;
	};
	class ItemKeyYellow1085: ItemKeyYellow {
		keyid = 8585;
	};
	class ItemKeyYellow1086: ItemKeyYellow {
		keyid = 8586;
	};
	class ItemKeyYellow1087: ItemKeyYellow {
		keyid = 8587;
	};
	class ItemKeyYellow1088: ItemKeyYellow {
		keyid = 8588;
	};
	class ItemKeyYellow1089: ItemKeyYellow {
		keyid = 8589;
	};
	class ItemKeyYellow1090: ItemKeyYellow {
		keyid = 8590;
	};
	class ItemKeyYellow1091: ItemKeyYellow {
		keyid = 8591;
	};
	class ItemKeyYellow1092: ItemKeyYellow {
		keyid = 8592;
	};
	class ItemKeyYellow1093: ItemKeyYellow {
		keyid = 8593;
	};
	class ItemKeyYellow1094: ItemKeyYellow {
		keyid = 8594;
	};
	class ItemKeyYellow1095: ItemKeyYellow {
		keyid = 8595;
	};
	class ItemKeyYellow1096: ItemKeyYellow {
		keyid = 8596;
	};
	class ItemKeyYellow1097: ItemKeyYellow {
		keyid = 8597;
	};
	class ItemKeyYellow1098: ItemKeyYellow {
		keyid = 8598;
	};
	class ItemKeyYellow1099: ItemKeyYellow {
		keyid = 8599;
	};
	class ItemKeyYellow1100: ItemKeyYellow {
		keyid = 8600;
	};
	class ItemKeyYellow1101: ItemKeyYellow {
		keyid = 8601;
	};
	class ItemKeyYellow1102: ItemKeyYellow {
		keyid = 8602;
	};
	class ItemKeyYellow1103: ItemKeyYellow {
		keyid = 8603;
	};
	class ItemKeyYellow1104: ItemKeyYellow {
		keyid = 8604;
	};
	class ItemKeyYellow1105: ItemKeyYellow {
		keyid = 8605;
	};
	class ItemKeyYellow1106: ItemKeyYellow {
		keyid = 8606;
	};
	class ItemKeyYellow1107: ItemKeyYellow {
		keyid = 8607;
	};
	class ItemKeyYellow1108: ItemKeyYellow {
		keyid = 8608;
	};
	class ItemKeyYellow1109: ItemKeyYellow {
		keyid = 8609;
	};
	class ItemKeyYellow1110: ItemKeyYellow {
		keyid = 8610;
	};
	class ItemKeyYellow1111: ItemKeyYellow {
		keyid = 8611;
	};
	class ItemKeyYellow1112: ItemKeyYellow {
		keyid = 8612;
	};
	class ItemKeyYellow1113: ItemKeyYellow {
		keyid = 8613;
	};
	class ItemKeyYellow1114: ItemKeyYellow {
		keyid = 8614;
	};
	class ItemKeyYellow1115: ItemKeyYellow {
		keyid = 8615;
	};
	class ItemKeyYellow1116: ItemKeyYellow {
		keyid = 8616;
	};
	class ItemKeyYellow1117: ItemKeyYellow {
		keyid = 8617;
	};
	class ItemKeyYellow1118: ItemKeyYellow {
		keyid = 8618;
	};
	class ItemKeyYellow1119: ItemKeyYellow {
		keyid = 8619;
	};
	class ItemKeyYellow1120: ItemKeyYellow {
		keyid = 8620;
	};
	class ItemKeyYellow1121: ItemKeyYellow {
		keyid = 8621;
	};
	class ItemKeyYellow1122: ItemKeyYellow {
		keyid = 8622;
	};
	class ItemKeyYellow1123: ItemKeyYellow {
		keyid = 8623;
	};
	class ItemKeyYellow1124: ItemKeyYellow {
		keyid = 8624;
	};
	class ItemKeyYellow1125: ItemKeyYellow {
		keyid = 8625;
	};
	class ItemKeyYellow1126: ItemKeyYellow {
		keyid = 8626;
	};
	class ItemKeyYellow1127: ItemKeyYellow {
		keyid = 8627;
	};
	class ItemKeyYellow1128: ItemKeyYellow {
		keyid = 8628;
	};
	class ItemKeyYellow1129: ItemKeyYellow {
		keyid = 8629;
	};
	class ItemKeyYellow1130: ItemKeyYellow {
		keyid = 8630;
	};
	class ItemKeyYellow1131: ItemKeyYellow {
		keyid = 8631;
	};
	class ItemKeyYellow1132: ItemKeyYellow {
		keyid = 8632;
	};
	class ItemKeyYellow1133: ItemKeyYellow {
		keyid = 8633;
	};
	class ItemKeyYellow1134: ItemKeyYellow {
		keyid = 8634;
	};
	class ItemKeyYellow1135: ItemKeyYellow {
		keyid = 8635;
	};
	class ItemKeyYellow1136: ItemKeyYellow {
		keyid = 8636;
	};
	class ItemKeyYellow1137: ItemKeyYellow {
		keyid = 8637;
	};
	class ItemKeyYellow1138: ItemKeyYellow {
		keyid = 8638;
	};
	class ItemKeyYellow1139: ItemKeyYellow {
		keyid = 8639;
	};
	class ItemKeyYellow1140: ItemKeyYellow {
		keyid = 8640;
	};
	class ItemKeyYellow1141: ItemKeyYellow {
		keyid = 8641;
	};
	class ItemKeyYellow1142: ItemKeyYellow {
		keyid = 8642;
	};
	class ItemKeyYellow1143: ItemKeyYellow {
		keyid = 8643;
	};
	class ItemKeyYellow1144: ItemKeyYellow {
		keyid = 8644;
	};
	class ItemKeyYellow1145: ItemKeyYellow {
		keyid = 8645;
	};
	class ItemKeyYellow1146: ItemKeyYellow {
		keyid = 8646;
	};
	class ItemKeyYellow1147: ItemKeyYellow {
		keyid = 8647;
	};
	class ItemKeyYellow1148: ItemKeyYellow {
		keyid = 8648;
	};
	class ItemKeyYellow1149: ItemKeyYellow {
		keyid = 8649;
	};
	class ItemKeyYellow1150: ItemKeyYellow {
		keyid = 8650;
	};
	class ItemKeyYellow1151: ItemKeyYellow {
		keyid = 8651;
	};
	class ItemKeyYellow1152: ItemKeyYellow {
		keyid = 8652;
	};
	class ItemKeyYellow1153: ItemKeyYellow {
		keyid = 8653;
	};
	class ItemKeyYellow1154: ItemKeyYellow {
		keyid = 8654;
	};
	class ItemKeyYellow1155: ItemKeyYellow {
		keyid = 8655;
	};
	class ItemKeyYellow1156: ItemKeyYellow {
		keyid = 8656;
	};
	class ItemKeyYellow1157: ItemKeyYellow {
		keyid = 8657;
	};
	class ItemKeyYellow1158: ItemKeyYellow {
		keyid = 8658;
	};
	class ItemKeyYellow1159: ItemKeyYellow {
		keyid = 8659;
	};
	class ItemKeyYellow1160: ItemKeyYellow {
		keyid = 8660;
	};
	class ItemKeyYellow1161: ItemKeyYellow {
		keyid = 8661;
	};
	class ItemKeyYellow1162: ItemKeyYellow {
		keyid = 8662;
	};
	class ItemKeyYellow1163: ItemKeyYellow {
		keyid = 8663;
	};
	class ItemKeyYellow1164: ItemKeyYellow {
		keyid = 8664;
	};
	class ItemKeyYellow1165: ItemKeyYellow {
		keyid = 8665;
	};
	class ItemKeyYellow1166: ItemKeyYellow {
		keyid = 8666;
	};
	class ItemKeyYellow1167: ItemKeyYellow {
		keyid = 8667;
	};
	class ItemKeyYellow1168: ItemKeyYellow {
		keyid = 8668;
	};
	class ItemKeyYellow1169: ItemKeyYellow {
		keyid = 8669;
	};
	class ItemKeyYellow1170: ItemKeyYellow {
		keyid = 8670;
	};
	class ItemKeyYellow1171: ItemKeyYellow {
		keyid = 8671;
	};
	class ItemKeyYellow1172: ItemKeyYellow {
		keyid = 8672;
	};
	class ItemKeyYellow1173: ItemKeyYellow {
		keyid = 8673;
	};
	class ItemKeyYellow1174: ItemKeyYellow {
		keyid = 8674;
	};
	class ItemKeyYellow1175: ItemKeyYellow {
		keyid = 8675;
	};
	class ItemKeyYellow1176: ItemKeyYellow {
		keyid = 8676;
	};
	class ItemKeyYellow1177: ItemKeyYellow {
		keyid = 8677;
	};
	class ItemKeyYellow1178: ItemKeyYellow {
		keyid = 8678;
	};
	class ItemKeyYellow1179: ItemKeyYellow {
		keyid = 8679;
	};
	class ItemKeyYellow1180: ItemKeyYellow {
		keyid = 8680;
	};
	class ItemKeyYellow1181: ItemKeyYellow {
		keyid = 8681;
	};
	class ItemKeyYellow1182: ItemKeyYellow {
		keyid = 8682;
	};
	class ItemKeyYellow1183: ItemKeyYellow {
		keyid = 8683;
	};
	class ItemKeyYellow1184: ItemKeyYellow {
		keyid = 8684;
	};
	class ItemKeyYellow1185: ItemKeyYellow {
		keyid = 8685;
	};
	class ItemKeyYellow1186: ItemKeyYellow {
		keyid = 8686;
	};
	class ItemKeyYellow1187: ItemKeyYellow {
		keyid = 8687;
	};
	class ItemKeyYellow1188: ItemKeyYellow {
		keyid = 8688;
	};
	class ItemKeyYellow1189: ItemKeyYellow {
		keyid = 8689;
	};
	class ItemKeyYellow1190: ItemKeyYellow {
		keyid = 8690;
	};
	class ItemKeyYellow1191: ItemKeyYellow {
		keyid = 8691;
	};
	class ItemKeyYellow1192: ItemKeyYellow {
		keyid = 8692;
	};
	class ItemKeyYellow1193: ItemKeyYellow {
		keyid = 8693;
	};
	class ItemKeyYellow1194: ItemKeyYellow {
		keyid = 8694;
	};
	class ItemKeyYellow1195: ItemKeyYellow {
		keyid = 8695;
	};
	class ItemKeyYellow1196: ItemKeyYellow {
		keyid = 8696;
	};
	class ItemKeyYellow1197: ItemKeyYellow {
		keyid = 8697;
	};
	class ItemKeyYellow1198: ItemKeyYellow {
		keyid = 8698;
	};
	class ItemKeyYellow1199: ItemKeyYellow {
		keyid = 8699;
	};
	class ItemKeyYellow1200: ItemKeyYellow {
		keyid = 8700;
	};
	class ItemKeyYellow1201: ItemKeyYellow {
		keyid = 8701;
	};
	class ItemKeyYellow1202: ItemKeyYellow {
		keyid = 8702;
	};
	class ItemKeyYellow1203: ItemKeyYellow {
		keyid = 8703;
	};
	class ItemKeyYellow1204: ItemKeyYellow {
		keyid = 8704;
	};
	class ItemKeyYellow1205: ItemKeyYellow {
		keyid = 8705;
	};
	class ItemKeyYellow1206: ItemKeyYellow {
		keyid = 8706;
	};
	class ItemKeyYellow1207: ItemKeyYellow {
		keyid = 8707;
	};
	class ItemKeyYellow1208: ItemKeyYellow {
		keyid = 8708;
	};
	class ItemKeyYellow1209: ItemKeyYellow {
		keyid = 8709;
	};
	class ItemKeyYellow1210: ItemKeyYellow {
		keyid = 8710;
	};
	class ItemKeyYellow1211: ItemKeyYellow {
		keyid = 8711;
	};
	class ItemKeyYellow1212: ItemKeyYellow {
		keyid = 8712;
	};
	class ItemKeyYellow1213: ItemKeyYellow {
		keyid = 8713;
	};
	class ItemKeyYellow1214: ItemKeyYellow {
		keyid = 8714;
	};
	class ItemKeyYellow1215: ItemKeyYellow {
		keyid = 8715;
	};
	class ItemKeyYellow1216: ItemKeyYellow {
		keyid = 8716;
	};
	class ItemKeyYellow1217: ItemKeyYellow {
		keyid = 8717;
	};
	class ItemKeyYellow1218: ItemKeyYellow {
		keyid = 8718;
	};
	class ItemKeyYellow1219: ItemKeyYellow {
		keyid = 8719;
	};
	class ItemKeyYellow1220: ItemKeyYellow {
		keyid = 8720;
	};
	class ItemKeyYellow1221: ItemKeyYellow {
		keyid = 8721;
	};
	class ItemKeyYellow1222: ItemKeyYellow {
		keyid = 8722;
	};
	class ItemKeyYellow1223: ItemKeyYellow {
		keyid = 8723;
	};
	class ItemKeyYellow1224: ItemKeyYellow {
		keyid = 8724;
	};
	class ItemKeyYellow1225: ItemKeyYellow {
		keyid = 8725;
	};
	class ItemKeyYellow1226: ItemKeyYellow {
		keyid = 8726;
	};
	class ItemKeyYellow1227: ItemKeyYellow {
		keyid = 8727;
	};
	class ItemKeyYellow1228: ItemKeyYellow {
		keyid = 8728;
	};
	class ItemKeyYellow1229: ItemKeyYellow {
		keyid = 8729;
	};
	class ItemKeyYellow1230: ItemKeyYellow {
		keyid = 8730;
	};
	class ItemKeyYellow1231: ItemKeyYellow {
		keyid = 8731;
	};
	class ItemKeyYellow1232: ItemKeyYellow {
		keyid = 8732;
	};
	class ItemKeyYellow1233: ItemKeyYellow {
		keyid = 8733;
	};
	class ItemKeyYellow1234: ItemKeyYellow {
		keyid = 8734;
	};
	class ItemKeyYellow1235: ItemKeyYellow {
		keyid = 8735;
	};
	class ItemKeyYellow1236: ItemKeyYellow {
		keyid = 8736;
	};
	class ItemKeyYellow1237: ItemKeyYellow {
		keyid = 8737;
	};
	class ItemKeyYellow1238: ItemKeyYellow {
		keyid = 8738;
	};
	class ItemKeyYellow1239: ItemKeyYellow {
		keyid = 8739;
	};
	class ItemKeyYellow1240: ItemKeyYellow {
		keyid = 8740;
	};
	class ItemKeyYellow1241: ItemKeyYellow {
		keyid = 8741;
	};
	class ItemKeyYellow1242: ItemKeyYellow {
		keyid = 8742;
	};
	class ItemKeyYellow1243: ItemKeyYellow {
		keyid = 8743;
	};
	class ItemKeyYellow1244: ItemKeyYellow {
		keyid = 8744;
	};
	class ItemKeyYellow1245: ItemKeyYellow {
		keyid = 8745;
	};
	class ItemKeyYellow1246: ItemKeyYellow {
		keyid = 8746;
	};
	class ItemKeyYellow1247: ItemKeyYellow {
		keyid = 8747;
	};
	class ItemKeyYellow1248: ItemKeyYellow {
		keyid = 8748;
	};
	class ItemKeyYellow1249: ItemKeyYellow {
		keyid = 8749;
	};
	class ItemKeyYellow1250: ItemKeyYellow {
		keyid = 8750;
	};
	class ItemKeyYellow1251: ItemKeyYellow {
		keyid = 8751;
	};
	class ItemKeyYellow1252: ItemKeyYellow {
		keyid = 8752;
	};
	class ItemKeyYellow1253: ItemKeyYellow {
		keyid = 8753;
	};
	class ItemKeyYellow1254: ItemKeyYellow {
		keyid = 8754;
	};
	class ItemKeyYellow1255: ItemKeyYellow {
		keyid = 8755;
	};
	class ItemKeyYellow1256: ItemKeyYellow {
		keyid = 8756;
	};
	class ItemKeyYellow1257: ItemKeyYellow {
		keyid = 8757;
	};
	class ItemKeyYellow1258: ItemKeyYellow {
		keyid = 8758;
	};
	class ItemKeyYellow1259: ItemKeyYellow {
		keyid = 8759;
	};
	class ItemKeyYellow1260: ItemKeyYellow {
		keyid = 8760;
	};
	class ItemKeyYellow1261: ItemKeyYellow {
		keyid = 8761;
	};
	class ItemKeyYellow1262: ItemKeyYellow {
		keyid = 8762;
	};
	class ItemKeyYellow1263: ItemKeyYellow {
		keyid = 8763;
	};
	class ItemKeyYellow1264: ItemKeyYellow {
		keyid = 8764;
	};
	class ItemKeyYellow1265: ItemKeyYellow {
		keyid = 8765;
	};
	class ItemKeyYellow1266: ItemKeyYellow {
		keyid = 8766;
	};
	class ItemKeyYellow1267: ItemKeyYellow {
		keyid = 8767;
	};
	class ItemKeyYellow1268: ItemKeyYellow {
		keyid = 8768;
	};
	class ItemKeyYellow1269: ItemKeyYellow {
		keyid = 8769;
	};
	class ItemKeyYellow1270: ItemKeyYellow {
		keyid = 8770;
	};
	class ItemKeyYellow1271: ItemKeyYellow {
		keyid = 8771;
	};
	class ItemKeyYellow1272: ItemKeyYellow {
		keyid = 8772;
	};
	class ItemKeyYellow1273: ItemKeyYellow {
		keyid = 8773;
	};
	class ItemKeyYellow1274: ItemKeyYellow {
		keyid = 8774;
	};
	class ItemKeyYellow1275: ItemKeyYellow {
		keyid = 8775;
	};
	class ItemKeyYellow1276: ItemKeyYellow {
		keyid = 8776;
	};
	class ItemKeyYellow1277: ItemKeyYellow {
		keyid = 8777;
	};
	class ItemKeyYellow1278: ItemKeyYellow {
		keyid = 8778;
	};
	class ItemKeyYellow1279: ItemKeyYellow {
		keyid = 8779;
	};
	class ItemKeyYellow1280: ItemKeyYellow {
		keyid = 8780;
	};
	class ItemKeyYellow1281: ItemKeyYellow {
		keyid = 8781;
	};
	class ItemKeyYellow1282: ItemKeyYellow {
		keyid = 8782;
	};
	class ItemKeyYellow1283: ItemKeyYellow {
		keyid = 8783;
	};
	class ItemKeyYellow1284: ItemKeyYellow {
		keyid = 8784;
	};
	class ItemKeyYellow1285: ItemKeyYellow {
		keyid = 8785;
	};
	class ItemKeyYellow1286: ItemKeyYellow {
		keyid = 8786;
	};
	class ItemKeyYellow1287: ItemKeyYellow {
		keyid = 8787;
	};
	class ItemKeyYellow1288: ItemKeyYellow {
		keyid = 8788;
	};
	class ItemKeyYellow1289: ItemKeyYellow {
		keyid = 8789;
	};
	class ItemKeyYellow1290: ItemKeyYellow {
		keyid = 8790;
	};
	class ItemKeyYellow1291: ItemKeyYellow {
		keyid = 8791;
	};
	class ItemKeyYellow1292: ItemKeyYellow {
		keyid = 8792;
	};
	class ItemKeyYellow1293: ItemKeyYellow {
		keyid = 8793;
	};
	class ItemKeyYellow1294: ItemKeyYellow {
		keyid = 8794;
	};
	class ItemKeyYellow1295: ItemKeyYellow {
		keyid = 8795;
	};
	class ItemKeyYellow1296: ItemKeyYellow {
		keyid = 8796;
	};
	class ItemKeyYellow1297: ItemKeyYellow {
		keyid = 8797;
	};
	class ItemKeyYellow1298: ItemKeyYellow {
		keyid = 8798;
	};
	class ItemKeyYellow1299: ItemKeyYellow {
		keyid = 8799;
	};
	class ItemKeyYellow1300: ItemKeyYellow {
		keyid = 8800;
	};
	class ItemKeyYellow1301: ItemKeyYellow {
		keyid = 8801;
	};
	class ItemKeyYellow1302: ItemKeyYellow {
		keyid = 8802;
	};
	class ItemKeyYellow1303: ItemKeyYellow {
		keyid = 8803;
	};
	class ItemKeyYellow1304: ItemKeyYellow {
		keyid = 8804;
	};
	class ItemKeyYellow1305: ItemKeyYellow {
		keyid = 8805;
	};
	class ItemKeyYellow1306: ItemKeyYellow {
		keyid = 8806;
	};
	class ItemKeyYellow1307: ItemKeyYellow {
		keyid = 8807;
	};
	class ItemKeyYellow1308: ItemKeyYellow {
		keyid = 8808;
	};
	class ItemKeyYellow1309: ItemKeyYellow {
		keyid = 8809;
	};
	class ItemKeyYellow1310: ItemKeyYellow {
		keyid = 8810;
	};
	class ItemKeyYellow1311: ItemKeyYellow {
		keyid = 8811;
	};
	class ItemKeyYellow1312: ItemKeyYellow {
		keyid = 8812;
	};
	class ItemKeyYellow1313: ItemKeyYellow {
		keyid = 8813;
	};
	class ItemKeyYellow1314: ItemKeyYellow {
		keyid = 8814;
	};
	class ItemKeyYellow1315: ItemKeyYellow {
		keyid = 8815;
	};
	class ItemKeyYellow1316: ItemKeyYellow {
		keyid = 8816;
	};
	class ItemKeyYellow1317: ItemKeyYellow {
		keyid = 8817;
	};
	class ItemKeyYellow1318: ItemKeyYellow {
		keyid = 8818;
	};
	class ItemKeyYellow1319: ItemKeyYellow {
		keyid = 8819;
	};
	class ItemKeyYellow1320: ItemKeyYellow {
		keyid = 8820;
	};
	class ItemKeyYellow1321: ItemKeyYellow {
		keyid = 8821;
	};
	class ItemKeyYellow1322: ItemKeyYellow {
		keyid = 8822;
	};
	class ItemKeyYellow1323: ItemKeyYellow {
		keyid = 8823;
	};
	class ItemKeyYellow1324: ItemKeyYellow {
		keyid = 8824;
	};
	class ItemKeyYellow1325: ItemKeyYellow {
		keyid = 8825;
	};
	class ItemKeyYellow1326: ItemKeyYellow {
		keyid = 8826;
	};
	class ItemKeyYellow1327: ItemKeyYellow {
		keyid = 8827;
	};
	class ItemKeyYellow1328: ItemKeyYellow {
		keyid = 8828;
	};
	class ItemKeyYellow1329: ItemKeyYellow {
		keyid = 8829;
	};
	class ItemKeyYellow1330: ItemKeyYellow {
		keyid = 8830;
	};
	class ItemKeyYellow1331: ItemKeyYellow {
		keyid = 8831;
	};
	class ItemKeyYellow1332: ItemKeyYellow {
		keyid = 8832;
	};
	class ItemKeyYellow1333: ItemKeyYellow {
		keyid = 8833;
	};
	class ItemKeyYellow1334: ItemKeyYellow {
		keyid = 8834;
	};
	class ItemKeyYellow1335: ItemKeyYellow {
		keyid = 8835;
	};
	class ItemKeyYellow1336: ItemKeyYellow {
		keyid = 8836;
	};
	class ItemKeyYellow1337: ItemKeyYellow {
		keyid = 8837;
	};
	class ItemKeyYellow1338: ItemKeyYellow {
		keyid = 8838;
	};
	class ItemKeyYellow1339: ItemKeyYellow {
		keyid = 8839;
	};
	class ItemKeyYellow1340: ItemKeyYellow {
		keyid = 8840;
	};
	class ItemKeyYellow1341: ItemKeyYellow {
		keyid = 8841;
	};
	class ItemKeyYellow1342: ItemKeyYellow {
		keyid = 8842;
	};
	class ItemKeyYellow1343: ItemKeyYellow {
		keyid = 8843;
	};
	class ItemKeyYellow1344: ItemKeyYellow {
		keyid = 8844;
	};
	class ItemKeyYellow1345: ItemKeyYellow {
		keyid = 8845;
	};
	class ItemKeyYellow1346: ItemKeyYellow {
		keyid = 8846;
	};
	class ItemKeyYellow1347: ItemKeyYellow {
		keyid = 8847;
	};
	class ItemKeyYellow1348: ItemKeyYellow {
		keyid = 8848;
	};
	class ItemKeyYellow1349: ItemKeyYellow {
		keyid = 8849;
	};
	class ItemKeyYellow1350: ItemKeyYellow {
		keyid = 8850;
	};
	class ItemKeyYellow1351: ItemKeyYellow {
		keyid = 8851;
	};
	class ItemKeyYellow1352: ItemKeyYellow {
		keyid = 8852;
	};
	class ItemKeyYellow1353: ItemKeyYellow {
		keyid = 8853;
	};
	class ItemKeyYellow1354: ItemKeyYellow {
		keyid = 8854;
	};
	class ItemKeyYellow1355: ItemKeyYellow {
		keyid = 8855;
	};
	class ItemKeyYellow1356: ItemKeyYellow {
		keyid = 8856;
	};
	class ItemKeyYellow1357: ItemKeyYellow {
		keyid = 8857;
	};
	class ItemKeyYellow1358: ItemKeyYellow {
		keyid = 8858;
	};
	class ItemKeyYellow1359: ItemKeyYellow {
		keyid = 8859;
	};
	class ItemKeyYellow1360: ItemKeyYellow {
		keyid = 8860;
	};
	class ItemKeyYellow1361: ItemKeyYellow {
		keyid = 8861;
	};
	class ItemKeyYellow1362: ItemKeyYellow {
		keyid = 8862;
	};
	class ItemKeyYellow1363: ItemKeyYellow {
		keyid = 8863;
	};
	class ItemKeyYellow1364: ItemKeyYellow {
		keyid = 8864;
	};
	class ItemKeyYellow1365: ItemKeyYellow {
		keyid = 8865;
	};
	class ItemKeyYellow1366: ItemKeyYellow {
		keyid = 8866;
	};
	class ItemKeyYellow1367: ItemKeyYellow {
		keyid = 8867;
	};
	class ItemKeyYellow1368: ItemKeyYellow {
		keyid = 8868;
	};
	class ItemKeyYellow1369: ItemKeyYellow {
		keyid = 8869;
	};
	class ItemKeyYellow1370: ItemKeyYellow {
		keyid = 8870;
	};
	class ItemKeyYellow1371: ItemKeyYellow {
		keyid = 8871;
	};
	class ItemKeyYellow1372: ItemKeyYellow {
		keyid = 8872;
	};
	class ItemKeyYellow1373: ItemKeyYellow {
		keyid = 8873;
	};
	class ItemKeyYellow1374: ItemKeyYellow {
		keyid = 8874;
	};
	class ItemKeyYellow1375: ItemKeyYellow {
		keyid = 8875;
	};
	class ItemKeyYellow1376: ItemKeyYellow {
		keyid = 8876;
	};
	class ItemKeyYellow1377: ItemKeyYellow {
		keyid = 8877;
	};
	class ItemKeyYellow1378: ItemKeyYellow {
		keyid = 8878;
	};
	class ItemKeyYellow1379: ItemKeyYellow {
		keyid = 8879;
	};
	class ItemKeyYellow1380: ItemKeyYellow {
		keyid = 8880;
	};
	class ItemKeyYellow1381: ItemKeyYellow {
		keyid = 8881;
	};
	class ItemKeyYellow1382: ItemKeyYellow {
		keyid = 8882;
	};
	class ItemKeyYellow1383: ItemKeyYellow {
		keyid = 8883;
	};
	class ItemKeyYellow1384: ItemKeyYellow {
		keyid = 8884;
	};
	class ItemKeyYellow1385: ItemKeyYellow {
		keyid = 8885;
	};
	class ItemKeyYellow1386: ItemKeyYellow {
		keyid = 8886;
	};
	class ItemKeyYellow1387: ItemKeyYellow {
		keyid = 8887;
	};
	class ItemKeyYellow1388: ItemKeyYellow {
		keyid = 8888;
	};
	class ItemKeyYellow1389: ItemKeyYellow {
		keyid = 8889;
	};
	class ItemKeyYellow1390: ItemKeyYellow {
		keyid = 8890;
	};
	class ItemKeyYellow1391: ItemKeyYellow {
		keyid = 8891;
	};
	class ItemKeyYellow1392: ItemKeyYellow {
		keyid = 8892;
	};
	class ItemKeyYellow1393: ItemKeyYellow {
		keyid = 8893;
	};
	class ItemKeyYellow1394: ItemKeyYellow {
		keyid = 8894;
	};
	class ItemKeyYellow1395: ItemKeyYellow {
		keyid = 8895;
	};
	class ItemKeyYellow1396: ItemKeyYellow {
		keyid = 8896;
	};
	class ItemKeyYellow1397: ItemKeyYellow {
		keyid = 8897;
	};
	class ItemKeyYellow1398: ItemKeyYellow {
		keyid = 8898;
	};
	class ItemKeyYellow1399: ItemKeyYellow {
		keyid = 8899;
	};
	class ItemKeyYellow1400: ItemKeyYellow {
		keyid = 8900;
	};
	class ItemKeyYellow1401: ItemKeyYellow {
		keyid = 8901;
	};
	class ItemKeyYellow1402: ItemKeyYellow {
		keyid = 8902;
	};
	class ItemKeyYellow1403: ItemKeyYellow {
		keyid = 8903;
	};
	class ItemKeyYellow1404: ItemKeyYellow {
		keyid = 8904;
	};
	class ItemKeyYellow1405: ItemKeyYellow {
		keyid = 8905;
	};
	class ItemKeyYellow1406: ItemKeyYellow {
		keyid = 8906;
	};
	class ItemKeyYellow1407: ItemKeyYellow {
		keyid = 8907;
	};
	class ItemKeyYellow1408: ItemKeyYellow {
		keyid = 8908;
	};
	class ItemKeyYellow1409: ItemKeyYellow {
		keyid = 8909;
	};
	class ItemKeyYellow1410: ItemKeyYellow {
		keyid = 8910;
	};
	class ItemKeyYellow1411: ItemKeyYellow {
		keyid = 8911;
	};
	class ItemKeyYellow1412: ItemKeyYellow {
		keyid = 8912;
	};
	class ItemKeyYellow1413: ItemKeyYellow {
		keyid = 8913;
	};
	class ItemKeyYellow1414: ItemKeyYellow {
		keyid = 8914;
	};
	class ItemKeyYellow1415: ItemKeyYellow {
		keyid = 8915;
	};
	class ItemKeyYellow1416: ItemKeyYellow {
		keyid = 8916;
	};
	class ItemKeyYellow1417: ItemKeyYellow {
		keyid = 8917;
	};
	class ItemKeyYellow1418: ItemKeyYellow {
		keyid = 8918;
	};
	class ItemKeyYellow1419: ItemKeyYellow {
		keyid = 8919;
	};
	class ItemKeyYellow1420: ItemKeyYellow {
		keyid = 8920;
	};
	class ItemKeyYellow1421: ItemKeyYellow {
		keyid = 8921;
	};
	class ItemKeyYellow1422: ItemKeyYellow {
		keyid = 8922;
	};
	class ItemKeyYellow1423: ItemKeyYellow {
		keyid = 8923;
	};
	class ItemKeyYellow1424: ItemKeyYellow {
		keyid = 8924;
	};
	class ItemKeyYellow1425: ItemKeyYellow {
		keyid = 8925;
	};
	class ItemKeyYellow1426: ItemKeyYellow {
		keyid = 8926;
	};
	class ItemKeyYellow1427: ItemKeyYellow {
		keyid = 8927;
	};
	class ItemKeyYellow1428: ItemKeyYellow {
		keyid = 8928;
	};
	class ItemKeyYellow1429: ItemKeyYellow {
		keyid = 8929;
	};
	class ItemKeyYellow1430: ItemKeyYellow {
		keyid = 8930;
	};
	class ItemKeyYellow1431: ItemKeyYellow {
		keyid = 8931;
	};
	class ItemKeyYellow1432: ItemKeyYellow {
		keyid = 8932;
	};
	class ItemKeyYellow1433: ItemKeyYellow {
		keyid = 8933;
	};
	class ItemKeyYellow1434: ItemKeyYellow {
		keyid = 8934;
	};
	class ItemKeyYellow1435: ItemKeyYellow {
		keyid = 8935;
	};
	class ItemKeyYellow1436: ItemKeyYellow {
		keyid = 8936;
	};
	class ItemKeyYellow1437: ItemKeyYellow {
		keyid = 8937;
	};
	class ItemKeyYellow1438: ItemKeyYellow {
		keyid = 8938;
	};
	class ItemKeyYellow1439: ItemKeyYellow {
		keyid = 8939;
	};
	class ItemKeyYellow1440: ItemKeyYellow {
		keyid = 8940;
	};
	class ItemKeyYellow1441: ItemKeyYellow {
		keyid = 8941;
	};
	class ItemKeyYellow1442: ItemKeyYellow {
		keyid = 8942;
	};
	class ItemKeyYellow1443: ItemKeyYellow {
		keyid = 8943;
	};
	class ItemKeyYellow1444: ItemKeyYellow {
		keyid = 8944;
	};
	class ItemKeyYellow1445: ItemKeyYellow {
		keyid = 8945;
	};
	class ItemKeyYellow1446: ItemKeyYellow {
		keyid = 8946;
	};
	class ItemKeyYellow1447: ItemKeyYellow {
		keyid = 8947;
	};
	class ItemKeyYellow1448: ItemKeyYellow {
		keyid = 8948;
	};
	class ItemKeyYellow1449: ItemKeyYellow {
		keyid = 8949;
	};
	class ItemKeyYellow1450: ItemKeyYellow {
		keyid = 8950;
	};
	class ItemKeyYellow1451: ItemKeyYellow {
		keyid = 8951;
	};
	class ItemKeyYellow1452: ItemKeyYellow {
		keyid = 8952;
	};
	class ItemKeyYellow1453: ItemKeyYellow {
		keyid = 8953;
	};
	class ItemKeyYellow1454: ItemKeyYellow {
		keyid = 8954;
	};
	class ItemKeyYellow1455: ItemKeyYellow {
		keyid = 8955;
	};
	class ItemKeyYellow1456: ItemKeyYellow {
		keyid = 8956;
	};
	class ItemKeyYellow1457: ItemKeyYellow {
		keyid = 8957;
	};
	class ItemKeyYellow1458: ItemKeyYellow {
		keyid = 8958;
	};
	class ItemKeyYellow1459: ItemKeyYellow {
		keyid = 8959;
	};
	class ItemKeyYellow1460: ItemKeyYellow {
		keyid = 8960;
	};
	class ItemKeyYellow1461: ItemKeyYellow {
		keyid = 8961;
	};
	class ItemKeyYellow1462: ItemKeyYellow {
		keyid = 8962;
	};
	class ItemKeyYellow1463: ItemKeyYellow {
		keyid = 8963;
	};
	class ItemKeyYellow1464: ItemKeyYellow {
		keyid = 8964;
	};
	class ItemKeyYellow1465: ItemKeyYellow {
		keyid = 8965;
	};
	class ItemKeyYellow1466: ItemKeyYellow {
		keyid = 8966;
	};
	class ItemKeyYellow1467: ItemKeyYellow {
		keyid = 8967;
	};
	class ItemKeyYellow1468: ItemKeyYellow {
		keyid = 8968;
	};
	class ItemKeyYellow1469: ItemKeyYellow {
		keyid = 8969;
	};
	class ItemKeyYellow1470: ItemKeyYellow {
		keyid = 8970;
	};
	class ItemKeyYellow1471: ItemKeyYellow {
		keyid = 8971;
	};
	class ItemKeyYellow1472: ItemKeyYellow {
		keyid = 8972;
	};
	class ItemKeyYellow1473: ItemKeyYellow {
		keyid = 8973;
	};
	class ItemKeyYellow1474: ItemKeyYellow {
		keyid = 8974;
	};
	class ItemKeyYellow1475: ItemKeyYellow {
		keyid = 8975;
	};
	class ItemKeyYellow1476: ItemKeyYellow {
		keyid = 8976;
	};
	class ItemKeyYellow1477: ItemKeyYellow {
		keyid = 8977;
	};
	class ItemKeyYellow1478: ItemKeyYellow {
		keyid = 8978;
	};
	class ItemKeyYellow1479: ItemKeyYellow {
		keyid = 8979;
	};
	class ItemKeyYellow1480: ItemKeyYellow {
		keyid = 8980;
	};
	class ItemKeyYellow1481: ItemKeyYellow {
		keyid = 8981;
	};
	class ItemKeyYellow1482: ItemKeyYellow {
		keyid = 8982;
	};
	class ItemKeyYellow1483: ItemKeyYellow {
		keyid = 8983;
	};
	class ItemKeyYellow1484: ItemKeyYellow {
		keyid = 8984;
	};
	class ItemKeyYellow1485: ItemKeyYellow {
		keyid = 8985;
	};
	class ItemKeyYellow1486: ItemKeyYellow {
		keyid = 8986;
	};
	class ItemKeyYellow1487: ItemKeyYellow {
		keyid = 8987;
	};
	class ItemKeyYellow1488: ItemKeyYellow {
		keyid = 8988;
	};
	class ItemKeyYellow1489: ItemKeyYellow {
		keyid = 8989;
	};
	class ItemKeyYellow1490: ItemKeyYellow {
		keyid = 8990;
	};
	class ItemKeyYellow1491: ItemKeyYellow {
		keyid = 8991;
	};
	class ItemKeyYellow1492: ItemKeyYellow {
		keyid = 8992;
	};
	class ItemKeyYellow1493: ItemKeyYellow {
		keyid = 8993;
	};
	class ItemKeyYellow1494: ItemKeyYellow {
		keyid = 8994;
	};
	class ItemKeyYellow1495: ItemKeyYellow {
		keyid = 8995;
	};
	class ItemKeyYellow1496: ItemKeyYellow {
		keyid = 8996;
	};
	class ItemKeyYellow1497: ItemKeyYellow {
		keyid = 8997;
	};
	class ItemKeyYellow1498: ItemKeyYellow {
		keyid = 8998;
	};
	class ItemKeyYellow1499: ItemKeyYellow {
		keyid = 8999;
	};
	class ItemKeyYellow1500: ItemKeyYellow {
		keyid = 9000;
	};
	class ItemKeyYellow1501: ItemKeyYellow {
		keyid = 9001;
	};
	class ItemKeyYellow1502: ItemKeyYellow {
		keyid = 9002;
	};
	class ItemKeyYellow1503: ItemKeyYellow {
		keyid = 9003;
	};
	class ItemKeyYellow1504: ItemKeyYellow {
		keyid = 9004;
	};
	class ItemKeyYellow1505: ItemKeyYellow {
		keyid = 9005;
	};
	class ItemKeyYellow1506: ItemKeyYellow {
		keyid = 9006;
	};
	class ItemKeyYellow1507: ItemKeyYellow {
		keyid = 9007;
	};
	class ItemKeyYellow1508: ItemKeyYellow {
		keyid = 9008;
	};
	class ItemKeyYellow1509: ItemKeyYellow {
		keyid = 9009;
	};
	class ItemKeyYellow1510: ItemKeyYellow {
		keyid = 9010;
	};
	class ItemKeyYellow1511: ItemKeyYellow {
		keyid = 9011;
	};
	class ItemKeyYellow1512: ItemKeyYellow {
		keyid = 9012;
	};
	class ItemKeyYellow1513: ItemKeyYellow {
		keyid = 9013;
	};
	class ItemKeyYellow1514: ItemKeyYellow {
		keyid = 9014;
	};
	class ItemKeyYellow1515: ItemKeyYellow {
		keyid = 9015;
	};
	class ItemKeyYellow1516: ItemKeyYellow {
		keyid = 9016;
	};
	class ItemKeyYellow1517: ItemKeyYellow {
		keyid = 9017;
	};
	class ItemKeyYellow1518: ItemKeyYellow {
		keyid = 9018;
	};
	class ItemKeyYellow1519: ItemKeyYellow {
		keyid = 9019;
	};
	class ItemKeyYellow1520: ItemKeyYellow {
		keyid = 9020;
	};
	class ItemKeyYellow1521: ItemKeyYellow {
		keyid = 9021;
	};
	class ItemKeyYellow1522: ItemKeyYellow {
		keyid = 9022;
	};
	class ItemKeyYellow1523: ItemKeyYellow {
		keyid = 9023;
	};
	class ItemKeyYellow1524: ItemKeyYellow {
		keyid = 9024;
	};
	class ItemKeyYellow1525: ItemKeyYellow {
		keyid = 9025;
	};
	class ItemKeyYellow1526: ItemKeyYellow {
		keyid = 9026;
	};
	class ItemKeyYellow1527: ItemKeyYellow {
		keyid = 9027;
	};
	class ItemKeyYellow1528: ItemKeyYellow {
		keyid = 9028;
	};
	class ItemKeyYellow1529: ItemKeyYellow {
		keyid = 9029;
	};
	class ItemKeyYellow1530: ItemKeyYellow {
		keyid = 9030;
	};
	class ItemKeyYellow1531: ItemKeyYellow {
		keyid = 9031;
	};
	class ItemKeyYellow1532: ItemKeyYellow {
		keyid = 9032;
	};
	class ItemKeyYellow1533: ItemKeyYellow {
		keyid = 9033;
	};
	class ItemKeyYellow1534: ItemKeyYellow {
		keyid = 9034;
	};
	class ItemKeyYellow1535: ItemKeyYellow {
		keyid = 9035;
	};
	class ItemKeyYellow1536: ItemKeyYellow {
		keyid = 9036;
	};
	class ItemKeyYellow1537: ItemKeyYellow {
		keyid = 9037;
	};
	class ItemKeyYellow1538: ItemKeyYellow {
		keyid = 9038;
	};
	class ItemKeyYellow1539: ItemKeyYellow {
		keyid = 9039;
	};
	class ItemKeyYellow1540: ItemKeyYellow {
		keyid = 9040;
	};
	class ItemKeyYellow1541: ItemKeyYellow {
		keyid = 9041;
	};
	class ItemKeyYellow1542: ItemKeyYellow {
		keyid = 9042;
	};
	class ItemKeyYellow1543: ItemKeyYellow {
		keyid = 9043;
	};
	class ItemKeyYellow1544: ItemKeyYellow {
		keyid = 9044;
	};
	class ItemKeyYellow1545: ItemKeyYellow {
		keyid = 9045;
	};
	class ItemKeyYellow1546: ItemKeyYellow {
		keyid = 9046;
	};
	class ItemKeyYellow1547: ItemKeyYellow {
		keyid = 9047;
	};
	class ItemKeyYellow1548: ItemKeyYellow {
		keyid = 9048;
	};
	class ItemKeyYellow1549: ItemKeyYellow {
		keyid = 9049;
	};
	class ItemKeyYellow1550: ItemKeyYellow {
		keyid = 9050;
	};
	class ItemKeyYellow1551: ItemKeyYellow {
		keyid = 9051;
	};
	class ItemKeyYellow1552: ItemKeyYellow {
		keyid = 9052;
	};
	class ItemKeyYellow1553: ItemKeyYellow {
		keyid = 9053;
	};
	class ItemKeyYellow1554: ItemKeyYellow {
		keyid = 9054;
	};
	class ItemKeyYellow1555: ItemKeyYellow {
		keyid = 9055;
	};
	class ItemKeyYellow1556: ItemKeyYellow {
		keyid = 9056;
	};
	class ItemKeyYellow1557: ItemKeyYellow {
		keyid = 9057;
	};
	class ItemKeyYellow1558: ItemKeyYellow {
		keyid = 9058;
	};
	class ItemKeyYellow1559: ItemKeyYellow {
		keyid = 9059;
	};
	class ItemKeyYellow1560: ItemKeyYellow {
		keyid = 9060;
	};
	class ItemKeyYellow1561: ItemKeyYellow {
		keyid = 9061;
	};
	class ItemKeyYellow1562: ItemKeyYellow {
		keyid = 9062;
	};
	class ItemKeyYellow1563: ItemKeyYellow {
		keyid = 9063;
	};
	class ItemKeyYellow1564: ItemKeyYellow {
		keyid = 9064;
	};
	class ItemKeyYellow1565: ItemKeyYellow {
		keyid = 9065;
	};
	class ItemKeyYellow1566: ItemKeyYellow {
		keyid = 9066;
	};
	class ItemKeyYellow1567: ItemKeyYellow {
		keyid = 9067;
	};
	class ItemKeyYellow1568: ItemKeyYellow {
		keyid = 9068;
	};
	class ItemKeyYellow1569: ItemKeyYellow {
		keyid = 9069;
	};
	class ItemKeyYellow1570: ItemKeyYellow {
		keyid = 9070;
	};
	class ItemKeyYellow1571: ItemKeyYellow {
		keyid = 9071;
	};
	class ItemKeyYellow1572: ItemKeyYellow {
		keyid = 9072;
	};
	class ItemKeyYellow1573: ItemKeyYellow {
		keyid = 9073;
	};
	class ItemKeyYellow1574: ItemKeyYellow {
		keyid = 9074;
	};
	class ItemKeyYellow1575: ItemKeyYellow {
		keyid = 9075;
	};
	class ItemKeyYellow1576: ItemKeyYellow {
		keyid = 9076;
	};
	class ItemKeyYellow1577: ItemKeyYellow {
		keyid = 9077;
	};
	class ItemKeyYellow1578: ItemKeyYellow {
		keyid = 9078;
	};
	class ItemKeyYellow1579: ItemKeyYellow {
		keyid = 9079;
	};
	class ItemKeyYellow1580: ItemKeyYellow {
		keyid = 9080;
	};
	class ItemKeyYellow1581: ItemKeyYellow {
		keyid = 9081;
	};
	class ItemKeyYellow1582: ItemKeyYellow {
		keyid = 9082;
	};
	class ItemKeyYellow1583: ItemKeyYellow {
		keyid = 9083;
	};
	class ItemKeyYellow1584: ItemKeyYellow {
		keyid = 9084;
	};
	class ItemKeyYellow1585: ItemKeyYellow {
		keyid = 9085;
	};
	class ItemKeyYellow1586: ItemKeyYellow {
		keyid = 9086;
	};
	class ItemKeyYellow1587: ItemKeyYellow {
		keyid = 9087;
	};
	class ItemKeyYellow1588: ItemKeyYellow {
		keyid = 9088;
	};
	class ItemKeyYellow1589: ItemKeyYellow {
		keyid = 9089;
	};
	class ItemKeyYellow1590: ItemKeyYellow {
		keyid = 9090;
	};
	class ItemKeyYellow1591: ItemKeyYellow {
		keyid = 9091;
	};
	class ItemKeyYellow1592: ItemKeyYellow {
		keyid = 9092;
	};
	class ItemKeyYellow1593: ItemKeyYellow {
		keyid = 9093;
	};
	class ItemKeyYellow1594: ItemKeyYellow {
		keyid = 9094;
	};
	class ItemKeyYellow1595: ItemKeyYellow {
		keyid = 9095;
	};
	class ItemKeyYellow1596: ItemKeyYellow {
		keyid = 9096;
	};
	class ItemKeyYellow1597: ItemKeyYellow {
		keyid = 9097;
	};
	class ItemKeyYellow1598: ItemKeyYellow {
		keyid = 9098;
	};
	class ItemKeyYellow1599: ItemKeyYellow {
		keyid = 9099;
	};
	class ItemKeyYellow1600: ItemKeyYellow {
		keyid = 9100;
	};
	class ItemKeyYellow1601: ItemKeyYellow {
		keyid = 9101;
	};
	class ItemKeyYellow1602: ItemKeyYellow {
		keyid = 9102;
	};
	class ItemKeyYellow1603: ItemKeyYellow {
		keyid = 9103;
	};
	class ItemKeyYellow1604: ItemKeyYellow {
		keyid = 9104;
	};
	class ItemKeyYellow1605: ItemKeyYellow {
		keyid = 9105;
	};
	class ItemKeyYellow1606: ItemKeyYellow {
		keyid = 9106;
	};
	class ItemKeyYellow1607: ItemKeyYellow {
		keyid = 9107;
	};
	class ItemKeyYellow1608: ItemKeyYellow {
		keyid = 9108;
	};
	class ItemKeyYellow1609: ItemKeyYellow {
		keyid = 9109;
	};
	class ItemKeyYellow1610: ItemKeyYellow {
		keyid = 9110;
	};
	class ItemKeyYellow1611: ItemKeyYellow {
		keyid = 9111;
	};
	class ItemKeyYellow1612: ItemKeyYellow {
		keyid = 9112;
	};
	class ItemKeyYellow1613: ItemKeyYellow {
		keyid = 9113;
	};
	class ItemKeyYellow1614: ItemKeyYellow {
		keyid = 9114;
	};
	class ItemKeyYellow1615: ItemKeyYellow {
		keyid = 9115;
	};
	class ItemKeyYellow1616: ItemKeyYellow {
		keyid = 9116;
	};
	class ItemKeyYellow1617: ItemKeyYellow {
		keyid = 9117;
	};
	class ItemKeyYellow1618: ItemKeyYellow {
		keyid = 9118;
	};
	class ItemKeyYellow1619: ItemKeyYellow {
		keyid = 9119;
	};
	class ItemKeyYellow1620: ItemKeyYellow {
		keyid = 9120;
	};
	class ItemKeyYellow1621: ItemKeyYellow {
		keyid = 9121;
	};
	class ItemKeyYellow1622: ItemKeyYellow {
		keyid = 9122;
	};
	class ItemKeyYellow1623: ItemKeyYellow {
		keyid = 9123;
	};
	class ItemKeyYellow1624: ItemKeyYellow {
		keyid = 9124;
	};
	class ItemKeyYellow1625: ItemKeyYellow {
		keyid = 9125;
	};
	class ItemKeyYellow1626: ItemKeyYellow {
		keyid = 9126;
	};
	class ItemKeyYellow1627: ItemKeyYellow {
		keyid = 9127;
	};
	class ItemKeyYellow1628: ItemKeyYellow {
		keyid = 9128;
	};
	class ItemKeyYellow1629: ItemKeyYellow {
		keyid = 9129;
	};
	class ItemKeyYellow1630: ItemKeyYellow {
		keyid = 9130;
	};
	class ItemKeyYellow1631: ItemKeyYellow {
		keyid = 9131;
	};
	class ItemKeyYellow1632: ItemKeyYellow {
		keyid = 9132;
	};
	class ItemKeyYellow1633: ItemKeyYellow {
		keyid = 9133;
	};
	class ItemKeyYellow1634: ItemKeyYellow {
		keyid = 9134;
	};
	class ItemKeyYellow1635: ItemKeyYellow {
		keyid = 9135;
	};
	class ItemKeyYellow1636: ItemKeyYellow {
		keyid = 9136;
	};
	class ItemKeyYellow1637: ItemKeyYellow {
		keyid = 9137;
	};
	class ItemKeyYellow1638: ItemKeyYellow {
		keyid = 9138;
	};
	class ItemKeyYellow1639: ItemKeyYellow {
		keyid = 9139;
	};
	class ItemKeyYellow1640: ItemKeyYellow {
		keyid = 9140;
	};
	class ItemKeyYellow1641: ItemKeyYellow {
		keyid = 9141;
	};
	class ItemKeyYellow1642: ItemKeyYellow {
		keyid = 9142;
	};
	class ItemKeyYellow1643: ItemKeyYellow {
		keyid = 9143;
	};
	class ItemKeyYellow1644: ItemKeyYellow {
		keyid = 9144;
	};
	class ItemKeyYellow1645: ItemKeyYellow {
		keyid = 9145;
	};
	class ItemKeyYellow1646: ItemKeyYellow {
		keyid = 9146;
	};
	class ItemKeyYellow1647: ItemKeyYellow {
		keyid = 9147;
	};
	class ItemKeyYellow1648: ItemKeyYellow {
		keyid = 9148;
	};
	class ItemKeyYellow1649: ItemKeyYellow {
		keyid = 9149;
	};
	class ItemKeyYellow1650: ItemKeyYellow {
		keyid = 9150;
	};
	class ItemKeyYellow1651: ItemKeyYellow {
		keyid = 9151;
	};
	class ItemKeyYellow1652: ItemKeyYellow {
		keyid = 9152;
	};
	class ItemKeyYellow1653: ItemKeyYellow {
		keyid = 9153;
	};
	class ItemKeyYellow1654: ItemKeyYellow {
		keyid = 9154;
	};
	class ItemKeyYellow1655: ItemKeyYellow {
		keyid = 9155;
	};
	class ItemKeyYellow1656: ItemKeyYellow {
		keyid = 9156;
	};
	class ItemKeyYellow1657: ItemKeyYellow {
		keyid = 9157;
	};
	class ItemKeyYellow1658: ItemKeyYellow {
		keyid = 9158;
	};
	class ItemKeyYellow1659: ItemKeyYellow {
		keyid = 9159;
	};
	class ItemKeyYellow1660: ItemKeyYellow {
		keyid = 9160;
	};
	class ItemKeyYellow1661: ItemKeyYellow {
		keyid = 9161;
	};
	class ItemKeyYellow1662: ItemKeyYellow {
		keyid = 9162;
	};
	class ItemKeyYellow1663: ItemKeyYellow {
		keyid = 9163;
	};
	class ItemKeyYellow1664: ItemKeyYellow {
		keyid = 9164;
	};
	class ItemKeyYellow1665: ItemKeyYellow {
		keyid = 9165;
	};
	class ItemKeyYellow1666: ItemKeyYellow {
		keyid = 9166;
	};
	class ItemKeyYellow1667: ItemKeyYellow {
		keyid = 9167;
	};
	class ItemKeyYellow1668: ItemKeyYellow {
		keyid = 9168;
	};
	class ItemKeyYellow1669: ItemKeyYellow {
		keyid = 9169;
	};
	class ItemKeyYellow1670: ItemKeyYellow {
		keyid = 9170;
	};
	class ItemKeyYellow1671: ItemKeyYellow {
		keyid = 9171;
	};
	class ItemKeyYellow1672: ItemKeyYellow {
		keyid = 9172;
	};
	class ItemKeyYellow1673: ItemKeyYellow {
		keyid = 9173;
	};
	class ItemKeyYellow1674: ItemKeyYellow {
		keyid = 9174;
	};
	class ItemKeyYellow1675: ItemKeyYellow {
		keyid = 9175;
	};
	class ItemKeyYellow1676: ItemKeyYellow {
		keyid = 9176;
	};
	class ItemKeyYellow1677: ItemKeyYellow {
		keyid = 9177;
	};
	class ItemKeyYellow1678: ItemKeyYellow {
		keyid = 9178;
	};
	class ItemKeyYellow1679: ItemKeyYellow {
		keyid = 9179;
	};
	class ItemKeyYellow1680: ItemKeyYellow {
		keyid = 9180;
	};
	class ItemKeyYellow1681: ItemKeyYellow {
		keyid = 9181;
	};
	class ItemKeyYellow1682: ItemKeyYellow {
		keyid = 9182;
	};
	class ItemKeyYellow1683: ItemKeyYellow {
		keyid = 9183;
	};
	class ItemKeyYellow1684: ItemKeyYellow {
		keyid = 9184;
	};
	class ItemKeyYellow1685: ItemKeyYellow {
		keyid = 9185;
	};
	class ItemKeyYellow1686: ItemKeyYellow {
		keyid = 9186;
	};
	class ItemKeyYellow1687: ItemKeyYellow {
		keyid = 9187;
	};
	class ItemKeyYellow1688: ItemKeyYellow {
		keyid = 9188;
	};
	class ItemKeyYellow1689: ItemKeyYellow {
		keyid = 9189;
	};
	class ItemKeyYellow1690: ItemKeyYellow {
		keyid = 9190;
	};
	class ItemKeyYellow1691: ItemKeyYellow {
		keyid = 9191;
	};
	class ItemKeyYellow1692: ItemKeyYellow {
		keyid = 9192;
	};
	class ItemKeyYellow1693: ItemKeyYellow {
		keyid = 9193;
	};
	class ItemKeyYellow1694: ItemKeyYellow {
		keyid = 9194;
	};
	class ItemKeyYellow1695: ItemKeyYellow {
		keyid = 9195;
	};
	class ItemKeyYellow1696: ItemKeyYellow {
		keyid = 9196;
	};
	class ItemKeyYellow1697: ItemKeyYellow {
		keyid = 9197;
	};
	class ItemKeyYellow1698: ItemKeyYellow {
		keyid = 9198;
	};
	class ItemKeyYellow1699: ItemKeyYellow {
		keyid = 9199;
	};
	class ItemKeyYellow1700: ItemKeyYellow {
		keyid = 9200;
	};
	class ItemKeyYellow1701: ItemKeyYellow {
		keyid = 9201;
	};
	class ItemKeyYellow1702: ItemKeyYellow {
		keyid = 9202;
	};
	class ItemKeyYellow1703: ItemKeyYellow {
		keyid = 9203;
	};
	class ItemKeyYellow1704: ItemKeyYellow {
		keyid = 9204;
	};
	class ItemKeyYellow1705: ItemKeyYellow {
		keyid = 9205;
	};
	class ItemKeyYellow1706: ItemKeyYellow {
		keyid = 9206;
	};
	class ItemKeyYellow1707: ItemKeyYellow {
		keyid = 9207;
	};
	class ItemKeyYellow1708: ItemKeyYellow {
		keyid = 9208;
	};
	class ItemKeyYellow1709: ItemKeyYellow {
		keyid = 9209;
	};
	class ItemKeyYellow1710: ItemKeyYellow {
		keyid = 9210;
	};
	class ItemKeyYellow1711: ItemKeyYellow {
		keyid = 9211;
	};
	class ItemKeyYellow1712: ItemKeyYellow {
		keyid = 9212;
	};
	class ItemKeyYellow1713: ItemKeyYellow {
		keyid = 9213;
	};
	class ItemKeyYellow1714: ItemKeyYellow {
		keyid = 9214;
	};
	class ItemKeyYellow1715: ItemKeyYellow {
		keyid = 9215;
	};
	class ItemKeyYellow1716: ItemKeyYellow {
		keyid = 9216;
	};
	class ItemKeyYellow1717: ItemKeyYellow {
		keyid = 9217;
	};
	class ItemKeyYellow1718: ItemKeyYellow {
		keyid = 9218;
	};
	class ItemKeyYellow1719: ItemKeyYellow {
		keyid = 9219;
	};
	class ItemKeyYellow1720: ItemKeyYellow {
		keyid = 9220;
	};
	class ItemKeyYellow1721: ItemKeyYellow {
		keyid = 9221;
	};
	class ItemKeyYellow1722: ItemKeyYellow {
		keyid = 9222;
	};
	class ItemKeyYellow1723: ItemKeyYellow {
		keyid = 9223;
	};
	class ItemKeyYellow1724: ItemKeyYellow {
		keyid = 9224;
	};
	class ItemKeyYellow1725: ItemKeyYellow {
		keyid = 9225;
	};
	class ItemKeyYellow1726: ItemKeyYellow {
		keyid = 9226;
	};
	class ItemKeyYellow1727: ItemKeyYellow {
		keyid = 9227;
	};
	class ItemKeyYellow1728: ItemKeyYellow {
		keyid = 9228;
	};
	class ItemKeyYellow1729: ItemKeyYellow {
		keyid = 9229;
	};
	class ItemKeyYellow1730: ItemKeyYellow {
		keyid = 9230;
	};
	class ItemKeyYellow1731: ItemKeyYellow {
		keyid = 9231;
	};
	class ItemKeyYellow1732: ItemKeyYellow {
		keyid = 9232;
	};
	class ItemKeyYellow1733: ItemKeyYellow {
		keyid = 9233;
	};
	class ItemKeyYellow1734: ItemKeyYellow {
		keyid = 9234;
	};
	class ItemKeyYellow1735: ItemKeyYellow {
		keyid = 9235;
	};
	class ItemKeyYellow1736: ItemKeyYellow {
		keyid = 9236;
	};
	class ItemKeyYellow1737: ItemKeyYellow {
		keyid = 9237;
	};
	class ItemKeyYellow1738: ItemKeyYellow {
		keyid = 9238;
	};
	class ItemKeyYellow1739: ItemKeyYellow {
		keyid = 9239;
	};
	class ItemKeyYellow1740: ItemKeyYellow {
		keyid = 9240;
	};
	class ItemKeyYellow1741: ItemKeyYellow {
		keyid = 9241;
	};
	class ItemKeyYellow1742: ItemKeyYellow {
		keyid = 9242;
	};
	class ItemKeyYellow1743: ItemKeyYellow {
		keyid = 9243;
	};
	class ItemKeyYellow1744: ItemKeyYellow {
		keyid = 9244;
	};
	class ItemKeyYellow1745: ItemKeyYellow {
		keyid = 9245;
	};
	class ItemKeyYellow1746: ItemKeyYellow {
		keyid = 9246;
	};
	class ItemKeyYellow1747: ItemKeyYellow {
		keyid = 9247;
	};
	class ItemKeyYellow1748: ItemKeyYellow {
		keyid = 9248;
	};
	class ItemKeyYellow1749: ItemKeyYellow {
		keyid = 9249;
	};
	class ItemKeyYellow1750: ItemKeyYellow {
		keyid = 9250;
	};
	class ItemKeyYellow1751: ItemKeyYellow {
		keyid = 9251;
	};
	class ItemKeyYellow1752: ItemKeyYellow {
		keyid = 9252;
	};
	class ItemKeyYellow1753: ItemKeyYellow {
		keyid = 9253;
	};
	class ItemKeyYellow1754: ItemKeyYellow {
		keyid = 9254;
	};
	class ItemKeyYellow1755: ItemKeyYellow {
		keyid = 9255;
	};
	class ItemKeyYellow1756: ItemKeyYellow {
		keyid = 9256;
	};
	class ItemKeyYellow1757: ItemKeyYellow {
		keyid = 9257;
	};
	class ItemKeyYellow1758: ItemKeyYellow {
		keyid = 9258;
	};
	class ItemKeyYellow1759: ItemKeyYellow {
		keyid = 9259;
	};
	class ItemKeyYellow1760: ItemKeyYellow {
		keyid = 9260;
	};
	class ItemKeyYellow1761: ItemKeyYellow {
		keyid = 9261;
	};
	class ItemKeyYellow1762: ItemKeyYellow {
		keyid = 9262;
	};
	class ItemKeyYellow1763: ItemKeyYellow {
		keyid = 9263;
	};
	class ItemKeyYellow1764: ItemKeyYellow {
		keyid = 9264;
	};
	class ItemKeyYellow1765: ItemKeyYellow {
		keyid = 9265;
	};
	class ItemKeyYellow1766: ItemKeyYellow {
		keyid = 9266;
	};
	class ItemKeyYellow1767: ItemKeyYellow {
		keyid = 9267;
	};
	class ItemKeyYellow1768: ItemKeyYellow {
		keyid = 9268;
	};
	class ItemKeyYellow1769: ItemKeyYellow {
		keyid = 9269;
	};
	class ItemKeyYellow1770: ItemKeyYellow {
		keyid = 9270;
	};
	class ItemKeyYellow1771: ItemKeyYellow {
		keyid = 9271;
	};
	class ItemKeyYellow1772: ItemKeyYellow {
		keyid = 9272;
	};
	class ItemKeyYellow1773: ItemKeyYellow {
		keyid = 9273;
	};
	class ItemKeyYellow1774: ItemKeyYellow {
		keyid = 9274;
	};
	class ItemKeyYellow1775: ItemKeyYellow {
		keyid = 9275;
	};
	class ItemKeyYellow1776: ItemKeyYellow {
		keyid = 9276;
	};
	class ItemKeyYellow1777: ItemKeyYellow {
		keyid = 9277;
	};
	class ItemKeyYellow1778: ItemKeyYellow {
		keyid = 9278;
	};
	class ItemKeyYellow1779: ItemKeyYellow {
		keyid = 9279;
	};
	class ItemKeyYellow1780: ItemKeyYellow {
		keyid = 9280;
	};
	class ItemKeyYellow1781: ItemKeyYellow {
		keyid = 9281;
	};
	class ItemKeyYellow1782: ItemKeyYellow {
		keyid = 9282;
	};
	class ItemKeyYellow1783: ItemKeyYellow {
		keyid = 9283;
	};
	class ItemKeyYellow1784: ItemKeyYellow {
		keyid = 9284;
	};
	class ItemKeyYellow1785: ItemKeyYellow {
		keyid = 9285;
	};
	class ItemKeyYellow1786: ItemKeyYellow {
		keyid = 9286;
	};
	class ItemKeyYellow1787: ItemKeyYellow {
		keyid = 9287;
	};
	class ItemKeyYellow1788: ItemKeyYellow {
		keyid = 9288;
	};
	class ItemKeyYellow1789: ItemKeyYellow {
		keyid = 9289;
	};
	class ItemKeyYellow1790: ItemKeyYellow {
		keyid = 9290;
	};
	class ItemKeyYellow1791: ItemKeyYellow {
		keyid = 9291;
	};
	class ItemKeyYellow1792: ItemKeyYellow {
		keyid = 9292;
	};
	class ItemKeyYellow1793: ItemKeyYellow {
		keyid = 9293;
	};
	class ItemKeyYellow1794: ItemKeyYellow {
		keyid = 9294;
	};
	class ItemKeyYellow1795: ItemKeyYellow {
		keyid = 9295;
	};
	class ItemKeyYellow1796: ItemKeyYellow {
		keyid = 9296;
	};
	class ItemKeyYellow1797: ItemKeyYellow {
		keyid = 9297;
	};
	class ItemKeyYellow1798: ItemKeyYellow {
		keyid = 9298;
	};
	class ItemKeyYellow1799: ItemKeyYellow {
		keyid = 9299;
	};
	class ItemKeyYellow1800: ItemKeyYellow {
		keyid = 9300;
	};
	class ItemKeyYellow1801: ItemKeyYellow {
		keyid = 9301;
	};
	class ItemKeyYellow1802: ItemKeyYellow {
		keyid = 9302;
	};
	class ItemKeyYellow1803: ItemKeyYellow {
		keyid = 9303;
	};
	class ItemKeyYellow1804: ItemKeyYellow {
		keyid = 9304;
	};
	class ItemKeyYellow1805: ItemKeyYellow {
		keyid = 9305;
	};
	class ItemKeyYellow1806: ItemKeyYellow {
		keyid = 9306;
	};
	class ItemKeyYellow1807: ItemKeyYellow {
		keyid = 9307;
	};
	class ItemKeyYellow1808: ItemKeyYellow {
		keyid = 9308;
	};
	class ItemKeyYellow1809: ItemKeyYellow {
		keyid = 9309;
	};
	class ItemKeyYellow1810: ItemKeyYellow {
		keyid = 9310;
	};
	class ItemKeyYellow1811: ItemKeyYellow {
		keyid = 9311;
	};
	class ItemKeyYellow1812: ItemKeyYellow {
		keyid = 9312;
	};
	class ItemKeyYellow1813: ItemKeyYellow {
		keyid = 9313;
	};
	class ItemKeyYellow1814: ItemKeyYellow {
		keyid = 9314;
	};
	class ItemKeyYellow1815: ItemKeyYellow {
		keyid = 9315;
	};
	class ItemKeyYellow1816: ItemKeyYellow {
		keyid = 9316;
	};
	class ItemKeyYellow1817: ItemKeyYellow {
		keyid = 9317;
	};
	class ItemKeyYellow1818: ItemKeyYellow {
		keyid = 9318;
	};
	class ItemKeyYellow1819: ItemKeyYellow {
		keyid = 9319;
	};
	class ItemKeyYellow1820: ItemKeyYellow {
		keyid = 9320;
	};
	class ItemKeyYellow1821: ItemKeyYellow {
		keyid = 9321;
	};
	class ItemKeyYellow1822: ItemKeyYellow {
		keyid = 9322;
	};
	class ItemKeyYellow1823: ItemKeyYellow {
		keyid = 9323;
	};
	class ItemKeyYellow1824: ItemKeyYellow {
		keyid = 9324;
	};
	class ItemKeyYellow1825: ItemKeyYellow {
		keyid = 9325;
	};
	class ItemKeyYellow1826: ItemKeyYellow {
		keyid = 9326;
	};
	class ItemKeyYellow1827: ItemKeyYellow {
		keyid = 9327;
	};
	class ItemKeyYellow1828: ItemKeyYellow {
		keyid = 9328;
	};
	class ItemKeyYellow1829: ItemKeyYellow {
		keyid = 9329;
	};
	class ItemKeyYellow1830: ItemKeyYellow {
		keyid = 9330;
	};
	class ItemKeyYellow1831: ItemKeyYellow {
		keyid = 9331;
	};
	class ItemKeyYellow1832: ItemKeyYellow {
		keyid = 9332;
	};
	class ItemKeyYellow1833: ItemKeyYellow {
		keyid = 9333;
	};
	class ItemKeyYellow1834: ItemKeyYellow {
		keyid = 9334;
	};
	class ItemKeyYellow1835: ItemKeyYellow {
		keyid = 9335;
	};
	class ItemKeyYellow1836: ItemKeyYellow {
		keyid = 9336;
	};
	class ItemKeyYellow1837: ItemKeyYellow {
		keyid = 9337;
	};
	class ItemKeyYellow1838: ItemKeyYellow {
		keyid = 9338;
	};
	class ItemKeyYellow1839: ItemKeyYellow {
		keyid = 9339;
	};
	class ItemKeyYellow1840: ItemKeyYellow {
		keyid = 9340;
	};
	class ItemKeyYellow1841: ItemKeyYellow {
		keyid = 9341;
	};
	class ItemKeyYellow1842: ItemKeyYellow {
		keyid = 9342;
	};
	class ItemKeyYellow1843: ItemKeyYellow {
		keyid = 9343;
	};
	class ItemKeyYellow1844: ItemKeyYellow {
		keyid = 9344;
	};
	class ItemKeyYellow1845: ItemKeyYellow {
		keyid = 9345;
	};
	class ItemKeyYellow1846: ItemKeyYellow {
		keyid = 9346;
	};
	class ItemKeyYellow1847: ItemKeyYellow {
		keyid = 9347;
	};
	class ItemKeyYellow1848: ItemKeyYellow {
		keyid = 9348;
	};
	class ItemKeyYellow1849: ItemKeyYellow {
		keyid = 9349;
	};
	class ItemKeyYellow1850: ItemKeyYellow {
		keyid = 9350;
	};
	class ItemKeyYellow1851: ItemKeyYellow {
		keyid = 9351;
	};
	class ItemKeyYellow1852: ItemKeyYellow {
		keyid = 9352;
	};
	class ItemKeyYellow1853: ItemKeyYellow {
		keyid = 9353;
	};
	class ItemKeyYellow1854: ItemKeyYellow {
		keyid = 9354;
	};
	class ItemKeyYellow1855: ItemKeyYellow {
		keyid = 9355;
	};
	class ItemKeyYellow1856: ItemKeyYellow {
		keyid = 9356;
	};
	class ItemKeyYellow1857: ItemKeyYellow {
		keyid = 9357;
	};
	class ItemKeyYellow1858: ItemKeyYellow {
		keyid = 9358;
	};
	class ItemKeyYellow1859: ItemKeyYellow {
		keyid = 9359;
	};
	class ItemKeyYellow1860: ItemKeyYellow {
		keyid = 9360;
	};
	class ItemKeyYellow1861: ItemKeyYellow {
		keyid = 9361;
	};
	class ItemKeyYellow1862: ItemKeyYellow {
		keyid = 9362;
	};
	class ItemKeyYellow1863: ItemKeyYellow {
		keyid = 9363;
	};
	class ItemKeyYellow1864: ItemKeyYellow {
		keyid = 9364;
	};
	class ItemKeyYellow1865: ItemKeyYellow {
		keyid = 9365;
	};
	class ItemKeyYellow1866: ItemKeyYellow {
		keyid = 9366;
	};
	class ItemKeyYellow1867: ItemKeyYellow {
		keyid = 9367;
	};
	class ItemKeyYellow1868: ItemKeyYellow {
		keyid = 9368;
	};
	class ItemKeyYellow1869: ItemKeyYellow {
		keyid = 9369;
	};
	class ItemKeyYellow1870: ItemKeyYellow {
		keyid = 9370;
	};
	class ItemKeyYellow1871: ItemKeyYellow {
		keyid = 9371;
	};
	class ItemKeyYellow1872: ItemKeyYellow {
		keyid = 9372;
	};
	class ItemKeyYellow1873: ItemKeyYellow {
		keyid = 9373;
	};
	class ItemKeyYellow1874: ItemKeyYellow {
		keyid = 9374;
	};
	class ItemKeyYellow1875: ItemKeyYellow {
		keyid = 9375;
	};
	class ItemKeyYellow1876: ItemKeyYellow {
		keyid = 9376;
	};
	class ItemKeyYellow1877: ItemKeyYellow {
		keyid = 9377;
	};
	class ItemKeyYellow1878: ItemKeyYellow {
		keyid = 9378;
	};
	class ItemKeyYellow1879: ItemKeyYellow {
		keyid = 9379;
	};
	class ItemKeyYellow1880: ItemKeyYellow {
		keyid = 9380;
	};
	class ItemKeyYellow1881: ItemKeyYellow {
		keyid = 9381;
	};
	class ItemKeyYellow1882: ItemKeyYellow {
		keyid = 9382;
	};
	class ItemKeyYellow1883: ItemKeyYellow {
		keyid = 9383;
	};
	class ItemKeyYellow1884: ItemKeyYellow {
		keyid = 9384;
	};
	class ItemKeyYellow1885: ItemKeyYellow {
		keyid = 9385;
	};
	class ItemKeyYellow1886: ItemKeyYellow {
		keyid = 9386;
	};
	class ItemKeyYellow1887: ItemKeyYellow {
		keyid = 9387;
	};
	class ItemKeyYellow1888: ItemKeyYellow {
		keyid = 9388;
	};
	class ItemKeyYellow1889: ItemKeyYellow {
		keyid = 9389;
	};
	class ItemKeyYellow1890: ItemKeyYellow {
		keyid = 9390;
	};
	class ItemKeyYellow1891: ItemKeyYellow {
		keyid = 9391;
	};
	class ItemKeyYellow1892: ItemKeyYellow {
		keyid = 9392;
	};
	class ItemKeyYellow1893: ItemKeyYellow {
		keyid = 9393;
	};
	class ItemKeyYellow1894: ItemKeyYellow {
		keyid = 9394;
	};
	class ItemKeyYellow1895: ItemKeyYellow {
		keyid = 9395;
	};
	class ItemKeyYellow1896: ItemKeyYellow {
		keyid = 9396;
	};
	class ItemKeyYellow1897: ItemKeyYellow {
		keyid = 9397;
	};
	class ItemKeyYellow1898: ItemKeyYellow {
		keyid = 9398;
	};
	class ItemKeyYellow1899: ItemKeyYellow {
		keyid = 9399;
	};
	class ItemKeyYellow1900: ItemKeyYellow {
		keyid = 9400;
	};
	class ItemKeyYellow1901: ItemKeyYellow {
		keyid = 9401;
	};
	class ItemKeyYellow1902: ItemKeyYellow {
		keyid = 9402;
	};
	class ItemKeyYellow1903: ItemKeyYellow {
		keyid = 9403;
	};
	class ItemKeyYellow1904: ItemKeyYellow {
		keyid = 9404;
	};
	class ItemKeyYellow1905: ItemKeyYellow {
		keyid = 9405;
	};
	class ItemKeyYellow1906: ItemKeyYellow {
		keyid = 9406;
	};
	class ItemKeyYellow1907: ItemKeyYellow {
		keyid = 9407;
	};
	class ItemKeyYellow1908: ItemKeyYellow {
		keyid = 9408;
	};
	class ItemKeyYellow1909: ItemKeyYellow {
		keyid = 9409;
	};
	class ItemKeyYellow1910: ItemKeyYellow {
		keyid = 9410;
	};
	class ItemKeyYellow1911: ItemKeyYellow {
		keyid = 9411;
	};
	class ItemKeyYellow1912: ItemKeyYellow {
		keyid = 9412;
	};
	class ItemKeyYellow1913: ItemKeyYellow {
		keyid = 9413;
	};
	class ItemKeyYellow1914: ItemKeyYellow {
		keyid = 9414;
	};
	class ItemKeyYellow1915: ItemKeyYellow {
		keyid = 9415;
	};
	class ItemKeyYellow1916: ItemKeyYellow {
		keyid = 9416;
	};
	class ItemKeyYellow1917: ItemKeyYellow {
		keyid = 9417;
	};
	class ItemKeyYellow1918: ItemKeyYellow {
		keyid = 9418;
	};
	class ItemKeyYellow1919: ItemKeyYellow {
		keyid = 9419;
	};
	class ItemKeyYellow1920: ItemKeyYellow {
		keyid = 9420;
	};
	class ItemKeyYellow1921: ItemKeyYellow {
		keyid = 9421;
	};
	class ItemKeyYellow1922: ItemKeyYellow {
		keyid = 9422;
	};
	class ItemKeyYellow1923: ItemKeyYellow {
		keyid = 9423;
	};
	class ItemKeyYellow1924: ItemKeyYellow {
		keyid = 9424;
	};
	class ItemKeyYellow1925: ItemKeyYellow {
		keyid = 9425;
	};
	class ItemKeyYellow1926: ItemKeyYellow {
		keyid = 9426;
	};
	class ItemKeyYellow1927: ItemKeyYellow {
		keyid = 9427;
	};
	class ItemKeyYellow1928: ItemKeyYellow {
		keyid = 9428;
	};
	class ItemKeyYellow1929: ItemKeyYellow {
		keyid = 9429;
	};
	class ItemKeyYellow1930: ItemKeyYellow {
		keyid = 9430;
	};
	class ItemKeyYellow1931: ItemKeyYellow {
		keyid = 9431;
	};
	class ItemKeyYellow1932: ItemKeyYellow {
		keyid = 9432;
	};
	class ItemKeyYellow1933: ItemKeyYellow {
		keyid = 9433;
	};
	class ItemKeyYellow1934: ItemKeyYellow {
		keyid = 9434;
	};
	class ItemKeyYellow1935: ItemKeyYellow {
		keyid = 9435;
	};
	class ItemKeyYellow1936: ItemKeyYellow {
		keyid = 9436;
	};
	class ItemKeyYellow1937: ItemKeyYellow {
		keyid = 9437;
	};
	class ItemKeyYellow1938: ItemKeyYellow {
		keyid = 9438;
	};
	class ItemKeyYellow1939: ItemKeyYellow {
		keyid = 9439;
	};
	class ItemKeyYellow1940: ItemKeyYellow {
		keyid = 9440;
	};
	class ItemKeyYellow1941: ItemKeyYellow {
		keyid = 9441;
	};
	class ItemKeyYellow1942: ItemKeyYellow {
		keyid = 9442;
	};
	class ItemKeyYellow1943: ItemKeyYellow {
		keyid = 9443;
	};
	class ItemKeyYellow1944: ItemKeyYellow {
		keyid = 9444;
	};
	class ItemKeyYellow1945: ItemKeyYellow {
		keyid = 9445;
	};
	class ItemKeyYellow1946: ItemKeyYellow {
		keyid = 9446;
	};
	class ItemKeyYellow1947: ItemKeyYellow {
		keyid = 9447;
	};
	class ItemKeyYellow1948: ItemKeyYellow {
		keyid = 9448;
	};
	class ItemKeyYellow1949: ItemKeyYellow {
		keyid = 9449;
	};
	class ItemKeyYellow1950: ItemKeyYellow {
		keyid = 9450;
	};
	class ItemKeyYellow1951: ItemKeyYellow {
		keyid = 9451;
	};
	class ItemKeyYellow1952: ItemKeyYellow {
		keyid = 9452;
	};
	class ItemKeyYellow1953: ItemKeyYellow {
		keyid = 9453;
	};
	class ItemKeyYellow1954: ItemKeyYellow {
		keyid = 9454;
	};
	class ItemKeyYellow1955: ItemKeyYellow {
		keyid = 9455;
	};
	class ItemKeyYellow1956: ItemKeyYellow {
		keyid = 9456;
	};
	class ItemKeyYellow1957: ItemKeyYellow {
		keyid = 9457;
	};
	class ItemKeyYellow1958: ItemKeyYellow {
		keyid = 9458;
	};
	class ItemKeyYellow1959: ItemKeyYellow {
		keyid = 9459;
	};
	class ItemKeyYellow1960: ItemKeyYellow {
		keyid = 9460;
	};
	class ItemKeyYellow1961: ItemKeyYellow {
		keyid = 9461;
	};
	class ItemKeyYellow1962: ItemKeyYellow {
		keyid = 9462;
	};
	class ItemKeyYellow1963: ItemKeyYellow {
		keyid = 9463;
	};
	class ItemKeyYellow1964: ItemKeyYellow {
		keyid = 9464;
	};
	class ItemKeyYellow1965: ItemKeyYellow {
		keyid = 9465;
	};
	class ItemKeyYellow1966: ItemKeyYellow {
		keyid = 9466;
	};
	class ItemKeyYellow1967: ItemKeyYellow {
		keyid = 9467;
	};
	class ItemKeyYellow1968: ItemKeyYellow {
		keyid = 9468;
	};
	class ItemKeyYellow1969: ItemKeyYellow {
		keyid = 9469;
	};
	class ItemKeyYellow1970: ItemKeyYellow {
		keyid = 9470;
	};
	class ItemKeyYellow1971: ItemKeyYellow {
		keyid = 9471;
	};
	class ItemKeyYellow1972: ItemKeyYellow {
		keyid = 9472;
	};
	class ItemKeyYellow1973: ItemKeyYellow {
		keyid = 9473;
	};
	class ItemKeyYellow1974: ItemKeyYellow {
		keyid = 9474;
	};
	class ItemKeyYellow1975: ItemKeyYellow {
		keyid = 9475;
	};
	class ItemKeyYellow1976: ItemKeyYellow {
		keyid = 9476;
	};
	class ItemKeyYellow1977: ItemKeyYellow {
		keyid = 9477;
	};
	class ItemKeyYellow1978: ItemKeyYellow {
		keyid = 9478;
	};
	class ItemKeyYellow1979: ItemKeyYellow {
		keyid = 9479;
	};
	class ItemKeyYellow1980: ItemKeyYellow {
		keyid = 9480;
	};
	class ItemKeyYellow1981: ItemKeyYellow {
		keyid = 9481;
	};
	class ItemKeyYellow1982: ItemKeyYellow {
		keyid = 9482;
	};
	class ItemKeyYellow1983: ItemKeyYellow {
		keyid = 9483;
	};
	class ItemKeyYellow1984: ItemKeyYellow {
		keyid = 9484;
	};
	class ItemKeyYellow1985: ItemKeyYellow {
		keyid = 9485;
	};
	class ItemKeyYellow1986: ItemKeyYellow {
		keyid = 9486;
	};
	class ItemKeyYellow1987: ItemKeyYellow {
		keyid = 9487;
	};
	class ItemKeyYellow1988: ItemKeyYellow {
		keyid = 9488;
	};
	class ItemKeyYellow1989: ItemKeyYellow {
		keyid = 9489;
	};
	class ItemKeyYellow1990: ItemKeyYellow {
		keyid = 9490;
	};
	class ItemKeyYellow1991: ItemKeyYellow {
		keyid = 9491;
	};
	class ItemKeyYellow1992: ItemKeyYellow {
		keyid = 9492;
	};
	class ItemKeyYellow1993: ItemKeyYellow {
		keyid = 9493;
	};
	class ItemKeyYellow1994: ItemKeyYellow {
		keyid = 9494;
	};
	class ItemKeyYellow1995: ItemKeyYellow {
		keyid = 9495;
	};
	class ItemKeyYellow1996: ItemKeyYellow {
		keyid = 9496;
	};
	class ItemKeyYellow1997: ItemKeyYellow {
		keyid = 9497;
	};
	class ItemKeyYellow1998: ItemKeyYellow {
		keyid = 9498;
	};
	class ItemKeyYellow1999: ItemKeyYellow {
		keyid = 9499;
	};
	class ItemKeyYellow2000: ItemKeyYellow {
		keyid = 9500;
	};
	class ItemKeyYellow2001: ItemKeyYellow {
		keyid = 9501;
	};
	class ItemKeyYellow2002: ItemKeyYellow {
		keyid = 9502;
	};
	class ItemKeyYellow2003: ItemKeyYellow {
		keyid = 9503;
	};
	class ItemKeyYellow2004: ItemKeyYellow {
		keyid = 9504;
	};
	class ItemKeyYellow2005: ItemKeyYellow {
		keyid = 9505;
	};
	class ItemKeyYellow2006: ItemKeyYellow {
		keyid = 9506;
	};
	class ItemKeyYellow2007: ItemKeyYellow {
		keyid = 9507;
	};
	class ItemKeyYellow2008: ItemKeyYellow {
		keyid = 9508;
	};
	class ItemKeyYellow2009: ItemKeyYellow {
		keyid = 9509;
	};
	class ItemKeyYellow2010: ItemKeyYellow {
		keyid = 9510;
	};
	class ItemKeyYellow2011: ItemKeyYellow {
		keyid = 9511;
	};
	class ItemKeyYellow2012: ItemKeyYellow {
		keyid = 9512;
	};
	class ItemKeyYellow2013: ItemKeyYellow {
		keyid = 9513;
	};
	class ItemKeyYellow2014: ItemKeyYellow {
		keyid = 9514;
	};
	class ItemKeyYellow2015: ItemKeyYellow {
		keyid = 9515;
	};
	class ItemKeyYellow2016: ItemKeyYellow {
		keyid = 9516;
	};
	class ItemKeyYellow2017: ItemKeyYellow {
		keyid = 9517;
	};
	class ItemKeyYellow2018: ItemKeyYellow {
		keyid = 9518;
	};
	class ItemKeyYellow2019: ItemKeyYellow {
		keyid = 9519;
	};
	class ItemKeyYellow2020: ItemKeyYellow {
		keyid = 9520;
	};
	class ItemKeyYellow2021: ItemKeyYellow {
		keyid = 9521;
	};
	class ItemKeyYellow2022: ItemKeyYellow {
		keyid = 9522;
	};
	class ItemKeyYellow2023: ItemKeyYellow {
		keyid = 9523;
	};
	class ItemKeyYellow2024: ItemKeyYellow {
		keyid = 9524;
	};
	class ItemKeyYellow2025: ItemKeyYellow {
		keyid = 9525;
	};
	class ItemKeyYellow2026: ItemKeyYellow {
		keyid = 9526;
	};
	class ItemKeyYellow2027: ItemKeyYellow {
		keyid = 9527;
	};
	class ItemKeyYellow2028: ItemKeyYellow {
		keyid = 9528;
	};
	class ItemKeyYellow2029: ItemKeyYellow {
		keyid = 9529;
	};
	class ItemKeyYellow2030: ItemKeyYellow {
		keyid = 9530;
	};
	class ItemKeyYellow2031: ItemKeyYellow {
		keyid = 9531;
	};
	class ItemKeyYellow2032: ItemKeyYellow {
		keyid = 9532;
	};
	class ItemKeyYellow2033: ItemKeyYellow {
		keyid = 9533;
	};
	class ItemKeyYellow2034: ItemKeyYellow {
		keyid = 9534;
	};
	class ItemKeyYellow2035: ItemKeyYellow {
		keyid = 9535;
	};
	class ItemKeyYellow2036: ItemKeyYellow {
		keyid = 9536;
	};
	class ItemKeyYellow2037: ItemKeyYellow {
		keyid = 9537;
	};
	class ItemKeyYellow2038: ItemKeyYellow {
		keyid = 9538;
	};
	class ItemKeyYellow2039: ItemKeyYellow {
		keyid = 9539;
	};
	class ItemKeyYellow2040: ItemKeyYellow {
		keyid = 9540;
	};
	class ItemKeyYellow2041: ItemKeyYellow {
		keyid = 9541;
	};
	class ItemKeyYellow2042: ItemKeyYellow {
		keyid = 9542;
	};
	class ItemKeyYellow2043: ItemKeyYellow {
		keyid = 9543;
	};
	class ItemKeyYellow2044: ItemKeyYellow {
		keyid = 9544;
	};
	class ItemKeyYellow2045: ItemKeyYellow {
		keyid = 9545;
	};
	class ItemKeyYellow2046: ItemKeyYellow {
		keyid = 9546;
	};
	class ItemKeyYellow2047: ItemKeyYellow {
		keyid = 9547;
	};
	class ItemKeyYellow2048: ItemKeyYellow {
		keyid = 9548;
	};
	class ItemKeyYellow2049: ItemKeyYellow {
		keyid = 9549;
	};
	class ItemKeyYellow2050: ItemKeyYellow {
		keyid = 9550;
	};
	class ItemKeyYellow2051: ItemKeyYellow {
		keyid = 9551;
	};
	class ItemKeyYellow2052: ItemKeyYellow {
		keyid = 9552;
	};
	class ItemKeyYellow2053: ItemKeyYellow {
		keyid = 9553;
	};
	class ItemKeyYellow2054: ItemKeyYellow {
		keyid = 9554;
	};
	class ItemKeyYellow2055: ItemKeyYellow {
		keyid = 9555;
	};
	class ItemKeyYellow2056: ItemKeyYellow {
		keyid = 9556;
	};
	class ItemKeyYellow2057: ItemKeyYellow {
		keyid = 9557;
	};
	class ItemKeyYellow2058: ItemKeyYellow {
		keyid = 9558;
	};
	class ItemKeyYellow2059: ItemKeyYellow {
		keyid = 9559;
	};
	class ItemKeyYellow2060: ItemKeyYellow {
		keyid = 9560;
	};
	class ItemKeyYellow2061: ItemKeyYellow {
		keyid = 9561;
	};
	class ItemKeyYellow2062: ItemKeyYellow {
		keyid = 9562;
	};
	class ItemKeyYellow2063: ItemKeyYellow {
		keyid = 9563;
	};
	class ItemKeyYellow2064: ItemKeyYellow {
		keyid = 9564;
	};
	class ItemKeyYellow2065: ItemKeyYellow {
		keyid = 9565;
	};
	class ItemKeyYellow2066: ItemKeyYellow {
		keyid = 9566;
	};
	class ItemKeyYellow2067: ItemKeyYellow {
		keyid = 9567;
	};
	class ItemKeyYellow2068: ItemKeyYellow {
		keyid = 9568;
	};
	class ItemKeyYellow2069: ItemKeyYellow {
		keyid = 9569;
	};
	class ItemKeyYellow2070: ItemKeyYellow {
		keyid = 9570;
	};
	class ItemKeyYellow2071: ItemKeyYellow {
		keyid = 9571;
	};
	class ItemKeyYellow2072: ItemKeyYellow {
		keyid = 9572;
	};
	class ItemKeyYellow2073: ItemKeyYellow {
		keyid = 9573;
	};
	class ItemKeyYellow2074: ItemKeyYellow {
		keyid = 9574;
	};
	class ItemKeyYellow2075: ItemKeyYellow {
		keyid = 9575;
	};
	class ItemKeyYellow2076: ItemKeyYellow {
		keyid = 9576;
	};
	class ItemKeyYellow2077: ItemKeyYellow {
		keyid = 9577;
	};
	class ItemKeyYellow2078: ItemKeyYellow {
		keyid = 9578;
	};
	class ItemKeyYellow2079: ItemKeyYellow {
		keyid = 9579;
	};
	class ItemKeyYellow2080: ItemKeyYellow {
		keyid = 9580;
	};
	class ItemKeyYellow2081: ItemKeyYellow {
		keyid = 9581;
	};
	class ItemKeyYellow2082: ItemKeyYellow {
		keyid = 9582;
	};
	class ItemKeyYellow2083: ItemKeyYellow {
		keyid = 9583;
	};
	class ItemKeyYellow2084: ItemKeyYellow {
		keyid = 9584;
	};
	class ItemKeyYellow2085: ItemKeyYellow {
		keyid = 9585;
	};
	class ItemKeyYellow2086: ItemKeyYellow {
		keyid = 9586;
	};
	class ItemKeyYellow2087: ItemKeyYellow {
		keyid = 9587;
	};
	class ItemKeyYellow2088: ItemKeyYellow {
		keyid = 9588;
	};
	class ItemKeyYellow2089: ItemKeyYellow {
		keyid = 9589;
	};
	class ItemKeyYellow2090: ItemKeyYellow {
		keyid = 9590;
	};
	class ItemKeyYellow2091: ItemKeyYellow {
		keyid = 9591;
	};
	class ItemKeyYellow2092: ItemKeyYellow {
		keyid = 9592;
	};
	class ItemKeyYellow2093: ItemKeyYellow {
		keyid = 9593;
	};
	class ItemKeyYellow2094: ItemKeyYellow {
		keyid = 9594;
	};
	class ItemKeyYellow2095: ItemKeyYellow {
		keyid = 9595;
	};
	class ItemKeyYellow2096: ItemKeyYellow {
		keyid = 9596;
	};
	class ItemKeyYellow2097: ItemKeyYellow {
		keyid = 9597;
	};
	class ItemKeyYellow2098: ItemKeyYellow {
		keyid = 9598;
	};
	class ItemKeyYellow2099: ItemKeyYellow {
		keyid = 9599;
	};
	class ItemKeyYellow2100: ItemKeyYellow {
		keyid = 9600;
	};
	class ItemKeyYellow2101: ItemKeyYellow {
		keyid = 9601;
	};
	class ItemKeyYellow2102: ItemKeyYellow {
		keyid = 9602;
	};
	class ItemKeyYellow2103: ItemKeyYellow {
		keyid = 9603;
	};
	class ItemKeyYellow2104: ItemKeyYellow {
		keyid = 9604;
	};
	class ItemKeyYellow2105: ItemKeyYellow {
		keyid = 9605;
	};
	class ItemKeyYellow2106: ItemKeyYellow {
		keyid = 9606;
	};
	class ItemKeyYellow2107: ItemKeyYellow {
		keyid = 9607;
	};
	class ItemKeyYellow2108: ItemKeyYellow {
		keyid = 9608;
	};
	class ItemKeyYellow2109: ItemKeyYellow {
		keyid = 9609;
	};
	class ItemKeyYellow2110: ItemKeyYellow {
		keyid = 9610;
	};
	class ItemKeyYellow2111: ItemKeyYellow {
		keyid = 9611;
	};
	class ItemKeyYellow2112: ItemKeyYellow {
		keyid = 9612;
	};
	class ItemKeyYellow2113: ItemKeyYellow {
		keyid = 9613;
	};
	class ItemKeyYellow2114: ItemKeyYellow {
		keyid = 9614;
	};
	class ItemKeyYellow2115: ItemKeyYellow {
		keyid = 9615;
	};
	class ItemKeyYellow2116: ItemKeyYellow {
		keyid = 9616;
	};
	class ItemKeyYellow2117: ItemKeyYellow {
		keyid = 9617;
	};
	class ItemKeyYellow2118: ItemKeyYellow {
		keyid = 9618;
	};
	class ItemKeyYellow2119: ItemKeyYellow {
		keyid = 9619;
	};
	class ItemKeyYellow2120: ItemKeyYellow {
		keyid = 9620;
	};
	class ItemKeyYellow2121: ItemKeyYellow {
		keyid = 9621;
	};
	class ItemKeyYellow2122: ItemKeyYellow {
		keyid = 9622;
	};
	class ItemKeyYellow2123: ItemKeyYellow {
		keyid = 9623;
	};
	class ItemKeyYellow2124: ItemKeyYellow {
		keyid = 9624;
	};
	class ItemKeyYellow2125: ItemKeyYellow {
		keyid = 9625;
	};
	class ItemKeyYellow2126: ItemKeyYellow {
		keyid = 9626;
	};
	class ItemKeyYellow2127: ItemKeyYellow {
		keyid = 9627;
	};
	class ItemKeyYellow2128: ItemKeyYellow {
		keyid = 9628;
	};
	class ItemKeyYellow2129: ItemKeyYellow {
		keyid = 9629;
	};
	class ItemKeyYellow2130: ItemKeyYellow {
		keyid = 9630;
	};
	class ItemKeyYellow2131: ItemKeyYellow {
		keyid = 9631;
	};
	class ItemKeyYellow2132: ItemKeyYellow {
		keyid = 9632;
	};
	class ItemKeyYellow2133: ItemKeyYellow {
		keyid = 9633;
	};
	class ItemKeyYellow2134: ItemKeyYellow {
		keyid = 9634;
	};
	class ItemKeyYellow2135: ItemKeyYellow {
		keyid = 9635;
	};
	class ItemKeyYellow2136: ItemKeyYellow {
		keyid = 9636;
	};
	class ItemKeyYellow2137: ItemKeyYellow {
		keyid = 9637;
	};
	class ItemKeyYellow2138: ItemKeyYellow {
		keyid = 9638;
	};
	class ItemKeyYellow2139: ItemKeyYellow {
		keyid = 9639;
	};
	class ItemKeyYellow2140: ItemKeyYellow {
		keyid = 9640;
	};
	class ItemKeyYellow2141: ItemKeyYellow {
		keyid = 9641;
	};
	class ItemKeyYellow2142: ItemKeyYellow {
		keyid = 9642;
	};
	class ItemKeyYellow2143: ItemKeyYellow {
		keyid = 9643;
	};
	class ItemKeyYellow2144: ItemKeyYellow {
		keyid = 9644;
	};
	class ItemKeyYellow2145: ItemKeyYellow {
		keyid = 9645;
	};
	class ItemKeyYellow2146: ItemKeyYellow {
		keyid = 9646;
	};
	class ItemKeyYellow2147: ItemKeyYellow {
		keyid = 9647;
	};
	class ItemKeyYellow2148: ItemKeyYellow {
		keyid = 9648;
	};
	class ItemKeyYellow2149: ItemKeyYellow {
		keyid = 9649;
	};
	class ItemKeyYellow2150: ItemKeyYellow {
		keyid = 9650;
	};
	class ItemKeyYellow2151: ItemKeyYellow {
		keyid = 9651;
	};
	class ItemKeyYellow2152: ItemKeyYellow {
		keyid = 9652;
	};
	class ItemKeyYellow2153: ItemKeyYellow {
		keyid = 9653;
	};
	class ItemKeyYellow2154: ItemKeyYellow {
		keyid = 9654;
	};
	class ItemKeyYellow2155: ItemKeyYellow {
		keyid = 9655;
	};
	class ItemKeyYellow2156: ItemKeyYellow {
		keyid = 9656;
	};
	class ItemKeyYellow2157: ItemKeyYellow {
		keyid = 9657;
	};
	class ItemKeyYellow2158: ItemKeyYellow {
		keyid = 9658;
	};
	class ItemKeyYellow2159: ItemKeyYellow {
		keyid = 9659;
	};
	class ItemKeyYellow2160: ItemKeyYellow {
		keyid = 9660;
	};
	class ItemKeyYellow2161: ItemKeyYellow {
		keyid = 9661;
	};
	class ItemKeyYellow2162: ItemKeyYellow {
		keyid = 9662;
	};
	class ItemKeyYellow2163: ItemKeyYellow {
		keyid = 9663;
	};
	class ItemKeyYellow2164: ItemKeyYellow {
		keyid = 9664;
	};
	class ItemKeyYellow2165: ItemKeyYellow {
		keyid = 9665;
	};
	class ItemKeyYellow2166: ItemKeyYellow {
		keyid = 9666;
	};
	class ItemKeyYellow2167: ItemKeyYellow {
		keyid = 9667;
	};
	class ItemKeyYellow2168: ItemKeyYellow {
		keyid = 9668;
	};
	class ItemKeyYellow2169: ItemKeyYellow {
		keyid = 9669;
	};
	class ItemKeyYellow2170: ItemKeyYellow {
		keyid = 9670;
	};
	class ItemKeyYellow2171: ItemKeyYellow {
		keyid = 9671;
	};
	class ItemKeyYellow2172: ItemKeyYellow {
		keyid = 9672;
	};
	class ItemKeyYellow2173: ItemKeyYellow {
		keyid = 9673;
	};
	class ItemKeyYellow2174: ItemKeyYellow {
		keyid = 9674;
	};
	class ItemKeyYellow2175: ItemKeyYellow {
		keyid = 9675;
	};
	class ItemKeyYellow2176: ItemKeyYellow {
		keyid = 9676;
	};
	class ItemKeyYellow2177: ItemKeyYellow {
		keyid = 9677;
	};
	class ItemKeyYellow2178: ItemKeyYellow {
		keyid = 9678;
	};
	class ItemKeyYellow2179: ItemKeyYellow {
		keyid = 9679;
	};
	class ItemKeyYellow2180: ItemKeyYellow {
		keyid = 9680;
	};
	class ItemKeyYellow2181: ItemKeyYellow {
		keyid = 9681;
	};
	class ItemKeyYellow2182: ItemKeyYellow {
		keyid = 9682;
	};
	class ItemKeyYellow2183: ItemKeyYellow {
		keyid = 9683;
	};
	class ItemKeyYellow2184: ItemKeyYellow {
		keyid = 9684;
	};
	class ItemKeyYellow2185: ItemKeyYellow {
		keyid = 9685;
	};
	class ItemKeyYellow2186: ItemKeyYellow {
		keyid = 9686;
	};
	class ItemKeyYellow2187: ItemKeyYellow {
		keyid = 9687;
	};
	class ItemKeyYellow2188: ItemKeyYellow {
		keyid = 9688;
	};
	class ItemKeyYellow2189: ItemKeyYellow {
		keyid = 9689;
	};
	class ItemKeyYellow2190: ItemKeyYellow {
		keyid = 9690;
	};
	class ItemKeyYellow2191: ItemKeyYellow {
		keyid = 9691;
	};
	class ItemKeyYellow2192: ItemKeyYellow {
		keyid = 9692;
	};
	class ItemKeyYellow2193: ItemKeyYellow {
		keyid = 9693;
	};
	class ItemKeyYellow2194: ItemKeyYellow {
		keyid = 9694;
	};
	class ItemKeyYellow2195: ItemKeyYellow {
		keyid = 9695;
	};
	class ItemKeyYellow2196: ItemKeyYellow {
		keyid = 9696;
	};
	class ItemKeyYellow2197: ItemKeyYellow {
		keyid = 9697;
	};
	class ItemKeyYellow2198: ItemKeyYellow {
		keyid = 9698;
	};
	class ItemKeyYellow2199: ItemKeyYellow {
		keyid = 9699;
	};
	class ItemKeyYellow2200: ItemKeyYellow {
		keyid = 9700;
	};
	class ItemKeyYellow2201: ItemKeyYellow {
		keyid = 9701;
	};
	class ItemKeyYellow2202: ItemKeyYellow {
		keyid = 9702;
	};
	class ItemKeyYellow2203: ItemKeyYellow {
		keyid = 9703;
	};
	class ItemKeyYellow2204: ItemKeyYellow {
		keyid = 9704;
	};
	class ItemKeyYellow2205: ItemKeyYellow {
		keyid = 9705;
	};
	class ItemKeyYellow2206: ItemKeyYellow {
		keyid = 9706;
	};
	class ItemKeyYellow2207: ItemKeyYellow {
		keyid = 9707;
	};
	class ItemKeyYellow2208: ItemKeyYellow {
		keyid = 9708;
	};
	class ItemKeyYellow2209: ItemKeyYellow {
		keyid = 9709;
	};
	class ItemKeyYellow2210: ItemKeyYellow {
		keyid = 9710;
	};
	class ItemKeyYellow2211: ItemKeyYellow {
		keyid = 9711;
	};
	class ItemKeyYellow2212: ItemKeyYellow {
		keyid = 9712;
	};
	class ItemKeyYellow2213: ItemKeyYellow {
		keyid = 9713;
	};
	class ItemKeyYellow2214: ItemKeyYellow {
		keyid = 9714;
	};
	class ItemKeyYellow2215: ItemKeyYellow {
		keyid = 9715;
	};
	class ItemKeyYellow2216: ItemKeyYellow {
		keyid = 9716;
	};
	class ItemKeyYellow2217: ItemKeyYellow {
		keyid = 9717;
	};
	class ItemKeyYellow2218: ItemKeyYellow {
		keyid = 9718;
	};
	class ItemKeyYellow2219: ItemKeyYellow {
		keyid = 9719;
	};
	class ItemKeyYellow2220: ItemKeyYellow {
		keyid = 9720;
	};
	class ItemKeyYellow2221: ItemKeyYellow {
		keyid = 9721;
	};
	class ItemKeyYellow2222: ItemKeyYellow {
		keyid = 9722;
	};
	class ItemKeyYellow2223: ItemKeyYellow {
		keyid = 9723;
	};
	class ItemKeyYellow2224: ItemKeyYellow {
		keyid = 9724;
	};
	class ItemKeyYellow2225: ItemKeyYellow {
		keyid = 9725;
	};
	class ItemKeyYellow2226: ItemKeyYellow {
		keyid = 9726;
	};
	class ItemKeyYellow2227: ItemKeyYellow {
		keyid = 9727;
	};
	class ItemKeyYellow2228: ItemKeyYellow {
		keyid = 9728;
	};
	class ItemKeyYellow2229: ItemKeyYellow {
		keyid = 9729;
	};
	class ItemKeyYellow2230: ItemKeyYellow {
		keyid = 9730;
	};
	class ItemKeyYellow2231: ItemKeyYellow {
		keyid = 9731;
	};
	class ItemKeyYellow2232: ItemKeyYellow {
		keyid = 9732;
	};
	class ItemKeyYellow2233: ItemKeyYellow {
		keyid = 9733;
	};
	class ItemKeyYellow2234: ItemKeyYellow {
		keyid = 9734;
	};
	class ItemKeyYellow2235: ItemKeyYellow {
		keyid = 9735;
	};
	class ItemKeyYellow2236: ItemKeyYellow {
		keyid = 9736;
	};
	class ItemKeyYellow2237: ItemKeyYellow {
		keyid = 9737;
	};
	class ItemKeyYellow2238: ItemKeyYellow {
		keyid = 9738;
	};
	class ItemKeyYellow2239: ItemKeyYellow {
		keyid = 9739;
	};
	class ItemKeyYellow2240: ItemKeyYellow {
		keyid = 9740;
	};
	class ItemKeyYellow2241: ItemKeyYellow {
		keyid = 9741;
	};
	class ItemKeyYellow2242: ItemKeyYellow {
		keyid = 9742;
	};
	class ItemKeyYellow2243: ItemKeyYellow {
		keyid = 9743;
	};
	class ItemKeyYellow2244: ItemKeyYellow {
		keyid = 9744;
	};
	class ItemKeyYellow2245: ItemKeyYellow {
		keyid = 9745;
	};
	class ItemKeyYellow2246: ItemKeyYellow {
		keyid = 9746;
	};
	class ItemKeyYellow2247: ItemKeyYellow {
		keyid = 9747;
	};
	class ItemKeyYellow2248: ItemKeyYellow {
		keyid = 9748;
	};
	class ItemKeyYellow2249: ItemKeyYellow {
		keyid = 9749;
	};
	class ItemKeyYellow2250: ItemKeyYellow {
		keyid = 9750;
	};
	class ItemKeyYellow2251: ItemKeyYellow {
		keyid = 9751;
	};
	class ItemKeyYellow2252: ItemKeyYellow {
		keyid = 9752;
	};
	class ItemKeyYellow2253: ItemKeyYellow {
		keyid = 9753;
	};
	class ItemKeyYellow2254: ItemKeyYellow {
		keyid = 9754;
	};
	class ItemKeyYellow2255: ItemKeyYellow {
		keyid = 9755;
	};
	class ItemKeyYellow2256: ItemKeyYellow {
		keyid = 9756;
	};
	class ItemKeyYellow2257: ItemKeyYellow {
		keyid = 9757;
	};
	class ItemKeyYellow2258: ItemKeyYellow {
		keyid = 9758;
	};
	class ItemKeyYellow2259: ItemKeyYellow {
		keyid = 9759;
	};
	class ItemKeyYellow2260: ItemKeyYellow {
		keyid = 9760;
	};
	class ItemKeyYellow2261: ItemKeyYellow {
		keyid = 9761;
	};
	class ItemKeyYellow2262: ItemKeyYellow {
		keyid = 9762;
	};
	class ItemKeyYellow2263: ItemKeyYellow {
		keyid = 9763;
	};
	class ItemKeyYellow2264: ItemKeyYellow {
		keyid = 9764;
	};
	class ItemKeyYellow2265: ItemKeyYellow {
		keyid = 9765;
	};
	class ItemKeyYellow2266: ItemKeyYellow {
		keyid = 9766;
	};
	class ItemKeyYellow2267: ItemKeyYellow {
		keyid = 9767;
	};
	class ItemKeyYellow2268: ItemKeyYellow {
		keyid = 9768;
	};
	class ItemKeyYellow2269: ItemKeyYellow {
		keyid = 9769;
	};
	class ItemKeyYellow2270: ItemKeyYellow {
		keyid = 9770;
	};
	class ItemKeyYellow2271: ItemKeyYellow {
		keyid = 9771;
	};
	class ItemKeyYellow2272: ItemKeyYellow {
		keyid = 9772;
	};
	class ItemKeyYellow2273: ItemKeyYellow {
		keyid = 9773;
	};
	class ItemKeyYellow2274: ItemKeyYellow {
		keyid = 9774;
	};
	class ItemKeyYellow2275: ItemKeyYellow {
		keyid = 9775;
	};
	class ItemKeyYellow2276: ItemKeyYellow {
		keyid = 9776;
	};
	class ItemKeyYellow2277: ItemKeyYellow {
		keyid = 9777;
	};
	class ItemKeyYellow2278: ItemKeyYellow {
		keyid = 9778;
	};
	class ItemKeyYellow2279: ItemKeyYellow {
		keyid = 9779;
	};
	class ItemKeyYellow2280: ItemKeyYellow {
		keyid = 9780;
	};
	class ItemKeyYellow2281: ItemKeyYellow {
		keyid = 9781;
	};
	class ItemKeyYellow2282: ItemKeyYellow {
		keyid = 9782;
	};
	class ItemKeyYellow2283: ItemKeyYellow {
		keyid = 9783;
	};
	class ItemKeyYellow2284: ItemKeyYellow {
		keyid = 9784;
	};
	class ItemKeyYellow2285: ItemKeyYellow {
		keyid = 9785;
	};
	class ItemKeyYellow2286: ItemKeyYellow {
		keyid = 9786;
	};
	class ItemKeyYellow2287: ItemKeyYellow {
		keyid = 9787;
	};
	class ItemKeyYellow2288: ItemKeyYellow {
		keyid = 9788;
	};
	class ItemKeyYellow2289: ItemKeyYellow {
		keyid = 9789;
	};
	class ItemKeyYellow2290: ItemKeyYellow {
		keyid = 9790;
	};
	class ItemKeyYellow2291: ItemKeyYellow {
		keyid = 9791;
	};
	class ItemKeyYellow2292: ItemKeyYellow {
		keyid = 9792;
	};
	class ItemKeyYellow2293: ItemKeyYellow {
		keyid = 9793;
	};
	class ItemKeyYellow2294: ItemKeyYellow {
		keyid = 9794;
	};
	class ItemKeyYellow2295: ItemKeyYellow {
		keyid = 9795;
	};
	class ItemKeyYellow2296: ItemKeyYellow {
		keyid = 9796;
	};
	class ItemKeyYellow2297: ItemKeyYellow {
		keyid = 9797;
	};
	class ItemKeyYellow2298: ItemKeyYellow {
		keyid = 9798;
	};
	class ItemKeyYellow2299: ItemKeyYellow {
		keyid = 9799;
	};
	class ItemKeyYellow2300: ItemKeyYellow {
		keyid = 9800;
	};
	class ItemKeyYellow2301: ItemKeyYellow {
		keyid = 9801;
	};
	class ItemKeyYellow2302: ItemKeyYellow {
		keyid = 9802;
	};
	class ItemKeyYellow2303: ItemKeyYellow {
		keyid = 9803;
	};
	class ItemKeyYellow2304: ItemKeyYellow {
		keyid = 9804;
	};
	class ItemKeyYellow2305: ItemKeyYellow {
		keyid = 9805;
	};
	class ItemKeyYellow2306: ItemKeyYellow {
		keyid = 9806;
	};
	class ItemKeyYellow2307: ItemKeyYellow {
		keyid = 9807;
	};
	class ItemKeyYellow2308: ItemKeyYellow {
		keyid = 9808;
	};
	class ItemKeyYellow2309: ItemKeyYellow {
		keyid = 9809;
	};
	class ItemKeyYellow2310: ItemKeyYellow {
		keyid = 9810;
	};
	class ItemKeyYellow2311: ItemKeyYellow {
		keyid = 9811;
	};
	class ItemKeyYellow2312: ItemKeyYellow {
		keyid = 9812;
	};
	class ItemKeyYellow2313: ItemKeyYellow {
		keyid = 9813;
	};
	class ItemKeyYellow2314: ItemKeyYellow {
		keyid = 9814;
	};
	class ItemKeyYellow2315: ItemKeyYellow {
		keyid = 9815;
	};
	class ItemKeyYellow2316: ItemKeyYellow {
		keyid = 9816;
	};
	class ItemKeyYellow2317: ItemKeyYellow {
		keyid = 9817;
	};
	class ItemKeyYellow2318: ItemKeyYellow {
		keyid = 9818;
	};
	class ItemKeyYellow2319: ItemKeyYellow {
		keyid = 9819;
	};
	class ItemKeyYellow2320: ItemKeyYellow {
		keyid = 9820;
	};
	class ItemKeyYellow2321: ItemKeyYellow {
		keyid = 9821;
	};
	class ItemKeyYellow2322: ItemKeyYellow {
		keyid = 9822;
	};
	class ItemKeyYellow2323: ItemKeyYellow {
		keyid = 9823;
	};
	class ItemKeyYellow2324: ItemKeyYellow {
		keyid = 9824;
	};
	class ItemKeyYellow2325: ItemKeyYellow {
		keyid = 9825;
	};
	class ItemKeyYellow2326: ItemKeyYellow {
		keyid = 9826;
	};
	class ItemKeyYellow2327: ItemKeyYellow {
		keyid = 9827;
	};
	class ItemKeyYellow2328: ItemKeyYellow {
		keyid = 9828;
	};
	class ItemKeyYellow2329: ItemKeyYellow {
		keyid = 9829;
	};
	class ItemKeyYellow2330: ItemKeyYellow {
		keyid = 9830;
	};
	class ItemKeyYellow2331: ItemKeyYellow {
		keyid = 9831;
	};
	class ItemKeyYellow2332: ItemKeyYellow {
		keyid = 9832;
	};
	class ItemKeyYellow2333: ItemKeyYellow {
		keyid = 9833;
	};
	class ItemKeyYellow2334: ItemKeyYellow {
		keyid = 9834;
	};
	class ItemKeyYellow2335: ItemKeyYellow {
		keyid = 9835;
	};
	class ItemKeyYellow2336: ItemKeyYellow {
		keyid = 9836;
	};
	class ItemKeyYellow2337: ItemKeyYellow {
		keyid = 9837;
	};
	class ItemKeyYellow2338: ItemKeyYellow {
		keyid = 9838;
	};
	class ItemKeyYellow2339: ItemKeyYellow {
		keyid = 9839;
	};
	class ItemKeyYellow2340: ItemKeyYellow {
		keyid = 9840;
	};
	class ItemKeyYellow2341: ItemKeyYellow {
		keyid = 9841;
	};
	class ItemKeyYellow2342: ItemKeyYellow {
		keyid = 9842;
	};
	class ItemKeyYellow2343: ItemKeyYellow {
		keyid = 9843;
	};
	class ItemKeyYellow2344: ItemKeyYellow {
		keyid = 9844;
	};
	class ItemKeyYellow2345: ItemKeyYellow {
		keyid = 9845;
	};
	class ItemKeyYellow2346: ItemKeyYellow {
		keyid = 9846;
	};
	class ItemKeyYellow2347: ItemKeyYellow {
		keyid = 9847;
	};
	class ItemKeyYellow2348: ItemKeyYellow {
		keyid = 9848;
	};
	class ItemKeyYellow2349: ItemKeyYellow {
		keyid = 9849;
	};
	class ItemKeyYellow2350: ItemKeyYellow {
		keyid = 9850;
	};
	class ItemKeyYellow2351: ItemKeyYellow {
		keyid = 9851;
	};
	class ItemKeyYellow2352: ItemKeyYellow {
		keyid = 9852;
	};
	class ItemKeyYellow2353: ItemKeyYellow {
		keyid = 9853;
	};
	class ItemKeyYellow2354: ItemKeyYellow {
		keyid = 9854;
	};
	class ItemKeyYellow2355: ItemKeyYellow {
		keyid = 9855;
	};
	class ItemKeyYellow2356: ItemKeyYellow {
		keyid = 9856;
	};
	class ItemKeyYellow2357: ItemKeyYellow {
		keyid = 9857;
	};
	class ItemKeyYellow2358: ItemKeyYellow {
		keyid = 9858;
	};
	class ItemKeyYellow2359: ItemKeyYellow {
		keyid = 9859;
	};
	class ItemKeyYellow2360: ItemKeyYellow {
		keyid = 9860;
	};
	class ItemKeyYellow2361: ItemKeyYellow {
		keyid = 9861;
	};
	class ItemKeyYellow2362: ItemKeyYellow {
		keyid = 9862;
	};
	class ItemKeyYellow2363: ItemKeyYellow {
		keyid = 9863;
	};
	class ItemKeyYellow2364: ItemKeyYellow {
		keyid = 9864;
	};
	class ItemKeyYellow2365: ItemKeyYellow {
		keyid = 9865;
	};
	class ItemKeyYellow2366: ItemKeyYellow {
		keyid = 9866;
	};
	class ItemKeyYellow2367: ItemKeyYellow {
		keyid = 9867;
	};
	class ItemKeyYellow2368: ItemKeyYellow {
		keyid = 9868;
	};
	class ItemKeyYellow2369: ItemKeyYellow {
		keyid = 9869;
	};
	class ItemKeyYellow2370: ItemKeyYellow {
		keyid = 9870;
	};
	class ItemKeyYellow2371: ItemKeyYellow {
		keyid = 9871;
	};
	class ItemKeyYellow2372: ItemKeyYellow {
		keyid = 9872;
	};
	class ItemKeyYellow2373: ItemKeyYellow {
		keyid = 9873;
	};
	class ItemKeyYellow2374: ItemKeyYellow {
		keyid = 9874;
	};
	class ItemKeyYellow2375: ItemKeyYellow {
		keyid = 9875;
	};
	class ItemKeyYellow2376: ItemKeyYellow {
		keyid = 9876;
	};
	class ItemKeyYellow2377: ItemKeyYellow {
		keyid = 9877;
	};
	class ItemKeyYellow2378: ItemKeyYellow {
		keyid = 9878;
	};
	class ItemKeyYellow2379: ItemKeyYellow {
		keyid = 9879;
	};
	class ItemKeyYellow2380: ItemKeyYellow {
		keyid = 9880;
	};
	class ItemKeyYellow2381: ItemKeyYellow {
		keyid = 9881;
	};
	class ItemKeyYellow2382: ItemKeyYellow {
		keyid = 9882;
	};
	class ItemKeyYellow2383: ItemKeyYellow {
		keyid = 9883;
	};
	class ItemKeyYellow2384: ItemKeyYellow {
		keyid = 9884;
	};
	class ItemKeyYellow2385: ItemKeyYellow {
		keyid = 9885;
	};
	class ItemKeyYellow2386: ItemKeyYellow {
		keyid = 9886;
	};
	class ItemKeyYellow2387: ItemKeyYellow {
		keyid = 9887;
	};
	class ItemKeyYellow2388: ItemKeyYellow {
		keyid = 9888;
	};
	class ItemKeyYellow2389: ItemKeyYellow {
		keyid = 9889;
	};
	class ItemKeyYellow2390: ItemKeyYellow {
		keyid = 9890;
	};
	class ItemKeyYellow2391: ItemKeyYellow {
		keyid = 9891;
	};
	class ItemKeyYellow2392: ItemKeyYellow {
		keyid = 9892;
	};
	class ItemKeyYellow2393: ItemKeyYellow {
		keyid = 9893;
	};
	class ItemKeyYellow2394: ItemKeyYellow {
		keyid = 9894;
	};
	class ItemKeyYellow2395: ItemKeyYellow {
		keyid = 9895;
	};
	class ItemKeyYellow2396: ItemKeyYellow {
		keyid = 9896;
	};
	class ItemKeyYellow2397: ItemKeyYellow {
		keyid = 9897;
	};
	class ItemKeyYellow2398: ItemKeyYellow {
		keyid = 9898;
	};
	class ItemKeyYellow2399: ItemKeyYellow {
		keyid = 9899;
	};
	class ItemKeyYellow2400: ItemKeyYellow {
		keyid = 9900;
	};
	class ItemKeyYellow2401: ItemKeyYellow {
		keyid = 9901;
	};
	class ItemKeyYellow2402: ItemKeyYellow {
		keyid = 9902;
	};
	class ItemKeyYellow2403: ItemKeyYellow {
		keyid = 9903;
	};
	class ItemKeyYellow2404: ItemKeyYellow {
		keyid = 9904;
	};
	class ItemKeyYellow2405: ItemKeyYellow {
		keyid = 9905;
	};
	class ItemKeyYellow2406: ItemKeyYellow {
		keyid = 9906;
	};
	class ItemKeyYellow2407: ItemKeyYellow {
		keyid = 9907;
	};
	class ItemKeyYellow2408: ItemKeyYellow {
		keyid = 9908;
	};
	class ItemKeyYellow2409: ItemKeyYellow {
		keyid = 9909;
	};
	class ItemKeyYellow2410: ItemKeyYellow {
		keyid = 9910;
	};
	class ItemKeyYellow2411: ItemKeyYellow {
		keyid = 9911;
	};
	class ItemKeyYellow2412: ItemKeyYellow {
		keyid = 9912;
	};
	class ItemKeyYellow2413: ItemKeyYellow {
		keyid = 9913;
	};
	class ItemKeyYellow2414: ItemKeyYellow {
		keyid = 9914;
	};
	class ItemKeyYellow2415: ItemKeyYellow {
		keyid = 9915;
	};
	class ItemKeyYellow2416: ItemKeyYellow {
		keyid = 9916;
	};
	class ItemKeyYellow2417: ItemKeyYellow {
		keyid = 9917;
	};
	class ItemKeyYellow2418: ItemKeyYellow {
		keyid = 9918;
	};
	class ItemKeyYellow2419: ItemKeyYellow {
		keyid = 9919;
	};
	class ItemKeyYellow2420: ItemKeyYellow {
		keyid = 9920;
	};
	class ItemKeyYellow2421: ItemKeyYellow {
		keyid = 9921;
	};
	class ItemKeyYellow2422: ItemKeyYellow {
		keyid = 9922;
	};
	class ItemKeyYellow2423: ItemKeyYellow {
		keyid = 9923;
	};
	class ItemKeyYellow2424: ItemKeyYellow {
		keyid = 9924;
	};
	class ItemKeyYellow2425: ItemKeyYellow {
		keyid = 9925;
	};
	class ItemKeyYellow2426: ItemKeyYellow {
		keyid = 9926;
	};
	class ItemKeyYellow2427: ItemKeyYellow {
		keyid = 9927;
	};
	class ItemKeyYellow2428: ItemKeyYellow {
		keyid = 9928;
	};
	class ItemKeyYellow2429: ItemKeyYellow {
		keyid = 9929;
	};
	class ItemKeyYellow2430: ItemKeyYellow {
		keyid = 9930;
	};
	class ItemKeyYellow2431: ItemKeyYellow {
		keyid = 9931;
	};
	class ItemKeyYellow2432: ItemKeyYellow {
		keyid = 9932;
	};
	class ItemKeyYellow2433: ItemKeyYellow {
		keyid = 9933;
	};
	class ItemKeyYellow2434: ItemKeyYellow {
		keyid = 9934;
	};
	class ItemKeyYellow2435: ItemKeyYellow {
		keyid = 9935;
	};
	class ItemKeyYellow2436: ItemKeyYellow {
		keyid = 9936;
	};
	class ItemKeyYellow2437: ItemKeyYellow {
		keyid = 9937;
	};
	class ItemKeyYellow2438: ItemKeyYellow {
		keyid = 9938;
	};
	class ItemKeyYellow2439: ItemKeyYellow {
		keyid = 9939;
	};
	class ItemKeyYellow2440: ItemKeyYellow {
		keyid = 9940;
	};
	class ItemKeyYellow2441: ItemKeyYellow {
		keyid = 9941;
	};
	class ItemKeyYellow2442: ItemKeyYellow {
		keyid = 9942;
	};
	class ItemKeyYellow2443: ItemKeyYellow {
		keyid = 9943;
	};
	class ItemKeyYellow2444: ItemKeyYellow {
		keyid = 9944;
	};
	class ItemKeyYellow2445: ItemKeyYellow {
		keyid = 9945;
	};
	class ItemKeyYellow2446: ItemKeyYellow {
		keyid = 9946;
	};
	class ItemKeyYellow2447: ItemKeyYellow {
		keyid = 9947;
	};
	class ItemKeyYellow2448: ItemKeyYellow {
		keyid = 9948;
	};
	class ItemKeyYellow2449: ItemKeyYellow {
		keyid = 9949;
	};
	class ItemKeyYellow2450: ItemKeyYellow {
		keyid = 9950;
	};
	class ItemKeyYellow2451: ItemKeyYellow {
		keyid = 9951;
	};
	class ItemKeyYellow2452: ItemKeyYellow {
		keyid = 9952;
	};
	class ItemKeyYellow2453: ItemKeyYellow {
		keyid = 9953;
	};
	class ItemKeyYellow2454: ItemKeyYellow {
		keyid = 9954;
	};
	class ItemKeyYellow2455: ItemKeyYellow {
		keyid = 9955;
	};
	class ItemKeyYellow2456: ItemKeyYellow {
		keyid = 9956;
	};
	class ItemKeyYellow2457: ItemKeyYellow {
		keyid = 9957;
	};
	class ItemKeyYellow2458: ItemKeyYellow {
		keyid = 9958;
	};
	class ItemKeyYellow2459: ItemKeyYellow {
		keyid = 9959;
	};
	class ItemKeyYellow2460: ItemKeyYellow {
		keyid = 9960;
	};
	class ItemKeyYellow2461: ItemKeyYellow {
		keyid = 9961;
	};
	class ItemKeyYellow2462: ItemKeyYellow {
		keyid = 9962;
	};
	class ItemKeyYellow2463: ItemKeyYellow {
		keyid = 9963;
	};
	class ItemKeyYellow2464: ItemKeyYellow {
		keyid = 9964;
	};
	class ItemKeyYellow2465: ItemKeyYellow {
		keyid = 9965;
	};
	class ItemKeyYellow2466: ItemKeyYellow {
		keyid = 9966;
	};
	class ItemKeyYellow2467: ItemKeyYellow {
		keyid = 9967;
	};
	class ItemKeyYellow2468: ItemKeyYellow {
		keyid = 9968;
	};
	class ItemKeyYellow2469: ItemKeyYellow {
		keyid = 9969;
	};
	class ItemKeyYellow2470: ItemKeyYellow {
		keyid = 9970;
	};
	class ItemKeyYellow2471: ItemKeyYellow {
		keyid = 9971;
	};
	class ItemKeyYellow2472: ItemKeyYellow {
		keyid = 9972;
	};
	class ItemKeyYellow2473: ItemKeyYellow {
		keyid = 9973;
	};
	class ItemKeyYellow2474: ItemKeyYellow {
		keyid = 9974;
	};
	class ItemKeyYellow2475: ItemKeyYellow {
		keyid = 9975;
	};
	class ItemKeyYellow2476: ItemKeyYellow {
		keyid = 9976;
	};
	class ItemKeyYellow2477: ItemKeyYellow {
		keyid = 9977;
	};
	class ItemKeyYellow2478: ItemKeyYellow {
		keyid = 9978;
	};
	class ItemKeyYellow2479: ItemKeyYellow {
		keyid = 9979;
	};
	class ItemKeyYellow2480: ItemKeyYellow {
		keyid = 9980;
	};
	class ItemKeyYellow2481: ItemKeyYellow {
		keyid = 9981;
	};
	class ItemKeyYellow2482: ItemKeyYellow {
		keyid = 9982;
	};
	class ItemKeyYellow2483: ItemKeyYellow {
		keyid = 9983;
	};
	class ItemKeyYellow2484: ItemKeyYellow {
		keyid = 9984;
	};
	class ItemKeyYellow2485: ItemKeyYellow {
		keyid = 9985;
	};
	class ItemKeyYellow2486: ItemKeyYellow {
		keyid = 9986;
	};
	class ItemKeyYellow2487: ItemKeyYellow {
		keyid = 9987;
	};
	class ItemKeyYellow2488: ItemKeyYellow {
		keyid = 9988;
	};
	class ItemKeyYellow2489: ItemKeyYellow {
		keyid = 9989;
	};
	class ItemKeyYellow2490: ItemKeyYellow {
		keyid = 9990;
	};
	class ItemKeyYellow2491: ItemKeyYellow {
		keyid = 9991;
	};
	class ItemKeyYellow2492: ItemKeyYellow {
		keyid = 9992;
	};
	class ItemKeyYellow2493: ItemKeyYellow {
		keyid = 9993;
	};
	class ItemKeyYellow2494: ItemKeyYellow {
		keyid = 9994;
	};
	class ItemKeyYellow2495: ItemKeyYellow {
		keyid = 9995;
	};
	class ItemKeyYellow2496: ItemKeyYellow {
		keyid = 9996;
	};
	class ItemKeyYellow2497: ItemKeyYellow {
		keyid = 9997;
	};
	class ItemKeyYellow2498: ItemKeyYellow {
		keyid = 9998;
	};
	class ItemKeyYellow2499: ItemKeyYellow {
		keyid = 9999;
	};
	class ItemKeyYellow2500: ItemKeyYellow {
		keyid = 10000;
	};

	// Black keys
		class ItemKeyBlack1: ItemKeyBlack {
		keyid = 10001;
	};
	class ItemKeyBlack2: ItemKeyBlack {
		keyid = 10002;
	};
	class ItemKeyBlack3: ItemKeyBlack {
		keyid = 10003;
	};
	class ItemKeyBlack4: ItemKeyBlack {
		keyid = 10004;
	};
	class ItemKeyBlack5: ItemKeyBlack {
		keyid = 10005;
	};
	class ItemKeyBlack6: ItemKeyBlack {
		keyid = 10006;
	};
	class ItemKeyBlack7: ItemKeyBlack {
		keyid = 10007;
	};
	class ItemKeyBlack8: ItemKeyBlack {
		keyid = 10008;
	};
	class ItemKeyBlack9: ItemKeyBlack {
		keyid = 10009;
	};
	class ItemKeyBlack10: ItemKeyBlack {
		keyid = 10010;
	};
	class ItemKeyBlack11: ItemKeyBlack {
		keyid = 10011;
	};
	class ItemKeyBlack12: ItemKeyBlack {
		keyid = 10012;
	};
	class ItemKeyBlack13: ItemKeyBlack {
		keyid = 10013;
	};
	class ItemKeyBlack14: ItemKeyBlack {
		keyid = 10014;
	};
	class ItemKeyBlack15: ItemKeyBlack {
		keyid = 10015;
	};
	class ItemKeyBlack16: ItemKeyBlack {
		keyid = 10016;
	};
	class ItemKeyBlack17: ItemKeyBlack {
		keyid = 10017;
	};
	class ItemKeyBlack18: ItemKeyBlack {
		keyid = 10018;
	};
	class ItemKeyBlack19: ItemKeyBlack {
		keyid = 10019;
	};
	class ItemKeyBlack20: ItemKeyBlack {
		keyid = 10020;
	};
	class ItemKeyBlack21: ItemKeyBlack {
		keyid = 10021;
	};
	class ItemKeyBlack22: ItemKeyBlack {
		keyid = 10022;
	};
	class ItemKeyBlack23: ItemKeyBlack {
		keyid = 10023;
	};
	class ItemKeyBlack24: ItemKeyBlack {
		keyid = 10024;
	};
	class ItemKeyBlack25: ItemKeyBlack {
		keyid = 10025;
	};
	class ItemKeyBlack26: ItemKeyBlack {
		keyid = 10026;
	};
	class ItemKeyBlack27: ItemKeyBlack {
		keyid = 10027;
	};
	class ItemKeyBlack28: ItemKeyBlack {
		keyid = 10028;
	};
	class ItemKeyBlack29: ItemKeyBlack {
		keyid = 10029;
	};
	class ItemKeyBlack30: ItemKeyBlack {
		keyid = 10030;
	};
	class ItemKeyBlack31: ItemKeyBlack {
		keyid = 10031;
	};
	class ItemKeyBlack32: ItemKeyBlack {
		keyid = 10032;
	};
	class ItemKeyBlack33: ItemKeyBlack {
		keyid = 10033;
	};
	class ItemKeyBlack34: ItemKeyBlack {
		keyid = 10034;
	};
	class ItemKeyBlack35: ItemKeyBlack {
		keyid = 10035;
	};
	class ItemKeyBlack36: ItemKeyBlack {
		keyid = 10036;
	};
	class ItemKeyBlack37: ItemKeyBlack {
		keyid = 10037;
	};
	class ItemKeyBlack38: ItemKeyBlack {
		keyid = 10038;
	};
	class ItemKeyBlack39: ItemKeyBlack {
		keyid = 10039;
	};
	class ItemKeyBlack40: ItemKeyBlack {
		keyid = 10040;
	};
	class ItemKeyBlack41: ItemKeyBlack {
		keyid = 10041;
	};
	class ItemKeyBlack42: ItemKeyBlack {
		keyid = 10042;
	};
	class ItemKeyBlack43: ItemKeyBlack {
		keyid = 10043;
	};
	class ItemKeyBlack44: ItemKeyBlack {
		keyid = 10044;
	};
	class ItemKeyBlack45: ItemKeyBlack {
		keyid = 10045;
	};
	class ItemKeyBlack46: ItemKeyBlack {
		keyid = 10046;
	};
	class ItemKeyBlack47: ItemKeyBlack {
		keyid = 10047;
	};
	class ItemKeyBlack48: ItemKeyBlack {
		keyid = 10048;
	};
	class ItemKeyBlack49: ItemKeyBlack {
		keyid = 10049;
	};
	class ItemKeyBlack50: ItemKeyBlack {
		keyid = 10050;
	};
	class ItemKeyBlack51: ItemKeyBlack {
		keyid = 10051;
	};
	class ItemKeyBlack52: ItemKeyBlack {
		keyid = 10052;
	};
	class ItemKeyBlack53: ItemKeyBlack {
		keyid = 10053;
	};
	class ItemKeyBlack54: ItemKeyBlack {
		keyid = 10054;
	};
	class ItemKeyBlack55: ItemKeyBlack {
		keyid = 10055;
	};
	class ItemKeyBlack56: ItemKeyBlack {
		keyid = 10056;
	};
	class ItemKeyBlack57: ItemKeyBlack {
		keyid = 10057;
	};
	class ItemKeyBlack58: ItemKeyBlack {
		keyid = 10058;
	};
	class ItemKeyBlack59: ItemKeyBlack {
		keyid = 10059;
	};
	class ItemKeyBlack60: ItemKeyBlack {
		keyid = 10060;
	};
	class ItemKeyBlack61: ItemKeyBlack {
		keyid = 10061;
	};
	class ItemKeyBlack62: ItemKeyBlack {
		keyid = 10062;
	};
	class ItemKeyBlack63: ItemKeyBlack {
		keyid = 10063;
	};
	class ItemKeyBlack64: ItemKeyBlack {
		keyid = 10064;
	};
	class ItemKeyBlack65: ItemKeyBlack {
		keyid = 10065;
	};
	class ItemKeyBlack66: ItemKeyBlack {
		keyid = 10066;
	};
	class ItemKeyBlack67: ItemKeyBlack {
		keyid = 10067;
	};
	class ItemKeyBlack68: ItemKeyBlack {
		keyid = 10068;
	};
	class ItemKeyBlack69: ItemKeyBlack {
		keyid = 10069;
	};
	class ItemKeyBlack70: ItemKeyBlack {
		keyid = 10070;
	};
	class ItemKeyBlack71: ItemKeyBlack {
		keyid = 10071;
	};
	class ItemKeyBlack72: ItemKeyBlack {
		keyid = 10072;
	};
	class ItemKeyBlack73: ItemKeyBlack {
		keyid = 10073;
	};
	class ItemKeyBlack74: ItemKeyBlack {
		keyid = 10074;
	};
	class ItemKeyBlack75: ItemKeyBlack {
		keyid = 10075;
	};
	class ItemKeyBlack76: ItemKeyBlack {
		keyid = 10076;
	};
	class ItemKeyBlack77: ItemKeyBlack {
		keyid = 10077;
	};
	class ItemKeyBlack78: ItemKeyBlack {
		keyid = 10078;
	};
	class ItemKeyBlack79: ItemKeyBlack {
		keyid = 10079;
	};
	class ItemKeyBlack80: ItemKeyBlack {
		keyid = 10080;
	};
	class ItemKeyBlack81: ItemKeyBlack {
		keyid = 10081;
	};
	class ItemKeyBlack82: ItemKeyBlack {
		keyid = 10082;
	};
	class ItemKeyBlack83: ItemKeyBlack {
		keyid = 10083;
	};
	class ItemKeyBlack84: ItemKeyBlack {
		keyid = 10084;
	};
	class ItemKeyBlack85: ItemKeyBlack {
		keyid = 10085;
	};
	class ItemKeyBlack86: ItemKeyBlack {
		keyid = 10086;
	};
	class ItemKeyBlack87: ItemKeyBlack {
		keyid = 10087;
	};
	class ItemKeyBlack88: ItemKeyBlack {
		keyid = 10088;
	};
	class ItemKeyBlack89: ItemKeyBlack {
		keyid = 10089;
	};
	class ItemKeyBlack90: ItemKeyBlack {
		keyid = 10090;
	};
	class ItemKeyBlack91: ItemKeyBlack {
		keyid = 10091;
	};
	class ItemKeyBlack92: ItemKeyBlack {
		keyid = 10092;
	};
	class ItemKeyBlack93: ItemKeyBlack {
		keyid = 10093;
	};
	class ItemKeyBlack94: ItemKeyBlack {
		keyid = 10094;
	};
	class ItemKeyBlack95: ItemKeyBlack {
		keyid = 10095;
	};
	class ItemKeyBlack96: ItemKeyBlack {
		keyid = 10096;
	};
	class ItemKeyBlack97: ItemKeyBlack {
		keyid = 10097;
	};
	class ItemKeyBlack98: ItemKeyBlack {
		keyid = 10098;
	};
	class ItemKeyBlack99: ItemKeyBlack {
		keyid = 10099;
	};
	class ItemKeyBlack100: ItemKeyBlack {
		keyid = 10100;
	};
	class ItemKeyBlack101: ItemKeyBlack {
		keyid = 10101;
	};
	class ItemKeyBlack102: ItemKeyBlack {
		keyid = 10102;
	};
	class ItemKeyBlack103: ItemKeyBlack {
		keyid = 10103;
	};
	class ItemKeyBlack104: ItemKeyBlack {
		keyid = 10104;
	};
	class ItemKeyBlack105: ItemKeyBlack {
		keyid = 10105;
	};
	class ItemKeyBlack106: ItemKeyBlack {
		keyid = 10106;
	};
	class ItemKeyBlack107: ItemKeyBlack {
		keyid = 10107;
	};
	class ItemKeyBlack108: ItemKeyBlack {
		keyid = 10108;
	};
	class ItemKeyBlack109: ItemKeyBlack {
		keyid = 10109;
	};
	class ItemKeyBlack110: ItemKeyBlack {
		keyid = 10110;
	};
	class ItemKeyBlack111: ItemKeyBlack {
		keyid = 10111;
	};
	class ItemKeyBlack112: ItemKeyBlack {
		keyid = 10112;
	};
	class ItemKeyBlack113: ItemKeyBlack {
		keyid = 10113;
	};
	class ItemKeyBlack114: ItemKeyBlack {
		keyid = 10114;
	};
	class ItemKeyBlack115: ItemKeyBlack {
		keyid = 10115;
	};
	class ItemKeyBlack116: ItemKeyBlack {
		keyid = 10116;
	};
	class ItemKeyBlack117: ItemKeyBlack {
		keyid = 10117;
	};
	class ItemKeyBlack118: ItemKeyBlack {
		keyid = 10118;
	};
	class ItemKeyBlack119: ItemKeyBlack {
		keyid = 10119;
	};
	class ItemKeyBlack120: ItemKeyBlack {
		keyid = 10120;
	};
	class ItemKeyBlack121: ItemKeyBlack {
		keyid = 10121;
	};
	class ItemKeyBlack122: ItemKeyBlack {
		keyid = 10122;
	};
	class ItemKeyBlack123: ItemKeyBlack {
		keyid = 10123;
	};
	class ItemKeyBlack124: ItemKeyBlack {
		keyid = 10124;
	};
	class ItemKeyBlack125: ItemKeyBlack {
		keyid = 10125;
	};
	class ItemKeyBlack126: ItemKeyBlack {
		keyid = 10126;
	};
	class ItemKeyBlack127: ItemKeyBlack {
		keyid = 10127;
	};
	class ItemKeyBlack128: ItemKeyBlack {
		keyid = 10128;
	};
	class ItemKeyBlack129: ItemKeyBlack {
		keyid = 10129;
	};
	class ItemKeyBlack130: ItemKeyBlack {
		keyid = 10130;
	};
	class ItemKeyBlack131: ItemKeyBlack {
		keyid = 10131;
	};
	class ItemKeyBlack132: ItemKeyBlack {
		keyid = 10132;
	};
	class ItemKeyBlack133: ItemKeyBlack {
		keyid = 10133;
	};
	class ItemKeyBlack134: ItemKeyBlack {
		keyid = 10134;
	};
	class ItemKeyBlack135: ItemKeyBlack {
		keyid = 10135;
	};
	class ItemKeyBlack136: ItemKeyBlack {
		keyid = 10136;
	};
	class ItemKeyBlack137: ItemKeyBlack {
		keyid = 10137;
	};
	class ItemKeyBlack138: ItemKeyBlack {
		keyid = 10138;
	};
	class ItemKeyBlack139: ItemKeyBlack {
		keyid = 10139;
	};
	class ItemKeyBlack140: ItemKeyBlack {
		keyid = 10140;
	};
	class ItemKeyBlack141: ItemKeyBlack {
		keyid = 10141;
	};
	class ItemKeyBlack142: ItemKeyBlack {
		keyid = 10142;
	};
	class ItemKeyBlack143: ItemKeyBlack {
		keyid = 10143;
	};
	class ItemKeyBlack144: ItemKeyBlack {
		keyid = 10144;
	};
	class ItemKeyBlack145: ItemKeyBlack {
		keyid = 10145;
	};
	class ItemKeyBlack146: ItemKeyBlack {
		keyid = 10146;
	};
	class ItemKeyBlack147: ItemKeyBlack {
		keyid = 10147;
	};
	class ItemKeyBlack148: ItemKeyBlack {
		keyid = 10148;
	};
	class ItemKeyBlack149: ItemKeyBlack {
		keyid = 10149;
	};
	class ItemKeyBlack150: ItemKeyBlack {
		keyid = 10150;
	};
	class ItemKeyBlack151: ItemKeyBlack {
		keyid = 10151;
	};
	class ItemKeyBlack152: ItemKeyBlack {
		keyid = 10152;
	};
	class ItemKeyBlack153: ItemKeyBlack {
		keyid = 10153;
	};
	class ItemKeyBlack154: ItemKeyBlack {
		keyid = 10154;
	};
	class ItemKeyBlack155: ItemKeyBlack {
		keyid = 10155;
	};
	class ItemKeyBlack156: ItemKeyBlack {
		keyid = 10156;
	};
	class ItemKeyBlack157: ItemKeyBlack {
		keyid = 10157;
	};
	class ItemKeyBlack158: ItemKeyBlack {
		keyid = 10158;
	};
	class ItemKeyBlack159: ItemKeyBlack {
		keyid = 10159;
	};
	class ItemKeyBlack160: ItemKeyBlack {
		keyid = 10160;
	};
	class ItemKeyBlack161: ItemKeyBlack {
		keyid = 10161;
	};
	class ItemKeyBlack162: ItemKeyBlack {
		keyid = 10162;
	};
	class ItemKeyBlack163: ItemKeyBlack {
		keyid = 10163;
	};
	class ItemKeyBlack164: ItemKeyBlack {
		keyid = 10164;
	};
	class ItemKeyBlack165: ItemKeyBlack {
		keyid = 10165;
	};
	class ItemKeyBlack166: ItemKeyBlack {
		keyid = 10166;
	};
	class ItemKeyBlack167: ItemKeyBlack {
		keyid = 10167;
	};
	class ItemKeyBlack168: ItemKeyBlack {
		keyid = 10168;
	};
	class ItemKeyBlack169: ItemKeyBlack {
		keyid = 10169;
	};
	class ItemKeyBlack170: ItemKeyBlack {
		keyid = 10170;
	};
	class ItemKeyBlack171: ItemKeyBlack {
		keyid = 10171;
	};
	class ItemKeyBlack172: ItemKeyBlack {
		keyid = 10172;
	};
	class ItemKeyBlack173: ItemKeyBlack {
		keyid = 10173;
	};
	class ItemKeyBlack174: ItemKeyBlack {
		keyid = 10174;
	};
	class ItemKeyBlack175: ItemKeyBlack {
		keyid = 10175;
	};
	class ItemKeyBlack176: ItemKeyBlack {
		keyid = 10176;
	};
	class ItemKeyBlack177: ItemKeyBlack {
		keyid = 10177;
	};
	class ItemKeyBlack178: ItemKeyBlack {
		keyid = 10178;
	};
	class ItemKeyBlack179: ItemKeyBlack {
		keyid = 10179;
	};
	class ItemKeyBlack180: ItemKeyBlack {
		keyid = 10180;
	};
	class ItemKeyBlack181: ItemKeyBlack {
		keyid = 10181;
	};
	class ItemKeyBlack182: ItemKeyBlack {
		keyid = 10182;
	};
	class ItemKeyBlack183: ItemKeyBlack {
		keyid = 10183;
	};
	class ItemKeyBlack184: ItemKeyBlack {
		keyid = 10184;
	};
	class ItemKeyBlack185: ItemKeyBlack {
		keyid = 10185;
	};
	class ItemKeyBlack186: ItemKeyBlack {
		keyid = 10186;
	};
	class ItemKeyBlack187: ItemKeyBlack {
		keyid = 10187;
	};
	class ItemKeyBlack188: ItemKeyBlack {
		keyid = 10188;
	};
	class ItemKeyBlack189: ItemKeyBlack {
		keyid = 10189;
	};
	class ItemKeyBlack190: ItemKeyBlack {
		keyid = 10190;
	};
	class ItemKeyBlack191: ItemKeyBlack {
		keyid = 10191;
	};
	class ItemKeyBlack192: ItemKeyBlack {
		keyid = 10192;
	};
	class ItemKeyBlack193: ItemKeyBlack {
		keyid = 10193;
	};
	class ItemKeyBlack194: ItemKeyBlack {
		keyid = 10194;
	};
	class ItemKeyBlack195: ItemKeyBlack {
		keyid = 10195;
	};
	class ItemKeyBlack196: ItemKeyBlack {
		keyid = 10196;
	};
	class ItemKeyBlack197: ItemKeyBlack {
		keyid = 10197;
	};
	class ItemKeyBlack198: ItemKeyBlack {
		keyid = 10198;
	};
	class ItemKeyBlack199: ItemKeyBlack {
		keyid = 10199;
	};
	class ItemKeyBlack200: ItemKeyBlack {
		keyid = 10200;
	};
	class ItemKeyBlack201: ItemKeyBlack {
		keyid = 10201;
	};
	class ItemKeyBlack202: ItemKeyBlack {
		keyid = 10202;
	};
	class ItemKeyBlack203: ItemKeyBlack {
		keyid = 10203;
	};
	class ItemKeyBlack204: ItemKeyBlack {
		keyid = 10204;
	};
	class ItemKeyBlack205: ItemKeyBlack {
		keyid = 10205;
	};
	class ItemKeyBlack206: ItemKeyBlack {
		keyid = 10206;
	};
	class ItemKeyBlack207: ItemKeyBlack {
		keyid = 10207;
	};
	class ItemKeyBlack208: ItemKeyBlack {
		keyid = 10208;
	};
	class ItemKeyBlack209: ItemKeyBlack {
		keyid = 10209;
	};
	class ItemKeyBlack210: ItemKeyBlack {
		keyid = 10210;
	};
	class ItemKeyBlack211: ItemKeyBlack {
		keyid = 10211;
	};
	class ItemKeyBlack212: ItemKeyBlack {
		keyid = 10212;
	};
	class ItemKeyBlack213: ItemKeyBlack {
		keyid = 10213;
	};
	class ItemKeyBlack214: ItemKeyBlack {
		keyid = 10214;
	};
	class ItemKeyBlack215: ItemKeyBlack {
		keyid = 10215;
	};
	class ItemKeyBlack216: ItemKeyBlack {
		keyid = 10216;
	};
	class ItemKeyBlack217: ItemKeyBlack {
		keyid = 10217;
	};
	class ItemKeyBlack218: ItemKeyBlack {
		keyid = 10218;
	};
	class ItemKeyBlack219: ItemKeyBlack {
		keyid = 10219;
	};
	class ItemKeyBlack220: ItemKeyBlack {
		keyid = 10220;
	};
	class ItemKeyBlack221: ItemKeyBlack {
		keyid = 10221;
	};
	class ItemKeyBlack222: ItemKeyBlack {
		keyid = 10222;
	};
	class ItemKeyBlack223: ItemKeyBlack {
		keyid = 10223;
	};
	class ItemKeyBlack224: ItemKeyBlack {
		keyid = 10224;
	};
	class ItemKeyBlack225: ItemKeyBlack {
		keyid = 10225;
	};
	class ItemKeyBlack226: ItemKeyBlack {
		keyid = 10226;
	};
	class ItemKeyBlack227: ItemKeyBlack {
		keyid = 10227;
	};
	class ItemKeyBlack228: ItemKeyBlack {
		keyid = 10228;
	};
	class ItemKeyBlack229: ItemKeyBlack {
		keyid = 10229;
	};
	class ItemKeyBlack230: ItemKeyBlack {
		keyid = 10230;
	};
	class ItemKeyBlack231: ItemKeyBlack {
		keyid = 10231;
	};
	class ItemKeyBlack232: ItemKeyBlack {
		keyid = 10232;
	};
	class ItemKeyBlack233: ItemKeyBlack {
		keyid = 10233;
	};
	class ItemKeyBlack234: ItemKeyBlack {
		keyid = 10234;
	};
	class ItemKeyBlack235: ItemKeyBlack {
		keyid = 10235;
	};
	class ItemKeyBlack236: ItemKeyBlack {
		keyid = 10236;
	};
	class ItemKeyBlack237: ItemKeyBlack {
		keyid = 10237;
	};
	class ItemKeyBlack238: ItemKeyBlack {
		keyid = 10238;
	};
	class ItemKeyBlack239: ItemKeyBlack {
		keyid = 10239;
	};
	class ItemKeyBlack240: ItemKeyBlack {
		keyid = 10240;
	};
	class ItemKeyBlack241: ItemKeyBlack {
		keyid = 10241;
	};
	class ItemKeyBlack242: ItemKeyBlack {
		keyid = 10242;
	};
	class ItemKeyBlack243: ItemKeyBlack {
		keyid = 10243;
	};
	class ItemKeyBlack244: ItemKeyBlack {
		keyid = 10244;
	};
	class ItemKeyBlack245: ItemKeyBlack {
		keyid = 10245;
	};
	class ItemKeyBlack246: ItemKeyBlack {
		keyid = 10246;
	};
	class ItemKeyBlack247: ItemKeyBlack {
		keyid = 10247;
	};
	class ItemKeyBlack248: ItemKeyBlack {
		keyid = 10248;
	};
	class ItemKeyBlack249: ItemKeyBlack {
		keyid = 10249;
	};
	class ItemKeyBlack250: ItemKeyBlack {
		keyid = 10250;
	};
	class ItemKeyBlack251: ItemKeyBlack {
		keyid = 10251;
	};
	class ItemKeyBlack252: ItemKeyBlack {
		keyid = 10252;
	};
	class ItemKeyBlack253: ItemKeyBlack {
		keyid = 10253;
	};
	class ItemKeyBlack254: ItemKeyBlack {
		keyid = 10254;
	};
	class ItemKeyBlack255: ItemKeyBlack {
		keyid = 10255;
	};
	class ItemKeyBlack256: ItemKeyBlack {
		keyid = 10256;
	};
	class ItemKeyBlack257: ItemKeyBlack {
		keyid = 10257;
	};
	class ItemKeyBlack258: ItemKeyBlack {
		keyid = 10258;
	};
	class ItemKeyBlack259: ItemKeyBlack {
		keyid = 10259;
	};
	class ItemKeyBlack260: ItemKeyBlack {
		keyid = 10260;
	};
	class ItemKeyBlack261: ItemKeyBlack {
		keyid = 10261;
	};
	class ItemKeyBlack262: ItemKeyBlack {
		keyid = 10262;
	};
	class ItemKeyBlack263: ItemKeyBlack {
		keyid = 10263;
	};
	class ItemKeyBlack264: ItemKeyBlack {
		keyid = 10264;
	};
	class ItemKeyBlack265: ItemKeyBlack {
		keyid = 10265;
	};
	class ItemKeyBlack266: ItemKeyBlack {
		keyid = 10266;
	};
	class ItemKeyBlack267: ItemKeyBlack {
		keyid = 10267;
	};
	class ItemKeyBlack268: ItemKeyBlack {
		keyid = 10268;
	};
	class ItemKeyBlack269: ItemKeyBlack {
		keyid = 10269;
	};
	class ItemKeyBlack270: ItemKeyBlack {
		keyid = 10270;
	};
	class ItemKeyBlack271: ItemKeyBlack {
		keyid = 10271;
	};
	class ItemKeyBlack272: ItemKeyBlack {
		keyid = 10272;
	};
	class ItemKeyBlack273: ItemKeyBlack {
		keyid = 10273;
	};
	class ItemKeyBlack274: ItemKeyBlack {
		keyid = 10274;
	};
	class ItemKeyBlack275: ItemKeyBlack {
		keyid = 10275;
	};
	class ItemKeyBlack276: ItemKeyBlack {
		keyid = 10276;
	};
	class ItemKeyBlack277: ItemKeyBlack {
		keyid = 10277;
	};
	class ItemKeyBlack278: ItemKeyBlack {
		keyid = 10278;
	};
	class ItemKeyBlack279: ItemKeyBlack {
		keyid = 10279;
	};
	class ItemKeyBlack280: ItemKeyBlack {
		keyid = 10280;
	};
	class ItemKeyBlack281: ItemKeyBlack {
		keyid = 10281;
	};
	class ItemKeyBlack282: ItemKeyBlack {
		keyid = 10282;
	};
	class ItemKeyBlack283: ItemKeyBlack {
		keyid = 10283;
	};
	class ItemKeyBlack284: ItemKeyBlack {
		keyid = 10284;
	};
	class ItemKeyBlack285: ItemKeyBlack {
		keyid = 10285;
	};
	class ItemKeyBlack286: ItemKeyBlack {
		keyid = 10286;
	};
	class ItemKeyBlack287: ItemKeyBlack {
		keyid = 10287;
	};
	class ItemKeyBlack288: ItemKeyBlack {
		keyid = 10288;
	};
	class ItemKeyBlack289: ItemKeyBlack {
		keyid = 10289;
	};
	class ItemKeyBlack290: ItemKeyBlack {
		keyid = 10290;
	};
	class ItemKeyBlack291: ItemKeyBlack {
		keyid = 10291;
	};
	class ItemKeyBlack292: ItemKeyBlack {
		keyid = 10292;
	};
	class ItemKeyBlack293: ItemKeyBlack {
		keyid = 10293;
	};
	class ItemKeyBlack294: ItemKeyBlack {
		keyid = 10294;
	};
	class ItemKeyBlack295: ItemKeyBlack {
		keyid = 10295;
	};
	class ItemKeyBlack296: ItemKeyBlack {
		keyid = 10296;
	};
	class ItemKeyBlack297: ItemKeyBlack {
		keyid = 10297;
	};
	class ItemKeyBlack298: ItemKeyBlack {
		keyid = 10298;
	};
	class ItemKeyBlack299: ItemKeyBlack {
		keyid = 10299;
	};
	class ItemKeyBlack300: ItemKeyBlack {
		keyid = 10300;
	};
	class ItemKeyBlack301: ItemKeyBlack {
		keyid = 10301;
	};
	class ItemKeyBlack302: ItemKeyBlack {
		keyid = 10302;
	};
	class ItemKeyBlack303: ItemKeyBlack {
		keyid = 10303;
	};
	class ItemKeyBlack304: ItemKeyBlack {
		keyid = 10304;
	};
	class ItemKeyBlack305: ItemKeyBlack {
		keyid = 10305;
	};
	class ItemKeyBlack306: ItemKeyBlack {
		keyid = 10306;
	};
	class ItemKeyBlack307: ItemKeyBlack {
		keyid = 10307;
	};
	class ItemKeyBlack308: ItemKeyBlack {
		keyid = 10308;
	};
	class ItemKeyBlack309: ItemKeyBlack {
		keyid = 10309;
	};
	class ItemKeyBlack310: ItemKeyBlack {
		keyid = 10310;
	};
	class ItemKeyBlack311: ItemKeyBlack {
		keyid = 10311;
	};
	class ItemKeyBlack312: ItemKeyBlack {
		keyid = 10312;
	};
	class ItemKeyBlack313: ItemKeyBlack {
		keyid = 10313;
	};
	class ItemKeyBlack314: ItemKeyBlack {
		keyid = 10314;
	};
	class ItemKeyBlack315: ItemKeyBlack {
		keyid = 10315;
	};
	class ItemKeyBlack316: ItemKeyBlack {
		keyid = 10316;
	};
	class ItemKeyBlack317: ItemKeyBlack {
		keyid = 10317;
	};
	class ItemKeyBlack318: ItemKeyBlack {
		keyid = 10318;
	};
	class ItemKeyBlack319: ItemKeyBlack {
		keyid = 10319;
	};
	class ItemKeyBlack320: ItemKeyBlack {
		keyid = 10320;
	};
	class ItemKeyBlack321: ItemKeyBlack {
		keyid = 10321;
	};
	class ItemKeyBlack322: ItemKeyBlack {
		keyid = 10322;
	};
	class ItemKeyBlack323: ItemKeyBlack {
		keyid = 10323;
	};
	class ItemKeyBlack324: ItemKeyBlack {
		keyid = 10324;
	};
	class ItemKeyBlack325: ItemKeyBlack {
		keyid = 10325;
	};
	class ItemKeyBlack326: ItemKeyBlack {
		keyid = 10326;
	};
	class ItemKeyBlack327: ItemKeyBlack {
		keyid = 10327;
	};
	class ItemKeyBlack328: ItemKeyBlack {
		keyid = 10328;
	};
	class ItemKeyBlack329: ItemKeyBlack {
		keyid = 10329;
	};
	class ItemKeyBlack330: ItemKeyBlack {
		keyid = 10330;
	};
	class ItemKeyBlack331: ItemKeyBlack {
		keyid = 10331;
	};
	class ItemKeyBlack332: ItemKeyBlack {
		keyid = 10332;
	};
	class ItemKeyBlack333: ItemKeyBlack {
		keyid = 10333;
	};
	class ItemKeyBlack334: ItemKeyBlack {
		keyid = 10334;
	};
	class ItemKeyBlack335: ItemKeyBlack {
		keyid = 10335;
	};
	class ItemKeyBlack336: ItemKeyBlack {
		keyid = 10336;
	};
	class ItemKeyBlack337: ItemKeyBlack {
		keyid = 10337;
	};
	class ItemKeyBlack338: ItemKeyBlack {
		keyid = 10338;
	};
	class ItemKeyBlack339: ItemKeyBlack {
		keyid = 10339;
	};
	class ItemKeyBlack340: ItemKeyBlack {
		keyid = 10340;
	};
	class ItemKeyBlack341: ItemKeyBlack {
		keyid = 10341;
	};
	class ItemKeyBlack342: ItemKeyBlack {
		keyid = 10342;
	};
	class ItemKeyBlack343: ItemKeyBlack {
		keyid = 10343;
	};
	class ItemKeyBlack344: ItemKeyBlack {
		keyid = 10344;
	};
	class ItemKeyBlack345: ItemKeyBlack {
		keyid = 10345;
	};
	class ItemKeyBlack346: ItemKeyBlack {
		keyid = 10346;
	};
	class ItemKeyBlack347: ItemKeyBlack {
		keyid = 10347;
	};
	class ItemKeyBlack348: ItemKeyBlack {
		keyid = 10348;
	};
	class ItemKeyBlack349: ItemKeyBlack {
		keyid = 10349;
	};
	class ItemKeyBlack350: ItemKeyBlack {
		keyid = 10350;
	};
	class ItemKeyBlack351: ItemKeyBlack {
		keyid = 10351;
	};
	class ItemKeyBlack352: ItemKeyBlack {
		keyid = 10352;
	};
	class ItemKeyBlack353: ItemKeyBlack {
		keyid = 10353;
	};
	class ItemKeyBlack354: ItemKeyBlack {
		keyid = 10354;
	};
	class ItemKeyBlack355: ItemKeyBlack {
		keyid = 10355;
	};
	class ItemKeyBlack356: ItemKeyBlack {
		keyid = 10356;
	};
	class ItemKeyBlack357: ItemKeyBlack {
		keyid = 10357;
	};
	class ItemKeyBlack358: ItemKeyBlack {
		keyid = 10358;
	};
	class ItemKeyBlack359: ItemKeyBlack {
		keyid = 10359;
	};
	class ItemKeyBlack360: ItemKeyBlack {
		keyid = 10360;
	};
	class ItemKeyBlack361: ItemKeyBlack {
		keyid = 10361;
	};
	class ItemKeyBlack362: ItemKeyBlack {
		keyid = 10362;
	};
	class ItemKeyBlack363: ItemKeyBlack {
		keyid = 10363;
	};
	class ItemKeyBlack364: ItemKeyBlack {
		keyid = 10364;
	};
	class ItemKeyBlack365: ItemKeyBlack {
		keyid = 10365;
	};
	class ItemKeyBlack366: ItemKeyBlack {
		keyid = 10366;
	};
	class ItemKeyBlack367: ItemKeyBlack {
		keyid = 10367;
	};
	class ItemKeyBlack368: ItemKeyBlack {
		keyid = 10368;
	};
	class ItemKeyBlack369: ItemKeyBlack {
		keyid = 10369;
	};
	class ItemKeyBlack370: ItemKeyBlack {
		keyid = 10370;
	};
	class ItemKeyBlack371: ItemKeyBlack {
		keyid = 10371;
	};
	class ItemKeyBlack372: ItemKeyBlack {
		keyid = 10372;
	};
	class ItemKeyBlack373: ItemKeyBlack {
		keyid = 10373;
	};
	class ItemKeyBlack374: ItemKeyBlack {
		keyid = 10374;
	};
	class ItemKeyBlack375: ItemKeyBlack {
		keyid = 10375;
	};
	class ItemKeyBlack376: ItemKeyBlack {
		keyid = 10376;
	};
	class ItemKeyBlack377: ItemKeyBlack {
		keyid = 10377;
	};
	class ItemKeyBlack378: ItemKeyBlack {
		keyid = 10378;
	};
	class ItemKeyBlack379: ItemKeyBlack {
		keyid = 10379;
	};
	class ItemKeyBlack380: ItemKeyBlack {
		keyid = 10380;
	};
	class ItemKeyBlack381: ItemKeyBlack {
		keyid = 10381;
	};
	class ItemKeyBlack382: ItemKeyBlack {
		keyid = 10382;
	};
	class ItemKeyBlack383: ItemKeyBlack {
		keyid = 10383;
	};
	class ItemKeyBlack384: ItemKeyBlack {
		keyid = 10384;
	};
	class ItemKeyBlack385: ItemKeyBlack {
		keyid = 10385;
	};
	class ItemKeyBlack386: ItemKeyBlack {
		keyid = 10386;
	};
	class ItemKeyBlack387: ItemKeyBlack {
		keyid = 10387;
	};
	class ItemKeyBlack388: ItemKeyBlack {
		keyid = 10388;
	};
	class ItemKeyBlack389: ItemKeyBlack {
		keyid = 10389;
	};
	class ItemKeyBlack390: ItemKeyBlack {
		keyid = 10390;
	};
	class ItemKeyBlack391: ItemKeyBlack {
		keyid = 10391;
	};
	class ItemKeyBlack392: ItemKeyBlack {
		keyid = 10392;
	};
	class ItemKeyBlack393: ItemKeyBlack {
		keyid = 10393;
	};
	class ItemKeyBlack394: ItemKeyBlack {
		keyid = 10394;
	};
	class ItemKeyBlack395: ItemKeyBlack {
		keyid = 10395;
	};
	class ItemKeyBlack396: ItemKeyBlack {
		keyid = 10396;
	};
	class ItemKeyBlack397: ItemKeyBlack {
		keyid = 10397;
	};
	class ItemKeyBlack398: ItemKeyBlack {
		keyid = 10398;
	};
	class ItemKeyBlack399: ItemKeyBlack {
		keyid = 10399;
	};
	class ItemKeyBlack400: ItemKeyBlack {
		keyid = 10400;
	};
	class ItemKeyBlack401: ItemKeyBlack {
		keyid = 10401;
	};
	class ItemKeyBlack402: ItemKeyBlack {
		keyid = 10402;
	};
	class ItemKeyBlack403: ItemKeyBlack {
		keyid = 10403;
	};
	class ItemKeyBlack404: ItemKeyBlack {
		keyid = 10404;
	};
	class ItemKeyBlack405: ItemKeyBlack {
		keyid = 10405;
	};
	class ItemKeyBlack406: ItemKeyBlack {
		keyid = 10406;
	};
	class ItemKeyBlack407: ItemKeyBlack {
		keyid = 10407;
	};
	class ItemKeyBlack408: ItemKeyBlack {
		keyid = 10408;
	};
	class ItemKeyBlack409: ItemKeyBlack {
		keyid = 10409;
	};
	class ItemKeyBlack410: ItemKeyBlack {
		keyid = 10410;
	};
	class ItemKeyBlack411: ItemKeyBlack {
		keyid = 10411;
	};
	class ItemKeyBlack412: ItemKeyBlack {
		keyid = 10412;
	};
	class ItemKeyBlack413: ItemKeyBlack {
		keyid = 10413;
	};
	class ItemKeyBlack414: ItemKeyBlack {
		keyid = 10414;
	};
	class ItemKeyBlack415: ItemKeyBlack {
		keyid = 10415;
	};
	class ItemKeyBlack416: ItemKeyBlack {
		keyid = 10416;
	};
	class ItemKeyBlack417: ItemKeyBlack {
		keyid = 10417;
	};
	class ItemKeyBlack418: ItemKeyBlack {
		keyid = 10418;
	};
	class ItemKeyBlack419: ItemKeyBlack {
		keyid = 10419;
	};
	class ItemKeyBlack420: ItemKeyBlack {
		keyid = 10420;
	};
	class ItemKeyBlack421: ItemKeyBlack {
		keyid = 10421;
	};
	class ItemKeyBlack422: ItemKeyBlack {
		keyid = 10422;
	};
	class ItemKeyBlack423: ItemKeyBlack {
		keyid = 10423;
	};
	class ItemKeyBlack424: ItemKeyBlack {
		keyid = 10424;
	};
	class ItemKeyBlack425: ItemKeyBlack {
		keyid = 10425;
	};
	class ItemKeyBlack426: ItemKeyBlack {
		keyid = 10426;
	};
	class ItemKeyBlack427: ItemKeyBlack {
		keyid = 10427;
	};
	class ItemKeyBlack428: ItemKeyBlack {
		keyid = 10428;
	};
	class ItemKeyBlack429: ItemKeyBlack {
		keyid = 10429;
	};
	class ItemKeyBlack430: ItemKeyBlack {
		keyid = 10430;
	};
	class ItemKeyBlack431: ItemKeyBlack {
		keyid = 10431;
	};
	class ItemKeyBlack432: ItemKeyBlack {
		keyid = 10432;
	};
	class ItemKeyBlack433: ItemKeyBlack {
		keyid = 10433;
	};
	class ItemKeyBlack434: ItemKeyBlack {
		keyid = 10434;
	};
	class ItemKeyBlack435: ItemKeyBlack {
		keyid = 10435;
	};
	class ItemKeyBlack436: ItemKeyBlack {
		keyid = 10436;
	};
	class ItemKeyBlack437: ItemKeyBlack {
		keyid = 10437;
	};
	class ItemKeyBlack438: ItemKeyBlack {
		keyid = 10438;
	};
	class ItemKeyBlack439: ItemKeyBlack {
		keyid = 10439;
	};
	class ItemKeyBlack440: ItemKeyBlack {
		keyid = 10440;
	};
	class ItemKeyBlack441: ItemKeyBlack {
		keyid = 10441;
	};
	class ItemKeyBlack442: ItemKeyBlack {
		keyid = 10442;
	};
	class ItemKeyBlack443: ItemKeyBlack {
		keyid = 10443;
	};
	class ItemKeyBlack444: ItemKeyBlack {
		keyid = 10444;
	};
	class ItemKeyBlack445: ItemKeyBlack {
		keyid = 10445;
	};
	class ItemKeyBlack446: ItemKeyBlack {
		keyid = 10446;
	};
	class ItemKeyBlack447: ItemKeyBlack {
		keyid = 10447;
	};
	class ItemKeyBlack448: ItemKeyBlack {
		keyid = 10448;
	};
	class ItemKeyBlack449: ItemKeyBlack {
		keyid = 10449;
	};
	class ItemKeyBlack450: ItemKeyBlack {
		keyid = 10450;
	};
	class ItemKeyBlack451: ItemKeyBlack {
		keyid = 10451;
	};
	class ItemKeyBlack452: ItemKeyBlack {
		keyid = 10452;
	};
	class ItemKeyBlack453: ItemKeyBlack {
		keyid = 10453;
	};
	class ItemKeyBlack454: ItemKeyBlack {
		keyid = 10454;
	};
	class ItemKeyBlack455: ItemKeyBlack {
		keyid = 10455;
	};
	class ItemKeyBlack456: ItemKeyBlack {
		keyid = 10456;
	};
	class ItemKeyBlack457: ItemKeyBlack {
		keyid = 10457;
	};
	class ItemKeyBlack458: ItemKeyBlack {
		keyid = 10458;
	};
	class ItemKeyBlack459: ItemKeyBlack {
		keyid = 10459;
	};
	class ItemKeyBlack460: ItemKeyBlack {
		keyid = 10460;
	};
	class ItemKeyBlack461: ItemKeyBlack {
		keyid = 10461;
	};
	class ItemKeyBlack462: ItemKeyBlack {
		keyid = 10462;
	};
	class ItemKeyBlack463: ItemKeyBlack {
		keyid = 10463;
	};
	class ItemKeyBlack464: ItemKeyBlack {
		keyid = 10464;
	};
	class ItemKeyBlack465: ItemKeyBlack {
		keyid = 10465;
	};
	class ItemKeyBlack466: ItemKeyBlack {
		keyid = 10466;
	};
	class ItemKeyBlack467: ItemKeyBlack {
		keyid = 10467;
	};
	class ItemKeyBlack468: ItemKeyBlack {
		keyid = 10468;
	};
	class ItemKeyBlack469: ItemKeyBlack {
		keyid = 10469;
	};
	class ItemKeyBlack470: ItemKeyBlack {
		keyid = 10470;
	};
	class ItemKeyBlack471: ItemKeyBlack {
		keyid = 10471;
	};
	class ItemKeyBlack472: ItemKeyBlack {
		keyid = 10472;
	};
	class ItemKeyBlack473: ItemKeyBlack {
		keyid = 10473;
	};
	class ItemKeyBlack474: ItemKeyBlack {
		keyid = 10474;
	};
	class ItemKeyBlack475: ItemKeyBlack {
		keyid = 10475;
	};
	class ItemKeyBlack476: ItemKeyBlack {
		keyid = 10476;
	};
	class ItemKeyBlack477: ItemKeyBlack {
		keyid = 10477;
	};
	class ItemKeyBlack478: ItemKeyBlack {
		keyid = 10478;
	};
	class ItemKeyBlack479: ItemKeyBlack {
		keyid = 10479;
	};
	class ItemKeyBlack480: ItemKeyBlack {
		keyid = 10480;
	};
	class ItemKeyBlack481: ItemKeyBlack {
		keyid = 10481;
	};
	class ItemKeyBlack482: ItemKeyBlack {
		keyid = 10482;
	};
	class ItemKeyBlack483: ItemKeyBlack {
		keyid = 10483;
	};
	class ItemKeyBlack484: ItemKeyBlack {
		keyid = 10484;
	};
	class ItemKeyBlack485: ItemKeyBlack {
		keyid = 10485;
	};
	class ItemKeyBlack486: ItemKeyBlack {
		keyid = 10486;
	};
	class ItemKeyBlack487: ItemKeyBlack {
		keyid = 10487;
	};
	class ItemKeyBlack488: ItemKeyBlack {
		keyid = 10488;
	};
	class ItemKeyBlack489: ItemKeyBlack {
		keyid = 10489;
	};
	class ItemKeyBlack490: ItemKeyBlack {
		keyid = 10490;
	};
	class ItemKeyBlack491: ItemKeyBlack {
		keyid = 10491;
	};
	class ItemKeyBlack492: ItemKeyBlack {
		keyid = 10492;
	};
	class ItemKeyBlack493: ItemKeyBlack {
		keyid = 10493;
	};
	class ItemKeyBlack494: ItemKeyBlack {
		keyid = 10494;
	};
	class ItemKeyBlack495: ItemKeyBlack {
		keyid = 10495;
	};
	class ItemKeyBlack496: ItemKeyBlack {
		keyid = 10496;
	};
	class ItemKeyBlack497: ItemKeyBlack {
		keyid = 10497;
	};
	class ItemKeyBlack498: ItemKeyBlack {
		keyid = 10498;
	};
	class ItemKeyBlack499: ItemKeyBlack {
		keyid = 10499;
	};
	class ItemKeyBlack500: ItemKeyBlack {
		keyid = 10500;
	};
	class ItemKeyBlack501: ItemKeyBlack {
		keyid = 10501;
	};
	class ItemKeyBlack502: ItemKeyBlack {
		keyid = 10502;
	};
	class ItemKeyBlack503: ItemKeyBlack {
		keyid = 10503;
	};
	class ItemKeyBlack504: ItemKeyBlack {
		keyid = 10504;
	};
	class ItemKeyBlack505: ItemKeyBlack {
		keyid = 10505;
	};
	class ItemKeyBlack506: ItemKeyBlack {
		keyid = 10506;
	};
	class ItemKeyBlack507: ItemKeyBlack {
		keyid = 10507;
	};
	class ItemKeyBlack508: ItemKeyBlack {
		keyid = 10508;
	};
	class ItemKeyBlack509: ItemKeyBlack {
		keyid = 10509;
	};
	class ItemKeyBlack510: ItemKeyBlack {
		keyid = 10510;
	};
	class ItemKeyBlack511: ItemKeyBlack {
		keyid = 10511;
	};
	class ItemKeyBlack512: ItemKeyBlack {
		keyid = 10512;
	};
	class ItemKeyBlack513: ItemKeyBlack {
		keyid = 10513;
	};
	class ItemKeyBlack514: ItemKeyBlack {
		keyid = 10514;
	};
	class ItemKeyBlack515: ItemKeyBlack {
		keyid = 10515;
	};
	class ItemKeyBlack516: ItemKeyBlack {
		keyid = 10516;
	};
	class ItemKeyBlack517: ItemKeyBlack {
		keyid = 10517;
	};
	class ItemKeyBlack518: ItemKeyBlack {
		keyid = 10518;
	};
	class ItemKeyBlack519: ItemKeyBlack {
		keyid = 10519;
	};
	class ItemKeyBlack520: ItemKeyBlack {
		keyid = 10520;
	};
	class ItemKeyBlack521: ItemKeyBlack {
		keyid = 10521;
	};
	class ItemKeyBlack522: ItemKeyBlack {
		keyid = 10522;
	};
	class ItemKeyBlack523: ItemKeyBlack {
		keyid = 10523;
	};
	class ItemKeyBlack524: ItemKeyBlack {
		keyid = 10524;
	};
	class ItemKeyBlack525: ItemKeyBlack {
		keyid = 10525;
	};
	class ItemKeyBlack526: ItemKeyBlack {
		keyid = 10526;
	};
	class ItemKeyBlack527: ItemKeyBlack {
		keyid = 10527;
	};
	class ItemKeyBlack528: ItemKeyBlack {
		keyid = 10528;
	};
	class ItemKeyBlack529: ItemKeyBlack {
		keyid = 10529;
	};
	class ItemKeyBlack530: ItemKeyBlack {
		keyid = 10530;
	};
	class ItemKeyBlack531: ItemKeyBlack {
		keyid = 10531;
	};
	class ItemKeyBlack532: ItemKeyBlack {
		keyid = 10532;
	};
	class ItemKeyBlack533: ItemKeyBlack {
		keyid = 10533;
	};
	class ItemKeyBlack534: ItemKeyBlack {
		keyid = 10534;
	};
	class ItemKeyBlack535: ItemKeyBlack {
		keyid = 10535;
	};
	class ItemKeyBlack536: ItemKeyBlack {
		keyid = 10536;
	};
	class ItemKeyBlack537: ItemKeyBlack {
		keyid = 10537;
	};
	class ItemKeyBlack538: ItemKeyBlack {
		keyid = 10538;
	};
	class ItemKeyBlack539: ItemKeyBlack {
		keyid = 10539;
	};
	class ItemKeyBlack540: ItemKeyBlack {
		keyid = 10540;
	};
	class ItemKeyBlack541: ItemKeyBlack {
		keyid = 10541;
	};
	class ItemKeyBlack542: ItemKeyBlack {
		keyid = 10542;
	};
	class ItemKeyBlack543: ItemKeyBlack {
		keyid = 10543;
	};
	class ItemKeyBlack544: ItemKeyBlack {
		keyid = 10544;
	};
	class ItemKeyBlack545: ItemKeyBlack {
		keyid = 10545;
	};
	class ItemKeyBlack546: ItemKeyBlack {
		keyid = 10546;
	};
	class ItemKeyBlack547: ItemKeyBlack {
		keyid = 10547;
	};
	class ItemKeyBlack548: ItemKeyBlack {
		keyid = 10548;
	};
	class ItemKeyBlack549: ItemKeyBlack {
		keyid = 10549;
	};
	class ItemKeyBlack550: ItemKeyBlack {
		keyid = 10550;
	};
	class ItemKeyBlack551: ItemKeyBlack {
		keyid = 10551;
	};
	class ItemKeyBlack552: ItemKeyBlack {
		keyid = 10552;
	};
	class ItemKeyBlack553: ItemKeyBlack {
		keyid = 10553;
	};
	class ItemKeyBlack554: ItemKeyBlack {
		keyid = 10554;
	};
	class ItemKeyBlack555: ItemKeyBlack {
		keyid = 10555;
	};
	class ItemKeyBlack556: ItemKeyBlack {
		keyid = 10556;
	};
	class ItemKeyBlack557: ItemKeyBlack {
		keyid = 10557;
	};
	class ItemKeyBlack558: ItemKeyBlack {
		keyid = 10558;
	};
	class ItemKeyBlack559: ItemKeyBlack {
		keyid = 10559;
	};
	class ItemKeyBlack560: ItemKeyBlack {
		keyid = 10560;
	};
	class ItemKeyBlack561: ItemKeyBlack {
		keyid = 10561;
	};
	class ItemKeyBlack562: ItemKeyBlack {
		keyid = 10562;
	};
	class ItemKeyBlack563: ItemKeyBlack {
		keyid = 10563;
	};
	class ItemKeyBlack564: ItemKeyBlack {
		keyid = 10564;
	};
	class ItemKeyBlack565: ItemKeyBlack {
		keyid = 10565;
	};
	class ItemKeyBlack566: ItemKeyBlack {
		keyid = 10566;
	};
	class ItemKeyBlack567: ItemKeyBlack {
		keyid = 10567;
	};
	class ItemKeyBlack568: ItemKeyBlack {
		keyid = 10568;
	};
	class ItemKeyBlack569: ItemKeyBlack {
		keyid = 10569;
	};
	class ItemKeyBlack570: ItemKeyBlack {
		keyid = 10570;
	};
	class ItemKeyBlack571: ItemKeyBlack {
		keyid = 10571;
	};
	class ItemKeyBlack572: ItemKeyBlack {
		keyid = 10572;
	};
	class ItemKeyBlack573: ItemKeyBlack {
		keyid = 10573;
	};
	class ItemKeyBlack574: ItemKeyBlack {
		keyid = 10574;
	};
	class ItemKeyBlack575: ItemKeyBlack {
		keyid = 10575;
	};
	class ItemKeyBlack576: ItemKeyBlack {
		keyid = 10576;
	};
	class ItemKeyBlack577: ItemKeyBlack {
		keyid = 10577;
	};
	class ItemKeyBlack578: ItemKeyBlack {
		keyid = 10578;
	};
	class ItemKeyBlack579: ItemKeyBlack {
		keyid = 10579;
	};
	class ItemKeyBlack580: ItemKeyBlack {
		keyid = 10580;
	};
	class ItemKeyBlack581: ItemKeyBlack {
		keyid = 10581;
	};
	class ItemKeyBlack582: ItemKeyBlack {
		keyid = 10582;
	};
	class ItemKeyBlack583: ItemKeyBlack {
		keyid = 10583;
	};
	class ItemKeyBlack584: ItemKeyBlack {
		keyid = 10584;
	};
	class ItemKeyBlack585: ItemKeyBlack {
		keyid = 10585;
	};
	class ItemKeyBlack586: ItemKeyBlack {
		keyid = 10586;
	};
	class ItemKeyBlack587: ItemKeyBlack {
		keyid = 10587;
	};
	class ItemKeyBlack588: ItemKeyBlack {
		keyid = 10588;
	};
	class ItemKeyBlack589: ItemKeyBlack {
		keyid = 10589;
	};
	class ItemKeyBlack590: ItemKeyBlack {
		keyid = 10590;
	};
	class ItemKeyBlack591: ItemKeyBlack {
		keyid = 10591;
	};
	class ItemKeyBlack592: ItemKeyBlack {
		keyid = 10592;
	};
	class ItemKeyBlack593: ItemKeyBlack {
		keyid = 10593;
	};
	class ItemKeyBlack594: ItemKeyBlack {
		keyid = 10594;
	};
	class ItemKeyBlack595: ItemKeyBlack {
		keyid = 10595;
	};
	class ItemKeyBlack596: ItemKeyBlack {
		keyid = 10596;
	};
	class ItemKeyBlack597: ItemKeyBlack {
		keyid = 10597;
	};
	class ItemKeyBlack598: ItemKeyBlack {
		keyid = 10598;
	};
	class ItemKeyBlack599: ItemKeyBlack {
		keyid = 10599;
	};
	class ItemKeyBlack600: ItemKeyBlack {
		keyid = 10600;
	};
	class ItemKeyBlack601: ItemKeyBlack {
		keyid = 10601;
	};
	class ItemKeyBlack602: ItemKeyBlack {
		keyid = 10602;
	};
	class ItemKeyBlack603: ItemKeyBlack {
		keyid = 10603;
	};
	class ItemKeyBlack604: ItemKeyBlack {
		keyid = 10604;
	};
	class ItemKeyBlack605: ItemKeyBlack {
		keyid = 10605;
	};
	class ItemKeyBlack606: ItemKeyBlack {
		keyid = 10606;
	};
	class ItemKeyBlack607: ItemKeyBlack {
		keyid = 10607;
	};
	class ItemKeyBlack608: ItemKeyBlack {
		keyid = 10608;
	};
	class ItemKeyBlack609: ItemKeyBlack {
		keyid = 10609;
	};
	class ItemKeyBlack610: ItemKeyBlack {
		keyid = 10610;
	};
	class ItemKeyBlack611: ItemKeyBlack {
		keyid = 10611;
	};
	class ItemKeyBlack612: ItemKeyBlack {
		keyid = 10612;
	};
	class ItemKeyBlack613: ItemKeyBlack {
		keyid = 10613;
	};
	class ItemKeyBlack614: ItemKeyBlack {
		keyid = 10614;
	};
	class ItemKeyBlack615: ItemKeyBlack {
		keyid = 10615;
	};
	class ItemKeyBlack616: ItemKeyBlack {
		keyid = 10616;
	};
	class ItemKeyBlack617: ItemKeyBlack {
		keyid = 10617;
	};
	class ItemKeyBlack618: ItemKeyBlack {
		keyid = 10618;
	};
	class ItemKeyBlack619: ItemKeyBlack {
		keyid = 10619;
	};
	class ItemKeyBlack620: ItemKeyBlack {
		keyid = 10620;
	};
	class ItemKeyBlack621: ItemKeyBlack {
		keyid = 10621;
	};
	class ItemKeyBlack622: ItemKeyBlack {
		keyid = 10622;
	};
	class ItemKeyBlack623: ItemKeyBlack {
		keyid = 10623;
	};
	class ItemKeyBlack624: ItemKeyBlack {
		keyid = 10624;
	};
	class ItemKeyBlack625: ItemKeyBlack {
		keyid = 10625;
	};
	class ItemKeyBlack626: ItemKeyBlack {
		keyid = 10626;
	};
	class ItemKeyBlack627: ItemKeyBlack {
		keyid = 10627;
	};
	class ItemKeyBlack628: ItemKeyBlack {
		keyid = 10628;
	};
	class ItemKeyBlack629: ItemKeyBlack {
		keyid = 10629;
	};
	class ItemKeyBlack630: ItemKeyBlack {
		keyid = 10630;
	};
	class ItemKeyBlack631: ItemKeyBlack {
		keyid = 10631;
	};
	class ItemKeyBlack632: ItemKeyBlack {
		keyid = 10632;
	};
	class ItemKeyBlack633: ItemKeyBlack {
		keyid = 10633;
	};
	class ItemKeyBlack634: ItemKeyBlack {
		keyid = 10634;
	};
	class ItemKeyBlack635: ItemKeyBlack {
		keyid = 10635;
	};
	class ItemKeyBlack636: ItemKeyBlack {
		keyid = 10636;
	};
	class ItemKeyBlack637: ItemKeyBlack {
		keyid = 10637;
	};
	class ItemKeyBlack638: ItemKeyBlack {
		keyid = 10638;
	};
	class ItemKeyBlack639: ItemKeyBlack {
		keyid = 10639;
	};
	class ItemKeyBlack640: ItemKeyBlack {
		keyid = 10640;
	};
	class ItemKeyBlack641: ItemKeyBlack {
		keyid = 10641;
	};
	class ItemKeyBlack642: ItemKeyBlack {
		keyid = 10642;
	};
	class ItemKeyBlack643: ItemKeyBlack {
		keyid = 10643;
	};
	class ItemKeyBlack644: ItemKeyBlack {
		keyid = 10644;
	};
	class ItemKeyBlack645: ItemKeyBlack {
		keyid = 10645;
	};
	class ItemKeyBlack646: ItemKeyBlack {
		keyid = 10646;
	};
	class ItemKeyBlack647: ItemKeyBlack {
		keyid = 10647;
	};
	class ItemKeyBlack648: ItemKeyBlack {
		keyid = 10648;
	};
	class ItemKeyBlack649: ItemKeyBlack {
		keyid = 10649;
	};
	class ItemKeyBlack650: ItemKeyBlack {
		keyid = 10650;
	};
	class ItemKeyBlack651: ItemKeyBlack {
		keyid = 10651;
	};
	class ItemKeyBlack652: ItemKeyBlack {
		keyid = 10652;
	};
	class ItemKeyBlack653: ItemKeyBlack {
		keyid = 10653;
	};
	class ItemKeyBlack654: ItemKeyBlack {
		keyid = 10654;
	};
	class ItemKeyBlack655: ItemKeyBlack {
		keyid = 10655;
	};
	class ItemKeyBlack656: ItemKeyBlack {
		keyid = 10656;
	};
	class ItemKeyBlack657: ItemKeyBlack {
		keyid = 10657;
	};
	class ItemKeyBlack658: ItemKeyBlack {
		keyid = 10658;
	};
	class ItemKeyBlack659: ItemKeyBlack {
		keyid = 10659;
	};
	class ItemKeyBlack660: ItemKeyBlack {
		keyid = 10660;
	};
	class ItemKeyBlack661: ItemKeyBlack {
		keyid = 10661;
	};
	class ItemKeyBlack662: ItemKeyBlack {
		keyid = 10662;
	};
	class ItemKeyBlack663: ItemKeyBlack {
		keyid = 10663;
	};
	class ItemKeyBlack664: ItemKeyBlack {
		keyid = 10664;
	};
	class ItemKeyBlack665: ItemKeyBlack {
		keyid = 10665;
	};
	class ItemKeyBlack666: ItemKeyBlack {
		keyid = 10666;
	};
	class ItemKeyBlack667: ItemKeyBlack {
		keyid = 10667;
	};
	class ItemKeyBlack668: ItemKeyBlack {
		keyid = 10668;
	};
	class ItemKeyBlack669: ItemKeyBlack {
		keyid = 10669;
	};
	class ItemKeyBlack670: ItemKeyBlack {
		keyid = 10670;
	};
	class ItemKeyBlack671: ItemKeyBlack {
		keyid = 10671;
	};
	class ItemKeyBlack672: ItemKeyBlack {
		keyid = 10672;
	};
	class ItemKeyBlack673: ItemKeyBlack {
		keyid = 10673;
	};
	class ItemKeyBlack674: ItemKeyBlack {
		keyid = 10674;
	};
	class ItemKeyBlack675: ItemKeyBlack {
		keyid = 10675;
	};
	class ItemKeyBlack676: ItemKeyBlack {
		keyid = 10676;
	};
	class ItemKeyBlack677: ItemKeyBlack {
		keyid = 10677;
	};
	class ItemKeyBlack678: ItemKeyBlack {
		keyid = 10678;
	};
	class ItemKeyBlack679: ItemKeyBlack {
		keyid = 10679;
	};
	class ItemKeyBlack680: ItemKeyBlack {
		keyid = 10680;
	};
	class ItemKeyBlack681: ItemKeyBlack {
		keyid = 10681;
	};
	class ItemKeyBlack682: ItemKeyBlack {
		keyid = 10682;
	};
	class ItemKeyBlack683: ItemKeyBlack {
		keyid = 10683;
	};
	class ItemKeyBlack684: ItemKeyBlack {
		keyid = 10684;
	};
	class ItemKeyBlack685: ItemKeyBlack {
		keyid = 10685;
	};
	class ItemKeyBlack686: ItemKeyBlack {
		keyid = 10686;
	};
	class ItemKeyBlack687: ItemKeyBlack {
		keyid = 10687;
	};
	class ItemKeyBlack688: ItemKeyBlack {
		keyid = 10688;
	};
	class ItemKeyBlack689: ItemKeyBlack {
		keyid = 10689;
	};
	class ItemKeyBlack690: ItemKeyBlack {
		keyid = 10690;
	};
	class ItemKeyBlack691: ItemKeyBlack {
		keyid = 10691;
	};
	class ItemKeyBlack692: ItemKeyBlack {
		keyid = 10692;
	};
	class ItemKeyBlack693: ItemKeyBlack {
		keyid = 10693;
	};
	class ItemKeyBlack694: ItemKeyBlack {
		keyid = 10694;
	};
	class ItemKeyBlack695: ItemKeyBlack {
		keyid = 10695;
	};
	class ItemKeyBlack696: ItemKeyBlack {
		keyid = 10696;
	};
	class ItemKeyBlack697: ItemKeyBlack {
		keyid = 10697;
	};
	class ItemKeyBlack698: ItemKeyBlack {
		keyid = 10698;
	};
	class ItemKeyBlack699: ItemKeyBlack {
		keyid = 10699;
	};
	class ItemKeyBlack700: ItemKeyBlack {
		keyid = 10700;
	};
	class ItemKeyBlack701: ItemKeyBlack {
		keyid = 10701;
	};
	class ItemKeyBlack702: ItemKeyBlack {
		keyid = 10702;
	};
	class ItemKeyBlack703: ItemKeyBlack {
		keyid = 10703;
	};
	class ItemKeyBlack704: ItemKeyBlack {
		keyid = 10704;
	};
	class ItemKeyBlack705: ItemKeyBlack {
		keyid = 10705;
	};
	class ItemKeyBlack706: ItemKeyBlack {
		keyid = 10706;
	};
	class ItemKeyBlack707: ItemKeyBlack {
		keyid = 10707;
	};
	class ItemKeyBlack708: ItemKeyBlack {
		keyid = 10708;
	};
	class ItemKeyBlack709: ItemKeyBlack {
		keyid = 10709;
	};
	class ItemKeyBlack710: ItemKeyBlack {
		keyid = 10710;
	};
	class ItemKeyBlack711: ItemKeyBlack {
		keyid = 10711;
	};
	class ItemKeyBlack712: ItemKeyBlack {
		keyid = 10712;
	};
	class ItemKeyBlack713: ItemKeyBlack {
		keyid = 10713;
	};
	class ItemKeyBlack714: ItemKeyBlack {
		keyid = 10714;
	};
	class ItemKeyBlack715: ItemKeyBlack {
		keyid = 10715;
	};
	class ItemKeyBlack716: ItemKeyBlack {
		keyid = 10716;
	};
	class ItemKeyBlack717: ItemKeyBlack {
		keyid = 10717;
	};
	class ItemKeyBlack718: ItemKeyBlack {
		keyid = 10718;
	};
	class ItemKeyBlack719: ItemKeyBlack {
		keyid = 10719;
	};
	class ItemKeyBlack720: ItemKeyBlack {
		keyid = 10720;
	};
	class ItemKeyBlack721: ItemKeyBlack {
		keyid = 10721;
	};
	class ItemKeyBlack722: ItemKeyBlack {
		keyid = 10722;
	};
	class ItemKeyBlack723: ItemKeyBlack {
		keyid = 10723;
	};
	class ItemKeyBlack724: ItemKeyBlack {
		keyid = 10724;
	};
	class ItemKeyBlack725: ItemKeyBlack {
		keyid = 10725;
	};
	class ItemKeyBlack726: ItemKeyBlack {
		keyid = 10726;
	};
	class ItemKeyBlack727: ItemKeyBlack {
		keyid = 10727;
	};
	class ItemKeyBlack728: ItemKeyBlack {
		keyid = 10728;
	};
	class ItemKeyBlack729: ItemKeyBlack {
		keyid = 10729;
	};
	class ItemKeyBlack730: ItemKeyBlack {
		keyid = 10730;
	};
	class ItemKeyBlack731: ItemKeyBlack {
		keyid = 10731;
	};
	class ItemKeyBlack732: ItemKeyBlack {
		keyid = 10732;
	};
	class ItemKeyBlack733: ItemKeyBlack {
		keyid = 10733;
	};
	class ItemKeyBlack734: ItemKeyBlack {
		keyid = 10734;
	};
	class ItemKeyBlack735: ItemKeyBlack {
		keyid = 10735;
	};
	class ItemKeyBlack736: ItemKeyBlack {
		keyid = 10736;
	};
	class ItemKeyBlack737: ItemKeyBlack {
		keyid = 10737;
	};
	class ItemKeyBlack738: ItemKeyBlack {
		keyid = 10738;
	};
	class ItemKeyBlack739: ItemKeyBlack {
		keyid = 10739;
	};
	class ItemKeyBlack740: ItemKeyBlack {
		keyid = 10740;
	};
	class ItemKeyBlack741: ItemKeyBlack {
		keyid = 10741;
	};
	class ItemKeyBlack742: ItemKeyBlack {
		keyid = 10742;
	};
	class ItemKeyBlack743: ItemKeyBlack {
		keyid = 10743;
	};
	class ItemKeyBlack744: ItemKeyBlack {
		keyid = 10744;
	};
	class ItemKeyBlack745: ItemKeyBlack {
		keyid = 10745;
	};
	class ItemKeyBlack746: ItemKeyBlack {
		keyid = 10746;
	};
	class ItemKeyBlack747: ItemKeyBlack {
		keyid = 10747;
	};
	class ItemKeyBlack748: ItemKeyBlack {
		keyid = 10748;
	};
	class ItemKeyBlack749: ItemKeyBlack {
		keyid = 10749;
	};
	class ItemKeyBlack750: ItemKeyBlack {
		keyid = 10750;
	};
	class ItemKeyBlack751: ItemKeyBlack {
		keyid = 10751;
	};
	class ItemKeyBlack752: ItemKeyBlack {
		keyid = 10752;
	};
	class ItemKeyBlack753: ItemKeyBlack {
		keyid = 10753;
	};
	class ItemKeyBlack754: ItemKeyBlack {
		keyid = 10754;
	};
	class ItemKeyBlack755: ItemKeyBlack {
		keyid = 10755;
	};
	class ItemKeyBlack756: ItemKeyBlack {
		keyid = 10756;
	};
	class ItemKeyBlack757: ItemKeyBlack {
		keyid = 10757;
	};
	class ItemKeyBlack758: ItemKeyBlack {
		keyid = 10758;
	};
	class ItemKeyBlack759: ItemKeyBlack {
		keyid = 10759;
	};
	class ItemKeyBlack760: ItemKeyBlack {
		keyid = 10760;
	};
	class ItemKeyBlack761: ItemKeyBlack {
		keyid = 10761;
	};
	class ItemKeyBlack762: ItemKeyBlack {
		keyid = 10762;
	};
	class ItemKeyBlack763: ItemKeyBlack {
		keyid = 10763;
	};
	class ItemKeyBlack764: ItemKeyBlack {
		keyid = 10764;
	};
	class ItemKeyBlack765: ItemKeyBlack {
		keyid = 10765;
	};
	class ItemKeyBlack766: ItemKeyBlack {
		keyid = 10766;
	};
	class ItemKeyBlack767: ItemKeyBlack {
		keyid = 10767;
	};
	class ItemKeyBlack768: ItemKeyBlack {
		keyid = 10768;
	};
	class ItemKeyBlack769: ItemKeyBlack {
		keyid = 10769;
	};
	class ItemKeyBlack770: ItemKeyBlack {
		keyid = 10770;
	};
	class ItemKeyBlack771: ItemKeyBlack {
		keyid = 10771;
	};
	class ItemKeyBlack772: ItemKeyBlack {
		keyid = 10772;
	};
	class ItemKeyBlack773: ItemKeyBlack {
		keyid = 10773;
	};
	class ItemKeyBlack774: ItemKeyBlack {
		keyid = 10774;
	};
	class ItemKeyBlack775: ItemKeyBlack {
		keyid = 10775;
	};
	class ItemKeyBlack776: ItemKeyBlack {
		keyid = 10776;
	};
	class ItemKeyBlack777: ItemKeyBlack {
		keyid = 10777;
	};
	class ItemKeyBlack778: ItemKeyBlack {
		keyid = 10778;
	};
	class ItemKeyBlack779: ItemKeyBlack {
		keyid = 10779;
	};
	class ItemKeyBlack780: ItemKeyBlack {
		keyid = 10780;
	};
	class ItemKeyBlack781: ItemKeyBlack {
		keyid = 10781;
	};
	class ItemKeyBlack782: ItemKeyBlack {
		keyid = 10782;
	};
	class ItemKeyBlack783: ItemKeyBlack {
		keyid = 10783;
	};
	class ItemKeyBlack784: ItemKeyBlack {
		keyid = 10784;
	};
	class ItemKeyBlack785: ItemKeyBlack {
		keyid = 10785;
	};
	class ItemKeyBlack786: ItemKeyBlack {
		keyid = 10786;
	};
	class ItemKeyBlack787: ItemKeyBlack {
		keyid = 10787;
	};
	class ItemKeyBlack788: ItemKeyBlack {
		keyid = 10788;
	};
	class ItemKeyBlack789: ItemKeyBlack {
		keyid = 10789;
	};
	class ItemKeyBlack790: ItemKeyBlack {
		keyid = 10790;
	};
	class ItemKeyBlack791: ItemKeyBlack {
		keyid = 10791;
	};
	class ItemKeyBlack792: ItemKeyBlack {
		keyid = 10792;
	};
	class ItemKeyBlack793: ItemKeyBlack {
		keyid = 10793;
	};
	class ItemKeyBlack794: ItemKeyBlack {
		keyid = 10794;
	};
	class ItemKeyBlack795: ItemKeyBlack {
		keyid = 10795;
	};
	class ItemKeyBlack796: ItemKeyBlack {
		keyid = 10796;
	};
	class ItemKeyBlack797: ItemKeyBlack {
		keyid = 10797;
	};
	class ItemKeyBlack798: ItemKeyBlack {
		keyid = 10798;
	};
	class ItemKeyBlack799: ItemKeyBlack {
		keyid = 10799;
	};
	class ItemKeyBlack800: ItemKeyBlack {
		keyid = 10800;
	};
	class ItemKeyBlack801: ItemKeyBlack {
		keyid = 10801;
	};
	class ItemKeyBlack802: ItemKeyBlack {
		keyid = 10802;
	};
	class ItemKeyBlack803: ItemKeyBlack {
		keyid = 10803;
	};
	class ItemKeyBlack804: ItemKeyBlack {
		keyid = 10804;
	};
	class ItemKeyBlack805: ItemKeyBlack {
		keyid = 10805;
	};
	class ItemKeyBlack806: ItemKeyBlack {
		keyid = 10806;
	};
	class ItemKeyBlack807: ItemKeyBlack {
		keyid = 10807;
	};
	class ItemKeyBlack808: ItemKeyBlack {
		keyid = 10808;
	};
	class ItemKeyBlack809: ItemKeyBlack {
		keyid = 10809;
	};
	class ItemKeyBlack810: ItemKeyBlack {
		keyid = 10810;
	};
	class ItemKeyBlack811: ItemKeyBlack {
		keyid = 10811;
	};
	class ItemKeyBlack812: ItemKeyBlack {
		keyid = 10812;
	};
	class ItemKeyBlack813: ItemKeyBlack {
		keyid = 10813;
	};
	class ItemKeyBlack814: ItemKeyBlack {
		keyid = 10814;
	};
	class ItemKeyBlack815: ItemKeyBlack {
		keyid = 10815;
	};
	class ItemKeyBlack816: ItemKeyBlack {
		keyid = 10816;
	};
	class ItemKeyBlack817: ItemKeyBlack {
		keyid = 10817;
	};
	class ItemKeyBlack818: ItemKeyBlack {
		keyid = 10818;
	};
	class ItemKeyBlack819: ItemKeyBlack {
		keyid = 10819;
	};
	class ItemKeyBlack820: ItemKeyBlack {
		keyid = 10820;
	};
	class ItemKeyBlack821: ItemKeyBlack {
		keyid = 10821;
	};
	class ItemKeyBlack822: ItemKeyBlack {
		keyid = 10822;
	};
	class ItemKeyBlack823: ItemKeyBlack {
		keyid = 10823;
	};
	class ItemKeyBlack824: ItemKeyBlack {
		keyid = 10824;
	};
	class ItemKeyBlack825: ItemKeyBlack {
		keyid = 10825;
	};
	class ItemKeyBlack826: ItemKeyBlack {
		keyid = 10826;
	};
	class ItemKeyBlack827: ItemKeyBlack {
		keyid = 10827;
	};
	class ItemKeyBlack828: ItemKeyBlack {
		keyid = 10828;
	};
	class ItemKeyBlack829: ItemKeyBlack {
		keyid = 10829;
	};
	class ItemKeyBlack830: ItemKeyBlack {
		keyid = 10830;
	};
	class ItemKeyBlack831: ItemKeyBlack {
		keyid = 10831;
	};
	class ItemKeyBlack832: ItemKeyBlack {
		keyid = 10832;
	};
	class ItemKeyBlack833: ItemKeyBlack {
		keyid = 10833;
	};
	class ItemKeyBlack834: ItemKeyBlack {
		keyid = 10834;
	};
	class ItemKeyBlack835: ItemKeyBlack {
		keyid = 10835;
	};
	class ItemKeyBlack836: ItemKeyBlack {
		keyid = 10836;
	};
	class ItemKeyBlack837: ItemKeyBlack {
		keyid = 10837;
	};
	class ItemKeyBlack838: ItemKeyBlack {
		keyid = 10838;
	};
	class ItemKeyBlack839: ItemKeyBlack {
		keyid = 10839;
	};
	class ItemKeyBlack840: ItemKeyBlack {
		keyid = 10840;
	};
	class ItemKeyBlack841: ItemKeyBlack {
		keyid = 10841;
	};
	class ItemKeyBlack842: ItemKeyBlack {
		keyid = 10842;
	};
	class ItemKeyBlack843: ItemKeyBlack {
		keyid = 10843;
	};
	class ItemKeyBlack844: ItemKeyBlack {
		keyid = 10844;
	};
	class ItemKeyBlack845: ItemKeyBlack {
		keyid = 10845;
	};
	class ItemKeyBlack846: ItemKeyBlack {
		keyid = 10846;
	};
	class ItemKeyBlack847: ItemKeyBlack {
		keyid = 10847;
	};
	class ItemKeyBlack848: ItemKeyBlack {
		keyid = 10848;
	};
	class ItemKeyBlack849: ItemKeyBlack {
		keyid = 10849;
	};
	class ItemKeyBlack850: ItemKeyBlack {
		keyid = 10850;
	};
	class ItemKeyBlack851: ItemKeyBlack {
		keyid = 10851;
	};
	class ItemKeyBlack852: ItemKeyBlack {
		keyid = 10852;
	};
	class ItemKeyBlack853: ItemKeyBlack {
		keyid = 10853;
	};
	class ItemKeyBlack854: ItemKeyBlack {
		keyid = 10854;
	};
	class ItemKeyBlack855: ItemKeyBlack {
		keyid = 10855;
	};
	class ItemKeyBlack856: ItemKeyBlack {
		keyid = 10856;
	};
	class ItemKeyBlack857: ItemKeyBlack {
		keyid = 10857;
	};
	class ItemKeyBlack858: ItemKeyBlack {
		keyid = 10858;
	};
	class ItemKeyBlack859: ItemKeyBlack {
		keyid = 10859;
	};
	class ItemKeyBlack860: ItemKeyBlack {
		keyid = 10860;
	};
	class ItemKeyBlack861: ItemKeyBlack {
		keyid = 10861;
	};
	class ItemKeyBlack862: ItemKeyBlack {
		keyid = 10862;
	};
	class ItemKeyBlack863: ItemKeyBlack {
		keyid = 10863;
	};
	class ItemKeyBlack864: ItemKeyBlack {
		keyid = 10864;
	};
	class ItemKeyBlack865: ItemKeyBlack {
		keyid = 10865;
	};
	class ItemKeyBlack866: ItemKeyBlack {
		keyid = 10866;
	};
	class ItemKeyBlack867: ItemKeyBlack {
		keyid = 10867;
	};
	class ItemKeyBlack868: ItemKeyBlack {
		keyid = 10868;
	};
	class ItemKeyBlack869: ItemKeyBlack {
		keyid = 10869;
	};
	class ItemKeyBlack870: ItemKeyBlack {
		keyid = 10870;
	};
	class ItemKeyBlack871: ItemKeyBlack {
		keyid = 10871;
	};
	class ItemKeyBlack872: ItemKeyBlack {
		keyid = 10872;
	};
	class ItemKeyBlack873: ItemKeyBlack {
		keyid = 10873;
	};
	class ItemKeyBlack874: ItemKeyBlack {
		keyid = 10874;
	};
	class ItemKeyBlack875: ItemKeyBlack {
		keyid = 10875;
	};
	class ItemKeyBlack876: ItemKeyBlack {
		keyid = 10876;
	};
	class ItemKeyBlack877: ItemKeyBlack {
		keyid = 10877;
	};
	class ItemKeyBlack878: ItemKeyBlack {
		keyid = 10878;
	};
	class ItemKeyBlack879: ItemKeyBlack {
		keyid = 10879;
	};
	class ItemKeyBlack880: ItemKeyBlack {
		keyid = 10880;
	};
	class ItemKeyBlack881: ItemKeyBlack {
		keyid = 10881;
	};
	class ItemKeyBlack882: ItemKeyBlack {
		keyid = 10882;
	};
	class ItemKeyBlack883: ItemKeyBlack {
		keyid = 10883;
	};
	class ItemKeyBlack884: ItemKeyBlack {
		keyid = 10884;
	};
	class ItemKeyBlack885: ItemKeyBlack {
		keyid = 10885;
	};
	class ItemKeyBlack886: ItemKeyBlack {
		keyid = 10886;
	};
	class ItemKeyBlack887: ItemKeyBlack {
		keyid = 10887;
	};
	class ItemKeyBlack888: ItemKeyBlack {
		keyid = 10888;
	};
	class ItemKeyBlack889: ItemKeyBlack {
		keyid = 10889;
	};
	class ItemKeyBlack890: ItemKeyBlack {
		keyid = 10890;
	};
	class ItemKeyBlack891: ItemKeyBlack {
		keyid = 10891;
	};
	class ItemKeyBlack892: ItemKeyBlack {
		keyid = 10892;
	};
	class ItemKeyBlack893: ItemKeyBlack {
		keyid = 10893;
	};
	class ItemKeyBlack894: ItemKeyBlack {
		keyid = 10894;
	};
	class ItemKeyBlack895: ItemKeyBlack {
		keyid = 10895;
	};
	class ItemKeyBlack896: ItemKeyBlack {
		keyid = 10896;
	};
	class ItemKeyBlack897: ItemKeyBlack {
		keyid = 10897;
	};
	class ItemKeyBlack898: ItemKeyBlack {
		keyid = 10898;
	};
	class ItemKeyBlack899: ItemKeyBlack {
		keyid = 10899;
	};
	class ItemKeyBlack900: ItemKeyBlack {
		keyid = 10900;
	};
	class ItemKeyBlack901: ItemKeyBlack {
		keyid = 10901;
	};
	class ItemKeyBlack902: ItemKeyBlack {
		keyid = 10902;
	};
	class ItemKeyBlack903: ItemKeyBlack {
		keyid = 10903;
	};
	class ItemKeyBlack904: ItemKeyBlack {
		keyid = 10904;
	};
	class ItemKeyBlack905: ItemKeyBlack {
		keyid = 10905;
	};
	class ItemKeyBlack906: ItemKeyBlack {
		keyid = 10906;
	};
	class ItemKeyBlack907: ItemKeyBlack {
		keyid = 10907;
	};
	class ItemKeyBlack908: ItemKeyBlack {
		keyid = 10908;
	};
	class ItemKeyBlack909: ItemKeyBlack {
		keyid = 10909;
	};
	class ItemKeyBlack910: ItemKeyBlack {
		keyid = 10910;
	};
	class ItemKeyBlack911: ItemKeyBlack {
		keyid = 10911;
	};
	class ItemKeyBlack912: ItemKeyBlack {
		keyid = 10912;
	};
	class ItemKeyBlack913: ItemKeyBlack {
		keyid = 10913;
	};
	class ItemKeyBlack914: ItemKeyBlack {
		keyid = 10914;
	};
	class ItemKeyBlack915: ItemKeyBlack {
		keyid = 10915;
	};
	class ItemKeyBlack916: ItemKeyBlack {
		keyid = 10916;
	};
	class ItemKeyBlack917: ItemKeyBlack {
		keyid = 10917;
	};
	class ItemKeyBlack918: ItemKeyBlack {
		keyid = 10918;
	};
	class ItemKeyBlack919: ItemKeyBlack {
		keyid = 10919;
	};
	class ItemKeyBlack920: ItemKeyBlack {
		keyid = 10920;
	};
	class ItemKeyBlack921: ItemKeyBlack {
		keyid = 10921;
	};
	class ItemKeyBlack922: ItemKeyBlack {
		keyid = 10922;
	};
	class ItemKeyBlack923: ItemKeyBlack {
		keyid = 10923;
	};
	class ItemKeyBlack924: ItemKeyBlack {
		keyid = 10924;
	};
	class ItemKeyBlack925: ItemKeyBlack {
		keyid = 10925;
	};
	class ItemKeyBlack926: ItemKeyBlack {
		keyid = 10926;
	};
	class ItemKeyBlack927: ItemKeyBlack {
		keyid = 10927;
	};
	class ItemKeyBlack928: ItemKeyBlack {
		keyid = 10928;
	};
	class ItemKeyBlack929: ItemKeyBlack {
		keyid = 10929;
	};
	class ItemKeyBlack930: ItemKeyBlack {
		keyid = 10930;
	};
	class ItemKeyBlack931: ItemKeyBlack {
		keyid = 10931;
	};
	class ItemKeyBlack932: ItemKeyBlack {
		keyid = 10932;
	};
	class ItemKeyBlack933: ItemKeyBlack {
		keyid = 10933;
	};
	class ItemKeyBlack934: ItemKeyBlack {
		keyid = 10934;
	};
	class ItemKeyBlack935: ItemKeyBlack {
		keyid = 10935;
	};
	class ItemKeyBlack936: ItemKeyBlack {
		keyid = 10936;
	};
	class ItemKeyBlack937: ItemKeyBlack {
		keyid = 10937;
	};
	class ItemKeyBlack938: ItemKeyBlack {
		keyid = 10938;
	};
	class ItemKeyBlack939: ItemKeyBlack {
		keyid = 10939;
	};
	class ItemKeyBlack940: ItemKeyBlack {
		keyid = 10940;
	};
	class ItemKeyBlack941: ItemKeyBlack {
		keyid = 10941;
	};
	class ItemKeyBlack942: ItemKeyBlack {
		keyid = 10942;
	};
	class ItemKeyBlack943: ItemKeyBlack {
		keyid = 10943;
	};
	class ItemKeyBlack944: ItemKeyBlack {
		keyid = 10944;
	};
	class ItemKeyBlack945: ItemKeyBlack {
		keyid = 10945;
	};
	class ItemKeyBlack946: ItemKeyBlack {
		keyid = 10946;
	};
	class ItemKeyBlack947: ItemKeyBlack {
		keyid = 10947;
	};
	class ItemKeyBlack948: ItemKeyBlack {
		keyid = 10948;
	};
	class ItemKeyBlack949: ItemKeyBlack {
		keyid = 10949;
	};
	class ItemKeyBlack950: ItemKeyBlack {
		keyid = 10950;
	};
	class ItemKeyBlack951: ItemKeyBlack {
		keyid = 10951;
	};
	class ItemKeyBlack952: ItemKeyBlack {
		keyid = 10952;
	};
	class ItemKeyBlack953: ItemKeyBlack {
		keyid = 10953;
	};
	class ItemKeyBlack954: ItemKeyBlack {
		keyid = 10954;
	};
	class ItemKeyBlack955: ItemKeyBlack {
		keyid = 10955;
	};
	class ItemKeyBlack956: ItemKeyBlack {
		keyid = 10956;
	};
	class ItemKeyBlack957: ItemKeyBlack {
		keyid = 10957;
	};
	class ItemKeyBlack958: ItemKeyBlack {
		keyid = 10958;
	};
	class ItemKeyBlack959: ItemKeyBlack {
		keyid = 10959;
	};
	class ItemKeyBlack960: ItemKeyBlack {
		keyid = 10960;
	};
	class ItemKeyBlack961: ItemKeyBlack {
		keyid = 10961;
	};
	class ItemKeyBlack962: ItemKeyBlack {
		keyid = 10962;
	};
	class ItemKeyBlack963: ItemKeyBlack {
		keyid = 10963;
	};
	class ItemKeyBlack964: ItemKeyBlack {
		keyid = 10964;
	};
	class ItemKeyBlack965: ItemKeyBlack {
		keyid = 10965;
	};
	class ItemKeyBlack966: ItemKeyBlack {
		keyid = 10966;
	};
	class ItemKeyBlack967: ItemKeyBlack {
		keyid = 10967;
	};
	class ItemKeyBlack968: ItemKeyBlack {
		keyid = 10968;
	};
	class ItemKeyBlack969: ItemKeyBlack {
		keyid = 10969;
	};
	class ItemKeyBlack970: ItemKeyBlack {
		keyid = 10970;
	};
	class ItemKeyBlack971: ItemKeyBlack {
		keyid = 10971;
	};
	class ItemKeyBlack972: ItemKeyBlack {
		keyid = 10972;
	};
	class ItemKeyBlack973: ItemKeyBlack {
		keyid = 10973;
	};
	class ItemKeyBlack974: ItemKeyBlack {
		keyid = 10974;
	};
	class ItemKeyBlack975: ItemKeyBlack {
		keyid = 10975;
	};
	class ItemKeyBlack976: ItemKeyBlack {
		keyid = 10976;
	};
	class ItemKeyBlack977: ItemKeyBlack {
		keyid = 10977;
	};
	class ItemKeyBlack978: ItemKeyBlack {
		keyid = 10978;
	};
	class ItemKeyBlack979: ItemKeyBlack {
		keyid = 10979;
	};
	class ItemKeyBlack980: ItemKeyBlack {
		keyid = 10980;
	};
	class ItemKeyBlack981: ItemKeyBlack {
		keyid = 10981;
	};
	class ItemKeyBlack982: ItemKeyBlack {
		keyid = 10982;
	};
	class ItemKeyBlack983: ItemKeyBlack {
		keyid = 10983;
	};
	class ItemKeyBlack984: ItemKeyBlack {
		keyid = 10984;
	};
	class ItemKeyBlack985: ItemKeyBlack {
		keyid = 10985;
	};
	class ItemKeyBlack986: ItemKeyBlack {
		keyid = 10986;
	};
	class ItemKeyBlack987: ItemKeyBlack {
		keyid = 10987;
	};
	class ItemKeyBlack988: ItemKeyBlack {
		keyid = 10988;
	};
	class ItemKeyBlack989: ItemKeyBlack {
		keyid = 10989;
	};
	class ItemKeyBlack990: ItemKeyBlack {
		keyid = 10990;
	};
	class ItemKeyBlack991: ItemKeyBlack {
		keyid = 10991;
	};
	class ItemKeyBlack992: ItemKeyBlack {
		keyid = 10992;
	};
	class ItemKeyBlack993: ItemKeyBlack {
		keyid = 10993;
	};
	class ItemKeyBlack994: ItemKeyBlack {
		keyid = 10994;
	};
	class ItemKeyBlack995: ItemKeyBlack {
		keyid = 10995;
	};
	class ItemKeyBlack996: ItemKeyBlack {
		keyid = 10996;
	};
	class ItemKeyBlack997: ItemKeyBlack {
		keyid = 10997;
	};
	class ItemKeyBlack998: ItemKeyBlack {
		keyid = 10998;
	};
	class ItemKeyBlack999: ItemKeyBlack {
		keyid = 10999;
	};
	class ItemKeyBlack1000: ItemKeyBlack {
		keyid = 11000;
	};
	class ItemKeyBlack1001: ItemKeyBlack {
		keyid = 11001;
	};
	class ItemKeyBlack1002: ItemKeyBlack {
		keyid = 11002;
	};
	class ItemKeyBlack1003: ItemKeyBlack {
		keyid = 11003;
	};
	class ItemKeyBlack1004: ItemKeyBlack {
		keyid = 11004;
	};
	class ItemKeyBlack1005: ItemKeyBlack {
		keyid = 11005;
	};
	class ItemKeyBlack1006: ItemKeyBlack {
		keyid = 11006;
	};
	class ItemKeyBlack1007: ItemKeyBlack {
		keyid = 11007;
	};
	class ItemKeyBlack1008: ItemKeyBlack {
		keyid = 11008;
	};
	class ItemKeyBlack1009: ItemKeyBlack {
		keyid = 11009;
	};
	class ItemKeyBlack1010: ItemKeyBlack {
		keyid = 11010;
	};
	class ItemKeyBlack1011: ItemKeyBlack {
		keyid = 11011;
	};
	class ItemKeyBlack1012: ItemKeyBlack {
		keyid = 11012;
	};
	class ItemKeyBlack1013: ItemKeyBlack {
		keyid = 11013;
	};
	class ItemKeyBlack1014: ItemKeyBlack {
		keyid = 11014;
	};
	class ItemKeyBlack1015: ItemKeyBlack {
		keyid = 11015;
	};
	class ItemKeyBlack1016: ItemKeyBlack {
		keyid = 11016;
	};
	class ItemKeyBlack1017: ItemKeyBlack {
		keyid = 11017;
	};
	class ItemKeyBlack1018: ItemKeyBlack {
		keyid = 11018;
	};
	class ItemKeyBlack1019: ItemKeyBlack {
		keyid = 11019;
	};
	class ItemKeyBlack1020: ItemKeyBlack {
		keyid = 11020;
	};
	class ItemKeyBlack1021: ItemKeyBlack {
		keyid = 11021;
	};
	class ItemKeyBlack1022: ItemKeyBlack {
		keyid = 11022;
	};
	class ItemKeyBlack1023: ItemKeyBlack {
		keyid = 11023;
	};
	class ItemKeyBlack1024: ItemKeyBlack {
		keyid = 11024;
	};
	class ItemKeyBlack1025: ItemKeyBlack {
		keyid = 11025;
	};
	class ItemKeyBlack1026: ItemKeyBlack {
		keyid = 11026;
	};
	class ItemKeyBlack1027: ItemKeyBlack {
		keyid = 11027;
	};
	class ItemKeyBlack1028: ItemKeyBlack {
		keyid = 11028;
	};
	class ItemKeyBlack1029: ItemKeyBlack {
		keyid = 11029;
	};
	class ItemKeyBlack1030: ItemKeyBlack {
		keyid = 11030;
	};
	class ItemKeyBlack1031: ItemKeyBlack {
		keyid = 11031;
	};
	class ItemKeyBlack1032: ItemKeyBlack {
		keyid = 11032;
	};
	class ItemKeyBlack1033: ItemKeyBlack {
		keyid = 11033;
	};
	class ItemKeyBlack1034: ItemKeyBlack {
		keyid = 11034;
	};
	class ItemKeyBlack1035: ItemKeyBlack {
		keyid = 11035;
	};
	class ItemKeyBlack1036: ItemKeyBlack {
		keyid = 11036;
	};
	class ItemKeyBlack1037: ItemKeyBlack {
		keyid = 11037;
	};
	class ItemKeyBlack1038: ItemKeyBlack {
		keyid = 11038;
	};
	class ItemKeyBlack1039: ItemKeyBlack {
		keyid = 11039;
	};
	class ItemKeyBlack1040: ItemKeyBlack {
		keyid = 11040;
	};
	class ItemKeyBlack1041: ItemKeyBlack {
		keyid = 11041;
	};
	class ItemKeyBlack1042: ItemKeyBlack {
		keyid = 11042;
	};
	class ItemKeyBlack1043: ItemKeyBlack {
		keyid = 11043;
	};
	class ItemKeyBlack1044: ItemKeyBlack {
		keyid = 11044;
	};
	class ItemKeyBlack1045: ItemKeyBlack {
		keyid = 11045;
	};
	class ItemKeyBlack1046: ItemKeyBlack {
		keyid = 11046;
	};
	class ItemKeyBlack1047: ItemKeyBlack {
		keyid = 11047;
	};
	class ItemKeyBlack1048: ItemKeyBlack {
		keyid = 11048;
	};
	class ItemKeyBlack1049: ItemKeyBlack {
		keyid = 11049;
	};
	class ItemKeyBlack1050: ItemKeyBlack {
		keyid = 11050;
	};
	class ItemKeyBlack1051: ItemKeyBlack {
		keyid = 11051;
	};
	class ItemKeyBlack1052: ItemKeyBlack {
		keyid = 11052;
	};
	class ItemKeyBlack1053: ItemKeyBlack {
		keyid = 11053;
	};
	class ItemKeyBlack1054: ItemKeyBlack {
		keyid = 11054;
	};
	class ItemKeyBlack1055: ItemKeyBlack {
		keyid = 11055;
	};
	class ItemKeyBlack1056: ItemKeyBlack {
		keyid = 11056;
	};
	class ItemKeyBlack1057: ItemKeyBlack {
		keyid = 11057;
	};
	class ItemKeyBlack1058: ItemKeyBlack {
		keyid = 11058;
	};
	class ItemKeyBlack1059: ItemKeyBlack {
		keyid = 11059;
	};
	class ItemKeyBlack1060: ItemKeyBlack {
		keyid = 11060;
	};
	class ItemKeyBlack1061: ItemKeyBlack {
		keyid = 11061;
	};
	class ItemKeyBlack1062: ItemKeyBlack {
		keyid = 11062;
	};
	class ItemKeyBlack1063: ItemKeyBlack {
		keyid = 11063;
	};
	class ItemKeyBlack1064: ItemKeyBlack {
		keyid = 11064;
	};
	class ItemKeyBlack1065: ItemKeyBlack {
		keyid = 11065;
	};
	class ItemKeyBlack1066: ItemKeyBlack {
		keyid = 11066;
	};
	class ItemKeyBlack1067: ItemKeyBlack {
		keyid = 11067;
	};
	class ItemKeyBlack1068: ItemKeyBlack {
		keyid = 11068;
	};
	class ItemKeyBlack1069: ItemKeyBlack {
		keyid = 11069;
	};
	class ItemKeyBlack1070: ItemKeyBlack {
		keyid = 11070;
	};
	class ItemKeyBlack1071: ItemKeyBlack {
		keyid = 11071;
	};
	class ItemKeyBlack1072: ItemKeyBlack {
		keyid = 11072;
	};
	class ItemKeyBlack1073: ItemKeyBlack {
		keyid = 11073;
	};
	class ItemKeyBlack1074: ItemKeyBlack {
		keyid = 11074;
	};
	class ItemKeyBlack1075: ItemKeyBlack {
		keyid = 11075;
	};
	class ItemKeyBlack1076: ItemKeyBlack {
		keyid = 11076;
	};
	class ItemKeyBlack1077: ItemKeyBlack {
		keyid = 11077;
	};
	class ItemKeyBlack1078: ItemKeyBlack {
		keyid = 11078;
	};
	class ItemKeyBlack1079: ItemKeyBlack {
		keyid = 11079;
	};
	class ItemKeyBlack1080: ItemKeyBlack {
		keyid = 11080;
	};
	class ItemKeyBlack1081: ItemKeyBlack {
		keyid = 11081;
	};
	class ItemKeyBlack1082: ItemKeyBlack {
		keyid = 11082;
	};
	class ItemKeyBlack1083: ItemKeyBlack {
		keyid = 11083;
	};
	class ItemKeyBlack1084: ItemKeyBlack {
		keyid = 11084;
	};
	class ItemKeyBlack1085: ItemKeyBlack {
		keyid = 11085;
	};
	class ItemKeyBlack1086: ItemKeyBlack {
		keyid = 11086;
	};
	class ItemKeyBlack1087: ItemKeyBlack {
		keyid = 11087;
	};
	class ItemKeyBlack1088: ItemKeyBlack {
		keyid = 11088;
	};
	class ItemKeyBlack1089: ItemKeyBlack {
		keyid = 11089;
	};
	class ItemKeyBlack1090: ItemKeyBlack {
		keyid = 11090;
	};
	class ItemKeyBlack1091: ItemKeyBlack {
		keyid = 11091;
	};
	class ItemKeyBlack1092: ItemKeyBlack {
		keyid = 11092;
	};
	class ItemKeyBlack1093: ItemKeyBlack {
		keyid = 11093;
	};
	class ItemKeyBlack1094: ItemKeyBlack {
		keyid = 11094;
	};
	class ItemKeyBlack1095: ItemKeyBlack {
		keyid = 11095;
	};
	class ItemKeyBlack1096: ItemKeyBlack {
		keyid = 11096;
	};
	class ItemKeyBlack1097: ItemKeyBlack {
		keyid = 11097;
	};
	class ItemKeyBlack1098: ItemKeyBlack {
		keyid = 11098;
	};
	class ItemKeyBlack1099: ItemKeyBlack {
		keyid = 11099;
	};
	class ItemKeyBlack1100: ItemKeyBlack {
		keyid = 11100;
	};
	class ItemKeyBlack1101: ItemKeyBlack {
		keyid = 11101;
	};
	class ItemKeyBlack1102: ItemKeyBlack {
		keyid = 11102;
	};
	class ItemKeyBlack1103: ItemKeyBlack {
		keyid = 11103;
	};
	class ItemKeyBlack1104: ItemKeyBlack {
		keyid = 11104;
	};
	class ItemKeyBlack1105: ItemKeyBlack {
		keyid = 11105;
	};
	class ItemKeyBlack1106: ItemKeyBlack {
		keyid = 11106;
	};
	class ItemKeyBlack1107: ItemKeyBlack {
		keyid = 11107;
	};
	class ItemKeyBlack1108: ItemKeyBlack {
		keyid = 11108;
	};
	class ItemKeyBlack1109: ItemKeyBlack {
		keyid = 11109;
	};
	class ItemKeyBlack1110: ItemKeyBlack {
		keyid = 11110;
	};
	class ItemKeyBlack1111: ItemKeyBlack {
		keyid = 11111;
	};
	class ItemKeyBlack1112: ItemKeyBlack {
		keyid = 11112;
	};
	class ItemKeyBlack1113: ItemKeyBlack {
		keyid = 11113;
	};
	class ItemKeyBlack1114: ItemKeyBlack {
		keyid = 11114;
	};
	class ItemKeyBlack1115: ItemKeyBlack {
		keyid = 11115;
	};
	class ItemKeyBlack1116: ItemKeyBlack {
		keyid = 11116;
	};
	class ItemKeyBlack1117: ItemKeyBlack {
		keyid = 11117;
	};
	class ItemKeyBlack1118: ItemKeyBlack {
		keyid = 11118;
	};
	class ItemKeyBlack1119: ItemKeyBlack {
		keyid = 11119;
	};
	class ItemKeyBlack1120: ItemKeyBlack {
		keyid = 11120;
	};
	class ItemKeyBlack1121: ItemKeyBlack {
		keyid = 11121;
	};
	class ItemKeyBlack1122: ItemKeyBlack {
		keyid = 11122;
	};
	class ItemKeyBlack1123: ItemKeyBlack {
		keyid = 11123;
	};
	class ItemKeyBlack1124: ItemKeyBlack {
		keyid = 11124;
	};
	class ItemKeyBlack1125: ItemKeyBlack {
		keyid = 11125;
	};
	class ItemKeyBlack1126: ItemKeyBlack {
		keyid = 11126;
	};
	class ItemKeyBlack1127: ItemKeyBlack {
		keyid = 11127;
	};
	class ItemKeyBlack1128: ItemKeyBlack {
		keyid = 11128;
	};
	class ItemKeyBlack1129: ItemKeyBlack {
		keyid = 11129;
	};
	class ItemKeyBlack1130: ItemKeyBlack {
		keyid = 11130;
	};
	class ItemKeyBlack1131: ItemKeyBlack {
		keyid = 11131;
	};
	class ItemKeyBlack1132: ItemKeyBlack {
		keyid = 11132;
	};
	class ItemKeyBlack1133: ItemKeyBlack {
		keyid = 11133;
	};
	class ItemKeyBlack1134: ItemKeyBlack {
		keyid = 11134;
	};
	class ItemKeyBlack1135: ItemKeyBlack {
		keyid = 11135;
	};
	class ItemKeyBlack1136: ItemKeyBlack {
		keyid = 11136;
	};
	class ItemKeyBlack1137: ItemKeyBlack {
		keyid = 11137;
	};
	class ItemKeyBlack1138: ItemKeyBlack {
		keyid = 11138;
	};
	class ItemKeyBlack1139: ItemKeyBlack {
		keyid = 11139;
	};
	class ItemKeyBlack1140: ItemKeyBlack {
		keyid = 11140;
	};
	class ItemKeyBlack1141: ItemKeyBlack {
		keyid = 11141;
	};
	class ItemKeyBlack1142: ItemKeyBlack {
		keyid = 11142;
	};
	class ItemKeyBlack1143: ItemKeyBlack {
		keyid = 11143;
	};
	class ItemKeyBlack1144: ItemKeyBlack {
		keyid = 11144;
	};
	class ItemKeyBlack1145: ItemKeyBlack {
		keyid = 11145;
	};
	class ItemKeyBlack1146: ItemKeyBlack {
		keyid = 11146;
	};
	class ItemKeyBlack1147: ItemKeyBlack {
		keyid = 11147;
	};
	class ItemKeyBlack1148: ItemKeyBlack {
		keyid = 11148;
	};
	class ItemKeyBlack1149: ItemKeyBlack {
		keyid = 11149;
	};
	class ItemKeyBlack1150: ItemKeyBlack {
		keyid = 11150;
	};
	class ItemKeyBlack1151: ItemKeyBlack {
		keyid = 11151;
	};
	class ItemKeyBlack1152: ItemKeyBlack {
		keyid = 11152;
	};
	class ItemKeyBlack1153: ItemKeyBlack {
		keyid = 11153;
	};
	class ItemKeyBlack1154: ItemKeyBlack {
		keyid = 11154;
	};
	class ItemKeyBlack1155: ItemKeyBlack {
		keyid = 11155;
	};
	class ItemKeyBlack1156: ItemKeyBlack {
		keyid = 11156;
	};
	class ItemKeyBlack1157: ItemKeyBlack {
		keyid = 11157;
	};
	class ItemKeyBlack1158: ItemKeyBlack {
		keyid = 11158;
	};
	class ItemKeyBlack1159: ItemKeyBlack {
		keyid = 11159;
	};
	class ItemKeyBlack1160: ItemKeyBlack {
		keyid = 11160;
	};
	class ItemKeyBlack1161: ItemKeyBlack {
		keyid = 11161;
	};
	class ItemKeyBlack1162: ItemKeyBlack {
		keyid = 11162;
	};
	class ItemKeyBlack1163: ItemKeyBlack {
		keyid = 11163;
	};
	class ItemKeyBlack1164: ItemKeyBlack {
		keyid = 11164;
	};
	class ItemKeyBlack1165: ItemKeyBlack {
		keyid = 11165;
	};
	class ItemKeyBlack1166: ItemKeyBlack {
		keyid = 11166;
	};
	class ItemKeyBlack1167: ItemKeyBlack {
		keyid = 11167;
	};
	class ItemKeyBlack1168: ItemKeyBlack {
		keyid = 11168;
	};
	class ItemKeyBlack1169: ItemKeyBlack {
		keyid = 11169;
	};
	class ItemKeyBlack1170: ItemKeyBlack {
		keyid = 11170;
	};
	class ItemKeyBlack1171: ItemKeyBlack {
		keyid = 11171;
	};
	class ItemKeyBlack1172: ItemKeyBlack {
		keyid = 11172;
	};
	class ItemKeyBlack1173: ItemKeyBlack {
		keyid = 11173;
	};
	class ItemKeyBlack1174: ItemKeyBlack {
		keyid = 11174;
	};
	class ItemKeyBlack1175: ItemKeyBlack {
		keyid = 11175;
	};
	class ItemKeyBlack1176: ItemKeyBlack {
		keyid = 11176;
	};
	class ItemKeyBlack1177: ItemKeyBlack {
		keyid = 11177;
	};
	class ItemKeyBlack1178: ItemKeyBlack {
		keyid = 11178;
	};
	class ItemKeyBlack1179: ItemKeyBlack {
		keyid = 11179;
	};
	class ItemKeyBlack1180: ItemKeyBlack {
		keyid = 11180;
	};
	class ItemKeyBlack1181: ItemKeyBlack {
		keyid = 11181;
	};
	class ItemKeyBlack1182: ItemKeyBlack {
		keyid = 11182;
	};
	class ItemKeyBlack1183: ItemKeyBlack {
		keyid = 11183;
	};
	class ItemKeyBlack1184: ItemKeyBlack {
		keyid = 11184;
	};
	class ItemKeyBlack1185: ItemKeyBlack {
		keyid = 11185;
	};
	class ItemKeyBlack1186: ItemKeyBlack {
		keyid = 11186;
	};
	class ItemKeyBlack1187: ItemKeyBlack {
		keyid = 11187;
	};
	class ItemKeyBlack1188: ItemKeyBlack {
		keyid = 11188;
	};
	class ItemKeyBlack1189: ItemKeyBlack {
		keyid = 11189;
	};
	class ItemKeyBlack1190: ItemKeyBlack {
		keyid = 11190;
	};
	class ItemKeyBlack1191: ItemKeyBlack {
		keyid = 11191;
	};
	class ItemKeyBlack1192: ItemKeyBlack {
		keyid = 11192;
	};
	class ItemKeyBlack1193: ItemKeyBlack {
		keyid = 11193;
	};
	class ItemKeyBlack1194: ItemKeyBlack {
		keyid = 11194;
	};
	class ItemKeyBlack1195: ItemKeyBlack {
		keyid = 11195;
	};
	class ItemKeyBlack1196: ItemKeyBlack {
		keyid = 11196;
	};
	class ItemKeyBlack1197: ItemKeyBlack {
		keyid = 11197;
	};
	class ItemKeyBlack1198: ItemKeyBlack {
		keyid = 11198;
	};
	class ItemKeyBlack1199: ItemKeyBlack {
		keyid = 11199;
	};
	class ItemKeyBlack1200: ItemKeyBlack {
		keyid = 11200;
	};
	class ItemKeyBlack1201: ItemKeyBlack {
		keyid = 11201;
	};
	class ItemKeyBlack1202: ItemKeyBlack {
		keyid = 11202;
	};
	class ItemKeyBlack1203: ItemKeyBlack {
		keyid = 11203;
	};
	class ItemKeyBlack1204: ItemKeyBlack {
		keyid = 11204;
	};
	class ItemKeyBlack1205: ItemKeyBlack {
		keyid = 11205;
	};
	class ItemKeyBlack1206: ItemKeyBlack {
		keyid = 11206;
	};
	class ItemKeyBlack1207: ItemKeyBlack {
		keyid = 11207;
	};
	class ItemKeyBlack1208: ItemKeyBlack {
		keyid = 11208;
	};
	class ItemKeyBlack1209: ItemKeyBlack {
		keyid = 11209;
	};
	class ItemKeyBlack1210: ItemKeyBlack {
		keyid = 11210;
	};
	class ItemKeyBlack1211: ItemKeyBlack {
		keyid = 11211;
	};
	class ItemKeyBlack1212: ItemKeyBlack {
		keyid = 11212;
	};
	class ItemKeyBlack1213: ItemKeyBlack {
		keyid = 11213;
	};
	class ItemKeyBlack1214: ItemKeyBlack {
		keyid = 11214;
	};
	class ItemKeyBlack1215: ItemKeyBlack {
		keyid = 11215;
	};
	class ItemKeyBlack1216: ItemKeyBlack {
		keyid = 11216;
	};
	class ItemKeyBlack1217: ItemKeyBlack {
		keyid = 11217;
	};
	class ItemKeyBlack1218: ItemKeyBlack {
		keyid = 11218;
	};
	class ItemKeyBlack1219: ItemKeyBlack {
		keyid = 11219;
	};
	class ItemKeyBlack1220: ItemKeyBlack {
		keyid = 11220;
	};
	class ItemKeyBlack1221: ItemKeyBlack {
		keyid = 11221;
	};
	class ItemKeyBlack1222: ItemKeyBlack {
		keyid = 11222;
	};
	class ItemKeyBlack1223: ItemKeyBlack {
		keyid = 11223;
	};
	class ItemKeyBlack1224: ItemKeyBlack {
		keyid = 11224;
	};
	class ItemKeyBlack1225: ItemKeyBlack {
		keyid = 11225;
	};
	class ItemKeyBlack1226: ItemKeyBlack {
		keyid = 11226;
	};
	class ItemKeyBlack1227: ItemKeyBlack {
		keyid = 11227;
	};
	class ItemKeyBlack1228: ItemKeyBlack {
		keyid = 11228;
	};
	class ItemKeyBlack1229: ItemKeyBlack {
		keyid = 11229;
	};
	class ItemKeyBlack1230: ItemKeyBlack {
		keyid = 11230;
	};
	class ItemKeyBlack1231: ItemKeyBlack {
		keyid = 11231;
	};
	class ItemKeyBlack1232: ItemKeyBlack {
		keyid = 11232;
	};
	class ItemKeyBlack1233: ItemKeyBlack {
		keyid = 11233;
	};
	class ItemKeyBlack1234: ItemKeyBlack {
		keyid = 11234;
	};
	class ItemKeyBlack1235: ItemKeyBlack {
		keyid = 11235;
	};
	class ItemKeyBlack1236: ItemKeyBlack {
		keyid = 11236;
	};
	class ItemKeyBlack1237: ItemKeyBlack {
		keyid = 11237;
	};
	class ItemKeyBlack1238: ItemKeyBlack {
		keyid = 11238;
	};
	class ItemKeyBlack1239: ItemKeyBlack {
		keyid = 11239;
	};
	class ItemKeyBlack1240: ItemKeyBlack {
		keyid = 11240;
	};
	class ItemKeyBlack1241: ItemKeyBlack {
		keyid = 11241;
	};
	class ItemKeyBlack1242: ItemKeyBlack {
		keyid = 11242;
	};
	class ItemKeyBlack1243: ItemKeyBlack {
		keyid = 11243;
	};
	class ItemKeyBlack1244: ItemKeyBlack {
		keyid = 11244;
	};
	class ItemKeyBlack1245: ItemKeyBlack {
		keyid = 11245;
	};
	class ItemKeyBlack1246: ItemKeyBlack {
		keyid = 11246;
	};
	class ItemKeyBlack1247: ItemKeyBlack {
		keyid = 11247;
	};
	class ItemKeyBlack1248: ItemKeyBlack {
		keyid = 11248;
	};
	class ItemKeyBlack1249: ItemKeyBlack {
		keyid = 11249;
	};
	class ItemKeyBlack1250: ItemKeyBlack {
		keyid = 11250;
	};
	class ItemKeyBlack1251: ItemKeyBlack {
		keyid = 11251;
	};
	class ItemKeyBlack1252: ItemKeyBlack {
		keyid = 11252;
	};
	class ItemKeyBlack1253: ItemKeyBlack {
		keyid = 11253;
	};
	class ItemKeyBlack1254: ItemKeyBlack {
		keyid = 11254;
	};
	class ItemKeyBlack1255: ItemKeyBlack {
		keyid = 11255;
	};
	class ItemKeyBlack1256: ItemKeyBlack {
		keyid = 11256;
	};
	class ItemKeyBlack1257: ItemKeyBlack {
		keyid = 11257;
	};
	class ItemKeyBlack1258: ItemKeyBlack {
		keyid = 11258;
	};
	class ItemKeyBlack1259: ItemKeyBlack {
		keyid = 11259;
	};
	class ItemKeyBlack1260: ItemKeyBlack {
		keyid = 11260;
	};
	class ItemKeyBlack1261: ItemKeyBlack {
		keyid = 11261;
	};
	class ItemKeyBlack1262: ItemKeyBlack {
		keyid = 11262;
	};
	class ItemKeyBlack1263: ItemKeyBlack {
		keyid = 11263;
	};
	class ItemKeyBlack1264: ItemKeyBlack {
		keyid = 11264;
	};
	class ItemKeyBlack1265: ItemKeyBlack {
		keyid = 11265;
	};
	class ItemKeyBlack1266: ItemKeyBlack {
		keyid = 11266;
	};
	class ItemKeyBlack1267: ItemKeyBlack {
		keyid = 11267;
	};
	class ItemKeyBlack1268: ItemKeyBlack {
		keyid = 11268;
	};
	class ItemKeyBlack1269: ItemKeyBlack {
		keyid = 11269;
	};
	class ItemKeyBlack1270: ItemKeyBlack {
		keyid = 11270;
	};
	class ItemKeyBlack1271: ItemKeyBlack {
		keyid = 11271;
	};
	class ItemKeyBlack1272: ItemKeyBlack {
		keyid = 11272;
	};
	class ItemKeyBlack1273: ItemKeyBlack {
		keyid = 11273;
	};
	class ItemKeyBlack1274: ItemKeyBlack {
		keyid = 11274;
	};
	class ItemKeyBlack1275: ItemKeyBlack {
		keyid = 11275;
	};
	class ItemKeyBlack1276: ItemKeyBlack {
		keyid = 11276;
	};
	class ItemKeyBlack1277: ItemKeyBlack {
		keyid = 11277;
	};
	class ItemKeyBlack1278: ItemKeyBlack {
		keyid = 11278;
	};
	class ItemKeyBlack1279: ItemKeyBlack {
		keyid = 11279;
	};
	class ItemKeyBlack1280: ItemKeyBlack {
		keyid = 11280;
	};
	class ItemKeyBlack1281: ItemKeyBlack {
		keyid = 11281;
	};
	class ItemKeyBlack1282: ItemKeyBlack {
		keyid = 11282;
	};
	class ItemKeyBlack1283: ItemKeyBlack {
		keyid = 11283;
	};
	class ItemKeyBlack1284: ItemKeyBlack {
		keyid = 11284;
	};
	class ItemKeyBlack1285: ItemKeyBlack {
		keyid = 11285;
	};
	class ItemKeyBlack1286: ItemKeyBlack {
		keyid = 11286;
	};
	class ItemKeyBlack1287: ItemKeyBlack {
		keyid = 11287;
	};
	class ItemKeyBlack1288: ItemKeyBlack {
		keyid = 11288;
	};
	class ItemKeyBlack1289: ItemKeyBlack {
		keyid = 11289;
	};
	class ItemKeyBlack1290: ItemKeyBlack {
		keyid = 11290;
	};
	class ItemKeyBlack1291: ItemKeyBlack {
		keyid = 11291;
	};
	class ItemKeyBlack1292: ItemKeyBlack {
		keyid = 11292;
	};
	class ItemKeyBlack1293: ItemKeyBlack {
		keyid = 11293;
	};
	class ItemKeyBlack1294: ItemKeyBlack {
		keyid = 11294;
	};
	class ItemKeyBlack1295: ItemKeyBlack {
		keyid = 11295;
	};
	class ItemKeyBlack1296: ItemKeyBlack {
		keyid = 11296;
	};
	class ItemKeyBlack1297: ItemKeyBlack {
		keyid = 11297;
	};
	class ItemKeyBlack1298: ItemKeyBlack {
		keyid = 11298;
	};
	class ItemKeyBlack1299: ItemKeyBlack {
		keyid = 11299;
	};
	class ItemKeyBlack1300: ItemKeyBlack {
		keyid = 11300;
	};
	class ItemKeyBlack1301: ItemKeyBlack {
		keyid = 11301;
	};
	class ItemKeyBlack1302: ItemKeyBlack {
		keyid = 11302;
	};
	class ItemKeyBlack1303: ItemKeyBlack {
		keyid = 11303;
	};
	class ItemKeyBlack1304: ItemKeyBlack {
		keyid = 11304;
	};
	class ItemKeyBlack1305: ItemKeyBlack {
		keyid = 11305;
	};
	class ItemKeyBlack1306: ItemKeyBlack {
		keyid = 11306;
	};
	class ItemKeyBlack1307: ItemKeyBlack {
		keyid = 11307;
	};
	class ItemKeyBlack1308: ItemKeyBlack {
		keyid = 11308;
	};
	class ItemKeyBlack1309: ItemKeyBlack {
		keyid = 11309;
	};
	class ItemKeyBlack1310: ItemKeyBlack {
		keyid = 11310;
	};
	class ItemKeyBlack1311: ItemKeyBlack {
		keyid = 11311;
	};
	class ItemKeyBlack1312: ItemKeyBlack {
		keyid = 11312;
	};
	class ItemKeyBlack1313: ItemKeyBlack {
		keyid = 11313;
	};
	class ItemKeyBlack1314: ItemKeyBlack {
		keyid = 11314;
	};
	class ItemKeyBlack1315: ItemKeyBlack {
		keyid = 11315;
	};
	class ItemKeyBlack1316: ItemKeyBlack {
		keyid = 11316;
	};
	class ItemKeyBlack1317: ItemKeyBlack {
		keyid = 11317;
	};
	class ItemKeyBlack1318: ItemKeyBlack {
		keyid = 11318;
	};
	class ItemKeyBlack1319: ItemKeyBlack {
		keyid = 11319;
	};
	class ItemKeyBlack1320: ItemKeyBlack {
		keyid = 11320;
	};
	class ItemKeyBlack1321: ItemKeyBlack {
		keyid = 11321;
	};
	class ItemKeyBlack1322: ItemKeyBlack {
		keyid = 11322;
	};
	class ItemKeyBlack1323: ItemKeyBlack {
		keyid = 11323;
	};
	class ItemKeyBlack1324: ItemKeyBlack {
		keyid = 11324;
	};
	class ItemKeyBlack1325: ItemKeyBlack {
		keyid = 11325;
	};
	class ItemKeyBlack1326: ItemKeyBlack {
		keyid = 11326;
	};
	class ItemKeyBlack1327: ItemKeyBlack {
		keyid = 11327;
	};
	class ItemKeyBlack1328: ItemKeyBlack {
		keyid = 11328;
	};
	class ItemKeyBlack1329: ItemKeyBlack {
		keyid = 11329;
	};
	class ItemKeyBlack1330: ItemKeyBlack {
		keyid = 11330;
	};
	class ItemKeyBlack1331: ItemKeyBlack {
		keyid = 11331;
	};
	class ItemKeyBlack1332: ItemKeyBlack {
		keyid = 11332;
	};
	class ItemKeyBlack1333: ItemKeyBlack {
		keyid = 11333;
	};
	class ItemKeyBlack1334: ItemKeyBlack {
		keyid = 11334;
	};
	class ItemKeyBlack1335: ItemKeyBlack {
		keyid = 11335;
	};
	class ItemKeyBlack1336: ItemKeyBlack {
		keyid = 11336;
	};
	class ItemKeyBlack1337: ItemKeyBlack {
		keyid = 11337;
	};
	class ItemKeyBlack1338: ItemKeyBlack {
		keyid = 11338;
	};
	class ItemKeyBlack1339: ItemKeyBlack {
		keyid = 11339;
	};
	class ItemKeyBlack1340: ItemKeyBlack {
		keyid = 11340;
	};
	class ItemKeyBlack1341: ItemKeyBlack {
		keyid = 11341;
	};
	class ItemKeyBlack1342: ItemKeyBlack {
		keyid = 11342;
	};
	class ItemKeyBlack1343: ItemKeyBlack {
		keyid = 11343;
	};
	class ItemKeyBlack1344: ItemKeyBlack {
		keyid = 11344;
	};
	class ItemKeyBlack1345: ItemKeyBlack {
		keyid = 11345;
	};
	class ItemKeyBlack1346: ItemKeyBlack {
		keyid = 11346;
	};
	class ItemKeyBlack1347: ItemKeyBlack {
		keyid = 11347;
	};
	class ItemKeyBlack1348: ItemKeyBlack {
		keyid = 11348;
	};
	class ItemKeyBlack1349: ItemKeyBlack {
		keyid = 11349;
	};
	class ItemKeyBlack1350: ItemKeyBlack {
		keyid = 11350;
	};
	class ItemKeyBlack1351: ItemKeyBlack {
		keyid = 11351;
	};
	class ItemKeyBlack1352: ItemKeyBlack {
		keyid = 11352;
	};
	class ItemKeyBlack1353: ItemKeyBlack {
		keyid = 11353;
	};
	class ItemKeyBlack1354: ItemKeyBlack {
		keyid = 11354;
	};
	class ItemKeyBlack1355: ItemKeyBlack {
		keyid = 11355;
	};
	class ItemKeyBlack1356: ItemKeyBlack {
		keyid = 11356;
	};
	class ItemKeyBlack1357: ItemKeyBlack {
		keyid = 11357;
	};
	class ItemKeyBlack1358: ItemKeyBlack {
		keyid = 11358;
	};
	class ItemKeyBlack1359: ItemKeyBlack {
		keyid = 11359;
	};
	class ItemKeyBlack1360: ItemKeyBlack {
		keyid = 11360;
	};
	class ItemKeyBlack1361: ItemKeyBlack {
		keyid = 11361;
	};
	class ItemKeyBlack1362: ItemKeyBlack {
		keyid = 11362;
	};
	class ItemKeyBlack1363: ItemKeyBlack {
		keyid = 11363;
	};
	class ItemKeyBlack1364: ItemKeyBlack {
		keyid = 11364;
	};
	class ItemKeyBlack1365: ItemKeyBlack {
		keyid = 11365;
	};
	class ItemKeyBlack1366: ItemKeyBlack {
		keyid = 11366;
	};
	class ItemKeyBlack1367: ItemKeyBlack {
		keyid = 11367;
	};
	class ItemKeyBlack1368: ItemKeyBlack {
		keyid = 11368;
	};
	class ItemKeyBlack1369: ItemKeyBlack {
		keyid = 11369;
	};
	class ItemKeyBlack1370: ItemKeyBlack {
		keyid = 11370;
	};
	class ItemKeyBlack1371: ItemKeyBlack {
		keyid = 11371;
	};
	class ItemKeyBlack1372: ItemKeyBlack {
		keyid = 11372;
	};
	class ItemKeyBlack1373: ItemKeyBlack {
		keyid = 11373;
	};
	class ItemKeyBlack1374: ItemKeyBlack {
		keyid = 11374;
	};
	class ItemKeyBlack1375: ItemKeyBlack {
		keyid = 11375;
	};
	class ItemKeyBlack1376: ItemKeyBlack {
		keyid = 11376;
	};
	class ItemKeyBlack1377: ItemKeyBlack {
		keyid = 11377;
	};
	class ItemKeyBlack1378: ItemKeyBlack {
		keyid = 11378;
	};
	class ItemKeyBlack1379: ItemKeyBlack {
		keyid = 11379;
	};
	class ItemKeyBlack1380: ItemKeyBlack {
		keyid = 11380;
	};
	class ItemKeyBlack1381: ItemKeyBlack {
		keyid = 11381;
	};
	class ItemKeyBlack1382: ItemKeyBlack {
		keyid = 11382;
	};
	class ItemKeyBlack1383: ItemKeyBlack {
		keyid = 11383;
	};
	class ItemKeyBlack1384: ItemKeyBlack {
		keyid = 11384;
	};
	class ItemKeyBlack1385: ItemKeyBlack {
		keyid = 11385;
	};
	class ItemKeyBlack1386: ItemKeyBlack {
		keyid = 11386;
	};
	class ItemKeyBlack1387: ItemKeyBlack {
		keyid = 11387;
	};
	class ItemKeyBlack1388: ItemKeyBlack {
		keyid = 11388;
	};
	class ItemKeyBlack1389: ItemKeyBlack {
		keyid = 11389;
	};
	class ItemKeyBlack1390: ItemKeyBlack {
		keyid = 11390;
	};
	class ItemKeyBlack1391: ItemKeyBlack {
		keyid = 11391;
	};
	class ItemKeyBlack1392: ItemKeyBlack {
		keyid = 11392;
	};
	class ItemKeyBlack1393: ItemKeyBlack {
		keyid = 11393;
	};
	class ItemKeyBlack1394: ItemKeyBlack {
		keyid = 11394;
	};
	class ItemKeyBlack1395: ItemKeyBlack {
		keyid = 11395;
	};
	class ItemKeyBlack1396: ItemKeyBlack {
		keyid = 11396;
	};
	class ItemKeyBlack1397: ItemKeyBlack {
		keyid = 11397;
	};
	class ItemKeyBlack1398: ItemKeyBlack {
		keyid = 11398;
	};
	class ItemKeyBlack1399: ItemKeyBlack {
		keyid = 11399;
	};
	class ItemKeyBlack1400: ItemKeyBlack {
		keyid = 11400;
	};
	class ItemKeyBlack1401: ItemKeyBlack {
		keyid = 11401;
	};
	class ItemKeyBlack1402: ItemKeyBlack {
		keyid = 11402;
	};
	class ItemKeyBlack1403: ItemKeyBlack {
		keyid = 11403;
	};
	class ItemKeyBlack1404: ItemKeyBlack {
		keyid = 11404;
	};
	class ItemKeyBlack1405: ItemKeyBlack {
		keyid = 11405;
	};
	class ItemKeyBlack1406: ItemKeyBlack {
		keyid = 11406;
	};
	class ItemKeyBlack1407: ItemKeyBlack {
		keyid = 11407;
	};
	class ItemKeyBlack1408: ItemKeyBlack {
		keyid = 11408;
	};
	class ItemKeyBlack1409: ItemKeyBlack {
		keyid = 11409;
	};
	class ItemKeyBlack1410: ItemKeyBlack {
		keyid = 11410;
	};
	class ItemKeyBlack1411: ItemKeyBlack {
		keyid = 11411;
	};
	class ItemKeyBlack1412: ItemKeyBlack {
		keyid = 11412;
	};
	class ItemKeyBlack1413: ItemKeyBlack {
		keyid = 11413;
	};
	class ItemKeyBlack1414: ItemKeyBlack {
		keyid = 11414;
	};
	class ItemKeyBlack1415: ItemKeyBlack {
		keyid = 11415;
	};
	class ItemKeyBlack1416: ItemKeyBlack {
		keyid = 11416;
	};
	class ItemKeyBlack1417: ItemKeyBlack {
		keyid = 11417;
	};
	class ItemKeyBlack1418: ItemKeyBlack {
		keyid = 11418;
	};
	class ItemKeyBlack1419: ItemKeyBlack {
		keyid = 11419;
	};
	class ItemKeyBlack1420: ItemKeyBlack {
		keyid = 11420;
	};
	class ItemKeyBlack1421: ItemKeyBlack {
		keyid = 11421;
	};
	class ItemKeyBlack1422: ItemKeyBlack {
		keyid = 11422;
	};
	class ItemKeyBlack1423: ItemKeyBlack {
		keyid = 11423;
	};
	class ItemKeyBlack1424: ItemKeyBlack {
		keyid = 11424;
	};
	class ItemKeyBlack1425: ItemKeyBlack {
		keyid = 11425;
	};
	class ItemKeyBlack1426: ItemKeyBlack {
		keyid = 11426;
	};
	class ItemKeyBlack1427: ItemKeyBlack {
		keyid = 11427;
	};
	class ItemKeyBlack1428: ItemKeyBlack {
		keyid = 11428;
	};
	class ItemKeyBlack1429: ItemKeyBlack {
		keyid = 11429;
	};
	class ItemKeyBlack1430: ItemKeyBlack {
		keyid = 11430;
	};
	class ItemKeyBlack1431: ItemKeyBlack {
		keyid = 11431;
	};
	class ItemKeyBlack1432: ItemKeyBlack {
		keyid = 11432;
	};
	class ItemKeyBlack1433: ItemKeyBlack {
		keyid = 11433;
	};
	class ItemKeyBlack1434: ItemKeyBlack {
		keyid = 11434;
	};
	class ItemKeyBlack1435: ItemKeyBlack {
		keyid = 11435;
	};
	class ItemKeyBlack1436: ItemKeyBlack {
		keyid = 11436;
	};
	class ItemKeyBlack1437: ItemKeyBlack {
		keyid = 11437;
	};
	class ItemKeyBlack1438: ItemKeyBlack {
		keyid = 11438;
	};
	class ItemKeyBlack1439: ItemKeyBlack {
		keyid = 11439;
	};
	class ItemKeyBlack1440: ItemKeyBlack {
		keyid = 11440;
	};
	class ItemKeyBlack1441: ItemKeyBlack {
		keyid = 11441;
	};
	class ItemKeyBlack1442: ItemKeyBlack {
		keyid = 11442;
	};
	class ItemKeyBlack1443: ItemKeyBlack {
		keyid = 11443;
	};
	class ItemKeyBlack1444: ItemKeyBlack {
		keyid = 11444;
	};
	class ItemKeyBlack1445: ItemKeyBlack {
		keyid = 11445;
	};
	class ItemKeyBlack1446: ItemKeyBlack {
		keyid = 11446;
	};
	class ItemKeyBlack1447: ItemKeyBlack {
		keyid = 11447;
	};
	class ItemKeyBlack1448: ItemKeyBlack {
		keyid = 11448;
	};
	class ItemKeyBlack1449: ItemKeyBlack {
		keyid = 11449;
	};
	class ItemKeyBlack1450: ItemKeyBlack {
		keyid = 11450;
	};
	class ItemKeyBlack1451: ItemKeyBlack {
		keyid = 11451;
	};
	class ItemKeyBlack1452: ItemKeyBlack {
		keyid = 11452;
	};
	class ItemKeyBlack1453: ItemKeyBlack {
		keyid = 11453;
	};
	class ItemKeyBlack1454: ItemKeyBlack {
		keyid = 11454;
	};
	class ItemKeyBlack1455: ItemKeyBlack {
		keyid = 11455;
	};
	class ItemKeyBlack1456: ItemKeyBlack {
		keyid = 11456;
	};
	class ItemKeyBlack1457: ItemKeyBlack {
		keyid = 11457;
	};
	class ItemKeyBlack1458: ItemKeyBlack {
		keyid = 11458;
	};
	class ItemKeyBlack1459: ItemKeyBlack {
		keyid = 11459;
	};
	class ItemKeyBlack1460: ItemKeyBlack {
		keyid = 11460;
	};
	class ItemKeyBlack1461: ItemKeyBlack {
		keyid = 11461;
	};
	class ItemKeyBlack1462: ItemKeyBlack {
		keyid = 11462;
	};
	class ItemKeyBlack1463: ItemKeyBlack {
		keyid = 11463;
	};
	class ItemKeyBlack1464: ItemKeyBlack {
		keyid = 11464;
	};
	class ItemKeyBlack1465: ItemKeyBlack {
		keyid = 11465;
	};
	class ItemKeyBlack1466: ItemKeyBlack {
		keyid = 11466;
	};
	class ItemKeyBlack1467: ItemKeyBlack {
		keyid = 11467;
	};
	class ItemKeyBlack1468: ItemKeyBlack {
		keyid = 11468;
	};
	class ItemKeyBlack1469: ItemKeyBlack {
		keyid = 11469;
	};
	class ItemKeyBlack1470: ItemKeyBlack {
		keyid = 11470;
	};
	class ItemKeyBlack1471: ItemKeyBlack {
		keyid = 11471;
	};
	class ItemKeyBlack1472: ItemKeyBlack {
		keyid = 11472;
	};
	class ItemKeyBlack1473: ItemKeyBlack {
		keyid = 11473;
	};
	class ItemKeyBlack1474: ItemKeyBlack {
		keyid = 11474;
	};
	class ItemKeyBlack1475: ItemKeyBlack {
		keyid = 11475;
	};
	class ItemKeyBlack1476: ItemKeyBlack {
		keyid = 11476;
	};
	class ItemKeyBlack1477: ItemKeyBlack {
		keyid = 11477;
	};
	class ItemKeyBlack1478: ItemKeyBlack {
		keyid = 11478;
	};
	class ItemKeyBlack1479: ItemKeyBlack {
		keyid = 11479;
	};
	class ItemKeyBlack1480: ItemKeyBlack {
		keyid = 11480;
	};
	class ItemKeyBlack1481: ItemKeyBlack {
		keyid = 11481;
	};
	class ItemKeyBlack1482: ItemKeyBlack {
		keyid = 11482;
	};
	class ItemKeyBlack1483: ItemKeyBlack {
		keyid = 11483;
	};
	class ItemKeyBlack1484: ItemKeyBlack {
		keyid = 11484;
	};
	class ItemKeyBlack1485: ItemKeyBlack {
		keyid = 11485;
	};
	class ItemKeyBlack1486: ItemKeyBlack {
		keyid = 11486;
	};
	class ItemKeyBlack1487: ItemKeyBlack {
		keyid = 11487;
	};
	class ItemKeyBlack1488: ItemKeyBlack {
		keyid = 11488;
	};
	class ItemKeyBlack1489: ItemKeyBlack {
		keyid = 11489;
	};
	class ItemKeyBlack1490: ItemKeyBlack {
		keyid = 11490;
	};
	class ItemKeyBlack1491: ItemKeyBlack {
		keyid = 11491;
	};
	class ItemKeyBlack1492: ItemKeyBlack {
		keyid = 11492;
	};
	class ItemKeyBlack1493: ItemKeyBlack {
		keyid = 11493;
	};
	class ItemKeyBlack1494: ItemKeyBlack {
		keyid = 11494;
	};
	class ItemKeyBlack1495: ItemKeyBlack {
		keyid = 11495;
	};
	class ItemKeyBlack1496: ItemKeyBlack {
		keyid = 11496;
	};
	class ItemKeyBlack1497: ItemKeyBlack {
		keyid = 11497;
	};
	class ItemKeyBlack1498: ItemKeyBlack {
		keyid = 11498;
	};
	class ItemKeyBlack1499: ItemKeyBlack {
		keyid = 11499;
	};
	class ItemKeyBlack1500: ItemKeyBlack {
		keyid = 11500;
	};
	class ItemKeyBlack1501: ItemKeyBlack {
		keyid = 11501;
	};
	class ItemKeyBlack1502: ItemKeyBlack {
		keyid = 11502;
	};
	class ItemKeyBlack1503: ItemKeyBlack {
		keyid = 11503;
	};
	class ItemKeyBlack1504: ItemKeyBlack {
		keyid = 11504;
	};
	class ItemKeyBlack1505: ItemKeyBlack {
		keyid = 11505;
	};
	class ItemKeyBlack1506: ItemKeyBlack {
		keyid = 11506;
	};
	class ItemKeyBlack1507: ItemKeyBlack {
		keyid = 11507;
	};
	class ItemKeyBlack1508: ItemKeyBlack {
		keyid = 11508;
	};
	class ItemKeyBlack1509: ItemKeyBlack {
		keyid = 11509;
	};
	class ItemKeyBlack1510: ItemKeyBlack {
		keyid = 11510;
	};
	class ItemKeyBlack1511: ItemKeyBlack {
		keyid = 11511;
	};
	class ItemKeyBlack1512: ItemKeyBlack {
		keyid = 11512;
	};
	class ItemKeyBlack1513: ItemKeyBlack {
		keyid = 11513;
	};
	class ItemKeyBlack1514: ItemKeyBlack {
		keyid = 11514;
	};
	class ItemKeyBlack1515: ItemKeyBlack {
		keyid = 11515;
	};
	class ItemKeyBlack1516: ItemKeyBlack {
		keyid = 11516;
	};
	class ItemKeyBlack1517: ItemKeyBlack {
		keyid = 11517;
	};
	class ItemKeyBlack1518: ItemKeyBlack {
		keyid = 11518;
	};
	class ItemKeyBlack1519: ItemKeyBlack {
		keyid = 11519;
	};
	class ItemKeyBlack1520: ItemKeyBlack {
		keyid = 11520;
	};
	class ItemKeyBlack1521: ItemKeyBlack {
		keyid = 11521;
	};
	class ItemKeyBlack1522: ItemKeyBlack {
		keyid = 11522;
	};
	class ItemKeyBlack1523: ItemKeyBlack {
		keyid = 11523;
	};
	class ItemKeyBlack1524: ItemKeyBlack {
		keyid = 11524;
	};
	class ItemKeyBlack1525: ItemKeyBlack {
		keyid = 11525;
	};
	class ItemKeyBlack1526: ItemKeyBlack {
		keyid = 11526;
	};
	class ItemKeyBlack1527: ItemKeyBlack {
		keyid = 11527;
	};
	class ItemKeyBlack1528: ItemKeyBlack {
		keyid = 11528;
	};
	class ItemKeyBlack1529: ItemKeyBlack {
		keyid = 11529;
	};
	class ItemKeyBlack1530: ItemKeyBlack {
		keyid = 11530;
	};
	class ItemKeyBlack1531: ItemKeyBlack {
		keyid = 11531;
	};
	class ItemKeyBlack1532: ItemKeyBlack {
		keyid = 11532;
	};
	class ItemKeyBlack1533: ItemKeyBlack {
		keyid = 11533;
	};
	class ItemKeyBlack1534: ItemKeyBlack {
		keyid = 11534;
	};
	class ItemKeyBlack1535: ItemKeyBlack {
		keyid = 11535;
	};
	class ItemKeyBlack1536: ItemKeyBlack {
		keyid = 11536;
	};
	class ItemKeyBlack1537: ItemKeyBlack {
		keyid = 11537;
	};
	class ItemKeyBlack1538: ItemKeyBlack {
		keyid = 11538;
	};
	class ItemKeyBlack1539: ItemKeyBlack {
		keyid = 11539;
	};
	class ItemKeyBlack1540: ItemKeyBlack {
		keyid = 11540;
	};
	class ItemKeyBlack1541: ItemKeyBlack {
		keyid = 11541;
	};
	class ItemKeyBlack1542: ItemKeyBlack {
		keyid = 11542;
	};
	class ItemKeyBlack1543: ItemKeyBlack {
		keyid = 11543;
	};
	class ItemKeyBlack1544: ItemKeyBlack {
		keyid = 11544;
	};
	class ItemKeyBlack1545: ItemKeyBlack {
		keyid = 11545;
	};
	class ItemKeyBlack1546: ItemKeyBlack {
		keyid = 11546;
	};
	class ItemKeyBlack1547: ItemKeyBlack {
		keyid = 11547;
	};
	class ItemKeyBlack1548: ItemKeyBlack {
		keyid = 11548;
	};
	class ItemKeyBlack1549: ItemKeyBlack {
		keyid = 11549;
	};
	class ItemKeyBlack1550: ItemKeyBlack {
		keyid = 11550;
	};
	class ItemKeyBlack1551: ItemKeyBlack {
		keyid = 11551;
	};
	class ItemKeyBlack1552: ItemKeyBlack {
		keyid = 11552;
	};
	class ItemKeyBlack1553: ItemKeyBlack {
		keyid = 11553;
	};
	class ItemKeyBlack1554: ItemKeyBlack {
		keyid = 11554;
	};
	class ItemKeyBlack1555: ItemKeyBlack {
		keyid = 11555;
	};
	class ItemKeyBlack1556: ItemKeyBlack {
		keyid = 11556;
	};
	class ItemKeyBlack1557: ItemKeyBlack {
		keyid = 11557;
	};
	class ItemKeyBlack1558: ItemKeyBlack {
		keyid = 11558;
	};
	class ItemKeyBlack1559: ItemKeyBlack {
		keyid = 11559;
	};
	class ItemKeyBlack1560: ItemKeyBlack {
		keyid = 11560;
	};
	class ItemKeyBlack1561: ItemKeyBlack {
		keyid = 11561;
	};
	class ItemKeyBlack1562: ItemKeyBlack {
		keyid = 11562;
	};
	class ItemKeyBlack1563: ItemKeyBlack {
		keyid = 11563;
	};
	class ItemKeyBlack1564: ItemKeyBlack {
		keyid = 11564;
	};
	class ItemKeyBlack1565: ItemKeyBlack {
		keyid = 11565;
	};
	class ItemKeyBlack1566: ItemKeyBlack {
		keyid = 11566;
	};
	class ItemKeyBlack1567: ItemKeyBlack {
		keyid = 11567;
	};
	class ItemKeyBlack1568: ItemKeyBlack {
		keyid = 11568;
	};
	class ItemKeyBlack1569: ItemKeyBlack {
		keyid = 11569;
	};
	class ItemKeyBlack1570: ItemKeyBlack {
		keyid = 11570;
	};
	class ItemKeyBlack1571: ItemKeyBlack {
		keyid = 11571;
	};
	class ItemKeyBlack1572: ItemKeyBlack {
		keyid = 11572;
	};
	class ItemKeyBlack1573: ItemKeyBlack {
		keyid = 11573;
	};
	class ItemKeyBlack1574: ItemKeyBlack {
		keyid = 11574;
	};
	class ItemKeyBlack1575: ItemKeyBlack {
		keyid = 11575;
	};
	class ItemKeyBlack1576: ItemKeyBlack {
		keyid = 11576;
	};
	class ItemKeyBlack1577: ItemKeyBlack {
		keyid = 11577;
	};
	class ItemKeyBlack1578: ItemKeyBlack {
		keyid = 11578;
	};
	class ItemKeyBlack1579: ItemKeyBlack {
		keyid = 11579;
	};
	class ItemKeyBlack1580: ItemKeyBlack {
		keyid = 11580;
	};
	class ItemKeyBlack1581: ItemKeyBlack {
		keyid = 11581;
	};
	class ItemKeyBlack1582: ItemKeyBlack {
		keyid = 11582;
	};
	class ItemKeyBlack1583: ItemKeyBlack {
		keyid = 11583;
	};
	class ItemKeyBlack1584: ItemKeyBlack {
		keyid = 11584;
	};
	class ItemKeyBlack1585: ItemKeyBlack {
		keyid = 11585;
	};
	class ItemKeyBlack1586: ItemKeyBlack {
		keyid = 11586;
	};
	class ItemKeyBlack1587: ItemKeyBlack {
		keyid = 11587;
	};
	class ItemKeyBlack1588: ItemKeyBlack {
		keyid = 11588;
	};
	class ItemKeyBlack1589: ItemKeyBlack {
		keyid = 11589;
	};
	class ItemKeyBlack1590: ItemKeyBlack {
		keyid = 11590;
	};
	class ItemKeyBlack1591: ItemKeyBlack {
		keyid = 11591;
	};
	class ItemKeyBlack1592: ItemKeyBlack {
		keyid = 11592;
	};
	class ItemKeyBlack1593: ItemKeyBlack {
		keyid = 11593;
	};
	class ItemKeyBlack1594: ItemKeyBlack {
		keyid = 11594;
	};
	class ItemKeyBlack1595: ItemKeyBlack {
		keyid = 11595;
	};
	class ItemKeyBlack1596: ItemKeyBlack {
		keyid = 11596;
	};
	class ItemKeyBlack1597: ItemKeyBlack {
		keyid = 11597;
	};
	class ItemKeyBlack1598: ItemKeyBlack {
		keyid = 11598;
	};
	class ItemKeyBlack1599: ItemKeyBlack {
		keyid = 11599;
	};
	class ItemKeyBlack1600: ItemKeyBlack {
		keyid = 11600;
	};
	class ItemKeyBlack1601: ItemKeyBlack {
		keyid = 11601;
	};
	class ItemKeyBlack1602: ItemKeyBlack {
		keyid = 11602;
	};
	class ItemKeyBlack1603: ItemKeyBlack {
		keyid = 11603;
	};
	class ItemKeyBlack1604: ItemKeyBlack {
		keyid = 11604;
	};
	class ItemKeyBlack1605: ItemKeyBlack {
		keyid = 11605;
	};
	class ItemKeyBlack1606: ItemKeyBlack {
		keyid = 11606;
	};
	class ItemKeyBlack1607: ItemKeyBlack {
		keyid = 11607;
	};
	class ItemKeyBlack1608: ItemKeyBlack {
		keyid = 11608;
	};
	class ItemKeyBlack1609: ItemKeyBlack {
		keyid = 11609;
	};
	class ItemKeyBlack1610: ItemKeyBlack {
		keyid = 11610;
	};
	class ItemKeyBlack1611: ItemKeyBlack {
		keyid = 11611;
	};
	class ItemKeyBlack1612: ItemKeyBlack {
		keyid = 11612;
	};
	class ItemKeyBlack1613: ItemKeyBlack {
		keyid = 11613;
	};
	class ItemKeyBlack1614: ItemKeyBlack {
		keyid = 11614;
	};
	class ItemKeyBlack1615: ItemKeyBlack {
		keyid = 11615;
	};
	class ItemKeyBlack1616: ItemKeyBlack {
		keyid = 11616;
	};
	class ItemKeyBlack1617: ItemKeyBlack {
		keyid = 11617;
	};
	class ItemKeyBlack1618: ItemKeyBlack {
		keyid = 11618;
	};
	class ItemKeyBlack1619: ItemKeyBlack {
		keyid = 11619;
	};
	class ItemKeyBlack1620: ItemKeyBlack {
		keyid = 11620;
	};
	class ItemKeyBlack1621: ItemKeyBlack {
		keyid = 11621;
	};
	class ItemKeyBlack1622: ItemKeyBlack {
		keyid = 11622;
	};
	class ItemKeyBlack1623: ItemKeyBlack {
		keyid = 11623;
	};
	class ItemKeyBlack1624: ItemKeyBlack {
		keyid = 11624;
	};
	class ItemKeyBlack1625: ItemKeyBlack {
		keyid = 11625;
	};
	class ItemKeyBlack1626: ItemKeyBlack {
		keyid = 11626;
	};
	class ItemKeyBlack1627: ItemKeyBlack {
		keyid = 11627;
	};
	class ItemKeyBlack1628: ItemKeyBlack {
		keyid = 11628;
	};
	class ItemKeyBlack1629: ItemKeyBlack {
		keyid = 11629;
	};
	class ItemKeyBlack1630: ItemKeyBlack {
		keyid = 11630;
	};
	class ItemKeyBlack1631: ItemKeyBlack {
		keyid = 11631;
	};
	class ItemKeyBlack1632: ItemKeyBlack {
		keyid = 11632;
	};
	class ItemKeyBlack1633: ItemKeyBlack {
		keyid = 11633;
	};
	class ItemKeyBlack1634: ItemKeyBlack {
		keyid = 11634;
	};
	class ItemKeyBlack1635: ItemKeyBlack {
		keyid = 11635;
	};
	class ItemKeyBlack1636: ItemKeyBlack {
		keyid = 11636;
	};
	class ItemKeyBlack1637: ItemKeyBlack {
		keyid = 11637;
	};
	class ItemKeyBlack1638: ItemKeyBlack {
		keyid = 11638;
	};
	class ItemKeyBlack1639: ItemKeyBlack {
		keyid = 11639;
	};
	class ItemKeyBlack1640: ItemKeyBlack {
		keyid = 11640;
	};
	class ItemKeyBlack1641: ItemKeyBlack {
		keyid = 11641;
	};
	class ItemKeyBlack1642: ItemKeyBlack {
		keyid = 11642;
	};
	class ItemKeyBlack1643: ItemKeyBlack {
		keyid = 11643;
	};
	class ItemKeyBlack1644: ItemKeyBlack {
		keyid = 11644;
	};
	class ItemKeyBlack1645: ItemKeyBlack {
		keyid = 11645;
	};
	class ItemKeyBlack1646: ItemKeyBlack {
		keyid = 11646;
	};
	class ItemKeyBlack1647: ItemKeyBlack {
		keyid = 11647;
	};
	class ItemKeyBlack1648: ItemKeyBlack {
		keyid = 11648;
	};
	class ItemKeyBlack1649: ItemKeyBlack {
		keyid = 11649;
	};
	class ItemKeyBlack1650: ItemKeyBlack {
		keyid = 11650;
	};
	class ItemKeyBlack1651: ItemKeyBlack {
		keyid = 11651;
	};
	class ItemKeyBlack1652: ItemKeyBlack {
		keyid = 11652;
	};
	class ItemKeyBlack1653: ItemKeyBlack {
		keyid = 11653;
	};
	class ItemKeyBlack1654: ItemKeyBlack {
		keyid = 11654;
	};
	class ItemKeyBlack1655: ItemKeyBlack {
		keyid = 11655;
	};
	class ItemKeyBlack1656: ItemKeyBlack {
		keyid = 11656;
	};
	class ItemKeyBlack1657: ItemKeyBlack {
		keyid = 11657;
	};
	class ItemKeyBlack1658: ItemKeyBlack {
		keyid = 11658;
	};
	class ItemKeyBlack1659: ItemKeyBlack {
		keyid = 11659;
	};
	class ItemKeyBlack1660: ItemKeyBlack {
		keyid = 11660;
	};
	class ItemKeyBlack1661: ItemKeyBlack {
		keyid = 11661;
	};
	class ItemKeyBlack1662: ItemKeyBlack {
		keyid = 11662;
	};
	class ItemKeyBlack1663: ItemKeyBlack {
		keyid = 11663;
	};
	class ItemKeyBlack1664: ItemKeyBlack {
		keyid = 11664;
	};
	class ItemKeyBlack1665: ItemKeyBlack {
		keyid = 11665;
	};
	class ItemKeyBlack1666: ItemKeyBlack {
		keyid = 11666;
	};
	class ItemKeyBlack1667: ItemKeyBlack {
		keyid = 11667;
	};
	class ItemKeyBlack1668: ItemKeyBlack {
		keyid = 11668;
	};
	class ItemKeyBlack1669: ItemKeyBlack {
		keyid = 11669;
	};
	class ItemKeyBlack1670: ItemKeyBlack {
		keyid = 11670;
	};
	class ItemKeyBlack1671: ItemKeyBlack {
		keyid = 11671;
	};
	class ItemKeyBlack1672: ItemKeyBlack {
		keyid = 11672;
	};
	class ItemKeyBlack1673: ItemKeyBlack {
		keyid = 11673;
	};
	class ItemKeyBlack1674: ItemKeyBlack {
		keyid = 11674;
	};
	class ItemKeyBlack1675: ItemKeyBlack {
		keyid = 11675;
	};
	class ItemKeyBlack1676: ItemKeyBlack {
		keyid = 11676;
	};
	class ItemKeyBlack1677: ItemKeyBlack {
		keyid = 11677;
	};
	class ItemKeyBlack1678: ItemKeyBlack {
		keyid = 11678;
	};
	class ItemKeyBlack1679: ItemKeyBlack {
		keyid = 11679;
	};
	class ItemKeyBlack1680: ItemKeyBlack {
		keyid = 11680;
	};
	class ItemKeyBlack1681: ItemKeyBlack {
		keyid = 11681;
	};
	class ItemKeyBlack1682: ItemKeyBlack {
		keyid = 11682;
	};
	class ItemKeyBlack1683: ItemKeyBlack {
		keyid = 11683;
	};
	class ItemKeyBlack1684: ItemKeyBlack {
		keyid = 11684;
	};
	class ItemKeyBlack1685: ItemKeyBlack {
		keyid = 11685;
	};
	class ItemKeyBlack1686: ItemKeyBlack {
		keyid = 11686;
	};
	class ItemKeyBlack1687: ItemKeyBlack {
		keyid = 11687;
	};
	class ItemKeyBlack1688: ItemKeyBlack {
		keyid = 11688;
	};
	class ItemKeyBlack1689: ItemKeyBlack {
		keyid = 11689;
	};
	class ItemKeyBlack1690: ItemKeyBlack {
		keyid = 11690;
	};
	class ItemKeyBlack1691: ItemKeyBlack {
		keyid = 11691;
	};
	class ItemKeyBlack1692: ItemKeyBlack {
		keyid = 11692;
	};
	class ItemKeyBlack1693: ItemKeyBlack {
		keyid = 11693;
	};
	class ItemKeyBlack1694: ItemKeyBlack {
		keyid = 11694;
	};
	class ItemKeyBlack1695: ItemKeyBlack {
		keyid = 11695;
	};
	class ItemKeyBlack1696: ItemKeyBlack {
		keyid = 11696;
	};
	class ItemKeyBlack1697: ItemKeyBlack {
		keyid = 11697;
	};
	class ItemKeyBlack1698: ItemKeyBlack {
		keyid = 11698;
	};
	class ItemKeyBlack1699: ItemKeyBlack {
		keyid = 11699;
	};
	class ItemKeyBlack1700: ItemKeyBlack {
		keyid = 11700;
	};
	class ItemKeyBlack1701: ItemKeyBlack {
		keyid = 11701;
	};
	class ItemKeyBlack1702: ItemKeyBlack {
		keyid = 11702;
	};
	class ItemKeyBlack1703: ItemKeyBlack {
		keyid = 11703;
	};
	class ItemKeyBlack1704: ItemKeyBlack {
		keyid = 11704;
	};
	class ItemKeyBlack1705: ItemKeyBlack {
		keyid = 11705;
	};
	class ItemKeyBlack1706: ItemKeyBlack {
		keyid = 11706;
	};
	class ItemKeyBlack1707: ItemKeyBlack {
		keyid = 11707;
	};
	class ItemKeyBlack1708: ItemKeyBlack {
		keyid = 11708;
	};
	class ItemKeyBlack1709: ItemKeyBlack {
		keyid = 11709;
	};
	class ItemKeyBlack1710: ItemKeyBlack {
		keyid = 11710;
	};
	class ItemKeyBlack1711: ItemKeyBlack {
		keyid = 11711;
	};
	class ItemKeyBlack1712: ItemKeyBlack {
		keyid = 11712;
	};
	class ItemKeyBlack1713: ItemKeyBlack {
		keyid = 11713;
	};
	class ItemKeyBlack1714: ItemKeyBlack {
		keyid = 11714;
	};
	class ItemKeyBlack1715: ItemKeyBlack {
		keyid = 11715;
	};
	class ItemKeyBlack1716: ItemKeyBlack {
		keyid = 11716;
	};
	class ItemKeyBlack1717: ItemKeyBlack {
		keyid = 11717;
	};
	class ItemKeyBlack1718: ItemKeyBlack {
		keyid = 11718;
	};
	class ItemKeyBlack1719: ItemKeyBlack {
		keyid = 11719;
	};
	class ItemKeyBlack1720: ItemKeyBlack {
		keyid = 11720;
	};
	class ItemKeyBlack1721: ItemKeyBlack {
		keyid = 11721;
	};
	class ItemKeyBlack1722: ItemKeyBlack {
		keyid = 11722;
	};
	class ItemKeyBlack1723: ItemKeyBlack {
		keyid = 11723;
	};
	class ItemKeyBlack1724: ItemKeyBlack {
		keyid = 11724;
	};
	class ItemKeyBlack1725: ItemKeyBlack {
		keyid = 11725;
	};
	class ItemKeyBlack1726: ItemKeyBlack {
		keyid = 11726;
	};
	class ItemKeyBlack1727: ItemKeyBlack {
		keyid = 11727;
	};
	class ItemKeyBlack1728: ItemKeyBlack {
		keyid = 11728;
	};
	class ItemKeyBlack1729: ItemKeyBlack {
		keyid = 11729;
	};
	class ItemKeyBlack1730: ItemKeyBlack {
		keyid = 11730;
	};
	class ItemKeyBlack1731: ItemKeyBlack {
		keyid = 11731;
	};
	class ItemKeyBlack1732: ItemKeyBlack {
		keyid = 11732;
	};
	class ItemKeyBlack1733: ItemKeyBlack {
		keyid = 11733;
	};
	class ItemKeyBlack1734: ItemKeyBlack {
		keyid = 11734;
	};
	class ItemKeyBlack1735: ItemKeyBlack {
		keyid = 11735;
	};
	class ItemKeyBlack1736: ItemKeyBlack {
		keyid = 11736;
	};
	class ItemKeyBlack1737: ItemKeyBlack {
		keyid = 11737;
	};
	class ItemKeyBlack1738: ItemKeyBlack {
		keyid = 11738;
	};
	class ItemKeyBlack1739: ItemKeyBlack {
		keyid = 11739;
	};
	class ItemKeyBlack1740: ItemKeyBlack {
		keyid = 11740;
	};
	class ItemKeyBlack1741: ItemKeyBlack {
		keyid = 11741;
	};
	class ItemKeyBlack1742: ItemKeyBlack {
		keyid = 11742;
	};
	class ItemKeyBlack1743: ItemKeyBlack {
		keyid = 11743;
	};
	class ItemKeyBlack1744: ItemKeyBlack {
		keyid = 11744;
	};
	class ItemKeyBlack1745: ItemKeyBlack {
		keyid = 11745;
	};
	class ItemKeyBlack1746: ItemKeyBlack {
		keyid = 11746;
	};
	class ItemKeyBlack1747: ItemKeyBlack {
		keyid = 11747;
	};
	class ItemKeyBlack1748: ItemKeyBlack {
		keyid = 11748;
	};
	class ItemKeyBlack1749: ItemKeyBlack {
		keyid = 11749;
	};
	class ItemKeyBlack1750: ItemKeyBlack {
		keyid = 11750;
	};
	class ItemKeyBlack1751: ItemKeyBlack {
		keyid = 11751;
	};
	class ItemKeyBlack1752: ItemKeyBlack {
		keyid = 11752;
	};
	class ItemKeyBlack1753: ItemKeyBlack {
		keyid = 11753;
	};
	class ItemKeyBlack1754: ItemKeyBlack {
		keyid = 11754;
	};
	class ItemKeyBlack1755: ItemKeyBlack {
		keyid = 11755;
	};
	class ItemKeyBlack1756: ItemKeyBlack {
		keyid = 11756;
	};
	class ItemKeyBlack1757: ItemKeyBlack {
		keyid = 11757;
	};
	class ItemKeyBlack1758: ItemKeyBlack {
		keyid = 11758;
	};
	class ItemKeyBlack1759: ItemKeyBlack {
		keyid = 11759;
	};
	class ItemKeyBlack1760: ItemKeyBlack {
		keyid = 11760;
	};
	class ItemKeyBlack1761: ItemKeyBlack {
		keyid = 11761;
	};
	class ItemKeyBlack1762: ItemKeyBlack {
		keyid = 11762;
	};
	class ItemKeyBlack1763: ItemKeyBlack {
		keyid = 11763;
	};
	class ItemKeyBlack1764: ItemKeyBlack {
		keyid = 11764;
	};
	class ItemKeyBlack1765: ItemKeyBlack {
		keyid = 11765;
	};
	class ItemKeyBlack1766: ItemKeyBlack {
		keyid = 11766;
	};
	class ItemKeyBlack1767: ItemKeyBlack {
		keyid = 11767;
	};
	class ItemKeyBlack1768: ItemKeyBlack {
		keyid = 11768;
	};
	class ItemKeyBlack1769: ItemKeyBlack {
		keyid = 11769;
	};
	class ItemKeyBlack1770: ItemKeyBlack {
		keyid = 11770;
	};
	class ItemKeyBlack1771: ItemKeyBlack {
		keyid = 11771;
	};
	class ItemKeyBlack1772: ItemKeyBlack {
		keyid = 11772;
	};
	class ItemKeyBlack1773: ItemKeyBlack {
		keyid = 11773;
	};
	class ItemKeyBlack1774: ItemKeyBlack {
		keyid = 11774;
	};
	class ItemKeyBlack1775: ItemKeyBlack {
		keyid = 11775;
	};
	class ItemKeyBlack1776: ItemKeyBlack {
		keyid = 11776;
	};
	class ItemKeyBlack1777: ItemKeyBlack {
		keyid = 11777;
	};
	class ItemKeyBlack1778: ItemKeyBlack {
		keyid = 11778;
	};
	class ItemKeyBlack1779: ItemKeyBlack {
		keyid = 11779;
	};
	class ItemKeyBlack1780: ItemKeyBlack {
		keyid = 11780;
	};
	class ItemKeyBlack1781: ItemKeyBlack {
		keyid = 11781;
	};
	class ItemKeyBlack1782: ItemKeyBlack {
		keyid = 11782;
	};
	class ItemKeyBlack1783: ItemKeyBlack {
		keyid = 11783;
	};
	class ItemKeyBlack1784: ItemKeyBlack {
		keyid = 11784;
	};
	class ItemKeyBlack1785: ItemKeyBlack {
		keyid = 11785;
	};
	class ItemKeyBlack1786: ItemKeyBlack {
		keyid = 11786;
	};
	class ItemKeyBlack1787: ItemKeyBlack {
		keyid = 11787;
	};
	class ItemKeyBlack1788: ItemKeyBlack {
		keyid = 11788;
	};
	class ItemKeyBlack1789: ItemKeyBlack {
		keyid = 11789;
	};
	class ItemKeyBlack1790: ItemKeyBlack {
		keyid = 11790;
	};
	class ItemKeyBlack1791: ItemKeyBlack {
		keyid = 11791;
	};
	class ItemKeyBlack1792: ItemKeyBlack {
		keyid = 11792;
	};
	class ItemKeyBlack1793: ItemKeyBlack {
		keyid = 11793;
	};
	class ItemKeyBlack1794: ItemKeyBlack {
		keyid = 11794;
	};
	class ItemKeyBlack1795: ItemKeyBlack {
		keyid = 11795;
	};
	class ItemKeyBlack1796: ItemKeyBlack {
		keyid = 11796;
	};
	class ItemKeyBlack1797: ItemKeyBlack {
		keyid = 11797;
	};
	class ItemKeyBlack1798: ItemKeyBlack {
		keyid = 11798;
	};
	class ItemKeyBlack1799: ItemKeyBlack {
		keyid = 11799;
	};
	class ItemKeyBlack1800: ItemKeyBlack {
		keyid = 11800;
	};
	class ItemKeyBlack1801: ItemKeyBlack {
		keyid = 11801;
	};
	class ItemKeyBlack1802: ItemKeyBlack {
		keyid = 11802;
	};
	class ItemKeyBlack1803: ItemKeyBlack {
		keyid = 11803;
	};
	class ItemKeyBlack1804: ItemKeyBlack {
		keyid = 11804;
	};
	class ItemKeyBlack1805: ItemKeyBlack {
		keyid = 11805;
	};
	class ItemKeyBlack1806: ItemKeyBlack {
		keyid = 11806;
	};
	class ItemKeyBlack1807: ItemKeyBlack {
		keyid = 11807;
	};
	class ItemKeyBlack1808: ItemKeyBlack {
		keyid = 11808;
	};
	class ItemKeyBlack1809: ItemKeyBlack {
		keyid = 11809;
	};
	class ItemKeyBlack1810: ItemKeyBlack {
		keyid = 11810;
	};
	class ItemKeyBlack1811: ItemKeyBlack {
		keyid = 11811;
	};
	class ItemKeyBlack1812: ItemKeyBlack {
		keyid = 11812;
	};
	class ItemKeyBlack1813: ItemKeyBlack {
		keyid = 11813;
	};
	class ItemKeyBlack1814: ItemKeyBlack {
		keyid = 11814;
	};
	class ItemKeyBlack1815: ItemKeyBlack {
		keyid = 11815;
	};
	class ItemKeyBlack1816: ItemKeyBlack {
		keyid = 11816;
	};
	class ItemKeyBlack1817: ItemKeyBlack {
		keyid = 11817;
	};
	class ItemKeyBlack1818: ItemKeyBlack {
		keyid = 11818;
	};
	class ItemKeyBlack1819: ItemKeyBlack {
		keyid = 11819;
	};
	class ItemKeyBlack1820: ItemKeyBlack {
		keyid = 11820;
	};
	class ItemKeyBlack1821: ItemKeyBlack {
		keyid = 11821;
	};
	class ItemKeyBlack1822: ItemKeyBlack {
		keyid = 11822;
	};
	class ItemKeyBlack1823: ItemKeyBlack {
		keyid = 11823;
	};
	class ItemKeyBlack1824: ItemKeyBlack {
		keyid = 11824;
	};
	class ItemKeyBlack1825: ItemKeyBlack {
		keyid = 11825;
	};
	class ItemKeyBlack1826: ItemKeyBlack {
		keyid = 11826;
	};
	class ItemKeyBlack1827: ItemKeyBlack {
		keyid = 11827;
	};
	class ItemKeyBlack1828: ItemKeyBlack {
		keyid = 11828;
	};
	class ItemKeyBlack1829: ItemKeyBlack {
		keyid = 11829;
	};
	class ItemKeyBlack1830: ItemKeyBlack {
		keyid = 11830;
	};
	class ItemKeyBlack1831: ItemKeyBlack {
		keyid = 11831;
	};
	class ItemKeyBlack1832: ItemKeyBlack {
		keyid = 11832;
	};
	class ItemKeyBlack1833: ItemKeyBlack {
		keyid = 11833;
	};
	class ItemKeyBlack1834: ItemKeyBlack {
		keyid = 11834;
	};
	class ItemKeyBlack1835: ItemKeyBlack {
		keyid = 11835;
	};
	class ItemKeyBlack1836: ItemKeyBlack {
		keyid = 11836;
	};
	class ItemKeyBlack1837: ItemKeyBlack {
		keyid = 11837;
	};
	class ItemKeyBlack1838: ItemKeyBlack {
		keyid = 11838;
	};
	class ItemKeyBlack1839: ItemKeyBlack {
		keyid = 11839;
	};
	class ItemKeyBlack1840: ItemKeyBlack {
		keyid = 11840;
	};
	class ItemKeyBlack1841: ItemKeyBlack {
		keyid = 11841;
	};
	class ItemKeyBlack1842: ItemKeyBlack {
		keyid = 11842;
	};
	class ItemKeyBlack1843: ItemKeyBlack {
		keyid = 11843;
	};
	class ItemKeyBlack1844: ItemKeyBlack {
		keyid = 11844;
	};
	class ItemKeyBlack1845: ItemKeyBlack {
		keyid = 11845;
	};
	class ItemKeyBlack1846: ItemKeyBlack {
		keyid = 11846;
	};
	class ItemKeyBlack1847: ItemKeyBlack {
		keyid = 11847;
	};
	class ItemKeyBlack1848: ItemKeyBlack {
		keyid = 11848;
	};
	class ItemKeyBlack1849: ItemKeyBlack {
		keyid = 11849;
	};
	class ItemKeyBlack1850: ItemKeyBlack {
		keyid = 11850;
	};
	class ItemKeyBlack1851: ItemKeyBlack {
		keyid = 11851;
	};
	class ItemKeyBlack1852: ItemKeyBlack {
		keyid = 11852;
	};
	class ItemKeyBlack1853: ItemKeyBlack {
		keyid = 11853;
	};
	class ItemKeyBlack1854: ItemKeyBlack {
		keyid = 11854;
	};
	class ItemKeyBlack1855: ItemKeyBlack {
		keyid = 11855;
	};
	class ItemKeyBlack1856: ItemKeyBlack {
		keyid = 11856;
	};
	class ItemKeyBlack1857: ItemKeyBlack {
		keyid = 11857;
	};
	class ItemKeyBlack1858: ItemKeyBlack {
		keyid = 11858;
	};
	class ItemKeyBlack1859: ItemKeyBlack {
		keyid = 11859;
	};
	class ItemKeyBlack1860: ItemKeyBlack {
		keyid = 11860;
	};
	class ItemKeyBlack1861: ItemKeyBlack {
		keyid = 11861;
	};
	class ItemKeyBlack1862: ItemKeyBlack {
		keyid = 11862;
	};
	class ItemKeyBlack1863: ItemKeyBlack {
		keyid = 11863;
	};
	class ItemKeyBlack1864: ItemKeyBlack {
		keyid = 11864;
	};
	class ItemKeyBlack1865: ItemKeyBlack {
		keyid = 11865;
	};
	class ItemKeyBlack1866: ItemKeyBlack {
		keyid = 11866;
	};
	class ItemKeyBlack1867: ItemKeyBlack {
		keyid = 11867;
	};
	class ItemKeyBlack1868: ItemKeyBlack {
		keyid = 11868;
	};
	class ItemKeyBlack1869: ItemKeyBlack {
		keyid = 11869;
	};
	class ItemKeyBlack1870: ItemKeyBlack {
		keyid = 11870;
	};
	class ItemKeyBlack1871: ItemKeyBlack {
		keyid = 11871;
	};
	class ItemKeyBlack1872: ItemKeyBlack {
		keyid = 11872;
	};
	class ItemKeyBlack1873: ItemKeyBlack {
		keyid = 11873;
	};
	class ItemKeyBlack1874: ItemKeyBlack {
		keyid = 11874;
	};
	class ItemKeyBlack1875: ItemKeyBlack {
		keyid = 11875;
	};
	class ItemKeyBlack1876: ItemKeyBlack {
		keyid = 11876;
	};
	class ItemKeyBlack1877: ItemKeyBlack {
		keyid = 11877;
	};
	class ItemKeyBlack1878: ItemKeyBlack {
		keyid = 11878;
	};
	class ItemKeyBlack1879: ItemKeyBlack {
		keyid = 11879;
	};
	class ItemKeyBlack1880: ItemKeyBlack {
		keyid = 11880;
	};
	class ItemKeyBlack1881: ItemKeyBlack {
		keyid = 11881;
	};
	class ItemKeyBlack1882: ItemKeyBlack {
		keyid = 11882;
	};
	class ItemKeyBlack1883: ItemKeyBlack {
		keyid = 11883;
	};
	class ItemKeyBlack1884: ItemKeyBlack {
		keyid = 11884;
	};
	class ItemKeyBlack1885: ItemKeyBlack {
		keyid = 11885;
	};
	class ItemKeyBlack1886: ItemKeyBlack {
		keyid = 11886;
	};
	class ItemKeyBlack1887: ItemKeyBlack {
		keyid = 11887;
	};
	class ItemKeyBlack1888: ItemKeyBlack {
		keyid = 11888;
	};
	class ItemKeyBlack1889: ItemKeyBlack {
		keyid = 11889;
	};
	class ItemKeyBlack1890: ItemKeyBlack {
		keyid = 11890;
	};
	class ItemKeyBlack1891: ItemKeyBlack {
		keyid = 11891;
	};
	class ItemKeyBlack1892: ItemKeyBlack {
		keyid = 11892;
	};
	class ItemKeyBlack1893: ItemKeyBlack {
		keyid = 11893;
	};
	class ItemKeyBlack1894: ItemKeyBlack {
		keyid = 11894;
	};
	class ItemKeyBlack1895: ItemKeyBlack {
		keyid = 11895;
	};
	class ItemKeyBlack1896: ItemKeyBlack {
		keyid = 11896;
	};
	class ItemKeyBlack1897: ItemKeyBlack {
		keyid = 11897;
	};
	class ItemKeyBlack1898: ItemKeyBlack {
		keyid = 11898;
	};
	class ItemKeyBlack1899: ItemKeyBlack {
		keyid = 11899;
	};
	class ItemKeyBlack1900: ItemKeyBlack {
		keyid = 11900;
	};
	class ItemKeyBlack1901: ItemKeyBlack {
		keyid = 11901;
	};
	class ItemKeyBlack1902: ItemKeyBlack {
		keyid = 11902;
	};
	class ItemKeyBlack1903: ItemKeyBlack {
		keyid = 11903;
	};
	class ItemKeyBlack1904: ItemKeyBlack {
		keyid = 11904;
	};
	class ItemKeyBlack1905: ItemKeyBlack {
		keyid = 11905;
	};
	class ItemKeyBlack1906: ItemKeyBlack {
		keyid = 11906;
	};
	class ItemKeyBlack1907: ItemKeyBlack {
		keyid = 11907;
	};
	class ItemKeyBlack1908: ItemKeyBlack {
		keyid = 11908;
	};
	class ItemKeyBlack1909: ItemKeyBlack {
		keyid = 11909;
	};
	class ItemKeyBlack1910: ItemKeyBlack {
		keyid = 11910;
	};
	class ItemKeyBlack1911: ItemKeyBlack {
		keyid = 11911;
	};
	class ItemKeyBlack1912: ItemKeyBlack {
		keyid = 11912;
	};
	class ItemKeyBlack1913: ItemKeyBlack {
		keyid = 11913;
	};
	class ItemKeyBlack1914: ItemKeyBlack {
		keyid = 11914;
	};
	class ItemKeyBlack1915: ItemKeyBlack {
		keyid = 11915;
	};
	class ItemKeyBlack1916: ItemKeyBlack {
		keyid = 11916;
	};
	class ItemKeyBlack1917: ItemKeyBlack {
		keyid = 11917;
	};
	class ItemKeyBlack1918: ItemKeyBlack {
		keyid = 11918;
	};
	class ItemKeyBlack1919: ItemKeyBlack {
		keyid = 11919;
	};
	class ItemKeyBlack1920: ItemKeyBlack {
		keyid = 11920;
	};
	class ItemKeyBlack1921: ItemKeyBlack {
		keyid = 11921;
	};
	class ItemKeyBlack1922: ItemKeyBlack {
		keyid = 11922;
	};
	class ItemKeyBlack1923: ItemKeyBlack {
		keyid = 11923;
	};
	class ItemKeyBlack1924: ItemKeyBlack {
		keyid = 11924;
	};
	class ItemKeyBlack1925: ItemKeyBlack {
		keyid = 11925;
	};
	class ItemKeyBlack1926: ItemKeyBlack {
		keyid = 11926;
	};
	class ItemKeyBlack1927: ItemKeyBlack {
		keyid = 11927;
	};
	class ItemKeyBlack1928: ItemKeyBlack {
		keyid = 11928;
	};
	class ItemKeyBlack1929: ItemKeyBlack {
		keyid = 11929;
	};
	class ItemKeyBlack1930: ItemKeyBlack {
		keyid = 11930;
	};
	class ItemKeyBlack1931: ItemKeyBlack {
		keyid = 11931;
	};
	class ItemKeyBlack1932: ItemKeyBlack {
		keyid = 11932;
	};
	class ItemKeyBlack1933: ItemKeyBlack {
		keyid = 11933;
	};
	class ItemKeyBlack1934: ItemKeyBlack {
		keyid = 11934;
	};
	class ItemKeyBlack1935: ItemKeyBlack {
		keyid = 11935;
	};
	class ItemKeyBlack1936: ItemKeyBlack {
		keyid = 11936;
	};
	class ItemKeyBlack1937: ItemKeyBlack {
		keyid = 11937;
	};
	class ItemKeyBlack1938: ItemKeyBlack {
		keyid = 11938;
	};
	class ItemKeyBlack1939: ItemKeyBlack {
		keyid = 11939;
	};
	class ItemKeyBlack1940: ItemKeyBlack {
		keyid = 11940;
	};
	class ItemKeyBlack1941: ItemKeyBlack {
		keyid = 11941;
	};
	class ItemKeyBlack1942: ItemKeyBlack {
		keyid = 11942;
	};
	class ItemKeyBlack1943: ItemKeyBlack {
		keyid = 11943;
	};
	class ItemKeyBlack1944: ItemKeyBlack {
		keyid = 11944;
	};
	class ItemKeyBlack1945: ItemKeyBlack {
		keyid = 11945;
	};
	class ItemKeyBlack1946: ItemKeyBlack {
		keyid = 11946;
	};
	class ItemKeyBlack1947: ItemKeyBlack {
		keyid = 11947;
	};
	class ItemKeyBlack1948: ItemKeyBlack {
		keyid = 11948;
	};
	class ItemKeyBlack1949: ItemKeyBlack {
		keyid = 11949;
	};
	class ItemKeyBlack1950: ItemKeyBlack {
		keyid = 11950;
	};
	class ItemKeyBlack1951: ItemKeyBlack {
		keyid = 11951;
	};
	class ItemKeyBlack1952: ItemKeyBlack {
		keyid = 11952;
	};
	class ItemKeyBlack1953: ItemKeyBlack {
		keyid = 11953;
	};
	class ItemKeyBlack1954: ItemKeyBlack {
		keyid = 11954;
	};
	class ItemKeyBlack1955: ItemKeyBlack {
		keyid = 11955;
	};
	class ItemKeyBlack1956: ItemKeyBlack {
		keyid = 11956;
	};
	class ItemKeyBlack1957: ItemKeyBlack {
		keyid = 11957;
	};
	class ItemKeyBlack1958: ItemKeyBlack {
		keyid = 11958;
	};
	class ItemKeyBlack1959: ItemKeyBlack {
		keyid = 11959;
	};
	class ItemKeyBlack1960: ItemKeyBlack {
		keyid = 11960;
	};
	class ItemKeyBlack1961: ItemKeyBlack {
		keyid = 11961;
	};
	class ItemKeyBlack1962: ItemKeyBlack {
		keyid = 11962;
	};
	class ItemKeyBlack1963: ItemKeyBlack {
		keyid = 11963;
	};
	class ItemKeyBlack1964: ItemKeyBlack {
		keyid = 11964;
	};
	class ItemKeyBlack1965: ItemKeyBlack {
		keyid = 11965;
	};
	class ItemKeyBlack1966: ItemKeyBlack {
		keyid = 11966;
	};
	class ItemKeyBlack1967: ItemKeyBlack {
		keyid = 11967;
	};
	class ItemKeyBlack1968: ItemKeyBlack {
		keyid = 11968;
	};
	class ItemKeyBlack1969: ItemKeyBlack {
		keyid = 11969;
	};
	class ItemKeyBlack1970: ItemKeyBlack {
		keyid = 11970;
	};
	class ItemKeyBlack1971: ItemKeyBlack {
		keyid = 11971;
	};
	class ItemKeyBlack1972: ItemKeyBlack {
		keyid = 11972;
	};
	class ItemKeyBlack1973: ItemKeyBlack {
		keyid = 11973;
	};
	class ItemKeyBlack1974: ItemKeyBlack {
		keyid = 11974;
	};
	class ItemKeyBlack1975: ItemKeyBlack {
		keyid = 11975;
	};
	class ItemKeyBlack1976: ItemKeyBlack {
		keyid = 11976;
	};
	class ItemKeyBlack1977: ItemKeyBlack {
		keyid = 11977;
	};
	class ItemKeyBlack1978: ItemKeyBlack {
		keyid = 11978;
	};
	class ItemKeyBlack1979: ItemKeyBlack {
		keyid = 11979;
	};
	class ItemKeyBlack1980: ItemKeyBlack {
		keyid = 11980;
	};
	class ItemKeyBlack1981: ItemKeyBlack {
		keyid = 11981;
	};
	class ItemKeyBlack1982: ItemKeyBlack {
		keyid = 11982;
	};
	class ItemKeyBlack1983: ItemKeyBlack {
		keyid = 11983;
	};
	class ItemKeyBlack1984: ItemKeyBlack {
		keyid = 11984;
	};
	class ItemKeyBlack1985: ItemKeyBlack {
		keyid = 11985;
	};
	class ItemKeyBlack1986: ItemKeyBlack {
		keyid = 11986;
	};
	class ItemKeyBlack1987: ItemKeyBlack {
		keyid = 11987;
	};
	class ItemKeyBlack1988: ItemKeyBlack {
		keyid = 11988;
	};
	class ItemKeyBlack1989: ItemKeyBlack {
		keyid = 11989;
	};
	class ItemKeyBlack1990: ItemKeyBlack {
		keyid = 11990;
	};
	class ItemKeyBlack1991: ItemKeyBlack {
		keyid = 11991;
	};
	class ItemKeyBlack1992: ItemKeyBlack {
		keyid = 11992;
	};
	class ItemKeyBlack1993: ItemKeyBlack {
		keyid = 11993;
	};
	class ItemKeyBlack1994: ItemKeyBlack {
		keyid = 11994;
	};
	class ItemKeyBlack1995: ItemKeyBlack {
		keyid = 11995;
	};
	class ItemKeyBlack1996: ItemKeyBlack {
		keyid = 11996;
	};
	class ItemKeyBlack1997: ItemKeyBlack {
		keyid = 11997;
	};
	class ItemKeyBlack1998: ItemKeyBlack {
		keyid = 11998;
	};
	class ItemKeyBlack1999: ItemKeyBlack {
		keyid = 11999;
	};
	class ItemKeyBlack2000: ItemKeyBlack {
		keyid = 12000;
	};
	class ItemKeyBlack2001: ItemKeyBlack {
		keyid = 12001;
	};
	class ItemKeyBlack2002: ItemKeyBlack {
		keyid = 12002;
	};
	class ItemKeyBlack2003: ItemKeyBlack {
		keyid = 12003;
	};
	class ItemKeyBlack2004: ItemKeyBlack {
		keyid = 12004;
	};
	class ItemKeyBlack2005: ItemKeyBlack {
		keyid = 12005;
	};
	class ItemKeyBlack2006: ItemKeyBlack {
		keyid = 12006;
	};
	class ItemKeyBlack2007: ItemKeyBlack {
		keyid = 12007;
	};
	class ItemKeyBlack2008: ItemKeyBlack {
		keyid = 12008;
	};
	class ItemKeyBlack2009: ItemKeyBlack {
		keyid = 12009;
	};
	class ItemKeyBlack2010: ItemKeyBlack {
		keyid = 12010;
	};
	class ItemKeyBlack2011: ItemKeyBlack {
		keyid = 12011;
	};
	class ItemKeyBlack2012: ItemKeyBlack {
		keyid = 12012;
	};
	class ItemKeyBlack2013: ItemKeyBlack {
		keyid = 12013;
	};
	class ItemKeyBlack2014: ItemKeyBlack {
		keyid = 12014;
	};
	class ItemKeyBlack2015: ItemKeyBlack {
		keyid = 12015;
	};
	class ItemKeyBlack2016: ItemKeyBlack {
		keyid = 12016;
	};
	class ItemKeyBlack2017: ItemKeyBlack {
		keyid = 12017;
	};
	class ItemKeyBlack2018: ItemKeyBlack {
		keyid = 12018;
	};
	class ItemKeyBlack2019: ItemKeyBlack {
		keyid = 12019;
	};
	class ItemKeyBlack2020: ItemKeyBlack {
		keyid = 12020;
	};
	class ItemKeyBlack2021: ItemKeyBlack {
		keyid = 12021;
	};
	class ItemKeyBlack2022: ItemKeyBlack {
		keyid = 12022;
	};
	class ItemKeyBlack2023: ItemKeyBlack {
		keyid = 12023;
	};
	class ItemKeyBlack2024: ItemKeyBlack {
		keyid = 12024;
	};
	class ItemKeyBlack2025: ItemKeyBlack {
		keyid = 12025;
	};
	class ItemKeyBlack2026: ItemKeyBlack {
		keyid = 12026;
	};
	class ItemKeyBlack2027: ItemKeyBlack {
		keyid = 12027;
	};
	class ItemKeyBlack2028: ItemKeyBlack {
		keyid = 12028;
	};
	class ItemKeyBlack2029: ItemKeyBlack {
		keyid = 12029;
	};
	class ItemKeyBlack2030: ItemKeyBlack {
		keyid = 12030;
	};
	class ItemKeyBlack2031: ItemKeyBlack {
		keyid = 12031;
	};
	class ItemKeyBlack2032: ItemKeyBlack {
		keyid = 12032;
	};
	class ItemKeyBlack2033: ItemKeyBlack {
		keyid = 12033;
	};
	class ItemKeyBlack2034: ItemKeyBlack {
		keyid = 12034;
	};
	class ItemKeyBlack2035: ItemKeyBlack {
		keyid = 12035;
	};
	class ItemKeyBlack2036: ItemKeyBlack {
		keyid = 12036;
	};
	class ItemKeyBlack2037: ItemKeyBlack {
		keyid = 12037;
	};
	class ItemKeyBlack2038: ItemKeyBlack {
		keyid = 12038;
	};
	class ItemKeyBlack2039: ItemKeyBlack {
		keyid = 12039;
	};
	class ItemKeyBlack2040: ItemKeyBlack {
		keyid = 12040;
	};
	class ItemKeyBlack2041: ItemKeyBlack {
		keyid = 12041;
	};
	class ItemKeyBlack2042: ItemKeyBlack {
		keyid = 12042;
	};
	class ItemKeyBlack2043: ItemKeyBlack {
		keyid = 12043;
	};
	class ItemKeyBlack2044: ItemKeyBlack {
		keyid = 12044;
	};
	class ItemKeyBlack2045: ItemKeyBlack {
		keyid = 12045;
	};
	class ItemKeyBlack2046: ItemKeyBlack {
		keyid = 12046;
	};
	class ItemKeyBlack2047: ItemKeyBlack {
		keyid = 12047;
	};
	class ItemKeyBlack2048: ItemKeyBlack {
		keyid = 12048;
	};
	class ItemKeyBlack2049: ItemKeyBlack {
		keyid = 12049;
	};
	class ItemKeyBlack2050: ItemKeyBlack {
		keyid = 12050;
	};
	class ItemKeyBlack2051: ItemKeyBlack {
		keyid = 12051;
	};
	class ItemKeyBlack2052: ItemKeyBlack {
		keyid = 12052;
	};
	class ItemKeyBlack2053: ItemKeyBlack {
		keyid = 12053;
	};
	class ItemKeyBlack2054: ItemKeyBlack {
		keyid = 12054;
	};
	class ItemKeyBlack2055: ItemKeyBlack {
		keyid = 12055;
	};
	class ItemKeyBlack2056: ItemKeyBlack {
		keyid = 12056;
	};
	class ItemKeyBlack2057: ItemKeyBlack {
		keyid = 12057;
	};
	class ItemKeyBlack2058: ItemKeyBlack {
		keyid = 12058;
	};
	class ItemKeyBlack2059: ItemKeyBlack {
		keyid = 12059;
	};
	class ItemKeyBlack2060: ItemKeyBlack {
		keyid = 12060;
	};
	class ItemKeyBlack2061: ItemKeyBlack {
		keyid = 12061;
	};
	class ItemKeyBlack2062: ItemKeyBlack {
		keyid = 12062;
	};
	class ItemKeyBlack2063: ItemKeyBlack {
		keyid = 12063;
	};
	class ItemKeyBlack2064: ItemKeyBlack {
		keyid = 12064;
	};
	class ItemKeyBlack2065: ItemKeyBlack {
		keyid = 12065;
	};
	class ItemKeyBlack2066: ItemKeyBlack {
		keyid = 12066;
	};
	class ItemKeyBlack2067: ItemKeyBlack {
		keyid = 12067;
	};
	class ItemKeyBlack2068: ItemKeyBlack {
		keyid = 12068;
	};
	class ItemKeyBlack2069: ItemKeyBlack {
		keyid = 12069;
	};
	class ItemKeyBlack2070: ItemKeyBlack {
		keyid = 12070;
	};
	class ItemKeyBlack2071: ItemKeyBlack {
		keyid = 12071;
	};
	class ItemKeyBlack2072: ItemKeyBlack {
		keyid = 12072;
	};
	class ItemKeyBlack2073: ItemKeyBlack {
		keyid = 12073;
	};
	class ItemKeyBlack2074: ItemKeyBlack {
		keyid = 12074;
	};
	class ItemKeyBlack2075: ItemKeyBlack {
		keyid = 12075;
	};
	class ItemKeyBlack2076: ItemKeyBlack {
		keyid = 12076;
	};
	class ItemKeyBlack2077: ItemKeyBlack {
		keyid = 12077;
	};
	class ItemKeyBlack2078: ItemKeyBlack {
		keyid = 12078;
	};
	class ItemKeyBlack2079: ItemKeyBlack {
		keyid = 12079;
	};
	class ItemKeyBlack2080: ItemKeyBlack {
		keyid = 12080;
	};
	class ItemKeyBlack2081: ItemKeyBlack {
		keyid = 12081;
	};
	class ItemKeyBlack2082: ItemKeyBlack {
		keyid = 12082;
	};
	class ItemKeyBlack2083: ItemKeyBlack {
		keyid = 12083;
	};
	class ItemKeyBlack2084: ItemKeyBlack {
		keyid = 12084;
	};
	class ItemKeyBlack2085: ItemKeyBlack {
		keyid = 12085;
	};
	class ItemKeyBlack2086: ItemKeyBlack {
		keyid = 12086;
	};
	class ItemKeyBlack2087: ItemKeyBlack {
		keyid = 12087;
	};
	class ItemKeyBlack2088: ItemKeyBlack {
		keyid = 12088;
	};
	class ItemKeyBlack2089: ItemKeyBlack {
		keyid = 12089;
	};
	class ItemKeyBlack2090: ItemKeyBlack {
		keyid = 12090;
	};
	class ItemKeyBlack2091: ItemKeyBlack {
		keyid = 12091;
	};
	class ItemKeyBlack2092: ItemKeyBlack {
		keyid = 12092;
	};
	class ItemKeyBlack2093: ItemKeyBlack {
		keyid = 12093;
	};
	class ItemKeyBlack2094: ItemKeyBlack {
		keyid = 12094;
	};
	class ItemKeyBlack2095: ItemKeyBlack {
		keyid = 12095;
	};
	class ItemKeyBlack2096: ItemKeyBlack {
		keyid = 12096;
	};
	class ItemKeyBlack2097: ItemKeyBlack {
		keyid = 12097;
	};
	class ItemKeyBlack2098: ItemKeyBlack {
		keyid = 12098;
	};
	class ItemKeyBlack2099: ItemKeyBlack {
		keyid = 12099;
	};
	class ItemKeyBlack2100: ItemKeyBlack {
		keyid = 12100;
	};
	class ItemKeyBlack2101: ItemKeyBlack {
		keyid = 12101;
	};
	class ItemKeyBlack2102: ItemKeyBlack {
		keyid = 12102;
	};
	class ItemKeyBlack2103: ItemKeyBlack {
		keyid = 12103;
	};
	class ItemKeyBlack2104: ItemKeyBlack {
		keyid = 12104;
	};
	class ItemKeyBlack2105: ItemKeyBlack {
		keyid = 12105;
	};
	class ItemKeyBlack2106: ItemKeyBlack {
		keyid = 12106;
	};
	class ItemKeyBlack2107: ItemKeyBlack {
		keyid = 12107;
	};
	class ItemKeyBlack2108: ItemKeyBlack {
		keyid = 12108;
	};
	class ItemKeyBlack2109: ItemKeyBlack {
		keyid = 12109;
	};
	class ItemKeyBlack2110: ItemKeyBlack {
		keyid = 12110;
	};
	class ItemKeyBlack2111: ItemKeyBlack {
		keyid = 12111;
	};
	class ItemKeyBlack2112: ItemKeyBlack {
		keyid = 12112;
	};
	class ItemKeyBlack2113: ItemKeyBlack {
		keyid = 12113;
	};
	class ItemKeyBlack2114: ItemKeyBlack {
		keyid = 12114;
	};
	class ItemKeyBlack2115: ItemKeyBlack {
		keyid = 12115;
	};
	class ItemKeyBlack2116: ItemKeyBlack {
		keyid = 12116;
	};
	class ItemKeyBlack2117: ItemKeyBlack {
		keyid = 12117;
	};
	class ItemKeyBlack2118: ItemKeyBlack {
		keyid = 12118;
	};
	class ItemKeyBlack2119: ItemKeyBlack {
		keyid = 12119;
	};
	class ItemKeyBlack2120: ItemKeyBlack {
		keyid = 12120;
	};
	class ItemKeyBlack2121: ItemKeyBlack {
		keyid = 12121;
	};
	class ItemKeyBlack2122: ItemKeyBlack {
		keyid = 12122;
	};
	class ItemKeyBlack2123: ItemKeyBlack {
		keyid = 12123;
	};
	class ItemKeyBlack2124: ItemKeyBlack {
		keyid = 12124;
	};
	class ItemKeyBlack2125: ItemKeyBlack {
		keyid = 12125;
	};
	class ItemKeyBlack2126: ItemKeyBlack {
		keyid = 12126;
	};
	class ItemKeyBlack2127: ItemKeyBlack {
		keyid = 12127;
	};
	class ItemKeyBlack2128: ItemKeyBlack {
		keyid = 12128;
	};
	class ItemKeyBlack2129: ItemKeyBlack {
		keyid = 12129;
	};
	class ItemKeyBlack2130: ItemKeyBlack {
		keyid = 12130;
	};
	class ItemKeyBlack2131: ItemKeyBlack {
		keyid = 12131;
	};
	class ItemKeyBlack2132: ItemKeyBlack {
		keyid = 12132;
	};
	class ItemKeyBlack2133: ItemKeyBlack {
		keyid = 12133;
	};
	class ItemKeyBlack2134: ItemKeyBlack {
		keyid = 12134;
	};
	class ItemKeyBlack2135: ItemKeyBlack {
		keyid = 12135;
	};
	class ItemKeyBlack2136: ItemKeyBlack {
		keyid = 12136;
	};
	class ItemKeyBlack2137: ItemKeyBlack {
		keyid = 12137;
	};
	class ItemKeyBlack2138: ItemKeyBlack {
		keyid = 12138;
	};
	class ItemKeyBlack2139: ItemKeyBlack {
		keyid = 12139;
	};
	class ItemKeyBlack2140: ItemKeyBlack {
		keyid = 12140;
	};
	class ItemKeyBlack2141: ItemKeyBlack {
		keyid = 12141;
	};
	class ItemKeyBlack2142: ItemKeyBlack {
		keyid = 12142;
	};
	class ItemKeyBlack2143: ItemKeyBlack {
		keyid = 12143;
	};
	class ItemKeyBlack2144: ItemKeyBlack {
		keyid = 12144;
	};
	class ItemKeyBlack2145: ItemKeyBlack {
		keyid = 12145;
	};
	class ItemKeyBlack2146: ItemKeyBlack {
		keyid = 12146;
	};
	class ItemKeyBlack2147: ItemKeyBlack {
		keyid = 12147;
	};
	class ItemKeyBlack2148: ItemKeyBlack {
		keyid = 12148;
	};
	class ItemKeyBlack2149: ItemKeyBlack {
		keyid = 12149;
	};
	class ItemKeyBlack2150: ItemKeyBlack {
		keyid = 12150;
	};
	class ItemKeyBlack2151: ItemKeyBlack {
		keyid = 12151;
	};
	class ItemKeyBlack2152: ItemKeyBlack {
		keyid = 12152;
	};
	class ItemKeyBlack2153: ItemKeyBlack {
		keyid = 12153;
	};
	class ItemKeyBlack2154: ItemKeyBlack {
		keyid = 12154;
	};
	class ItemKeyBlack2155: ItemKeyBlack {
		keyid = 12155;
	};
	class ItemKeyBlack2156: ItemKeyBlack {
		keyid = 12156;
	};
	class ItemKeyBlack2157: ItemKeyBlack {
		keyid = 12157;
	};
	class ItemKeyBlack2158: ItemKeyBlack {
		keyid = 12158;
	};
	class ItemKeyBlack2159: ItemKeyBlack {
		keyid = 12159;
	};
	class ItemKeyBlack2160: ItemKeyBlack {
		keyid = 12160;
	};
	class ItemKeyBlack2161: ItemKeyBlack {
		keyid = 12161;
	};
	class ItemKeyBlack2162: ItemKeyBlack {
		keyid = 12162;
	};
	class ItemKeyBlack2163: ItemKeyBlack {
		keyid = 12163;
	};
	class ItemKeyBlack2164: ItemKeyBlack {
		keyid = 12164;
	};
	class ItemKeyBlack2165: ItemKeyBlack {
		keyid = 12165;
	};
	class ItemKeyBlack2166: ItemKeyBlack {
		keyid = 12166;
	};
	class ItemKeyBlack2167: ItemKeyBlack {
		keyid = 12167;
	};
	class ItemKeyBlack2168: ItemKeyBlack {
		keyid = 12168;
	};
	class ItemKeyBlack2169: ItemKeyBlack {
		keyid = 12169;
	};
	class ItemKeyBlack2170: ItemKeyBlack {
		keyid = 12170;
	};
	class ItemKeyBlack2171: ItemKeyBlack {
		keyid = 12171;
	};
	class ItemKeyBlack2172: ItemKeyBlack {
		keyid = 12172;
	};
	class ItemKeyBlack2173: ItemKeyBlack {
		keyid = 12173;
	};
	class ItemKeyBlack2174: ItemKeyBlack {
		keyid = 12174;
	};
	class ItemKeyBlack2175: ItemKeyBlack {
		keyid = 12175;
	};
	class ItemKeyBlack2176: ItemKeyBlack {
		keyid = 12176;
	};
	class ItemKeyBlack2177: ItemKeyBlack {
		keyid = 12177;
	};
	class ItemKeyBlack2178: ItemKeyBlack {
		keyid = 12178;
	};
	class ItemKeyBlack2179: ItemKeyBlack {
		keyid = 12179;
	};
	class ItemKeyBlack2180: ItemKeyBlack {
		keyid = 12180;
	};
	class ItemKeyBlack2181: ItemKeyBlack {
		keyid = 12181;
	};
	class ItemKeyBlack2182: ItemKeyBlack {
		keyid = 12182;
	};
	class ItemKeyBlack2183: ItemKeyBlack {
		keyid = 12183;
	};
	class ItemKeyBlack2184: ItemKeyBlack {
		keyid = 12184;
	};
	class ItemKeyBlack2185: ItemKeyBlack {
		keyid = 12185;
	};
	class ItemKeyBlack2186: ItemKeyBlack {
		keyid = 12186;
	};
	class ItemKeyBlack2187: ItemKeyBlack {
		keyid = 12187;
	};
	class ItemKeyBlack2188: ItemKeyBlack {
		keyid = 12188;
	};
	class ItemKeyBlack2189: ItemKeyBlack {
		keyid = 12189;
	};
	class ItemKeyBlack2190: ItemKeyBlack {
		keyid = 12190;
	};
	class ItemKeyBlack2191: ItemKeyBlack {
		keyid = 12191;
	};
	class ItemKeyBlack2192: ItemKeyBlack {
		keyid = 12192;
	};
	class ItemKeyBlack2193: ItemKeyBlack {
		keyid = 12193;
	};
	class ItemKeyBlack2194: ItemKeyBlack {
		keyid = 12194;
	};
	class ItemKeyBlack2195: ItemKeyBlack {
		keyid = 12195;
	};
	class ItemKeyBlack2196: ItemKeyBlack {
		keyid = 12196;
	};
	class ItemKeyBlack2197: ItemKeyBlack {
		keyid = 12197;
	};
	class ItemKeyBlack2198: ItemKeyBlack {
		keyid = 12198;
	};
	class ItemKeyBlack2199: ItemKeyBlack {
		keyid = 12199;
	};
	class ItemKeyBlack2200: ItemKeyBlack {
		keyid = 12200;
	};
	class ItemKeyBlack2201: ItemKeyBlack {
		keyid = 12201;
	};
	class ItemKeyBlack2202: ItemKeyBlack {
		keyid = 12202;
	};
	class ItemKeyBlack2203: ItemKeyBlack {
		keyid = 12203;
	};
	class ItemKeyBlack2204: ItemKeyBlack {
		keyid = 12204;
	};
	class ItemKeyBlack2205: ItemKeyBlack {
		keyid = 12205;
	};
	class ItemKeyBlack2206: ItemKeyBlack {
		keyid = 12206;
	};
	class ItemKeyBlack2207: ItemKeyBlack {
		keyid = 12207;
	};
	class ItemKeyBlack2208: ItemKeyBlack {
		keyid = 12208;
	};
	class ItemKeyBlack2209: ItemKeyBlack {
		keyid = 12209;
	};
	class ItemKeyBlack2210: ItemKeyBlack {
		keyid = 12210;
	};
	class ItemKeyBlack2211: ItemKeyBlack {
		keyid = 12211;
	};
	class ItemKeyBlack2212: ItemKeyBlack {
		keyid = 12212;
	};
	class ItemKeyBlack2213: ItemKeyBlack {
		keyid = 12213;
	};
	class ItemKeyBlack2214: ItemKeyBlack {
		keyid = 12214;
	};
	class ItemKeyBlack2215: ItemKeyBlack {
		keyid = 12215;
	};
	class ItemKeyBlack2216: ItemKeyBlack {
		keyid = 12216;
	};
	class ItemKeyBlack2217: ItemKeyBlack {
		keyid = 12217;
	};
	class ItemKeyBlack2218: ItemKeyBlack {
		keyid = 12218;
	};
	class ItemKeyBlack2219: ItemKeyBlack {
		keyid = 12219;
	};
	class ItemKeyBlack2220: ItemKeyBlack {
		keyid = 12220;
	};
	class ItemKeyBlack2221: ItemKeyBlack {
		keyid = 12221;
	};
	class ItemKeyBlack2222: ItemKeyBlack {
		keyid = 12222;
	};
	class ItemKeyBlack2223: ItemKeyBlack {
		keyid = 12223;
	};
	class ItemKeyBlack2224: ItemKeyBlack {
		keyid = 12224;
	};
	class ItemKeyBlack2225: ItemKeyBlack {
		keyid = 12225;
	};
	class ItemKeyBlack2226: ItemKeyBlack {
		keyid = 12226;
	};
	class ItemKeyBlack2227: ItemKeyBlack {
		keyid = 12227;
	};
	class ItemKeyBlack2228: ItemKeyBlack {
		keyid = 12228;
	};
	class ItemKeyBlack2229: ItemKeyBlack {
		keyid = 12229;
	};
	class ItemKeyBlack2230: ItemKeyBlack {
		keyid = 12230;
	};
	class ItemKeyBlack2231: ItemKeyBlack {
		keyid = 12231;
	};
	class ItemKeyBlack2232: ItemKeyBlack {
		keyid = 12232;
	};
	class ItemKeyBlack2233: ItemKeyBlack {
		keyid = 12233;
	};
	class ItemKeyBlack2234: ItemKeyBlack {
		keyid = 12234;
	};
	class ItemKeyBlack2235: ItemKeyBlack {
		keyid = 12235;
	};
	class ItemKeyBlack2236: ItemKeyBlack {
		keyid = 12236;
	};
	class ItemKeyBlack2237: ItemKeyBlack {
		keyid = 12237;
	};
	class ItemKeyBlack2238: ItemKeyBlack {
		keyid = 12238;
	};
	class ItemKeyBlack2239: ItemKeyBlack {
		keyid = 12239;
	};
	class ItemKeyBlack2240: ItemKeyBlack {
		keyid = 12240;
	};
	class ItemKeyBlack2241: ItemKeyBlack {
		keyid = 12241;
	};
	class ItemKeyBlack2242: ItemKeyBlack {
		keyid = 12242;
	};
	class ItemKeyBlack2243: ItemKeyBlack {
		keyid = 12243;
	};
	class ItemKeyBlack2244: ItemKeyBlack {
		keyid = 12244;
	};
	class ItemKeyBlack2245: ItemKeyBlack {
		keyid = 12245;
	};
	class ItemKeyBlack2246: ItemKeyBlack {
		keyid = 12246;
	};
	class ItemKeyBlack2247: ItemKeyBlack {
		keyid = 12247;
	};
	class ItemKeyBlack2248: ItemKeyBlack {
		keyid = 12248;
	};
	class ItemKeyBlack2249: ItemKeyBlack {
		keyid = 12249;
	};
	class ItemKeyBlack2250: ItemKeyBlack {
		keyid = 12250;
	};
	class ItemKeyBlack2251: ItemKeyBlack {
		keyid = 12251;
	};
	class ItemKeyBlack2252: ItemKeyBlack {
		keyid = 12252;
	};
	class ItemKeyBlack2253: ItemKeyBlack {
		keyid = 12253;
	};
	class ItemKeyBlack2254: ItemKeyBlack {
		keyid = 12254;
	};
	class ItemKeyBlack2255: ItemKeyBlack {
		keyid = 12255;
	};
	class ItemKeyBlack2256: ItemKeyBlack {
		keyid = 12256;
	};
	class ItemKeyBlack2257: ItemKeyBlack {
		keyid = 12257;
	};
	class ItemKeyBlack2258: ItemKeyBlack {
		keyid = 12258;
	};
	class ItemKeyBlack2259: ItemKeyBlack {
		keyid = 12259;
	};
	class ItemKeyBlack2260: ItemKeyBlack {
		keyid = 12260;
	};
	class ItemKeyBlack2261: ItemKeyBlack {
		keyid = 12261;
	};
	class ItemKeyBlack2262: ItemKeyBlack {
		keyid = 12262;
	};
	class ItemKeyBlack2263: ItemKeyBlack {
		keyid = 12263;
	};
	class ItemKeyBlack2264: ItemKeyBlack {
		keyid = 12264;
	};
	class ItemKeyBlack2265: ItemKeyBlack {
		keyid = 12265;
	};
	class ItemKeyBlack2266: ItemKeyBlack {
		keyid = 12266;
	};
	class ItemKeyBlack2267: ItemKeyBlack {
		keyid = 12267;
	};
	class ItemKeyBlack2268: ItemKeyBlack {
		keyid = 12268;
	};
	class ItemKeyBlack2269: ItemKeyBlack {
		keyid = 12269;
	};
	class ItemKeyBlack2270: ItemKeyBlack {
		keyid = 12270;
	};
	class ItemKeyBlack2271: ItemKeyBlack {
		keyid = 12271;
	};
	class ItemKeyBlack2272: ItemKeyBlack {
		keyid = 12272;
	};
	class ItemKeyBlack2273: ItemKeyBlack {
		keyid = 12273;
	};
	class ItemKeyBlack2274: ItemKeyBlack {
		keyid = 12274;
	};
	class ItemKeyBlack2275: ItemKeyBlack {
		keyid = 12275;
	};
	class ItemKeyBlack2276: ItemKeyBlack {
		keyid = 12276;
	};
	class ItemKeyBlack2277: ItemKeyBlack {
		keyid = 12277;
	};
	class ItemKeyBlack2278: ItemKeyBlack {
		keyid = 12278;
	};
	class ItemKeyBlack2279: ItemKeyBlack {
		keyid = 12279;
	};
	class ItemKeyBlack2280: ItemKeyBlack {
		keyid = 12280;
	};
	class ItemKeyBlack2281: ItemKeyBlack {
		keyid = 12281;
	};
	class ItemKeyBlack2282: ItemKeyBlack {
		keyid = 12282;
	};
	class ItemKeyBlack2283: ItemKeyBlack {
		keyid = 12283;
	};
	class ItemKeyBlack2284: ItemKeyBlack {
		keyid = 12284;
	};
	class ItemKeyBlack2285: ItemKeyBlack {
		keyid = 12285;
	};
	class ItemKeyBlack2286: ItemKeyBlack {
		keyid = 12286;
	};
	class ItemKeyBlack2287: ItemKeyBlack {
		keyid = 12287;
	};
	class ItemKeyBlack2288: ItemKeyBlack {
		keyid = 12288;
	};
	class ItemKeyBlack2289: ItemKeyBlack {
		keyid = 12289;
	};
	class ItemKeyBlack2290: ItemKeyBlack {
		keyid = 12290;
	};
	class ItemKeyBlack2291: ItemKeyBlack {
		keyid = 12291;
	};
	class ItemKeyBlack2292: ItemKeyBlack {
		keyid = 12292;
	};
	class ItemKeyBlack2293: ItemKeyBlack {
		keyid = 12293;
	};
	class ItemKeyBlack2294: ItemKeyBlack {
		keyid = 12294;
	};
	class ItemKeyBlack2295: ItemKeyBlack {
		keyid = 12295;
	};
	class ItemKeyBlack2296: ItemKeyBlack {
		keyid = 12296;
	};
	class ItemKeyBlack2297: ItemKeyBlack {
		keyid = 12297;
	};
	class ItemKeyBlack2298: ItemKeyBlack {
		keyid = 12298;
	};
	class ItemKeyBlack2299: ItemKeyBlack {
		keyid = 12299;
	};
	class ItemKeyBlack2300: ItemKeyBlack {
		keyid = 12300;
	};
	class ItemKeyBlack2301: ItemKeyBlack {
		keyid = 12301;
	};
	class ItemKeyBlack2302: ItemKeyBlack {
		keyid = 12302;
	};
	class ItemKeyBlack2303: ItemKeyBlack {
		keyid = 12303;
	};
	class ItemKeyBlack2304: ItemKeyBlack {
		keyid = 12304;
	};
	class ItemKeyBlack2305: ItemKeyBlack {
		keyid = 12305;
	};
	class ItemKeyBlack2306: ItemKeyBlack {
		keyid = 12306;
	};
	class ItemKeyBlack2307: ItemKeyBlack {
		keyid = 12307;
	};
	class ItemKeyBlack2308: ItemKeyBlack {
		keyid = 12308;
	};
	class ItemKeyBlack2309: ItemKeyBlack {
		keyid = 12309;
	};
	class ItemKeyBlack2310: ItemKeyBlack {
		keyid = 12310;
	};
	class ItemKeyBlack2311: ItemKeyBlack {
		keyid = 12311;
	};
	class ItemKeyBlack2312: ItemKeyBlack {
		keyid = 12312;
	};
	class ItemKeyBlack2313: ItemKeyBlack {
		keyid = 12313;
	};
	class ItemKeyBlack2314: ItemKeyBlack {
		keyid = 12314;
	};
	class ItemKeyBlack2315: ItemKeyBlack {
		keyid = 12315;
	};
	class ItemKeyBlack2316: ItemKeyBlack {
		keyid = 12316;
	};
	class ItemKeyBlack2317: ItemKeyBlack {
		keyid = 12317;
	};
	class ItemKeyBlack2318: ItemKeyBlack {
		keyid = 12318;
	};
	class ItemKeyBlack2319: ItemKeyBlack {
		keyid = 12319;
	};
	class ItemKeyBlack2320: ItemKeyBlack {
		keyid = 12320;
	};
	class ItemKeyBlack2321: ItemKeyBlack {
		keyid = 12321;
	};
	class ItemKeyBlack2322: ItemKeyBlack {
		keyid = 12322;
	};
	class ItemKeyBlack2323: ItemKeyBlack {
		keyid = 12323;
	};
	class ItemKeyBlack2324: ItemKeyBlack {
		keyid = 12324;
	};
	class ItemKeyBlack2325: ItemKeyBlack {
		keyid = 12325;
	};
	class ItemKeyBlack2326: ItemKeyBlack {
		keyid = 12326;
	};
	class ItemKeyBlack2327: ItemKeyBlack {
		keyid = 12327;
	};
	class ItemKeyBlack2328: ItemKeyBlack {
		keyid = 12328;
	};
	class ItemKeyBlack2329: ItemKeyBlack {
		keyid = 12329;
	};
	class ItemKeyBlack2330: ItemKeyBlack {
		keyid = 12330;
	};
	class ItemKeyBlack2331: ItemKeyBlack {
		keyid = 12331;
	};
	class ItemKeyBlack2332: ItemKeyBlack {
		keyid = 12332;
	};
	class ItemKeyBlack2333: ItemKeyBlack {
		keyid = 12333;
	};
	class ItemKeyBlack2334: ItemKeyBlack {
		keyid = 12334;
	};
	class ItemKeyBlack2335: ItemKeyBlack {
		keyid = 12335;
	};
	class ItemKeyBlack2336: ItemKeyBlack {
		keyid = 12336;
	};
	class ItemKeyBlack2337: ItemKeyBlack {
		keyid = 12337;
	};
	class ItemKeyBlack2338: ItemKeyBlack {
		keyid = 12338;
	};
	class ItemKeyBlack2339: ItemKeyBlack {
		keyid = 12339;
	};
	class ItemKeyBlack2340: ItemKeyBlack {
		keyid = 12340;
	};
	class ItemKeyBlack2341: ItemKeyBlack {
		keyid = 12341;
	};
	class ItemKeyBlack2342: ItemKeyBlack {
		keyid = 12342;
	};
	class ItemKeyBlack2343: ItemKeyBlack {
		keyid = 12343;
	};
	class ItemKeyBlack2344: ItemKeyBlack {
		keyid = 12344;
	};
	class ItemKeyBlack2345: ItemKeyBlack {
		keyid = 12345;
	};
	class ItemKeyBlack2346: ItemKeyBlack {
		keyid = 12346;
	};
	class ItemKeyBlack2347: ItemKeyBlack {
		keyid = 12347;
	};
	class ItemKeyBlack2348: ItemKeyBlack {
		keyid = 12348;
	};
	class ItemKeyBlack2349: ItemKeyBlack {
		keyid = 12349;
	};
	class ItemKeyBlack2350: ItemKeyBlack {
		keyid = 12350;
	};
	class ItemKeyBlack2351: ItemKeyBlack {
		keyid = 12351;
	};
	class ItemKeyBlack2352: ItemKeyBlack {
		keyid = 12352;
	};
	class ItemKeyBlack2353: ItemKeyBlack {
		keyid = 12353;
	};
	class ItemKeyBlack2354: ItemKeyBlack {
		keyid = 12354;
	};
	class ItemKeyBlack2355: ItemKeyBlack {
		keyid = 12355;
	};
	class ItemKeyBlack2356: ItemKeyBlack {
		keyid = 12356;
	};
	class ItemKeyBlack2357: ItemKeyBlack {
		keyid = 12357;
	};
	class ItemKeyBlack2358: ItemKeyBlack {
		keyid = 12358;
	};
	class ItemKeyBlack2359: ItemKeyBlack {
		keyid = 12359;
	};
	class ItemKeyBlack2360: ItemKeyBlack {
		keyid = 12360;
	};
	class ItemKeyBlack2361: ItemKeyBlack {
		keyid = 12361;
	};
	class ItemKeyBlack2362: ItemKeyBlack {
		keyid = 12362;
	};
	class ItemKeyBlack2363: ItemKeyBlack {
		keyid = 12363;
	};
	class ItemKeyBlack2364: ItemKeyBlack {
		keyid = 12364;
	};
	class ItemKeyBlack2365: ItemKeyBlack {
		keyid = 12365;
	};
	class ItemKeyBlack2366: ItemKeyBlack {
		keyid = 12366;
	};
	class ItemKeyBlack2367: ItemKeyBlack {
		keyid = 12367;
	};
	class ItemKeyBlack2368: ItemKeyBlack {
		keyid = 12368;
	};
	class ItemKeyBlack2369: ItemKeyBlack {
		keyid = 12369;
	};
	class ItemKeyBlack2370: ItemKeyBlack {
		keyid = 12370;
	};
	class ItemKeyBlack2371: ItemKeyBlack {
		keyid = 12371;
	};
	class ItemKeyBlack2372: ItemKeyBlack {
		keyid = 12372;
	};
	class ItemKeyBlack2373: ItemKeyBlack {
		keyid = 12373;
	};
	class ItemKeyBlack2374: ItemKeyBlack {
		keyid = 12374;
	};
	class ItemKeyBlack2375: ItemKeyBlack {
		keyid = 12375;
	};
	class ItemKeyBlack2376: ItemKeyBlack {
		keyid = 12376;
	};
	class ItemKeyBlack2377: ItemKeyBlack {
		keyid = 12377;
	};
	class ItemKeyBlack2378: ItemKeyBlack {
		keyid = 12378;
	};
	class ItemKeyBlack2379: ItemKeyBlack {
		keyid = 12379;
	};
	class ItemKeyBlack2380: ItemKeyBlack {
		keyid = 12380;
	};
	class ItemKeyBlack2381: ItemKeyBlack {
		keyid = 12381;
	};
	class ItemKeyBlack2382: ItemKeyBlack {
		keyid = 12382;
	};
	class ItemKeyBlack2383: ItemKeyBlack {
		keyid = 12383;
	};
	class ItemKeyBlack2384: ItemKeyBlack {
		keyid = 12384;
	};
	class ItemKeyBlack2385: ItemKeyBlack {
		keyid = 12385;
	};
	class ItemKeyBlack2386: ItemKeyBlack {
		keyid = 12386;
	};
	class ItemKeyBlack2387: ItemKeyBlack {
		keyid = 12387;
	};
	class ItemKeyBlack2388: ItemKeyBlack {
		keyid = 12388;
	};
	class ItemKeyBlack2389: ItemKeyBlack {
		keyid = 12389;
	};
	class ItemKeyBlack2390: ItemKeyBlack {
		keyid = 12390;
	};
	class ItemKeyBlack2391: ItemKeyBlack {
		keyid = 12391;
	};
	class ItemKeyBlack2392: ItemKeyBlack {
		keyid = 12392;
	};
	class ItemKeyBlack2393: ItemKeyBlack {
		keyid = 12393;
	};
	class ItemKeyBlack2394: ItemKeyBlack {
		keyid = 12394;
	};
	class ItemKeyBlack2395: ItemKeyBlack {
		keyid = 12395;
	};
	class ItemKeyBlack2396: ItemKeyBlack {
		keyid = 12396;
	};
	class ItemKeyBlack2397: ItemKeyBlack {
		keyid = 12397;
	};
	class ItemKeyBlack2398: ItemKeyBlack {
		keyid = 12398;
	};
	class ItemKeyBlack2399: ItemKeyBlack {
		keyid = 12399;
	};
	class ItemKeyBlack2400: ItemKeyBlack {
		keyid = 12400;
	};
	class ItemKeyBlack2401: ItemKeyBlack {
		keyid = 12401;
	};
	class ItemKeyBlack2402: ItemKeyBlack {
		keyid = 12402;
	};
	class ItemKeyBlack2403: ItemKeyBlack {
		keyid = 12403;
	};
	class ItemKeyBlack2404: ItemKeyBlack {
		keyid = 12404;
	};
	class ItemKeyBlack2405: ItemKeyBlack {
		keyid = 12405;
	};
	class ItemKeyBlack2406: ItemKeyBlack {
		keyid = 12406;
	};
	class ItemKeyBlack2407: ItemKeyBlack {
		keyid = 12407;
	};
	class ItemKeyBlack2408: ItemKeyBlack {
		keyid = 12408;
	};
	class ItemKeyBlack2409: ItemKeyBlack {
		keyid = 12409;
	};
	class ItemKeyBlack2410: ItemKeyBlack {
		keyid = 12410;
	};
	class ItemKeyBlack2411: ItemKeyBlack {
		keyid = 12411;
	};
	class ItemKeyBlack2412: ItemKeyBlack {
		keyid = 12412;
	};
	class ItemKeyBlack2413: ItemKeyBlack {
		keyid = 12413;
	};
	class ItemKeyBlack2414: ItemKeyBlack {
		keyid = 12414;
	};
	class ItemKeyBlack2415: ItemKeyBlack {
		keyid = 12415;
	};
	class ItemKeyBlack2416: ItemKeyBlack {
		keyid = 12416;
	};
	class ItemKeyBlack2417: ItemKeyBlack {
		keyid = 12417;
	};
	class ItemKeyBlack2418: ItemKeyBlack {
		keyid = 12418;
	};
	class ItemKeyBlack2419: ItemKeyBlack {
		keyid = 12419;
	};
	class ItemKeyBlack2420: ItemKeyBlack {
		keyid = 12420;
	};
	class ItemKeyBlack2421: ItemKeyBlack {
		keyid = 12421;
	};
	class ItemKeyBlack2422: ItemKeyBlack {
		keyid = 12422;
	};
	class ItemKeyBlack2423: ItemKeyBlack {
		keyid = 12423;
	};
	class ItemKeyBlack2424: ItemKeyBlack {
		keyid = 12424;
	};
	class ItemKeyBlack2425: ItemKeyBlack {
		keyid = 12425;
	};
	class ItemKeyBlack2426: ItemKeyBlack {
		keyid = 12426;
	};
	class ItemKeyBlack2427: ItemKeyBlack {
		keyid = 12427;
	};
	class ItemKeyBlack2428: ItemKeyBlack {
		keyid = 12428;
	};
	class ItemKeyBlack2429: ItemKeyBlack {
		keyid = 12429;
	};
	class ItemKeyBlack2430: ItemKeyBlack {
		keyid = 12430;
	};
	class ItemKeyBlack2431: ItemKeyBlack {
		keyid = 12431;
	};
	class ItemKeyBlack2432: ItemKeyBlack {
		keyid = 12432;
	};
	class ItemKeyBlack2433: ItemKeyBlack {
		keyid = 12433;
	};
	class ItemKeyBlack2434: ItemKeyBlack {
		keyid = 12434;
	};
	class ItemKeyBlack2435: ItemKeyBlack {
		keyid = 12435;
	};
	class ItemKeyBlack2436: ItemKeyBlack {
		keyid = 12436;
	};
	class ItemKeyBlack2437: ItemKeyBlack {
		keyid = 12437;
	};
	class ItemKeyBlack2438: ItemKeyBlack {
		keyid = 12438;
	};
	class ItemKeyBlack2439: ItemKeyBlack {
		keyid = 12439;
	};
	class ItemKeyBlack2440: ItemKeyBlack {
		keyid = 12440;
	};
	class ItemKeyBlack2441: ItemKeyBlack {
		keyid = 12441;
	};
	class ItemKeyBlack2442: ItemKeyBlack {
		keyid = 12442;
	};
	class ItemKeyBlack2443: ItemKeyBlack {
		keyid = 12443;
	};
	class ItemKeyBlack2444: ItemKeyBlack {
		keyid = 12444;
	};
	class ItemKeyBlack2445: ItemKeyBlack {
		keyid = 12445;
	};
	class ItemKeyBlack2446: ItemKeyBlack {
		keyid = 12446;
	};
	class ItemKeyBlack2447: ItemKeyBlack {
		keyid = 12447;
	};
	class ItemKeyBlack2448: ItemKeyBlack {
		keyid = 12448;
	};
	class ItemKeyBlack2449: ItemKeyBlack {
		keyid = 12449;
	};
	class ItemKeyBlack2450: ItemKeyBlack {
		keyid = 12450;
	};
	class ItemKeyBlack2451: ItemKeyBlack {
		keyid = 12451;
	};
	class ItemKeyBlack2452: ItemKeyBlack {
		keyid = 12452;
	};
	class ItemKeyBlack2453: ItemKeyBlack {
		keyid = 12453;
	};
	class ItemKeyBlack2454: ItemKeyBlack {
		keyid = 12454;
	};
	class ItemKeyBlack2455: ItemKeyBlack {
		keyid = 12455;
	};
	class ItemKeyBlack2456: ItemKeyBlack {
		keyid = 12456;
	};
	class ItemKeyBlack2457: ItemKeyBlack {
		keyid = 12457;
	};
	class ItemKeyBlack2458: ItemKeyBlack {
		keyid = 12458;
	};
	class ItemKeyBlack2459: ItemKeyBlack {
		keyid = 12459;
	};
	class ItemKeyBlack2460: ItemKeyBlack {
		keyid = 12460;
	};
	class ItemKeyBlack2461: ItemKeyBlack {
		keyid = 12461;
	};
	class ItemKeyBlack2462: ItemKeyBlack {
		keyid = 12462;
	};
	class ItemKeyBlack2463: ItemKeyBlack {
		keyid = 12463;
	};
	class ItemKeyBlack2464: ItemKeyBlack {
		keyid = 12464;
	};
	class ItemKeyBlack2465: ItemKeyBlack {
		keyid = 12465;
	};
	class ItemKeyBlack2466: ItemKeyBlack {
		keyid = 12466;
	};
	class ItemKeyBlack2467: ItemKeyBlack {
		keyid = 12467;
	};
	class ItemKeyBlack2468: ItemKeyBlack {
		keyid = 12468;
	};
	class ItemKeyBlack2469: ItemKeyBlack {
		keyid = 12469;
	};
	class ItemKeyBlack2470: ItemKeyBlack {
		keyid = 12470;
	};
	class ItemKeyBlack2471: ItemKeyBlack {
		keyid = 12471;
	};
	class ItemKeyBlack2472: ItemKeyBlack {
		keyid = 12472;
	};
	class ItemKeyBlack2473: ItemKeyBlack {
		keyid = 12473;
	};
	class ItemKeyBlack2474: ItemKeyBlack {
		keyid = 12474;
	};
	class ItemKeyBlack2475: ItemKeyBlack {
		keyid = 12475;
	};
	class ItemKeyBlack2476: ItemKeyBlack {
		keyid = 12476;
	};
	class ItemKeyBlack2477: ItemKeyBlack {
		keyid = 12477;
	};
	class ItemKeyBlack2478: ItemKeyBlack {
		keyid = 12478;
	};
	class ItemKeyBlack2479: ItemKeyBlack {
		keyid = 12479;
	};
	class ItemKeyBlack2480: ItemKeyBlack {
		keyid = 12480;
	};
	class ItemKeyBlack2481: ItemKeyBlack {
		keyid = 12481;
	};
	class ItemKeyBlack2482: ItemKeyBlack {
		keyid = 12482;
	};
	class ItemKeyBlack2483: ItemKeyBlack {
		keyid = 12483;
	};
	class ItemKeyBlack2484: ItemKeyBlack {
		keyid = 12484;
	};
	class ItemKeyBlack2485: ItemKeyBlack {
		keyid = 12485;
	};
	class ItemKeyBlack2486: ItemKeyBlack {
		keyid = 12486;
	};
	class ItemKeyBlack2487: ItemKeyBlack {
		keyid = 12487;
	};
	class ItemKeyBlack2488: ItemKeyBlack {
		keyid = 12488;
	};
	class ItemKeyBlack2489: ItemKeyBlack {
		keyid = 12489;
	};
	class ItemKeyBlack2490: ItemKeyBlack {
		keyid = 12490;
	};
	class ItemKeyBlack2491: ItemKeyBlack {
		keyid = 12491;
	};
	class ItemKeyBlack2492: ItemKeyBlack {
		keyid = 12492;
	};
	class ItemKeyBlack2493: ItemKeyBlack {
		keyid = 12493;
	};
	class ItemKeyBlack2494: ItemKeyBlack {
		keyid = 12494;
	};
	class ItemKeyBlack2495: ItemKeyBlack {
		keyid = 12495;
	};
	class ItemKeyBlack2496: ItemKeyBlack {
		keyid = 12496;
	};
	class ItemKeyBlack2497: ItemKeyBlack {
		keyid = 12497;
	};
	class ItemKeyBlack2498: ItemKeyBlack {
		keyid = 12498;
	};
	class ItemKeyBlack2499: ItemKeyBlack {
		keyid = 12499;
	};
	class ItemKeyBlack2500: ItemKeyBlack {
		keyid = 12500;
	};
};