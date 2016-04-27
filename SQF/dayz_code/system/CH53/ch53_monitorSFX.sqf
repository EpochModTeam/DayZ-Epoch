_vehicle = _this select 0;
_wait = 0.5;

//Initiate Variables
	_RampSound = false;
	_gearDown = true;
	_gearSound = false;
	_vehicle setVariable ["HydraulicsFailure",false, false];
	_vehicle setVariable ["EngineFailure",false, false];
	_vehicle setVariable ["AvionicsFailure",false, false];

//Overall Event Handlers
_EHDamageIdx = _vehicle addEventHandler ["Dammaged",{
	if ((_this select 2) > 0.8 ) then {
		switch (_this select 1) do {
			case "mala vrtule": {_this select 0 setVariable ["HydraulicsFailure",true, true];};
			case "velka vrtule": {_this select 0 setVariable ["HydraulicsFailure",true, true];};
			case "motor": {_this select 0 setVariable ["EngineFailure",true, true];};
			case "elektronika": {_this select 0 setVariable ["AvionicsFailure",true, true];};
		};
	};
}];

while {(alive _vehicle)} do {
	// SINGLE // Ramp Sound Effect
	if((_vehicle animationPhase "ramp_bottom" > 0) && !(_RampSound)) then {
		_vehicle say ["ch53_rampdown",5];
		_RampSound = true;
		sleep 3;
	};	
	
	// SINGLE // Ramp Sound Effect
	if((_vehicle animationPhase "ramp_bottom" < 1) && !(_vehicle animationPhase "ramp_bottom" == 0.56) && (_RampSound)) then {
		_vehicle say ["ch53_rampup",5];
		_RampSound = false;
		sleep 3;
	};
	
	// SINGLE // Gear Sound Effect
	if((_vehicle animationPhase "gear_nose_1" > 0) && !(_gearSound) && (_gearDown)) then {
		_vehicle say ["ch53_gear",5];
		_gearSound = true;
	};	
	
	// SINGLE // Gear Sound Effect
	if((_vehicle animationPhase "gear_nose_1" < 1)  && (_gearSound) && !(_gearDown)) then {
		_vehicle say ["ch53_gear",5];
		_gearSound = false;
	};
	
	if (player in (crew _vehicle)) then {
		// INFO // SINGLE // Gear Down
		if((_vehicle animationPhase "gear_nose_1" == 0) && !(_gearDown)) then {
			_vehicle vehicleRadio "dws_info_geardown";
			_gearDown = true;
			sleep 3;
		};
		
		// INFO // SINGLE // Gear Up
		if((_vehicle animationPhase "gear_nose_1" == 1) && (_gearDown)) then {
			_vehicle vehicleRadio "dws_info_gearup";
			_gearDown = false;
			sleep 3;
		};
	};
	
	if(player in (crew _vehicle)) then {sleep _wait;} else {sleep (_wait * 4);};
};
if (player in (crew _vehicle) && (!alive _vehicle)) then {
	_cancel = false;
	{
		_SZPos = _x select 0;
		_radius =  _x select 1;
		if ((isInTraderCity || !canbuild) && {(player distance _SZPos) < _radius}) then {_cancel = true;};
	} count DZE_SafeZonePosArray;
	if (!_cancel) then {
		player action ["Eject",vehicle player]; //eject player so I can get their gear
		sleep 0.01; //don't use uisleep here
		[player, "explosion"] spawn player_death;
	};
};
_vehicle removeAllEventHandlers "Dammaged";