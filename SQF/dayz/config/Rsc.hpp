class RscTitles
{
	titles[] = {"DeathScreen", "TitleScreen", "RscTitleStructuredText"};
	
	class DeathScreen
	{
		idd = -1;
		movingEnable = 0;
		duration = 120;
		fadein = 0;
		name = "DeathScreen";
		controls[] = {"DeathScreen"};
		
		class DeathScreen : RscPicture
		{
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\z\addons\dayz_epoch\ui\screen_death_ca.paa";
		};
	};
	
	class TitleScreen
	{
		idd = -1;
		movingEnable = 0;
		duration = 120;
		fadein = 0;
		name = "TitleScreen";
		controls[] = {"TitleScreen"};
		
		class TitleScreen : RscPicture
		{
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\dayz\ui\screen_title_ca.paa";
		};
	};
};