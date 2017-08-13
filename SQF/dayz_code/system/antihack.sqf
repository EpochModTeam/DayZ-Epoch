/*
	These event handlers are not cleared after exiting the editor, allowing script execution in MP servers
	Still not fixed in A2OA as of 1.63.131129
*/
inGameUISetEventHandler ["PrevAction","false"];
inGameUISetEventHandler ["NextAction","false"];
inGameUISetEventHandler ["Action","false"];
{
	(findDisplay 12) displayCtrl 51 ctrlRemoveAllEventHandlers _x;
	(findDisplay 12) displayRemoveAllEventHandlers _x;
} count [
	"Load","Unload","ChildDestroyed","MouseEnter","MouseExit","SetFocus",
	"KillFocus","Timer","KeyDown","KeyUp","Char","IMEChar","IMEComposition","JoystickButton","MouseButtonDown",
	"MouseButtonUp","MouseButtonClick","MouseButtonDblClick","MouseMoving","MouseHolding","MouseZChanged",
	"CanDestroy","Destroy","ButtonClick","ButtonDblClick","ButtonDown","ButtonUp","LBSelChanged",
	"LBListSelChanged","LBDblClick","LBDrag","LBDragging","LBDrop","TreeSelChanged","TreeLButtonDown",
	"TreeDblClick","TreeExpanded","TreeCollapsed","TreeMouseMove","TreeMouseHold","TreeMouseExit",
	"ToolBoxSelChanged","Checked","CheckedChanged","CheckBoxesSelChanged","HTMLLink","SliderPosChanged",
	"ObjectMoved","MenuSelected","Draw","VideoStopped"
];

// (c) facoptere@gmail.com, licensed to DayZMod for the community
//
// check that plants libs are properly loaded
// thanks to Tansien the great
// run only once per character life
{
	_plant = _x createVehicleLocal (getMarkerPos "center");
	uiSleep 0.1;
	if (sizeOf _x == 0) exitWith { 
		PVDZ_sec_atp = toArray ("Plants texture hack for type " + _x);
		publicVariableServer "PVDZ_sec_atp";
		endMission "LOSER";
	};
	deleteVehicle _plant;
} count ["grass","prunus","picea","fallentree","phragmites","acer","amygdalusn","Brush","fiberplant","amygdalusc","boulder"];

diag_log format ["%1: Plants libs tests done!",__FILE__];