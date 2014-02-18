/********************************************************************************************************************/
// Config file for [DayZ]
// Created by: [Horde/Das Attorney]
//********************************************************************************************************************/

/********************************************************************************************************************/
//  Set up dialog
/********************************************************************************************************************/

class horde_journal_pages_zombies
{
	idd = -1;
	movingEnable = false;
	onLoad = "uiNamespace setVariable ['horde_myDisplay', (_this select 0)];  [player getVariable['zombieKills', 0]] call horde_epeen_setText_stats_fnc;";
	enableSimulation = true;
	controlsBackground[] = {};
	objects[] = {};
	controls[] =
	{
		"book_page_image",
		"header_one",
		"header_two",
		"main_image",
		"t11",
		"t12",
		"t13",
		"t14",
		"t15",
		"t21",
		"t22",
		"t23",
		"t24",
		"t25",
		"t31",
		"t32",
		"t33",
		"t34",
		"t35",
		"t41",
		"t42",
		"t43",
		"t44",
		"t45",
		"t51",
		"t52",
		"t53",
		"t54",
		"t55",
		"t61",
		"t62",
		"t63",
		"t64",
		"t65",
		"t75",
		"t71",
		"t72",
		"t73",
		"t74",
		"t75",
		"add_kills",
		"click_for_prev_page",
		"click_for_next_page",
		"click_here_to_close_book_1",
		"click_here_to_close_book_2",
		"click_here_to_close_book_3",
		"click_here_to_close_book_4"
	};
		
	// picture of blank book pages
	
	// classhorde_RscStructuredText;
	class book_page_image: horde_RscPicture
	{
		idc = 1200;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\book\pages_2.paa";
		x = 0.199165 * safezoneW + safezoneX;
		y = -0.00752226 * safezoneH + safezoneY;
		w = 0.601429 * safezoneW;
		h = 1.01491 * safezoneH;
	};
	class header_one: horde_RscPicture
	{
		idc = 1700;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\headers\zombie.paa";
		x = 0.253926 * safezoneW + safezoneX;
		y = 0.219948 * safezoneH + safezoneY;
		w = 0.200505 * safezoneW;
		h = 0.0700129 * safezoneH;
	};
	class header_two: horde_RscPicture
	{
		idc = 1701;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\headers\killed.paa";
		x = 0.244842 * safezoneW + safezoneX;
		y = 0.290028 * safezoneH + safezoneY;
		w = 0.218707 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class main_image: horde_RscPicture
	{
		idc = 1702;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\illus\zombie.paa";
		x = 0.281293 * safezoneW + safezoneX;
		y = 0.360019 * safezoneH + safezoneY;
		w = 0.136692 * safezoneW;
		h = 0.437441 * safezoneH;
	};
	class t11: horde_RscStructuredText
	{
		idc = 1204;
		x = 0.527338 * safezoneW + safezoneX;
		y = 0.220038 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t12: horde_RscStructuredText
	{
		idc = 1205;
		x = 0.572902 * safezoneW + safezoneX;
		y = 0.220038 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t13: horde_RscStructuredText
	{
		idc = 1206;
		x = 0.618466 * safezoneW + safezoneX;
		y = 0.220038 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t14: horde_RscStructuredText
	{
		idc = 1207;
		x = 0.66403 * safezoneW + safezoneX;
		y = 0.220038 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t15: horde_RscStructuredText
	{
		idc = 1208;
		x = 0.709594 * safezoneW + safezoneX;
		y = 0.220038 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t21: horde_RscStructuredText
	{
		idc = 1209;
		x = 0.527338 * safezoneW + safezoneX;
		y = 0.290028 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t22: horde_RscStructuredText
	{
		idc = 1210;
		x = 0.572902 * safezoneW + safezoneX;
		y = 0.290028 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t23: horde_RscStructuredText
	{
		idc = 1211;
		x = 0.618466 * safezoneW + safezoneX;
		y = 0.290028 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t24: horde_RscStructuredText
	{
		idc = 1212;
		x = 0.66403 * safezoneW + safezoneX;
		y = 0.290028 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t25: horde_RscStructuredText
	{
		idc = 1213;
		x = 0.709594 * safezoneW + safezoneX;
		y = 0.290028 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t31: horde_RscStructuredText
	{
		idc = 1214;
		x = 0.527338 * safezoneW + safezoneX;
		y = 0.360019 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t32: horde_RscStructuredText
	{
		idc = 1215;
		x = 0.572902 * safezoneW + safezoneX;
		y = 0.360019 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t33: horde_RscStructuredText
	{
		idc = 1216;
		x = 0.618466 * safezoneW + safezoneX;
		y = 0.360019 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t34: horde_RscStructuredText
	{
		idc = 1217;
		x = 0.66403 * safezoneW + safezoneX;
		y = 0.360019 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t35: horde_RscStructuredText
	{
		idc = 1218;
		x = 0.709594 * safezoneW + safezoneX;
		y = 0.360019 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t41: horde_RscStructuredText
	{
		idc = 1219;
		x = 0.527338 * safezoneW + safezoneX;
		y = 0.43001 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t42: horde_RscStructuredText
	{
		idc = 1220;
		x = 0.572902 * safezoneW + safezoneX;
		y = 0.43001 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t43: horde_RscStructuredText
	{
		idc = 1221;
		x = 0.618466 * safezoneW + safezoneX;
		y = 0.43001 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t44: horde_RscStructuredText
	{
		idc = 1222;
		x = 0.66403 * safezoneW + safezoneX;
		y = 0.43001 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t45: horde_RscStructuredText
	{
		idc = 1223;
		x = 0.709594 * safezoneW + safezoneX;
		y = 0.43001 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t51: horde_RscStructuredText
	{
		idc = 1224;
		x = 0.527338 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t52: horde_RscStructuredText
	{
		idc = 1225;
		x = 0.572902 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t53: horde_RscStructuredText
	{
		idc = 1226;
		x = 0.618466 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t54: horde_RscStructuredText
	{
		idc = 1227;
		x = 0.66403 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t55: horde_RscStructuredText
	{
		idc = 1228;
		x = 0.709594 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t61: horde_RscStructuredText
	{
		idc = 1229;
		x = 0.527338 * safezoneW + safezoneX;
		y = 0.569991 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t62: horde_RscStructuredText
	{
		idc = 1230;
		x = 0.572902 * safezoneW + safezoneX;
		y = 0.569991 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t63: horde_RscStructuredText
	{
		idc = 1231;
		x = 0.618466 * safezoneW + safezoneX;
		y = 0.569991 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t64: horde_RscStructuredText
	{
		idc = 1232;
		x = 0.66403 * safezoneW + safezoneX;
		y = 0.569991 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t65: horde_RscStructuredText
	{
		idc = 1233;
		x = 0.709594 * safezoneW + safezoneX;
		y = 0.569991 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t71: horde_RscStructuredText
	{
		idc = 1234;
		x = 0.527338 * safezoneW + safezoneX;
		y = 0.639981 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t72: horde_RscStructuredText
	{
		idc = 1235;
		x = 0.572902 * safezoneW + safezoneX;
		y = 0.639981 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t73: horde_RscStructuredText
	{
		idc = 1236;
		x = 0.618466 * safezoneW + safezoneX;
		y = 0.639981 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t74: horde_RscStructuredText
	{
		idc = 1237;
		x = 0.66403 * safezoneW + safezoneX;
		y = 0.639981 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class t75: horde_RscStructuredText
	{
		idc = 1238;
		x = 0.709594 * safezoneW + safezoneX;
		y = 0.639981 * safezoneH + safezoneY;
		w = 0.0546767 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	class add_kills: horde_RscStructuredText
	{
		idc = 1239;
		x = 0.536451 * safezoneW + safezoneX;
		y = 0.709972 * safezoneH + safezoneY;
		w = 0.218707 * safezoneW;
		h = 0.0699905 * safezoneH;
	};
	
	/********************************************************************************************************************/
	// Buttons
	//********************************************************************************************************************/
	
	class click_for_prev_page: horde_RscButton
	{
		idc = 1900;
		x = 0.217398 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.282602 * safezoneW;
		h = 0.665029 * safezoneH;
		// soundPush[] = {"sounds\close",1,1};
		action = "playSound 'horde_sound_turning_page'; closeDialog 0; createDialog 'horde_journal_pages_humanity_art';";		
	};
	class click_for_next_page: horde_RscButton
	{
		idc = 1901;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.282602 * safezoneW;
		h = 0.665029 * safezoneH;
		// soundPush[] = {"sounds\page",0.7,1};
		action = "playSound 'horde_sound_turning_page'; closeDialog 0; createDialog 'horde_journal_pages_headshots';";
	};
	class click_here_to_close_book_1: horde_RscButton
	{
		idc = 1902;
		x = -0.00139144 * safezoneW + safezoneX;
		y = -0.00752226 * safezoneH + safezoneY;
		w = 1.03925 * safezoneW;
		h = 0.175008 * safezoneH;
		// soundPush[] = {"sounds\close",1,1};
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
	class click_here_to_close_book_2: horde_RscButton
	{
		idc = 1903;
		x = 0.791719 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.209673 * safezoneW;
		h = 0.68253 * safezoneH;
		// soundPush[] = {"sounds\close",1,1};
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
	class click_here_to_close_book_3: horde_RscButton
	{
		idc = 1904;
		x = -0.00139144 * safezoneW + safezoneX;
		y = 0.832515 * safezoneH + safezoneY;
		w = 1.0119 * safezoneW;
		h = 0.175008 * safezoneH;
		// soundPush[] = {"sounds\close",1,1};
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
	class click_here_to_close_book_4: horde_RscButton
	{
		idc = 1905;
		x = -0.00139144 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.209673 * safezoneW;
		h = 0.68253 * safezoneH;
		// soundPush[] = {"sounds\close",1,1};
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
};
