disableSerialization;
if ((!r_player_handler1) and (r_handlerCount == 0)) then {
	//Unconscious Meter
	_totalTimeout = r_player_timeout;
	4 cutRsc ["playerStatusWaiting", "PLAIN",0];
	_display = uiNamespace getVariable 'DAYZ_GUI_waiting';
	_ctrl1 = 	_display displayCtrl 1400;
	_ctrl1Pos = ctrlPosition _ctrl1;
	
	_timeout = 0;
	r_handlerCount = r_handlerCount + 1;
	r_player_handler1 = true;
	player playAction "CanNotMove";
	"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [2]; "dynamicBlur" ppEffectCommit 0;
	"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit 0;
	0 fadeSound 0.05;
	disableUserInput true;
	//waitUntil{USEC_MotherInbox == ""};
	//["MED001",0,"Unconscious"] call fnc_usec_recordEventClient;
	localize "CLIENT: Unconscious...";
	while {(r_player_unconscious)} do {
		_ctrl1 ctrlSetPosition [(_ctrl1Pos select 0),(_ctrl1Pos select 1),(_ctrl1Pos select 2),((0.136829 * safezoneH) * (1 -(r_player_timeout / _totalTimeout)))];
		_ctrl1 ctrlCommit 1;
		playSound "heartbeat_1";
		sleep 1;
		_isOnDeck = false; //getPos player in LHA_Deck;
		_isInLocation = false; //getPos player in LHA_Location;
		_inVehicle = (vehicle _unit != _unit);
		_bloodLow = ((r_player_blood/r_player_bloodTotal) < 0.5);
		if ((surfaceIsWater (getPosASL player)) and !_isOnDeck and !_inVehicle) then {
			player setpos [(getPosASL player select 0),(getPosASL player select 1),0.3];
		};
		
		if(_timeout == 0) then {
			if (!r_player_dead and !_bloodLow and r_player_injured) then {
				_timeout = 10;
				//_animType = (USEC_WoundAnim select (floor(random (count USEC_WoundAnim))));
				//player playActionNow _anim;
			};
		} else {
			_timeout = _timeout - 1;
		};
		
		if (r_player_timeout > 0) then {
			r_player_timeout = r_player_timeout - 1;
		} else {
			if ((!r_player_dead) and (!r_player_cardiac)) then {
				nul = [] spawn fnc_usec_recoverUncons;
			};
		};
		//Check if near field hospital
		_isHospital = false; //(count( nearestObjects [player, ["USMC_WarfareBFieldhHospital"], 8]) > 0);
		if (_isHospital or _isOnDeck or _isInLocation) then {
		
			waitUntil {!(player getVariable ["NORRN_unit_dragged", false])};
		
			cutText[localize "str_medical_healing", "PLAIN", 2];
			sleep 5;
		
			r_player_inpain = false;
			r_player_dead = false;
			r_player_injured = false;
			r_player_cardiac = false;
			
			//Give Blood
			r_player_blood = r_player_bloodTotal;
			player setVariable["USEC_lowBlood",false,true];
			usecMorphine = [player,player];
			publicVariable "usecMorphine";
			player setVariable ["USEC_inPain", false, true];
			usecBandage = [player,player];
			publicVariable "usecBandage";
			player setdamage 0;
			{player setVariable[_x,false,true];} forEach USEC_woundHit;
			player setVariable ["USEC_injured",false,true];
			
			sleep 1;
			r_player_handler = false;
			nul = [] spawn fnc_usec_recoverUncons;
		};
		if (!(player getVariable ["NORRN_unconscious", true])) then {
			nul = [] spawn fnc_usec_recoverUncons;
		};
		if(animationState player == "AmovPpneMstpSnonWnonDnon_healed") then {
			nul = [] spawn fnc_usec_recoverUncons;
		};
	};
	4 cutRsc ["default", "PLAIN",1];
	localize "CLIENT: Conscious...";
	disableUserInput false;
	//waitUntil{USEC_MotherInbox == ""};
	//["MED001",0,"Conscious"] call fnc_usec_recordEventClient;
	if (!r_player_injured and ((r_player_blood/r_player_bloodTotal) >= 0.5)) then {
		10 fadeSound 1;
		"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];"colorCorrections" ppEffectCommit 5;
	};
	r_handlerCount = r_handlerCount - 1;
};