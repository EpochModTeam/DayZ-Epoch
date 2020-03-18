class Mac10_DZ: PDW_DZ
{
	model = "\RH_smg\RH_mac10p.p3d";
	picture = "\RH_smg\inv\mac10.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	displayName = $STR_DZ_WPN_MAC10_NAME;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.003162,1,10};
	reloadMagazineSound[] = {"\RH_smg\Sound\Mac10_reload.wss",0.056234,1,25};
	distanceZoomMin = 107;
	distanceZoomMax = 107;
	modes[] = {"Single","FullAuto"};
	
	class Attachments {};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\mac10.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		dispersion = 0.006;
		reloadTime = 0.06315789;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_smg\sound\mac10.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		dispersion = 0.007;
		reloadTime = 0.06315789;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		ffCount = 1;
		aiRateOfFire = 0.001;
		minRange = 2;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
};