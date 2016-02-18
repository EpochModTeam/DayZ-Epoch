class HouseRoaming : Residential
{
	zombieChance = 0.2;
	maxRoaming = 2;
};

class FarmRoaming : Farm
{
	zombieChance = 0.4;
	maxRoaming = 2;
};

class Land_Shed_W03 : HouseRoaming {};
class Land_HouseV_2T1 : HouseRoaming {};
class Land_HouseV_3I2 : HouseRoaming {};
class Land_HouseV_3I3 : HouseRoaming {};
class Land_HouseBlock_A1_2 : HouseRoaming {};
class Land_HouseBlock_A2 : HouseRoaming {};
class Land_HouseBlock_B1 : HouseRoaming {};
class Land_HouseBlock_B2 : HouseRoaming {};
class Land_HouseBlock_B3 : HouseRoaming {};
class Land_HouseBlock_B4 : HouseRoaming {};
class Land_HouseBlock_C2 : HouseRoaming {};
class Land_HouseBlock_C3 : HouseRoaming {};
class Land_HouseBlock_C4 : HouseRoaming {};
class Land_HouseBlock_C5 : HouseRoaming {};
class Land_Misc_Cargo1D : HouseRoaming {};
class Land_Ind_Shed_01_end : HouseRoaming {};

class Land_A_statue01 : HouseRoaming
{
	zombieClass[] =
	{
		"zZombie_Base",
		"zZombie_Base",
		"z_teacher",
		"z_suit1",
		"z_suit2",
		"z_soldier",
		"z_soldier_heavy",
		"z_policeman"
	};
	minRoaming = 2;
	maxRoaming = 8;
};

class GraveCross1 : HouseRoaming {};
class GraveCross2 : HouseRoaming {};

class Grave : HouseRoaming
{
	maxRoaming = 3;
};

class GraveCrossHelmet : Military
{	
	maxRoaming = 4;
};

class Land_Dam_Conc_20 : HouseRoaming
{
	//lootPos[] = {{5.75,1.14,9.1},{3.11,1.22,9.09},{-4.22,9.19,9.11}};
	zedPos[] = {{3.11,1.22,9.09},{5.75,1.14,9.1},{-4.22,9.19,9.11}};
	lootChance = 0.4;
};

class Land_Misc_Scaffolding : HouseRoaming
{
	//lootPos[] = {{0.43,6.92,0.45},{-0.16,-0.47,3.41},{-0.14,7.64,3.39},{-0.03,3.1,0.45}};
	zedPos[] = {{-0.03,3.1,0.45},{0.43,6.92,0.45}};
};