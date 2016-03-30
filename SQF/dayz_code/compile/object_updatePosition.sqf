// private["_object","_updateObj"];
// //check if can pitch here
// _object = _this;
//
// if (_object getVariable ["ObjectID",0] > 0) then {
// 	_updateObj = _object getVariable["update",[false,false,false]];
// 	_updateObj set [1,true];
// 	_object setVariable ["update",_updateObj,true];
// 	_object setVariable ["position",(getPosATL _object),true];
// };