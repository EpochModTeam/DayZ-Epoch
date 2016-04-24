// these objects can't be banned, so let's transform them to some dull objects
	class RUBasicAmmunitionBox: House {
		model = "\ca\weapons\AmmoBoxes\RUSpecialWeapons.p3d";
		vehicleClass = "RUBasicAmmunitionBox";
	};
	class RUSpecialWeaponsBox: RUBasicAmmunitionBox {
		model = "\ca\weapons\AmmoBoxes\RUSpecialWeapons.p3d";
		vehicleClass = "RUSpecialWeaponsBox";
	};
	class RUBasicWeaponsBox: RUBasicAmmunitionBox {
		model = "\ca\weapons\AmmoBoxes\RUBasicWeapons.p3d";
		vehicleClass = "RUBasicWeaponsBox";
	};
