//Code developed by Axe Cop for use in DayZ Epoch Mod.
private ["_missing","_missingQty","_proceed","_itemIn","_countIn","_qty","_num_removed","_removed","_removed_total","_tobe_removed_total","_obj","_objectID","_objectUID","_classname","_location","_dir","_objectCharacterID","_object","_temp_removed_array","_textMissing","_target","_objectClasses","_range","_objects","_requirements","_count","_cost","_itemText","_option"];

if (DZE_ActionInProgress) exitWith { cutText ["Maintenance already in progress." , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

player removeAction s_player_maintain_area;
s_player_maintain_area = 1;
player removeAction s_player_maintain_area_preview;
s_player_maintain_area_preview = 1;

_target = cursorTarget; // Plastic_Pole_EP1_DZ
_objectClasses = ["ModularItems", "DZE_Housebase"];
_range = 50; // set the max range for the maintain area
_objects = nearestObjects [_target, _objectClasses, _range];

// TODO dynamic requirements based on used building parts?
_count = count _objects;
_requirements = [];
switch true do {
	case (_count <= 20): {_requirements = [["ItemGoldBar10oz",2]]};
	case (_count <= 50): {_requirements = [["ItemGoldBar10oz",4]]};
	case (_count <= 100): {_requirements = [["ItemBriefcase100oz",1]]};
	case (_count <= 200): {_requirements = [["ItemBriefcase100oz",2]]};
	case (_count <= 300): {_requirements = [["ItemBriefcase100oz",3]]};
	case (_count <= 400): {_requirements = [["ItemBriefcase100oz",4]]};
	case (_count > 400): {_requirements = [["ItemBriefcase100oz",5]]};
};

_option = _this select 3;
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
				{
					_obj = _x;
					
					// Find objectID
					_objectID = _obj getVariable ["ObjectID","0"];

					// Find objectUID
					_objectUID = _obj getVariable ["ObjectUID","0"];
					
					if (_objectID == "0" && _objectUID == "0") exitWith { cutText ["At least one building part is not setup yet.", "PLAIN DOWN"];};
					
					// Get classname
					_classname = typeOf _obj;
					
					// Get position
					_location = _obj getVariable["OEMPos",(getposATL _obj)];

					// Get direction
					_dir = getDir _obj;

					// Find CharacterID
					_objectCharacterID = _obj getVariable ["CharacterID","0"];
					
					// Create new object
					_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"];

					// Set direction
					_object setDir _dir;

					// Set location
					_object setPosATL _location;

					PVDZE_obj_Swap = [_objectCharacterID,_object,[_dir,_location],_classname,_obj,_objectID,_objectUID];
					publicVariableServer "PVDZE_obj_Swap";

					player reveal _object;
				} forEach _objects;
				
				cutText [format["You have maintained %1 building parts.", _count], "PLAIN DOWN", 5];
				// uncomment the next 2 lines if you want logging of area maintenance to the server report file (Arma2OAserver.RPT)
				maintainArea_log = [player, _target, _count];
				publicVariableServer "maintainArea_log";
			} else {
				{player addMagazine _x;} forEach _temp_removed_array;
				cutText [format["Missing Parts after first check Item: %1 / %2",_removed_total,_tobe_removed_total], "PLAIN DOWN"];
			};
		} else {
			_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
			cutText [format["Missing %1 more of %2", _missingQty, _textMissing], "PLAIN DOWN"];
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
		} forEach _requirements;
		cutText [format["%1 building parts in range, maintenance would cost %2.", _count, _cost], "PLAIN DOWN"];
	};
};

DZE_ActionInProgress = false;
s_player_maintain_area = -1;
s_player_maintain_area_preview = -1;
