class P90_DZ: MP5_DZ
{
	displayName = $STR_DZ_WPN_P90_NAME;
	descriptionShort = $STR_DZ_WPN_P90_DESC;
	model = "\RH_smg\RH_p90.p3d";
	picture = "\RH_smg\inv\p90.paa";
	magazines[] = {"50Rnd_57x28_P90"};
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_p90.rtm"};
	reloadMagazineSound[] = {"\RH_smg\sound\p90_Reload.wss",0.056234,1,25};
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\p90s.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
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
		begin1[] = {"\RH_smg\sound\p90s.wss",1.778279,1,900};
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
		Attachment_CCO = "P90_CCO_DZ";
		Attachment_Holo = "P90_Holo_DZ";
		Attachment_Sup57 = "P90_SD_DZ";
	};
};

class P90_CCO_DZ: P90_DZ
{
	displayname = $STR_DZ_WPN_P90_CCO_NAME;
	model = "\RH_smg\RH_p90aim.p3d";
	picture = "\RH_smg\inv\p90aim.paa";
	
	class Attachments
	{
		Attachment_Sup57 = "P90_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'P90_DZ'] call player_removeAttachment";
		};
	};	
};

class P90_Holo_DZ: P90_DZ
{
	displayname = $STR_DZ_WPN_P90_HOLO_NAME;
	model = "\RH_smg\RH_p90eot.p3d";
	picture = "\RH_smg\inv\p90eot.paa";
	
	class Attachments
	{
		Attachment_Sup57 = "P90_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'P90_DZ'] call player_removeAttachment";
		};
	};	
};

class P90_SD_DZ: MP5_SD_DZ
{
	displayName = $STR_DZ_WPN_P90_SD_NAME;
	descriptionShort = $STR_DZ_WPN_P90_SD_DESC;
	model = "\RH_smg\RH_P90sd.p3d";
	picture = "\RH_smg\inv\P90sd.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_p90.rtm"};
	reloadMagazineSound[] = {"\RH_smg\sound\p90_Reload.wss",0.056234,1,25};
	magazines[] = {"50Rnd_57x28_P90SD"};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\p90sds.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
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
		begin1[] = {"\RH_smg\sound\p90sds.wss",1.778279,1,50};
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
		Attachment_CCO = "P90_CCO_SD_DZ";
		Attachment_Holo = "P90_Holo_SD_DZ";
	};	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup57',_id,'P90_DZ'] call player_removeAttachment";
		};
	};	
};

class P90_CCO_SD_DZ: P90_SD_DZ
{
	displayname = $STR_DZ_WPN_P90_CCO_SD_NAME;
	model = "\RH_smg\RH_p90sdaim.p3d";
	picture = "\RH_smg\inv\p90sdaim.paa";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'P90_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup57',_id,'P90_CCO_DZ'] call player_removeAttachment";
		};
	};	
};

class P90_Holo_SD_DZ: P90_SD_DZ
{
	displayname = $STR_DZ_WPN_P90_HOLO_SD_NAME;
	model = "\RH_smg\RH_p90sdeot.p3d";
	picture = "\RH_smg\inv\p90sdeot.paa";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'P90_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup57',_id,'P90_Holo_DZ'] call player_removeAttachment";
		};
	};	
};