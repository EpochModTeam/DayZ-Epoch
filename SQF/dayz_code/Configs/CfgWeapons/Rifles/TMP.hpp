class TMP_DZ: MP5A5
{
	displayName = $STR_DZ_WPN_TMP_NAME;
	model = "\RH_smg\RH_tmp.p3d";
	picture = "\RH_smg\inv\tmp.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_tmp.rtm"};
	reloadMagazineSound[] = {"\RH_smg\sound\tmp_Reload.wss",0.056234,1,25};	
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\tmp.wss",1.778279,1,900};
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
		begin1[] = {"\RH_smg\sound\tmp.wss",1.778279,1,900};
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
	
	magazines[] = {"30Rnd_9x19_TMP"};

	class Attachments
	{
		Attachment_Sup9 = "TMP_SD_DZ";
		Attachment_CCO = "TMP_CCO_DZ";
		Attachment_Holo = "TMP_Holo_DZ";
	};
};

class TMP_CCO_DZ: TMP_DZ {
	displayName = $STR_DZ_WPN_TMP_CCO_NAME;
	model = "\RH_smg\RH_tmpaim.p3d";
	picture = "\RH_smg\inv\tmpaim.paa";	
	
	class Attachments
	{
		Attachment_Sup9 = "TMP_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'TMP_DZ'] call player_removeAttachment";
		};
	};	
};

class TMP_Holo_DZ: TMP_DZ {
	displayName = $STR_DZ_WPN_TMP_HOLO_NAME;
	model = "\RH_smg\RH_tmpeot.p3d";
	picture = "\RH_smg\inv\tmpeot.paa";	
	
	class Attachments
	{
		Attachment_Sup9 = "TMP_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'TMP_DZ'] call player_removeAttachment";
		};
	};	
};

class TMP_SD_DZ: MP5SD
{
	displayName = $STR_DZ_WPN_TMP_SD_NAME;
	model = "\RH_smg\RH_tmpsd.p3d";
	picture = "\RH_smg\inv\tmpsd.paa";	
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_tmp.rtm"};
	reloadMagazineSound[] = {"\RH_smg\sound\tmp_Reload.wss",0.056234,1,25};
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\tmpsd.wss",1.778279,1,50};
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
		begin1[] = {"\RH_smg\sound\tmpsd.wss",1.778279,1,50};
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
	
	magazines[] = {"30Rnd_9x19_TMPSD"};
	
	class Attachments
	{
		Attachment_CCO = "TMP_CCO_SD_DZ";
		Attachment_Holo = "TMP_Holo_SD_DZ";
	};	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'TMP_DZ'] call player_removeAttachment";
		};
	};
};

class TMP_CCO_SD_DZ: TMP_SD_DZ {
	displayName = $STR_DZ_WPN_TMP_CCO_SD_NAME;
	model = "\RH_smg\RH_tmpsdaim.p3d";
	picture = "\RH_smg\inv\tmpsdaim.paa";	
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'TMP_CCO_DZ'] call player_removeAttachment";
		};		
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'TMP_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class TMP_Holo_SD_DZ: TMP_SD_DZ {
	displayName = $STR_DZ_WPN_TMP_Holo_SD_NAME;
	model = "\RH_smg\RH_tmpsdeot.p3d";
	picture = "\RH_smg\inv\tmpsdeot.paa";	
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'TMP_Holo_DZ'] call player_removeAttachment";
		};		
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'TMP_SD_DZ'] call player_removeAttachment";
		};
	};	
};