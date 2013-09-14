/*
	DayZ Epoch Lighting System -Illuminant Tower Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_nrTowers","_nrstTrig","_lCol","_lbrt","_lamb","_twrCl"]; 
_nrstTrig = _this select 1;
_lCol = [1, 0.88, 0.73]; 
_lbrt = 0.04;
_lamb = [1, 0.88, 0.73]; 
_twrCl = "Land_Ind_IlluminantTower";
_nrTowers = nearestObjects [_nrstTrig, [_twrCl], 1000];
if(count _nrTowers >0)then{
	{
		if((_x getVariable ["axeTLight", 0])<1)then{
		[_lCol,_lbrt,_lamb,[_x],[true]] call axe_towerLight;	
		_x setVariable ["axeTLight", 1, false];
		};	
	}forEach _nrTowers;	
};
