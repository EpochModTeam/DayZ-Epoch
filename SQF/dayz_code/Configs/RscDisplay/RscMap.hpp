class RscDisplayMainMap
{
	class controls
	{
		delete CA_MainBackground;
		delete CA_CurrentTaskLabel;
		delete CA_CurrentTask;
		delete CA_PlayerName;
		delete CA_TopicsBackground;
		delete CA_PlayerRank;
		delete CA_MissionName;
		class CA_SubTopicsBackground: IGUIBack
		{
			idc=1022;
			x = "0.16*SafeZoneW + SafeZoneX";
			y = "SafeZoneY + 0.117";
			w = "0.283*SafeZoneW";
			h = "0.53";
			colorBackground[] = {0.30,0.30,0.30,0.85};
		};
		class CA_ContentBackground: IGUIBack
		{
			idc = 1023;
			x = "0.446*SafeZoneW + SafeZoneX";
			y = "SafeZoneY + 0.117";
			w = "SafeZoneW * 0.272";
			h = "0.832";
			colorBackground[] = {0.30,0.30,0.30,0.85};
		};
		
		
		class DiaryList: RscIGUIListBox
		{
			idc = 1001;
			colorText[] = {0.30,0.30,0.30,1};
			colorSelectBackground[]={0.60,0.60,0.60,1};
			colorSelectBackground2[]={0.60,0.60,0.60,1};
			onLBSelChanged = " [ _this select 0 , _this select 1 , 'List' ] call compile preprocessFileLineNumbers 'ca\Warfare2\Scripts\Client\GUI\GUI_logEH.sqf'; ";
			onLoad = "((_this select 0) displayCtrl 1001) ctrlShow false";
			default = 1;
			w = "0";
			h = "0";
		};
	};
};