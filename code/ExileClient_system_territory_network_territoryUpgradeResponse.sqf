/**
 * ExileClient_system_territory_network_territoryUpgradeResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_flag","_level","_radius","_respectString"];
_flag = objectFromNetId (_this select 0);
_level = _this select 1;
_radius = _this select 2;
_respectString = _this select 3;
ExileClientPlayerScore = parseNumber _respectString;
["Success", format ["Territory Upgraded! New Level: %1 New Range :%2", _level, _radius]] call ExileClient_gui_notification_event_addNotification;