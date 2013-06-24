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
/*
class RscPicture
{
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscButton
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {0.8784,0.8471,0.651,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] = {1,0.537,0,0.5};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	colorBackgroundActive[] = {1,0.537,0,1};
	colorFocused[] = {1,0.537,0,1};
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin33";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
*/
class RscPicture;
class RscButton;

class SafeKeyPad
{
	idd = -1;
	movingenable = 0;

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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.ogg",0.5,1};
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_4.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_7.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_2.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_8.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_5.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_3.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_6.ogg",0.5,1};
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_9.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_9.ogg",0.5,1}; 
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
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_star.ogg",0.6,1};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000);";
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
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 3000); if(!isNull dayz_selectedVault and (typeOf dayz_selectedVault) == ""VaultStorageLocked"") then {dayz_selectedVault spawn player_unlockVault;};";
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_hash.ogg",0.6,1};
		};
	};
};