//http://community.bistudio.com/wiki/ArmA2:_Moves

player playMove "amovpsitmstpsraswrfldnon_smoking"; //	-	Sitting smoking

waitUntil { animationState player != "amovpsitmstpsraswrfldnon_smoking"};

sleep 5;

player playMove "amovpsitmstpsraswrfldnon_weaponcheck1"; //	-	Sitting checking weapon

waitUntil { animationState player != "amovpsitmstpsraswrfldnon_weaponcheck1"};

sleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_layDown";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_layDown"};

sleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_lookAround";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_lookAround"};

sleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_scratch";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_scratch"};

sleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_sleep";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_sleep"};

sleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_sleep0"};

sleep 5;

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_standUp";

waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_standUp"};

R3F_TIRED_Accumulator = 0;

