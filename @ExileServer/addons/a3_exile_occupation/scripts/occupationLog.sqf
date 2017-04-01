// Logging function to use either infiSTAR logging function or server RPT

_logDetail  = format["%1 %2",SC_occupationVersion,_this select 0];
_fileName   = _this select 1;

if(isNil "_fileName") then { _fileName = "A3_EXILE_OCCUPATION"; };

if(SC_infiSTAR_log && !(isNil "INFISTARVERSION")) then
{
    [_fileName,_logDetail] call FNC_A3_CUSTOMLOG;    
}
else
{
    diag_log _logDetail;
};