class RscDisplayConstructionMenu {
	idd = 6903;
	enableDisplay = 1;
	onLoad = "uiNamespace setVariable ['DAYZ_CraftingDialog', _this select 0]; ['initconstruction'] call fn_updateCraftUI;";
	onUnload = "['close'] call fn_updateCraftUI;";

	class Controls
	{
		class craftingRecipeListContainer: RscControlsGroup {
			x = 0.275 * safezoneW + safezoneX;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.58 * safezoneH;

			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
				border = "\ca\ui\data\igui_border_scroll_ca.paa";
			};

			class Controls {
				class craftingRecipeList: RscStructuredText	{
					idc = 430;
					text = "";
					x = 0;
					y = 0;
					w = 0.25 * safezoneW;
					h = 0.58 * safezoneH;
					shadow = 0;

					class Attributes {
						//font = "Zeppelin33Italic";
						color = "#000000";
						align = "left";
					};
				};
			};
		};

		class removeItem: RscGearShortcutButton {
			idc = 431;
			x = -2;
			style = 2048;
			text = "&lt;";
			onButtonClick = "['remove'] call fn_updateCraftUI;";
		};

		class gearList: RscListNBox {
			idc = 432;
			x = 0.543136 * safezoneW + safezoneX;
			y = 0.201614 * safezoneH + safezoneY;
			w = 0.1875 * safezoneW;
			h = 0.22 * safezoneH;
			columns[] = {0.07804,0.18412,0.3,0.81};
			idcLeft = 431;
			idcRight = 433;
			colorSelectBackground[] = {0.8784,0.8471,0.651,1};
			colorSelectBackground2[] = {0.8784,0.8471,0.651,1};

			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
				border = "\ca\ui\data\igui_border_scroll_ca.paa";
			};
		};

		class addItem: removeItem {
			idc = 433;
			x = -2;
			text = "&gt;";
			onButtonClick = "['add'] call fn_updateCraftUI;";
		};

		class ConstructionButton: RscIGUIShortcutButton {
			idc = 430;
			x = 0.601 * safezoneW + safezoneX;
			y = 0.744 * safezoneH + safezoneY;
			text = "Build";
			action = "['construction'] call fn_updateCraftUI;";
		};

		class craftingslot01: RscPicture
		{
			idc = 201;
			style = 48;
			text = "";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot02: RscPicture
		{
			idc = 202;
			style = 48;
			text = "";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot03: RscPicture
		{
			idc = 203;
			style = 48;
			text = "";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot04: RscPicture
		{
			idc = 204;
			style = 48;
			text = "";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot05: RscPicture
		{
			idc = 205;
			style = 48;
			text = "";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot06: RscPicture
		{
			idc = 206;
			style = 48;
			text = "";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot07: RscPicture
		{
			idc = 207;
			style = 48;
			text = "";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot08: RscPicture
		{
			idc = 208;
			style = 48;
			text = "";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot09: RscPicture
		{
			idc = 209;
			style = 48;
			text = "";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot10: RscPicture
		{
			idc = 210;
			style = 48;
			text = "";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot11: RscPicture
		{
			idc = 211;
			style = 48;
			text = "";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot12: RscPicture
		{
			idc = 212;
			style = 48;
			text = "";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot13: RscPicture
		{
			idc = 213;
			style = 48;
			text = "";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot14: RscPicture
		{
			idc = 214;
			style = 48;
			text = "";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot15: RscPicture
		{
			idc = 215;
			style = 48;
			text = "";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot16: RscPicture
		{
			idc = 216;
			style = 48;
			text = "";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot17: RscPicture
		{
			idc = 217;
			style = 48;
			text = "";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot18: RscPicture
		{
			idc = 218;
			style = 48;
			text = "";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot19: RscPicture
		{
			idc = 219;
			style = 48;
			text = "";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot20: RscPicture
		{
			idc = 220;
			style = 48;
			text = "";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot21: RscPicture
		{
			idc = 221;
			style = 48;
			text = "";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot22: RscPicture
		{
			idc = 222;
			style = 48;
			text = "";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot23: RscPicture
		{
			idc = 223;
			style = 48;
			text = "";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot24: RscPicture
		{
			idc = 224;
			style = 48;
			text = "";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot25: RscPicture
		{
			idc = 225;
			style = 48;
			text = "";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot26: RscPicture
		{
			idc = 226;
			style = 48;
			text = "";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot27: RscPicture
		{
			idc = 227;
			style = 48;
			text = "";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot28: RscPicture
		{
			idc = 228;
			style = 48;
			text = "";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot29: RscPicture
		{
			idc = 229;
			style = 48;
			text = "";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot30: RscPicture
		{
			idc = 230;
			style = 48;
			text = "";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot31: RscPicture
		{
			idc = 231;
			style = 48;
			text = "";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot32: RscPicture
		{
			idc = 232;
			style = 48;
			text = "";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot33: RscPicture
		{
			idc = 233;
			style = 48;
			text = "";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot34: RscPicture
		{
			idc = 234;
			style = 48;
			text = "";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot35: RscPicture
		{
			idc = 235;
			style = 48;
			text = "";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot36: RscPicture
		{
			idc = 236;
			style = 48;
			text = "";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot37: RscPicture
		{
			idc = 237;
			style = 48;
			text = "";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot38: RscPicture
		{
			idc = 238;
			style = 48;
			text = "";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot39: RscPicture
		{
			idc = 239;
			style = 48;
			text = "";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot40: RscPicture
		{
			idc = 240;
			style = 48;
			text = "";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot41: RscPicture
		{
			idc = 241;
			style = 48;
			text = "";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot42: RscPicture
		{
			idc = 242;
			style = 48;
			text = "";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot43: RscPicture
		{
			idc = 243;
			style = 48;
			text = "";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot44: RscPicture
		{
			idc = 244;
			style = 48;
			text = "";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot45: RscPicture
		{
			idc = 245;
			style = 48;
			text = "";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot46: RscPicture
		{
			idc = 246;
			style = 48;
			text = "";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot47: RscPicture
		{
			idc = 247;
			style = 48;
			text = "";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot48: RscPicture
		{
			idc = 248;
			style = 48;
			text = "";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot49: RscPicture
		{
			idc = 249;
			style = 48;
			text = "";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
	};

	class controlsBackground {
		class Mainback : RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_bg.paa";
			x = 0 * safezoneW + safezoneX;
			y = 0.08 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 0.84 * safezoneH;
		};

		class gearbackground: RscPicture
		{
			idc = -1;
			style = 48;
			text = "#(argb,8,8,3)color(0,0,0,0.6)";
			x = 0.543136 * safezoneW + safezoneX;
			y = 0.201614 * safezoneH + safezoneY;
			w = 0.1875 * safezoneW;
			h = 0.22 * safezoneH;
		};
		class craftingbackground: RscPicture
		{
			idc = -1;
			style = 48;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.543136 * safezoneW + safezoneX;
			y = 0.430318 * safezoneH + safezoneY;
			w = 0.1875 * safezoneW;
			h = 0.36 * safezoneH;
		};
		class craftingslot01: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot02: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot03: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot04: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot05: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot06: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot07: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot08: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot09: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot10: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot11: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot12: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot13: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot14: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot15: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot16: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot17: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot18: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot19: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot20: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot21: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot22: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot23: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot24: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot25: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot26: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot27: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot28: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot29: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot30: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot31: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot32: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot33: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot34: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot35: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.6 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot36: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot37: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot38: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot39: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot40: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot41: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot42: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.64 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot43: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot44: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.575 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot45: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot46: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.625 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot47: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.65 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot48: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class craftingslot49: RscPicture
		{
			idc = -1;
			style = 48;
			text = "\z\addons\dayz_code\gui\crafting\craft_box.paa";
			x = 0.7 * safezoneW + safezoneX;
			y = 0.68 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
		};

	};
};
