private ["_mineChance","_breaking","_counter","_rocks","_findNearestRock","_objName","_countOut","_isOk","_proceed","_finished","_itemOut","_weapons"];

_item = _this;
call gear_ui_init;
closeDialog 1;

if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

// allowed rocks list move this later
_rocks = ["r2_boulder1.p3d","r2_boulder2.p3d","r2_rock1.p3d","r2_rock2.p3d","r2_rocktower.p3d","r2_rockwall.p3d","r2_stone.p3d"];
_findNearestRock = objNull;

{
    _objName = _x call fn_getModelName;
    // Exit since we found a rock
    if (_objName in _rocks) exitWith { _findNearestRock = _x; };
} foreach nearestObjects [getPosATL player, [], 8];


if (!isNull _findNearestRock) then {
    _countOut = 2 + floor(random 3);

    // Start stone mining loop
    _counter = 0;
    _isOk = true;
    _proceed = false;

	//check chance before loop, for a maximum amount of 5 loops allowing 5 possiable chances
	_mineChance = dayz_HarvestingChance call fn_chance;

    while {_isOk} do {
        [player,(getPosATL player),20,"minestone"] spawn fnc_alertZombies;

        _finished = ["Medic",1] call fn_loopAction;
		_weapons = weapons player;
		_weapons set [count _weapons,dayz_onBack];

		//Make sure player did not drop pickaxe
        if (!_finished or !("MeleePickaxe" in _weapons or ("ItemPickaxe" in _weapons))) exitWith {
            _isOk = false;
            _proceed = false;
        };

        if (_finished) then {
			["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

            _breaking = false;
			if (dayz_toolBreaking && _mineChance) then {
                _breaking = true;
                if ("MeleePickaxe" in weapons player) then {
                    player removeWeapon "MeleePickaxe";
                } else {
                    if ("ItemPickaxe" in weapons player) then {
                        player removeWeapon "ItemPickaxe";
                    } else {
                        if (dayz_onBack == "MeleePickaxe") then {
                            dayz_onBack = "";
							if (!isNull findDisplay 106) then {findDisplay 106 displayCtrl 1209 ctrlSetText "";};
                        };
                    };
                };
                if (!("ItemPickaxeBroken" in weapons player)) then {
                    player addWeapon "ItemPickaxeBroken";
                };
            };

            _counter = _counter + 1;
            _itemOut = "ItemStone";

			//Drop Item to ground
			[_itemOut,1,1] call fn_dropItem;
        };

        if ((_counter >= _countOut) || _breaking) exitWith {
            if (_breaking) then {
                localize "str_PickAxeHandleBreaks" call dayz_rollingMessages;
            } else {
				localize "str_mining_finished" call dayz_rollingMessages;
            };
            _isOk = false;
            _proceed = true;
        };
		format[localize "str_mining_progress", _counter,(_countOut - _counter)] call dayz_rollingMessages;
    };

    if (!_proceed) then {
        localize "str_mining_canceled" call dayz_rollingMessages;
    };
} else {
	localize "str_mining_no_rocks" call dayz_rollingMessages;
};

dayz_actionInProgress = false;
