class Bizon_DZ : bizon
{
	model = "\rh_aks\RH_bizon.p3d";
	picture = "\rh_aks\inv\bizon.paa";
	displayName = $STR_DZ_WPN_BIZON_NAME;
	
	magazines[] =
	{
		64Rnd_9x19_Bizon
	};
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;
	
	class Attachments
	{
		Attachment_Kobra = "Bizon_Kobra_DZ";
		Attachment_Sup9 = "Bizon_SD_DZ";
	};
};

class Bizon_Kobra_DZ : Bizon_DZ
{
	model = "\RH_aks\RH_bizonk.p3d";
	picture = "\RH_aks\inv\bizonk.paa";
	displayName = $STR_DZ_WPN_BIZON_KOBRA_NAME;	
	
	class Attachments
	{
		Attachment_Sup9 = "Bizon_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'Bizon_DZ'] call player_removeAttachment";
		};
	};	
};

class Bizon_SD_DZ : bizon_silenced
{
	model = "\rh_aks\RH_bizonsd.p3d";
	picture = "\rh_aks\inv\bizonsd.paa";
	displayName = $STR_DZ_WPN_BIZON_SD_NAME;
	
	magazines[] =
	{
		64Rnd_9x19_SD_Bizon
	};
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;
	
	class Attachments
	{
		Attachment_Kobra = "Bizon_Kobra_SD_DZ";
	};	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'Bizon_DZ'] call player_removeAttachment";
		};
	};
};


class Bizon_Kobra_SD_DZ : Bizon_SD_DZ
{
	model = "\RH_aks\RH_bizonsdk.p3d";
	picture = "\RH_aks\inv\bizonsdk.paa";
	displayName = $STR_DZ_WPN_BIZON_KOBRA_SD_NAME;
	
	class Attachments {};	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'Bizon_Kobra_DZ'] call player_removeAttachment";
		};		
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'Bizon_SD_DZ'] call player_removeAttachment";
		};
	};
};