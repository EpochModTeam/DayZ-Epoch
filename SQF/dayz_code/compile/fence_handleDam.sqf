/***********************************************************
ASSIGN DAMAGE TO A UNIT.
Called by "HandleDamage" vehicle Event Handler

- Function fnc_Obj_FenceHandleDam
- [unit] call fnc_Obj_FenceHandleDam;
- return : 0 no damage
************************************************************/
private["_obj","_total","_damage"];

//Object the EH is assigned too
_obj = _this select 0;

if !((_this select 4) in ["PipeBomb","explosive_bolt","Hatchet_Swing_Ammo","Crowbar_Swing_Ammo","Machete_Swing_Ammo"]) exitwith { false };

_damage = switch (1==1) do {
    case ((_this select 4) in ["PipeBomb"]): { 0.5 }; //High explosive
	case ((_this select 4) in ["explosive_bolt"]): { 0.25 }; //Medium explosive, maybe grenades and other such items.
	case ((_this select 4) in ["Hatchet_Swing_Ammo","Crowbar_Swing_Ammo","Machete_Swing_Ammo"]): { 0.00001 }; //Melee damage
	default { 0 };
};

//Server running or client
if (isServer) then {
	if !(_obj in needUpdate_FenceObjects) then {
		needUpdate_FenceObjects set [count needUpdate_FenceObjects, _obj];
	};
	
	//TotalDamage Set by the server
	_obj setDamage (damage _obj) + _damage;
	
	//diag_log format["Server Reporting - %1",needUpdate_FenceObjects];
} else {
	//If its a client send to server for saving and damage setting.
	PVDZ_fence_Update = [_obj,(damage _obj) + _damage];
	publicVariableServer "PVDZ_fence_Update";
	
	//diag_log ("Client Reporting");
};

//} else {
//	//We really coulde just send to server and have the server setDamage
//	//send to server then back to owning client/server
//	PVDZ_send = [_obj,"objWallDamage",_this];
//	publicVariableServer "PVDZ_send";
//};


diag_log format["Object: %1, Damage:%2(%4), Projectile:%3",typeof (_this select 0),((damage _obj) + _damage),(_this select 4),(damage _obj)];

// all "HandleDamage event" functions should return the effective damage that the engine will record for that part
false