class MK22_DZ: M9
{
	scope = 2;	
	displayName = $STR_DZ_WPN_MK22_NAME;
	descriptionShort = $STR_DZ_WPN_MK22_DESC;
	model = "\RH_de\RH_mk22.p3d";
	picture = "\RH_de\inv\mk22.paa";
	begin1[] = {"\RH_de\sound\mk22.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\mk22_reload.wss",0.031623,1,20};
	magazines[] = {"8Rnd_9x19_MK22"};
	
	class Attachments
	{
		Attachment_Sup9 = "MK22_SD_DZ";
	};
};

class MK22_2_DZ: MK22_DZ
{
	model = "\RH_de\RH_mk22v.p3d";
	picture = "\RH_de\inv\mk22v.paa";
	
	class Attachments
	{
		Attachment_Sup9 = "MK22_2_SD_DZ";
	};
};

class MK22_SD_DZ: M9SD
{
	scope = 2;	
	displayName = $STR_DZ_WPN_MK22SD_NAME;
	descriptionShort = $STR_DZ_WPN_MK22SD_DESC;
	model = "\RH_de\RH_mk22sd.p3d";
	picture = "\RH_de\inv\mk22sd.paa";
	begin1[] = {"\RH_de\sound\mk22sd.wss",0.316228,1,200};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\mk22_reload.wss",0.031623,1,20};
	magazines[] = {"8Rnd_9x19_MK22SD"};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MK22_DZ'] call player_removeAttachment";
		};
	};	
};

class MK22_2_SD_DZ: MK22_SD_DZ
{
	model = "\RH_de\RH_mk22vsd.p3d";
	picture = "\RH_de\inv\mk22vsd.paa";
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MK22_2_DZ'] call player_removeAttachment";
		};
	};	
};
