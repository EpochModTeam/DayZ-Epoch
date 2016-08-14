private ["_newWealth","_missing","_missingQty","_proceed","_itemIn","_countIn","_target","_objectClasses","_range","_objects","_requirements","_count","_cost","_option"];
disableSerialization;

if (DZE_ActionInProgress) exitWith {localize "STR_EPOCH_ACTIONS_2" call dayz_rollingMessages;};
DZE_ActionInProgress = true;

player removeAction s_player_maintain_area;
s_player_maintain_area = 1;
player removeAction s_player_maintain_area_preview;
s_player_maintain_area_preview = 1;

_target = nearestObject [[player] call FNC_getPos,"Plastic_Pole_EP1_DZ"];

_objectClasses = DZE_maintainClasses;
_range = DZE_PlotPole select 0;
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

_theCost = _count * 1;
_requirements = [[CurrencyName,_theCost]];

_option = _this select 0;
switch _option do {
	case "maintain": {
		
		_wealth = player getVariable[Z_MoneyVariable,0];
		_missing = "";
		_missingQty = 0;
		_proceed = true;
		{
			_itemIn = _x select 0;
			_countIn = _x select 1;
			if (_wealth < _countIn) exitWith { _missing = _itemIn; _missingQty = (_countIn - _wealth); _proceed = false; };
		} count _requirements;

		if (_proceed) then {
			_newWealth = (_wealth - _countIn);
			player playActionNow "Medic";
			[player,_range,true,(getPosATL player)] spawn player_alertZombies;

			player setVariable[Z_MoneyVariable,_newWealth,true];
			call player_forceSave;
			
			PVDZE_maintainArea = [player,1,_objects];
			publicVariableServer "PVDZE_maintainArea";
			
			systemChat format[localize "STR_EPOCH_ACTIONS_4", _count];
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS", _count];
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_PRICE_MAINTAINED_SUCCESS",_theCost, CurrencyName];
		} else {
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED", _count];
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
			_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MONEY_NEEDED_FAILED", _theCost, CurrencyName];
			systemChat format[localize "STR_EPOCH_ACTIONS_6", _missingQty, CurrencyName];
		};
	};
	case "preview": {
		_cost = "";
		{
			_itemIn = _x select 0;
			_countIn = _x select 1;
			if (_cost != "") then {
				_cost = _cost + " and ";
			};
			_cost = _cost + (str(_countIn) + " " + CurrencyName);
		} count _requirements;
			
		systemChat format[localize "STR_EPOCH_ACTIONS_7", _count, _cost];
			
		_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
		_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_OBJECTS", _count];
		_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
		_ctrl ctrlSetText format[localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE", _theCost, CurrencyName];
	};
};

DZE_ActionInProgress = false;
s_player_maintain_area = -1;
s_player_maintain_area_preview = -1;
