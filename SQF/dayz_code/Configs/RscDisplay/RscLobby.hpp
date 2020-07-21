class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	west = "ca\ui\data\flag_none_ca.paa";
	east = "ca\ui\data\flag_none_ca.paa";
	guer = "ca\ui\data\flag_none_ca.paa";
	civl = "ca\ui\data\flag_none_ca.paa";
	none = "ca\ui\data\flag_none_ca.paa";
	westUnlocked = "ca\ui\data\flag_none_ca.paa";
	westLocked = "ca\ui\data\flag_none_ca.paa";
	eastUnlocked = "ca\ui\data\flag_none_ca.paa";
	eastLocked = "ca\ui\data\flag_none_ca.paa";
	guerUnlocked = "ca\ui\data\flag_none_ca.paa";
	guerLocked = "ca\ui\data\flag_none_ca.paa";
	civlUnlocked = "ca\ui\data\flag_none_ca.paa";
	civlLocked = "ca\ui\data\flag_none_ca.paa";
	colorNotAssigned[] = {0, 1, 0, 1};
	colorAssigned[] = {0, 1, 0, 1};
	colorConfirmed[] = {0, 1, 0, 1};
	
	onload = "with uiNameSpace do{RscDisplayMultiplayerSetup=_this select 0}; [_this] execVM 'z\addons\dayz_code\init\lobbyAutoJoin.sqf'"; //#70
	onMouseHolding = "with uiNameSpace do { switch (1 == 1) do { case(isNil 'RscDMSLoad'): { RscDMSLoad = diag_tickTime; }; case(RscDMSLoad == -1): {}; case(RscDMSLoad == -2): {}; case(diag_tickTime - RscDMSLoad > 7): { RscDMSLoad = diag_tickTime; }; case(diag_tickTime - RscDMSLoad > 5): { }; }; };";
	/*
		with uiNameSpace do
		{
			switch (1 == 1) do
			{
				case(isNil 'RscDMSLoad'): { RscDMSLoad = diag_tickTime; };
				case(RscDMSLoad == -1): {};
				case(RscDMSLoad == -2): {};
				case(diag_tickTime - RscDMSLoad > 7): { RscDMSLoad = diag_tickTime; };
				case(diag_tickTime - RscDMSLoad > 5): { ctrlActivate ((_this select 0) displayCtrl 1); RscDMSLoad = -1; };
			};
		};
	*/
	onButtonClick = "with uiNameSpace do{RscDMSLoad=-1};false";
	onButtonDblClick = "with uiNameSpace do{RscDMSLoad=-1};false";
	onKeyDown = "with uiNameSpace do{RscDMSLoad=-1};false";
  
	class controlsbackground
	{
		class dayz_black: RscText
		{
			idc=1017;
			colorBackground[] = {0,0,0,1};
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW";
			h = "SafeZoneH";
		};
		class MP_roles_TitleBorder: RscText
		{
			idc=1008;
		};
		class TextBack: RscText
		{
			idc=1009;
		};
		class TextBorder: RscText
		{
			idc=1010;
		};
		class SidesBack: RscText
		{
			idc=1011;
			y = "(120/100) * SafeZoneH + SafeZoneY";
		};
		class SidesBorder: RscText
		{
			idc=1012;
			y = "(120/100) * SafeZoneH + SafeZoneY";
		};		
		class ValueRolesBack: RscText
		{
			idc=1013;
			y = "(120/100) * SafeZoneH + SafeZoneY";
		};
		class ValueRolesBorder: RscText
		{
			idc=1014;
			y = "(120/100) * SafeZoneH + SafeZoneY";
		};
		class ValuePoolBack: RscText
		{
			idc=1015;
			y = "(120/100) * SafeZoneH + SafeZoneY";
		};
		class ValuePoolBorder: RscText
		{
			idc=1016;
			y = "(120/100) * SafeZoneH + SafeZoneY";
		};		
	};
	class controls
	{
		class CA_MP_roles_Title : CA_Title {
			idc = 1001;
			style = 2;
			font = "Zeppelin32";
			sizeEx = 0.050653595;
			colorText[] = {0.95,0.95,0.95,1};			
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
			colorBackground[] = {49/255, 36/255, 25/255, 173/255};
			text = $STR_UI_LOBBY;		
		};
		class TextIsland: RscText
		{
			idc = 1003;
			y = "(109.5/100) * SafeZoneH + SafeZoneY"; //hide
		};
		class ValueIsland: RscText
		{
			idc = 102;
			y = "(109.5/100) * SafeZoneH + SafeZoneY"; //hide
		};
		class TextSide: RscText
		{
			idc = 1005;
			y = "(116.5/100) * SafeZoneH + SafeZoneY"; //hide
		};
		class TextRoles: RscText
		{
			idc = 1007; // new, idc was missed by BI
			y = "(116.5/100) * SafeZoneH + SafeZoneY"; // hide
		};
		class CA_B_West: RscActiveText
		{
			idc = 104;			
			x = "(4.15/100)	* SafeZoneW + SafeZoneX";
			y = "(121/100) * SafeZoneH + SafeZoneY"; //hide
			w = "(11.7/100)	* SafeZoneW";
			h = "(7/100)	* SafeZoneH";
			style = "0x02 + 0x100 + 0x40";
			type = 11;
			colorActive[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.15};
			colorShade[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			pictureWidth = 1;
			pictureHeight = 1;
			textHeight = 0.38;
			sideDisabled = "ca\ui\data\flag_none_ca.paa";
			sideToggle = "ca\ui\data\flag_side_toggle_ca.paa";
			color[] = {1,1,1,0.55};
			text = "$STR_WEST";
			picture = "\ca\ui\data\flag_bluefor_ca.paa";			
			
		};
		class CA_B_East: CA_B_West
		{
			idc = 105;
			y = "(131/100) * SafeZoneH + SafeZoneY"; //hide
		};
		class CA_B_Guerrila: CA_B_West
		{
			idc = 106;
			y = "(141/100) * SafeZoneH + SafeZoneY"; //hide
		};
		class CA_B_Civilian: CA_B_West
		{
			idc = 107;
			y = "(151/100) * SafeZoneH + SafeZoneY"; //hide
		};
		class CA_ValueRoles: RscIGUIListBox
		{
			idc = 109;
			style = 16;			
			shadow = 2;
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(120.5/100) * SafeZoneH + SafeZoneY"; //hide
			w = "(38/100)	* SafeZoneW";
			h = "(72/100)	* SafeZoneH";
			color[] = {1,1,1,1};
			colorSelect[] = {1,1,0,1};
			colorSelectBackground[] = {0.2,0.2,0.2,1};
			colorSelectBackground2[] = {0.1,0.1,0.1,1};
			rowHeight = 0.05;
			colorText[] = {0.95,0.95,0.95,1};
			colorPlayer[] = {1,1,0,1};
			colorAI[] = {1,0,0,1};
			colorNobody[] = {0.4,0.4,0.4,1};
			enabledAI = "ca\ui\textures\ai2_on.paa";
			disabledAI = "ca\ui\textures\ai2_off.paa";		
		};
		class TextMission: RscText
		{
			idc = 1002;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
			w = "(18/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
			text = "$STR_DISP_SRVSETUP_NAME";
		};
		class ValueMission: RscText
		{
			idc = 101;
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
			w = "(40/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
		};
		class CA_TextDescription: RscText
		{
			idc = 1004;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(12.5/100)	* SafeZoneH + SafeZoneY";
			w = "(18/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
			text = "$STR_DISP_SRVSETUP_DESC";
		};
		class CA_ValueDescription: RscText
		{
			idc = 103;
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(12.5/100)	* SafeZoneH + SafeZoneY";
			w = "(78/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
		};
		class TextPool: RscText
		{
			idc = 1006;
			x = "(2/100) * SafeZoneW + SafeZoneX"; // to left
			w = "(96/100) * SafeZoneW"; //wide (was: 38/100)
			text = "";
		};
		class CA_ValuePool: RscIGUIListBox
		{
			idc = 114;
			text = $STR_MP_PLAYERS;
			x = "(2/100) 	* SafeZoneW + SafeZoneX"; // to left
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100) 	* SafeZoneW"; // wide
			h = "(72/100)	* SafeZoneH";	
			canDrag = 1;			
		};
		class CA_ButtonContinue : RscShortcutButton {
			idc = 1;
			default = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			x = "(83/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			text = $STR_DISP_OK;
			onButtonClick = "((findDisplay 70) displayCtrl 300) ctrlShow false;";
		};
		class CA_ButtonCancel : RscShortcutButton {
			idc = 2;
			default = 0;
			shortcuts[] = {0x00050000 + 1};
			x = "(68/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.203825;
			text = $STR_DISP_BACK;
			onButtonClick = "with uiNameSpace do {RscDMSLoad=nil;};"; // autologon at logon on next server
		};
		class Y_GamerCard: RscActiveText
		{
			idc = 125;
			text = "Gamer card";
			x = 0.25;
			y = 0.9;
			w = 0.15;
		};
		class PartyGUI: RscActiveText
		{
			idc = 126;
			text = "Show party";
			x = 0.4;
			y = 0.9;
			w = 0.15;
		};
		class AssignRole: RscActiveText
		{
			idc = 127;
			text = "Assign role";
			x = 0.55;
			y = 0.9;
			w = 0.15;
		};
		class infoText: RscText
		{
			idc = 300;
			x = 0.224 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.333 * safezoneW;
			h = 0.045 * safezoneH;
			sizeEx = 0.03;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
		};
		delete CA_B_DSinterface;
		delete OriginsSurv;
		delete CA_B_WestOri;		
	};
};