class CardboardBox : ReammoBox {
	accuracy = 1000;	// accuracy needed to recognize type of this target	
};

class FoodBox0 : CardboardBox {
	scope = public;
	displayName = $STR_DAYZ_OBJ_1;
	model = "\dayz_equip\models\cardboard_box.p3d";
	vehicleClass = "DayZ Epoch Crates";
	
	class transportmagazines {
		class _xx_FoodCanBakedBeans {
			magazine = "FoodCanBakedBeans";
			count = 6;
		};
		
		class _xx_FoodCanSardines {
			magazine = "FoodCanSardines";
			count = 6;
		};
		
		class _xx_ItemSodaCoke {
			magazine = "ItemSodaLirik";
			count = 6;
		};
		
		class _xx_ItemSodaGrapeDrink {
			magazine = "ItemSodaGrapeDrink";
			count = 6;
		};
	};
};

class FoodBox1 : FoodBox0 {};

class FoodBox2 : FoodBox0 {};

class MedBox0 : CardboardBox {
	scope = public;
	displayName = $STR_DAYZ_OBJ_2;
	model = "z\addons\dayz_communityassets\models\medical_freezbox.p3d";
	vehicleClass = "DayZ Epoch Crates";
	
	class transportmagazines {
		class _xx_ItemBandage {
			magazine = "ItemBandage";
			count = 6;
		};
		
		class _xx_ItemEpinephrine {
			magazine = "ItemEpinephrine";
			count = 2;
		};
		
		class _xx_ItemMorphine {
			magazine = "ItemMorphine";
			count = 3;
		};
		
		class _xx_ItemPainkiller {
			magazine = "ItemPainkiller";
			count = 1;
		};
	};
};

class MedBox1 : CardboardBox {
	scope = public;
	displayName = $STR_DAYZ_OBJ_2;
	model = "z\addons\dayz_communityassets\models\medical_freezbox.p3d";
	vehicleClass = "DayZ Epoch Crates";
	
	class transportmagazines {
		class _xx_ItemBandage {
			magazine = "ItemBandage";
			count = 3;
		};
		
		class _xx_ItemEpinephrine {
			magazine = "ItemEpinephrine";
			count = 2;
		};
		
		class _xx_ItemMorphine {
			magazine = "ItemMorphine";
			count = 5;
		};
		
		class _xx_ItemBloodbag {
			magazine = "emptyBloodBag";
			count = 2;
		};
		
		class _xx_ItemPainkiller {
			magazine = "ItemPainkiller";
			count = 2;
		};
		
		class _xx_ItemAntibiotic {
			magazine = "ItemAntibiotic";
			count = 1;
		};
	};	
};

class MedBox2 : CardboardBox {
	scope = public;
	displayName = $STR_DAYZ_OBJ_2;
	model = "z\addons\dayz_communityassets\models\medical_freezbox.p3d";
	vehicleClass = "DayZ Epoch Crates";
	
	class transportmagazines {
		class _xx_ItemBandage {
			magazine = "ItemBandage";
			count = 3;
		};
		class _xx_transfusionKit {
			magazine = "transfusionKit";
			count = 4;
		};
		class _xx_ItemMorphine {
			magazine = "ItemMorphine";
			count = 3;
		};
		class _xx_bloodBagOPOS {
			magazine = "bloodBagOPOS";
			count = 1;
		};
		class _xx_bloodBagABPOS {
			magazine = "bloodBagABPOS";
			count = 1;
		};
		class _xx_bloodBagBPOS {
			magazine = "bloodBagBPOS";
			count = 1;
		};
		class _xx_bloodBagAPOS {
			magazine = "bloodBagAPOS";
			count = 1;
		};
		class _xx_bloodTester {
			magazine = "bloodTester";
			count = 2;
		};
	};
};