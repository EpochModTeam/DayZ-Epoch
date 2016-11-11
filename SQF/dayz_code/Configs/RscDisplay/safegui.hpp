///////////////////////////////////////////////////////////////////////////
/// Styles
///////////////////////////////////////////////////////////////////////////

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////

class SafeKeyPad
{
	idd = -1;
	movingenable = 0;
	onLoad = "keypadCancel = true;";
	onUnload = "if (keypadCancel) then {dayz_combination = ''; [] spawn keyPadReset;};";

	class Controls
	{
		class SafeKeyPadPic: RscPicture
		{
			idc = -1;
			text = "\z\addons\dayz_epoch\pictures\SafeKeyPad.paa";
			x = 0.361701 * safezoneW + safezoneX;
			y = 0.255985 * safezoneH + safezoneY;
			w = 0.281637 * safezoneW;
			h = 0.470087 * safezoneH;
		};
		class b1: RscButton
		{
			idc = -1;
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.39423 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="1";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(1);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b4: RscButton
		{
			idc = -1;
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.441239 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="4";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(4);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b7: RscButton
		{
			idc = -1;
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.488248 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="7";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(7);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b2: RscButton
		{
			idc = -1;
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.39423 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="2";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(2);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b8: RscButton
		{
			idc = -1;
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.488248 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="8";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(8);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b5: RscButton
		{
			idc = -1;
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.441239 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="5";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(5);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b3: RscButton
		{
			idc = -1;
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.39423 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="3";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(3);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b6: RscButton
		{
			idc = -1;
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.441239 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="6";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(6);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b9: RscButton
		{
			idc = -1;
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.488248 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;
			text="9";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(9);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class b0: RscButton
		{
			idc = -1;
			x = 0.487755 * safezoneW + safezoneX;
			y = 0.535257 * safezoneH + safezoneY;
			w = 0.0283751 * safezoneW;
			h = 0.0490667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.05;			
			text="0";
			colorText[] = {0,0.6,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			action = "dayz_combination = dayz_combination + str(0);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		
		class bcancel: RscButton
		{
			idc = -1;
			x = 0.444897 * safezoneW + safezoneX;
			y = 0.545257 * safezoneH + safezoneY;
			w = 0.0263751 * safezoneW;
			h = 0.0440667 * safezoneH;
			font = "Zeppelin33";
			sizeEx=0.1;
			text="*";
			colorText[] = {1,0.1,0.1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak; keypadCancel = true; ((ctrlParent (_this select 0)) closeDisplay 2);";
		};
		class benter: RscButton
		{
			idc = -1;
			x = 0.530613 * safezoneW + safezoneX;
			y = 0.535257 * safezoneH + safezoneY;
			w = 0.0263751 * safezoneW;
			h = 0.0440667 * safezoneH;
			font = "Zeppelin33Italic";
			sizeEx=0.1;
			text="#";
			colorText[] = {0,1,0,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak; keypadCancel = false; ((ctrlParent (_this select 0)) closeDisplay 2); if(!isNull dayz_selectedVault and (typeOf dayz_selectedVault) in DZE_LockedStorage) then {dayz_selectedVault spawn player_unlockVault;};";
		};
	};
};

// SafeKeyPadTest
class ComboLockUI
{
	idd = 41144;
	movingenable = 0;
	onLoad = "keypadCancel = true;";
	onUnload = "if (keypadCancel) then {DZE_Lock_Door = ''; [] spawn keyPadReset;};";

	class Controls
	{
		class ComboLockUIPic: RscPicture
		{
			idc = -1;
			text = "\z\addons\dayz_epoch\ui\combo_gui.paa";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		class top_combo: RscPicture
		{
			idc = 17734;
			text = "\z\addons\dayz_epoch\ui\top_0.paa";
			x = 0.418883;
			y = 0.234042;
			w = 0.388564;
			h = 0.161072;
		};
		class middle_combo: RscPicture
		{
			idc = 17735;
			text = "\z\addons\dayz_epoch\ui\mid_0.paa";
			x = 0.420213;
			y = 0.431049;
			w = 0.387234;
			h = 0.161072;
		};
		class bottom_combo: RscPicture
		{
			idc = 17736;
			text = "\z\addons\dayz_epoch\ui\bot_0.paa";
			x = 0.420212;
			y = 0.616233;
			w = 0.387234;
			h = 0.180772;
		};
		class unlock_combo: RscPicture
		{
			idc = 17737;
			text = "\z\addons\dayz_epoch\ui\unlock_a.paa";
			x = 0.219415;
			y = 0.762017;
			w = 0.199734;
			h = 0.208353;
		};
		class exit_combo: RscPicture
		{
			idc = 17738;
			text = "\z\addons\dayz_epoch\ui\exit_a.paa";
			x = 0.863032;
			y = 0.0252169;
			w = 0.0946809;
			h = 0.0724192;
		};

		class main_combo: RscButton
		{
			idc = -1;
			text = "";
			style = "0x02 + 0x100";
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			soundClick[] = {"",0.6,1};
		};

		class top_left: main_combo
		{
			idc = -1;
			x = 0.43484;
			y = 0.243893;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17734,1,""top""] call player_changeCombo";
		};
		class top_right: main_combo
		{
			idc = -1;
			x = 0.660904;
			y = 0.241923;
			w = 0.147872;
			h = 0.135461;
			onButtonClick = "[17734,0,""top""] call player_changeCombo";
		};
		class mid_left: main_combo
		{
			idc = -1;
			x = 0.43484;
			y = 0.433018;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17735,1,""mid""] call player_changeCombo";
		};
		class mid_right: main_combo
		{
			idc = -1;
			x = 0.659574;
			y = 0.427108;
			w = 0.153191;
			h = 0.135461;
			onButtonClick = "[17735,0,""mid""] call player_changeCombo";
		};
		class bottom_left: main_combo
		{
			idc = -1;
			x = 0.4375;
			y = 0.637904;
			w = 0.1625;
			h = 0.135461;
			onButtonClick = "[17736,1,""bot""] call player_changeCombo";
		};
		class bottom_right: main_combo
		{
			idc = -1;
			x = 0.658245;
			y = 0.633964;
			w = 0.155851;
			h = 0.133491;
			onButtonClick = "[17736,0,""bot""] call player_changeCombo";
		};
		class exit_combo_btn: main_combo
		{
			idc = -1;
			x = 0.827128;
			y = 0.0153665;
			w = 0.158511;
			h = 0.153191;
			onButtonClick = "keypadCancel = true; ((ctrlParent (_this select 0)) closeDisplay 2);";
		};
		class unlock_combo_btn: main_combo
		{
			idc = -1;
			x = 0.218085;
			y = 0.762017;
			w = 0.201064;
			h = 0.233964;
			onButtonClick = "keypadCancel = false; call player_unlockDoor";
		};
	};
};


class KeypadUI
{
	idd = -1;
	movingenable = 0;
	onLoad = "keypadCancel = true;";
	onUnload = "if (keypadCancel) then {dayz_combination = ''; [] spawn keyPadReset;};";
	class Controls
	{
		class KeypadUIPic: RscPicture
		{
			idc = -1;
			text = "\z\addons\dayz_epoch\ui\lockbox_gui.paa";
			x = 0.0492023;
			y = 0.00788009;
			w = 0.902925;
			h = 0.98818;
		};
		class main_button: RscButton
		{
			idc = -1;
			text = "";
			style = "0x02 + 0x100";
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0.1};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0.1};
			soundClick[] = {"",0.6,1};
		};
		class red_button: main_button
		{
			idc = -1;
			x = 0.171543;
			y = 0.115839;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(100);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class green_button: main_button
		{
			idc = -1;
			x = 0.343085;
			y = 0.115839;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(101);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class blue_button: main_button
		{
			idc = -1;
			x = 0.514628;
			y = 0.115839;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(102);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_1: main_button
		{
			idc = -1;
			x = 0.174202;
			y = 0.308905;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(1);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak"; 
		};
		class keypad_2: main_button
		{
			idc = -1;
			x = 0.344415;
			y = 0.310875;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(2);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_3: main_button
		{
			idc = -1;
			x = 0.515957;
			y = 0.312845;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(3);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_4: main_button
		{
			idc = -1;
			x = 0.178192;
			y = 0.50788;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(4);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_5: main_button
		{
			idc = -1;
			x = 0.344415;
			y = 0.50788;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(5);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_6: main_button
		{
			idc = -1;
			x = 0.517287;
			y = 0.50985;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(6);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_7: main_button
		{
			idc = -1;
			x = 0.179521;
			y = 0.700946;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(7);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_8: main_button
		{
			idc = -1;
			x = 0.344415;
			y = 0.700946;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(8);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_9: main_button
		{
			idc = -1;
			x = 0.518617;
			y = 0.704886;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(9);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		class keypad_0: main_button
		{
			idc = -1;
			x = 0.692819;
			y = 0.704886;
			w = 0.126596;
			h = 0.153191;
			action = "dayz_combination = dayz_combination + str(0);";
			onButtonClick = "[player,""keypad_tick"",0,false] call dayz_zombieSpeak";
		};
		
		class kpbcancel: main_button
		{
			idc = -1;
			x = 0.68617;
			y = 0.312845;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "keypadCancel = true; [player,""keypad_tick"",0,false] call dayz_zombieSpeak;((ctrlParent (_this select 0)) closeDisplay 2);";
		};
		class kpbcancel2: main_button
		{
			idc = -1;
			x = 0.69016;
			y = 0.50985;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "keypadCancel = true; [player,""keypad_tick"",0,false] call dayz_zombieSpeak;((ctrlParent (_this select 0)) closeDisplay 2);";
		};
		class kpbenter: main_button
		{
			idc = -1;
			x = 0.6875;
			y = 0.121749;
			w = 0.126596;
			h = 0.153191;
			onButtonClick = "keypadCancel = false; [player,""keypad_tick"",0,false] call dayz_zombieSpeak;((ctrlParent (_this select 0)) closeDisplay 2); if(!isNull dayz_selectedVault) then {dayz_selectedVault spawn player_unlockVault;};";
		};
	};
};


