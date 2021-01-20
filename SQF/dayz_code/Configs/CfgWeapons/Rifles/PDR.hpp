class PDR_DZ: M4A1
{
	displayName = $STR_DZ_WPN_PDR_NAME;
	model = "\RH_smg\RH_pdr.p3d";
	picture = "\RH_smg\inv\pdr.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\RH_pdr.rtm"};
	reloadMagazineSound[] = {"\RH_smg\sound\MP5_Reload.wss",0.056234,1,25};
	modes[] = {"Single","FullAuto"};
	
	magazines[] = 
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36, 
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\pdr.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_smg\sound\pdr.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_2outof10";
		dispersion = 0.004;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 60;
		maxRangeProbab = 0.05;
	};
	
	class Attachments
	{
		Attachment_CCO = "PDR_CCO_DZ";
		Attachment_Holo = "PDR_Holo_DZ";
	};	
};

class PDR_CCO_DZ: PDR_DZ
{
	displayName = $STR_DZ_WPN_PDR_CCO_NAME;
	model = "\RH_smg\RH_pdraim.p3d";
	picture = "\RH_smg\inv\pdraim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'PDR_DZ'] call player_removeAttachment";
		};
	};	
};

class PDR_Holo_DZ: PDR_DZ
{
	displayName = $STR_DZ_WPN_PDR_HOLO_NAME;
	model = "\RH_smg\RH_pdreot.p3d";
	picture = "\RH_smg\inv\pdreot.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'PDR_DZ'] call player_removeAttachment";
		};
	};	
};