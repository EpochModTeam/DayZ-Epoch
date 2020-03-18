class VSS_vintorez;
class VSS_vintorez_DZE: VSS_vintorez
{
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
	
	magazines[] = {"20Rnd_9x39_SP5_VSS", "10Rnd_9x39_SP5_VSS"};
};