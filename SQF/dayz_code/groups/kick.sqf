private ["_myGroup","_target","_targetUID"];

disableSerialization;
_myGroup = findDisplay 80000 displayCtrl 2;
_targetUID = _myGroup lbData (lbCurSel _myGroup);
_target = _targetUID call dayz_getPlayer;

if (isNull _target or _target == player or player != leader group player) exitWith {};

[_target] joinSilent grpNull;
dayz_myGroup = dayz_myGroup - [_targetUID];

PVDZ_Server_UpdateGroup = [2,player,_targetUID];
publicVariableServer "PVDZ_Server_UpdateGroup";

call dayz_selectGroupMember; //update lbCurSel change