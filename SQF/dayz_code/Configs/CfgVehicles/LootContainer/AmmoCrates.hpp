class DZ_AmmoBoxRU : ReammoBox
{
	scope = public;
	
	model = "ca\weapons\ammoboxes\proxy_ruweaponboxlow.p3d";
	displayName = $STR_DAYZ_OBJ_3;
	vehicleClass = "DayZ Epoch Crates";
};

class DZ_ExplosiveBoxRU : ReammoBox
{
	scope = public;
	
	model = "ca\weapons\ammoboxes\proxy_ruexplosives.p3d";
	displayName = $STR_DAYZ_OBJ_3;
	vehicleClass = "DayZ Epoch Crates";
};

class DZ_AmmoBoxUS : ReammoBox
{
	scope = public;
	
	model = "ca\weapons\ammoboxes\proxy_usbasicammoboxsmall.p3d";
	displayName = $STR_DAYZ_OBJ_3;
	vehicleClass = "DayZ Epoch Crates";
};

class DZ_ExplosivesBoxUS : ReammoBox
{
	scope = public;
	
	model = "ca\weapons\ammoboxes\proxy_usbasicexplosives.p3d";
	displayName = $STR_DAYZ_OBJ_3;
	vehicleClass = "DayZ Epoch Crates";
};

class DZ_CardboardBox : ReammoBox
{
	scope = public;
	
	model = "dayz_equip\models\cardboard_box.p3d";
	displayName = $STR_DAYZ_OBJ_4;
	vehicleClass = "DayZ Epoch Crates";
};

class DZ_MedBox : ReammoBox
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\medical_freezbox.p3d";
	displayName = $STR_DAYZ_OBJ_2;
	vehicleClass = "DayZ Epoch Crates";
};

class DZ_AmmoBoxSmallUS : ReammoBox
{
	scope = public;
	
	model = "\ca\weapons\AmmoBoxes\USBasicAmmo.p3d";
	displayName = $STR_DAYZ_OBJ_3;
	transportMaxMagazines = 10000;
	transportMaxWeapons = 10000;
	transportMaxBackpacks = 100;
	vehicleClass = "DayZ Epoch Crates";
};

class DZ_AmmoBoxFlatUS : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\USLaunchers.p3d";
};

class DZ_AmmoBoxMedium1US : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
};

class DZ_AmmoBoxMedium2US : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\USSpecialWeapons.p3d";
};

class DZ_AmmoBoxBigUS : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\USVehicleAmmo.p3d";
};

class DZ_AmmoBoxSmallRU : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
};

class DZ_AmmoBoxLong1RU : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\RULaunchers.p3d";
};

class DZ_AmmoBoxLong2RU : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\RUSpecialWeapons.p3d";
};

class DZ_AmmoBoxFlatRU : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\RUOrdnance.p3d";
};

class DZ_AmmoBoxBigRU : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\RUVehicleAmmo.p3d";
};

class DZ_AmmoBoxSmallUN : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\LocalBasicAmmo.p3d";
};

class DZ_AmmoBoxFlatUN : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\LocalBasicWeapons.p3d";
};

class DZ_AmmoBoxSmallGUE : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\GuerillaCache.p3d";
};

class DZ_AmmoBoxLongGUE : DZ_AmmoBoxSmallUS
{	
	model = "\ca\weapons\AmmoBoxes\SpecialWeapons.p3d";
};