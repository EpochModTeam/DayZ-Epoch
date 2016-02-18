class RscPicture;
class RscButton;
class CA_IGUI_Title;
class CA_Title;
class RscText;
class RscControlsGroup;
class RscLineBreak;
class RscIGUIShortcutButton;
class RscGearShortcutButton;
class RscIGUIListNBox;
class RscActiveText;

class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class RscObject;
class IGUIBack;
class RscListBox;
class RscIGUIListBox;
class RscHTML;

#include "CfgPlayerStats\defines.hpp"
#include "CfgPlayerStats\p__cover.hpp"
#include "CfgPlayerStats\p_journal_humanity.hpp"
#include "CfgPlayerStats\p_humanity_art.hpp"
#include "CfgPlayerStats\p_zombies_killed.hpp"
#include "CfgPlayerStats\p_bandits_killed.hpp"
#include "CfgPlayerStats\p_headshots.hpp"
#include "CfgPlayerStats\p_murders.hpp"
#include "CfgPlayerStats\sound.hpp"

class RscPictureGUI {
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscStructuredText {
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText {
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes {
		align = "center";
		valign = "middle";
	};
};

class RscDisplayLoading {
	class Variants {
		class LoadingOne {
			class controls {
				class LoadingPic : RscPictureKeepAspect {
					text = "z\addons\dayz_code\gui\loadingscreen.paa";
				};
			};
		};
	};
};

class RscCompass : RscObject {
	scale = 0.64;
};

class RscDisplayStart {
	class controls {
		class LoadingPic: RscPictureKeepAspect {
			text = "z\addons\dayz_code\gui\loadingscreen.paa";
		};
	};
};
class RscDisplayGetReady;
class RscDisplayClientGetReady: RscDisplayGetReady {
	// could probably add a check in the spawn but couldn't test with multiple players
	onload = "private ['_dummy']; _dummy = [_this,'onload'] call compile preprocessfile '\ca\ui\scripts\server_interface.sqf'; _this spawn { while { !isNull (findDisplay 53) } do { ctrlActivate ((_this select 0) displayCtrl 1); uiSleep 0.1; }; };";
};
class RscDisplayDebriefing: RscStandardDisplay {
	onLoad = "ctrlActivate ((_this select 0) displayCtrl 2);";
	class controls {
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		class CA_DebriefingInfo: RscHTML {};
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete ButtonStatistics;
		delete ButtonRetry;
		class ButtonContinue: RscIGUIShortcutButton {
			idc = 2;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_CONTINUE;
		};
	};
	class ControlsBackground {
		delete Mainback;
	};
};
class RscDisplayMissionFail: RscStandardDisplay {
	onLoad = "ctrlActivate ((_this select 0) displayCtrl 2);";
	class controls {
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		class CA_DebriefingInfo: RscHTML {};
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete BRetry;
		class BAbort: RscIGUIShortcutButton {
			idc = 2;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_END;
		};
	};
	class ControlsBackground {
		delete Mainback;
	};
};

class CA_TextLanguage;
class RscXListBox;

class RscDisplayGameOptions {
	//onLoad = "((_this select 0) displayCtrl 140) lbAdd 'Default';((_this select 0) displayCtrl 140) lbAdd 'Debug';((_this select 0) displayCtrl 140) lbAdd 'None';((_this select 0) displayCtrl 140) lbSetCurSel (uiNamespace getVariable ['DZ_displayUI', 0]);";
	onUnload = "call ui_changeDisplay;";
	class controls {
		class CA_TextUIDisplay: CA_TextLanguage {
			x = 0.159803;
			y = "(0.420549 + 4*0.069854)";
			text = "DayZ UI:";
		};
		class CA_ValueUIDisplay: RscXListBox {
			idc = 140;
			x = 0.400534;
			y = "(0.420549 + 4*0.069854)";
			w = 0.3;
			onLBSelChanged = "(uiNamespace setVariable ['DZ_displayUI', (_this select 1)]);";
		};
	};
};
class RscShortcutButton;
class RscShortcutButtonMain;

class RscDisplayMain : RscStandardDisplay {
	class controlsBackground {
		class Mainback : RscPicture {
			idc = 1104;
			x = "SafeZoneX + 0.04";
			y = "SafeZoneY + 0.03";
			w = 0.627451;
			h = 1.000000;
			text = "\ca\ui\data\ui_mainmenu_background_ca.paa";
		};
		class CA_ARMA2 : RscPicture {
			text = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		};
	};

	class controls {
		class CA_Version;
		class DAYZ_Version : CA_Version {
			idc = -1;
			text = "1.0.6";
			y = "(SafeZoneH + SafeZoneY) - (1 - 0.95)";
		};
		delete CA_TitleMainMenu;
		delete CA_SinglePlayer;
		class CA_PlayerName : RscText {
			idc = 109;
			style = 256;
			colorbackground[] = {0.1, 0.1, 0.1, 0};
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.06";
			w = 0.5;
			h = 0.05;
		};
		class CA_MP : RscShortcutButtonMain {
			idc = 105;
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.15";
			toolTip = $STR_TOOLTIP_MAIN_MULTIPLAYER;
			text = $STR_CA_MAIN_MULTI;

			class KeyHints {
				class A {
					key = 0x00050000 + 0;
					hint = "";
				};
			};
		};
		class CA_Options : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.30";
		};
		class CA_PlayerProfile : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.45";
		};
		class CA_Expansions : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.60";
		};
		class CA_Exit : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.75";
		};
	};
};

//Remove Diary
class RscDisplayDiary {
	idd = 129;
	movingEnable = 0;

	class Controls {
		delete Diary;
		delete DiaryIndex;
		delete B_Quit;
		delete B_Add;
		delete DiaryPage;
		delete DiaryTitle;
		delete DiaryBackground;
	};
};

class RscButtonActionMenu: RscButton {
	SizeEx = 0.02674;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundActive[] = {0.63,0.02,0.02,0.8};
	colorBackgroundDisabled[] = {1,1,1,0};
	colorFocused[] = {0,0,0,0.8};
	colorShadow[] = {1,1,1,0};
	borderSize = 0;
	w = 0.095 * safezoneW;
	h = 0.025 * safezoneH;
};

class RscDisplayMPInterrupt : RscStandardDisplay {
	movingEnable = 0;
	enableSimulation = 1;
	//onLoad = "_dummy = ['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf'; [(_this select 0)] execVM '\z\addons\dayz_code\compile\player_onPause.sqf';"; _respawn = (_this select 0) displayCtrl 1010); _respawn ctrlEnable false; _abort = (_this select 0) displayCtrl 104); _abort ctrlEnable false;
	onLoad = "[] execVM '\z\addons\dayz_code\compile\player_onPause.sqf'; _dummy = ['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf';";
	onUnload = "private ['_dummy']; _dummy = ['Unload', _this] execVM '\ca\ui\scripts\pauseOnUnload.sqf';";

	class controlsBackground {
		class Mainback : RscPicture {
			idc = 1104;
			x = 0.045;
			y = 0.17;
			w = 0.627451;
			h = 0.836601;
			text = "\ca\ui\data\ui_background_mp_pause_ca.paa";
		};
	};

	class controls {
	/*
		class Title {};
		class B_Players {};
		class B_Options {};
		class B_Abort {};
		class B_Retry {};
		class B_Load {};
		class B_Save {};
		class B_Continue {};
		class B_Diary {};
	*/

		class MissionTitle : RscText {
			idc = 120;
			x = 0.05;
			y = 0.818;
			text = "";
		};

		class DifficultyTitle : RscText {
			idc = 121;
			x = 0.05;
			y = 0.772;
			text = "";
		};

		class Paused_Title : CA_Title {
			idc = 523;
			x = 0.087;
			y = 0.192;
			text = $STR_DISP_MAIN_MULTI;
		};

		class CA_B_SAVE : RscShortcutButtonMain {
			idc = 103;
			y = 0.2537 + 0.101903 * 0;
			x = 0.051;
			text = $STR_DISP_INT_SAVE;
			default = 0;
		};

		class CA_B_Skip : CA_B_SAVE {
			idc = 1002;
			text = $STR_DISP_INT_SKIP;
		};

		class CA_B_REVERT : CA_B_SAVE {
			idc = 119;
			y = 0.2537 + 0.101903 * 1;
			text = $str_disp_revert;
			default = 0;
		};

		class CA_B_Respawn : CA_B_SAVE {
			idc = 1010;
			//onButtonClick = "hint str (_this select 0);";
			onButtonClick = "if ((alive player) && (r_fracture_legs)) then { player SetDamage 1;};";
			y = 0.2537 + 0.101903 * 2;
			text = $STR_DISP_INT_RESPAWN;
			default = 0;
		};

		class CA_B_Options : CA_B_SAVE {
			idc = 101;
			y = 0.2537 + 0.101903 * 3;
			text = $STR_DISP_INT_OPTIONS;
			default = 0;
		};

		class CA_B_Abort : CA_B_SAVE {
			idc = 104;
			y = 0.2537 + 0.101903 * 4;
			onButtonClick = "[] execVM '\z\addons\dayz_code\compile\player_onPause.sqf'; call player_forceSave;";
			text = $STR_DISP_INT_ABORT;
			default = 0;
		};

		class ButtonCancel : RscShortcutButton {
			idc = 2;
			shortcuts[] = {0x00050000 + 1, 0x00050000 + 8};
			default = 1;
			x = 0.1605;
			y = 0.8617;
			text = $STR_DISP_INT_CONTINUE;
		};
	};
};

/*
class DZ_ItemInteraction {
	idd = 6999;
	movingEnable = 0;
	class controlsBackground {
		// define controls here
	};
	class objects {
		// define controls here
	};
	class controls {
		// define controls here

	};
};
*/

class bloodTest
{
		idd = 2200;
		movingEnable = 0;
		enableDisplay = 1;
		onLoad = "uiNamespace setVariable ['DayZ_Blood_Test', _this select 0];";
	class ControlsBackground
	{
		class Background: RscPicture
		{
			idc = 1292;
			text = "\z\addons\dayz_code\gui\blood\bloodtest_bg.paa";
			x = 0.305208 * safezoneW + safezoneX;
			y = 0.225107 * safezoneH + safezoneY;
			w = 0.395313 * safezoneW;
			h = 0.560781 * safezoneH;
		};
	};
	class Controls
	{
		class Name: RscStructuredText
		{
			idc = 1289;
			font = Bitstream;
			colorText[] = {0.157, 0.157, 0.157, 1};
			text = "";
			x = 0.379688 * safezoneW + safezoneX;
			y = 0.489004 * safezoneH + safezoneY;
			w = 0.108854 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		class AntiA: RscPicture
		{
			idc = 1293;
			text = "";
			x = 0.346459 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class AntiB: RscPicture
		{
			idc = 1294;
			text = "";
			x = 0.415209 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class AntiD: RscPicture
		{
			idc = 1295;
			text = "";
			x = 0.483959 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class Control: RscPicture
		{
			idc = 1296;
			text = "";
			x = 0.555 * safezoneW + safezoneX;
			y = 0.324069 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class WatterBottle: RscPicture
		{
			idc = 1297;
			text = "";
			x = 0.631771 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.15394 * safezoneH;
			colorActive[] = {1,1,1,0.5};
		};
		class ResultsChart: RscPicture
		{
			idc = 1299;
			text = "";
			x = 0.3625 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.292188 * safezoneW;
			h = 0.483811 * safezoneH;
		};
		class ResultsHidden: RscPicture
		{
			idc = 1288;
			text = "";
			x = 0.368229 * safezoneW + safezoneX;
			y = 0.251499 * safezoneH + safezoneY;
			w = 0.244064 * safezoneW;
			h = 0.145142 * safezoneH;
		};
		class Needle: RscPicture
		{
			idc = 1298;
			text = "";
			x = 0.270833 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.175931 * safezoneH;
		};
		class ResultsHiddenButton: RscButton
		{
			idc = -1;
			onButtonClick = "if (r_canClick_resultsCard) then {r_resultsCard_Clicked = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.368229 * safezoneW + safezoneX;
			y = 0.251499 * safezoneH + safezoneY;
			w = 0.244064 * safezoneW;
			h = 0.145142 * safezoneH;
		};
		class NeedleButton: RscButton
		{
			idc = -1;
			onButtonClick = "r_needleclicked = r_needleclicked + 1; if (r_needleReset) then {r_needleReset = false;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.270833 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.096042 * safezoneW;
			h = 0.175931 * safezoneH;
		};
		class AntiAButton: RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_A_watered && !r_needleReset) then {r_antiA_done = true;}; if (r_water_clicked && !r_A_watered) then {r_A_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.346459 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class AntiBButton: RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_B_watered && !r_needleReset) then {r_antiB_done = true;}; if (r_water_clicked && !r_B_watered) then {r_B_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.415209 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class AntiDButton: RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_D_watered && !r_needleReset) then {r_antiD_done = true;}; if (r_water_clicked && !r_D_watered) then {r_D_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.483959 * safezoneW + safezoneX;
			y = 0.326268 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class ControlButton: RscButton
		{
			idc = -1;
			onButtonClick = " if ((r_needleclicked >= 2) && r_control_watered && !r_needleReset) then {r_control_done = true;}; if (r_water_clicked && !r_control_watered) then {r_control_watered = true;};";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.555 * safezoneW + safezoneX;
			y = 0.324069 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.147342 * safezoneH;
		};
		class WatterBottleButton: RscButton
		{
			idc = -1;
			onButtonClick = "r_water_clicked = true;";
			text = "";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			x = 0.631771 * safezoneW + safezoneX;
			y = 0.313073 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.15394 * safezoneH;
		};
	};
};

#include "RscDisplay\includes.hpp"
