
_logDetail = "=======================================================================================================";
[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;
 _logDetail = format['[processReporter] Started @ %4 : [FPS: %1|PLAYERS: %2|THREADS: %3]',diag_fps,count allplayers,count diag_activeSQFScripts,time];
[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;
_logDetail = "=======================================================================================================";
[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;

_armaBuild = productVersion select 3;
if(_armaBuild > 137494) then
{
	_activeProcesses = diag_activeScripts;
	_spawnedCount 	= _activeProcesses select 0;
	_execVMCount 	= _activeProcesses select 1;
	_execCount 		= _activeProcesses select 2;
	_execFSMCount 	= _activeProcesses select 3;

	_logDetail = format ["[processReporter] Process Counts: spawn-ed: %1 execVM-ed: %2 exec-ed: %3 execFSM-ed: %4",_spawnedCount,_execVMCount,_execCount,_execFSMCount];
	[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;
};

{
	_logDetail = format ["[processReporter] Active SQF: %1 @ %2",_x,time];
	[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;
} forEach diag_activeSQFScripts;

{
	_logDetail = format ["[processReporter] Active SQS: %1 @ %2",_x,time];
	[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;
} forEach diag_activeSQSScripts;

{
	_logDetail = format ["[processReporter] Active FSM: %1 @ %2",_x,time];
	[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;
} forEach diag_activeMissionFSMs;

_logDetail =  format ["[processReporter] Ended @ %1",time];
[_logDetail,'A3_EXILE_PROCESSREPORTER'] call SC_fnc_log;


