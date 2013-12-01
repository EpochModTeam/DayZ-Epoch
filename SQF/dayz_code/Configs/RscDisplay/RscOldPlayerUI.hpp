class RscTitles
{
	titles[] = {"DeathScreen","TitleScreen","RscTitleStructuredText"};
	class DeathScreen
	{
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "DeathScreen";
		controls[] = {"DeathScreen"};
		class DeathScreen: RscPicture
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
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "TitleScreen";
		controls[] = {"TitleScreen"};
		class TitleScreen: RscPicture
		{
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\dayz\ui\screen_title_ca.paa";
		};
	};
	class Default
	{
		idd = -1;
		movingEnable = 0;
		duration = 4;
	};
	class playerKillScore 
	{
		idd = 6902;
		movingEnable = 0;
		duration = 5;
		name = "playerKillScore";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_kills', _this select 0];";
		class ControlsBackground {
			class RscPicture_1201: RscPictureGUI
			{
				idc = 1400;
				text = "\z\addons\dayz_code\gui\stats_kills_human_ca.paa";
				x = 0.044687 * safezoneW + safezoneX;
				y = 0.934779 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc = 1401;
				text = "\z\addons\dayz_code\gui\stats_kills_zombie_ca.paa";
				x = 0.044687 * safezoneW + safezoneX;
				y = 0.876025 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
		};
		class Controls{
			class RscText1: RscStructuredTextGUI
			{
				idc = 1410;
				text = "10";
				x = (0.044687 * safezoneW + safezoneX) - 0.01;
				y = 0.934779 * safezoneH + safezoneY;
				w = 0.08;
				h = 0.08;
			};
			class RscText2: RscStructuredTextGUI
			{
				idc = 1411;
				text = "1000";
				x = (0.044687 * safezoneW + safezoneX) - 0.01;
				y = 0.876025 * safezoneH + safezoneY;
				w = 0.08;
				h = 0.08;
			};
		};
	};
	
	class playerStatusWaiting
	{
		idd = 6901;
		movingEnable = 0;
		duration = 100000;
		name = "playerStatusWaiting";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_waiting', _this select 0];";
		class ControlsBackground {
			class RscText_1402: RscPictureGUI
			{
				idc = 1402;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.473572 * safezoneW + safezoneX;
				y = 0.418158 * safezoneH + safezoneY;
				w = 0.0634286 * safezoneW;
				h = 0.136829 * safezoneH;
				colorText[] = {1,1,1,1};
			};
			class RscText_1400: RscPictureGUI
			{
				idc = 1400;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.473572 * safezoneW + safezoneX;
				y = 0.418158 * safezoneH + safezoneY;
				w = 0.0634286 * safezoneW;
				h = 0; //0.136829 * safezoneH;
				colorText[] = {0,0,0,1};
			};
		};
		class Controls {
			class RscPicture_1401: RscPictureGUI
			{
				idc = 1401;
				text = "\z\addons\dayz_code\gui\status_waiting_ca.paa";
				x = 0.434999 * safezoneW + safezoneX;
				y = 0.392207 * safezoneH + safezoneY;
				w = 0.141 * safezoneW;
				h = 0.188013 * safezoneH;
				colorText[] = {0.38,0.63,0.26,1};
			};
		};
	};

	class playerStatusGUI
	{
		idd = 6900;
		movingEnable = 0;
		duration = 100000;
		name = "statusBorder";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
		class ControlsBackground {
			class RscStructuredText_1199: RscStructuredText
			{
				idc = 1199;
				x = 0.250001;
				y = 0.350001;
				w = 0.5;
				h = 0.1;
			};
			
			class RscPicture_1203: RscPictureGUI
			{
				idc = 1203;
				text = "\z\addons\dayz_code\gui\status_fracture_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.58 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1204: RscPictureGUI
			{
				idc = 1204;
				text = "\z\addons\dayz_code\gui\status_connection_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.51 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1205: RscPictureGUI
			{
				idc = 1205;
				text = "\z\addons\dayz_code\gui\status_ear_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.30 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1206: RscPictureGUI
			{
				idc = 1206;
				text = "\z\addons\dayz_code\gui\status_eye_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			
		};
		class Controls{
			class RscPicture_1301: RscPictureGUI
			{
				idc = 1301;
				//text = "\z\addons\dayz_code\gui\status_food_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1300: RscPictureGUI
			{
				idc = 1300;
				//text = "\z\addons\dayz_code\gui\status_blood_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1302: RscPictureGUI
			{
				idc = 1302;
				//text = "\z\addons\dayz_code\gui\status_thirst_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1306: RscPictureGUI
			{
				idc = 1306;
				//text = "\z\addons\dayz_code\gui\status_temp_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1303: RscPictureGUI
			{
				idc = 1303;
				text = "\z\addons\dayz_code\gui\status_bleeding_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.5};
			};
			class RscPicture_1304: RscPictureGUI
			{
				idc = 1304;
				text = "";
				x = 0.935313 * safezoneW + safezoneX;
				y = 0.3 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1305: RscPictureGUI
			{
				idc = 1305;
				text = "";
				x = 0.935313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1307 : RscPictureGUI {
				idc = 1307;
				text = "\z\addons\dayz_code\gui\status_combat_inside_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.65 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1701: RscPictureGUI

			{
				idc = 1701;
				//text = "\z\addons\dayz_code\gui\status_food_inside_ca.paa";
				x = 0.945313 * safezoneW + safezoneX;
				y = 0.95 * safezoneH + safezoneY;
				w = 0.04;
				h = 0.053333;
			};
			class RscPicture_1702: RscPictureGUI
			{
				idc = 1702;
				//text = "\z\addons\dayz_code\gui\status_thirst_inside_ca.paa";
				x = 0.945313 * safezoneW + safezoneX;
				y = 0.816666 * safezoneH + safezoneY;
				w = 0.04;
				h = 0.053333;
			};
		};
	};
};
