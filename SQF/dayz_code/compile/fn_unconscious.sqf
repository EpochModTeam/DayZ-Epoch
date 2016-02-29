// (c) facoptere@gmail.com, licensed to DayZMod for the community

private ["_count","_anim","_weapon","_sprint","_stance","_transmove","_start","_timeout","_short","_sandLevel","_veh","_disableHdlr", "_speed"];

if (r_player_unconsciousInProgress) exitWith {};
r_player_unconsciousInProgress = true;

/*
	_anim = toArray animationState player;
	_weapon = if (count _anim <= 17) then { 0 } else {
		switch (_anim select 17) do {
			case 114 : { 2 }; // rifle
			case 112 : { 1 }; // pistol
			default { 0 }; // bare hands / flare
		}
	};
	_sprint = if (count _anim <= 10) then { false } else { _anim select 10 in [112, 118] };
	_stance = if (count _anim <= 5) then { 2 } else {
		switch (_anim select 5) do {
			case 107 : { 1 }; // kneel
			case 112 : { 0 }; // prone
			default { 2 }; // erected
		}
	};

	_transmove = (switch true do {
		case (player != vehicle player) : {""};
		case (_stance == 1) : { [ // kneeled
			"amovpknlmstpsnonwnondnon_amovppnemstpsnonwnondnon", // kneeled stopped bare hands
			"amovpknlmstpsraswpstdnon_amovppnemstpsraswpstdnon", // kneeled stopped pistol
			"amovpknlmstpsraswrfldnon_amovppnemstpsraswrfldnon" // kneeled stopped rifle
			] select _weapon };
		case (_sprint) : { [ // erected and sprinting
			"amovpercmsprsnonwnondf_amovppnemstpsnonwnondnon", // erected sprinting with bare hands
			"amovpercmsprslowwpstdf_amovppnemstpsraswpstdnon", // erected sprinting pistol
			"amovpercmsprslowwrfldf_amovppnemstpsraswrfldnon" // erected sprinting with rifle
			] select _weapon };
		case (_stance == 2) : {([ // erected and not sprinting
			"amovpercmstpsnonwnondnon_amovppnemstpsnonwnondnon", // erected stoped/walking with bare hands
			"amovpercmstpsraswpstdnon_amovppnemstpsraswpstdnon", // erected stoped/walking with pistol
			"amovpercmstpsraswrfldnon_amovppnemstpsraswrfldnon" // erected stoped/walking with rifle
			] select _weapon)};
		default {""}; // already prone, or swimming, or onladder
	});

	//diag_log [ __FILE__, diag_tickTime, "current player move:",toString _anim, "collapse move:",_transmove, "duration:",r_player_timeout ];
	if (_transmove != "") then { player playmove _transmove; };
*/

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
_disableHdlr = [] spawn { sleep 2; disableUserInput true; r_player_unconsciousInputDisabled = true; }; 

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
            [] spawn { sleep 0.1; player switchmove "amovppnemstpsnonwnondnon"; }; // instant prone
        };
    };
	
    if (player == _veh) then { player setVelocity [0,0,0]; };
    sleep 0.1;
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
player switchMove "AmovPpneMstpSnonWnonDnon_healed";

10 fadeSound 1;
"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];"colorCorrections" ppEffectCommit 5;

//diag_log [ __FILE__, diag_tickTime, "done" ];