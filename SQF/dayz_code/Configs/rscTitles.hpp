#define FILTER_CHEATS "_handled = if (isNil 'dze_filterCheats') then {false} else {_this call dze_filterCheats}; _handled"
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
class RscXListBox;
class RscShortcutButton;
class RscHTML;
class RscDisplayEmpty;

#include "CfgPlayerStats\defines.hpp"
#include "CfgPlayerStats\p_cover.hpp"
#include "CfgPlayerStats\p_journal_humanity.hpp"
#include "CfgPlayerStats\p_humanity_art.hpp"
#include "CfgPlayerStats\p_zombies_killed.hpp"
#include "CfgPlayerStats\p_bandits_killed.hpp"
#include "CfgPlayerStats\p_headshots.hpp"
#include "CfgPlayerStats\p_murders.hpp"
#include "CfgPlayerStats\sound.hpp"

class RscDisplayMission: RscDisplayEmpty
{
	access = 0;
	idd = 46;
	onKeyDown = "_handled = if (isNil 'DZ_KeyDown_EH') then {false} else {_this call DZ_KeyDown_EH}; _handled"; //assigned much quicker than spawning init_keyboard
};
class RscDisplayConfigure {
	idd = 4;
	onUnload = "if (!isNil 'updateControlsHandle') then {terminate updateControlsHandle;}; if (!isNil 'ui_updateControls') then {updateControlsHandle = true spawn ui_updateControls;};";
	onKeyDown = FILTER_CHEATS;
};
class RscDisplayGameOptions {
	onLoad = "{(_this select 0) displayCtrl 140 lbAdd _x;} forEach [localize 'STR_DISABLED',localize 'STR_ENABLED']; (_this select 0) displayCtrl 140 lbSetCurSel (profileNamespace getVariable ['streamerMode',0]); uiNamespace setVariable ['streamerMode',(profileNamespace getVariable ['streamerMode',0])];";
	onUnload = "call ui_changeDisplay;";
	onKeyDown = FILTER_CHEATS;
	class controls {
		delete CA_ButtonDefault; //Opens non-functional difficulty selection dialog, player can not select difficulty in MP
		class CA_TextLanguage : RscText {
			x = 0.159803;
			y = (0.420549 + -2*0.069854);
			text = $STR_DISP_OPT_LANGUAGE;
		};
		class CA_ValueLanguage : RscXListBox {
			idc = 135;
			x = 0.400534;
			y = (0.420549 + -2*0.069854);
			w = 0.3;
		};
		class CA_TextStreamerMode : CA_TextLanguage {
			x = 0.159803;
			y = (0.420549 + 4*0.069854);
			text = $STR_UI_STREAMER_MODE;
		};
		class CA_ValueStreamerMode : CA_ValueLanguage {
			idc = 140;
			y = (0.420549 + 4*0.069854);
			tooltip = $STR_UI_STREAMER_MODE_TOOLTIP;
			onLBSelChanged = "profileNamespace setVariable ['streamerMode',(lbCurSel (_this select 0))];";
		};
		class CA_ButtonCancel : RscShortcutButton {
			idc = 2;
			shortcuts[] = {0x00050000 + 1};
			x = 0.151;
			y = 0.7625;
			text = $STR_DISP_CANCEL;
			//reset to original value
			onButtonClick = "profileNamespace setVariable ['streamerMode',(uiNamespace getVariable 'streamerMode')]; saveProfileNamespace; if (!isNil 'player_toggleStreamerMode') then {call player_toggleStreamerMode;};";
		};
		class CA_ButtonContinue : RscShortcutButton {
			idc = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			x = 0.525;
			y = 0.7625;
			text = $STR_DISP_OK;
			default = 1;
			onButtonClick = "saveProfileNamespace; if (!isNil 'player_toggleStreamerMode') then {call player_toggleStreamerMode;};";
		};
	};
};
class RscDisplayChat {onKeyDown = FILTER_CHEATS;};
class RscDisplayOptions {onKeyDown = FILTER_CHEATS;};
class RscDisplayOptionsAudio {onKeyDown = FILTER_CHEATS;};
class RscDisplayOptionsVideo {onKeyDown = FILTER_CHEATS;};
class RscDisplayConfigureControllers {onKeyDown = FILTER_CHEATS;};
class RscDisplayChannel
{
	idd = 63;
	//Channel name text is nil when checking unscheduled in onLoad of display 55 and 63. Spawn gives it time to set.
	//This will fire when a mouse button is assigned. KeyDown EHs will not.
	onLoad = "if (!isNil 'dze_filterCheats' && !isNil 'channel_keys') then {[(_this select 0),-1,false] spawn dze_filterCheats;};";
};

class RscPictureGUI
{
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
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};

class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			class controls
			{
				class LoadingPic : RscPictureKeepAspect
				{
					text = "z\addons\dayz_code\gui\loadingscreen.paa";
				};
			};
		};
	};
};

class RscCompass : RscObject {
	scale = 0.64;
};

class RscDisplayStart
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text = "z\addons\dayz_code\gui\loadingscreen.paa";
		};
	};
};
class RscDisplayGetReady;
class RscDisplayClientGetReady : RscDisplayGetReady
{
	// could probably add a check in the spawn but couldn't test with multiple players
	onload = "[_this,'onload'] call compile preprocessfile '\ca\ui\scripts\server_interface.sqf'; _this spawn { while { !isNull (findDisplay 53) } do { ctrlActivate ((_this select 0) displayCtrl 1); uiSleep 0.1; }; };"; /*diag_log[diag_tickTime,'RscDisplayClientGetReady'];*/
};

class RscDisplayDebriefing: RscStandardDisplay
{
	onLoad = "ctrlActivate ((_this select 0) displayCtrl 2);";
	class controls
	{
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
		class ButtonContinue: RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_CONTINUE;
		};
	};
	class ControlsBackground
	{
		delete Mainback;
	};
};
class RscShortcutButtonMain;

// RscDisplayMultiplayerSetup moved here:
#include "RscDisplay\RscLobby.hpp"

class RscPendingInvitation
{
	x = 0.955313 * safezoneW + safezoneX;
	y = 0.45 * safezoneH + safezoneY;
};

class RscPendingInvitationInGame
{
	x = 0.955313 * safezoneW + safezoneX;
	y = 0.46 * safezoneH + safezoneY;
};

class RscDisplayMissionFail: RscStandardDisplay
{
	onLoad = "ctrlActivate ((_this select 0) displayCtrl 2);"; /*diag_log[diag_tickTime,'RscDisplayMissionFail'];*/
	class controls
	{
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		class CA_DebriefingInfo: RscHTML {};
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete BRetry;
		class BAbort: RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.4080875;
			y = 0.863977;
			text = $STR_UI_END;
		};
	};
	class ControlsBackground
	{
		delete Mainback;
	};
};

class RscDisplayMain : RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback : RscPicture {
			idc = 1104;
			x = "SafeZoneX + 0.04";
			y = "SafeZoneY + 0.03";
			w = 0.627451;
			h = 1.000000;
			text = "\ca\ui\data\ui_mainmenu_background_ca.paa";
		};
		class CA_ARMA2 : RscPicture
		{
			text = "z\addons\dayz_code\gui\loadingscreen.paa";
		};
	};
	
	class controls
	{
		class CA_Version;
		class DAYZ_Version : CA_Version
		{
			idc = -1;
			text = DayZVersion;
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
	onKeyDown = FILTER_CHEATS;

	class Controls {
		delete Diary;
		delete DiaryIndex;
		delete B_Quit;
		delete B_Add;
		delete DiaryPage;
		delete DiaryTitle;
		delete DiaryBackground;
		delete CA_PlayerName;
		delete CA_CurrentTaskLabel;
	};
};

class RscButtonActionMenu: RscButton
{
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
	onLoad = "uiNamespace setVariable ['RscDisplayMPInterrupt', _this select 0]; _this call fn_pauseMenuChecks; [] spawn player_onPause; _dummy = ['Init', _this] execVM '\ca\ui\scripts\pauseLoadinit.sqf';"; /*diag_log[diag_tickTime,'RscDisplayMPInterrupt'];*/
	onUnload = "uiNamespace setVariable ['RscDisplayMPInterrupt', nil];['Unload', _this] execVM '\ca\ui\scripts\pauseOnUnload.sqf';";
	onKeyDown = FILTER_CHEATS;
	
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
			onButtonClick = "if ((alive player) && (r_fracture_legs or {player isKindOf 'PZombie_VB'})) then { [player,'suicide'] call player_death; };";
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
			onButtonClick = "[] spawn player_onPause; call player_forceSave; with uiNameSpace do {RscDMSLoad=-2;};"; // request disconnection from server
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

class CfgDiary
{
	class FixedPages
	{
		class Diary
		{
			picture = "#(argb,8,8,3)color(0,0,0,0)";
		};
		class Tasks
		{
			picture = "#(argb,8,8,3)color(0,0,0,0)";
		};
		class Conversation
		{
			picture = "#(argb,8,8,3)color(0,0,0,0)";
		};
		class Units
		{
			picture = "#(argb,8,8,3)color(0,0,0,0)";
		};
		class Players
		{
			picture = "#(argb,8,8,3)color(0,0,0,0)";
			squad = "%$STR_DISP_MP_SQ %SQUAD_TITLE<br/>%$STR_DISP_MP_SQ_NAME %SQUAD_NAME<br/>%$STR_DISP_MP_SQ_MAIL %SQUAD_EMAIL<br/>%$STR_DISP_MP_SQ_WEB %SQUAD_WEB<br/>                <img width=70 height=70 image='\\%SQUAD_PICTURE'/><br/>";
		};
		class Statistics
		{
			picture = "#(argb,8,8,3)color(0,0,0,0)";
		};
	};
	class Icons
	{
		unitNone = "#(argb,8,8,3)color(0,0,0,0)";
		unitGroup = "ca\ui\data\ui_diary_group_ca.paa";
		unitPlayable = "ca\ui\data\ui_diary_playable_ca.paa";
		unitGroupPlayable = "ca\ui\data\ui_diary_grpplay_ca.paa";
		taskNone = "ca\ui\data\ui_task_none_ca.paa";
		taskCreated = "ca\ui\data\ui_task_created_ca.paa";
		taskAssigned = "ca\ui\data\ui_task_assigned_ca.paa";
		taskSucceeded = "ca\ui\data\ui_task_done_ca.paa";
		taskFailed = "ca\ui\data\ui_task_failed_ca.paa";
		taskCanceled = "ca\ui\data\ui_task_cancelled_ca.paa";
		playerWest = "ca\ui\data\igui_side_unknown_ca.paa";
		playerEast = "ca\ui\data\igui_side_unknown_ca.paa";
		playerCiv = "ca\ui\data\igui_side_unknown_ca.paa";
		playerGuer = "ca\ui\data\igui_side_unknown_ca.paa";
		playerUnknown = "ca\ui\data\igui_side_unknown_ca.paa";
		playerBriefWest = "ca\ui\data\igui_side_unknown_ca.paa";
		playerBriefEast = "ca\ui\data\igui_side_unknown_ca.paa";
		playerBriefGuer = "ca\ui\data\igui_side_unknown_ca.paa";
		playerBriefCiv = "ca\ui\data\igui_side_unknown_ca.paa";
		playerBriefUnknown = "ca\ui\data\igui_side_unknown_ca.paa";
		playerConnecting = "ca\ui\data\igui_side_unknown_ca.paa";
	};
	class TaskIcons
	{
		shadow = 2;
		taskNew = "ca\ui\data\ui_taskstate_new_CA.paa";
		taskDone = "ca\ui\data\ui_taskstate_done_CA.paa";
		taskFailed = "ca\ui\data\ui_taskstate_failed_CA.paa";
		taskCurrent = "ca\ui\data\ui_taskstate_current_CA.paa";
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
