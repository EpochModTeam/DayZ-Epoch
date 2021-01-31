class Land_Shed_M01: House {
	
	scope = 2;
	armor = 30;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Shed_M01.p3d";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\ca\Buildings2\Shed_small\Shed_M01_ruins";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};		
	
	class AnimationSources
	{
		class open//DoorR 
		{
		  source = "User";
		  animPeriod = 1;
		  initPhase = 0;
		};
	};
	class UserActions
	{
		class CloseDoor
		{
			position = "";
			displayName = $STR_DN_OUT_C_DOOR;
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase 'open' == 1";
			statement = "this animate ['open', 0];";
		};
		class OpenDoor
		{
			position = "";
			displayName = $STR_DN_OUT_O_DOOR;
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase 'open' == 0";
			statement = "this animate ['open', 1];";
		};
	};	
};