/********************************************************************************************************************/
// Config file for [DayZ]
// Created by: [Horde/Das Attorney]
//********************************************************************************************************************/

/********************************************************************************************************************/
//  Set up dialog
/********************************************************************************************************************/

class horde_journal_pages_humanity_art
{
	idd = -1;
	movingEnable = false;
	onLoad = "uiNamespace setVariable ['horde_myDisplay', (_this select 0)]; [] call horde_epeen_setText_humanity_fnc;";
	enableSimulation = true;
	controlsBackground[] = {};
	objects[] = {};
	controls[] =
	{
		"book_page_image",
		"left_page_middle",
		"left_page_bottom",
		"left_page_top",
		"right_page_picture",
		"click_for_prev_page",
		"click_for_next_page",
		"click_here_to_close_book_1",
		"click_here_to_close_book_2",
		"click_here_to_close_book_3",
		"click_here_to_close_book_4"
	};
	
	// background
	
	class book_page_image: horde_RscPicture
	{
		idc = 1200;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\book\pages_2.paa";
		x = 0.199165 * safezoneW + safezoneX;
		y = -0.00752226 * safezoneH + safezoneY;
		w = 0.601429 * safezoneW;
		h = 1.01491 * safezoneH;
	};
	
	//left page

	class left_page_middle: horde_RscPicture
	{
		idc = 1201;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_middle_1.paa";
		x = 0.209053 * safezoneW + safezoneX;
		y = 0.27261 * safezoneH + safezoneY;
		w = 0.282496 * safezoneW;
		h = 0.419943 * safezoneH;
	};
	class left_page_bottom: horde_RscPicture
	{
		idc = 1202;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_bottom_1.paa";
		x = 0.203156 * safezoneW + safezoneX;
		y = 0.468726 * safezoneH + safezoneY;
		w = 0.291609 * safezoneW;
		h = 0.419943 * safezoneH;
	};
	class left_page_top: horde_RscPicture
	{
		idc = 1203;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_top_1.paa";
		x = 0.209111 * safezoneW + safezoneX;
		y = 0.0901794 * safezoneH + safezoneY;
		w = 0.291609 * safezoneW;
		h = 0.419943 * safezoneH;
	};
	
	// right page
	
	class right_page_picture: horde_RscPicture
	{
		idc = 1204;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_3.paa";
		x = 0.43621 * safezoneW + safezoneX;
		y = 0.167545 * safezoneH + safezoneY;
		w = 0.419188 * safezoneW;
		h = 0.647412 * safezoneH;
	};
	
	// buttons
	
	class click_for_prev_page: horde_RscButton
	{
		idc = 1900;
		x = 0.217398 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.282602 * safezoneW;
		h = 0.665029 * safezoneH;
		// soundPush[] = {"sounds\close",1,1};
		action = "playSound 'horde_sound_turning_page'; closeDialog 0; createDialog 'horde_journal_pages_journal_humanity';";		
	};
	class click_for_next_page: horde_RscButton
	{
		idc = 1901;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.282602 * safezoneW;
		h = 0.665029 * safezoneH;
		action = "playSound 'horde_sound_turning_page'; closeDialog 0; createDialog 'horde_journal_pages_zombies';";
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
