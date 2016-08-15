private ["_objectID","_objectUID","_target","_objectClasses","_range","_objects","_requirements","_count","_option","_objects_filtered","_ctrl","_itemText"];
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
	_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
	_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_OBJECTS", _count];
	_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
	_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_NO_MONEY_NEEDED", " "];
	DZE_ActionInProgress = false;
	s_player_maintain_area = -1;
	s_player_maintain_area_preview = -1;
};

_requirements = [];
_option = _this select 0;

switch true do {
	case (_count <= 10):  {_requirements = [["ItemGoldBar10oz",1]]};
	case (_count <= 20):  {_requirements = [["ItemGoldBar10oz",2]]};
	case (_count <= 35):  {_requirements = [["ItemGoldBar10oz",3]]};
	case (_count <= 50):  {_requirements = [["ItemGoldBar10oz",4]]};
	case (_count <= 75):  {_requirements = [["ItemGoldBar10oz",6]]};
	case (_count <= 100): {_requirements = [["ItemBriefcase100oz",1]]};
	case (_count <= 175): {_requirements = [["ItemBriefcase100oz",2]]};
	case (_count <= 250): {_requirements = [["ItemBriefcase100oz",3]]};
	case (_count <= 325): {_requirements = [["ItemBriefcase100oz",4]]};
	case (_count <= 400): {_requirements = [["ItemBriefcase100oz",5]]};
	case (_count <= 475): {_requirements = [["ItemBriefcase100oz",6]]};
	case (_count <= 550): {_requirements = [["ItemBriefcase100oz",7]]};
	case (_count <= 625): {_requirements = [["ItemBriefcase100oz",8]]};
	case (_count > 625):  {_requirements = [["ItemBriefcase100oz",9]]};
};

_itemText = getText(configFile >> "CfgMagazines" >> (_requirements select 0) select 0 >> "displayName");
if ("ItemBriefcase100oz" == (_requirements select 0) select 0 && (_requirements select 0) select 1 > 1) then {
	_itemText = _itemText + "s";
};

switch _option do {
	case "maintain": {
		if ([[[(_requirements select 0) select 0, (_requirements select 0) select 1]],0] call epoch_returnChange) then {
			player playActionNow "Medic";
			[player,_range,true,(getPosATL player)] spawn player_alertZombies;

			PVDZE_maintainArea = [player,1,_objects];
			publicVariableServer "PVDZE_maintainArea";
			
			systemChat format[localize "STR_EPOCH_ACTIONS_4", _count];
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS", _count];
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_PRICE_MAINTAINED_SUCCESS", (_requirements select 0) select 1, _itemText];
		} else {
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED", _count];
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MONEY_NEEDED_FAILED", (_requirements select 0) select 1, _itemText];
		};
	};
	case "preview": {
		_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
		_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_OBJECTS", _count];
		_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
		_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE", (_requirements select 0) select 1, _itemText];
	};
};

DZE_ActionInProgress = false;
s_player_maintain_area = -1;
s_player_maintain_area_preview = -1;
