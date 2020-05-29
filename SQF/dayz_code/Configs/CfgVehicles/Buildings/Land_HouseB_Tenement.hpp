class Land_HouseB_Tenement: House
	{
		armor = 180;
		model = "\Ca\Structures\House\HouseBT\HouseB_Tenement";
		scope = 1;
		featureSize = 50;
		class HitPoints
		{
			class Hit1
			{
				armor = 0.15;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0.0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = "false";
			};
		};
		class AnimationSources
		{
			class Lights_1
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Lights_2: Lights_1
			{
			};
		};
	};