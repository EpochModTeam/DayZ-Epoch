class Land_NAV_Lighthouse: House
	{
		scope = 1;
		armor = 500;
		featureSize = 15;
		model = "\Ca\Structures\NAV\NAV_Lighthouse";
		ladders[] = {{"start1","end1"}};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				brightness = 0;
				period[] = {0,1};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\structures\nav\data\nav_lighthouse_multi.rvmat","ca\structures\nav\data\destruct_half_nav_lighthouse_multi.rvmat","ca\structures\nav\data\destruct_full_nav_lighthouse_multi.rvmat","ca\structures\nav\data\nav_lighthouse_windows.rvmat","ca\structures\nav\data\destruct_half_lighthouse_windows.rvmat","ca\structures\nav\data\destruct_full_lighthouse_windows.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_NAV_Lighthouse2: Land_NAV_Lighthouse
	{
		model = "\Ca\Structures\NAV\NAV_Lighthouse2";
		class Reflectors: Reflectors
		{
			class MainLight: MainLight
			{
				period[] = {0,1};
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};