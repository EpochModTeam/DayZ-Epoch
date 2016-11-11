class PlotManagement
{
	idd = 711194;
	onLoad = "if (DZE_plotManagementMustBeClose) then {(_this select 0) displayCtrl 7015 ctrlSetText localize 'STR_EPOCH_HUMANS_NEARBY';};";
	class Controls {
		class RscText_7000: ZSC_RscTextT
		{
			idc = 7000;
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.65 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};	

		class RscText_7007: ZSC_RscTextT
		{
			idc = 7007;
			text = $STR_EPOCH_ACTIONS_MANAGEPLOT;
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.05 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {1,1,1,1};
		};

		class RscShortcutButton_7009: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_EPOCH_DOME;
			x = 0.31 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "call PlotPreview;";
		};

		class RscShortcutButton_7010: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_EPOCH_ACTIONS_MAINTAIN;
			x = 0.41 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "'maintain' call MaintainPlot;";
		};

		class RscShortcutButton_7011: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_EPOCH_ACTIONS_MAINTAIN_FORCE;
			x = 0.51 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "'force' call MaintainPlot;";
		};

		class RscText_7012: ZSC_RscTextT
		{
			idc = 7012;
			text = "";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.05 * safezoneH;
			colorText[] = {1,1,1,1};
		};

		class RscText_7014:  RscStructuredText
		{
			idc = 7014;
			text = "";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.03 * safezoneH;
			class Attributes { 
				align = "right";
			};
		};

		class RscText_7013: ZSC_RscTextT
		{
			idc = 7013;
			text = "";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.33 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};

		class RscText_7008: ZSC_RscTextT
		{
			idc = 7015;
			text = $STR_MP_PLAYERS;
			x = 0.31 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};

		class RscText_7003: ZSC_RscTextT
		{
			idc = -1;
			text = $STR_EPOCH_PLOT_FRIENDS;
			x = 0.45 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};

		class RscListbox_7001: RscListbox
		{
			idc = 7001;
			x = 0.31* safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};

		class RscListbox_7002: RscListbox
		{
			idc = 7002;
			x = 0.45 * safezoneW + safezoneX;
			y = 0.41* safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};

		class RscShortcutButton_7004: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_EPOCH_ADD;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[lbData [7001,lbCurSel 7001]] call PlotAddFriend;";
		};

		class RscShortcutButton_7005: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_DISP_DELETE;
			x = 0.47 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7002)] call PlotRemoveFriend;";
		};

		class RscShortcutButton_7006: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_UI_CLOSE;
			x = 0.40 * safezoneW + safezoneX;
			y = 0.75 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 2);";
		};
	};
};
