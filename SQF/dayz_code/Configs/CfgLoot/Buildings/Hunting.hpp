class Hunting : Default
{
	zombieChance = 0.6;
	minRoaming = 1;
	maxRoaming = 3;
	zombieClass[] = {"z_hunter","z_hunter","z_hunter","z_hunter2","z_hunter2","z_hunter3","z_hunter3","z_hunter4","z_hunter4"};
	lootChance = 0.8;
	lootGroup = Hunting;
};

class Land_Misc_deerstand: Hunting
{
	zombieChance = 0.3;
	maxRoaming = 3;
	zedPos[] = {{0.419922,-0.234375,0.985291},{-0.836914,-0.929688,0.985291}};
	lootChance = 0.5;
	//lootPos[] = {{-0.836914,-0.929688,0.985291},{0.419922,-0.234375,0.985291}};
	lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
};