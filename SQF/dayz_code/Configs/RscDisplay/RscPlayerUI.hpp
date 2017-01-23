class RscTitles
{
	class Default
	{
		idd = -1;
		movingEnable = 0;
		duration = 4;
	};
	titles[] = {"DeathScreen_DZ","DeathScreen_DZE","RscTitleStructuredText"};
	class DeathScreen_DZ {
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "DeathScreen";
		controls[] = {"DeathScreen"};
		class DeathScreen: RscPicture {
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			text = "\z\addons\dayz_code\gui\deathscreen.paa";
		};
	};
	class DeathScreen_DZE {
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "DeathScreen";
		controls[] = {"DeathScreen"};
		class DeathScreen: RscPicture {
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			text = "\z\addons\dayz_epoch\ui\screen_death_ca.paa";
		};
	};
	class playerKillScore {
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

	class playerStatusWaiting {
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
				text = "\z\addons\dayz_code\gui\status\status_waiting_ca.paa";
				x = 0.434999 * safezoneW + safezoneX;
				y = 0.392207 * safezoneH + safezoneY;
				w = 0.141 * safezoneW;
				h = 0.188013 * safezoneH;
				colorText[] = {0.38,0.63,0.26,1};
			};
		};
	};

	class playerStatusGUI {
		idd = 6900;
		movingEnable = 0;
		duration = 100000;
		name = "statusBorder";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
		class ControlsBackground {
			class RscPicture_1901: RscPictureGUI
			{
				idc = 1901;
				text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;//2
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1201: RscPictureGUI
			{
				idc = 1201;
				text = "\z\addons\dayz_code\gui\status\status_food_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;//2
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1900: RscPictureGUI
			{
				idc = 1900;
				text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc = 1200;
				//text = "\z\addons\dayz_code\gui\status\status_blood_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1902: RscPictureGUI
			{
				idc = 1902;
				text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY; //1
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1202: RscPictureGUI
			{
				idc = 1202;
				text = "\z\addons\dayz_code\gui\status\status_thirst_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY; //1
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1908: RscPictureGUI
			{
				idc = 1908;
				text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1208: RscPictureGUI
			{
				idc = 1208;
				text = "\z\addons\dayz_code\gui\status\status_temp_outside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1203: RscPictureGUI
			{
				idc = 1203;
				text = "\z\addons\dayz_code\gui\status\status_effect_brokenleg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.58 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1904: RscPictureGUI
			{
				idc = 1904;
				text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.44 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1204: RscPictureGUI
			{
				idc = 1204;
				text = "\z\addons\dayz_code\gui\status\status_sound_muted.paa"; // previously status_connection_ca which is not used
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.44 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1205: RscPictureGUI
			{
				idc = 1205;
				text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.30 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1206: RscPictureGUI
			{
				idc = 1206;
				text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1209: RscPictureGUI
			{
				idc = 1209;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.65 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1909: RscPictureGUI
			{
				idc = 1909;
				//text = "\z\addons\dayz_code\gui\status\status_combat_border_CA.paa";
				x = 0.958 * safezoneW + safezoneX; // Moved right slightly to better fit full size background
				y = 0.655 * safezoneH + safezoneY; // Moved down slightly to better fit full size background
				w = 0.06; //decreased slightly (0.075 is too big)
				h = 0.08; //decreased slightly (0.10 is too big)
			};

		};
		class Controls {
			class RscPicture_1301: RscPictureGUI
			{
				idc = 1301;
				//text = "\z\addons\dayz_code\gui\status\status_food_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1300: RscPictureGUI
			{
				idc = 1300;
				//text = "\z\addons\dayz_code\gui\status\status_blood_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1307: RscPictureGUI
			{
				idc = 1307;
				// blood type
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1302: RscPictureGUI
			{
				idc = 1302;
				//text = "\z\addons\dayz_code\gui\status\status_thirst_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1306: RscPictureGUI
			{
				idc = 1306;
				//text = "\z\addons\dayz_code\gui\status\status_temp_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1303: RscPictureGUI
			{
				idc = 1303;
				text = "\z\addons\dayz_code\gui\status\status_bleeding_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
				colorText[] = {1,1,1,0.5};
			};
			class RscPicture_1304: RscPictureGUI
			{
				idc = 1304;
				text = "\z\addons\dayz_code\gui\status\status_noise.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.30 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1305: RscPictureGUI
			{
				idc = 1305;
				text = "\z\addons\dayz_code\gui\status\status_visible.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1308 : RscPictureGUI {
				idc = 1308;
				//text = "\z\addons\dayz_code\gui\status\status_combat_inside_ca.paa";
				x = 0.958 * safezoneW + safezoneX; // Moved right slightly to better fit full size background
				y = 0.655 * safezoneH + safezoneY; // Moved down slightly to better fit full size background
				w = 0.06; //decreased slightly (0.075 is too big)
				h = 0.08; //decreased slightly (0.10 is too big)
			};
		};
	};
	class DZ_BlackScreen {
		idd = -1;
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		onLoad = "uiNamespace setVariable ['DZ_BlackScreen', _this select 0];";
		duration = 99999999999999999;
		fadein = 0;
		fadeout = 0;
		
		class controls {
			class Background: RscText {
				idc = -1;
				x = safezoneX;
				y = safezoneY;
				w = safezoneW;
				h = safezoneH;
				text = "";
				colorText[] = {0,0,0,0};
				colorBackground[] = {0,0,0,1};
			};
			class Text: RscText {
				idc = 1;
				x = 0.3 * safezoneW + safezoneX;
				y = 0.859137 * safezoneH + safezoneY;
				w = 0.400445 * safezoneW;
				h = 0.139148 * safezoneH;
				text = "";
				style = 0x02 + 0x10 + 0x200;
				lineSpacing = 1;
				sizeEx = 0.034;
			};
		};
	};
	
	class playerStatusGUI_epoch {
		idd = 690000;
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
			class RscPicture_1901: RscPictureGUI
			{
				idc = 1901;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;//2
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1307 : RscPictureGUI {
				idc = 1307;
				text = "\z\addons\dayz_code\gui\status\status_combat_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.65 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1201: RscPictureGUI
			{
				idc = 1201;
				//text = "\z\addons\dayz_code\gui\status\status_food_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;//2
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1900: RscPictureGUI
			{
				idc = 1900;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc = 1200;
				//text = "\z\addons\dayz_code\gui\status\status_blood_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1902: RscPictureGUI
			{
				idc = 1902;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY; //1
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1202: RscPictureGUI
			{
				idc = 1202;
				//text = "\z\addons\dayz_code\gui\status\status_thirst_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY; //1
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1908: RscPictureGUI
			{
				idc = 1908;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1208: RscPictureGUI
			{
				idc = 1208;
				//text = "\z\addons\dayz_code\gui\status_epoch\status_temp_outside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY; //3
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1203: RscPictureGUI
			{
				idc = 1203;
				text = "\z\addons\dayz_code\gui\status\status_effect_brokenleg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.58 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1904: RscPictureGUI
			{
				idc = 1904;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.51 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1204: RscPictureGUI
			{
				idc = 1204;
				text = "\z\addons\dayz_code\gui\status\status_sound_muted.paa"; // previously status_connection_ca which is not used
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.51 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1205: RscPictureGUI
			{
				idc = 1205;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.30 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1206: RscPictureGUI
			{
				idc = 1206;
				//text = "\z\addons\dayz_code\gui\status\status_bg.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
		};
		class Controls {
			class RscPicture_1301: RscPictureGUI
			{
				idc = 1301;
				//text = "\z\addons\dayz_code\gui\status\status_food_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1300: RscPictureGUI
			{
				idc = 1300;
				//text = "\z\addons\dayz_code\gui\status\status_blood_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1302: RscPictureGUI
			{
				idc = 1302;
				//text = "\z\addons\dayz_code\gui\status\status_thirst_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1306: RscPictureGUI
			{
				idc = 1306;
				//text = "\z\addons\dayz_code\gui\status\status_temp_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1303: RscPictureGUI
			{
				idc = 1303;
				text = "\z\addons\dayz_code\gui\status\status_bleeding_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
				colorText[] = {1,1,1,0.5};
			};
			class RscPicture_1304: RscPictureGUI
			{
				idc = 1304;
				text = "\z\addons\dayz_code\gui\status\status_ear_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.30 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1305: RscPictureGUI
			{
				idc = 1305;
				text = "\z\addons\dayz_code\gui\status\status_eye_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1308: RscPictureGUI
			{
				idc = 1308;
				//text = "\z\addons\dayz_code\gui\status\val_5_ca.paa";
				x = 0.929813 * safezoneW + safezoneX;
				y = 0.30 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
			class RscPicture_1309: RscPictureGUI
			{
				idc = 1309;
				//text = "\z\addons\dayz_code\gui\status\val_5_ca.paa";
				x = 0.929813 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.075;
				h = 0.10;
			};
		};
	};
	class RSC_DZ_Messages {
		idd = 4099999;
		movingEnable = 0;
		fadein       =  0;
		fadeout      =  5;
		duration     =  6;
		onLoad = "uinamespace setvariable ['DZ_Messages',_this select 0]";
		onUnLoad = "uinamespace setvariable ['DZ_Messages',nil]";
		class Controls {
			class Message_Text: RscStructuredText
			{
				idc = 4099998;
				text = "";
				x = 0.3 * safezoneW + safezoneX;
				y = 0.859137 * safezoneH + safezoneY;
				w = 0.400445 * safezoneW;
				h = 0.139148 * safezoneH;
				colorText[] = {0,0,0,1};
				colorBackground[] = {0,0,0,0};
				sizeEx = 14 * GUI_GRID_H;
				shadow = 1;
				class Attributes
				{
					color = "#FFFFFF";
					shadow = 1;
					valign = "top";
					align = "center";
				};
			};
		};
	};
	class DZ_GroupTags
	{
		idd = -1;
		movingEnable = 1;
		enableSimulation = 1;
		enableDisplay = 1;
		onLoad = "uiNamespace setVariable ['DZ_GroupTags',_this select 0];";
		duration = 99999999999999999;
		fadein = 0;
		fadeout = 0;
		class controls
		{
			class Icons: DZ_GroupDynamicText
			{
				idc = -1;
				style = 0x00;
				x = .9;
				y = .9;
				w = .9;
				h = .9;
				size = .08;
				colorBackground[] = {0,0,0,0};
				colortext[] = {0,0,0,.7};
				class Attributes {
					align = "left";
				};		
			};
			// Max 100 players per group
			class Icon0:Icons {idc = 100;};
			class Icon1:Icons {idc = 101;};
			class Icon2:Icons {idc = 102;};
			class Icon3:Icons {idc = 103;};
			class Icon4:Icons {idc = 104;};
			class Icon5:Icons {idc = 105;};
			class Icon6:Icons {idc = 106;};
			class Icon7:Icons {idc = 107;};
			class Icon8:Icons {idc = 108;};
			class Icon9:Icons {idc = 109;};
			class Icon10:Icons {idc = 110;};
			class Icon11:Icons {idc = 111;};
			class Icon12:Icons {idc = 112;};
			class Icon13:Icons {idc = 113;};
			class Icon14:Icons {idc = 114;};
			class Icon15:Icons {idc = 115;};
			class Icon16:Icons {idc = 116;};
			class Icon17:Icons {idc = 117;};
			class Icon18:Icons {idc = 118;};
			class Icon19:Icons {idc = 119;};
			class Icon20:Icons {idc = 120;};
			class Icon21:Icons {idc = 121;};
			class Icon22:Icons {idc = 122;};
			class Icon23:Icons {idc = 123;};
			class Icon24:Icons {idc = 124;};
			class Icon25:Icons {idc = 125;};
			class Icon26:Icons {idc = 126;};
			class Icon27:Icons {idc = 127;};
			class Icon28:Icons {idc = 128;};
			class Icon29:Icons {idc = 129;};
			class Icon30:Icons {idc = 130;};
			class Icon31:Icons {idc = 131;};
			class Icon32:Icons {idc = 132;};
			class Icon33:Icons {idc = 133;};
			class Icon34:Icons {idc = 134;};
			class Icon35:Icons {idc = 135;};
			class Icon36:Icons {idc = 136;};
			class Icon37:Icons {idc = 137;};
			class Icon38:Icons {idc = 138;};
			class Icon39:Icons {idc = 139;};
			class Icon40:Icons {idc = 140;};
			class Icon41:Icons {idc = 141;};
			class Icon42:Icons {idc = 142;};
			class Icon43:Icons {idc = 143;};
			class Icon44:Icons {idc = 144;};
			class Icon45:Icons {idc = 145;};
			class Icon46:Icons {idc = 146;};
			class Icon47:Icons {idc = 147;};
			class Icon48:Icons {idc = 148;};
			class Icon49:Icons {idc = 149;};
			class Icon50:Icons {idc = 150;};
			class Icon51:Icons {idc = 151;};
			class Icon52:Icons {idc = 152;};
			class Icon53:Icons {idc = 153;};
			class Icon54:Icons {idc = 154;};
			class Icon55:Icons {idc = 155;};
			class Icon56:Icons {idc = 156;};
			class Icon57:Icons {idc = 157;};
			class Icon58:Icons {idc = 158;};
			class Icon59:Icons {idc = 159;};
			class Icon60:Icons {idc = 160;};
			class Icon61:Icons {idc = 161;};
			class Icon62:Icons {idc = 162;};
			class Icon63:Icons {idc = 163;};
			class Icon64:Icons {idc = 164;};
			class Icon65:Icons {idc = 165;};
			class Icon66:Icons {idc = 166;};
			class Icon67:Icons {idc = 167;};
			class Icon68:Icons {idc = 168;};
			class Icon69:Icons {idc = 169;};
			class Icon70:Icons {idc = 170;};
			class Icon71:Icons {idc = 171;};
			class Icon72:Icons {idc = 172;};
			class Icon73:Icons {idc = 173;};
			class Icon74:Icons {idc = 174;};
			class Icon75:Icons {idc = 175;};
			class Icon76:Icons {idc = 176;};
			class Icon77:Icons {idc = 177;};
			class Icon78:Icons {idc = 178;};
			class Icon79:Icons {idc = 179;};
			class Icon80:Icons {idc = 180;};
			class Icon81:Icons {idc = 181;};
			class Icon82:Icons {idc = 182;};
			class Icon83:Icons {idc = 183;};
			class Icon84:Icons {idc = 184;};
			class Icon85:Icons {idc = 185;};
			class Icon86:Icons {idc = 186;};
			class Icon87:Icons {idc = 187;};
			class Icon88:Icons {idc = 188;};
			class Icon89:Icons {idc = 189;};
			class Icon90:Icons {idc = 190;};
			class Icon91:Icons {idc = 191;};
			class Icon92:Icons {idc = 192;};
			class Icon93:Icons {idc = 193;};
			class Icon94:Icons {idc = 194;};
			class Icon95:Icons {idc = 195;};
			class Icon96:Icons {idc = 196;};
			class Icon97:Icons {idc = 197;};
			class Icon98:Icons {idc = 198;};
			class Icon99:Icons {idc = 199;};
			class Icon100:Icons {idc = 200;};
		};
	};
};