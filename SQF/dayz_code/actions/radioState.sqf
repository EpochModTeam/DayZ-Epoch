// This function simulates turning "ItemRadio" on and off to accept or deny local messaging of type "radio".

if(player getVariable["radiostate",true]) then {
	localize "str_actions_radio_off" call dayz_rollingMessages;
	player setVariable["radiostate",false];
	playSound "Switch_On_Off";
} else {
	localize "str_actions_radio_on" call dayz_rollingMessages;
	player setVariable["radiostate",true];
	playSound "Switch_On_Off";
};