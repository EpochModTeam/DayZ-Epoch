private ["_objectID","_objectUID","_target","_objects","_requirements","_count","_objects_filtered","_ctrl","_itemText","_type","_amount","_success","_wealth","_message1","_message2","_option"];
disableSerialization;

if (dayz_actionInProgress) exitWith {localize "STR_EPOCH_ACTIONS_2" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_maintain_area;
s_player_maintain_area = 1;
player removeAction s_player_maintain_area_force;
s_player_maintain_area_force = 1;
player removeAction s_player_maintain_area_preview;
s_player_maintain_area_preview = 1;

_target = nearestObject [[player] call FNC_getPos,"Plastic_Pole_EP1_DZ"];
_objects = nearestObjects [_target, DZE_maintainClasses, DZE_maintainRange];

_objects_filtered = [];
_requirements = [];
_count = 0;

_req = {
	private ["_count","_requirements","_type","_amount","_itemText","_wealth"];
	_count = _this;
	_wealth = 0;
	
	_requirements = switch true do {
	case (_count <= 10):  {["ItemGoldBar10oz",1]};
	case (_count <= 20):  {["ItemGoldBar10oz",2]};
	case (_count <= 35):  {["ItemGoldBar10oz",3]};
	case (_count <= 50):  {["ItemGoldBar10oz",4]};
	case (_count <= 75):  {["ItemGoldBar10oz",6]};
	case (_count <= 100): {["ItemBriefcase100oz",1]};
	case (_count <= 175): {["ItemBriefcase100oz",2]};
	case (_count <= 250): {["ItemBriefcase100oz",3]};
	case (_count <= 325): {["ItemBriefcase100oz",4]};
	case (_count <= 400): {["ItemBriefcase100oz",5]};
	case (_count <= 475): {["ItemBriefcase100oz",6]};
	case (_count <= 550): {["ItemBriefcase100oz",7]};
	case (_count <= 625): {["ItemBriefcase100oz",8]};
	case (_count > 625):  {["ItemBriefcase100oz",9]};
	};

	_type = _requirements select 0;
	_amount = _requirements select 1;
	
	if (Z_SingleCurrency) then {
		_amount = _count * 100;
		_itemText = CurrencyName;
		_wealth = player getVariable[Z_MoneyVariable,0];
	} else {
		_itemText = getText(configFile >> "CfgMagazines" >> _type >> "displayName");
		if ("ItemBriefcase100oz" == _type && _amount > 1) then {
			_itemText = _itemText + "s";
		};
	};

	[_type,_amount,_itemText,_wealth]
};

_maintain = {
	private ["_requirements","_count","_type","_amount","_itemText","_wealth","_success","_message1","_message2","_ctrl"];

	_count = count (_this select 0);
	_requirements = _count call _req;

	_type = _requirements select 0;
	_amount = _requirements select 1;
	_itemText = _requirements select 2;
	_wealth = _requirements select 3;
	
	_success = if (Z_SingleCurrency) then {_amount <= _wealth} else {[[[_type, _amount]],0] call epoch_returnChange};
	
	if (_success) then {
		player playActionNow "Medic";
		[player,DZE_maintainRange,true,(getPosATL player)] spawn player_alertZombies;

		if (Z_SingleCurrency) then {
			player setVariable[Z_MoneyVariable,(_wealth - _amount),true];
		};
		call player_forceSave;

		PVDZE_maintainArea = [player,1,_this select 0];
		publicVariableServer "PVDZE_maintainArea";

		systemChat format[localize "STR_EPOCH_ACTIONS_4", _count];
		_message1 = format [localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS", _count, [_amount] call BIS_fnc_numberText, _itemText];
		_message2 = " ";
		if (DZE_permanentPlot) then {
			_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
			_ctrl ctrlSetText _message1;
			_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7013;
			_ctrl ctrlSetText _message2;
		} else {
			_message1 call dayz_rollingMessages;
		};
	} else {
		_message1 = format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED", _count, [_amount] call BIS_fnc_numberText, _itemText];
		_message2 = " ";
		if (DZE_permanentPlot) then {
			_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
			_ctrl ctrlSetText _message1;
			_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7013;
			_ctrl ctrlSetText _message2;
		} else {
			_message1 call dayz_rollingMessages;
		};
	};
};

{
    if (damage _x >= DZE_DamageBeforeMaint) then {
		_objectUID = _x getVariable ["ObjectUID","0"];
		_objectID = _x getVariable ["ObjectID","0"];
		_objects_filtered set [count _objects_filtered, [_x, _objectID, _objectUID]];
		_count = _count + 1;
   };
} count _objects;

_option = if (typeName _this == "ARRAY") then {_this select 3} else {_this};

switch _option do {
	case "maintain": {
		if (_count != 0) then {
			[_objects_filtered] call _maintain;
		} else {
			systemChat localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_NONE";
		};
	};
	case "preview": {
		if (_count == 0) then {
			_message1 = localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_NONE";
			if (DZE_permanentPlot) then {
				_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
				_ctrl ctrlSetText _message1;
			} else {
				_message1 call dayz_rollingMessages;
			};
		} else {
			_requirements = _count call _req;
			_message1 = format [localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE", _count,[_requirements select 1] call BIS_fnc_numberText,_requirements select 2];
			if (DZE_permanentPlot) then {
				_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7012;
				_ctrl ctrlSetText _message1;
			} else {
				_message1 call dayz_rollingMessages;
			};
		};
		_requirements = count _objects call _req;
		_message2 = format [localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_FORCE",count _objects,[_requirements select 1] call BIS_fnc_numberText,_requirements select 2]; 
		if (_count != count _objects) then {
			if (DZE_permanentPlot) then {
				_ctrl = (uiNamespace getVariable "PlotManagement") displayCtrl 7013;
				_ctrl ctrlSetText _message2;
			} else {
				_message2 call dayz_rollingMessages;
			};
		};
	};
	case "force": {
		_count = 0;
		_objects_filtered = [];
		{
			_objectUID = _x getVariable ["ObjectUID","0"];
			_objectID = _x getVariable ["ObjectID","0"];
			_objects_filtered set [count _objects_filtered, [_x, _objectID, _objectUID]];
			_count = _count + 1;
		} count _objects;

		[_objects_filtered] call _maintain;
	};
};

dayz_actionInProgress = false;
s_player_maintain_area = -1;
s_player_maintain_area_force = -1;
s_player_maintain_area_preview = -1;
