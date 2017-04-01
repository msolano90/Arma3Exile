_logDetail = format['[OCCUPATION:Traders] starting @ %1',time]; 
[_logDetail] call SC_fnc_log;
{ 
    private _world              	= _x select 0;
    
    if (worldName == _world) then
    {
        private _traderName 	    = _x select 1;
        private _traderPos 		    = _x select 2;
        private _fileName 		    = _x select 3;
        private _createSafezone 	= _x select 4;
        private _file = format ["x\addons\a3_exile_occupation\trader\%1",_fileName];
        SC_fnc_createTraders = compile preprocessFileLineNumbers _file; 
        [_traderPos] call SC_fnc_createTraders;

        _traderName setmarkeralpha 0; 
        private _marker = createMarker [ format [" %1 ", _traderName], _traderPos];
        _marker setMarkerText "";
		_marker setMarkerShape "ICON";
		_marker setMarkerType "ExileTraderZoneIcon";

		private _marker1 = createMarker [ format [" %1_1 ", _traderName], _traderPos];
        _marker1 setMarkerText "";
		_marker1 setMarkerType "ExileTraderZone";
		_marker1 setmarkeralpha 0;

        if(_createSafezone) then
        {
            ExileTraderZoneMarkerPositions pushBack _traderPos;  
            ExileTraderZoneMarkerPositionsAndSize pushBack [_traderPos, 175];   
            publicVariable "ExileTraderZoneMarkerPositions";
            publicVariable "ExileTraderZoneMarkerPositionsAndSize";     
        };
        _logDetail = format['[OCCUPATION:Traders] Created trader base %1 @ %2',_traderName,_traderPos];
        [_logDetail] call SC_fnc_log;
        

        // Place the traders randomly

        private _traders = [
            ["Exile_Trader_AircraftCustoms",    "Exile_Sign_AircraftCustoms",       "GreekHead_A3_08",  ["HubBriefing_loop","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"]],
            ["Exile_Trader_Aircraft",           "Exile_Sign_Aircraft",              "WhiteHead_10",     ["LHD_krajPaluby"]],
            ["Exile_Trader_Armory",             "Exile_Sign_Armory",                "WhiteHead_01",     ["InBaseMoves_HandsBehindBack1","InBaseMoves_HandsBehindBack2"]],
            ["Exile_Trader_Hardware",           "Exile_Sign_Hardware",              "WhiteHead_14",     ["HubStandingUC_idle1","HubStandingUC_idle3"]],
            ["Exile_Trader_Vehicle",            "Exile_Sign_Vehicles",              "AfricanHead_03",   ["HubStandingUC_idle2","HubStandingUC_idle1"]],
            ["Exile_Trader_VehicleCustoms",     "Exile_Sign_VehicleCustoms",        "GreekHead_A3_05",  ["HubBriefing_loop","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"]],
            ["Exile_Trader_WasteDump",          "Exile_Sign_WasteDump",             "WhiteHead_07",     ["c4coming2cDf_genericstani1","c4coming2cDf_genericstani2","c4coming2cDf_genericstani3"]],
            ["Exile_Trader_Food",               "Exile_Sign_Food",                  "WhiteHead_15",     ["HubStandingUC_idle3","HubStandingUC_idle2"]],
            ["Exile_Trader_SpecialOperations",  "Exile_Sign_SpecialOperations",     "WhiteHead_06",     ["HubStandingUC_idle1","HubStandingUC_idle3"]],
            ["Exile_Trader_Equipment",          "Exile_Sign_Equipment",             "WhiteHead_15",     ["HubStandingUC_idle2","HubStandingUC_idle1"]],
            ["Exile_Trader_Office",             "Exile_Sign_Office",                "WhiteHead_10",     ["HubBriefing_loop","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"]]
        ];

        private _group = createGroup SC_SurvivorSide;
        _group setCombatMode "BLUE";
        _group setVariable ["DMS_AllowFreezing",false,true];
        _group setVariable ["DMS_LockLocality",true];
        _group setVariable ["DMS_SpawnedGroup",false];
        _group setVariable ["DMS_Group_Side", "survivor"];   


        enableSentences false;
        enableRadio false;		

        {         
            private _traderType         = _x select 0;
            private _traderSign         = _x select 1;
            private _traderFace         = _x select 2;
            private _traderAnimation    = _x select 3;
            

            // Find nearest relevant sign for the trader
            private _nearestSign = nearestObject [_traderPos, _traderSign];
            private _signDir = getDir _nearestSign;
            _nearestSign setDir _signDir;            
            private _traderPosition = position _nearestSign;
			
            _traderType createUnit [_traderPosition, _group, "trader = this;"];
				
            trader reveal _nearestSign;
            _nearestSign disableCollisionWith trader;         
            trader disableCollisionWith _nearestSign; 
            trader attachTo [_nearestSign, [0, -2, -0.6]];
            detach trader;
            private _traderDirection = _signDir-180;
            trader setDir _traderDirection;
            
			trader setVariable ["BIS_enableRandomization", false];
			trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
			trader setVariable ["ExileAnimations", _traderAnimation];
			trader setVariable ["ExileTraderType", _traderType,true];
			trader disableAI "ANIM";
			trader disableAI "MOVE";
			trader disableAI "FSM";
			trader disableAI "AUTOTARGET";
			trader disableAI "TARGET";
			trader disableAI "CHECKVISIBLE";
			trader allowDamage false;
			trader setFace _traderFace;			
			
            removeGoggles 					trader;
			removeAllItemsWithMagazines 	trader;
			removeHeadgear 					trader;
			removeUniform 					trader;
			removeVest 						trader;
			removeBackpackGlobal 			trader;

            private _loadOut = ["bandit"] call SC_fnc_selectGear;
			trader addWeapon (_loadOut select 0);
            trader forceAddUniform (_loadOut select 8);
            trader addVest (_loadOut select 9);
            trader addBackpack (_loadOut select 10);
            trader addHeadgear "H_Cap_blk";

			trader switchMove (_traderAnimation select 0);
			trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
			
            sleep 0.2;
            diag_log format["[OCCUPATION:Traders] Created %1 with head %2 at %3 facing %4", _x select 0, _x select 2, _traderPosition, _traderDirection];
        } forEach _traders;                   
    }; 
} foreach SC_occupyTraderDetails;