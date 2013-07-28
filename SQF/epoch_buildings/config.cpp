////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.97
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class epoch_buildings : config.bin{
class CfgPatches
{
	class epoch_buildings
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_code"};
	};
};
class CfgVehicles
{
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class land_army_hut_int: House 
	{
		scope = 1;
		model = "\epoch_buildings\models\army_hut_int.p3d";
		destrType="DestructBuilding";
		armor = 500;
	  class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\epoch_buildings\models\army_hut_int_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};
	class land_army_hut2_int: House 
	{
		scope = 1;
		model = "\epoch_buildings\models\army_hut2_int.p3d";
		destrType="DestructBuilding";
		armor = 500;
		class DestructionEffects: DestructionEffects
		  {
		   class Ruin1
			   {
			    simulation = "ruin";
			    type = "\epoch_buildings\models\ruins\army_hut_int_ruins.p3d";
			    position = "";
			    intensity = 1;
			    interval = 1;
			    lifeTime = 1;
			   };
		  };
	};
	class Land_army_hut3_long_int: House
	{
		scope = 1;
		armor = 500;
		model = "\epoch_buildings\models\army_hut3_long_int.p3d";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\epoch_buildings\models\ruins\army_hut3_long_int_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
};
//};
