private ["_missing","_missingQty","_proceed","_itemIn","_countIn","_qty","_num_removed","_uniqueID","_removed","_removed_total","_tobe_removed_total","_obj","_objectID","_objectUID","_classname","_location","_dir","_objectCharacterID","_object","_temp_removed_array","_textMissing","_target","_objectClasses","_range","_objects","_requirements","_count","_cost","_itemText","_option"];
disableSerialization;

if (DZE_ActionInProgress) exitWith { cutText [(localize "STR_EPOCH_ACTIONS_2") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

player removeAction s_player_maintain_area;
s_player_maintain_area = 1;
player removeAction s_player_maintain_area_preview;
s_player_maintain_area_preview = 1;

_target = cursorTarget;

_objectClasses = DZE_maintainClasses;
_range = DZE_PlotPole select 0;
_objects = nearestObjects [_target, _objectClasses, _range];

_objects_filtered = [];
{
    if (damage _x >= DZE_DamageBeforeMaint) then {
        _objects_filtered set [count _objects_filtered, _x];
   };
} count _objects;
_objects = _objects_filtered;

_count = count _objects;

if (_count == 0) exitWith {
	_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
	_result =  format["Objects to maintain: %1" , _count];
	_ctrl ctrlSetText   _result;		
	_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
	_result =  format["No money needed.", " "];	
	_ctrl ctrlSetText   _result;	
	DZE_ActionInProgress = false;
	s_player_maintain_area = -1;
	s_player_maintain_area_preview = -1;
};

_requirements = [];
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



_option = _this select 0;
switch _option do {
	case "maintain": {		
		_missing = "";
		_missingQty = 0;
		_proceed = true;
		{
			_itemIn = _x select 0;
			_countIn = _x select 1;
			_qty = { (_x == _itemIn) || (configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn) } count magazines player;
			if (_qty < _countIn) exitWith { _missing = _itemIn; _missingQty = (_countIn - _qty); _proceed = false; };
		} forEach _requirements;

		if (_proceed) then {
			player playActionNow "Medic";
			[player,_range,true,(getPosATL player)] spawn player_alertZombies;

			_temp_removed_array = [];
			_removed_total = 0;
			_tobe_removed_total = 0;
			
			{
				_removed = 0;
				_itemIn = _x select 0;
				_countIn = _x select 1;
				_tobe_removed_total = _tobe_removed_total + _countIn;
				
				{					
					if ((_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
						_num_removed = ([player,_x] call BIS_fnc_invRemove);
						_removed = _removed + _num_removed;
						_removed_total = _removed_total + _num_removed;
						if (_num_removed >= 1) then {
							_temp_removed_array set [count _temp_removed_array,_x];
						};
					};
				} forEach magazines player;
			} forEach _requirements;

			// all required items removed from player gear
			if (_tobe_removed_total == _removed_total) then {
				cutText [format[(localize "STR_EPOCH_ACTIONS_4"), _count], "PLAIN DOWN", 5];
				PVDZE_maintainArea = [player,1,_target];
				publicVariableServer "PVDZE_maintainArea";										
				_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
				_result =  format["SUCCESS : Objects maintained: %1" , _count];
				_ctrl ctrlSetText   _result;		
				_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
				_result =  format["SUCCESS : Price maintained: %1 %2 !" , (_requirements select 0) select 1, (_requirements select 0) select 0];
				_ctrl ctrlSetText   _result;
			} else {
				{player addMagazine _x;} count _temp_removed_array;
				cutText [format[(localize "STR_EPOCH_ACTIONS_5"),_removed_total,_tobe_removed_total], "PLAIN DOWN"];
			};
		} else {
			_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
			_result =  format["FAILED : Objects maintained: 0" , _count];
			_ctrl ctrlSetText   _result;			
			_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
			_result =  format["FAILED : Money needed: %1 %2 !" , (_requirements select 0) select 1, (_requirements select 0) select 0];
			_ctrl ctrlSetText   _result;			
			cutText [format[(localize "STR_EPOCH_ACTIONS_6"), _missingQty, _textMissing], "PLAIN DOWN"];
		};
	};
	case "preview": {
		_cost = "";
		{
			_itemIn = _x select 0;
			_countIn = _x select 1;
			_itemText = getText(configFile >> "CfgMagazines" >> _itemIn >> "displayName");
			if (_cost != "") then {
				_cost = _cost + " and ";
			};
			_cost = _cost + (str(_countIn) + " of " + _itemText);
		} count _requirements;					
		cutText [format[(localize "STR_EPOCH_ACTIONS_7"), _count, _cost], "PLAIN DOWN"];
		_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7012);
		_result =  format["Objects to maintain: %1" , _count];
		_ctrl ctrlSetText   _result;		
		_ctrl = ((uiNamespace getVariable "PlotManagement") displayCtrl 7013);
	    _result =  format["Price to maintain: %1 %2" ,  (_requirements select 0) select 1, (_requirements select 0) select 0];
		_ctrl ctrlSetText   _result;					
	};
};

DZE_ActionInProgress = false;
s_player_maintain_area = -1;
s_player_maintain_area_preview = -1;
