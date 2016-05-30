/**
 * ExileClient_object_player_network_createPlayerResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player","_chuteNetID","_spawnType","_chute","_corpseGroup"];
_player = _this select 0;
_chuteNetID = _this select 1;
_spawnType = _this select 11;
if !(_chuteNetID isEqualTo "") then
{
	_chute = objectFromNetId _chuteNetID;
}
else
{
	_chute = objNull;
};
if !(isNull _chute) then 
{
	_player disableCollisionWith _chute;
};
_player call ExileClient_object_player_initialize;
ExileClientPlayerIsSpawned = true;
ExileClientPlayerAttributesASecondAgo = 
[
	ExileClientPlayerAttributes select 0,
	ExileClientPlayerAttributes select 1,
	ExileClientPlayerAttributes select 2,
	ExileClientPlayerAttributes select 3,
	ExileClientPlayerAttributes select 4,
	ExileClientPlayerAttributes select 5,
	ExileClientPlayerAttributes select 6
];
switch (_spawnType) do 
{
	case 0: 
	{
	};
	case 1:
	{
		player action ["GetinDriver", _chute];
		[["Exile", "ParachuteLandingSpeed"], 15, "", 35, "", true, false, true, true] call BIS_fnc_advHint;
		ExileJobParachuteFix = [0.25, ExileClient_object_player_parachuteFix, [], true] call ExileClient_system_thread_addtask;
	};
	case 2:
	{
		player switchmove "";
		player switchmove "HaloFreeFall_non"; 
		player setVelocity [(sin (getDir player)) * 50, (cos (getDir player)) * 50, -5];
		ExileJobParachuteFix = [0.25, ExileClient_object_player_parachuteFix, [], true] call ExileClient_system_thread_addtask;
	};
};
call ExileClient_object_player_initStamina;
false call ExileClient_gui_hud_showSurvivalInfo;
call ExileClient_system_rating_balance;
ExileClientPlayerMoney = parseNumber (_this select 2);
ExileClientPlayerScore = parseNumber (_this select 3);
ExileClientPlayerKills = _this select 4;
ExileClientPlayerDeaths = _this select 5;
ExileClientClanName = _this select 10;
if !(ExileClientPartyID isEqualTo -1) then
{
	if !(isNull ExileClientLastDiedPlayerObject) then
	{	
		_corpseGroup = createGroup independent;
		[ExileClientLastDiedPlayerObject] joinSilent _corpseGroup;
	};
	[player] joinSilent (groupFromNetId ExileClientPartyID);
};
(_this select 9) call ExileClient_object_player_bambiStateBegin;
true