class WoodenGate_ghost_DZ: NonStrategic
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1_ghost;
	model = "z\addons\dayz_buildings\models\gates\gate_wood_ghost.p3d";
	armor = 1000;
};

class WoodenGate_foundation_DZ: DZE_Housebase
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_Foundation;
	model = "z\addons\dayz_buildings\models\gates\gate0_dzam.p3d";	
	armor = 1000;
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	GhostPreview = "WoodenGate_ghost_DZ";	
	offset[] = {0,4,0};
	upgradeBuilding[] = {"WoodenGate_1_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",1},{"ItemComboLock",1}}};
};

class WoodenGate_1_DZ: DZE_Housebase
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1;
	model = "z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	offset[] = {0,4,0};
	armor = 2000;	
	upgradeBuilding[] = {"WoodenGate_2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
		
		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};
	
	class UserActions {
		class Lock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};
		class Unlock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};		
		class Unlock_Door_Dialog
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};

	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};

class WoodenGate_2_DZ: DZE_Housebase
{
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_2;
	model = "z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	offset[] = {0,4,0};
	armor = 2500;
	upgradeBuilding[] = {"WoodenGate_3_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
		
		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};
	
	class UserActions {
		class Lock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};
		class Unlock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};		
		class Unlock_Door_Dialog
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};
	
	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};

class WoodenGate_3_DZ: DZE_Housebase
{	
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_3;
	model = "z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
	armor = 3000;
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenGate_4_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
		
		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};	
	
	class UserActions {
		class Lock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};
		class Unlock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};		
		class Unlock_Door_Dialog
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};
	
	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};

class WoodenGate_4_DZ: DZE_Housebase
{	
	armor = 3500;
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_4;
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	offset[] = {0,4,0};	
	model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
		
		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};	

	class UserActions {
		class Lock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};
		class Unlock_Door
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};		
		class Unlock_Door_Dialog
		{
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};
	
	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};