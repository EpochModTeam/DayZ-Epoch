/********************************************************************************************************************/
// Config file for [DayZ]
// Created by: [Horde/Das Attorney]
//********************************************************************************************************************/

/********************************************************************************************************************/
//  Set up dialog
/********************************************************************************************************************/

class horde_journal_front_cover
{
	idd = -1;
	movingEnable = false;
	onLoad = "";
	enableSimulation = true;
	controlsBackground[] = {};
	objects[] = {};
	controls[] =
	{
		"book_page_image",
		"open_craft",
		"open_book",
		"click_here_to_close_book_1",
		"click_here_to_close_book_2",
		"click_here_to_close_book_3",
		"click_here_to_close_book_4"
	};
	
	// background
	
	class book_page_image: horde_RscPicture
	{
		idc = 1200;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\book\cover.paa";
		x = 0.199197 * safezoneW + safezoneX;
		y = -0.0250695 * safezoneH + safezoneY;
		w = 0.601605 * safezoneW;
		h = 1.05014 * safezoneH;

	};
	
	// buttons
	
	class open_craft: RscIGUIShortcutButton {
		idc = -1;
		x = 0.48 * safezoneW + safezoneX;
		y = 0.8 * safezoneH + safezoneY;
		text = $STR_UI_CRAFT_OPEN;
		action = "closeDialog 0; createDialog 'RscDisplayCraftingMenu';";
	};
	/*
	class open_Construction: RscIGUIShortcutButton {
		idc = -1;
		x = 0.48 * safezoneW + safezoneX;
		y = 0.85 * safezoneH + safezoneY;
		text = "Construction";
		action = "closeDialog 0; createDialog 'RscDisplayConstructionMenu';";
	};
	*/
	
	class open_book: horde_RscButton
	{
		idc = 1900;
		text = "#(argb,8,8,3)color(1,1,1,0.5)";
		x = 0.5 * safezoneW + safezoneX;
		y = 0.149954 * safezoneH + safezoneY;
		w = 0.291687 * safezoneW;
		h = 0.68259 * safezoneH;
		action = "playSound 'horde_sound_turning_page'; closeDialog 0; createDialog 'horde_journal_pages_journal_humanity';";
	};
	class click_here_to_close_book_1: horde_RscButton
	{
		idc = 1901;
		x = -0.0195684 * safezoneW + safezoneX;
		y = -0.0600741 * safezoneH + safezoneY;
		w = 1.03914 * safezoneW;
		h = 0.210028 * safezoneH;
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
	class click_here_to_close_book_2: horde_RscButton
	{
		idc = 1902;
		x = 0.791687 * safezoneW + safezoneX;
		y = 0.149954 * safezoneH + safezoneY;
		w = 1.04825 * safezoneW;
		h = 0.892618 * safezoneH;
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
	class click_here_to_close_book_3: horde_RscButton
	{
		idc = 1903;
		x = -0.0013379 * safezoneW + safezoneX;
		y = 0.882544 * safezoneH + safezoneY;
		w = 1.04825 * safezoneW;
		h = 0.892618 * safezoneH;
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
	class click_here_to_close_book_4: horde_RscButton
	{
		idc = 1904;
		x = -0.110721 * safezoneW + safezoneX;
		y = 0.0624421 * safezoneH + safezoneY;
		w = 0.610721 * safezoneW;
		h = 0.822609 * safezoneH;
		action = "playSound 'horde_sound_close_book'; closeDialog 0;";
	};
};

