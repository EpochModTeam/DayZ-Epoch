private ["_player","_amount","_wealth","_newwealth", "_result"];
_player = _this select 0;
_amount = _this select 1;
_result = false;
_wealth = _player getVariable[Z_MoneyVariable,0];
if(_amount > 0)then{
if (_wealth < _amount) then {
_result = false;
} else {
_newwealth = _wealth - _amount;
_player setVariable[Z_MoneyVariable,_newwealth, true];
_player setVariable ["moneychanged",1,true];
_result = true;
PVDZE_plr_Save = [_player,(magazines _player),true,true] ;
publicVariableServer "PVDZE_plr_Save";
};
}else{
_result = true;
};
_result
