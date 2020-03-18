class P99_Black_DZ: M9
{
	displayName = $STR_DZ_WPN_P99_NAME;
	model = "\C1987_P99\P99_black.p3d";
	picture = "\C1987_P99\equip\p99_black.paa";
	soundBegin[] = {"begin1",1};
	begin1[] = {"\C1987_P99\sound\p99.wss",1.0,1};
	reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss",0.1,1,20};
	magazines[] = {"15Rnd_10x22_p99"};
	descriptionShort = $STR_DZ_WPN_P99_DESC;
	
	class Attachments
	{
		Attachment_Sup10 = "P99_Black_SD_DZ";
	};	
};

class P99_Black_SD_DZ: M9SD
{
	displayName = $STR_DZ_WPN_P99SD_NAME;
	model = "\C1987_P99\P99_black_sd.p3d";
	picture = "\C1987_P99\equip\p99_black_sd.paa";
	soundBegin[] = {"begin1",1};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	begin1[] = {"\C1987_P99\sound\p99_sd.wss",1.0,1};
	reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss",0.1,1,20};
	magazines[] = {"15Rnd_10x22_p99_sd"};
	descriptionShort = $STR_DZ_WPN_P99SD_DESC;
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup10',_id,'P99_Black_DZ'] call player_removeAttachment";
		};
	};	
};

class P99_Green_DZ: P99_Black_DZ
{
	displayName = $STR_DZ_WPN_P99_NAME;
	model = "\C1987_P99\P99_green.p3d";
	picture = "\C1987_P99\equip\p99_green.paa";

	class Attachments
	{
		Attachment_Sup10 = "P99_Green_SD_DZ";
	};
};

class P99_Green_SD_DZ: P99_Black_SD_DZ
{
	displayName = $STR_DZ_WPN_P99SD_NAME;
	model = "\C1987_P99\P99_green_sd.p3d";
	picture = "\C1987_P99\equip\p99_green_sd.paa";
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup10',_id,'P99_Green_DZ'] call player_removeAttachment";
		};
	};
};

class P99_Silver_DZ: P99_Black_DZ
{
	displayName = $STR_DZ_WPN_P99_NAME;
	model = "\C1987_P99\P99_silver.p3d";
	picture = "\C1987_P99\equip\p99_silver.paa";
	
	class Attachments
	{
		Attachment_Sup10 = "P99_Silver_SD_DZ";
	};

};

class P99_Silver_SD_DZ: P99_Black_SD_DZ
{
	displayName = $STR_DZ_WPN_P99SD_NAME;
	model = "\C1987_P99\P99_silver_sd.p3d";
	picture = "\C1987_P99\equip\p99_silver_sd.paa";

	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup10',_id,'P99_Silver_DZ'] call player_removeAttachment";
		};
	};
};
