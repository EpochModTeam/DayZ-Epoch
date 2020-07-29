class GivePlayerDialog
{
	idd = -1;
	movingenable = 0;
	enableSimulation = true;
	onLoad = "uiNamespace setVariable ['zsc_dialogs', _this select 0]";
	onUnload = "player setVariable['isBusy',false,true];"; 
	
	class controlsBackground {
		class ZSC_RscTitleBackground2:ZSC_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.35;
			y = 0.2;
			w = 0.3;
			h = (1 / 25);
		};
		class MainBackground2:ZSC_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.35;
			y = 0.2 + (11 / 250);
			w = 0.3;
			h = 0.6 - (22 / 250);
		};
	};
	
	class Controls {

		class CashTitle5 : ZSC_RscStructuredText
		{
			idc = 2710;
			text = $STR_CL_ZSC_YOU;
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.39;
			y = 0.26;
			w = 0.3;
			h = 0.2;
		};
		class RscTextT_10052 : ZSC_RscText
		{
			idc = 14001;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.27;
			w = 0.6;
			h = 0.2;
		};
		class moneyEdit2 : ZSC_RscEdit {
		
			idc = 14000;
			colorText[] = {0.8784,0.8471,0.651,1};
			text = "";
			sizeEx = 0.030;
			x = 0.4; y = 0.41;
			w = 0.2; h = 0.03;
		
		};
		class Title2 : ZSC_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 14002;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.35;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		class DepositButton2 : ZSC_RscButtonMenu 
		{
			idc = -1;
			text = $STR_CL_ZSC_GIVE;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[(ctrlText 14000)] spawn GivePlayerAmount; closeDialog 0;";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.432;
			y = 0.512;
			w = (6 / 40);
			h = (1 / 25);
		};
		class RscTextT_10005 : ZSC_RscText
		{
			idc = 14003;
			text = "";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.39;
			y = 0.58;
			w = 0.3;
			h = 0.2;
		};
		class CloseButtonKey2 : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_UI_CLOSE;
			onButtonClick = "closeDialog 0;";
			x = 0.35;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};

class BankDialog
{
	idd = -1;
	movingenable = 0;
	enableSimulation = true;
	onUnload = "ZSC_CurrentStorage setVariable['isBusy',false,true];player setVariable['isBusy',false,true];"; 
	
	class controlsBackground {
		class ZSC_RscTitleBackground:ZSC_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.35;
			y = 0.2;
			w = 0.4;
			h = (1 / 25);
		};
		
		class MainBackground:ZSC_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.35;
			y = 0.2 + (11 / 250);
			w = 0.4;
			h = 0.6 - (22 / 250);
		};
	};

	class Controls {

		class CashTitle : ZSC_RscText
		{
			idc = 2701;
			text = $STR_CL_ZSC_STORAGE;
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.36;
			y = 0.26;
			w = 0.3;
			h = 0.1;
		};

		class RscTextT_1005 : ZSC_RscText
		{
			idc = 13002;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.27;
			w = 0.6;
			h = 0.2;
		};

		class moneyEdit : ZSC_RscEdit {

			idc = 2702;
			colorText[] = {0.8784,0.8471,0.651,1};
			text = "";
			sizeEx = 0.030;
			x = 0.4; y = 0.41;
			w = 0.2; h = 0.03;

		};

		class Title : ZSC_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = $STR_CL_ZSC_STORAGE;
			colorText[] = {1,1,1,1};
			x = 0.35;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};

		class WithdrawButton : ZSC_RscButtonMenu 
		{
			idc = -1;
			text = $STR_CL_ZSC_WITHDRAW;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[(ctrlText 2702)] spawn BankDialogWithdrawAmount; closeDialog 0;";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.432;
			y = 0.46;
			w = (6 / 40);
			h = (1 / 25);
		};

		class DepositButton : ZSC_RscButtonMenu 
		{
			idc = -1;
			text = $STR_CL_ZSC_DEPOSIT;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick =  "[(ctrlText 2702)] spawn BankDialogDepositAmount; closeDialog 0;";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.432;
			y = 0.512;
			w = (6 / 40);
			h = (1 / 25);
		};

		class CashTitle3 : ZSC_RscStructuredText
		{
			idc = 2703;
			text = $STR_CL_ZSC_YOU;
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.36;
			y = 0.58;
			w = 0.3;
			h = 0.1;
		};

		class RscTextT_1004 : ZSC_RscText
		{
			idc = 13001;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.59;
			w = 0.6;
			h = 0.2;
		};

		class CloseButtonKey : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_UI_CLOSE;
			onButtonClick = "closeDialog 0;";
			x = 0.35;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};

class ATMDialog {
	idd = -1;
	movingenable = 0;
	enableSimulation = true;

	onUnload = "player setVariable['isBusy',false,true];"; 

	class controlsBackground {
		class ATM_RscTitleBackground:ZSC_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.35;
			y = 0.2;
			w = 0.3;
			h = (1 / 25);
		};

		class MainBackground:ZSC_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.35;
			y = 0.2 + (11 / 250);
			w = 0.3;
			h = 0.6 - (22 / 250);
		};
	};

	class Controls {
		class CashTitle : ZSC_RscStructuredText {
			idc = 3701;
			text = $STR_CL_ZSC_GLOBAL_BANK;
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.39;
			y = 0.26;
			w = 0.3;
			h = 0.2;
		};

		class RscTextT_1005 : ZSC_RscText {
			idc = 23002;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.27;
			w = 0.6;
			h = 0.2;
		};

		class moneyEdit : ZSC_RscEdit {

			idc = 3702;
			colorText[] = {0.8784,0.8471,0.651,1};
			text = "";
			sizeEx = 0.030;
			x = 0.4; y = 0.41;
			w = 0.2; h = 0.03;
		};

		class Title : ZSC_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = $STR_CL_ZSC_GLOBAL_BANKING;
			colorText[] = {1,1,1,1};
			x = 0.35;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};

		class WithdrawButton : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_CL_ZSC_WITHDRAW;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[(ctrlText 3702)] spawn AtmDialogWithdrawAmount; closeDialog 0;";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.432;
			y = 0.46;
			w = (6 / 40);
			h = (1 / 25);
		};

		class DepositButton : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_CL_ZSC_DEPOSIT;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick =  "[(ctrlText 3702)] spawn AtmDialogDepositAmount; closeDialog 0;";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.432;
			y = 0.512;
			w = (6 / 40);
			h = (1 / 25);
		};

		class CashTitle3 : ZSC_RscStructuredText {
			idc = 3703;
			text = $STR_CL_ZSC_YOU;
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.39;
			y = 0.58;
			w = 0.3;
			h = 0.2;
		};

		class RscTextT_1004 : ZSC_RscText {
			idc = 23001;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.59;
			w = 0.6;
			h = 0.2;
		};

		class CloseButtonKey : ZSC_RscButtonMenu {
			idc = -1;
			text = $STR_UI_CLOSE;
			onButtonClick = "closeDialog 0;";
			x = 0.35;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};
