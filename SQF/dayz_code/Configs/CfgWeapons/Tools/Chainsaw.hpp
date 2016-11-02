	class ChainSaw: Rifle
	{
		scope = public;
		//melee= "true";

		/*
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_wood_01",0.0707946,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_wood_02",0.0707946,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_wood_03",0.0707946,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_wood_04",0.0707946,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_wood_05",0.0707946,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_wood_06",0.0707946,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_wood_07",0.0707946,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.0707946,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.0707946,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.0707946,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.0707946,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.0707946,1,15};
		*/

		//soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};

		emptySound[] = {"",10,1};
		soundBullet[] = {"emptySound",1};


		model = "\z\addons\dayz_epoch\models\chainsaw.p3d";

		picture = "\z\addons\dayz_epoch\pictures\equip_chainsaw_CA.paa";

		displayName = $STR_EPOCH_CHAINSAW;

		cursor = "";
		cursoraim = "\ca\Weapons\Data\clear_empty";

		modes[] = {"manual"};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\z\addons\dayz_code\anim\saw_idle.rtm"
		};
		class manual: Mode_FullAuto
		{
			recoil = "recoil_auto_machinegun_10outof10";
			recoilProne = "recoil_auto_machinegun_prone_10outof10";

			dispersion = 0.2;

			begin1[] = {"\dayz_sfx\chainsaw\running2.ogg",1.77828,1,1000};
			soundBegin[] = {"begin1",1};

			//end1[] = {"\dayz_sfx\chainsaw\running2.ogg",1.77828,1,1000};
			//soundEnd[] = {"end1",1};

			distanceZoomMin = 50;
			distanceZoomMax = 50;
			canDrop = 0;
			UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
			optics = 1;
			modelOptics = "-";

			burst = 1;
			multiplier = 1;

			soundContinuous = 0;
			soundBurst = 0;

			useAction = 0;
			useActionTitle = "";

			// from hatchet
			minRange = 0.5;
			minRangeProbab = 0.8;
			midRange = 1;
			midRangeProbab = 1.5;
			maxRange = 2;
			maxRangeProbab = 2.5;

			showToPlayer = 1;
			//reloadTime = 0.0708762;
			reloadTime = 0.12;
			displayName = $STR_EPOCH_CHAINSAW_GAS;
		};
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		dexterity = 0.51;
		reloadMagazineSound[] = {"\dayz_sfx\chainsaw\start-attempt.ogg",0.1,1,20};
		drySound[] = {"\dayz_sfx\chainsaw\start-attempt.ogg",0.01,1,10};
		magazines[] = {"CSGAS"};
		class Library
		{
			libTextDesc = $STR_EPOCH_DESC_CHAINSAW;
		};
		descriptionShort = $STR_EPOCH_DESC_CHAINSAW;
	};
	class ChainSawB : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_B.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawB_CA.paa";
		descriptionShort = $STR_EPOCH_DESC_CHAINSAW_BLUE;
	};
	class ChainSawG : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_G.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawG_CA.paa";
		descriptionShort = $STR_EPOCH_DESC_CHAINSAW_GREEN;
	};
	class ChainSawP : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_P.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawP_CA.paa";
		descriptionShort = $STR_EPOCH_DESC_CHAINSAW_PINK;
	};
	class ChainSawR : ChainSaw {
		model = "\z\addons\dayz_epoch\models\chainsaw_R.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_chainsawR_CA.paa";
		descriptionShort = $STR_EPOCH_DESC_CHAINSAW_RED;
	};
