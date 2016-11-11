class DoorAccess
{
	idd = 61144;
	movingenable = 0;
	
	onLoad = "keypadCancel = true;";
	onUnload = "if(keypadCancel) then {DZE_Lock_Door = ''; [] spawn keyPadReset;};";
	
	class Controls
	{
		class ZupaBackground_1
		{
			access = 0;
			type = 0;
			colorText[] = {0.8784,0.8471,0.651,1};
			text = "";
			fixedWidth = 0;
			style = 0;
			shadow = 2;
			font = "Zeppelin32";
			SizeEx = 0.03921;
			idc = -1;
			x = 0.35 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.20 * safezoneW;
			h = 0.50 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};

		class ZupaHeader_2: ZSC_RscTextT
		{
			idc = -1;
			x = 0.35 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.20 * safezoneW;
			h = 0.05 * safezoneH;
			text = $STR_EPOCH_DOORACCESS_TITLE;
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {1,1,1,1};
		};

		class ZupaButton_1 : ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_EPOCH_DOORACCESS_SCAN;
			x = 0.40 * safezoneW + safezoneX;
			y = 0.40 * safezoneH + safezoneY;
			style = 2;
			w = 0.20;
			onButtonClick = "keypadCancel = false; call player_unlockDoor";
		};

		class ZupaButton_4 : ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_EPOCH_DOORACCESS_MANUAL;
			x = 0.40 * safezoneW + safezoneX;
			y = 0.50 * safezoneH + safezoneY;
			style = 2;
			w = 0.20;
			onButtonClick = "call player_enterCode";
		};

		class ZupaButton_2: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_DISP_CANCEL;
			x = 0.40 * safezoneW + safezoneX;
			y = 0.70 * safezoneH + safezoneY;
			w = 0.20;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 2);";
		};		

		class ZupaButton_3: ZSC_RscButtonMenuBlue
		{
			idc = -1;
			text = $STR_EPOCH_ACTIONS_MANAGEDOOR;
			x = 0.40 * safezoneW + safezoneX;
			y = 0.60 * safezoneH + safezoneY;
			w = 0.20;
			onButtonClick = "[] call player_manageDoor";
		};
	};
};
