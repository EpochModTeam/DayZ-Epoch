class USP_DZ : Colt1911
{
	scope = public;	
	displayName = $STR_DZ_WPN_USP_NAME;
	descriptionShort = $STR_DZ_WPN_USP_DESC;
	model = "\RH_de\RH_usp.p3d";
	picture = "\RH_de\inv\usp.paa";	
	begin1[] = {"\RH_de\sound\usp.wss",0.794328,1,800};
	soundBegin[] = {"begin1",1};
	reloadMagazineSound[] = {"\RH_de\sound\usp_reload.wss",0.1,1,20};
	magazines[] = {"15Rnd_45ACP_USP"};
	
	class FlashLight
	{
		color[] = {0.9,0.9,0.7,0.9};
		ambient[] = {0.1,0.1,0.1,1.0};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1,1,0.5};
		brightness = 0.1;
	};
	
	class Attachments
	{
		Attachment_Sup45 = "USP_SD_DZ";
	};	
};

class USP_SD_DZ: USP_DZ
{
	displayName = $STR_DZ_WPN_USPSD_NAME;
	descriptionShort = $STR_DZ_WPN_USPSD_DESC;
	model = "\RH_de\RH_uspsd.p3d";
	picture = "\RH_de\inv\uspsd.paa";
	begin1[] = {"\RH_de\sound\uspsd.wss",0.316228,1,200};
	soundBegin[] = {"begin1",1};
	reloadMagazineSound[] = {"\RH_de\sound\usp_reload.wss",0.031623,1,20};
	magazines[] = {"15Rnd_45ACP_USPSD"};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'USP_DZ'] call player_removeAttachment";
		};
	};		
};