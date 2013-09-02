/*
	DayZ Epoch Lighting System
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_nrTowers","_rng","_nrstGen","_lCol","_lbrt","_lamb","_twrCl","_doLit"];
_rng = (_this select 0)*2; 
_nrstGen = _this select 1;
_lCol = [1, 0.88, 0.73]; 
_lbrt = 0.04;
_lamb = [1, 0.88, 0.73]; 
_twrCl = "Land_Ind_IlluminantTower";
_nrTowers = nearestObjects [_nrstGen, [_twrCl], _rng];
if(count _nrTowers >0)then{
	{
	_doLit=false;

		if((_x getVariable ["axeTLight", 0])<1)then{
		_doLit=true;
		};
		
	[_lCol,_lbrt,_lamb,[_x],[_doLit]] call axe_towerLight;	
	
	_x setVariable ["axeTLight", 1, false];
	
	}forEach _nrTowers;	
};
