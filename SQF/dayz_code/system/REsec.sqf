/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

_REMOVED_LIB = ["addAction", "addEventhandler", "addMagazine", "addMagazineCargo", "addWeapon","addWeaponCargo", "addWPCur", "animate", "callVar", "clearMagazineCargo", "clearWeaponCargo", "createDiaryRecord","createMarkerLocal", "createSimpleTask", "createTaskSet", "debugLog", "deleteWP", "enablesimulation", "endMission","execfsm", "fadeMusic", "fadeSound", "failMission", "globalChat", "globalRadio", "groupChat", "groupRadio","hideObject", "hint", "hintC", "kbAddTopic", "kbreact", "kbRemoveTopic", "kbtell", "land", "move", "moveIn","playAction", "playActionnow", "playmovenow", "playMusic", "playsound", "removeAction","removeAllWeapons", "setCaptive", "setCurrentTask", "setCurrentTaskArrays", "setDate", "setDir", "setGroupID","setMarkerPosLocal", "setObjectTexture", "setSimpleTaskDescription", "setTaskState", "setWPdesc", "setWPtype","showCommandingMenu", "sideChat", "sideRadio", "skiptime", "spawn", "switchAction", "switchCamera", "taskHint","titleCut", "Hangender"];
_TRACED_LIB = ["execVM", "JIPexec", "JIPrequest", "say", "playmove", "switchmove", "titleText"];

waitUntil{!isNil "BIS_MPF_InitDone"};

private["_ofn","_nfn","_REMOVED_LIB","_TRACED_LIB"];
{
	_ofn=format["r%1code",_x];
	_nfn=format["r%1code%2",_x,round(random(100000))];
	if(_x=="execVM")then{
		call compile format["%1=%2;%2={if((count _this>=3)AND{(!((_this select 2)IN%3))})then{diag_log(""WARNING RE %2 with illegal args:""+str(_this));}else{_this call %1}};",_nfn,_ofn,["ca\Modules\Functions\init.sqf"]];
	}else{
		#ifdef RESEC_VERBOSE
		call compile format ["%1=%2;%2={diag_log(""RE %2 args:""+str(_this));_this call %1};",_nfn,_ofn];
		#endif
	};
}foreach _TRACED_LIB;
{
	_ofn=format["r%1code",_x];
	call compile format["%1={diag_log(""WARNING illegal RE %1 with args:""+str(_this));};",_ofn];
}foreach _REMOVED_LIB;

#ifndef SKIP_REMOTEEXECUTIONSERVER
[]spawn{
	while{(true)}do{
		private["_nfn"];
		waitUntil{BIS_PathMPscriptCommandsCustom=="\ca\Modules\MP\data\scriptCommandsCustom\"};
		_nfn="BIS_MPF_remoteExecutionServer"+str(round(random(100000)));
		call compile(_nfn+"=BIS_MPF_remoteExecutionServer;BIS_MPF_remoteExecutionServer={private[""_fa"",""_co""];
		_fa=_this select 1;
		if(count _fa>=3)then{
			_co=_fa select 2;
			if(typeName _co==""STRING"")then{
				_co=toLower _co;
				if(_co IN[""loc"",""locper"",""perloc"",""per""])then{
					if(count _fa>=4)then{
						_co=_fa select 3;
					};
				};
			};
			if(typeName _co==""STRING"")then{
				{
					if(!((_x>=65&&_x<=90)OR(_x>=97&&_x<=122))) exitWith {diag_log(""WARNING possible code injection args:""+str(_this)); _this=[];};
				}forEach toArray _co;
			};
		};
		_this call "+_nfn+"};"
		);
		"remExField" addPublicVariableEventHandler{_this call BIS_MPF_remoteExecutionServer};
		"remExFP" addPublicVariableEventHandler{_this call BIS_MPF_remoteExecutionServer};
		BIS_PathMPscriptCommandsCustom="";
		diag_log(__FILE__+":Monitoring Remote Exe...");
		sleep 1;
	};
};
#endif