// KK_Functions
// 
// by KillZoneKid (http://killzonekid.com/)
//
//

// Precise positioning functions.

KK_fnc_floatToString = {
    private "_arr";
    if (abs (_this - _this % 1) == 0) exitWith { str _this };
    _arr = toArray str abs (_this % 1);
    _arr set [0, 32];
    toString (toArray str (
        abs (_this - _this % 1) * _this / abs _this
    ) + _arr - [32])
};

KK_fnc_positionToString = {
    format [
        "[%1,%2,%3]",
        _this select 0 call KK_fnc_floatToString,
        _this select 1 call KK_fnc_floatToString,
        _this select 2 call KK_fnc_floatToString
    ]
};

AN_fnc_formatWorldspace = {
    private "_ws";
    _ws = toArray str _this;
    format ["[%1,%2%3]", _this select 0 call KK_fnc_floatToString, _this select 1 call KK_fnc_positionToString, toString ([_ws, (_ws find 93) + 1, count _ws - 2] call BIS_fnc_subSelect)]
};