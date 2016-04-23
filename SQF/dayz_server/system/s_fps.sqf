while {true} do {
	diag_log format["SERVER FPS: %1  PLAYERS: %2",diag_fps,playersNumber west];
  //diag_log format["SERVER FPS: %1  PLAYERS: %2  OBJECTS: %3",diag_fps,playersNumber west,count (allMissionObjects "")]; // very intensive
	uiSleep 360;
};
