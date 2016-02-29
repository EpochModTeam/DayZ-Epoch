private ["_item","_result","_dis","_sfx","_num","_breaking","_counter","_rocks","_findNearestRock","_objInfo","_lenInfo","_objName","_i","_k","_countOut","_isOk","_proceed","_animState","_started","_finished","_isMedic","_itemOut","_wpPos","_nearByPile"];


_item = _this;
call gear_ui_init;
closeDialog 1;

if(dayz_workingInprogress) exitWith { cutText ["Mining already in progress!", "PLAIN DOWN"];};
dayz_workingInprogress = true;

// allowed rocks list move this later
_rocks = ["r2_boulder1.p3d","r2_boulder2.p3d","r2_rock1.p3d","r2_rock2.p3d","r2_rocktower.p3d","r2_rockwall.p3d","r2_stone.p3d"];
_findNearestRock = objNull;

{
    _objInfo = toArray(str(_x));
    _lenInfo = count _objInfo - 1;
    _objName = [];
    _i = 0;
    // determine where the object name starts
    {
        if (58 == _objInfo select _i) exitWith {};
        _i = _i + 1;
    } forEach _objInfo;
    _i = _i + 2; // skip the ": " part
    
    for "_k" from _i to _lenInfo do {
        _objName = _objName + [_objInfo select _k];
    };
    _objName = toLower(toString(_objName));
	
    // Exit since we found a rock
    if (_objName in _rocks) exitWith { _findNearestRock = _x; };
} foreach nearestObjects [getPosATL player, [], 8];


if (!isNull _findNearestRock) then {
    _countOut = 2 + floor(random 3);

    //Remove melee magazines (BIS_fnc_invAdd fix) (add new melee ammo to array if needed)
    {player removeMagazines _x} forEach ["Hatchet_Swing","Crowbar_Swing","Machete_Swing","Fishing_Swing"];

    // Start stone mining loop
    _counter = 0;
    _isOk = true;
    _proceed = false;

    while {_isOk} do {
        //play action   
        player playActionNow "Medic";

        //setup alert and speak
        _dis=20;
        _sfx = "minestone";
        [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
        [player,_dis,true,(getPosATL player)] call player_alertZombies;
        
        // Working-Factor for mining stone.
        ["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

        r_interrupt = false;
        _animState = animationState player;
        r_doLoop = true;
        _started = false;
        _finished = false;

        while {r_doLoop} do {
            _animState = animationState player;
            _isMedic = ["medic",_animState] call fnc_inString;
            if (_isMedic) then {
                _started = true;
            };
            if (_started and !_isMedic) then {
                r_doLoop = false;
                _finished = true;
            };
            if (r_interrupt) then {
                r_doLoop = false;
            };

            sleep 0.1;
        };

        if(!_finished) exitWith {
            _isOk = false;
            _proceed = false;
        };

        if(_finished) then {                
            _breaking = false;
            if ([0.04] call fn_chance) then {
                _breaking = true;
                if ("MeleePickaxe" in weapons player) then {
                    player removeWeapon "MeleePickaxe";
                } else {
                    if ("ItemPickaxe" in weapons player) then {
                        player removeWeapon "ItemPickaxe";
                    } else {
                        if (dayz_onBack == "MeleePickaxe") then {
                            dayz_onBack = "";
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
			_itemOut call fn_dropItem;
        };
            
        if ((_counter >= _countOut) || _breaking) exitWith {
            if (_breaking) then {
                cutText [localize "str_PickAxeHandleBreaks", "PLAIN DOWN"];
            } else {
				cutText [localize "str_mining_finished", "PLAIN DOWN"];
            };
            _isOk = false;
            _proceed = true;
            sleep 1;
        };
		cutText [format[localize "str_mining_progress", _counter,(_countOut - _counter)], "PLAIN DOWN"];
    };

    if (!_proceed) then {            
        cutText [localize "str_mining_canceled", "PLAIN DOWN"];

        r_interrupt = false;

        if (vehicle player == player) then {
            [objNull, player, rSwitchMove,""] call RE;
            player playActionNow "stop";
        };
    };
	
    //adding melee mags back if needed
    switch (primaryWeapon player) do {
        case "MeleeHatchet": {player addMagazine 'Hatchet_Swing';};
        case "MeleeCrowbar": {player addMagazine 'Crowbar_Swing';};
        case "MeleeMachete": {player addMagazine 'Machete_Swing';};
        case "MeleeFishingPole": {player addMagazine 'Fishing_Swing';};
    };
} else {
	cutText [localize "str_mining_no_rocks", "PLAIN DOWN"];
};

dayz_workingInprogress = false;