class Dayz_Plant3: Plant_Base {
	model = "z\addons\dayz_communityassets\models\comfrey_up_small.p3d";
	transportMaxMagazines = 1;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 1;
		};
	};
};

class Dayz_Plant2: Plant_Base {
	model = "z\addons\dayz_communityassets\models\comfrey_up_mid.p3d";
	transportMaxMagazines = 2;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 2;
		};
	};
};

class Dayz_Plant1: Plant_Base {
	model = "z\addons\dayz_communityassets\models\comfrey_up.p3d";
	transportMaxMagazines = 3;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 3;
		};
	};
};

