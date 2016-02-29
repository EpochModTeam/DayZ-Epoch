/*
	Created by r4z0r49 exclusively for DayZMod.
	craft from rightclick options.
	
	text = "Wooden Plank";
	script = "spawn player_craftItem;";
	requiretools[] = {"ItemHatchet"};
	output[] = {{"ItemPlank","CfgMagazines",2}};
	input[] = {{"ItemLog","CfgMagazines",1}};
	failChance = 1;
*/
//diag_log("crafting system");
private["_config","_input","_output","_required","_failChance","_hasInput","_availabeSpace"];

//diag_log(str(isnil "r_player_crafting"));

//Process has started
if( (animationState player) IN [ "ainvpknlmstpslaywrfldnon_medic" ]) exitwith {};


//Config class of right click item
_classname = _this;
//diag_log (str(_classname));

//Check what class the item is.
_isClass = switch (1==1) do {
	case (isClass (configFile >> "CfgMagazines" >> _classname)): {"CfgMagazines"};
	case (isClass (configFile >> "CfgWeapons" >> _classname)): {"CfgWeapons"};
};

_config = (configFile >> _isClass >> _classname >> "ItemActions" >> "Crafting");

//Check for normal blocked systems
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

if(!r_drag_sqf and !r_player_unconscious and !_onLadder) then {

	_input = getArray (_config >> "input");
	//diag_log (str(_input));
	_output = getArray (_config >> "output");
	//diag_log (str(_output));
	_required = getArray (_config >> "requiretools");
	//diag_log (str(_required));
	_failChance = getNumber (_config >> "failChance");
	//diag_log (str(_failChance));
	
	// lets check player has requiredTools for upgrade
	_hasTools = true;
	{
		if (_x == "ItemHatchet") then {
			if (!("MeleeHatchet" in weapons player)) then {
				if (!(DayZ_onBack == "MeleeHatchet")) then {
					if (!(_x IN items player)) then {
						systemChat format[localize "str_cannotCraft", _x];
						_hasTools = false;
					};
				};
			};
		};
	} count _required;
	
	if (!_hasTools) exitwith {};

	_hasInput = true;
	{
		private ["_avail"];
		_selection = _x select 1;
		_item = _x select 0;
		_amount = _x select 2;

		switch (_selection) do {
			case "CfgWeapons":
			{
				_avail = {_x == _item} count weapons player;
			};
			case "CfgMagazines":
			{
				_avail = {_x == _item} count magazines player;
			};
		};

		if (_avail < _amount) exitWith {
			_hasInput = false;
			_itemName = getText(configFile >> _selection >> _item >> "displayName");
			cutText [format [localize "str_crafting_missing",(_amount - _avail),_itemName], "PLAIN DOWN"];
		};
	} forEach (_input);
	
	if (_hasInput) then {
		_freeSlots = [player] call BIS_fnc_invSlotsEmpty;
		{
			_item = _x select 0;
			_amount = _x select 2;
			_slotType = [_item] call BIS_fnc_invSlotType;
			for "_i" from 1 to _amount do {
				for "_j" from 1 to (count _slotType) do {
					if ((_slotType select _j) > 0) then {
						_freeSlots set[_j, ((_freeSlots select _j) + (_slotType select _j))];
					};
				};
			};
		} forEach _input;

		_availabeSpace = true;
		{
			_item = _x select 0;
			_amount = _x select 2;
			_slotType = [_item] call BIS_fnc_invSlotType;
			for "_i" from 1 to _amount do {
				for "_j" from 1 to (count _slotType) do {
					if ((_slotType select _j) > 0) then {
						_freeSlots set[_j, ((_freeSlots select _j) - (_slotType select _j))];
						if (_freeSlots select _j < 0) exitWith {
							_availabeSpace = false;
							cutText [localize "str_crafting_space", "PLAIN DOWN"];
						};
					};
				};
			};
		} forEach _output;
		//sleep 1;

		if (_availabeSpace) then {
			//player playActionNow "PutDown";
			call gear_ui_init;
			closeDialog 1;
			player playActionNow "Medic";
			sleep 2;
			//setup alert and speak
			_dis=20;
			_sfx = "chopwood";
			[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
			[player,_dis,true,(getPosATL player)] call player_alertZombies;
			
			{
				_item = _x select 0;
				_amount = _x select 2;
				for "_i" from 1 to _amount do {
					_selection = _x select 1;
					switch (_selection) do {
						case "CfgWeapons":
						{
							player removeWeapon _item;
						};
						case "CfgMagazines":
						{
							player removeMagazine _item;
						};
					};
					//sleep 0.1;
				};
			} forEach _input;
			sleep 3;
			{
				_item = _x select 0;
				_selection = _x select 1;
				_amount = _x select 2;
				_itemName = getText(configFile >> _selection >> _item >> "displayName");
				for "_i" from 1 to _amount do {
					if (random 1 > _failChance) then {
						switch (_selection) do {
							case "CfgWeapons":
							{
								player addWeapon _item;
							};
							case "CfgMagazines":
							{
								player addMagazine _item;
							};
							case "CfgVehicles":
							{
								player addBackpack _item;
							};
						};
						cutText [format [localize "str_crafting_success",_itemName], "PLAIN DOWN"];
						//sleep 2;
					} else {
						cutText [format [localize "str_crafting_failed",_itemName], "PLAIN DOWN"];
						//sleep 2;
					};
				};
			} forEach _output;
		};
	};
};