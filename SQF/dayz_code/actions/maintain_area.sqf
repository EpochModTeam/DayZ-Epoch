/*

Examples for config variable DZE_maintainCurrencyRate:

Now that we have gem based currency, maintaining is priced via a "worth".

If you want the price per item to be 1 gold, DZE_maintainCurrencyRate needs to be 100.
600 items * 100 would be worth 6 briefcases or 60k coins on a single currency server.
600 items * 150 would be worth 9 briefcases or 90k coins on a single currency server.

1 10oz silver = 10 worth
1 gold = 100 worth
1 10oz gold = 1,000 worth
1 briefcase = 10,000 worth

Please see configVariables.sqf for the value of gems (DZE_GemWorthArray) and their relevant worth.

*/

if (dayz_actionInProgress) exitWith {
    localize "STR_EPOCH_ACTIONS_2" call dayz_rollingMessages
};

dayz_actionInProgress = true;


local _objects = nearestObjects [
     (([player] call FNC_getPos) nearEntities ["Plastic_Pole_EP1_DZ", 15]) select 0
    ,DZE_maintainClasses, DZE_maintainRange
];


local _req = {
    if (Z_SingleCurrency) exitWith {
        [_this * DZE_maintainCurrencyRate, CurrencyName]
    };

    local _amount = _this * DZE_maintainCurrencyRate;
    [
         _amount
        ,[_amount, true] call z_calcCurrency
    ]
};


local _maintain = {
    local _count = count _this;
    local _requirements = _count call _req;

    local _amount = _requirements select 0;
    local _itemText = _requirements select 1;

    local _enoughMoney = false;
    local _moneyInfo = [false, [], [], [], 0];
    local _wealth = 0;
    local _message = "";

    if (Z_SingleCurrency) then {
        _wealth = player getVariable[["cashMoney", "globalMoney"] select Z_persistentMoney, 0];
        _enoughMoney = _wealth >= _amount;
    } else {
        Z_Selling = false; // Initialize gem currency before Z_canAfford.
        _moneyInfo = _amount call Z_canAfford;
        _enoughMoney = _moneyInfo select 0;
    };

    local _success = if (Z_SingleCurrency) then {true} else {[player, _amount, _moneyInfo, true, 0] call Z_payDefault};

    // Not enough room in gear or bag to accept change.
    if (!_success && {_enoughMoney}) exitWith {
        systemChat localize "STR_EPOCH_TRADE_GEAR_AND_BAG_FULL"
    };

    if (_enoughMoney) exitWith {
        closeDialog 1;
        [player, getPosATL player, DZE_maintainRange, "repair"] spawn fnc_alertZombies;

        if !(["Medic",1] call fn_loopAction) exitWith {};

        _success = if (Z_SingleCurrency) then {_amount <= _wealth} else {[player, _amount, _moneyInfo, false, 0] call Z_payDefault};

        if (_success) then {
            ["Working", 0, [100,15,10,0]] call dayz_NutritionSystem;

            PVDZE_maintainArea = [netId player, 1, _this];
            publicVariableServer "PVDZE_maintainArea";

            if (Z_SingleCurrency) then {
                player setVariable [["cashMoney", "globalMoney"] select Z_persistentMoney, _wealth - _amount, true];
                _message = format [
                     localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS"
                    ,_count, [_amount] call BIS_fnc_numberText,_itemText
                ]
            } else {
                _message = format [
                     localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS"
                    ,_count, _itemText, ""
                ]
            };

            call player_forceSave;
            _message call dayz_rollingMessages
        } else {
            systemChat localize "STR_EPOCH_TRADE_DEBUG";
        };

    };

    if (Z_SingleCurrency) then {
        _message = format [
             localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED"
            ,_count, [_amount] call BIS_fnc_numberText, _itemText
        ]
    } else {
        _message = format [
             localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED"
            ,_count, _itemText, ""
        ]
    };

    disableSerialization;
    local _plotDialog = findDisplay 711194;

    (_plotDialog displayCtrl 7012) ctrlSetText _message;
    (_plotDialog displayCtrl 7013) ctrlSetText "";
};


// We don't need to count objects damaged >= _DZE_DamageBeforeMaint nor filter them out.
if (_this == "force") exitWith {
    local _allObjects = [];

    {
        _allObjects set [count _allObjects, netId _x]
    } count _objects;

    _allObjects call _maintain;
    dayz_actionInProgress = false
};


// For 'maintain' and 'preview', number of objects damaged >= _DZE_DamageBeforeMaint has to be known.
local _objects_filtered = [];
local _DZE_DamageBeforeMaint = DZE_DamageBeforeMaint;

{
    if (damage _x >= _DZE_DamageBeforeMaint) then {
        _objects_filtered set [count _objects_filtered, netId _x]
    }
} count _objects;

local _countFiltered = count _objects_filtered;


if (_this == "preview") exitWith {
    disableSerialization;
    local _plotDialog = findDisplay 711194;

    local _requirements = [];

    if (_countFiltered == 0) then {
        (_plotDialog displayCtrl 7012) ctrlSetText (localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_NONE")
    } else {
        local _message1 = "";
        _requirements = _countFiltered call _req;

        if (Z_SingleCurrency) then {
            _message1 = format [
                 localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE"
                ,_countFiltered, [_requirements select 0] call BIS_fnc_numberText, _requirements select 1
            ]
        } else {
            _message1 = format [
                 localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE"
                ,_countFiltered, _requirements select 1, ""
            ]
        };

        (_plotDialog displayCtrl 7012) ctrlSetText _message1
    };

    if (_countFiltered != count _objects) then {
        local _message2 = "";
        _requirements = count _objects call _req;

        if (Z_SingleCurrency) then {
            _message2 = format [
                 localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_FORCE"
                ,count _objects, [_requirements select 0] call BIS_fnc_numberText, _requirements select 1
            ]
        } else {
            _message2 = format [
                 localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_FORCE"
                ,count _objects, _requirements select 1, ""
            ]
        };

        (_plotDialog displayCtrl 7013) ctrlSetText _message2
    };

    dayz_actionInProgress = false
};


if (_this == "maintain") exitWith {
    if (_countFiltered != 0) then {
        _objects_filtered call _maintain
    } else {
        systemChat localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_NONE"
    };

    dayz_actionInProgress = false
};


// Wrong option.
diag_log format ["DEBUG: Wrong maintanance option keyword. Expected: ('maintain', 'force', 'preview'). Received: '%1'.", _this]
