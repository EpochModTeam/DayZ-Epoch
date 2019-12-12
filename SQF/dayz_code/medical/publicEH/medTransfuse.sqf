// animHealed.sqf
private["_msg","_unit","_medic","_amount","_transfusionInfection","_timer"];
//[_unit,player,_bloodAmount]

_unit = _this select 0; //Player receving the blood
_medic = _this select 1; //Player sending the blood 
_amount = _this select 2; //total amount of blood given

if (_unit != player) exitWith {/* not the correct client */};
if (_amount < 0) exitWith {/* someone is trying to kill the player */};

_timer = diag_tickTime;
_msg = "";
r_doLoop = true;
r_interrupt = false;

//Infection chance
_TransfusionInfection = ((random 20) < 0.3);

localize "str_actions_medical_transfusion_start" call dayz_rollingMessages;

//Start the loop to mimic the transfusion to cut back on issues flooding the server
while {r_doLoop} do {

	if ((diag_tickTime - _timer) >= 1) then {
		_timer = diag_tickTime;
		
		//Mimic the transfer of the blood (cut out the server)
		if (_amount > 0) then {
			_amount = _amount - 500;
		};
		
		// update stats based on whats being sent (should mimic 500 units of blood being sent)
		if ((r_player_blood + 500) >= r_player_bloodTotal) then {
			r_player_blood = r_player_bloodTotal;
			player setVariable["USEC_BloodQty",r_player_bloodTotal,true];
		} else {
			r_player_blood = r_player_blood + 500;
			player setVariable["USEC_BloodQty",r_player_blood,true];
		};

		if (((r_player_blood / r_player_bloodTotal) >= 0.35) and (r_player_lowblood)) then {
			r_player_lowblood = false;
			player setVariable["USEC_lowBlood",false,true];
		};
	};
	
	//diag_log format["Player Blood %1 - %2, - %3, - %4",_blood,_unit,_medic,(_unit getVariable "USEC_BloodQty")];
	
	//If the players blood is equals too or above r_player_bloodTotal stop or if the blood mimic amount reaches 0 end the loop.
	if ((_unit getVariable ["USEC_BloodQty", 0]) >= r_player_bloodTotal or _amount == 0) then {
		_msg = "str_actions_medical_transfusion_successful";
		r_doLoop = false;
	};
	
	if (r_interrupt) then {
		_msg = "str_actions_medical_transfusion_interrupted";
		r_doLoop = false;
	};
	
	uiSleep 1;
};

if (_TransfusionInfection) then {
	r_player_infected = true;
	player setVariable["USEC_infected",true,true];
};

localize _msg call dayz_rollingMessages;
