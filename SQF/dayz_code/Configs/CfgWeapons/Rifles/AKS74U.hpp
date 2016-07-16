class AKS74U_Kobra_DZ : AKS_74_U
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_kobra_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_KOBRA_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		30Rnd_545x39_AKSD
	};
	
	class Attachments
	{
		Attachment_Sup545 = "AKS74U_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AKS74U_DZ'] call player_removeAttachment";
		};
	};
};

class AKS74U_Kobra_SD_DZ : AKS_74_UN_kobra
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_kobra_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_kobra_sd_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_KOBRA_SD_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AKSD,
		30Rnd_545x39_AK
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AKS74U_SD_DZ'] call player_removeAttachment";
		};
		
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AKS74U_Kobra_DZ'] call player_removeAttachment";
		};
	};
};

class AKS74U_DZ : AKS74U_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_NAME;
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {350,500};
	discreteDistanceInitIndex = 0;
	
	class Attachments
	{
		Attachment_Kobra = "AKS74U_Kobra_DZ";
		Attachment_Sup545 = "AKS74U_SD_DZ";
	};
	
	class ItemActions {};
};

class AKS74U_SD_DZ : AKS74U_Kobra_SD_DZ
{
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_sd_ca.paa";
	displayName = $STR_DZ_WPN_AKS74U_SD_NAME;
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,350,500};
	discreteDistanceInitIndex = 0;
	
	class Attachments
	{
		Attachment_Kobra = "AKS74U_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AKS74U_DZ'] call player_removeAttachment";
		};
	};
};