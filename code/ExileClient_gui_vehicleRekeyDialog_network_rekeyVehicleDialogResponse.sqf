/**
 * ExileClient_gui_vehicleRekeyDialog_network_rekeyVehicleDialogResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_responseCode","_vehicleID","_newPlayerMoney","_salesPrice"];
_responseCode = _this select 0;
_vehicleID = _this select 1;
_newPlayerMoney = _this select 2;
if (_responseCode isEqualTo "Rekey successful") then
{
	_vehicleID spawn ExileClient_object_vehicle_rekeyVehicle;
	_salesPrice = ExileClientPlayerMoney - _newPlayerMoney;
	ExileClientPlayerMoney = _newPlayerMoney;
	["ItemPurchasedInformation", [_salesPrice * -1]] call ExileClient_gui_notification_event_addNotification;
}
else 
{
	["Whoops", [format["Failed to reset code."]]] call ExileClient_gui_notification_event_addNotification;
};
true