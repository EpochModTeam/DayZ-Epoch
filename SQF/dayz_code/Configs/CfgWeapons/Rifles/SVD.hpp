class SVD_PSO1_DZ : SVD
{
	model = "z\addons\dayz_communityweapons\SVD\SVD_PSO.p3d";
	picture = "\ca\weapons\data\equip\w_svd_ca.paa";
	displayName = $STR_DZ_WPN_SVD_PSO1_NAME;
	
	//weaponInfoType = "RscWeaponEmpty";
	//discreteDistance[] = {};
	//discreteDistanceInitIndex = 0;
	//distanceZoomMin = 200;
	//distanceZoomMax = 200;
	
	magazines[] = {10Rnd_762x54_SVD};	
	//reloadTime = 0.06;
	
	//recoil = "recoil_single_primary_4outof10";
	//recoilProne = "recoil_single_primary_prone_4outof10";
	
	//dispersion = 0.00045;
	
	class OpticsModes : OpticsModes
	{
		class Scope : Scope {};
		class Ironsights : Ironsights {};
	};
	
	class Attachments
	{
		Attachment_Ghillie = "SVD_PSO1_Gh_DZ";
	};
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'SVD_DZ'] call player_removeAttachment";
		};
	};
};

class SVD_PSO1_Gh_DZ : SVD_PSO1_DZ
{
	model = "z\addons\dayz_communityweapons\SVD\SVD_PSO_Ghilli.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_PSO1_Gh_ca.paa";
	displayName = $STR_DZ_WPN_SVD_PSO1_GH_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'SVD_PSO1_DZ'] call player_removeAttachment";
		};
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'SVD_Gh_DZ'] call player_removeAttachment";
		};
	};
};

class SVD_DZ : SVD_PSO1_DZ
{
	model = "z\addons\dayz_communityweapons\SVD\SVD.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_ca.paa";
	displayName = $STR_DZ_WPN_SVD_NAME;
	
	weaponInfoType = "RscWeaponZeroing";
	
	class OpticsModes : OpticsModes
	{
		class Ironsights : Ironsights
		{
			opticsID = 1;
			discreteDistanceInitIndex = 2;
		};
	};
	
	class Attachments
	{
		Attachment_Ghillie = "SVD_Gh_DZ";
		Attachment_PSO1 = "SVD_PSO1_DZ";
	};
};

class SVD_Gh_DZ : SVD_DZ
{
	model = "z\addons\dayz_communityweapons\SVD\SVD_Ghilli.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_Gh_ca.paa";
	displayName = $STR_DZ_WPN_SVD_GH_NAME;
	
	class Attachments 
	{
		Attachment_PSO1 = "SVD_PSO1_Gh_DZ";
	};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'SVD_DZ'] call player_removeAttachment";
		};
	};
};