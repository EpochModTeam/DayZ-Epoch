class Mk48_CCO_DZ : Mk_48
{
	model = "z\addons\dayz_communityweapons\mk48\mk48_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_cco_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_CCO_NAME;
	
	type = WeaponSlotPrimary;
	
	magazines[] = {100Rnd_762x51_M240};
	
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Mk48_DZ'] call player_removeAttachment";
		};
	};
};

class Mk48_DZ : Mk48_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\mk48\mk48.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_CCO = "Mk48_CCO_DZ";
		Attachment_Holo = "Mk48_Holo_DZ";
	};
	
	class ItemActions {};
};

class Mk48_Holo_DZ : Mk48_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\mk48\mk48_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_holo_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Mk48_DZ'] call player_removeAttachment";
		};
	};
};