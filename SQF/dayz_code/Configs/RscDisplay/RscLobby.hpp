class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	idd = 70;
	colorNotAssigned[] = {0.4,0.4,0.4,1};
	colorAssigned[] = {0.78,0.39,0,1};
	colorConfirmed[] = {0,1,0,1};
	onLoad = "[_this] execVM 'z\addons\dayz_code\init\lobbyAutoJoin.sqf'";
	class controls
	{
		class TextMission: RscText
		{
			idc = 1002;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
			w = "(18/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
			text = "Mission:";
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
		class TextIsland: RscText
		{
			idc = 1003;
			x = "(60/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
			w = "(5/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
			text = "Map:";
		};
		class ValueIsland: RscText
		{
			idc = 102;
			x = "(65/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
			w = "(33/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
		};
		class TextSide: RscText
		{
			idc = 1005;
			style = 2;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(16.5/100)	* SafeZoneH + SafeZoneY";
			w = "(16/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03921;
			text = "Side:";
		};
		class TextRoles: RscText
		{
			idc = 108;
			style = 2;
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(16.5/100)	* SafeZoneH + SafeZoneY";
			w = "(38/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03921;
			text = "Side:";
		};
		class TextPool: RscText
		{
			idc = 1006;
			style = 2;
			x = "(60/100)	* SafeZoneW + SafeZoneX";
			y = "(16.5/100)	* SafeZoneH + SafeZoneY";
			w = "(38/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03921;
			text = "Pool:";
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
		class CA_MP_roles_Title: CA_Title
		{
			idc = 1001;
			style = 2;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
			colorBackground[] = {"49/255","36/255","25/255","173/255"};
			text = "Multiplayer Setup";
		};
		class CA_TextVotingTimeLeft: CA_MP_roles_Title
		{
			idc = 121;
			style = 1;
			x = "(50/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(45/100)	* SafeZoneW";
			colorBackground[] = {0,0,0,0};
		};
		class CA_TextDescription: RscText
		{
			idc = 1004;
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(12.5/100)	* SafeZoneH + SafeZoneY";
			w = "(18/100)	* SafeZoneW";
			h = "(3/100)	* SafeZoneH";
			SizeEx = 0.03;
			text = "Description:";
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
		class CA_B_West: RscActiveText
		{
			x = "(4.15/100)	* SafeZoneW + SafeZoneX";
			y = "(21/100)	* SafeZoneH + SafeZoneY";
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
			idc = 104;
			color[] = {1,1,1,0.55};
			text = "BLUFOR";
			picture = "\ca\ui\data\flag_bluefor_ca.paa";
		};
		class CA_B_East: CA_B_West
		{
			idc = 105;
			y = "(31/100)	* SafeZoneH + SafeZoneY";
			text = "OPFOR";
			picture = "\ca\ui\data\flag_opfor_ca.paa";
		};
		class CA_B_Guerrila: CA_B_West
		{
			idc = 106;
			y = "(41/100)	* SafeZoneH + SafeZoneY";
			text = "Independent";
			picture = "\ca\ui\data\flag_indep_ca.paa";
		};
		class CA_B_Civilian: CA_B_West
		{
			idc = 107;
			y = "(51/100)	* SafeZoneH + SafeZoneY";
			text = "Civilian";
			picture = "\ca\ui\data\flag_civil_ca.paa";
		};
		class CA_ValueRoles: RscIGUIListBox
		{
			idc = 109;
			style = 16;
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(20.5/100)	* SafeZoneH + SafeZoneY";
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
		class CA_ValuePool: RscIGUIListBox
		{
			idc = 114;
			style = 16;
			x = "(60/100)	* SafeZoneW + SafeZoneX";
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(38/100)	* SafeZoneW";
			h = "(72/100)	* SafeZoneH";
			color[] = {1,1,1,1};
			colorSelect[] = {1,1,0,1};
			colorSelectBackground[] = {0.2,0.2,0.2,1};
			colorSelectBackground2[] = {0.1,0.1,0.1,1};
			rows = 25;
			canDrag = 1;
		};
		class CA_B_EnableAll: RscShortcutButton
		{
			idc = 117;
			x = "(22/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.223825;
			class TextPos
			{
				left = 0.035;
				top = 0.034;
				right = 0.005;
				bottom = 0.005;
			};
			default = 0;
		};
		class CA_B_Lock: RscShortcutButton
		{
			idc = 118;
			x = "(39/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.183825;
		};
		class CA_B_Params: RscShortcutButton
		{
			idc = 128;
			x = "(53/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.203825;
			text = "Parameters";
		};
		class CA_B_DSinterface: RscShortcutButton
		{
			idc = 1012;
			default = 0;
			onButtonClick = "openDSInterface;";
			shortcuts[] = {};
			x = "(2.75/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.26;
			text = "Server Control";
		};
		class CA_B_Kick: RscShortcutButton
		{
			idc = 116;
			default = 0;
			shortcuts[] = {"0x00050000 + 2"};
			x = "(83/100)	* SafeZoneW + SafeZoneX";
			y = "(14/100)	* SafeZoneH + SafeZoneY";
			text = "Kick Off";
		};
		class CA_ButtonContinue: RscShortcutButton
		{
			idc = 1;
			default = 1;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = "(83/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			text = "OK";
		};
		class CA_ButtonCancel: RscShortcutButton
		{
			idc = 2;
			default = 0;
			shortcuts[] = {"0x00050000 + 1"};
			x = "(68/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.203825;
			text = "Back";
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
	};
	west = "ca\ui\data\flag_bluefor_ca.paa";
	east = "ca\ui\data\flag_opfor_ca.paa";
	guer = "ca\ui\data\flag_indep_ca.paa";
	civl = "ca\ui\data\flag_civil_ca.paa";
	none = "ca\ui\data\flag_civil_ca.paa";
	westUnlocked = "ca\ui\data\flag_bluefor_ca.paa";
	westLocked = "ca\ui\data\flag_bluefor_ca.paa";
	eastUnlocked = "ca\ui\data\flag_opfor_ca.paa";
	eastLocked = "ca\ui\data\flag_opfor_ca.paa";
	guerUnlocked = "ca\ui\data\flag_indep_ca.paa";
	guerLocked = "ca\ui\data\flag_indep_ca.paa";
	civlUnlocked = "ca\ui\data\flag_civil_ca.paa";
	civlLocked = "ca\ui\data\flag_civil_ca.paa";
	disabledAllAI = "Enable AI";
	enabledAllAI = "Disable AI";
	hostLocked = "Unlock";
	hostUnlocked = "Lock";
	class controlsbackground
	{
		class MP_roles_TitleBorder: RscText
		{
			style = 64;
			colorText[] = {0,0,0,1};
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
		};
		class TextBack: RscText
		{
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(6/100)	* SafeZoneH";
			colorBackground[] = {0.1961,0.1451,0.0941,0.42};
		};
		class TextBorder: RscText
		{
			style = 64;
			colorText[] = {0,0,0,1};
			x = "(02/100)	* SafeZoneW + SafeZoneX";
			y = "(9.5/100)	* SafeZoneH + SafeZoneY";
			w = "(96/100)	* SafeZoneW";
			h = "(6/100)	* SafeZoneH";
		};
		class SidesBack: RscText
		{
			x = "(2/100)	* SafeZoneW + SafeZoneX";
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(16/100)	* SafeZoneW";
			h = "(73/100)	* SafeZoneH";
			colorBackground[] = {0.1961,0.1451,0.0941,0.42};
		};
		class SidesBorder: RscText
		{
			style = 64;
			colorText[] = {0,0,0,1};
			x = "(2/100)	* SafeZoneW + SafeZoneX";
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(16/100)	* SafeZoneW";
			h = "(73/100)	* SafeZoneH";
		};
		class ValueRolesBack: RscText
		{
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(38/100)	* SafeZoneW";
			h = "(73/100)	* SafeZoneH";
			colorBackground[] = {0.1961,0.1451,0.0941,0.42};
		};
		class ValueRolesBorder: RscText
		{
			style = 64;
			colorText[] = {0,0,0,1};
			x = "(20/100)	* SafeZoneW + SafeZoneX";
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(38/100)	* SafeZoneW";
			h = "(73/100)	* SafeZoneH";
		};
		class ValuePoolBack: RscText
		{
			x = "(60/100)	* SafeZoneW + SafeZoneX";
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(38/100)	* SafeZoneW";
			h = "(73/100)	* SafeZoneH";
			colorBackground[] = {0.1961,0.1451,0.0941,0.42};
		};
		class ValuePoolBorder: RscText
		{
			style = 64;
			colorText[] = {0,0,0,1};
			x = "(60/100)	* SafeZoneW + SafeZoneX";
			y = "(20/100)	* SafeZoneH + SafeZoneY";
			w = "(38/100)	* SafeZoneW";
			h = "(73/100)	* SafeZoneH";
		};
	};
};