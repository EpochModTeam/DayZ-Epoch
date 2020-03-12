class UMP_DZ: MP5A5
{
	displayName = $STR_DZ_WPN_UMP_NAME;
	descriptionShort = $STR_DZ_WPN_UMP_DESC;
	model = "\RH_smg\RH_UMP.p3d";
	picture = "\RH_smg\inv\ump.paa";
	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_smg\sound\ump_Reload.wss",0.056234,1,25};
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\ump.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_1outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;		
	};
	
	delete Burst; 
	
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_smg\sound\ump.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		recoil = "recoil_auto_primary_1outof10";
		recoilProne = "recoil_auto_primary_prone_1outof10";
		dispersion = 0.003;
		minRange = 0;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;		
	};
	
	magazines[] = {"25Rnd_45ACP_UMP"};

	class Attachments
	{
		Attachment_Sup45 = "UMP_SD_DZ";
		Attachment_CCO = "UMP_CCO_DZ";
		Attachment_Holo = "UMP_Holo_DZ";
	};
};

class UMP_CCO_DZ: UMP_DZ {
	displayName = $STR_DZ_WPN_UMP_CCO_NAME;
	model = "\RH_smg\RH_umpaim.p3d";
	picture = "\RH_smg\inv\umpaim.paa";
	
	class Attachments
	{
		Attachment_Sup45 = "UMP_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'UMP_DZ'] call player_removeAttachment";
		};
	};	
};

class UMP_Holo_DZ: UMP_DZ {
	displayName = $STR_DZ_WPN_UMP_HOLO_NAME;
	model = "\RH_smg\RH_umpeot.p3d";
	picture = "\RH_smg\inv\umpeot.paa";
	
	class Attachments
	{
		Attachment_Sup45 = "UMP_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'UMP_DZ'] call player_removeAttachment";
		};
	};	
};

class UMP_SD_DZ: MP5SD
{
	displayName = $STR_DZ_WPN_UMP_SD_NAME;
	descriptionShort = $STR_DZ_WPN_UMP_SD_DESC;
	model = "\RH_smg\RH_umpsd.p3d";
	picture = "\RH_smg\inv\umpsd.paa";
	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_smg\sound\ump_Reload.wss",0.056234,1,25};
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\umpsd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_1outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;			
	};
	
	delete Burst; 
	
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_smg\sound\umpsd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		recoil = "recoil_auto_primary_1outof10";
		recoilProne = "recoil_auto_primary_prone_1outof10";
		dispersion = 0.003;
		minRange = 0;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;			
	};	
	
	magazines[] = {"25Rnd_45ACP_UMPSD"};
	
	class Attachments
	{
		Attachment_CCO = "UMP_CCO_SD_DZ";
		Attachment_Holo = "UMP_Holo_SD_DZ";
	};	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'UMP_DZ'] call player_removeAttachment";
		};
	};
};

class UMP_CCO_SD_DZ: UMP_SD_DZ {
	displayName = $STR_DZ_WPN_UMP_CCO_SD_NAME;
	model = "\RH_smg\RH_umpsdaim.p3d";
	picture = "\RH_smg\inv\umpsdaim.paa";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'UMP_CCO_DZ'] call player_removeAttachment";
		};		
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'UMP_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class UMP_Holo_SD_DZ: UMP_SD_DZ {
	displayName = $STR_DZ_WPN_UMP_Holo_SD_NAME;
	model = "\RH_smg\RH_umpsdeot.p3d";
	picture = "\RH_smg\inv\umpsdeot.paa";

	class Attachments {};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'UMP_Holo_DZ'] call player_removeAttachment";
		};		
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'UMP_SD_DZ'] call player_removeAttachment";
		};
	};	
};