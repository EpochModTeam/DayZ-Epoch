class PDW_DZ : UZI_EP1
{
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_de\Sound\muzi.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_de\Sound\muzi.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundBurst = 0;
		reloadTime = 0.075;
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};
	
	magazines[] = {"30Rnd_9x19_UZI"};

	class Attachments
	{
		Attachment_Sup9 = "PDW_SD_DZ";
	};
};

class PDW_SD_DZ : UZI_SD_EP1
{
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\mp5sd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_smg\sound\mp5sd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		soundBurst = 0;
		reloadTime = 0.075;
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};	
	
	magazines[] = {"30Rnd_9x19_UZI_SD"};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'PDW_DZ'] call player_removeAttachment";
		};
	};
};