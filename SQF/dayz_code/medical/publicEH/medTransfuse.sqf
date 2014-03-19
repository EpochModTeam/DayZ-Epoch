// animHealed.sqf
private ["_array","_unit","_display","_control","_rndInfection","_TransfusionInfection"];
disableserialization;
_unit = _this select 0;

_rndInfection = (random 15);
_TransfusionInfection = (_rndInfection < 1);

if (_unit == player) then {
	r_player_blood = r_player_bloodTotal;
	r_player_lowblood = false;	
	10 fadeSound 1;
	"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
	"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];"colorCorrections" ppEffectCommit 5;
	
	if (_TransfusionInfection) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true,true]; 
	};
	
	//Ensure Control is visible
	_display = uiNamespace getVariable 'DAYZ_GUI_display';
	_control = 	_display displayCtrl 1300;
	_control ctrlShow true;
	
	player setVariable["USEC_BloodQty",r_player_bloodTotal,true];
};