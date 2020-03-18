class Construction : Default
{
	zombieChance = 0.2;
	maxRoaming = 1;
	zombieClass[] =
	{
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_worker4"
	};
	lootChance = 0.4;
	lootGroup = Construction;
};

class Land_wagon_box : Construction
{
	zedPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
};

class Land_transport_cart_EP1 : Construction
{
	lootPos[] = {{-0.01,0.24,0.16}};
};

class Land_wagon_flat : Construction
{
	lootPos[] = {{0.02,6.44,0.28},{0.12,4.54,0.28},{0.22,2.57,0.28},{0.32,0.68,0.28},{0.43,-1.48,0.28},{0.54,-3.85,0.28},{0.03,-6.13,0.28}};
};

class Land_wagon_tanker : Construction
{
	lootPos[] = {{0.05,4.78,-0.73},{-0.05,-4.71,-0.73}};
};

class MAP_Misc_Greenhouse : Construction
{
	lootPos[] = {{0.73,-0.1,-0.73},{0,-0.1,-0.74},{-1.84,-0.02,-0.8}};
};

class Misc_Cargo1Bo_military : Construction
{
	lootPos[] = {{0.35,-1.66,-1.09},{-0.06,0.27,-1.09},{-0.34,1.84,-1.09}};
};