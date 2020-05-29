class Land_Farm_WTower: House
	{
		scope = 1;
		armor = 100;
		model = "\CA\buildings2\Farm_WTower\Farm_WTower";
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
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\buildings2\Farm_WTower\Farm_WTower_ruins";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};