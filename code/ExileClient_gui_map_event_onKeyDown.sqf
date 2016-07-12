/**
 * ExileClient_gui_map_event_onKeyDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_stopPropagation"];
_stopPropagation = false;
if(getNumber(missionConfigFile >> "CfgPlayer" >> "disableMapDrawing") isEqualTo 1)then
{
	_stopPropagation = ((_this select 1) isEqualTo 29);
};
_stopPropagation
