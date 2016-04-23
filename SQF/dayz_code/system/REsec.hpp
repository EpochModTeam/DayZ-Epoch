// (c) facoptere@gmail.com, licensed to DayZMod for the community

// These RE commands will be cancelled once init.sqf is exec'ed on client or server
#ifndef REMOVED_LIB
#define REMOVED_LIB  [ "addAction", "addEventhandler", "addMagazine", "addMagazineCargo", "addWeapon", \
"addWeaponCargo", "addWPCur", "animate", "callVar", "clearMagazineCargo", "clearWeaponCargo", "createDiaryRecord", \
"createMarkerLocal", "createSimpleTask", "createTaskSet", "debugLog", "deleteWP", "enablesimulation", "endMission", \
"execfsm", "fadeMusic", "fadeSound", "failMission", "globalChat", "globalRadio", "groupChat", "groupRadio", \
"hideObject", "hint", "hintC", "kbAddTopic", "kbreact", "kbRemoveTopic", "kbtell", "land", "move", "moveIn", \
"playAction", "playActionnow", "playmovenow", "playMusic", "playsound", "removeAction", \
"removeAllWeapons", "setCaptive", "setCurrentTask", "setCurrentTaskArrays", "setDate", "setDir", "setGroupID", \
"setMarkerPosLocal", "setObjectTexture", "setSimpleTaskDescription", "setTaskState", "setWPdesc", "setWPtype", \
"showCommandingMenu", "sideChat", "sideRadio", "skiptime", "spawn", "switchAction", "switchCamera", "taskHint", \
"titleCut", "Hangender"]
#endif

// Allowed commands
#ifndef TRACED_LIB
#define TRACED_LIB [ "execVM", "JIPexec", "JIPrequest", "say", "playmove", "switchmove", "titleText" ]
// uncomment following line to log all incoming allowed RE
#define RESEC_VERBOSE
#endif

// Special logic for execVM, only these whitelisted scripts will be spawned
#ifndef WHITELISTED_EXECVM
#define WHITELISTED_EXECVM [ ""ca\Modules\Functions\init.sqf"" ]
// uncomment and put in the array above if you want your server be able to kick players (not used in DayZ for now)
//""ca\Modules\MP\data\scriptCommands\endMission.sqf"" 
#endif

#define Stringify(macro) #macro
