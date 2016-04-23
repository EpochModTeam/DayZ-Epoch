class InfectedCamp : Residential
{
	zombieChance = 1;
	minRoaming = 3;
	maxRoaming = 4;
	zedPos[] = {{0,0,0}};
	lootChance = 0;
};

class IC_Fireplace1 : InfectedCamp
{
	zombieChance = 0;
	minRoaming = 3;
	maxRoaming = 4;
};

class IC_DomeTent : InfectedCamp
{
	zombieChance = 1;
	minRoaming = 1;
	maxRoaming = 3;
};

class IC_Tent : InfectedCamp
{
	zombieChance = 1;
	minRoaming = 1;
	maxRoaming = 3;
};