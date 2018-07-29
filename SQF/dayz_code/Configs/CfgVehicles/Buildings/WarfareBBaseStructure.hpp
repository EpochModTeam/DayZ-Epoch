class WarfareBBaseStructure;

class Base_WarfareBVehicleServicePoint: WarfareBBaseStructure
{
	//Disable Arma's automatic vehicle rearm, refuel and repair. Also needed on Refuel, Repair and Reammo trucks
	transportAmmo = 0;
	transportFuel = 0;
	transportRepair = 0;
};