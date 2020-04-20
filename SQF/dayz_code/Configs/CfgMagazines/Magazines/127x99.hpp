//M107
class 10Rnd_127x99_m107 : CA_Magazine
{
	displayName = $STR_DZ_MAG_10Rnd_127x99_M107_NAME;
	descriptionShort = $STR_DZ_MAG_10RND_127x99_M107_DESC;
	
	cartridgeName = "127x99";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//AS50
class 5Rnd_127x99_as50 : CA_Magazine
{
	displayName = $STR_DZ_MAG_5Rnd_127x99_AS50_NAME;
	model = "\z\addons\dayz_epoch_w\magazine\dze_as50_mag.p3d";
	
	cartridgeName = "127x99";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
class 5Rnd_127x99_as50_CP : 5Rnd_127x99_as50
{	
	ammo = "B_127x99_Ball_noTracer";
};


