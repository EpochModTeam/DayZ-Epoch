class RscDisplayGear
{
	idd = 106;
	enableDisplay = 1;
	movingEnable = 0;
	
	//onLoad = "[] spawn object_monitorGear; false call dz_fn_meleeMagazines; call gear_ui_init; call ui_gear_sound; if (isNil('IGUI_GEAR_activeFilter')) then { IGUI_GEAR_activeFilter = 0;}; [_this,'onLoad'] execVM '\z\addons\dayz_code\system\handleGear.sqf'";/* diag_log 'RscDisplayGear :  : onLoad'; */
	//onUnload = "false call dz_fn_meleeMagazines; call player_forceSave; call dayz_meleeMagazineCheck;"; /* diag_log 'RscDisplayGear :  : onunLoad'; */
	onLoad = "setMousePosition [0.5, 0.5];_this call fn_gearMenuChecks; false call dz_fn_meleeMagazines; [] spawn object_monitorGear; call gear_ui_init; call ui_gear_sound; if (isNil 'IGUI_GEAR_activeFilter') then {IGUI_GEAR_activeFilter = 0}; [_this, 'onLoad'] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
	onUnload = "true call dz_fn_meleeMagazines; call player_selectWeapon; call player_forceSave;";
	onMouseMoving = "[] call gear_ui_hide;";
	onMouseHolding = "[] call gear_ui_hide;";
	
	emptyGun = "";
	emptySec = "";
	emptyEq = "";
	emptyMag = "";
	emptyMag2 = "";
	emptyHGun = "";
	emptyHGunMag = "";
	
	class Controls
	{
		// Cannot be removed due to crash or something is dependend on it
		class CA_Filter_Icon : RscPicture
		{
			idc = 148;
			style = "0x30 + 0x800";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "\ca\ui\data\igui_gear_filter_1_ca.paa";
		};
		
		// Cannot be removed due to crash or something is dependend on it
		class CA_Filter_Left_Icon : RscPicture
		{
			idc = 1301;
			style = "0x30 + 0x800";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "\ca\ui\data\arrow_left_ca.paa";
		};
		
		// Cannot be removed due to crash or something is dependend on it
		class CA_Filter_Right_Icon : RscPicture
		{
			idc = 1302;
			style = "0x30 + 0x800";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "\ca\ui\data\arrow_right_ca.paa";
		};
		
		// Cannot be removed due to crash or something is dependend on it
		class CA_Filter_Arrow_Left : RscButton
		{
			idc = 150;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "";
		};
		
		// Cannot be removed due to crash or something is dependend on it
		class CA_Filter_Arrow_Right : RscButton
		{
			idc = 151;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "";
		};
		
		// Cannot be removed due to crash or something is dependent on it
		class CA_Filter_Icon1 : RscButton
		{
			idc = 149;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "";
		};
		
		class Gear_Title : RscText
		{
			idc = 1001;
			text = $STR_UI_SLOTS_LEFT;
			x = -0.051;
			y = 0.014;
			w = 0.1525;
			h = 0.035;
			colorText[] = {0.06,0.05,0.03,1};
			shadow = 0;
		};
		
		// Cannot be removed due to crash or something is dependent on it
		class Unit_Title : RscText
		{
			idc = 101;
			style = 2;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		
		// Cannot be removed due to crash or something is dependent on it
		class CA_Money : RscText
		{
			idc = 1102;
			style = 1;
			show = 0;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "Money:";
		};
		
		// Cannot be removed due to crash or something is dependent on it
		class CA_Money_Value : RscText
		{
			idc = 1103;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "0";
		};
		
		class Weapon_slots_picture : RscPicture
		{
			idc = 9001;
			x = 0.084;
			y = 0.01;
			w = 0.028;
			h = 0.042;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_slots_weapons.paa";
		};
		
		class Weapon_slots_value : RscText
		{
			idc = 9002;
			x = 0.104;
			y = 0.014;
			w = 0.122;
			h = 0.035;
			colorText[] = {0.46,0.04,0.05,1};
			shadow = 0;
			text = "n/a";
		};
		
		class Item_slots_picture : RscPicture
		{
			idc = 9003;
			x = 0.167;
			y = 0.01;
			w = 0.028;
			h = 0.042;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_slots_items.paa";
		};
		
		class Item_slots_value : RscText
		{
			idc = 9004;
			x = 0.187;
			y = 0.014;
			w = 0.122;
			h = 0.035;
			colorText[] = {0.46,0.04,0.05,1};
			shadow = 0;
			text = "n/a";
		};
		
		class Backpack_slots_picture : RscPicture
		{
			idc = 9005;
			x = 0.254;
			y = 0.01;
			w = 0.028;
			h = 0.042;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_slots_backpacks.paa";
		};
		
		class Backpack_slots_value : RscText
		{
			idc = 9006;
			x = 0.274;
			y = 0.014;
			w = 0.122;
			h = 0.035;
			colorText[] = {0.46,0.04,0.05,1};
			shadow = 0;
			text = "n/a";
		};
		
		class Available_items_Text : RscText
		{
			idc = 156;
			x = -0.051;
			y = 0.054;
			w = 0.39;
			h = 0.029;
			colorText[] = {0.06,0.05,0.03,0.6};
			shadow = 0;
		};
		
		class CA_ItemName : RscText // This is the RSC for the DisplayName under the list box.
		{
			idc = 1101;
			//x = -0.039;
			x = -0.051;
			//y = 0.627;
			y = 0.668;
			w = 0.458;
			colorText[] = {0.32,0.24,0.09,1};
			shadow = 0;
			text = "Gear of the unit:";
		};
		
		class CA_CustomDescription : RscStructuredText // This is the RSC for the descriptionShort under the list box.
		{
			idc = 1106;
			//x = -0.039;
			x = -0.051;
			//y = 0.664;
			y = 0.704;
			w = 0.458;
			h = 0.152;
			colorText[] = {0.14,0.14,0.14,1};
			shadow = 0;
			
			class Attributes
			{
				font = "Zeppelin32";
				color = "#232323";
				align = "left";
				shadow = 0;
			};
		};
		
		class CA_Item_Picture : RscPicture
		{
			idc = 1104;
			style = "0x30 + 0x800";
			//x = 0.331;
			x = 0.211;
			//y = 0.786;
			y = 0.901;
			//w = 0.157;
			w = 0.221;
			//h = 0.105;
			h = 0.155;
			text = "";
		};
		
		class ListboxArrows : RscControlsGroup
		{
			x = -0.058;
			y = 0.122;
			w = 0.507;
			//w = 0.556;
			h = 0.523;
			idc = 155;
			
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			
			class Controls
			{
				class CA_B_Add : RscGearShortcutButton
				{
					idc = 146;
					x = -2;
					style = 2048;
					onSetFocus = "[_this,'onFocus'] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
					onButtonClick = "false call dz_fn_meleeMagazines; [_this,'onLBListSelChanged'] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
					text = "&lt;";
				};
				
				class Available_items : RscIGUIListNBox
				{
					idc = 105;
					columns[] = {0.07804,0.18412,0.81,0.67};
					drawSideArrows = 1;
					idcRight = 147;
					idcLeft = 146;
					colorPlayerItem[] = {0.06,0.05,0.03,1};
					colorSelect[] = {0.06,0.05,0.03,1};
					colorSelect2[] = {0.06,0.05,0.03,1};
					colorSelectBackground[] = {0.28,0.25,0.18,0.4};
					colorSelectBackground2[] = {0.28,0.25,0.18,0.4};
					shadow = 0;
					onLBSelChanged = "[_this,'onLBSelChanged'] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
					onLBListSelChanged = "[_this,'onLBListSelChanged'] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
					onKillFocus = "[_this,'onKillFocus'] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
					x = 0;
					y = 0;
					//w = 0.46;
					w = 0.507;
					//h = 0.449;
					//h = 0.524;
					h = 0.523;
					canDrag = 1;
				};
				
				class CA_B_Remove : CA_B_Add
				{
					idc = 147;
					x = -2;
					onSetFocus = "[_this,""onFocus""] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
					onButtonClick = "false call dz_fn_meleeMagazines; [_this,""onLBListSelChanged""] execVM '\z\addons\dayz_code\system\handleGear.sqf'";
					text = ">";
				};
			};
		};
		
		class G_Interaction : RscControlsGroup
		{
			idc = 6902;
			x = 0.502;
			y = 0.250 * safezoneH;
			w = 0.145 * safezoneW;
			h = 0; //0.250 * safezoneH;
			onMouseMoving = "call gear_ui_offMenu;";
			
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			
			class Controls
			{
				class RscButton_1600 : RscButtonActionMenu
				{
					idc = 1600;
					text = "";
					x = 0;
					y = 0 * safezoneH;
				};
				
				class RscButton_1601 : RscButtonActionMenu
				{
					idc = 1601;
					text = "";
					x = 0;
					y = 0.025 * safezoneH;
				};
				
				class RscButton_1602 : RscButtonActionMenu
				{
					idc = 1602;
					text = "";
					x = 0;
					y = 0.05 * safezoneH;
				};
				
				class RscButton_1603 : RscButtonActionMenu
				{
					idc = 1603;
					text = "";
					x = 0;
					y = 0.075 * safezoneH;
				};
				
				class RscButton_1604 : RscButtonActionMenu
				{
					idc = 1604;
					text = "";
					x = 0;
					y = 0.1 * safezoneH;
				};
				
				class RscButton_1605 : RscButtonActionMenu
				{
					idc = 1605;
					text = "";
					x = 0;
					y = 0.125 * safezoneH;
				};
				
				class RscButton_1606 : RscButtonActionMenu
				{
					idc = 1606;
					text = "";
					x = 0;
					y = 0.15 * safezoneH;
				};
				
				class RscButton_1607 : RscButtonActionMenu
				{
					idc = 1607;
					text = "";
					x = 0;
					y = 0.175 * safezoneH;
				};
				
				class RscButton_1608 : RscButtonActionMenu
				{
					idc = 1608;
					text = "";
					x = 0;
					y = 0.2 * safezoneH;
				};
				
				class RscButton_1609 : RscButtonActionMenu
				{
					idc = 1609;
					text = "";
					x = 0;
					y = 0.225 * safezoneH;
				};
			};
		};
		
		class G_GearItems : RscControlsGroup
		{
			idc = 160;
			x = 0.465;
			y = 0.104;
			w = 0.533;
			h = 0.928;
			
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			
			class Controls
			{
				class CA_Gear_slot_primary : RscActiveText
				{
					idc = 107;
					x = 0.138;
					y = 0.181;
					w = 0.309;
					h = 0.174;
					style = "0x30 + 0x800";
					onMouseButtonDown = "_this call player_selectSlot;";
					soundDoubleClick[] = {"",0.1,1};
					color[] = {1,1,1,1};
					colorBackground[] = {0.84,0.8,0.72,0.2};
					colorBackgroundSelected[] = {0.84,0.8,0.72,0.8};
					colorFocused[] = {0,0,0,0};
					canDrag = 1;
				};
				
				class CA_Gear_slot_secondary : CA_Gear_slot_primary
				{
					idc = 108;
					x = 0.138;
					y = 0;
					w = 0.309;
					h = 0.174;
					colorBackground[] = {0.27,0.34,0.47,0.2};
					colorBackgroundSelected[] = {0.27,0.34,0.47,0.8};
					onMouseButtonDblClick = "if (!(ctrlShown ((findDisplay 106) displayCtrl 158)) && ((gearSlotData (_this select 0)) isKindOf 'Bag_Base_EP1')) then { [player,'open_backpack',0,false,5] call dayz_zombieSpeak; };";
				};
				
				class CA_Gear_slot_carry : CA_Gear_slot_primary
				{
					idc = 1209;
					x = 0.138;
					y = 0.364;
					w = 0.309;
					h = 0.174;
					onMouseEnter = "if ((DayZ_onBack != """") && (dayz_onBack in MeleeWeapons)) then {mouseOverCarry = true;} else {mouseOverCarry = false;};";
					onMouseExit = "mouseOverCarry = false;";
					colorActive[] = {1,1,1,1};
					colorBackground[] = {0.74,0.74,0.74,0.2}; // has no effect
					colorBackgroundSelected[] = {0.74,0.74,0.74,0.8}; // has no effect
				};
				
				class CA_Gear_slot_item1 : CA_Gear_slot_primary
				{
					idc = 109;
					x = 0;
					y = 0;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item2 : CA_Gear_slot_item1
				{
					idc = 110;
					x = 0.069;
					y = 0;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item3 : CA_Gear_slot_item1
				{
					idc = 111;
					x = 0;
					y = 0.091;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item4 : CA_Gear_slot_item1
				{
					idc = 112;
					x = 0.069;
					y = 0.091;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item5 : CA_Gear_slot_item1
				{
					idc = 113;
					x = 0;
					y = 0.181;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item6 : CA_Gear_slot_item1
				{
					idc = 114;
					x = 0.069;
					y = 0.181;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item7 : CA_Gear_slot_item1
				{
					idc = 115;
					x = 0;
					y = 0.272;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item8 : CA_Gear_slot_item1
				{
					idc = 116;
					x = 0.069;
					y = 0.272;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item9 : CA_Gear_slot_item1
				{
					idc = 117;
					x = 0;
					y = 0.364;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item10 : CA_Gear_slot_item1
				{
					idc = 118;
					x = 0.069;
					y = 0.364;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item11 : CA_Gear_slot_item1
				{
					idc = 119;
					x = 0;
					y = 0.457;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item12 : CA_Gear_slot_item1
				{
					idc = 120;
					x = 0.069;
					y = 0.457;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun : CA_Gear_slot_primary
				{
					idc = 121;
					x = 0;
					y = 0.559;
					w = 0.133;
					h = 0.177;
					colorBackground[] = {0.5,0.58,0.38,0.2};
					colorBackgroundSelected[] = {0.5,0.58,0.38,0.8};
				};
				
				class CA_Gear_slot_handgun_item1 : CA_Gear_slot_item1
				{
					idc = 122;
					x = 0.138;
					y = 0.559;
					w = 0.064;
					h = 0.085;
					colorBackground[] = {0.69,0.86,0.38,0.2};
					colorBackgroundSelected[] = {0.5,0.58,0.38,0.8};
				};
				
				class CA_Gear_slot_handgun_item2 : CA_Gear_slot_handgun_item1
				{
					idc = 123;
					x = 0.207;
					y = 0.559;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item3 : CA_Gear_slot_handgun_item1
				{
					idc = 124;
					x = 0.275;
					y = 0.559;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item4 : CA_Gear_slot_handgun_item1
				{
					idc = 125;
					x = 0.345;
					y = 0.559;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item5 : CA_Gear_slot_handgun_item1
				{
					idc = 126;
					x = 0.138;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item6 : CA_Gear_slot_handgun_item1
				{
					idc = 127;
					x = 0.207;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item7 : CA_Gear_slot_handgun_item1
				{
					idc = 128;
					x = 0.275;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item8 : CA_Gear_slot_handgun_item1
				{
					idc = 129;
					x = 0.345;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory1 : CA_Gear_slot_handgun_item1
				{
					idc = 134;
					x = 0;
					y = 0.752;
					w = 0.064;
					h = 0.085;
					colorBackground[] = {0.88,0.8,0.66,0.2};
					colorBackgroundSelected[] = {0.49,0.43,0.29,0.8};
				};
				
				class CA_Gear_slot_inventory2 : CA_Gear_slot_inventory1
				{
					idc = 135;
					x = 0.069;
					y = 0.752;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory3 : CA_Gear_slot_inventory1
				{
					idc = 136;
					x = 0.138;
					y = 0.752;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory4 : CA_Gear_slot_inventory1
				{
					idc = 137;
					x = 0.207;
					y = 0.752;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory5 : CA_Gear_slot_inventory1
				{
					idc = 138;
					x = 0.275;
					y = 0.752;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory6 : CA_Gear_slot_inventory1
				{
					idc = 139;
					x = 0.345;
					y = 0.752;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory7 : CA_Gear_slot_inventory1
				{
					idc = 140;
					x = 0;
					y = 0.844;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory8 : CA_Gear_slot_inventory1
				{
					idc = 141;
					x = 0.069;
					y = 0.844;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory9 : CA_Gear_slot_inventory1
				{
					idc = 142;
					x = 0.138;
					y = 0.844;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory10 : CA_Gear_slot_inventory1
				{
					idc = 143;
					x = 0.207;
					y = 0.844;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory11 : CA_Gear_slot_inventory1
				{
					idc = 144;
					x = 0.275;
					y = 0.844;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_inventory12 : CA_Gear_slot_inventory1
				{
					idc = 145;
					x = 0.345;
					y = 0.844;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_special1 : CA_Gear_slot_handgun
				{
					idc = 130;
					x = 0.413;
					y = 0.568;
					w = 0.12;
					h = 0.16;
					colorBackground[] = {0.46,0.46,0.4,0.2};
					colorBackgroundSelected[] = {0.46,0.46,0.4,0.8};
				};
				
				class CA_Gear_slot_special2 : CA_Gear_slot_special1
				{
					idc = 131;
					x = 0.413;
					y = 0.757;
					w = 0.12;
					h = 0.16;
				};
				
				class ButtonRearm : RscActiveText
				{
					idc = 132;
					style = "0x30 + 0x800";
					text = "\z\addons\dayz_code\gui\gear\gear_ui_open.paa";
					//x = 0.916;
					x = 0.455;
					//y = 0.104;
					y = 0.002;
					w = 0.051;
					h = 0.174;
					color[] = {1,1,1,0.5};
					colorActive[] = {1,1,1,0.5};
				};
				
				class ButtonOpenBag : RscActiveText
				{
					idc = 157;
					style = "0x30 + 0x800";
					text = "\z\addons\dayz_code\gui\gear\gear_ui_open.paa";
					//x = 0.916;
					x = 0.455;
					//y = 0.104;
					y = 0.002;
					w = 0.051;
					h = 0.174;
					color[] = {1,1,1,0.5};
					colorActive[] = {1,1,1,0.8};
					action = "[player,'open_backpack',0,false,5] call dayz_zombieSpeak;";
				};
				
				class ButtonCloseBag : RscActiveText
				{
					idc = 158;
					style = "0x30 + 0x800";
					text = "\z\addons\dayz_code\gui\gear\gear_ui_open.paa";
					//x = 0.916;
					x = 0.455;
					//y = 0.104;
					y = 0.002;
					w = 0.051;
					h = 0.174;
					color[] = {1,1,1,0.5};
					colorActive[] = {1,1,1,0.8};
					action = "[player,'open_backpack',0,false,5] call dayz_zombieSpeak;";
				};
				
				class Button1 : RscActiveText
				{
					idc = 1204;
					style = "0x30 + 0x800";
					text = "\z\addons\dayz_code\gui\gear\gear_ui_carry.paa";
					//x = 0.916;
					x = 0.455;
					//y = 0.285;
					y = 0.183;
					w = 0.051;
					h = 0.174;
					color[] = {1,1,1,0.5};
					colorActive[] = {1,1,1,0.8};
					action = "0 call dz_fn_switchWeapon";
				};
				
				class Button2 : RscActiveText
				{
					idc = 1208;
					style = "0x30 + 0x800";
					text = "\z\addons\dayz_code\gui\gear\gear_ui_hold.paa";
					//x = 0.916;
					x = 0.455;
					//y = 0.468;
					y = 0.364;
					w = 0.051;
					h = 0.174;
					color[] = {1,1,1,0.5};
					colorActive[] = {1,1,1,0.8};
					action = "0 call dz_fn_switchWeapon";
				};
			};
		};
		
		class BagItemsGroup : RscControlsGroup
		{
			x = 0.465;
			y = 0.104;
			w = 0.533;
			h = 0.928;
			idc = 159;
			magW = 0.052;
			magH = 0.074;
			weaponW = 0.22;
			weaponH = 0.15;
			gunW = 0.11;
			gunH = 0.15;
			spacing = 0.0047;
			text = "";
			color[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorBackgroundSelected[] = {1,1,1,1};
			soundPush[] = {"",0.1,1};
			colorFocused[] = {1,1,1,1};
			soundClick[] = {"",0.1,1};
			soundDoubleClick[] = {"",0.1,1};
			
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			
			class Controls
			{
				class ButtonCloseBagCustom : RscActiveText
				{
					idc = 1203;
					style = "0x30 + 0x800";
					text = "\z\addons\dayz_code\gui\gear\gear_ui_open.paa";
					//x = 0.916;
					x = 0.455;
					//y = 0.104;
					y = 0;
					w = 0.051;
					h = 0.174;
					color[] = {1,1,1,0.5};
					colorActive[] = {1,1,1,0.8};
					action = "[player,'open_backpack',0,false,5] call dayz_zombieSpeak; ctrlActivate ((findDisplay 106) displayCtrl 158);";
				};
			};
		};
		
		// Cannot be removed due to crash or something is dependend on it
		class ButtonFilters : RscIGUIShortcutButton
		{
			idc = 148;
			shortcuts[] = {"0x00050000 + 3"};
			x = 0;
			y = 0;
			text = "Filter";
			w = 0;
			h = 0;
		};
		
		// Cannot be removed due to crash or something is dependend on it
		class ButtonContinue : RscIGUIShortcutButton
		{
			idc = 1;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0;
			y = 0;
			default = 1;
			w = 0;
			h = 0;
		};
		
		class ButtonClose : RscActiveText
		{
			idc = 2;
			style = "0x30 + 0x800";
			text = "\z\addons\dayz_code\gui\gear\gear_ui_close.paa";
			x = 0.919;
			y = 0.039;
			w = 0.051;
			h = 0.057;
			color[] = {1,1,1,0.5};
			colorActive[] = {1,1,1,0.8};
		};
		
		// Cannot be removed due to crash or something is dependend on it
		class Break_7 : RscLineBreak {};
	};
	
	class ControlsBackground
	{
		class Mainback : RscPicture
		{
			idc = 1005;
			x = -0.086;
			y = -0.03;
			w = 1.1;
			h = 1.121;
			moving = 0;
			text = "\z\addons\dayz_code\gui\gear\gear_bg.paa";
		};
		
		class CA_Gear_slot_primary_background : RscPicture
		{
			idc = 1006;
			x = 0.603;
			y = 0.285;
			w = 0.309;
			h = 0.174;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_holding.paa";
		};
		
		class CA_Gear_slot_secondary_background : RscPicture
		{
			idc = 1007;
			x = 0.603;
			y = 0.104;
			w = 0.309;
			h = 0.174;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_back.paa";
		};
		
		class CA_Gear_slot_carry_background : RscPicture
		{
			idc = 1008;
			x = 0.603;
			y = 0.468;
			w = 0.309;
			h = 0.174;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_carrying.paa";
		};
		
		class CA_Gear_slot_handgun_background : RscPicture
		{
			idc = 1009;
			x = 0.465;
			y = 0.663;
			w = 0.133;
			h = 0.177;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_pistol.paa";
		};
		
		class CA_Gear_slot_special1_background : RscPicture
		{
			idc = 1010;
			x = 0.878;
			y = 0.671;
			w = 0.12;
			h = 0.16;
			colorBackground[] = {0.6,0.54,0.64,0.2};
			colorBackgroundSelected[] = {0.6,0.54,0.64,0.8};
			text = "\z\addons\dayz_code\gui\gear\gear_ui_vision1.paa";
		};
		
		class CA_Gear_slot_special2_background : RscPicture
		{
			idc = 1011;
			x = 0.878;
			y = 0.861;
			w = 0.12;
			h = 0.16;
			text = "\z\addons\dayz_code\gui\gear\gear_ui_vision2.paa";
		};
	};
};
