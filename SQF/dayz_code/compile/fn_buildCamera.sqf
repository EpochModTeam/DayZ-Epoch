
if (0 != count Dayz_constructionContext) then {
    if (!(Dayz_constructionContext select 3)) then {
        _ghost = Dayz_constructionContext select 0;
        if (abs(([_ghost, player] call BIS_fnc_distance2D) - (1 + (sizeOf (typeOf _ghost)) * 0.5)) < 1) then {
            showCinemaBorder false;
            Dayz_BuildCamera = "camera" camCreate (player modeltoWorld [0,0,2]);
            0.2 fadeSound 0.1;
            Dayz_BuildCamera cameraeffect ["External", "TOP"];
            Dayz_BuildCamera camcommit 0;
            Dayz_BuildCamera camsettarget _ghost;
            Dayz_BuildCamera camsetFov 0.1;
            Dayz_BuildCamera camsetrelpos [-1,0,60];
            Dayz_BuildCamera camcommit 0;
            Dayz_constructionContext set [3, true];
            cutText [localize "str_buildCameraOn", "PLAIN DOWN"];
        };
    }
    else {
        Dayz_BuildCamera cameraeffect ["terminate", "TOP"];
        0.2 fadeSound 1;
        player switchCamera (Dayz_constructionContext select 2);
        camdestroy Dayz_BuildCamera;
        Dayz_constructionContext set [3, false];
        cutText [localize "str_buildCameraOff", "PLAIN DOWN"];
    };
    _handled = true; // used by keyboard.sqf
};    