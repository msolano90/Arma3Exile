private["_newUniform","_newVest","_newHeadgear","_arrowClass"];

_traderPosition	    = _this select 0;
_traderDirection    = _this select 1;
_traderType	        = _this select 2;


"Exile_Trader_CommunityCustoms" createUnit [_traderPosition, _group, "trader = this;"];
trader setVariable ["ExileTraderType", "Exile_Trader_CommunityCustoms",true];

trader allowDamage false; 
trader disableAI 'AUTOTARGET'; 
trader disableAI 'TARGET'; 
trader disableAI 'SUPPRESSION';
removeGoggles trader;
trader forceAddUniform "U_IG_Guerilla3_1";
trader addWeapon "srifle_DMR_06_olive_F";
trader addVest "V_TacVest_blk_POLICE";
trader addBackpack "B_FieldPack_oli";
trader addHeadgear "H_Cap_blk";
trader addGoggles "TRYK_TAC_SET_OD";
trader setCaptive true;  
_traderDir = trader getDir _traderPos;
trader setDir _traderDir;
[trader,"WATCH1-2"] call BIS_fnc_ambientAnim;