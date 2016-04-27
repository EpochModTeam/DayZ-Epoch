private ["_player","_amount","_wealth","_newwealth", "_result"];
_player =  _this select  0;
_amount =  _this select  1;
_result = false;
_wealth = _player getVariable[Z_MoneyVariable,0];
_player setVariable[Z_MoneyVariable,_wealth + _amount, true];
PVDZE_plr_Save = [_player,(magazines _player),true,true] ;
publicVariableServer "PVDZE_plr_Save";
_player setVariable ["moneychanged",1,true];
_newwealth = _player getVariable[Z_MoneyVariable,0];		
if (_newwealth >= _wealth) then { _result = true; };
_result
