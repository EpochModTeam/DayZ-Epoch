class VAL_DZ: Groza9_DZ
{
	model = "\RH_aks\RH_asval.p3d";
	picture = "\RH_aks\inv\asval.paa";
	magazines[] = {"20Rnd_9x39_SP5_VSS","10Rnd_9x39_SP5_VSS"};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	displayname = $STR_DZ_WPN_ASVAL_NAME;
	descriptionShort = $STR_DZ_WPN_ASVAL_DESC;
	
	modes[] = {"Single","Full"};

	class Single: Mode_SemiAuto
	{
		dispersion = 0.0018;
		soundContinuous = 0;
		reloadTime = 0.1;
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
		begin1[] = {"\dayz_epoch_c\sounds\weapons\vss.ogg",1.0,1,50};
		begin2[] = {"\dayz_epoch_c\sounds\weapons\vss.ogg",1.0,1,50};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.05;
	};
	class Full: Mode_FullAuto
	{
		dispersion = 0.0018;
		soundContinuous = 0;
		reloadTime = 0.08;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\dayz_epoch_c\sounds\weapons\vss.ogg",1.0,1,50};
		begin2[] = {"\dayz_epoch_c\sounds\weapons\vss.ogg",1.0,1,50};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 60;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.05;
	};

	reloadMagazineSound[] = {"\RH_aks\sound\val_reload.wss",0.056234,1,20};
	
	class Attachments
	{
		Attachment_Kobra = "VAL_Kobra_DZ";
		Attachment_PSO1 = "VAL_PSO1_DZ";
	};
};

class VAL_Kobra_DZ: VAL_DZ
{
	model = "\RH_aks\RH_asvalk.p3d";
	picture = "\RH_aks\inv\asvalk.paa";
	displayName = $STR_DZ_WPN_ASVAL_Kobra_NAME;
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'VAL_DZ'] call player_removeAttachment";
		};
	};	
};

class VAL_PSO1_DZ: VAL_DZ
{
	model = "\RH_aks\RH_asvalsp.p3d";
	picture = "\RH_aks\inv\asvalsp.paa";
	displayName = $STR_DZ_WPN_ASVAL_PSO1_NAME;
	opticsFlare = "true";
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\optika_snpiere";
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'VAL_DZ'] call player_removeAttachment";
		};
	};
};