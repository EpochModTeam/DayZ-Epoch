class M249_CCO_DZ : M249
{
	model = "z\addons\dayz_communityweapons\m249\m249_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_cco_ca.paa";
	displayName = $STR_DZ_WPN_M249_CCO_NAME;
	
	type = WeaponSlotPrimary;
	
	magazines[] =
	{
		200Rnd_556x45_M249,
		100Rnd_556x45_M249,
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M249_DZ'] call player_removeAttachment";
		};
	};
};

class M249_DZ : M249_CCO_DZ
{
	model = "ca\weapons\m249.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_ca.paa";
	displayName = $STR_DZ_WPN_M249_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_CCO = "M249_CCO_DZ";
		Attachment_Holo = "M249_Holo_DZ";
	};
	
	class ItemActions {};
};

class M249_Holo_DZ : M249_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m249\m249_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_holo_ca.paa";
	displayName = $STR_DZ_WPN_M249_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M249_DZ'] call player_removeAttachment";
		};
	};
};

class M249_EP1;
class M249_EP1_DZ:M249_EP1 { //Iron sight with shorter stock (slightly different look from M249_DZ) can also fire MG36 mags
	type = WeaponSlotPrimary;
};

class M249_m145_EP1;
class M249_m145_EP1_DZE:M249_m145_EP1 {
	type = WeaponSlotPrimary;
};
