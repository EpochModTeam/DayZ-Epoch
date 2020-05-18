class Land_A_FuelStation_Feed: Strategic
{
	model = "\ca\structures\House\A_FuelStation\A_FuelStation_Feed";
	transportFuel = 0; //50000;
	nameSound = "fuelstation";
};

class Land_Ind_FuelStation_Feed_EP1: Strategic
{
	model = "\ca\Structures_E\Ind\Ind_FuelStation\Ind_FuelStation_Feed_ep1.p3d";
	transportFuel = 0;
	nameSound = "fuelstation";
};
class FuelStation : Strategic {
  icon = "\Ca\buildings\Icons\i_fuel_CA.paa";
  scope = private;
  animated = 0;
  armor = 2000;
  displayName = "Fuel station";
  accuracy = 0.5;
  transportFuel = 0;
};

class Land_FuelStation_Feed_PMC : Strategic {
  model = "\ca\Structures_PMC\Ind\FuelStation\FuelStation_Feed_PMC.p3d";
  transportFuel = 0;
  nameSound = "fuelstation";
};

// lingor
class Land_ibr_FuelStation_Feed : Strategic {
	model = "\ibr\lingor_fuel\ibr_FuelStation_Feed.p3d";
	transportFuel = 0;
	nameSound = "fuelstation";
};
// lingor
class Land_fuelstation_army : Strategic {
	model = "\ibr\ibr_plants\fuelstation_army";
	transportFuel = 0;
	nameSound = "fuelstation";
};
// lingor
class Land_fuelstation : Strategic {
	model = "\ibr\ibr_plants\fuelstation";
	transportFuel = 0;
	nameSound = "fuelstation";
};

// Panthera
class Land_benzina_schnell: Strategic
{
	model = "\ibr\ibr_plants\benzina_schnell";
	transportFuel = 0;
	nameSound = "fuelstation";
};