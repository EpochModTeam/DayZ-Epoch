private ["_objectID","_objectUID","_target","_objectClasses","_range","_objects","_requirements","_count","_objects_filtered","_ctrl","_itemText","_type","_amount","_success","_theCost","_wealth","_message1","_message2","_option"];
disableSerialization;

if (DZE_ActionInProgress) exitWith {localize "STR_EPOCH_ACTIONS_2" call dayz_rollingMessages;};
DZE_ActionInProgress = true;

player removeAction s_player_maintain_area;
s_player_maintain_area = 1;
player removeAction s_player_maintain_area_preview;
s_player_maintain_area_preview = 1;

_target = nearestObject [[player] call FNC_getPos,"Plastic_Pole_EP1_DZ"];
_objectClasses = DZE_maintainClasses;
_range = DZE_maintainRange; // set the max range for the maintain area
_objects = nearestObjects [_target, _objectClasses, _range];

_objects_filtered = [];
_count = 0;
{
    if (damage _x >= DZE_DamageBeforeMaint) then {
		_objectUID = _x getVariable ["ObjectUID","0"];
		_objectID = _x getVariable ["ObjectID","0"];
		_objects_filtered set [count _objects_filtered, [_x, _objectID, _objectUID]];
		_count = _count + 1;
   };
} count _objects;
_objects = _objects_filtered;

// TODO dynamic requirements based on used building parts?
if (_count == 0) exitWith {
	if (DZE_permanentPlot) then {
		_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
		_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_OBJECTS", _count];
		_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7013;
		_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_NO_MONEY_NEEDED", " "];
	} else {
		format[localize "STR_EPOCH_ACTIONS_22",_count] call dayz_rollingMessages;
	};
	DZE_ActionInProgress = false;
	s_player_maintain_area = -1;
	s_player_maintain_area_preview = -1;
};

_requirements = [];
_theCost = _count * 100;

_requirements = switch true do {
	case (_count <= 10):  {[["ItemGoldBar10oz",1]]};
	case (_count <= 20):  {[["ItemGoldBar10oz",2]]};
	case (_count <= 35):  {[["ItemGoldBar10oz",3]]};
	case (_count <= 50):  {[["ItemGoldBar10oz",4]]};
	case (_count <= 75):  {[["ItemGoldBar10oz",6]]};
	case (_count <= 100): {[["ItemBriefcase100oz",1]]};
	case (_count <= 175): {[["ItemBriefcase100oz",2]]};
	case (_count <= 250): {[["ItemBriefcase100oz",3]]};
	case (_count <= 325): {[["ItemBriefcase100oz",4]]};
	case (_count <= 400): {[["ItemBriefcase100oz",5]]};
	case (_count <= 475): {[["ItemBriefcase100oz",6]]};
	case (_count <= 550): {[["ItemBriefcase100oz",7]]};
	case (_count <= 625): {[["ItemBriefcase100oz",8]]};
	case (_count > 625):  {[["ItemBriefcase100oz",9]]};
};

_type = (_requirements select 0) select 0;
_amount = (_requirements select 0) select 1;

if (Z_SingleCurrency) then {
	_amount = _theCost;
	_itemText = CurrencyName;
	_wealth = player getVariable[Z_MoneyVariable,0];
} else {
	_itemText = getText(configFile >> "CfgMagazines" >> _type >> "displayName");
	if ("ItemBriefcase100oz" == _type && _amount > 1) then {
		_itemText = _itemText + "s";
	};
};

_option = if (typeName _this == "ARRAY") then {_this select 3} else {_this};

switch _option do {
	case "maintain": {
		_success = if (Z_SingleCurrency) then {_theCost <= _wealth} else {[[[_type, _amount]],0] call epoch_returnChange};

		if (_success) then {
			player playActionNow "Medic";
			[player,_range,true,(getPosATL player)] spawn player_alertZombies;
			
			if (Z_SingleCurrency) then {
				player setVariable[Z_MoneyVariable,(_wealth - _theCost),true];
				call player_forceSave;
			};

			PVDZE_maintainArea = [player,1,_objects];
			publicVariableServer "PVDZE_maintainArea";
			
			systemChat format[localize "STR_EPOCH_ACTIONS_4", _count];
			_message1 = format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS", _count];
			_message2 = format[localize "STR_EPOCH_PLOTMANAGEMENT_PRICE_MAINTAINED_SUCCESS", _amount, _itemText];
			if (DZE_permanentPlot) then {
				_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
				_ctrl ctrlSetText _message1;
				_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7013;
				_ctrl ctrlSetText _message2;
			} else {			
				_message2 call dayz_rollingMessages;
				_message1 call dayz_rollingMessages;
			};
		} else {
			_message1 = format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED", _count];
			_message2 = format[localize "STR_EPOCH_PLOTMANAGEMENT_MONEY_NEEDED_FAILED", _amount, _itemText];
			if (DZE_permanentPlot) then {
				_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
				_ctrl ctrlSetText _message1;
				_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7013;
				_ctrl ctrlSetText _message2;
			} else {
				_message2 call dayz_rollingMessages;
				_message1 call dayz_rollingMessages;
			};
		};
	};
	case "preview": {
		_message1 = format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_OBJECTS", _count];
		_message2 = format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE", _amount, _itemText];
		if (DZE_permanentPlot) then {
			_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
			_ctrl ctrlSetText _message1;
			_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7013;
			_ctrl ctrlSetText _message2;
		} else {
			_message2 call dayz_rollingMessages;
			_message1 call dayz_rollingMessages;
		};
	};
};

DZE_ActionInProgress = false;
s_player_maintain_area = -1;
s_player_maintain_area_preview = -1;
