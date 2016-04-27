class AT_Zupa_BlueButton: ZSC_RscButtonMenu {
	colorBackground[] = {0.2,0.75,1,1};
	colorText[] = {1,1,1,1};
	class Attributes
	{
		align = "center";
	};
};

class AdvancedTrading
{
	idd = 711197;
	onLoad = "uiNamespace setVariable ['AdvancedTrading', _this select 0]";
	class Controls {
		class RscText_ATBackground1: ZSC_RscText
		{
			idc = -1;
			x = 0.20 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.40 * safezoneW;
			h = 0.70 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
		};
		class RscText_ATBackground2: ZSC_RscText
		{
			idc = -1;
			x = 0.60 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.20 * safezoneW;
			h = 0.70 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
    class RscText_AT2: ZSC_RscText
		{
			idc = -1;
			text = "Advanced Trading";
			x = 0.20 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.60 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0.2,0.75,1,1};
			colorText[] = {1,1,1,1};
		};

    class RscText_Zupa_1: ZSC_RscText
		{
			idc = 7408;
			text = "Selling from gear.";
			x = 0.21 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.38 * safezoneW;
			h = 0.05 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class ZSC_RscButtonMenu_Z1: AT_Zupa_BlueButton
		{
			idc = -1;
			text =  "Gear";
			x = 0.21 * safezoneW + safezoneX;
			y = 0.26 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[2] call Z_getContainer;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_Z2: AT_Zupa_BlueButton
		{
			idc = -1;
			text =  "Backpack";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.26 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[0] call Z_getContainer;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_Z3: AT_Zupa_BlueButton
		{
			idc = -1;
			text =  "Vehicle";
			x = 0.41 * safezoneW + safezoneX;
			y = 0.26 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[1] call Z_getContainer;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_Z4: AT_Zupa_BlueButton
		{
			idc = 7416;
			text =  "Sell";
			x = 0.51 * safezoneW + safezoneX;
			y = 0.26 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "call Z_ChangeBuySell;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class RscText_AT6: ZSC_RscText
		{
			idc = 7412;
			text = "";
			x = 0.21 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscText_AT7: ZSC_RscText
		{
			idc = 7413;
			text = "";
			x = 0.21 * safezoneW + safezoneX;
			y = 0.33 * safezoneH + safezoneY;
			w = 0.30 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscText_AT8: ZSC_RscText
		{
			idc = -1;
			text = "Inventory";
			x = 0.21 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscText_AT9: ZSC_RscText
		{
			idc = 7409;
			text = "Selling";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscBackgroundText_Zupa_1: ZSC_RscText
		{
			idc = -1;
			text = "";
			x = 0.21* safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RscBackgroundText_Zupa_2: ZSC_RscText
		{
			idc = -1;
			text = "";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.41* safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		class RscListbox_AT10: ZSC_RscListBox
		{
			idc = 7401;
			type = 5;
			idcLeft = -1;
      idcRight = -1;
			x = 0.21* safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
			onLBSelChanged = "['sellable',(lbCurSel 7401)] call Z_getItemInfo";
			class ListScrollBar: ZSC_RscScrollBar{};
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				shadow = 0;
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
		};
		class RscListbox_AT11: ZSC_RscListBox
		{
			idc = 7402;
			x = 0.46 * safezoneW + safezoneX;
			y = 0.41* safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
			onLBSelChanged = "['selling',(lbCurSel 7402)] call Z_getItemInfo";
			class ListScrollBar: ZSC_RscScrollBar{};
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				shadow = 0;
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
		};
		class RscListbox_AT20: ZSC_RscListBox
		{
			idc = 7421;
			type = 5;
			idcLeft = -1;
      idcRight = -1;
			x = 0.21* safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
			onload = "ctrlShow [_this,false]";
			onLBSelChanged = "['buyable',(lbCurSel 7421)] call Z_getItemInfo";
			class ListScrollBar: ZSC_RscScrollBar{};
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				shadow = 0;
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
		};
		class RscListbox_AT21: ZSC_RscListBox
		{
			idc = 7422;
			x = 0.46 * safezoneW + safezoneX;
			y = 0.41* safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.30 * safezoneH;
			soundSelect[] = {"",0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.8};
			onload = "ctrlShow [_this,false]";
			onLBSelChanged = "['buying',(lbCurSel 7422)] call Z_getItemInfo";
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				shadow = 0;
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
		};
		class RscSearchBackground: ZSC_RscText
		{
			idc = -1;
			x = 0.21 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Zupa_Filter_Edit : ZSC_RscEdit {
			idc = 7444;
			colorText[] = {1,1,1,1};
			text = "";
			sizeEx = 0.030;
			x = 0.21 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04;
		};
		class ZSC_RscButtonMenu_ATTFilter: AT_Zupa_BlueButton
		{
			idc = -1;
			text = "Filter";
      x = 0.21 * safezoneW + safezoneX;
			y = 0.77 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			onButtonClick = "[(ctrlText 7444)] call Z_filterList;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_AT12: AT_Zupa_BlueButton
		{
			idc = 7430;
			text =  " > ";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7401)] call Z_pushItemToList;";
			colorBackground[] =  {1,1,1,1};
    	color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_AT14: AT_Zupa_BlueButton
		{
			idc = 7431;
			text = " >> ";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.49 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "call Z_pushAllToList;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_AT13: AT_Zupa_BlueButton
		{
			idc = 7432;
			text = " < ";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.57 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7402)] call Z_removeItemFromList;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_AT15: AT_Zupa_BlueButton
		{
			idc = 7433;
			text = " << ";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "call Z_removeAllToList;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_ATT1: AT_Zupa_BlueButton

		{
			idc = 7440;
			text = " > ";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7421),(ctrlText 7441)] call Z_toBuyingList;";
			onload = "ctrlShow [_this,false]";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class Zupa_Ammount_Edit : ZSC_RscEdit {
			idc = 7441;
			colorText[] = {1,1,1,1};
			text = "1";
			sizeEx = 0.030;
			x = 0.36 * safezoneW + safezoneX;
			y = 0.49 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03;
			onload = "ctrlShow [_this,false]";
		};
		class ZSC_RscButtonMenu_ATT3: AT_Zupa_BlueButton
		{
			idc = 7442;
			text = " < ";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.57 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "[(lbCurSel 7422)] call Z_removeItemFromBuyingList;";
			onload = "ctrlShow [_this,false]";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_ATT4: AT_Zupa_BlueButton
		{
			idc = 7443;
			text = " << ";
			x = 0.36 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			onButtonClick = "call Z_removeAllFromBuyingList;";
			onload = "ctrlShow [_this,false]";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class RscText_ATT8: ZSC_RscText
		{
			idc = 7404;
			text = "0/0/0";
			x = 0.45 * safezoneW + safezoneX;
			y = 0.32 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
			onload = "ctrlShow [_this,false]";
		};
		class RscSearchBackground2: ZSC_RscText
		{
			idc = -1;
			text = "";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RscText_AT18: ZSC_RscText
		{
			idc = 7410;
			text = "Nothing";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class ZSC_RscButtonMenu_AT16: AT_Zupa_BlueButton
		{
			idc = 7435;
			text = "Sell";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.77 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			onButtonClick = "call Z_SellItems;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_AT27: AT_Zupa_BlueButton
		{
			idc = 7436;
			text = "Buy";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.77 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			onload = "ctrlShow [_this,false]";
			onButtonClick = "call Z_BuyItems;";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
		};
		class ZSC_RscButtonMenu_AT28: AT_Zupa_BlueButton
		{
			idc = -1;
			x = 0.63 * safezoneW + safezoneX;
			y = 0.77 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
			colorBackground[] =  {1,1,1,1};
			color[] = {0,0,0,1};
      text = "Close";
		};
		class RscStrText_AT_PriceInfo: ZSC_RscStructuredText // todo
		{
			idc = 7451;
			text = "";
			x = 0.46 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscText_AT_InfoLabel: ZSC_RscText
		{
		    idc = -1;
		    text = "   Item info";
		    x = 0.60 * safezoneW + safezoneX;
		    y = 0.38 * safezoneH + safezoneY;
		    w = 0.20 * safezoneW;
		    h = 0.03 * safezoneH;
		    colorBackground[] = {0.2,0.75,1,1};
		    colorText[] = {1,1,1,1};
		};
		class RscText_AT_BreakLine: ZSC_RscText
		{
				idc = -1;
				x = 0.60 * safezoneW + safezoneX;
				y = 0.15 * safezoneH + safezoneY;
				w = 0.0005 * safezoneW;
				h = 0.70 * safezoneH;
			  colorBackground[] = {0.2,0.75,1,1};
		};
    class RscStrText_AT_ItemInfo: ZSC_RscStructuredText
    {
        idc = 7445;
        text = "";
        x = 0.61 * safezoneW + safezoneX;
        y = 0.43 * safezoneH + safezoneY;
        w = 0.19 * safezoneW;
        h = 0.59 * safezoneH;
        colorText[] = {1,1,1,1};
    };
		class RscStrText_AT_ContainerInfo: ZSC_RscStructuredText
		{
			idc = 7446;
			text = "";
			x = 0.61 * safezoneW + safezoneX;
			y = 0.24 * safezoneH + safezoneY;
			w = 0.19 * safezoneW;
			h = 0.35 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
};
