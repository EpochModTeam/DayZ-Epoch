
class CfgTraderCategory {
	class ammunition_1 {
		type = "trade_items";
		class 30Rnd_556x45_Stanag {
			buy[] = {"ItemSilverBar",4};
			sell[] = {"ItemSilverBar",2};
		};
		class 5Rnd_86x70_L115A1 {
			buy[] = {"ItemGoldBar",5};
			sell[] = {"ItemSilverBar",2};
		};
		//AND SO ON....
	};
	class clothes_1 {
		type = "trade_items";
		class Skin_Sniper1_DZ {
			buy[] = {"ItemGoldBar",2};
			sell[] = {"ItemGoldBar",1};
		};
	};
	class heliarmed_1 {
		type = "trade_any_vehicle";
		class CH_47F_EP1_DZE {
			buy[] = {"ItemBriefcase100oz",2};
			sell[] = {"ItemBriefcase100oz",1};
		};
	};
	class militaryarmed_1 {
		type = "trade_any_vehicles";
		class HMMWV_M1035_DES_EP1 {
			buy[] = {"ItemGoldBar10oz",8};
			sell[] = {"ItemGoldBar10oz",4};
		};
	};
	class truckarmed_1 {
		type = "trade_any_vehicles";
		class Pickup_PK_GUE_DZE {
			buy[] = {"ItemGoldBar10oz",1};
			sell[] = {"ItemGoldBar",5};
		};
	};
	class weapons_1 {
		type = "trade_weapons";
		class M4SPR {
			buy[] = {"ItemGoldBar10oz",1};
			sell[] = {"ItemGoldBar",6};
		};
	};

};