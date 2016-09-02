/*
	DayZ Fishing
	Usage: spawn player_goFishing;
	Made for DayZ Mod please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
	fixed by facoptere@gmail.com for dayzmod
*/
private ["_linecastmax","_linecastmin","_num","_position","_ispond","_objectsPond","_isPondNearBy","_isOk","_counter","_vehicle","_inVehicle",
"_rnd","_itemOut","_text","_item","_itemtodrop","_result","_elevation","_inBoat","_i","_ret","_bb","_w2m","_dir"];

_vehicle = _this select 3;
_vehicle removeAction (_this select 2);
s_player_fishing = -1;
s_player_fishing_veh = -1;

if(dayz_fishingInprogress) exitWith { localize "str_fishing_inprogress" call dayz_rollingMessages;};
dayz_fishingInprogress = true;

//line distance
_linecastmax = 67;

_isOk = false;
_inBoat = (player != vehicle player) && {(vehicle player) isKindOf "Ship"};
_ispond = false;
{
	if (["pond", str _x] call fnc_inString && {((getPosASL player) select 2 < ((getPosASL _x) select 2)) or _inBoat}) exitWith {
		_ispond = true;
		_num = ceil (random (player distance _x));
	};
} count nearestObjects [player, [], 50];

for "_i" from 1 to 10 do {
    if (!_ispond) then {_num = floor(random (2 * _linecastmax / 3) + _linecastmax / 3);};
    _position = if (_inBoat) then { (vehicle player) modeltoworld [-_num, 0 ,0] } else { player modeltoworld [0,_num,0] };
    //_elevation = _position select 2;
    /*  
        _position set [ 2, 1 ];
        _position = ASLToATL _position;
        if (_position select 2 < 1) then { _position set [2, 1];};
        if (isNil "tutu") then {
            tutu = "Sign_sphere100cm_EP1" createVehicleLocal _position;
        }
        else {
            tutu setPosATL _position;
        };
    */	
	
//    diag_log [ _position, _elevation, surfaceIsWater _position, _linecastmax, _ispond, "=>",  ((surfaceIsWater _position or _ispond) and ((player == vehicle player) or {((vehicle player) isKindOf "Ship")})) ];
    if ((surfaceIsWater _position or _ispond) && ((player == vehicle player) or {(vehicle player) isKindOf "Ship"})) exitWith {
        _isOk = true;
    };
};

if (!_isOk) exitWith {
    dayz_fishingInprogress = false;
    localize "str_fishing_watercheck" call dayz_rollingMessages;
};

_counter = 0;

// swing fishingpole
player playActionNow "GestureSwing";

// Alert zeds
[player,3,true,(getPosATL player)] call player_alertZombies;
r_interrupt = false;

while {_isOk} do {
    if(dayz_isSwimming) exitWith {localize "str_player_26" call dayz_rollingMessages;_isOk = false;};
    if !((currentWeapon player) in Dayz_fishingItems or (player != vehicle player and !((vehicle player) isKindOf "Ship"))) exitwith {
        localize "str_fishing_canceled" call dayz_rollingMessages;
        _isOk = false;
    };
    if (r_interrupt) then {
        _isOk = false;
        localize "str_fishing_canceled" call dayz_rollingMessages;
    } else {
        //make sure the player isnt swimming
        uiSleep 2; // wait for animation

        // check if player is in boat
        _vehicle = vehicle player;
        if ((_vehicle != player) and (_vehicle isKindOf "Ship")) then {
            _inVehicle = true;
            _rnd = 75;
        } else {
            _inVehicle = false;
            _rnd = 100;
        };
        //Check for rain fish are more active during the rain.
        if (rain > 0) then {_rnd = _rnd / 2;};

        // 1% chance to catch anything
        if ((random _rnd) <= 5) then {
            // Just the one fish for now
            _itemOut = [];
            _itemOut = switch (true) do {
                case ((_num > 30) and (_num <= 45)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout"]; };
                case ((_num > 45) and (_num <= 60)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawSeaBass","FishRawSeaBass"]; };
                case ((_num > 60)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawSeaBass","FishRawSeaBass","FishRawTuna"]; };                
                default { ["FishRawTrout"]; };
            };
            _itemOut = _itemOut call BIS_fnc_selectRandom;
            _text = getText (configFile >> "CfgMagazines" >> _itemOut >> "displayName");
            if (_inVehicle) then { 
                _item = _vehicle;
                _itemtodrop = _itemOut;
                _item addMagazineCargoGlobal [_itemtodrop,1];
                //Let the player know what he caught
                format[localize "str_fishing_success",_text] call dayz_rollingMessages;
            } else {
                call gear_ui_init;
                //Remove melee magazines (BIS_fnc_invAdd fix) 
                {player removeMagazines _x} forEach MeleeMagazines;
                _result = [player,_itemOut] call BIS_fnc_invAdd;
                if (_result) then {
                    //Let the player know what he caught
                    format[localize "str_fishing_success",_text] call dayz_rollingMessages;
                } else {
                    format[localize "str_fishing_noroom",_text] call dayz_rollingMessages;
                };
                //adding melee mags back if needed
                call dayz_meleeMagazineCheck;
            };
            
            //"Working",0,[cal,thirst,hunger]
            ["Working",0,[3,2,8,0]] call dayz_NutritionSystem;
            _isOk = false;
        } else {
            switch (true) do {
                case (_counter == 0) : { format[localize "str_fishing_cast",_num] call dayz_rollingMessages; }; 
                case (_counter == 4) : { localize "str_fishing_pull" call dayz_rollingMessages; player playActionNow "GesturePoint"; }; 
                case (_counter == 8) : { localize "str_fishing_pull" call dayz_rollingMessages; player playActionNow "GesturePoint"; };
                default { localize "str_fishing_nibble" call dayz_rollingMessages; };
            }; 
            _counter = _counter + 1;

            if (_counter == 12) then {
                _isOk = false;
                uiSleep 1;
                localize "str_fishing_failed" call dayz_rollingMessages;
            };
        };
    };
};
dayz_fishingInprogress = false;
