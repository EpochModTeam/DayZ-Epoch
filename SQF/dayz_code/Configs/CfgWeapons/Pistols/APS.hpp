class APS_DZ: Makarov
{
	scope = 2;
	model = "\RH_aks\RH_aps.p3d";
	modelOptics = "-";
	picture = "\RH_aks\inv\aps.paa";
	distanceZoomMin = 56;
	distanceZoomMax = 56;
	optics = "true";
	displayName = $STR_DZ_WPN_APS_NAME;
	descriptionShort = $STR_DZ_WPN_APS_DESC;
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_aks\sound\aps_reload.wss",0.1,1,20};
	magazines[] = {"20Rnd_9x18_APS"};
	
	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_aks\sound\aps.wss",0.794328,1,700};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		dispersion = 0.006;
		reloadTime = 0.10909091;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 1.5;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.4;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_aks\sound\aps.wss",0.794328,1,700};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 0.007;
		reloadTime = 0.10909091;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		ffCount = 3;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 2;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 0.001;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.7;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.2;
	};
	class Library
	{
		libTextDesc = "The APS is a simple blowback pistol, of al steel construction, with external hammer and a double action trigger. A three-position safety lever, located on the slide, also acts as fire mode selector, allowing for single-shot or full automatic fire. To slow the rate of fire down to controllable 600 rounds per minute, APS featured a plunger-type fire rate reducer, located in the grip. return spring is located around the barrel. Front sight is fixed to the slide, rear sight is adjustable for range, with settings for 25, 50 and optimistic 100 and 200 meters. To further improve the long range and full automatic mode accuracy, a shoulder stock / holster can be attached to the grip. early holsters / stocks were made from wood, latter from brow plastic.";
	};
	
	class Attachments
	{
		Attachment_Sup9 = "APS_SD_DZ";
	};	
};

class APS_SD_DZ: MakarovSD
{
	scope = 2;
	model = "\RH_aks\RH_apssd.p3d";
	modelOptics = "-";
	picture = "\RH_aks\inv\apssd.paa";
	distanceZoomMin = 56;
	distanceZoomMax = 56;
	optics = "true";
	displayName = $STR_DZ_WPN_APSSD_NAME;
	descriptionShort = $STR_DZ_WPN_APSSD_DESC;	
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_aks\sound\aps_reload.wss",0.1,1,20};
	magazines[] = {"20Rnd_9x18_APSSD"};
	
	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_aks\sound\apssd.wss",0.316228,1,50};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		dispersion = 0.006;
		reloadTime = 0.10909091;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 1.5;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.4;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_aks\sound\apssd.wss",0.316228,1,50};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 0.007;
		reloadTime = 0.10909091;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		ffCount = 3;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 2;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 0.001;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.7;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.2;
	};
	class Library
	{
		libTextDesc = "The APS is a simple blowback pistol, of al steel construction, with external hammer and a double action trigger. A three-position safety lever, located on the slide, also acts as fire mode selector, allowing for single-shot or full automatic fire. To slow the rate of fire down to controllable 600 rounds per minute, APS featured a plunger-type fire rate reducer, located in the grip. return spring is located around the barrel. Front sight is fixed to the slide, rear sight is adjustable for range, with settings for 25, 50 and optimistic 100 and 200 meters. To further improve the long range and full automatic mode accuracy, a shoulder stock / holster can be attached to the grip. early holsters / stocks were made from wood, latter from brow plastic.";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'APS_DZ'] call player_removeAttachment";
		};
	};	
};