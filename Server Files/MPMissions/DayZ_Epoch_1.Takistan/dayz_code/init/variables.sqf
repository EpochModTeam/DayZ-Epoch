if (isServer) then {
	
};

if (!isDedicated) then {
	dayz_resetSelfActions1 = dayz_resetSelfActions;
	dayz_resetSelfActions = {
		call dayz_resetSelfActions1;
		//    Add custom reset actions here
	
	};
	call dayz_resetSelfActions;	
};