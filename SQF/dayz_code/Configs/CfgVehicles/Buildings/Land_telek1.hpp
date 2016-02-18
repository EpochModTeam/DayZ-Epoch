class Land_telek1: House
	{
		scope = 1;
		armor = 600;
		destrType = "DestructBuilding";
		model = "\ca\buildings\telek1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\telek1_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
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
		displayName = "Telek 1";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"}};
	};