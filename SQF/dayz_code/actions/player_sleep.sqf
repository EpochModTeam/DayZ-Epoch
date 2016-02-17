//http://community.bistudio.com/wiki/ArmA2:_Moves

player playMove "amovpsitmstpsraswrfldnon_smoking"; //	-	Sitting smoking

waitUntil { animationState player != "amovpsitmstpsraswrfldnon_smoking"};

uiSleep 5;

player playMove "amovpsitmstpsraswrfldnon_weaponcheck1"; //	-	Sitting checking weapon

waitUntil { animationState player != "amovpsitmstpsraswrfldnon_weaponcheck1"};

uiSleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_layDown";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_layDown"};

uiSleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_lookAround";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_lookAround"};

uiSleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_scratch";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_scratch"};

uiSleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_sleep";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_sleep"};

uiSleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_sleep0"};

uiSleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_standUp";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_standUp"};

R3F_TIRED_Accumulator = 0;

