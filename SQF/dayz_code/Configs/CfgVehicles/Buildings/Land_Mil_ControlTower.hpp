class Land_Mil_ControlTower: House
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Mil\Mil_ControlTower_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.25;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
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
			class Hit2
			{
				armor = 0.25;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
				convexComponent = "dam 2";
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
			class Hit3
			{
				armor = 0.25;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
				convexComponent = "dam 3";
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
			class Hit4
			{
				armor = 0.25;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
				convexComponent = "dam 4";
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
			class Hit5
			{
				armor = 0.25;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
				convexComponent = "dam 5";
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
			class Hit6
			{
				armor = 0.25;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
				convexComponent = "dam 6";
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
			class Hitglass
			{
				armor = 0.0005;
				material = -1;
				name = "dam glass";
				visual = "damTglass";
				passThrough = 0;
				convexComponent = "dam glass";
			};
			class Hittower
			{
				armor = 0.0005;
				material = -1;
				name = "dam tower";
				visual = "damTtower";
				passThrough = 0;
				convexComponent = "dam tower";
			};
		};
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4","Hit5","Hit6"};
		class Damage
		{
			tex[] = {};
			mat[] = {"CA\Structures\Mil\Data\Mil_ControlTower_windows1.rvmat","CA\Structures\Mil\Data\destruct_half_Mil_ControlTower_windows1.rvmat","CA\Structures\Mil\Data\destruct_full_Mil_ControlTower_windows1.rvmat"};
		};
		model = "\CA\Structures\Mil\Mil_ControlTower";
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		class AnimationSources
		{
			class dvere_spodni_R
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
			class dvere_spodni_L
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class dvere_vrchni
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class HitTower
			{
				source = "Hit";
				hitpoint = "HitTower";
				raw = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName = $STR_DN_OUT_O_DOOR;
				position = "Dvere_spodni_R_osa";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere_spodni_R"" < 0.5";
				statement = "this animate [""Dvere_spodni_R"", 1];this animate [""Dvere_spodni_L"", 1]";
			};
			class CloseDoors1: OpenDoors1
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Dvere_spodni_R"" >= 0.5";
				statement = "this animate [""Dvere_spodni_R"", 0];this animate [""Dvere_spodni_L"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName = $STR_DN_OUT_O_DOOR;
				position = "Dvere_Vrchni_osa";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere_vrchni"" < 0.5";
				statement = "this animate [""dvere_vrchni"", 1]";
			};
			class CloseDoors3: OpenDoors3
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""dvere_vrchni"" >= 0.5";
				statement = "this animate [""dvere_vrchni"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors3";
		actionEnd2 = "OpenDoors3";
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
		replaceDamaged = "Land_Mil_ControlTower_dam";
	};