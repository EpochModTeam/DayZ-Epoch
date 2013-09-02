/*
	DayZ Epoch Lighting System
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_objLightPoint","_rng","_nrstGen","_objHouse"];
_rng = _this select 0;
_rng=_rng+20;
_nrstGen = _this select 1;
_objLightPoint = nearestObject [_nrstGen, "#lightpoint"];

while {_nrstGen distance _objLightPoint < _rng} do {
_objLightPoint = nearestObject [_nrstGen, "#lightpoint"];
deleteVehicle _objLightPoint;
};

_objHouse = nearestObjects [_nrstGen, ["House"], _rng]; 
{
_x animate ["Lights_1",0];
_x animate ["Lights_2",0];
}forEach _objHouse;
