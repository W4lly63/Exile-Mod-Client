/**
 * ExileClient_object_player_von_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_parseBool","_bool"];
_parseBool = 
{
	_bool = false;
	if(_this isEqualTo 1)then
	{
		_bool = true;
	}
	else
	{
		_bool = false;
	};
	_bool
};
{
	(getNumber(_x >> "id")) enableChannel [(getNumber(_x >> "text")) call _parseBool,(getNumber(_x >> "von")) call _parseBool];
}
forEach ("true" configClasses (missionConfigFile >> "CfgVon"));
true