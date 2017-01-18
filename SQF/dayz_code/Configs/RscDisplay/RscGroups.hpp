class DZ_GroupText: RscText {
	idc = -1;
	type = 0;
	style = 0x00;
	sizeEx = .025;
	shadow = 2;
	colorBackground[] = {1,1,1,0};
	colorText[] = {1,1,1,1};
};

class DZ_GroupDynamicText: RscStructuredText {
	access = 0;
	type = 13;
	colorText[] = {1,1,1,1};
	class Attributes {
		font = "Zeppelin32";
		color = "#ffffff";
		align = "center";
		shadow = true;
	};
};

class DZ_GroupListBox: RscListBox {
	type = 5;
	style = 69;
	text = "";
	colorBackground[] = {0, 0, 0, 0};
	colorSelectBackground[] = {0, 0, 0, 1.0};
	colorSelectBackground2[] = {0, 0, 0, 0.8};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorScrollbar[] = {.2, .2, .2, 1};
	arrowEmpty = "\ca\ui\data\ui_arrow_combo_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_combo_active_ca.paa";
	wholeHeight = .45;
	rowHeight = .04;
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,.3};
	sizeEx = .023;
	soundSelect[] = {"",.1,1};
	soundExpand[] = {"",.1,1};
	soundCollapse[] = {"",.1,1};
	class ScrollBar;
};

class DZ_GroupButton: RscButton {
	idc = -1;
	periodFocus = 1.2;
	periodOver = .8;
	period = .4;
	size = .023;
	sizeEx = .023;
	text = "";
	type = 16;
	action = "";
	x = .314;
	w = .16;
	h = .1;
	color[] = {0.95, 0.95, 0.95, 1.0};
	color2[] = {0.95, 0.95, 0.95, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorBackground[] = {1, 1, 1, 1};
	colorbackground2[] = {1, 1, 1, 0.4};
	colorBackgroundActive[] = {0.5, 0.5, 0.5, 1};
	colorBackgroundDisabled[] = {0.1, 0.1, 0.1, 0.5};
	colorShadow[] = {0.95, 0.95, 0.95, 1};
	colorBorder[] = {0.95, 0.95, 0.95, 1};
	animTextureNormal = "\z\addons\dayz_code\gui\grey\ui_button_normal_ca.paa";
	animTextureDisabled = "\z\addons\dayz_code\gui\grey\ui_button_disabled_ca.paa";
	animTextureOver = "\z\addons\dayz_code\gui\grey\ui_button_over_ca.paa";
	animTextureFocused = "\z\addons\dayz_code\gui\grey\ui_button_focus_ca.paa";
	animTexturePressed = "\z\addons\dayz_code\gui\grey\ui_button_down_ca.paa";
	animTextureDefault = "\z\addons\dayz_code\gui\grey\ui_button_default_ca.paa";
	animTextureNoShortcut = "\z\addons\dayz_code\gui\grey\ui_button_normal_ca.paa";	
	textureNoShortcut = "";
	class HitZone {
		left = .002;
		top = .003;
		right = .002;
		bottom = .016;
	};	
	class ShortcutPos {
		left = -.006;
		top = -.007;
		w = .0392157;
		h = .0522876;	
	};	
	class TextPos {	
		left = .002;
		top = .0325;
		right = .002;
		bottom = .005;
	};
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "center";
		shadow = "1";
	};
	class AttributesImage {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";	
	};
};

class DZ_GroupDialog {
	idd = 80000;
	movingEnable = 0;
	enableSimulation = 1;
	
	class ControlsBackground {
		class Window {
			idc = -1;
			type = 0;
			style = 48;
			font = "Zeppelin32";
			sizeEx = .023;	
			colorBackground[] = {};
			colorText[] = {};
			text = "\z\addons\dayz_code\gui\grey\ui_background_controls_ca.paa";
			moving = 0;
			x = .0;
			y = .1;
			w = 1.0;
			h = .65;
		};
		class Title: DZ_GroupText {
			text = $STR_EPOCH_GROUPS;
			sizeEx = .04;
			x = .35;
			y = .112;
			w = .3;
			h = .05;
		};
		class Players: DZ_GroupText {
			text = $STR_MP_PLAYERS;
			x = .1075;
			y = .165;
			w = .3;
			h = .050;
		};
		class MyGroup: DZ_GroupText {
			text = $STR_EPOCH_MY_GROUP;
			x = .5675;
			y = .165;
			w = .3;
			h = .050;
		};
		class Invite: DZ_GroupDynamicText {
			idc = 9;
			style = 0;
			size = .025;
			x = .2735;
			y = .4915;
			w = .235;
			h = .075;
		};
	};
	class controls {
		class Players: DZ_GroupListBox {
			idc = 1;
			onLBSelChanged = "call dayz_pickPlayer;";
			x = .04;
			y = .21;
			w = .235;
			h = .425;
		};
		class MyGroup: DZ_GroupListBox {
			idc = 2;
			onLBSelChanged = "call dayz_pickGroupMember;";
			x = .5;
			y = .21;
			w = .235;
			h = .425;
		};
		class Close: DZ_GroupButton {
			idc = -1;
			text = $STR_UI_CLOSE;
			onButtonClick = "findDisplay 80000 closeDisplay 2;";
			x = .03;
			y = .65;
		};
		class Invite: DZ_GroupButton {
			idc = 3;
			text = $STR_EPOCH_INVITE;
			onButtonClick = "(_this select 0) ctrlShow false; call dayz_inviteToGroup;";
			y = .184;
		};
		class Kick: DZ_GroupButton {
			idc = 4;
			text = $STR_DISP_MP_DS_KICK;
			onButtonClick = "(_this select 0) ctrlShow false; call dayz_kickFromGroup;";
			y = .239;
		};
		class Promote: DZ_GroupButton {
			idc = 10;
			text = $STR_EPOCH_PROMOTE;
			onButtonClick = "(_this select 0) ctrlShow false; call dayz_promotePlayer;";
			y = .294;
		};
		class Disband: DZ_GroupButton {
			idc = 5;
			text = $STR_EPOCH_DISBAND;
			onButtonClick = "(_this select 0) ctrlShow false; call dayz_disbandGroup;";
			y = .349;
		};
		class Leave: DZ_GroupButton {
			idc = 6;
			text = $STR_EPOCH_LEAVE;
			onButtonClick = "(_this select 0) ctrlShow false; call dayz_leaveGroup;";
			y = .405;
		};
		class Accept: DZ_GroupButton {
			idc = 7;
			text = $STR_EPOCH_ACCEPT;
			onButtonClick = "(_this select 0) ctrlShow false; call dayz_joinGroup;";
			y = .5265;
		};
		class Reject: DZ_GroupButton {
			idc = 8;
			text = $STR_EPOCH_REJECT;
			onButtonClick = "(_this select 0) ctrlShow false; call dayz_rejectGroup;";
			y = .5765;
		};
	};
};
