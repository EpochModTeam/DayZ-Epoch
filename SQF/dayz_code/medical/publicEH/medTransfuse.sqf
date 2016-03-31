// animHealed.sqf
private["_array","_unit","_medic","_amount","_display","_control","_lowBlood"];
disableserialization;
//[_unit,player,_bloodAmount]
_array = _this; //_this select 0;
_unit = _array select 0; //Player receving the blood
_medic = _array select 1; //Player sending the blood 
_amount = _array select 2; //total amount of blood given

_timer = diag_tickTime;
r_doLoop = true;
r_interrupt = false;

if (_amount < 0) exitWith { /* someone is trying to kill the player */ };

//Start the loop to mimic the transfusion to cut back on issues flooding the server
while {r_doLoop} do {

	if ((diag_tickTime - _timer) >= 1) then {
		_timer = diag_tickTime;
		
		//Infection chance
		_rndInfection = (random 20);
		_TransfusionInfection = (_rndInfection < 0.3);
		
		//Mimic the transfer of the blood (cut out the server)
		if (_amount > 0) then {
			_amount = _amount - 500;
		};
		cutText [localize "str_actions_medical_transfusion_start", "PLAIN DOWN"];
		
		//Make sure the unit is a player and update stats based on whats being sent (should mimic 500 units of blood being sent)
		if (_unit == player) then {
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

			if (_TransfusionInfection) then {
				r_player_infected = true;
				player setVariable["USEC_infected",true,true];
			};

			//Ensure Control is visible
			_display = uiNamespace getVariable 'DAYZ_GUI_display';
			_control = _display displayCtrl 1300;
			_control ctrlShow true;
		};
	};
	
	//If the players blood is equals too or aboue 12000 stop or if the blood mimic amount reaches 0 end the loop.
	_blood = _unit getVariable ["USEC_BloodQty", 0];
	
	//diag_log format["Player Blood %1 - %2, - %3, - %4",_blood,_unit,_medic,(_unit getVariable "USEC_BloodQty")];
	
	if (_blood >= r_player_bloodTotal or _amount == 0) then {
		cutText [localize "str_actions_medical_transfusion_successful", "PLAIN DOWN"];
		r_doLoop = false;
	};
	
	if (r_interrupt) then {
		cutText [localize "str_actions_medical_transfusion_interrupted", "PLAIN DOWN"];
		r_doLoop = false;
	};
	
	//Rerun the loop
	sleep 1;
};