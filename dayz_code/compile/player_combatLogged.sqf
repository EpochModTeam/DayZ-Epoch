private["_playerName","_center","_group"];
_playerName = _this;

cutText [format["%1 has combat logged!",_playerName], "PLAIN DOWN"];

_center = createCenter sideLogic;
_group = createGroup _center;
cl_gamelogic = _group createUnit ["LOGIC", [0, 0, 0], [], 0, "NONE"];
cl_gamelogic sideChat format["(COMBAT LOG) %1",_playerName];
deleteVehicle cl_gamelogic;