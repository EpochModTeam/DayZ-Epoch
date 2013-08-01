	class DMR_DZ : DMR {
		model = "\ca\weapons\DMR\us_dmr";
		picture = "\ca\weapons\data\equip\W_US_DMR_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		modelOptics = "\ca\Weapons\2Dscope_MilDot_10";
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit = 0.0711;
		opticsZoomMin = 0.0249;
		distanceZoomMin = 400;
		opticsZoomMax = 0.0711;
		distanceZoomMax = 120;
		dexterity = 1.55;
		magazines[] = {"20Rnd_762x51_DMR"};
		reloadTime = 2;
		backgroundReload = 1;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		modes[] = {"Single"};
	};