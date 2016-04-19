// (c) facoptere@gmail.com, licensed to DayZMod for the community

private ["_count","_anim","_weapon","_sprint","_stance","_transmove","_start","_timeout","_short","_sandLevel","_veh","_disableHdlr","_speed"];

if (r_player_unconsciousInProgress) exitWith {};
r_player_unconsciousInProgress = true;

_start = diag_tickTime;
_timeout = abs r_player_timeout;
_short = _timeout < 4;
if (!_short) then {
    4 cutRsc ["playerStatusWaiting", "PLAIN",1];
    playSound "heartbeat_1";
};

_count = 0;
// can be set to false by medEPI.sqf, during the 'while' loop
r_player_unconscious = true;
player setVariable ["NORRN_unconscious", r_player_unconscious, true];
_sandLevel = ctrlPosition ((uiNamespace getVariable 'DAYZ_GUI_waiting') displayCtrl 1400);
//diag_log [(diag_tickTime - _start) < _timeout , !r_player_unconscious , alive player  ];

// delay so that the character does not stop before falling:
_disableHdlr = [] spawn { uiSleep 2; disableUserInput true; r_player_unconsciousInputDisabled = true; };
autoRunActive = false;

player playAction "CanNotMove";
"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [2]; "dynamicBlur" ppEffectCommit 0;
"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit 0;
0 fadeSound 0.05;

while { (diag_tickTime - _start) < _timeout and r_player_unconscious and alive player } do {
    player setVariable ["unconsciousTime", _timeout - diag_tickTime + _start, (_count % 10) == 0];
    player setVariable["medForceUpdate",true, (_count % 300) == 0];
    if (!_short) then {
        _sandLevel set [ 3, 0.136829 * safezoneH * (diag_tickTime - _start) / _timeout ];
        ((uiNamespace getVariable 'DAYZ_GUI_waiting') displayCtrl 1400) ctrlSetPosition _sandLevel;
        ((uiNamespace getVariable 'DAYZ_GUI_waiting') displayCtrl 1400) ctrlCommit 0.05;
    };
	
    _veh = vehicle player;
    if ((player != _veh) and {(_veh iskindOf "LandVehicle")}) then {
        _speed = [0,0,0] distance velocity _veh;
        if (_speed > 10) then { 
			_veh engineOn false; 
		} else {
            player action ["eject", _veh];
            player leaveVehicle _veh;
            [] spawn { uiSleep 0.1; player playMoveNow "amovppnemstpsnonwnondnon"; }; // instant prone
        };
    };
	
    if (player == _veh) then { player setVelocity [0,0,0]; };
    uiSleep 0.1;
    _count = _count + 1;
	
};

if (!_short) then{
    4 cutRsc ["default", "PLAIN",0];
};

r_player_unconscious = false; 
player setVariable ["NORRN_unconscious", r_player_unconscious, true]; 
r_player_timeout = 0; 
player setVariable ["unconsciousTime", r_player_timeout, true]; 
r_player_cardiac = false;
player setVariable ["USEC_isCardiac",r_player_cardiac, true]; 
player setVariable["medForceUpdate",true, true];

r_player_unconsciousInProgress = false;
terminate _disableHdlr;
waituntil {scriptDone _disableHdlr};
disableUserInput false;
r_player_unconsciousInputDisabled = false;
4 cutRsc ["default", "PLAIN",1];

[nil, player, rSWITCHMOVE, "AinjPpneMstpSnonWnonDnon"] call RE;
player SWITCHMOVE "AinjPpneMstpSnonWnonDnon";
PVDZ_plr_SwitchMove = [player,"AinjPpneMstpSnonWnonDnon"];
publicVariableServer "PVDZ_plr_SwitchMove"; //Needed to execute switchMove on server machine. rSwitchMove only executes on other clients

player playMoveNow "AmovPpneMstpSnonWnonDnon_healed";

10 fadeSound 1;
"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];"colorCorrections" ppEffectCommit 5;

//diag_log [ __FILE__, diag_tickTime, "done" ];