class EpochDeathBoardDialog
{
	idd = -1;
	movingenable = 0;
	class Controls {
		class RscText_1000: RscText
		{
			idc = -1;
			x = 0.283659 * safezoneW + safezoneX;
			y = 0.224978 * safezoneH + safezoneY;
			w = 0.432681 * safezoneW;
			h = 0.550044 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1001: RscText
		{
			idc = -1;
			text = "Kill Board";
			x = 0.283659 * safezoneW + safezoneX;
			y = 0.224978 * safezoneH + safezoneY;
			w = 0.432681 * safezoneW;
			h = 0.0550044 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscListbox_1500: RscListbox
		{
			idc = 21000;
			x = 0.297181 * safezoneW + safezoneX;
			y = 0.334987 * safezoneH + safezoneY;
			w = 0.148734 * safezoneW;
			h = 0.412533 * safezoneH;
			onMouseButtonClick = "[(lbCurSel 21000), ((ctrlParent (_this select 0)) displayCtrl 21001)] spawn EpochDeathBoardClick;";
		};
		class RscText_1002: RscText
		{
			idc = -1;
			text = "Murders";
			x = 0.29042 * safezoneW + safezoneX;
			y = 0.293733 * safezoneH + safezoneY;
			w = 0.0540852 * safezoneW;
			h = 0.0275022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscShortcutButton_1700: RscShortcutButton
		{
			idc = -1;
			text = "Close";
			x = 0.628452 * safezoneW + safezoneX;
			y = 0.706267 * safezoneH + safezoneY;
			w = 0.0743671 * safezoneW;
			h = 0.0550044 * safezoneH;
			onButtonClick = "PVDZE_plr_DeathBResult = nil; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class RscStructuredText_1100: RscStructuredText
		{
			idc = 21001;
			text = "";
			x = 0.452114 * safezoneW + safezoneX;
			y = 0.307485 * safezoneH + safezoneY;
			w = 0.250144 * safezoneW;
			h = 0.398782 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
	};
};