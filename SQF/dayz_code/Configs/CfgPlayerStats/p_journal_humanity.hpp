/********************************************************************************************************************/
// Config file for [DayZ]
// Created by: [Horde/Das Attorney]
//********************************************************************************************************************/

/********************************************************************************************************************/
//  Set up dialog
/********************************************************************************************************************/

class horde_journal_pages_journal_humanity
{
	idd = -1;
	movingEnable = false;
	onLoad = "uiNamespace setVariable ['horde_myDisplay', (_this select 0)]; [] call horde_epeen_setText_journal_fnc;";
	enableSimulation = true;
	controlsBackground[] = {};
	objects[] = {};
	controls[] =
	{
		"book_page_image",
		"journal_header",
		"journal_text_on_left_hand_page",
		"humanity_header",
		"playing_card_blank",
		"playing_card_face_down",
		"playing_card_top_value",
		"playing_card_bottom_value",
		"playing_card_top_suit",
		"playing_card_bottom_suit",
		"playing_card_top_joker",
		"playing_card_bottom_joker",
		"playing_card_face_image",
		"playing_card_player_name",
		"playing_card_humanity_readout",
		"click_to_go_back_to_cover",
		"click_for_next_page",
		"click_here_to_close_book_1",
		"click_here_to_close_book_2",
		"click_here_to_close_book_3",
		"click_here_to_close_book_4",
		"click_for_humanity"
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

	class journal_header: horde_RscPicture
	{
		idc = 1700;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\headers\journal.paa";
		x = 0.268972 * safezoneW + safezoneX;
		y = 0.236464 * safezoneH + safezoneY;
		w = 0.173462 * safezoneW;
		h = 0.0648851 * safezoneH;
	};
	class journal_text_on_left_hand_page: horde_RscStructuredText
	{
		idc = 1800;
		x = 0.23563 * safezoneW + safezoneX;
		y = 0.324992 * safezoneH + safezoneY;
		w = 0.237021 * safezoneW;
		h = 0.45502 * safezoneH;
	};
	
	//right page

	class humanity_header: horde_RscPicture
	{
		idc = 1701;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\headers\humanity.paa";
		x = 0.554697 * safezoneW + safezoneX;
		y = 0.237488 * safezoneH + safezoneY;
		w = 0.181084 * safezoneW;
		h = 0.0731088 * safezoneH;
	};
	class playing_card_blank: horde_RscPicture
	{
		idc = 1702;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\cards\card\face_up.paa";
		x = 0.51466 * safezoneW + safezoneX;
		y = 0.324981 * safezoneH + safezoneY;
		w = 0.26437 * safezoneW;
		h = 0.45502 * safezoneH;
	};
	class playing_card_face_down: horde_RscPicture
	{
		idc = 1906;
		text = "\z\addons\dayz_communityassets\pictures\playerstats\cards\card\face_down.paa";
		x = 0.51466 * safezoneW + safezoneX;
		y = 0.324981 * safezoneH + safezoneY;
		w = 0.26437 * safezoneW;
		h = 0.45502 * safezoneH;
	};
	class playing_card_top_value: horde_RscStructuredText
	{
		idc = 1801;
		x = 0.547127 * safezoneW + safezoneX;
		y = 0.316785 * safezoneH + safezoneY;
		w = 0.0546973 * safezoneW;
		h = 0.0875038 * safezoneH;
	};
	class playing_card_bottom_value: horde_RscStructuredText
	{
		idc = 1802;
		x = 0.695821 * safezoneW + safezoneX;
		y = 0.694556 * safezoneH + safezoneY;
		w = 0.0546973 * safezoneW;
		h = 0.0875038 * safezoneH;
	};
	class playing_card_top_suit: horde_RscStructuredText
	{
		idc = 1803;
		x = 0.556331 * safezoneW + safezoneX;
		y = 0.382642 * safezoneH + safezoneY;
		w = 0.0364649 * safezoneW;
		h = 0.0525023 * safezoneH;
	};
	class playing_card_bottom_suit: horde_RscStructuredText
	{
		idc = 1804;
		x = 0.704365 * safezoneW + safezoneX;
		y = 0.663569 * safezoneH + safezoneY;
		w = 0.0364649 * safezoneW;
		h = 0.0525023 * safezoneH;
	};
	class playing_card_top_joker: horde_RscStructuredText
	{
		idc = 1805;
		x = 0.56105 * safezoneW + safezoneX;
		y = 0.329086 * safezoneH + safezoneY;
		w = 0.0273486 * safezoneW;
		h = 0.192508 * safezoneH;
	};
	class playing_card_bottom_joker: horde_RscStructuredText
	{
		idc = 1806;
		x = 0.707647 * safezoneW + safezoneX;
		y = 0.584446 * safezoneH + safezoneY;
		w = 0.0273486 * safezoneW;
		h = 0.192508 * safezoneH;
	};
	class playing_card_face_image: horde_RscStructuredText
	{
		idc = 1807;
		x = 0.586685 * safezoneW + safezoneX;
		y = 0.425475 * safezoneH + safezoneY;
		w = 0.127627 * safezoneW;
		h = 0.22751 * safezoneH;
	};
	class playing_card_player_name: horde_RscStructuredText
	{
		idc = 1808;
		x = 0.594 * safezoneW + safezoneX; // 0.591162
		y = 0.640006 * safezoneH + safezoneY;
		w = 0.115412 * safezoneW;
		h = 0.0360368 * safezoneH;
	};
	class playing_card_humanity_readout: horde_RscStructuredText
	{
		idc = 1809;
		x = 0.602 * safezoneW + safezoneX; // 0.598569
		y = 0.680074 * safezoneH + safezoneY;
		w = 0.099588 * safezoneW;
		h = 0.0360251 * safezoneH;
	};
	
	// buttons
	
	class click_to_go_back_to_cover: horde_RscButton
	{
		idc = 1900;
		x = 0.217398 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.282602 * safezoneW;
		h = 0.665029 * safezoneH;
		// soundPush[] = {"sounds\close",1,1};
		action = "playSound 'horde_sound_close_book'; closeDialog 0; createDialog 'horde_journal_front_cover';";		
	};
	class click_for_next_page: horde_RscButton
	{
		idc = 1901;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.167485 * safezoneH + safezoneY;
		w = 0.282602 * safezoneW;
		h = 0.665029 * safezoneH;
		// soundPush[] = {"sounds\page",0.7,1};
		action = "playSound 'horde_sound_turning_page'; closeDialog 0; createDialog 'horde_journal_pages_humanity_art';";
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
	class click_for_humanity: horde_RscButton
	{
		idc = 1907;
		x = 0.554688 * safezoneW + safezoneX;
		y = 0.325 * safezoneH + safezoneY;
		w = 0.182292 * safezoneW;
		h = 0.455 * safezoneH;
		action = "playSound 'horde_sound_turning_page'; [] call horde_epeen_show_humanity_fnc;";
	};
};
