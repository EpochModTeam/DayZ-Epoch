class PKM_DZ : PK
{
	type = WeaponSlotPrimary;
	
	model = "z\addons\dayz_communityweapons\pkm\pkm.p3d";
	displayName = $STR_DZ_WPN_PKM_NAME;
	
	magazines[] = {100Rnd_762x54_PK};
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 2;
	
	modes[] = {FullAuto};
	
	class FullAuto : manual
	{
		reloadTime = 0.08;
	};
};