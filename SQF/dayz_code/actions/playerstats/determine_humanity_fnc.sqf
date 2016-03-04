/********************************************************************************************************************/
// Function file for [DayZ]
// Created by: [Horde]
//********************************************************************************************************************/


private ["_h_human_disp","_top_value","_bot_value","_card_details","_h","_blank","_bandit_pic","_bandit_pic","_b_human_disp","_b_spades_top_suit","_b_spades_bot_suit","_b_clubs_top_suit","_b_clubs_bot_suit","_survivor_pic","_survivor_pic","_s_human_disp","_s_top_joker_b","_s_bot_joker_b","_s_top_joker_r","_s_bot_joker_r","_hero_pic","_hero_pic","_h_hearts_top_suit","_h_hearts_bot_suit","_h_diamonds_top_suit","_h_diamonds_bot_suit"];
_h = (_this select 0) / 37037.037037;

// we need to return these
/*
_pl_pic
_humanity_readout
_top_joker
_bot_joker
_top_value
_bot_value
_top_suit
_bot_suit
*/
_blank = "<img size = '4' color = '#000000' align = 'left' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\0.paa'/>";

_b_human_disp = "<t size = '2' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'center' underline = 'false'>"+(localize "str_playerstats_bandit")+"</t";
_b_spades_top_suit = "<img size = '3' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\spade.paa'/>";
_b_spades_bot_suit = "<img size = '3' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\spade_u.paa'/>";
_b_clubs_top_suit = "<img size = '3' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\club.paa'/>";
_b_clubs_bot_suit = "<img size = '3' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\club_u.paa'/>";

_s_human_disp = "<t size = '2' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'center' underline = 'false'>"+(localize "str_playerstats_survivor")+"</t";
_s_top_joker_b = "<img size = '11' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\joker\joker_black.paa'/>";
_s_bot_joker_b = "<img size = '11' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\joker\joker_black_u.paa'/>";
_s_top_joker_r = "<img size = '11' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\joker\joker_red.paa'/>";
_s_bot_joker_r = "<img size = '11' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\joker\joker_red_u.paa'/>";

_h_hearts_top_suit = "<img size = '3' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\heart.paa'/>";
_h_hearts_bot_suit = "<img size = '3' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\heart_u.paa'/>";
_h_diamonds_top_suit = "<img size = '3' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\diamond.paa'/>";
_h_diamonds_bot_suit = "<img size = '3' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\diamond_u.paa'/>";

if (getText(configFile >> "cfgVehicles" >> (typeOf player) >> "TextPlural") != "Women") then
{
	_h_human_disp = "<t size = '2' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'center' underline = 'false'>"+(localize "str_playerstats_hero")+"</t";
	_bandit_pic = "<img size = '14' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\face\bandit_m.paa'/>";
	_survivor_pic = "<img size = '14' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\face\survivor_m.paa'/>";
	_hero_pic = "<img size = '14' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\face\hero_m.paa'/>";
} else
{
	_h_human_disp = "<t size = '2' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'center' underline = 'false'>"+(localize "str_playerstats_heroine")+"</t";
	_bandit_pic = "<img size = '14' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\face\bandit_f.paa'/>";
	_survivor_pic = "<img size = '14' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\face\survivor_f.paa'/>";
	_hero_pic = "<img size = '14' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\face\hero_f.paa'/>";
};

_card_details = [];

switch (true) do
{
	case (_h < -27):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\ace.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\ace_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -26):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\king.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\king_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -25):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\queen.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\queen_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -24):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\jack.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\jack_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -23):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\10.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\10_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -22):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\9.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\9_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -21):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\8.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\8_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -20):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\7.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\7_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -19):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\6.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\6_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -18):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\5.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\5_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -17):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\4.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\4_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -16):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\3.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\3_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};
	case (_h < -15):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\2.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\2_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_spades_top_suit, _b_spades_bot_suit];
	};

	case (_h < -14):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\ace.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\ace_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -13):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\king.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\king_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -12):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\queen.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\queen_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -11):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\jack.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\jack_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -10):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\10.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\10_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -9):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\9.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\9_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -8):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\8.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\8_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -7):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\7.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\7_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -6):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\6.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\6_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -5):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\5.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\5_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -4):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\4.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\4_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -3):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\3.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\3_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};
	case (_h < -0.135):
	{
		_top_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\2.paa'/>";
		_bot_value = "<img size = '5' color = '#000000' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_black\2_u.paa'/>";
		_card_details = [_bandit_pic, _b_human_disp, _blank, _blank, _top_value, _bot_value, _b_clubs_top_suit, _b_clubs_bot_suit];
	};

	case (_h < 0):
	{
		_top_value = "<img size = '4' color = '#000000' align = 'left' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\0.paa'/>";
		_card_details = [_survivor_pic, _s_human_disp, _s_top_joker_b, _s_bot_joker_b, _blank, _blank, _blank, _blank];
	};

	case (_h < 0.135):
	{
		_top_value = "<img size = '4' color = '#000000' align = 'left' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\0.paa'/>";
		_card_details = [_survivor_pic, _s_human_disp, _s_top_joker_r, _s_bot_joker_r, _blank, _blank, _blank, _blank];
	};

	case (_h < 3):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\2.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\2_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 4):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\3.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\3_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 5):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\4.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\4_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 6):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\5.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\5_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 7):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\6.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\6_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 8):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\7.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\7_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 9):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\8.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\8_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 10):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\9.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\9_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 11):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\10.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\10_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 12):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\jack.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\jack_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 13):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\queen.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\queen_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 14):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\king.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\king_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};
	case (_h < 15):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\ace.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\ace_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_hearts_top_suit, _h_hearts_bot_suit];
	};

	case (_h < 16):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\2.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\2_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 17):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\3.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\3_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 18):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\4.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\4_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 19):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\5.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\5_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 20):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\6.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\6_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 21):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\7.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\7_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 22):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\8.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\8_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 23):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\9.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\9_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 24):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\10.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\10_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 25):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\jack.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\jack_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 26):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\queen.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\queen_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h < 27):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\king.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\king_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
	case (_h >= 27):
	{
		_top_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\ace.paa'/>";
		_bot_value = "<img size = '5' align = 'center' image = '\z\addons\dayz_communityassets\pictures\playerstats\cards\typeface_red\ace_u.paa'/>";
		_card_details = [_hero_pic, _h_human_disp, _blank, _blank, _top_value, _bot_value, _h_diamonds_top_suit, _h_diamonds_bot_suit];
	};
};

_card_details
