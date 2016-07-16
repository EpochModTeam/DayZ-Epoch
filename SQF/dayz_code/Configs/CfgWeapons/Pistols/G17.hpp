class G17_DZ : glock17_EP1
{
	model = "z\addons\dayz_communityweapons\g17\g17.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_ca.paa";
	displayName = $STR_DZ_WPN_G17_NAME;
	
	magazines[] = 
	{
		17Rnd_9x19_glock17,
		17Rnd_9x19_glock17SD
	};
	
	delete FlashLight;
	
	class Attachments
	{
		Attachment_Sup9 = "G17_SD_DZ";
		Attachment_FL_Pist = "G17_FL_DZ";
	};
};

class G17_FL_DZ : G17_DZ
{
	model = "z\addons\dayz_communityweapons\g17\g17_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_fl_ca.paa";
	displayName = $STR_DZ_WPN_G17_FL_NAME;

	class FlashLight
	{
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class Attachments
	{
		Attachment_Sup9 = "G17_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_PST_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'G17_DZ'] call player_removeAttachment";
		};
	};
};

class G17_SD_DZ : M9SD
{
	model = "z\addons\dayz_communityweapons\g17\g17_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_sd_ca.paa";
	displayName = $STR_DZ_WPN_G17_SD_NAME;
	
	magazines[] = 
	{
		17Rnd_9x19_glock17SD,
		17Rnd_9x19_glock17
	};
	
	reloadMagazineSound[]={"Ca\Sounds_E\Weapons_E\Glock17\reload1",db0,1, 20};

	recoil =          "recoil_single_pistol_2outof3";
	recoilProne =     "recoil_single_pistol_prone_2outof3";

	class Library {libTextDesc = $STR_EP1_LIB_glock17;};
	descriptionShort = $STR_EP1_DSS_glock17_EP1;
	
	class Attachments
	{
		Attachment_FL_Pist = "G17_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'G17_DZ'] call player_removeAttachment";
		};
	};
};

class G17_SD_FL_DZ : G17_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g17\g17_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_G17_SD_FL_NAME;

	class FlashLight
	{
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'G17_FL_DZ'] call player_removeAttachment";
		};
		
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_PST_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'G17_SD_DZ'] call player_removeAttachment";
		};
	};
};