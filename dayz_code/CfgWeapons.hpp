class CfgWeapons {
	class ItemCore;
	class ItemMap1: ItemCore {
		descriptionshort = "Map";
		displayname = "Map";
		picture = "\z\addons\dayz_communityassets\icons\gear_picture_map_01_ca.paa";
		scope = 2;
		simulation = "ItemMap";
	};
	class ItemMap2: ItemCore {
		descriptionshort = "Map";
		displayname = "Map";
		picture = "\z\addons\dayz_communityassets\icons\gear_picture_map_02_ca.paa";
		scope = 2;
		simulation = "ItemMap";
	};
	class ItemMap3: ItemCore {
		descriptionshort = "Map";
		displayname = "Map";
		picture = "\z\addons\dayz_communityassets\icons\gear_picture_map_03_ca.paa";
		scope = 2;
		simulation = "ItemMap";
	};
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
	class ItemMatchboxWet : ItemCore {
		scope = public;
		displayName = $STR_EQUIP_CODE_NAME_3;
		model = "\dayz_equip\models\matchbox_gear.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_matchbox_wet_CA.paa";
		descriptionShort = $STR_EQUIP_CODE_DESC_3;
	};
	class ItemMatchboxEmpty : ItemCore {
		scope = public;
		displayName = "Empty Match Box";
		model = "\dayz_equip\models\matchbox_gear.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_matchbox_wet_CA.paa";
		descriptionShort = $STR_EQUIP_CODE_DESC_3;
	};	
	
	class ItemBrokeHatchet : ItemCore {
		scope = public;
		displayName = $STR_EQUIP_CODE_NAME_41;
		model = "\dayz_equip\models\hatchet.p3d";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		descriptionShort = $STR_EQUIP_CODE_DESC_41;
		class ItemActions {		
			class Toolbelt {
				text = "Remove from Toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemBrokeHatchet"};
				output[] = {"MeleeHatchet"};
			};
		};
	};
	class ItemKnifeBlunt : ItemCore {
		scope = public;
		displayName = $STR_EQUIP_CODE_NAME_4;
		model = "\dayz_equip\models\knife_gear.p3d";
		picture = "\dayz_equip\textures\equip_knife_ca.paa";
		descriptionShort = $STR_EQUIP_CODE_DESC_4;
	};
	
};