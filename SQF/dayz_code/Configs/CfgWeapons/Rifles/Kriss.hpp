class Kriss_DZ: MP5_DZ
{
	displayName = $STR_DZ_WPN_KRISS_NAME;
	descriptionShort = $STR_DZ_WPN_KRISS_DESC;
	model = "\RH_smg\RH_kriss.p3d";
	picture = "\RH_smg\inv\kriss.paa";
	magazines[] = {"33Rnd_45ACP_KRISS"};
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_Kris1.rtm"};
	reloadMagazineSound[] = {"\RH_smg\Sound\kriss_reload.wss",0.056234,1,25};
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\kriss.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_2outof10";
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
		begin1[] = {"\RH_smg\sound\kriss.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		recoil = "recoil_auto_primary_2outof10";
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
		Attachment_CCO = "Kriss_CCO_DZ";
		Attachment_Holo = "Kriss_Holo_DZ";
		Attachment_Sup45 = "Kriss_SD_DZ";
	};
};

class Kriss_CCO_DZ: Kriss_DZ
{
	displayname = $STR_DZ_WPN_KRISS_CCO_NAME;
	model = "\RH_smg\RH_krissaim.p3d";
	picture = "\RH_smg\inv\krissaim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments
	{
		Attachment_Sup45 = "Kriss_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Kriss_DZ'] call player_removeAttachment";
		};
	};	
};

class Kriss_Holo_DZ: Kriss_DZ
{
	displayname = $STR_DZ_WPN_KRISS_HOLO_NAME;
	model = "\RH_smg\RH_krisseot.p3d";
	picture = "\RH_smg\inv\krisseot.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments
	{
		Attachment_Sup45 = "Kriss_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Kriss_DZ'] call player_removeAttachment";
		};
	};	
};

class Kriss_SD_DZ: MP5_SD_DZ
{
	displayName = $STR_DZ_WPN_KRISS_SD_NAME;
	descriptionShort = $STR_DZ_WPN_KRISS_SD_DESC;
	model = "\RH_smg\RH_krisssd.p3d";
	picture = "\RH_smg\inv\krisssd.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_Kris1.rtm"};
	reloadMagazineSound[] = {"\RH_smg\Sound\kriss_reload.wss",0.056234,1,25};
	magazines[] = {"33Rnd_45ACP_KRISSSD"};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\umpsd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_2outof10";
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
		recoil = "recoil_auto_primary_2outof10";
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
		Attachment_CCO = "Kriss_CCO_SD_DZ";
		Attachment_Holo = "Kriss_Holo_SD_DZ";
	};	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'Kriss_DZ'] call player_removeAttachment";
		};
	};	
};

class Kriss_CCO_SD_DZ: Kriss_SD_DZ
{
	displayname = $STR_DZ_WPN_KRISS_CCO_SD_NAME;
	model = "\RH_smg\RH_krisssdaim.p3d";
	picture = "\RH_smg\inv\krisssdaim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Kriss_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'Kriss_CCO_DZ'] call player_removeAttachment";
		};
	};	
};

class Kriss_Holo_SD_DZ: Kriss_SD_DZ
{
	displayname = $STR_DZ_WPN_KRISS_HOLO_SD_NAME;
	model = "\RH_smg\RH_krisssdeot.p3d";
	picture = "\RH_smg\inv\krisssdeot.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Kriss_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup45',_id,'Kriss_Holo_DZ'] call player_removeAttachment";
		};
	};	
};