/*
	Overriding default engine handling does not stop cheat input.
	It also does not stop VON when combination binds like Ctrl+Z are used, because keyDown registers each key press individually.
	We need to manually disable user input.
*/
#include "\ca\editor\Data\Scripts\dikCodes.h"
_dik = _this select 1;
_shift = _this select 2;

_handled = false;
_channel = ctrlText (findDisplay 63 displayCtrl 101);
_micIcon = ctrlShown (findDisplay 55 displayCtrl 101);
_inputAction1 = {inputAction _x > 0} count voice_actions; //Includes mouse buttons and combination binds, but does not work when a dialog is open
_inputAction2 = {inputAction _x > 0} count ["NextChannel","PrevChannel"];
/*
	_channel = previous channel when changing channels.
	We can not predict which one that will be, because description.ext settings vary.
	So block all changing of channels while mic is locked on for now.
*/
_channelChange = _micIcon && ((!isNull findDisplay 24 && _dik in [DIK_DOWN,DIK_UP]) or (_dik in channel_keys) or (_inputAction2 > 0));
_blockVoice = _channelChange or ((_dik in voice_keys or (_inputAction1 > 0)) && (_channel in DZE_DisabledChannels));

if (_dik == DIK_NUMPADMINUS) then {dayz_minusDownTime = diag_tickTime;};
_blockCheat = (_dik == DIK_NUMPADMINUS && _shift) or (_dik == DIK_LSHIFT && (diag_tickTime - dayz_minusDownTime < 1));

if (_blockCheat or _blockVoice) then {
	if (_blockCheat) then {call player_forceSave;}; //Perform before disableUserInput to prevent reenable
	disableUserInput true;disableUserInput true;
	if (_blockVoice) then {findDisplay 55 closeDisplay 2;};
	
	[_blockVoice,_channel,_channelChange] spawn {
		_blockVoice = _this select 0;
		_channel = _this select 1;
		_channelChange = _this select 2;		
		_testTime = diag_tickTime;
		CheatsDisabled = _testTime;
		switch true do {
			case _channelChange: {[localize "STR_EPOCH_NO_CHANNEL_SWITCH",1] call dayz_rollingMessages;};
			case _blockVoice: {[format[localize "STR_EPOCH_NO_VOICE",_channel],1] call dayz_rollingMessages;};
			default {[localize "STR_EPOCH_NO_CHEATS",1] call dayz_rollingMessages;};
		};		
		uiSleep 5;
		if (!r_player_unconsciousInputDisabled && CheatsDisabled == _testTime) then {
			//Enable input, disable and reenable to prevent the last key press being input after re-enable
			disableUserInput false;disableUserInput true;disableUserInput false;disableUserInput false;
		};
	};
	_handled = true;
};

//diag_log format["FilterCheats - Display:%7 DIK:%1 Channel:%2 ChannelChange:%3 BlockVoice:%4 Handled:%5 MicIcon:%6 InputAction1:%8 InputAction2:%9",_dik,_channel,_channelChange,_blockVoice,_handled,_micIcon,(_this select 0),_inputAction1,_inputAction2];

_handled