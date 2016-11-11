class DoorManagement
{
	idd = 711195;
	onLoad = "if (DZE_doorManagementMustBeClose) then {(_this select 0) displayCtrl 7108 ctrlSetText localize 'STR_EPOCH_HUMANS_NEARBY';};";
	class Controls {
		class RscText_7100: ZSC_RscTextT
		{
			idc = 7100;
			x = 0.30 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.5 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};

		class RscListbox_7101: RscListbox
		{
			idc = 7101;
			x = 0.31* safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};

		class RscListbox_7102: RscListbox
		{
			idc = 7102;
			x = 0.45 * safezoneW + safezoneX;
			y = 0.41* safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};

		class RscShortcutButton_7104: ZSC_RscButtonMenuBlue
		{
			idc = 7104;
			text = $STR_EPOCH_ADD;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[lbData [7101,lbCurSel 7101]] call DoorAddFriend;";
		};

		class RscShortcutButton_7105: ZSC_RscButtonMenuBlue
		{
			idc = 7105;
			text = $STR_DISP_DELETE;
			x = 0.47 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7102)] call DoorRemoveFriend;";
		};

		class RscShortcutButton_7106: ZSC_RscButtonMenuBlue
		{
			idc = 7106;
			text = $STR_UI_CLOSE;
			x = 0.40 * safezoneW + safezoneX;
			y = 0.75 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 2);";
		};

		class RscText_7107: ZSC_RscTextT
		{
			idc = 7107;
			text = $STR_EPOCH_DOORMANAGEMENT_TITLE;
			x = 0.30 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.05 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {1,1,1,1};
		};

		class RscText_7108: ZSC_RscTextT
		{
			idc = 7108;
			text = $STR_MP_PLAYERS;
			x = 0.31 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};		

		class RscText_7103: ZSC_RscTextT 
		{
			idc = 71103;
			text = $STR_EPOCH_DOORMANAGEMENT_FRIENDS;
			x = 0.45 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
};
