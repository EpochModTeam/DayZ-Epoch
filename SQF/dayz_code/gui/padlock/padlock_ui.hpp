/*
File: padlock_ui.hpp
Author: Deadactionman
Artwork: Dead Meat
Date: 25/01/15 (uk)
Description:
	DayZ Padlock UI
*/

// defines
#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)


// parent class

class PadlockButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,0};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	soundEnter[] = {"",0.09,1};
	soundPush[] = {"",0.09,1};
	soundClick[] = {"",0.09,1};
	soundEscape[] = {"",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "TahomaB";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};

class PadlockDigits
{
	type = 0;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {.85,.85,.85,1};			// daytime
	//colorText[] = {.18,.18,.18,1};		// night time
	//colorText[] = {.06,.25,.12,1};		// night time + NVG
	font = "TahomaB";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};

class craft_IGUIBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] = {0,0,0,1};
	font = "TahomaB";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] = {0.1,0.1,0.1,0.8};
};

// end parent class

// DayZ
class DAYZ_PADLOCK
{
	idd = 76761;
	controls[]=
	{
		dayz_padlockDigits01,
		dayz_padlockDigits02,
		dayz_padlockDigits03,
		dayz_padlockDigits04,
		dayz_padlockButton1L,
		dayz_padlockButton1R,
		dayz_padlockButton2L,
		dayz_padlockButton2R,
		dayz_padlockButton3L,
		dayz_padlockButton3R,
		dayz_padlockButton4L,
		dayz_padlockButton4R,
		dayz_padlockHasp
	};
	controlsBackground[]= 
	{
		dayz_padlockBody
	};
	
//	onUnload = "_null = [] spawn SOME_FUNCTION";

	class dayz_padlockBody: PadlockDigits
	{
		idc = 1200;
		text = "z\addons\dayz_code\gui\padlock\padlock_512X512.paa";
		x = 8 * GUI_GRID_W + GUI_GRID_X;
		y = 3 * GUI_GRID_H + GUI_GRID_Y;
		w = 24 * GUI_GRID_W;
		h = 19.5 * GUI_GRID_H;
	};
	class dayz_padlockDigits01: PadlockDigits
	{
		idc = 1201;
		text = "z\addons\dayz_code\gui\padlock\1.paa";
		x = 20.4 * GUI_GRID_W + GUI_GRID_X;
		y = 13 * GUI_GRID_H + GUI_GRID_Y;
		w = 6.5 * GUI_GRID_W;
		h = 1.25 * GUI_GRID_H;
	};
	class dayz_padlockDigits02: PadlockDigits
	{
		idc = 1202;
		text = "z\addons\dayz_code\gui\padlock\2.paa";
		x = 20.4 * GUI_GRID_W + GUI_GRID_X;
		y = 15 * GUI_GRID_H + GUI_GRID_Y;
		w = 6.5 * GUI_GRID_W;
		h = 1.25 * GUI_GRID_H;
	};
	class dayz_padlockDigits03: PadlockDigits
	{
		idc = 1203;
		text = "z\addons\dayz_code\gui\padlock\3.paa";
		x = 20.4 * GUI_GRID_W + GUI_GRID_X;
		y = 17 * GUI_GRID_H + GUI_GRID_Y;
		w = 6.5 * GUI_GRID_W;
		h = 1.25 * GUI_GRID_H;
	};
	class dayz_padlockDigits04: PadlockDigits
	{
		idc = 1204;
		text = "z\addons\dayz_code\gui\padlock\4.paa";
		x = 20.4 * GUI_GRID_W + GUI_GRID_X;
		y = 19 * GUI_GRID_H + GUI_GRID_Y;
		w = 6.5 * GUI_GRID_W;
		h = 1.25 * GUI_GRID_H;
	};
	class dayz_padlockButton1L: PadlockButton
	{
		idc = 1600;
		x = 21 * GUI_GRID_W + GUI_GRID_X;
		y = 13 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""1L"" spawn padlock_click";
	};
	class dayz_padlockButton1R: PadlockButton
	{
		idc = 1601;
		x = 24.5 * GUI_GRID_W + GUI_GRID_X;
		y = 13 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""1R"" spawn padlock_click";
	};
	class dayz_padlockButton2L: PadlockButton
	{
		idc = 1602;
		x = 21 * GUI_GRID_W + GUI_GRID_X;
		y = 15 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""2L"" spawn padlock_click";
	};
	class dayz_padlockButton2R: PadlockButton
	{
		idc = 1603;
		x = 24.5 * GUI_GRID_W + GUI_GRID_X;
		y = 15 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""2R"" spawn padlock_click";
	};
	class dayz_padlockButton3L: PadlockButton
	{
		idc = 1604;
		x = 21 * GUI_GRID_W + GUI_GRID_X;
		y = 17 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""3L"" spawn padlock_click";
	};
	class dayz_padlockButton3R: PadlockButton
	{
		idc = 1605;
		x = 24.5 * GUI_GRID_W + GUI_GRID_X;
		y = 17 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""3R"" spawn padlock_click";
	};
	class dayz_padlockButton4L: PadlockButton
	{
		idc = 1606;
		x = 21 * GUI_GRID_W + GUI_GRID_X;
		y = 19 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""4L"" spawn padlock_click";
	};
	class dayz_padlockButton4R: PadlockButton
	{
		idc = 1607;
		x = 24.5 * GUI_GRID_W + GUI_GRID_X;
		y = 19 * GUI_GRID_H + GUI_GRID_Y;
		w = 2 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		onMouseButtonClick = "_null = ""4R"" spawn padlock_click";
	};
	class dayz_padlockHasp: PadlockButton
	{
		idc = 1608;
		x = 14 * GUI_GRID_W + GUI_GRID_X;
		y = 3 * GUI_GRID_H + GUI_GRID_Y;
		w = 10.5 * GUI_GRID_W;
		h = 8 * GUI_GRID_H;
		onMouseButtonClick = "_null = [] spawn padlock_hasp";
	};
};

