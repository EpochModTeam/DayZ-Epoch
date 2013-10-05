class PZombie_VB: Citizen1
{
	side = 1;
	glassesEnabled = 0;
	moves = "CfgMovesZombie";
	gestures = "CfgGesturesMale";

	weapons[] = {};
	weaponSlots = "";
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {};
	respawnMagazines[] = {};

	faceType = "ZFaces";
	identityTypes[] = {"Zombie1","Zombie2"};
	extCameraPosition[] = {0,1.5,-9};
	
	canHideBodies = 0;
};
class pz_policeman: PZombie_VB
{
	model = "\ca\characters2\civil\Policeman\Policeman";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat","ca\characters2\civil\policeman\data\w1_policeman.rvmat","ca\characters2\civil\policeman\data\w2_policeman.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};
class pz_suit1: PZombie_VB
{
	model = "\ca\characters2\civil\Functionary\Functionary";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat","ca\characters2\civil\Functionary\data\W1_Functionary.rvmat","ca\characters2\civil\Functionary\data\W2_Functionary.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};
class pz_suit2: pz_suit1
{
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
};
class pz_worker1: PZombie_VB
{
	model = "\Ca\characters_E\Overall\Overall";
	hiddenSelections[] = {"Camo"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat","Ca\characters_E\Overall\Data\W1_Overall.rvmat","Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
	};
	hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\overall\Overall_4_co.paa"};
};
class pz_worker2: pz_worker1
{
	hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\overall\overall_2_co.paa"};
};
class pz_worker3: pz_worker1
{
	hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\overall\Overall_3_co.paa"};
};

class pz_doctor: PZombie_VB
{
	model = "\ca\characters2\civil\Doctor\Doctor";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\doctor_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat","ca\characters2\civil\doctor\data\W1_doctor.rvmat","ca\characters2\civil\doctor\data\W2_doctor.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};
class pz_teacher: pz_doctor
{
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\teacher_co.paa"};
};
class pz_hunter: PZombie_VB
{
	model = "\ca\characters2\civil\Woodlander\Woodlander";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\woodlander\data\woodlander_v3_co.paa"}; 
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};
class pz_villager1: PZombie_VB
{
	model = "\ca\characters2\civil\Villager\Villager";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\villager\villager_v4_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters2\Civil\Villager\Data\villager.RVmat","ca\characters2\Civil\Villager\Data\villager_w1.RVmat","ca\characters2\Civil\Villager\Data\villager_w2.RVmat"};
	};
};
class pz_villager2: pz_villager1
{
	hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\villager\villager_v2_co.paa"};
};
class pz_villager3: pz_villager1
{
	hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\villager\villager_v3_co.paa"};
};
class pz_priest: PZombie_VB
{
	model = "\ca\characters2\civil\Priest\Priest";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\priest\data\priest.rvmat","ca\characters2\civil\priest\data\W1_priest.rvmat","ca\characters2\civil\priest\data\W2_priest.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};