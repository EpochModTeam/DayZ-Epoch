/********************************************************************************************************************/
// Config file for [DayZ]
// Created by: [Horde/Das Attorney]
//********************************************************************************************************************/

/********************************************************************************************************************/
//  Defines
/********************************************************************************************************************/

#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_COMBO            4
#define CT_STRUCTURED_TEXT  13

#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_PICTURE        0x30
#define ST_ROUNDED1        128
#define ST_MULTI          0x10

/********************************************************************************************************************/
//  Base Classes
/********************************************************************************************************************/

class horde_RscPicture
{
    access = 0;
    type = CT_STATIC;
    style = ST_PICTURE;
    idc = -1;
    colorBackground[] = {0,0,0,1};
    colorText[] = {1,1,1,1};
    font = "Zeppelin33";
    sizeEx = 0;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0;
    h = 0;
};

class horde_RscText
{
	type = CT_STATIC;
	text = "";
	idc = -1;
	style = ST_CENTER;
	h = 0.04;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {0, 0, 0, 1};
	font = "Zeppelin33";
	sizeEx = 0.01 * safezoneH;
	shadow = 0;
};
 
class horde_RscStructuredText
{
    access = 0;
    type = CT_STRUCTURED_TEXT;
    style = ST_CENTER;
	font = "Zeppelin33";
    idc = -1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {0,0,0,0};
    x = 0;
    y = 0;
    h = 0;
    w = 0;
    text = "";
    size = 0.0146 * safezoneH;
    shadow = 0;
};

class horde_RscButton
{
	access = 0;
	type = CT_BUTTON;
	style = ST_LEFT;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	text = "";
	font = "Zeppelin33";
	sizeEx = 0.04;
	colorText[] = {0, 0, 0, 0};
	colorDisabled[] = {0, 0, 0, 0};
	colorBackground[] = {0, 0, 0, 0};
	colorBackgroundDisabled[] = {0, 0, 0, 0};
	colorBackgroundActive[] = {0, 0, 0, 0};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	colorFocused[] = {0, 0, 0, 0};
	colorShadow[] = {0, 0, 0, 0};
	shadow = 0;
	colorBorder[] = {0, 0, 0, 0};
	borderSize = 0;
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
};
