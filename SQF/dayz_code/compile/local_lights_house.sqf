/*
	DayZ Epoch Lighting System - House Lights
	Made for DayZ Epoch by axeman please ask permission to use/edit/distribute email gregory.andrew@gmail.com.
*/
private ["_validHouses","_animPhase","_maxHouses","_houseNum","_plyr","_objLightPoint","_pos","_objHouse","_dir","_rng","_rngPlyr","_lpRange","_nrstTrig","_lmpCol","_hsAnimPer","_brtns","_lightPcnt","_hsLPDist","_notLitHouses","_areaLit","_litHouses","_hsAnimPhase","_litWindowFound","_currLighting"];


//test
private["_animPhase2"];
		
		
//_debug = false;
_rng = _this select 0;//player range to light windows - REDUCE if individual players experience lag (Is client based)
_nrstTrig = _this select 1;
_lightPcnt = _this select 2;
_lmpCol = _this select 3;
_lpRange = round(_rng - ((_rng/100)*16));//Create an outer radius to cleanup lightpoints in
_plyr = _this select 4;
_houseNum = _this select 5;
_hsLPDist = 2; //Distance to detect local lightpoint from house center
_notLitHouses = [];
_litHouses = [];
_areaLit = false;
_litWindowFound = false;
_currLighting = 0;
_validHouses = 0;
_maxHouses = 0;
//Create a routine to reduce range if house amount limit is hit, reduce lag in cities..


//TESTING
//if(_houseNum>200)then{_rng = _rng - (_rng/100)*(_houseNum/10)};//Reduce range by % of housenum. If 600 houses reduce range by 60%, 400 house reduce by 40% etc.. - USAGE: In cities where visible houses are lower
//TESTING



_objHouse = nearestObjects [_nrstTrig, ["House"], _rng]; 

//axeDiagLog = format["HL:HOUSE NUM:%1 (From Last Run) | Range:%2 | Total House Objs:%3",_houseNum,_rng, count _objHouse];
//publicVariable "axeDiagLog";

_houseNum = count _objHouse;


		
if(!isNil "_objHouse")then{

	{
		_animPhase = getNumber(configFile >> "cfgVehicles" >> typeOf _x >> "AnimationSources" >> "Lights_1" >> "animPeriod");
		
		//test
		
		//axeDiagLog = format["HL:House Found: InitPhase: %3 | InPhase2:%4 | Phase:%1 for %2",_x animationPhase "Lights_1", _x,_animPhase,_animPhase2];
		//publicVariable "axeDiagLog";
				
		if(_animPhase>0)then{//Only if has a window (Lights_1)
			if(_x animationPhase "Lights_1" == 0)then{//If not lit
				[_notLitHouses , _x] call BIS_fnc_arrayPush;
			}else{//Already Lit - Do your thing.. later
				[_litHouses , _x] call BIS_fnc_arrayPush;
				_currLighting = _currLighting + 1;
			};
		_validHouses = _validHouses +1;
		};
		
	} forEach _objHouse;
	
	_maxHouses = ((_validHouses/100)*_lightPcnt);

	//axeDiagLog = format["HL:START(%5): Max Houses: %1 | Previous Houses: %2 | LIT HOUSES:%3 | Not Lit:%4",_maxHouses, _houseNum,count _litHouses,count _notLitHouses, name player];
	//publicVariable "axeDiagLog";
				
	if(count _litHouses < _maxHouses)then{
	_currLighting = count _litHouses;
	
		{	
			if(_currLighting < _maxHouses)then{
				
				
				if(_lightPcnt > floor (random 100))then{//Randomness required or first nearest houses to player get lit in a block - Needs to be based on range !
				
				//axeDiagLog = format["HL:Lighting New House: %3 Num:%1 Type: %4 for %2 | Dist:%5",_currLighting, name player,_x,typeOf _x,player distance _x];
				//publicVariable "axeDiagLog";
				
				//_x enableSimulation false;//Attempt to stop Arma from broadcasting animationphase. DOESN'T WORK - House lights_1 animationphase is still broadcast regardless  - Using that as the basis for lights ! Removed as it may stop destruction of building.. (For Now)
				_x animate ["Lights_1",1];
				
				//Randomly light second window(s)
				if(42 > floor (random 100)) then{
				//Only light if available otherwise animate 'attempt' may continue indefinitely..
				_animPhase2 = getNumber(configFile >> "cfgVehicles" >> typeOf _x >> "AnimationSources" >> "Lights_2" >> "animPeriod");
					if(_animPhase2>0)then{
					_x animate ["Lights_2",1];
					};
				};

				_brtns = [_plyr,_x] call axe_lightBrightness;
				while{true}do{sleep .1;if (_x animationPhase "Lights_1"==1) exitWith {};};
				
				//axeDiagLog = format["HL:NEW HOUSE LIT:%1",_x];
				//publicVariable "axeDiagLog";
				
				_objLightPoint = nearestObject [_x, "#lightpoint"];
				_pos = getPos _x;
				_dir = getDir _x;
					
					if(_plyr distance _x < _lpRange)then{//If within create radius
					[_lmpCol,_brtns,_lmpCol,getPos _x,_dir,[0,0,-1]] call axe_newLightPoint;
					//_x setVariable ["axeHLight", 1, false];		
					};
					
				_currLighting=_currLighting+1;
			
				};
			};

		}forEach _notLitHouses;
	
	}else{
	//axeDiagLog = format["House Limit Reached(%3): Max:%1 | Count:%2",_maxHouses,count _litHouses,name player];
	//publicVariable "axeDiagLog";
	};
	
	if(count _litHouses > 0 )then{
		{
			_objLightPoint = nearestObject [_x, "#lightpoint"];
			_pos = getPos _x;
			if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))<_hsLPDist)then{//In House
				
				if(_plyr distance _x < _lpRange)then{//If within range and outside band
				_brtns = [_plyr,_x] call axe_lightBrightness;
				_objLightPoint enableSimulation false;//Attempt to stop Arma from broadcasting lightpoint, just reminding it here ! DO NOT USE ! Will stop light from being visible to player (At least upon creation) !
				_objLightPoint setLightColor _lmpCol;
				_objLightPoint setLightBrightness _brtns;
				_objLightPoint setLightAmbient _lmpCol;
				//_x setVariable ["axeHLight", 1, false];
				//axeDiagLog = format["HL:Resetting brightness (%3) of house %1 for player %2 at %4m distance",_x,player,_brtns,_x distance player];
				//publicVariable "axeDiagLog";
				}else{//If outside create radius delete light that IS in house
				
				//axeDiagLog = format["HL:Deleteing old light %1 for %2 ",_objLightPoint,name player];
				//publicVariable "axeDiagLog";
				deleteVehicle _objLightPoint;//Clean up lightpoints as player leaves area.
				
				};
			
			}else{
				if(_plyr distance _x < _lpRange)then{//If within create radius recreate lightpoint (after logging)
				_brtns = [_plyr,_x] call axe_lightBrightness;
				[_lmpCol,_brtns,_lmpCol,getPos _x,_dir,[0,0,-2.6]] call axe_newLightPoint;
				//axeDiagLog = format["HL:Recreating light %1 for %2 ",_x,name player];
				//publicVariable "axeDiagLog";
				};
			};
			
		}forEach _litHouses;
	};
	
}else{
_houseNum = 0;
};
//axeDiagLog = format["HL:EXIT: Max Houses%1", _maxHouses];
//publicVariable "axeDiagLog";
_houseNum
