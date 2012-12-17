/*
Initial Idea by Daimyo

System test to see how this would handle in the game. Other systems will be brought in to play along side this if full permission is givin.
For now this is just a test system based on the idea.
*/

private["_dialog","_dangerNear","_inCombat","_inVehicle"];

	_inCombat = player getVariable["startcombattimer",0];
	_inVehicle = (vehicle player != player);
	_dangerNear = (getPosATL player) nearEntities [["zZombie_Base","CAManBase"],30];

if (_inVehicle && (speed player != 0)) exitwith {};

if (count _dangerNear > 1) then {
	player setVariable["startcombattimer", 1, true];
};