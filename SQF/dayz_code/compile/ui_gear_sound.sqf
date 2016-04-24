private["_type"];
_type="open_inventory";
if( (!isNull cursorTarget) && (player distance cursorTarget < 5) && (vehicle player == player) ) then {
    private["_cTarget"];
    _cTarget=cursorTarget;
    _type = switch true do {
        case (_cTarget isKindOf "Bag_Base_EP1"):{"open_backpack"}; //backpacks on ground
        case ( (_cTarget isKindOf "Man") && (alive _cTarget) && !(isNull unitBackpack _cTarget) ):{"open_backpack"}; //Person with backpack
        default {"open_inventory"}; //unknown, play cloth sounds
        //case (_cTarget isKindOf "Land_A_tent"):{"open_inventory"}; //Tents
        //case (_cTarget isKindOf "StashSmall"):{"open_stash_sm"};  //dirt pile stash
        //case (_cTarget isKindOf "StashMedium"):{"open_stash_md"}; //stash with wooden door
        //case (_cTarget isKindOf "AllVehicles"):{"open_vehicle"};  //"trunks"
        //case (typeof _cTarget == "WeaponHolder"):{"open_lootpile"}; //stuff on open ground
        
    };
};

/*Player doesn't have a cursor target, or its too far away, or they are in a vehicle.
else{
    if ( (vehicle player != player) && (vehicle player isKindOf "AllVehicles") ) then {
        //Player is in a vehicle, placeholder for vehicle trunk sounds(if added)
        _type="open_vehicle";
    };
};
*/

//MP:Player sound
[player,_type,0,false,5] call dayz_zombieSpeak;
