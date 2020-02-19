class M1911_DZ : Colt1911
{
	begin1[] = {"\RH_de\sound\m1911old.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	magazines[] = {"7Rnd_45ACP_1911"};
};

class M1911_2_DZ : M1911_DZ
{
	model = "\RH_de\RH_m1911old.p3d";
	picture = "\RH_de\inv\coltold.paa";
};

class Kimber_M1911_DZ: M1911_DZ
{
	displayName = $STR_DZ_WPN_KIMBER1911_NAME;
	descriptionShort = $STR_DZ_WPN_KIMBER1911_DESC;	
	model = "\RH_de\RH_m1911.p3d";
	picture = "\RH_de\inv\colt.paa";
	begin1[] = {"\RH_de\sound\m1911.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\m1911_reload.wss",0.1,1,20};

	class Attachments
	{
		Attachment_Sup45 = "Kimber_M1911_SD_DZ";
	};	
};

class Kimber_M1911_SD_DZ: M1911_DZ
{
	displayName = $STR_DZ_WPN_KIMBER1911SD_NAME;
	descriptionShort = $STR_DZ_WPN_KIMBER1911SD_DESC;		
	model = "\RH_de\RH_m1911sd.p3d";
	picture = "\RH_de\inv\coltsd.paa";
	begin1[] = {"\RH_de\sound\m1911sd.wss",0.316228,1,200};
	soundBegin[] = {"begin1",1};
	magazines[] = {"7Rnd_45ACP_1911SD"};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'Kimber_M1911_DZ'] call player_removeAttachment";
		};
	};	
};