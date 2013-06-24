private["_characterID","_minutes","_newObject","_playerID","_playerName","_infected","_victim","_victimName","_killer","_killerName","_weapon","_distance","_message","_loc_message","_key","_eh","_body","_method","_name"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]
_characterID = 	_this select 0;
_minutes =		_this select 1;
_newObject = 	_this select 2;
_playerID = 	_this select 3;
_playerName = 	_this select 4;
_infected =		_this select 5;

_victim removeAllEventHandlers "MPHit";

_victim = _this select 2;
_victimName = _victim getVariable["bodyName", "nil"];

_killer = _victim getVariable["AttackedBy", "nil"];
_killerName = _victim getVariable["AttackedByName", "nil"];

// when a zombie kills a player _killer, _killerName and _weapon will be "nil"
// we can use this to determine a zombie kill and send a customized message for that. right now no killmsg means it was a zombie.
if (_killerName != "nil") then
{
	_weapon = _victim getVariable["AttackedByWeapon", "nil"];
	_distance = _victim getVariable["AttackedFromDistance", "nil"];

	if (_victimName == _killerName) then 
	{
		_message = format["%1 killed himself",_victimName];
		_loc_message = format["PKILL: %1 killed himself", _victimName];
	}
	else 
	{
		_message = format["%1 was killed by %2 with weapon %3 from %4m",_victimName, _killerName, _weapon, _distance];
		_loc_message = format["PKILL: %1 was killed by %2 with weapon %3 from %4m", _victimName, _killerName, _weapon, _distance];
	};

	diag_log _loc_message;
	if(DZE_DeathMsgGlobal) then {
		[nil, nil, rspawn, [_killer, _message], { (_this select 0) globalChat (_this select 1) }] call RE;
	};
	if(DZE_DeathMsgSide) then {
		[nil, nil, rspawn, [_killer, _message], { (_this select 0) sideChat (_this select 1) }] call RE;
	};
	if(DZE_DeathMsgTitleText) then {
		[nil,nil,"per",rTITLETEXT,_message,"PLAIN DOWN"] call RE;
	};

	// build array to store death messages to allow viewing at message board in trader citys.
	PlayerDeaths set [count PlayerDeaths,_message];

	// Cleanup
	_victim setVariable["AttackedBy", "nil", true];
	_victim setVariable["AttackedByName", "nil", true];
	_victim setVariable["AttackedByWeapon", "nil", true];
	_victim setVariable["AttackedFromDistance", "nil", true];
};

dayz_disco = dayz_disco - [_playerID];
_newObject setVariable["processedDeath",time];

/*
diag_log ("DW_DEBUG: (isnil _characterID): " + str(isnil "_characterID"));
if (isnil "_characterID") then {
diag_log ("DW_DEBUG: _newObject: " + str(_newObject));	
	};
*/

if (typeName _minutes == "STRING") then 
{
	_minutes = parseNumber _minutes;
};
	
if (_characterID != "0") then 
{
	_key = format["CHILD:202:%1:%2:%3:",_characterID,_minutes,_infected];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
} 
else 
{
	deleteVehicle _newObject;
};

diag_log ("PDEATH: Player Died " + _playerID);
/*
_eh = [_newObject] spawn {
	_body = _this select 0;
	_method = _body getVariable["deathType","unknown"];
	_name = _body getVariable["bodyName","unknown"];
	waitUntil{!isPlayer _body;sleep 1};
	_body setVariable["deathType",_method,true];
	_body setVariable["bodyName",_name,true];
	diag_log ("PDEATH: Player Left Body " + _name);
};
*/
//dead_bodyCleanup set [count dead_bodyCleanup,_newObject];
