class Famas_DZ: M4A1
{
	displayName = $STR_DZ_WPN_FAMAS_NAME;
	model = "\C1987_Famas\Famas_f1.p3d";
	picture = "\C1987_Famas\equip\famas_f1.paa";
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons\Data\Anim\Bizon.rtm"};
	reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss",0.056234,1,20};
	modes[] = {"Single","Fullauto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\C1987_famas\sound\Famas.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\C1987_famas\sound\Famas.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
	descriptionShort = $STR_DZ_WPN_CZ_805A_DESC;
	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	
	class Attachments
	{
		Attachment_CCO = "Famas_CCO_DZ";
		Attachment_Holo = "Famas_Holo_DZ";
		Attachment_Sup556 = "Famas_SD_DZ";
	};	
};

class Famas_CCO_DZ: Famas_DZ
{
	displayName = $STR_DZ_WPN_FAMAS_COO_NAME;
	model = "\C1987_Famas\Famas_f1_aim.p3d";
	picture = "\C1987_Famas\equip\famas_f1_aim.paa";
	
	class Attachments
	{
		Attachment_Sup556 = "Famas_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Famas_DZ'] call player_removeAttachment";
		};
	};	
};

class Famas_Holo_DZ: Famas_DZ
{
	displayName = $STR_DZ_WPN_FAMAS_HOLO_NAME;
	model = "\C1987_Famas\Famas_f1_eot.p3d";
	picture = "\C1987_Famas\equip\famas_f1_eot.paa";
	
	class Attachments
	{
		Attachment_Sup556 = "Famas_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Famas_DZ'] call player_removeAttachment";
		};
	};	
};

class Famas_SD_DZ: M4A1_AIM_SD_camo
{
	displayName = $STR_DZ_WPN_FAMAS_SD_NAME;
	model = "\C1987_Famas\Famas_f1_sd.p3d";
	picture = "\C1987_Famas\equip\famas_f1_sd.paa";
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons\Data\Anim\Bizon.rtm"};
	reloadMagazineSound[] = {"\C1987_Famas\sound\Famas_Reload.wss",0.056234,1,20};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	modes[] = {"Single","Fullauto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\C1987_famas\sound\Famas_sd.wss",1.0,1,300};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\C1987_famas\sound\Famas_sd.wss",1.0,1,300};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
	descriptionShort = $STR_DZ_WPN_CZ_805A_SD_DESC;
	
	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};	
	
	class Attachments
	{
		Attachment_CCO = "Famas_CCO_SD_DZ";
		Attachment_Holo = "Famas_Holo_SD_DZ";
	};	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Famas_DZ'] call player_removeAttachment";
		};
	};	
};

class Famas_CCO_SD_DZ: Famas_SD_DZ
{
	displayName = $STR_DZ_WPN_FAMAS_COO_SD_NAME;
	model = "\C1987_Famas\Famas_f1_aim_sd.p3d";
	picture = "\C1987_Famas\equip\famas_f1_aim_sd.paa";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Famas_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Famas_CCO_DZ'] call player_removeAttachment";
		};
	};	
};

class Famas_Holo_SD_DZ: Famas_SD_DZ
{
	displayName = $STR_DZ_WPN_FAMAS_HOLO_SD_NAME;
	model = "\C1987_Famas\Famas_f1_eot_sd.p3d";
	picture = "\C1987_Famas\equip\famas_f1_eot_sd.paa";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Famas_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Famas_Holo_DZ'] call player_removeAttachment";
		};
	};	
};

