/**
 * ExileClient_object_player_network_updateStatsRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientPlayerMoney = parseNumber (_this select 0);
ExileClientPlayerScore = parseNumber (_this select 1);
ExileClientPlayerKills = _this select 2;
ExileClientPlayerDeaths = _this select 3;