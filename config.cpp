////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue May 31 19:15:02 2016 : Created on Tue May 31 19:15:02 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class C:\Program Files (x86)\Steam\steamapps\common\Arma 3\@Exile\addons\exile_client\config.bin{
class CfgPatches
{
	class exile_client
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_characters_f","a3_characters_f_beta","a3_characters_f_epa","a3_characters_f_epb","a3_characters_f_epc","a3_characters_f_gamma","a3_data_f","a3_weapons_f","a3_weapons_f_beta","a3_weapons_f_bootcamp","a3_weapons_f_epa","a3_weapons_f_epb","a3_weapons_f_epc","a3_weapons_f_gamma","a3_rocks_f","a3_weapons_f_mark","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","dbo_old_bike","gnt_c185","exile_assets"};
		units[] = {};
		weapons[] = {"arifle_MX_SW_F","arifle_MX_SW_Black_F","MMG_01_hex_F","MMG_01_tan_F","MMG_02_camo_F","MMG_02_black_F","MMG_02_sand_F","Throw"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgActions
{
	class None;
	class OpenBag: None
	{
		show = 0;
	};
	class FireInflame: None
	{
		show = 0;
	};
	class FirePutDown: None
	{
		show = 0;
	};
	class Heal: None
	{
		show = 0;
	};
	class HealSoldier: None
	{
		show = 0;
	};
	class FirstAid: None
	{
		show = 0;
	};
	class TakeBag: None
	{
		show = 0;
	};
	class TakeItem: None
	{
		show = 0;
	};
	class TakeWeapon: None
	{
		show = 0;
	};
	class TakeMagazine: None
	{
		show = 0;
	};
	class TakeItemFromBody: None
	{
		show = 0;
	};
	class TakeWeaponFromBody: None
	{
		show = 0;
	};
	class TakeBackpackFromBody: None
	{
		show = 0;
	};
	class TakeMine: None
	{
		show = 0;
	};
};
class CfgAmmo
{
	class BulletBase;
	class Exile_Ammo_AbstractMelee: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 85;
		timeToLive = 0.05;
		airFriction = 0;
		waterFriction = 0;
		caliber = 0.7;
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		soundHitBody1[] = {"\exile_assets\sound\hack_flesh01.ogg",1.584893,1,10};
		soundHitBody2[] = {"\exile_assets\sound\hack_flesh02.ogg",1.584893,1,10};
		hitMan[] = {"soundHitBody1",0.5,"soundHitBody2",0.5};
		maxControlRange = 1;
		simulation = "shotRocket";
		explosive = 0;
		visibleFireTime = 0;
		whistleOnFire = 0;
		whistleDist = 0;
		effectsMissileInit = "EmptyEffect";
		effectsMissile = "EmptyEffect";
		effectsSmoke = "EmptyEffect";
		explosionEffects = "NoExplosion";
		craterEffects = "NoCrater";
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class Exile_Ammo_Battery: BulletBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		caliber = 2.6;
		deflecting = 45;
		visibleFire = 5;
		audibleFire = 9;
		cost = 100;
		typicalSpeed = 280;
		airFriction = -0.0018;
	};
	class SmokeShellOrange;
	class Exile_Ammo_SmokeShellOrange: SmokeShellOrange
	{
		deflecting = 360;
		explosionTime = 1;
		timeToLive = 360;
	};
	class Exile_Ammo_Swing: Exile_Ammo_AbstractMelee
	{
		hit = 9;
		typicalSpeed = 85;
		timeToLive = 0.02;
		visibleFire = 0.1;
		audibleFire = 1;
		caliber = 1;
	};
};
class CfgCloudlets
{
	class Default;
	class Exile_Snow_Close: Default
	{
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = 0;
		onSurface = 0;
		keepOnSurface = 0;
		surfaceOffset = 0;
		bounceOnSurface = -1;
		bounceOnSurfaceVar = 0;
		postEffects = "";
		particleEffects = "";
		blockAIVisibility = 0;
		emissiveColor[] = {{2,2,2,0}};
		particleType = "Billboard";
		particleShape = "\exile_assets\model\Exile_Snow";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 3;
		circleRadius = 5;
		circleVelocity[] = {0,0,0};
		angle = 0;
		angleVar = 360;
		animationSpeedCoef = 1;
		animationSpeed[] = {1};
		animationName = "";
		color[] = {{2,2,2,0},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,0}};
		colorCoef[] = {1,1,1,1};
		colorVar[] = {0,0,0,0};
		interval = 0.01;
		lifeTime = 6;
		lifeTimeVar = 1;
		timerPeriod = 30;
		onTimerScript = "";
		beforeDestroyScript = "";
		moveVelocity[] = {0,0,-0.3};
		moveVelocityVar[] = {0,0,0.1};
		moveVelocityVarConst[] = {0,0,0};
		position[] = {0,0,0};
		positionVar[] = {5,5,0};
		positionVarConst[] = {0,0,0};
		rotationVelocity = 2;
		rotationVelocityVar = 2;
		size[] = {1};
		sizeCoef = 1;
		sizeVar = 0.5;
		weight = 1;
		volume = 0.75;
		rubbing = 0.05;
		randomDirectionIntensity = 0;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0;
		randomDirectionPeriodVar = 0;
	};
	class Exile_Snow_Near: Exile_Snow_Close
	{
		particleFSIndex = 0;
		positionVar[] = {6,6,0};
		lifeTime = 7;
	};
	class Exile_Snow_Far: Exile_Snow_Close
	{
		particleFSIndex = 2;
		positionVar[] = {7,7,0};
		lifeTime = 8;
	};
};
class CfgCommands
{
	allowedHTMLLoadURIs[] = {"http://lobby.exilemod.com/index.html*"};
};
class AbstractConstruction
{
	staticObject = "";
	previewObject = "";
	kitMagazine = "";
	upgradeObject = "";
	refundObjects[] = {};
	requiresTerritory = 1;
	canBePlacedOnRoad = 1;
	class SnapObjects{};
};
class CfgConstruction
{
	class AbstractWoodFloor: AbstractConstruction
	{
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				selections[] = {"Floor01","Floor02","Floor03","Floor04","Floor05"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				selections[] = {"Floor01","Floor02","Floor03","Floor04","Floor05"};
			};
			class Exile_Construction_WoodSupport_Static
			{
				selections[] = {"Floor01","Floor02","Floor03","Floor04"};
			};
			class Exile_Construction_WoodWall_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodWall_Reinforced_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodDoor_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodDoor_Reinforced_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodWindow_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodWindow_Reinforced_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodGate_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodGate_Reinforced_Static
			{
				selections[] = {"Floor01","Floor02"};
			};
		};
	};
	class AbstractWoodWall: AbstractConstruction
	{
		class SnapObjects
		{
			class Exile_Construction_WoodWallHalf_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06"};
			};
			class Exile_Construction_WoodWallHalf_Reinforced_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06"};
			};
			class Exile_Construction_WoodWall_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
			class Exile_Construction_WoodWall_Reinforced_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
			class Exile_Construction_WoodFloor_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodWindow_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
			class Exile_Construction_WoodWindow_Reinforced_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
			class Exile_Construction_WoodDoor_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
			class Exile_Construction_WoodDoor_Reinforced_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
			class Exile_Construction_WoodGate_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
			class Exile_Construction_WoodGate_Reinforced_Static
			{
				selections[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07"};
			};
		};
	};
	class Camera: AbstractWoodWall
	{
		staticObject = "Exile_Construction_BaseCamera_Static";
		previewObject = "Exile_Construction_BaseCamera_Preview";
		kitMagazine = "Exile_Item_BaseCameraKit";
		refundObjects[] = {"Exile_Item_BaseCameraKit"};
	};
	class CamoTent: AbstractConstruction
	{
		staticObject = "Exile_Container_CamoTent";
		previewObject = "Exile_Construction_CamoTent_Preview";
		kitMagazine = "Exile_Item_CamoTentKit";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_CamoTentKit"};
	};
	class CampFire: AbstractConstruction
	{
		staticObject = "Exile_Construction_CampFire_Static";
		previewObject = "Exile_Construction_CampFire_Preview";
		kitMagazine = "Exile_Item_CampFireKit";
		requiresTerritory = 0;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_CampFireKit"};
	};
	class Flag: AbstractConstruction
	{
		staticObject = "Exile_Construction_Flag_Static";
		previewObject = "Exile_Construction_Flag_Preview";
		kitMagazine = "Exile_Item_Flag";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_Flag"};
	};
	class FloodLight: AbstractConstruction
	{
		staticObject = "Exile_Construction_FloodLight_Static";
		previewObject = "Exile_Construction_FloodLight_Preview";
		kitMagazine = "Exile_Item_FloodLightKit";
		refundObjects[] = {"Exile_Item_FloodLightKit"};
	};
	class Laptop: AbstractWoodWall
	{
		staticObject = "Exile_Construction_Laptop_Static";
		previewObject = "Exile_Construction_Laptop_Preview";
		kitMagazine = "Exile_Item_Laptop";
		refundObjects[] = {"Exile_Item_Laptop"};
	};
	class MetalHedgehog: AbstractConstruction
	{
		staticObject = "Exile_Construction_MetalHedgehog_Static";
		previewObject = "Exile_Construction_MetalHedgehog_Preview";
		kitMagazine = "Exile_Item_MetalHedgehogKit";
		refundObjects[] = {"Exile_Item_MetalHedgehogKit"};
		requiresTerritory = 0;
		canBePlacedOnRoad = 1;
	};
	class PortableGenerator: AbstractConstruction
	{
		staticObject = "Exile_Construction_PortableGenerator_Static";
		previewObject = "Exile_Construction_PortableGenerator_Preview";
		kitMagazine = "Exile_Item_PortableGeneratorKit";
		refundObjects[] = {"Exile_Item_PortableGeneratorKit"};
	};
	class Safe: AbstractConstruction
	{
		staticObject = "Exile_Container_Safe";
		previewObject = "Exile_Construction_Safe_Preview";
		kitMagazine = "Exile_Item_SafeKit";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_SafeKit"};
	};
	class StorageCrate: AbstractConstruction
	{
		staticObject = "Exile_Container_StorageCrate";
		previewObject = "Exile_Construction_StorageCrate_Preview";
		kitMagazine = "Exile_Item_StorageCrateKit";
		requiresTerritory = 0;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_StorageCrateKit"};
	};
	class SupplyBox: AbstractConstruction
	{
		staticObject = "Exile_Container_SupplyBox";
		previewObject = "Exile_Construction_SupplyBox_Preview";
		kitMagazine = "Exile_Item_SupplyBoxKit";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_SupplyBoxKit"};
	};
	class WaterBarrel: AbstractConstruction
	{
		staticObject = "Exile_Construction_WaterBarrel_Static";
		previewObject = "Exile_Construction_WaterBarrel_Preview";
		kitMagazine = "Exile_Item_WaterBarrelKit";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_WaterBarrelKit"};
	};
	class WoodDoor: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodDoor_Static";
		previewObject = "Exile_Construction_WoodDoor_Preview";
		kitMagazine = "Exile_Item_WoodDoorKit";
		upgradeObject = "Exile_Construction_WoodDoor_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodDoorKit"};
	};
	class WoodDoorReinforced: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodDoor_Reinforced_Static";
		previewObject = "Exile_Construction_WoodDoor_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodDoorKit","Exile_Item_FortificationUpgrade"};
	};
	class WoodDoorway: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodDoorway_Static";
		previewObject = "Exile_Construction_WoodDoorway_Preview";
		kitMagazine = "Exile_Item_WoodDoorwayKit";
		upgradeObject = "Exile_Construction_WoodDoorway_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodDoorwayKit"};
	};
	class WoodDoorwayReinforced: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodDoorway_Reinforced_Static";
		previewObject = "Exile_Construction_WoodDoorway_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodDoorwayKit","Exile_Item_FortificationUpgrade"};
	};
	class WoodDrawBridge: AbstractWoodFloor
	{
		staticObject = "Exile_Construction_WoodDrawBridge_Static";
		previewObject = "Exile_Construction_WoodDrawBridge_Preview";
		kitMagazine = "Exile_Item_WoodDrawBridgeKit";
		refundObjects[] = {"Exile_Item_WoodDrawBridgeKit"};
	};
	class WoodFloor: AbstractWoodFloor
	{
		staticObject = "Exile_Construction_WoodFloor_Static";
		previewObject = "Exile_Construction_WoodFloor_Preview";
		kitMagazine = "Exile_Item_WoodFloorKit";
		refundObjects[] = {"Exile_Item_WoodFloorKit"};
	};
	class WoodFloorPort: AbstractWoodFloor
	{
		staticObject = "Exile_Construction_WoodFloorPort_Static";
		previewObject = "Exile_Construction_WoodFloorPort_Preview";
		kitMagazine = "Exile_Item_WoodFloorPortKit";
		refundObjects[] = {"Exile_Item_WoodFloorPortKit"};
	};
	class WoodFloorReinforced: AbstractWoodFloor
	{
		staticObject = "Exile_Construction_WoodFloor_Reinforced_Static";
		previewObject = "Exile_Construction_WoodFloor_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodFloorKit","Exile_Item_FortificationUpgrade"};
	};
	class WoodGate: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodGate_Static";
		previewObject = "Exile_Construction_WoodGate_Preview";
		kitMagazine = "Exile_Item_WoodGateKit";
		upgradeObject = "Exile_Construction_WoodGate_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodGateKit"};
	};
	class WoodGateReinforced: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodGate_Reinforced_Static";
		previewObject = "Exile_Construction_WoodGate_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodGateKit","Exile_Item_FortificationUpgrade"};
	};
	class WoodStairs: AbstractConstruction
	{
		staticObject = "Exile_Construction_WoodStairs_Static";
		previewObject = "Exile_Construction_WoodStairs_Preview";
		kitMagazine = "Exile_Item_WoodStairsKit";
		refundObjects[] = {"Exile_Item_WoodStairsKit"};
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				selections[] = {"Stairs01"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				selections[] = {"Stairs01","Stairs02"};
			};
		};
	};
	class WoodSupport: AbstractConstruction
	{
		staticObject = "Exile_Construction_WoodSupport_Static";
		previewObject = "Exile_Construction_WoodSupport_Preview";
		kitMagazine = "Exile_Item_WoodSupportKit";
		refundObjects[] = {"Exile_Item_WoodSupportKit"};
		class SnapObjects
		{
			class Exile_Construction_WoodSupport_Static
			{
				selections[] = {"Support01","Support02","Support03","Support04","Support05"};
			};
		};
	};
	class WoodWall: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodWall_Static";
		previewObject = "Exile_Construction_WoodWall_Preview";
		kitMagazine = "Exile_Item_WoodWallKit";
		upgradeObject = "Exile_Construction_WoodWall_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodWallKit"};
	};
	class WoodWallHalf: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodWallHalf_Static";
		previewObject = "Exile_Construction_WoodWallHalf_Preview";
		kitMagazine = "Exile_Item_WoodWallHalfKit";
		upgradeObject = "Exile_Construction_WoodWallHalf_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodWallHalfKit"};
	};
	class WoodWallHalfReinforced: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodWallHalf_Reinforced_Static";
		previewObject = "Exile_Construction_WoodWallHalf_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodWallHalfKit","Exile_Item_FortificationUpgrade"};
	};
	class WoodWallReinforced: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodWall_Reinforced_Static";
		previewObject = "Exile_Construction_WoodWall_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodWallKit","Exile_Item_FortificationUpgrade"};
	};
	class WoodWindow: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodWindow_Static";
		previewObject = "Exile_Construction_WoodWindow_Preview";
		kitMagazine = "Exile_Item_WoodWindowKit";
		upgradeObject = "Exile_Construction_WoodWindow_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodWindowKit"};
	};
	class WoodWindowReinforced: AbstractWoodWall
	{
		staticObject = "Exile_Construction_WoodWindow_Reinforced_Static";
		previewObject = "Exile_Construction_WoodWindow_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodWindowKit","Exile_Item_FortificationUpgrade"};
	};
	class WorkBench: AbstractConstruction
	{
		staticObject = "Exile_Construction_WorkBench_Static";
		previewObject = "Exile_Construction_WorkBench_Preview";
		kitMagazine = "Exile_Item_WorkBenchKit";
		refundObjects[] = {"Exile_Item_WorkBenchKit"};
		requiresTerritory = 0;
		canBePlacedOnRoad = 0;
	};
};
class CfgDifficultyPresets
{
	class Veteran;
	defaultPreset = "ExileRegular";
	class ExileRegular: Veteran
	{
		BleedingRate = 0.0005;
		displayName = "Regular Exile";
		class Options
		{
			reducedDamage = "false";
			groupIndicators = 0;
			friendlyTags = 0;
			enemyTags = 0;
			detectedMines = 0;
			commands = 0;
			waypoints = 2;
			weaponInfo = 0;
			stanceIndicator = 0;
			staminaBar = "false";
			weaponCrosshair = "true";
			visionAid = "false";
			thirdPersonView = "true";
			cameraShake = "true";
			scoreTable = "false";
			deathMessages = "false";
			vonID = "false";
			mapContent = "false";
			autoReport = "false";
			multipleSaves = "false";
		};
	};
	class ExileHardcore: Veteran
	{
		BleedingRate = 0.005;
		displayName = "Hardcore Exile";
		class Options
		{
			reducedDamage = "false";
			groupIndicators = 0;
			friendlyTags = 0;
			enemyTags = 0;
			detectedMines = 0;
			commands = 0;
			waypoints = 2;
			weaponInfo = 0;
			stanceIndicator = 0;
			staminaBar = "false";
			weaponCrosshair = "false";
			visionAid = "false";
			thirdPersonView = "false";
			cameraShake = "true";
			scoreTable = "false";
			deathMessages = "false";
			vonID = "false";
			mapContent = "false";
			autoReport = "false";
			multipleSaves = "false";
		};
	};
};
class CfgExileDelayedActions
{
	class Abstract
	{
		duration = 10;
		animation = "";
		failChance = 0;
		conditionFunction = "";
		completedFunction = "";
		abortedFunction = "";
		failedFunction = "";
	};
	class RepairVehicle
	{
		duration = 37;
		failChance = 0;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_repairVehicle_condition";
		completedFunction = "ExileClient_action_repairVehicle_completed";
	};
	class HotwireVehicle
	{
		duration = "3 * 60";
		failChance = 50;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_hotwireVehicle_condition";
		completedFunction = "ExileClient_action_hotwireVehicle_completed";
		failedFunction = "ExileClient_action_hotwireVehicle_failed";
	};
};
class CfgFlagsNative
{
	class BI
	{
		name = "Bohemia Interactive";
		texture = "exile_assets\texture\flag\flag_mate_bis_co.paa";
		uids[] = {"76561197977933359","76561197968664825","76561198003485468","76561198050098256","76561198007169107","76561197971697870","76561198085333695","76561197991855773"};
	};
	class Vish
	{
		name = "Vish";
		texture = "exile_assets\texture\flag\flag_mate_vish_co.paa";
		uids[] = {"76561198075905447"};
	};
	class Legion
	{
		name = "Legion";
		texture = "exile_assets\texture\flag\flag_mate_legion_ca.paa";
		uids[] = {"76561198010969041","76561198124983829","76561198094881952","76561198111208683","76561198015966307","76561198078247060","76561198034836765","76561197998832240","76561197970701357","76561198123330495"};
	};
	class DogesOfMassDestruction
	{
		name = "21 DMD";
		texture = "exile_assets\texture\flag\flag_mate_21dmd_co.paa";
		uids[] = {"76561198021615590"};
	};
	class Spawny
	{
		name = "sp4wny";
		texture = "exile_assets\texture\flag\flag_mate_spawny_co.paa";
		uids[] = {"76561197960452768"};
	};
	class Tomms
	{
		name = "Tomms";
		texture = "exile_assets\texture\flag\flag_mate_secretone_co.paa";
		uids[] = {"76561198003041335"};
	};
	class Blue
	{
		name = "Blue";
		texture = "\A3\Data_F\Flags\flag_blue_co.paa";
		uids[] = {};
	};
	class Green
	{
		name = "Green";
		texture = "\A3\Data_F\Flags\flag_green_co.paa";
		uids[] = {};
	};
	class Red
	{
		name = "Red";
		texture = "\A3\Data_F\Flags\flag_red_co.paa";
		uids[] = {};
	};
	class White
	{
		name = "White";
		texture = "\A3\Data_F\Flags\flag_white_co.paa";
		uids[] = {};
	};
	class CountryUK
	{
		name = "United Kingdom";
		texture = "\A3\Data_F\Flags\flag_uk_co.paa";
		uids[] = {};
	};
	class CountryDE
	{
		name = "Germany";
		texture = "exile_assets\texture\flag\flag_country_de_co.paa";
		uids[] = {};
	};
	class CountryCZ
	{
		name = "Czech Republic";
		texture = "exile_assets\texture\flag\flag_country_cz_co.paa";
		uids[] = {};
	};
	class CountryNL
	{
		name = "The Netherlands";
		texture = "exile_assets\texture\flag\flag_country_nl_co.paa";
		uids[] = {};
	};
	class CountryHR
	{
		name = "Croatia";
		texture = "exile_assets\texture\flag\flag_country_hr_co.paa";
		uids[] = {};
	};
	class CountryCN
	{
		name = "Canada";
		texture = "exile_assets\texture\flag\flag_country_cn_co.paa";
		uids[] = {};
	};
	class CountryRU
	{
		name = "Russia";
		texture = "exile_assets\texture\flag\flag_country_ru_co.paa";
		uids[] = {};
	};
	class CountryIR
	{
		name = "Ireland";
		texture = "exile_assets\texture\flag\flag_country_ir_co.paa";
		uids[] = {};
	};
	class CountryBY
	{
		name = "Belarus";
		texture = "exile_assets\texture\flag\flag_country_by_co.paa";
		uids[] = {};
	};
	class CountryFI
	{
		name = "Finland";
		texture = "exile_assets\texture\flag\flag_country_fi_co.paa";
		uids[] = {};
	};
	class CountryFR
	{
		name = "France";
		texture = "exile_assets\texture\flag\flag_country_fr_co.paa";
		uids[] = {};
	};
	class CountryAU
	{
		name = "Australia";
		texture = "exile_assets\texture\flag\flag_country_au_co.paa";
		uids[] = {};
	};
	class CountryBE
	{
		name = "Belgium";
		texture = "exile_assets\texture\flag\flag_country_be_co.paa";
		uids[] = {};
	};
	class CountrySE
	{
		name = "Sweden";
		texture = "exile_assets\texture\flag\flag_country_se_co.paa";
		uids[] = {};
	};
	class CountryPL
	{
		name = "Poland";
		texture = "exile_assets\texture\flag\flag_country_pl_co.paa";
		uids[] = {};
	};
	class Zand3rs
	{
		name = "Zand3rs";
		texture = "exile_assets\texture\flag\flag_mate_zanders_streched_co.paa";
		uids[] = {};
	};
	class Brunswik
	{
		name = "Brunswik";
		texture = "exile_assets\texture\flag\flag_misc_brunswik_co.paa";
		uids[] = {};
	};
	class Dorset
	{
		name = "Dorset";
		texture = "exile_assets\texture\flag\flag_misc_dorset_co.paa";
		uids[] = {};
	};
	class Svarog
	{
		name = "Children of Svarog";
		texture = "exile_assets\texture\flag\flag_misc_svarog_co.paa";
		uids[] = {};
	};
	class Exile
	{
		name = "Exile";
		texture = "exile_assets\texture\flag\flag_misc_exile_co.paa";
		uids[] = {};
	};
	class UTcity
	{
		name = "UTcity";
		texture = "exile_assets\texture\flag\flag_misc_utcity_co.paa";
		uids[] = {};
	};
	class Dickbutt
	{
		name = "Dickbut";
		texture = "exile_assets\texture\flag\flag_misc_dickbutt_co.paa";
		uids[] = {};
	};
	class Rainbow
	{
		name = "Rainbow";
		texture = "exile_assets\texture\flag\flag_misc_rainbow_co.paa";
		uids[] = {};
	};
	class BattlEye
	{
		name = "BattlEye";
		texture = "exile_assets\texture\flag\flag_misc_battleye_co.paa";
		uids[] = {};
	};
	class BSS
	{
		name = "Bluescreen Simulator";
		texture = "exile_assets\texture\flag\flag_misc_bss_co.paa";
		uids[] = {};
	};
	class Skippy
	{
		name = "Skippy";
		texture = "exile_assets\texture\flag\flag_misc_skippy_co.paa";
		uids[] = {};
	};
	class KiwiFern
	{
		name = "Silver Fern";
		texture = "exile_assets\texture\flag\flag_misc_kiwifern_co.paa";
		uids[] = {};
	};
	class Trololol
	{
		name = "Trololol";
		texture = "exile_assets\texture\flag\flag_misc_trololol_co.paa";
		uids[] = {};
	};
	class DreamCat
	{
		name = "Dream Cat";
		texture = "exile_assets\texture\flag\flag_misc_dream_cat_co.paa";
		uids[] = {};
	};
	class Pirate
	{
		name = "Pirate";
		texture = "exile_assets\texture\flag\flag_misc_pirate_co.paa";
		uids[] = {};
	};
	class Pedobear
	{
		name = "Pedobear";
		texture = "exile_assets\texture\flag\flag_misc_pedobear_co.paa";
		uids[] = {};
	};
	class Petoria
	{
		name = "Petoria";
		texture = "exile_assets\texture\flag\flag_misc_petoria_co.paa";
		uids[] = {};
	};
	class Smashing
	{
		name = "Smashing";
		texture = "exile_assets\texture\flag\flag_misc_smashing_co.paa";
		uids[] = {};
	};
	class LemonParty
	{
		name = "Lemon Party";
		texture = "exile_assets\texture\flag\flag_misc_lemonparty_co.paa";
		uids[] = {};
	};
	class RMA
	{
		name = "Respect my autoritah!";
		texture = "exile_assets\texture\flag\flag_misc_rma_co.paa";
		uids[] = {};
	};
	class CP
	{
		name = "ClarkyCallad";
		texture = "exile_assets\texture\flag\flag_cp_co.paa";
		uids[] = {};
	};
	class Trouble2_NA
	{
		name = "Trouble2";
		texture = "exile_assets\texture\flag\flag_trouble2_co.paa";
		uids[] = {};
	};
};
class CfgFontFamilies
{
	class RobotoRegular
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\RobotoRegular\RobotoRegular6","\exile_assets\font\RobotoRegular\RobotoRegular7","\exile_assets\font\RobotoRegular\RobotoRegular8","\exile_assets\font\RobotoRegular\RobotoRegular9","\exile_assets\font\RobotoRegular\RobotoRegular10","\exile_assets\font\RobotoRegular\RobotoRegular11","\exile_assets\font\RobotoRegular\RobotoRegular12","\exile_assets\font\RobotoRegular\RobotoRegular13","\exile_assets\font\RobotoRegular\RobotoRegular14","\exile_assets\font\RobotoRegular\RobotoRegular15","\exile_assets\font\RobotoRegular\RobotoRegular16","\exile_assets\font\RobotoRegular\RobotoRegular17","\exile_assets\font\RobotoRegular\RobotoRegular18","\exile_assets\font\RobotoRegular\RobotoRegular19","\exile_assets\font\RobotoRegular\RobotoRegular20","\exile_assets\font\RobotoRegular\RobotoRegular21","\exile_assets\font\RobotoRegular\RobotoRegular22","\exile_assets\font\RobotoRegular\RobotoRegular23","\exile_assets\font\RobotoRegular\RobotoRegular24","\exile_assets\font\RobotoRegular\RobotoRegular25","\exile_assets\font\RobotoRegular\RobotoRegular26","\exile_assets\font\RobotoRegular\RobotoRegular27","\exile_assets\font\RobotoRegular\RobotoRegular28","\exile_assets\font\RobotoRegular\RobotoRegular29","\exile_assets\font\RobotoRegular\RobotoRegular30","\exile_assets\font\RobotoRegular\RobotoRegular31","\exile_assets\font\RobotoRegular\RobotoRegular34","\exile_assets\font\RobotoRegular\RobotoRegular35","\exile_assets\font\RobotoRegular\RobotoRegular37","\exile_assets\font\RobotoRegular\RobotoRegular46"};
	};
	class RobotoMedium
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\RobotoMedium\RobotoMedium6","\exile_assets\font\RobotoMedium\RobotoMedium7","\exile_assets\font\RobotoMedium\RobotoMedium8","\exile_assets\font\RobotoMedium\RobotoMedium9","\exile_assets\font\RobotoMedium\RobotoMedium10","\exile_assets\font\RobotoMedium\RobotoMedium11","\exile_assets\font\RobotoMedium\RobotoMedium12","\exile_assets\font\RobotoMedium\RobotoMedium13","\exile_assets\font\RobotoMedium\RobotoMedium14","\exile_assets\font\RobotoMedium\RobotoMedium15","\exile_assets\font\RobotoMedium\RobotoMedium16","\exile_assets\font\RobotoMedium\RobotoMedium17","\exile_assets\font\RobotoMedium\RobotoMedium18","\exile_assets\font\RobotoMedium\RobotoMedium19","\exile_assets\font\RobotoMedium\RobotoMedium20","\exile_assets\font\RobotoMedium\RobotoMedium21","\exile_assets\font\RobotoMedium\RobotoMedium22","\exile_assets\font\RobotoMedium\RobotoMedium23","\exile_assets\font\RobotoMedium\RobotoMedium24","\exile_assets\font\RobotoMedium\RobotoMedium25","\exile_assets\font\RobotoMedium\RobotoMedium26","\exile_assets\font\RobotoMedium\RobotoMedium27","\exile_assets\font\RobotoMedium\RobotoMedium28","\exile_assets\font\RobotoMedium\RobotoMedium29","\exile_assets\font\RobotoMedium\RobotoMedium30","\exile_assets\font\RobotoMedium\RobotoMedium31","\exile_assets\font\RobotoMedium\RobotoMedium34","\exile_assets\font\RobotoMedium\RobotoMedium35","\exile_assets\font\RobotoMedium\RobotoMedium37","\exile_assets\font\RobotoMedium\RobotoMedium46"};
	};
	class OrbitronLight
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\OrbitronLight\OrbitronLight6","\exile_assets\font\OrbitronLight\OrbitronLight7","\exile_assets\font\OrbitronLight\OrbitronLight8","\exile_assets\font\OrbitronLight\OrbitronLight9","\exile_assets\font\OrbitronLight\OrbitronLight10","\exile_assets\font\OrbitronLight\OrbitronLight11","\exile_assets\font\OrbitronLight\OrbitronLight12","\exile_assets\font\OrbitronLight\OrbitronLight13","\exile_assets\font\OrbitronLight\OrbitronLight14","\exile_assets\font\OrbitronLight\OrbitronLight15","\exile_assets\font\OrbitronLight\OrbitronLight16","\exile_assets\font\OrbitronLight\OrbitronLight17","\exile_assets\font\OrbitronLight\OrbitronLight18","\exile_assets\font\OrbitronLight\OrbitronLight19","\exile_assets\font\OrbitronLight\OrbitronLight20","\exile_assets\font\OrbitronLight\OrbitronLight21","\exile_assets\font\OrbitronLight\OrbitronLight22","\exile_assets\font\OrbitronLight\OrbitronLight23","\exile_assets\font\OrbitronLight\OrbitronLight24","\exile_assets\font\OrbitronLight\OrbitronLight25","\exile_assets\font\OrbitronLight\OrbitronLight26","\exile_assets\font\OrbitronLight\OrbitronLight27","\exile_assets\font\OrbitronLight\OrbitronLight28","\exile_assets\font\OrbitronLight\OrbitronLight29","\exile_assets\font\OrbitronLight\OrbitronLight30","\exile_assets\font\OrbitronLight\OrbitronLight31","\exile_assets\font\OrbitronLight\OrbitronLight34","\exile_assets\font\OrbitronLight\OrbitronLight35","\exile_assets\font\OrbitronLight\OrbitronLight37","\exile_assets\font\OrbitronLight\OrbitronLight46"};
	};
	class OrbitronMedium
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\OrbitronMedium\OrbitronMedium6","\exile_assets\font\OrbitronMedium\OrbitronMedium7","\exile_assets\font\OrbitronMedium\OrbitronMedium8","\exile_assets\font\OrbitronMedium\OrbitronMedium9","\exile_assets\font\OrbitronMedium\OrbitronMedium10","\exile_assets\font\OrbitronMedium\OrbitronMedium11","\exile_assets\font\OrbitronMedium\OrbitronMedium12","\exile_assets\font\OrbitronMedium\OrbitronMedium13","\exile_assets\font\OrbitronMedium\OrbitronMedium14","\exile_assets\font\OrbitronMedium\OrbitronMedium15","\exile_assets\font\OrbitronMedium\OrbitronMedium16","\exile_assets\font\OrbitronMedium\OrbitronMedium17","\exile_assets\font\OrbitronMedium\OrbitronMedium18","\exile_assets\font\OrbitronMedium\OrbitronMedium19","\exile_assets\font\OrbitronMedium\OrbitronMedium20","\exile_assets\font\OrbitronMedium\OrbitronMedium21","\exile_assets\font\OrbitronMedium\OrbitronMedium22","\exile_assets\font\OrbitronMedium\OrbitronMedium23","\exile_assets\font\OrbitronMedium\OrbitronMedium24","\exile_assets\font\OrbitronMedium\OrbitronMedium25","\exile_assets\font\OrbitronMedium\OrbitronMedium26","\exile_assets\font\OrbitronMedium\OrbitronMedium27","\exile_assets\font\OrbitronMedium\OrbitronMedium28","\exile_assets\font\OrbitronMedium\OrbitronMedium29","\exile_assets\font\OrbitronMedium\OrbitronMedium30","\exile_assets\font\OrbitronMedium\OrbitronMedium31","\exile_assets\font\OrbitronMedium\OrbitronMedium34","\exile_assets\font\OrbitronMedium\OrbitronMedium35","\exile_assets\font\OrbitronMedium\OrbitronMedium37","\exile_assets\font\OrbitronMedium\OrbitronMedium46"};
	};
	class PressStart2P
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\PressStart2P\PressStart2P6","\exile_assets\font\PressStart2P\PressStart2P7","\exile_assets\font\PressStart2P\PressStart2P8","\exile_assets\font\PressStart2P\PressStart2P9","\exile_assets\font\PressStart2P\PressStart2P10","\exile_assets\font\PressStart2P\PressStart2P11","\exile_assets\font\PressStart2P\PressStart2P12","\exile_assets\font\PressStart2P\PressStart2P13","\exile_assets\font\PressStart2P\PressStart2P14","\exile_assets\font\PressStart2P\PressStart2P15","\exile_assets\font\PressStart2P\PressStart2P16","\exile_assets\font\PressStart2P\PressStart2P17","\exile_assets\font\PressStart2P\PressStart2P18","\exile_assets\font\PressStart2P\PressStart2P19","\exile_assets\font\PressStart2P\PressStart2P20","\exile_assets\font\PressStart2P\PressStart2P21","\exile_assets\font\PressStart2P\PressStart2P22","\exile_assets\font\PressStart2P\PressStart2P23","\exile_assets\font\PressStart2P\PressStart2P24","\exile_assets\font\PressStart2P\PressStart2P25","\exile_assets\font\PressStart2P\PressStart2P26","\exile_assets\font\PressStart2P\PressStart2P27","\exile_assets\font\PressStart2P\PressStart2P28","\exile_assets\font\PressStart2P\PressStart2P29","\exile_assets\font\PressStart2P\PressStart2P30","\exile_assets\font\PressStart2P\PressStart2P31","\exile_assets\font\PressStart2P\PressStart2P34","\exile_assets\font\PressStart2P\PressStart2P35","\exile_assets\font\PressStart2P\PressStart2P37","\exile_assets\font\PressStart2P\PressStart2P46"};
	};
};
class CfgFunctions
{
	class A3
	{
		tag = "BIS";
		project = "arma3";
		class Ambient
		{
			file = "exile_client\trashBin";
			class animalBehaviour{};
		};
		class MP
		{
			file = "exile_client\trashBin";
			class execFSM{};
			class execVM{};
			class execRemote{};
			class addScore{};
			class setRespawnDelay{};
			class onPlayerConnected{};
			class initPlayable{};
			class missionTimeLeft{};
			class MP{};
			class MPexec{};
			class initMultiplayer{};
			class call{};
			class spawn{};
			class deleteVehicleCrew{};
		};
	};
	class ExileClient
	{
		class Bootstrap
		{
			file = "exile_client\bootstrap";
			class preStart
			{
				preStart = 1;
			};
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
		class FiniteStateMachine
		{
			file = "exile_client\fsm";
			class login
			{
				ext = ".fsm";
			};
			class scheduledCall
			{
				ext = ".fsm";
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureAxeSwing01: Default
		{
			file = "\exile_assets\animation\Exile_Axe_Swing01.rtm";
			looped = 0;
			speed = 1.5;
			mask = "launcher";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
	};
};
class CfgHints
{
	class Exile
	{
		displayName = "Exile Mod";
		class Welcome
		{
			displayName = "Welcome to Exile!";
			description = "Thank you for playing Exile mod! Please feel free to report bugs, problems, feature requests or general feedback at %3<a href='http://www.exilemod.com'>exilemod.com</a>%4%1%1Enjoy your stay!";
			image = "\exile_assets\texture\hint\exile_ca.paa";
			noImage = "false";
			tip = "";
			arguments[] = {};
		};
		class BambiStateEnded
		{
			displayName = "Bambi State Ended";
			description = "You are not a bambi anymore!%1%1%3Your bambi state will end after a couple of minutes after you have spawned or when you pick up your first weapon. Other players will get a penalty when they shoot you while you are a bambi.%4";
			image = "\exile_assets\texture\hint\exile_ca.paa";
			noImage = "false";
			tip = "";
			arguments[] = {};
		};
		class ParachuteLandingSpeed
		{
			displayName = "Parachute Landing";
			description = "Please watch your landing speed!%1%1%3Landing at a speed above 20km/h | 12mph could kill you!%4";
			image = "\exile_assets\texture\hint\exile_ca.paa";
			noImage = "false";
			tip = "";
			arguments[] = {};
		};
		class SpawnZoneVehicles
		{
			displayName = "Spawn Zone Vehicles";
			description = "You have just entered a spawn zone vehicle. These vehicles exist to make your traveling life a little bit easier.%1%1Spawn zone vehicles are non-persistent and %3will despawn on server restart.%4";
			image = "\exile_assets\texture\hint\exile_ca.paa";
			noImage = "false";
			tip = "";
			arguments[] = {};
		};
	};
};
class CfgInGameUI
{
	class Actions
	{
		align = "0x00 + 0x08";
		shadow = 0;
		x = "(safeZoneX + safeZoneW * 0.5)";
		y = "(safeZoneY + safeZoneH * 0.6)";
		w = "300 * pixelW";
		font = "PuristaMedium";
		size = "18 * pixelH";
		rows = "5*SafeZoneH";
		arrowWidth = 0.015;
		arrowHeight = 0.02;
		iconArrowUp = "\A3\ui_f\data\igui\cfg\actions\arrow_up_gs.paa";
		iconArrowDown = "\A3\ui_f\data\igui\cfg\actions\arrow_down_gs.paa";
		background = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
		underlineSelected = 0;
		colorBackground[] = {"19/255","22/255","27/255",0.9};
		colorText[] = {"111/255","113/255","122/255",1};
		colorSelect[] = {1,1,1,1};
		colorBackgroundSelected[] = {"63/255","212/255","252/255",0.6};
	};
	class DefaultAction
	{
		font = "PuristaMedium";
		size = "18 * pixelH";
		colorText[] = {"255/255","180/255","24/255",1};
		shadow = 2;
		showHint = 0;
		showNext = 0;
		showLine = 0;
		relativeToCursor = 1;
		offsetX = 0;
		offsetY = 0.045;
		hotspotX = 0;
		hotspotY = 0;
		textTipFade = 0.4;
		textTipDelay = 0.4;
	};
};
class CfgLocationTypes
{
	class Name;
	class ExileTerritory: Name
	{
		color[] = {0.91,0,0,1};
		drawStyle = "name";
		font = "PuristaMedium";
		name = "Exile Territory";
		textSize = 0.05;
		size = 15;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class HandGrenade;
	class Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {};
		returnedItem = "";
		stopBleeding = 0;
		animations[] = {};
		tools[] = {};
	};
	class Exile_AbstractItem_Interaction_Eating: Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {"SndExileHeartbeatEating01","SndExileHeartbeatEating02"};
	};
	class Exile_AbstractItem_Interaction_Eating_Can: Exile_AbstractItem_Interaction_Eating
	{
		tools[] = {"Exile_Item_CanOpener"};
	};
	class Exile_AbstractItem_Interaction_Drinking: Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {"SndExileHeartbeatDrinking01"};
	};
	class Exile_AbstractItem_Interaction_Consuming_Healing: Exile_AbstractItem_Interaction_Consuming
	{
		animations[] = {"AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWpstDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWpstDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPpneMstpSlayWnonDnon_medic","AinvPpneMstpSlayWrflDnon_medic","AinvPpneMstpSlayWpstDnon_medic","AinvPpneMstpSlayWrflDnon_medic","AinvPpneMstpSlayWnonDnon_medic"};
	};
	class Exile_AbstractItem_Interaction_Using
	{
		scope = 1;
		chance = 100;
		successFunction = "";
		successNotification = "";
	};
	class Exile_AbstractItem_Interaction_Constructing
	{
		scope = 1;
	};
	class Exile_AbstractItem: CA_Magazine
	{
		scope = 1;
		descriptionShort = "Dummy";
		displayName = "Dummy";
		count = 1;
		mass = 1;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	class Exile_Item_Bandage: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bandage";
		descriptionShort = "A small bandage to stop bleeding wounds.<br/>Health: +5%/10s";
		mass = 10;
		model = "\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Bandage.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{0,5,10}};
			};
		};
	};
	class Exile_Item_BaseCameraKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Security Camera";
		descriptionShort = "I see something you don't see!";
		mass = 25;
		model = "exile_assets\model\Exile_Construction_BaseCamera.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Camera.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_BBQSandwich: Exile_AbstractItem
	{
		scope = 2;
		displayName = "BBQ Sandwich (Raw)";
		descriptionShort = "Some things shouldn't be canned.<br/>Hunger +40%/60s";
		model = "\exile_assets\model\Exile_Item_BBQSandwich.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_BBQSandwich.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,60}};
			};
		};
	};
	class Exile_Item_BBQSandwich_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "BBQ Sandwich (Cooked)";
		descriptionShort = "Some things shouldn't be canned.<br/>Hunger +100%/30s";
		model = "\exile_assets\model\Exile_Item_BBQSandwich_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_BBQSandwich_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_BeefParts: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Beef Parts";
		descriptionShort = "A vegetarians nightmare. <br/>Hunger: +30%/30s";
		model = "\exile_assets\model\Exile_Item_BeefParts.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_BeefParts.paa";
		mass = 15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class Exile_Item_Beer: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Hausmann Beer";
		descriptionShort = "No expiration date, no problem! <br/>Thirst: +75%/30s<br/>Temperature: +0.5°C%/10s<br/>Alc. Vol.: 7‰";
		picture = "\exile_assets\texture\item\Exile_Item_Beer.paa";
		model = "\exile_assets\model\Exile_Item_Beer.p3d";
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,75,30},{4,0.4,0},{5,0.5,10}};
			};
		};
	};
	class Exile_Item_BushKit_Green: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bush Kit (Green)";
		descriptionShort = "We want: A SHRUBBERY!";
		mass = 50;
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				successFunction = "ExileClient_object_bush_attachGreenBush";
				successNotification = "TurnedIntoABushNotification";
			};
		};
	};
	class Exile_Item_CamoTentKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Camo Tent Kit";
		descriptionShort = "A packed tent.";
		model = "\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CamoTentKit.paa";
		mass = 10;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_CampFireKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Camp Fire Kit";
		descriptionShort = "Camping Fire";
		mass = 10;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_CampFire.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_CanOpener: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Can Opener";
		descriptionShort = "Used to open cans.";
		model = "\A3\Structures_F_EPA\Items\Tools\CanOpener_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CanOpener.paa";
		mass = 5;
	};
	class Exile_Item_Can_Empty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Can (Empty)";
		descriptionShort = "An empty tin can.";
		model = "\exile_assets\model\Exile_Item_Can_Empty.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Can_Empty.paa";
		mass = 5;
	};
	class Exile_Item_CarWheel: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Car Wheel";
		descriptionShort = "A simple car wheel. Looks a bit like a tire.";
		model = "\A3\Structures_F\Civ\Garbage\Tyre_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CarWheel.paa";
		mass = 100;
	};
	class Exile_Item_CatFood: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cat Food (Raw)";
		descriptionShort = "Meow... <br/>Hunger: +40%/40s";
		model = "\exile_assets\model\Exile_Item_Catfood.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Catfood.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,40}};
			};
		};
	};
	class Exile_Item_CatFood_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cat Food (Cooked)";
		descriptionShort = "Meow... <br/>Hunger: +100%/20s";
		model = "\exile_assets\model\Exile_Item_Catfood_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Catfood_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_Cement: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bag of Cement";
		picture = "\exile_assets\texture\item\Exile_Item_Cement.paa";
		model = "\exile_assets\model\Exile_Item_Cement.p3d";
		descriptionShort = "Perfect for making shoes that fits every size!";
		mass = 100;
	};
	class Exile_Item_Cheathas: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cheathas";
		descriptionShort = "Perfect for a cozy TV evening with friends. If you have some. <br/>Hunger: +30%/30s";
		model = "\exile_assets\model\Exile_Item_Cheathas.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Cheathas.paa";
		mass = 15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class Exile_Item_ChristmasTinner: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Christmas Tinner (Raw)";
		descriptionShort = "Festive!<br/>Hunger: +40%/60s";
		model = "\exile_assets\model\Exile_Item_ChristmasTinner.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ChristmasTinner.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,60}};
			};
		};
	};
	class Exile_Item_ChristmasTinner_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Christmas Tinner (Cooked)";
		descriptionShort = "Festive!<br/>Hunger: +100%/30s";
		model = "\exile_assets\model\Exile_Item_ChristmasTinner_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ChristmasTinner_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_CockONut: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cock'O'Nut";
		descriptionShort = "The real candy bar. <br/>Hunger: +20%/40s";
		model = "\exile_assets\model\Exile_Item_CockONut.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,20,40}};
			};
		};
	};
	class Exile_Item_Codelock: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Code Lock";
		descriptionShort = "Used to lock doors or gates on bases.";
		model = "\exile_assets\model\Exile_Item_Codelock.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Codelock.paa";
		mass = 5;
	};
	class Exile_Item_CookingPot: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cooking Pot";
		descriptionShort = "If you know how to cook, this pot will surely become handy sometime.";
		model = "\exile_assets\model\Exile_Item_Cookingpot.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Cookingpot.paa";
		mass = 20;
	};
	class Exile_Item_CordlessScrewdriver: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cordless Screwdriver";
		descriptionShort = "Let's drill some holes... :)";
		model = "\A3\Structures_F\Items\Tools\DrillAku_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CordlessScrewdriver.paa";
		mass = 30;
	};
	class Exile_Item_Defibrillator: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Defibrillator";
		descriptionShort = "";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Defibrillator.paa";
		mass = 30;
	};
	class Exile_Item_DogFood: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Dog Food (Raw)";
		descriptionShort = "Woof, Woof, Bark! <br/>Hunger: +30%/30s";
		model = "\exile_assets\model\Exile_Item_DogFood.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DogFood.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class Exile_Item_DogFood_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Dog Food (Cooked)";
		descriptionShort = "Good boy! <br/>Hunger: +100%/20s";
		model = "\exile_assets\model\Exile_Item_DogFood_Open.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DogFood_Open.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_DsNuts: Exile_AbstractItem
	{
		scope = 2;
		displayName = "D's Nuts";
		descriptionShort = "A tiny can with huge nuts. <br/>Hunger: +30%/60s";
		model = "\exile_assets\model\Exile_Item_DsNuts.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DsNuts.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,60}};
			};
		};
	};
	class Exile_Item_DuctTape: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Duct Tape";
		descriptionShort = "Can fix almost anything. If it moves and it should not, use Duct Tape.";
		model = "\a3\structures_f_epa\Items\Tools\DuctTape_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DuctTape.paa";
		mass = 5;
	};
	class Exile_Item_EMRE: Exile_AbstractItem
	{
		scope = 2;
		displayName = "EMRE";
		descriptionShort = "Extra delicious, well tinned remains. <br/>Hunger: +75%/60s";
		model = "\exile_assets\model\Exile_Item_EMRE.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_EMRE.paa";
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,75,60}};
			};
		};
	};
	class Exile_Item_EnergyDrink: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Energy Drink";
		descriptionShort = "Gotta go fast!<br/>Thirst: +75%/20s";
		picture = "\exile_assets\texture\item\Exile_Item_EnergyDrink.paa";
		model = "\exile_assets\model\Exile_Item_EnergyDrink.p3d";
		mass = 7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,75,20}};
			};
		};
	};
	class Exile_Item_ExtensionCord: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Extension Cord";
		descriptionShort = "Used to connect electronic devices to a power supply.";
		model = "\a3\structures_f\Items\Electronics\ExtensionCord_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ExtensionCord.paa";
		mass = 5;
	};
	class Exile_Item_FireExtinguisher: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fire Extinguisher";
		descriptionShort = "Used to put out fires.";
		model = "\A3\Structures_F_EPA\Items\Tools\FireExtinguisher_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FireExtinguisher.paa";
		mass = 30;
	};
	class Exile_Item_Flag: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Territory Flag Kit";
		descriptionShort = "Can be used to setup a base zone flag.";
		mass = 50;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_FloodLightKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Flood Light Kit";
		descriptionShort = "Flood Light";
		mass = 10;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_FloodLight.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Foolbox: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Foolbox";
		picture = "\exile_assets\texture\item\Exile_Item_Toolbox.paa";
		model = "\exile_assets\model\Exile_Item_Toolbox.p3d";
		descriptionShort = "The ultimate tool box for the overly-manly-man.";
		mass = 50;
	};
	class Exile_Item_FortificationUpgrade: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fortification Upgrade Kit";
		picture = "\exile_assets\texture\item\Exile_Item_MetalBoard.paa";
		descriptionShort = "Used to upgrade wood constructions to fortified wood constructions";
		mass = 100;
	};
	class Exile_Item_FuelBarrelEmpty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Barrel (Empty)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass = 150;
	};
	class Exile_Item_FuelBarrelFull: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Barrel (Full)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass = 150;
		count = 300;
	};
	class Exile_Item_FuelCanisterEmpty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Canister (Empty)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass = 2;
	};
	class Exile_Item_FuelCanisterFull: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Canister (Full)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass = 22;
		count = 20;
	};
	class Exile_Item_GloriousKnakworst: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Glorious Knakworst (Raw)";
		descriptionShort = "As Dutch as it gets. <br/>Hunger +60%/30s";
		model = "\exile_assets\model\Exile_Item_Knakworst.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Knakworst.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,60,30}};
			};
		};
	};
	class Exile_Item_GloriousKnakworst_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Glorious Knakworst (Cooked)";
		descriptionShort = "As Dutch as it gets. <br/>Hunger +100%/20s";
		model = "\exile_assets\model\Exile_Item_Knakworst_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Knakworst_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_Grinder: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Grinder";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Grinder_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Grinder.paa";
		mass = 30;
	};
	class Exile_Item_Hammer: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Hammer";
		descriptionShort = "STOP... Hammer time!";
		model = "\A3\Structures_F\Items\Tools\Hammer_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Hammer.paa";
		mass = 10;
	};
	class Exile_Item_Handsaw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Handsaw";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Saw_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Handsaw.paa";
		mass = 20;
	};
	class Exile_Item_Heatpack: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Thermal Buddy";
		descriptionShort = "Can be used to warm you up a bit. You just need to rub it.<br/>Temperature: +1°C/10s";
		mass = 5;
		model = "\A3\Structures_F_EPA\Items\Medical\HeatPack_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Heatpack.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{5,1,10}};
			};
		};
	};
	class Exile_Item_InstaDoc: Exile_AbstractItem
	{
		scope = 2;
		displayName = "InstaDoc";
		descriptionShort = "The universal auto-injector to regenerate health and stop bleeding wounds.<br/>Health: +100%/30s";
		mass = 15;
		model = "\exile_assets\model\Exile_Item_Instadoc.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Instadoc.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{0,100,30}};
			};
		};
	};
	class Exile_Item_InstantCoffee: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Instant Coffee Beanz";
		descriptionShort = "100% Beanz!<br/>Hunger +5%/10s";
		model = "\exile_assets\model\Exile_Item_InstantCoffee.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_InstantCoffee.paa";
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,10}};
			};
		};
	};
	class Exile_Item_JunkMetal: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Junk Metal";
		descriptionShort = "This must have been something useful before. Rest in pieces.";
		picture = "\exile_assets\texture\item\Exile_Item_Junkmetal.paa";
		model = "\exile_assets\model\Exile_Item_Junkmetal.p3d";
		mass = 25;
	};
	class Exile_Item_Knife: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Knife";
		descriptionShort = "Combine this with bubble gum and do some MacGyver-like things with it.";
		model = "\exile_assets\model\Exile_Item_Knife.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Knife.paa";
		mass = 10;
	};
	class Exile_Item_Laptop: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Base Laptop";
		descriptionShort = "The best of best!";
		picture = "\exile_assets\texture\item\Exile_Item_Laptop.paa";
		model = "\exile_assets\model\Exile_Construction_Laptop.p3d";
		mass = 30;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Leaves: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Leaves";
		descriptionShort = "A very useful stack of leaves.";
		model = "\exile_assets\model\item\Exile_Item_Leaves.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Leaves.paa";
		mass = 5;
	};
	class Exile_Item_LightBulb: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Light Bulb";
		descriptionShort = "How many bambis does it take it replace a light bulb? None. They do not know what a light bulb is. Haha. Ha. Okay, that was lame.";
		model = "\exile_assets\model\Exile_Item_LightBulb.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_LightBulb.paa";
		mass = 5;
	};
	class Exile_Item_Magazine01: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Better Prisoners #01";
		descriptionShort = "First edition of the Better Prisoners magazine.";
		model = "\exile_assets\model\Exile_Item_Magazine01.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Magazine01.paa";
		mass = 5;
	};
	class Exile_Item_Magazine02: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Better Prisoners #02";
		descriptionShort = "Second edition of the Better Prisoners magazine.";
		model = "\exile_assets\model\Exile_Item_Magazine02.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Magazine02.paa";
		mass = 5;
	};
	class Exile_Item_Magazine03: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Better Prisoners #03";
		descriptionShort = "Third edition of the Better Prisoners magazine.";
		model = "\exile_assets\model\Exile_Item_Magazine03.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Magazine03.paa";
		mass = 5;
	};
	class Exile_Item_Matches: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Box of Matches";
		descriptionShort = "Kill it with fire!";
		model = "\exile_assets\model\Exile_Item_Matchbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Matchbox.paa";
		mass = 1;
		count = 10;
	};
	class Exile_Item_MetalBoard: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Board";
		descriptionShort = "Can be used to fortify wood constructions.";
		mass = 50;
		model = "\exile_assets\model\Exile_Item_MetalBoard.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalBoard.paa";
	};
	class Exile_Item_MetalHedgehogKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Hedgehog Kit";
		descriptionShort = "Can be used to construct a metal hedgehog.";
		mass = 50;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_Hedgehog_Metal.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_MetalPole: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Pole";
		descriptionShort = "Time for a pole dance!";
		mass = 25;
		model = "\exile_assets\model\Exile_Item_MetalPole.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalPole.paa";
	};
	class Exile_Item_MetalScrews: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Box of Screws";
		picture = "\exile_assets\texture\item\Exile_Item_MetalScrews.paa";
		model = "\exile_assets\model\Exile_Item_MetalScrews.p3d";
		descriptionShort = "Not only do I have a screw loose. I can't find the screw driver.";
		mass = 10;
	};
	class Exile_Item_MetalWire: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Wire";
		descriptionShort = "In case you do not know what a metal wire is: It is a wire made out of metal.";
		model = "\A3\Structures_F_EPA\Items\Tools\MetalWire_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalWire.paa";
		mass = 5;
	};
	class Exile_Item_Moobar: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Moobar";
		descriptionShort = "Some yummi milky chocolate! <br/>Hunger: +10%/30s";
		model = "\exile_assets\model\Exile_Item_Moobar.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Moobar.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,10,30}};
			};
		};
	};
	class Exile_Item_MountainDupe: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Mountain Dupe";
		descriptionShort = "Original Bavarian Soft Drink<br/>Thirst: +50%/20s";
		picture = "\exile_assets\texture\item\Exile_Item_MountainDupe.paa";
		model = "\exile_assets\model\Exile_Item_MountainDupe.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,50,20}};
			};
		};
	};
	class Exile_Item_Noodles: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Chemical Noodles";
		descriptionShort = "BIO is yesterday's quality. <br/>Hunger: +25%/50s";
		model = "\exile_assets\model\Exile_Item_Noodles.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Noodles.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,50}};
			};
		};
	};
	class Exile_Item_OilCanister: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Oil Canister";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Vessels\CanisterOil_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_OilCanister.paa";
		mass = 30;
	};
	class Exile_Item_PlasticBottleCoffee: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Coffee)";
		descriptionShort = "No milk, no sugar. Just pure darkness.<br/>Thirst: +100%/60s<br/>Hunger: +10%/5s<br/>Temperature: +0.5°C%/10s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Coffee.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Coffee.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,100,60},{2,10,5},{5,0.5,10}};
			};
		};
	};
	class Exile_Item_PlasticBottleDirtyWater: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Dirty Water)";
		descriptionShort = "Contains a lot of bacteria. Drink at your own risk.<br/>Thirst: +10%/20s<br/>Health: -10%/5s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Dirty.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Dirty.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,10,20},{0,-10,5}};
			};
		};
	};
	class Exile_Item_PlasticBottleEmpty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Empty)";
		descriptionShort = "Fill it with salt water at the ocean or rain water at local water tanks. Or collect the deposit at a trader.";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Empty.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Empty.p3d";
		mass = 5;
	};
	class Exile_Item_PlasticBottleFreshWater: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Fresh Water)";
		descriptionShort = "Enjoy the refreshing taste of nothing.<br/>Thirst: +80%/15s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Clean.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Clean.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,80,15}};
			};
		};
	};
	class Exile_Item_PlasticBottleSaltWater: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Salt Water)";
		descriptionShort = "Drink this fishy soup to commit suicide slowly.<br/>Thirst: -20%/10s<br/>Health: -30%/15s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Salty.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Salty.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,-20,10},{0,-30,15}};
			};
		};
	};
	class Exile_Item_Pliers: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Pliers";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Pliers_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Pliers.paa";
		mass = 10;
	};
	class Exile_Item_PopTabs: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Pop Tabs";
		descriptionShort = "Pop Tabs are the tiny little thing on top of drink cans used to open them. Some say you can also put a straw in them. They are used as a currency in Exile.";
		model = "\exile_assets\model\Exile_Item_Matchbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Matchbox.paa";
		mass = 0;
		count = 10000;
	};
	class Exile_Item_PortableGeneratorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Portable Generator Kit";
		descriptionShort = "Can be used to switch your flood lights on and off.";
		mass = 10;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_PortableGenerator.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_PowerDrink: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Power Drink";
		descriptionShort = "Recharge in seconds!<br/>Thirst: +95%/10s";
		picture = "\exile_assets\texture\item\Exile_Item_PowerDrink.paa";
		model = "\exile_assets\model\Exile_Item_PowerDrink.p3d";
		mass = 15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,95,10}};
			};
		};
	};
	class Exile_Item_Raisins: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Raisins";
		descriptionShort = "There is a time in life where you don't regret to eat this. <br/>Hunger: +15%/30s";
		model = "\exile_assets\model\Exile_Item_Raisins.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Raisins.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30}};
			};
		};
	};
	class Exile_Item_Rope: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rope";
		descriptionShort = "Time for some rope skipping!";
		mass = 10;
		model = "\exile_assets\model\Exile_Item_Rope.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Rope.paa";
	};
	class Exile_Item_SafeKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Safe Kit";
		descriptionShort = "Storage for the elite.";
		mass = 200;
		model = "\exile_assets\model\Exile_Container_Safe_Groundmodel.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Safe.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Sand: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bag of Sand";
		picture = "\exile_assets\texture\item\Exile_Item_Sand.paa";
		model = "\exile_assets\model\Exile_Item_Sand.p3d";
		descriptionShort = "A portable do-it-yourself sand castle";
		mass = 100;
	};
	class Exile_Item_SausageGravy: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sausage Gravy (Raw)";
		descriptionShort = "Looks like sea men <br/>Hunger +50%/25s";
		model = "\exile_assets\model\Exile_Item_SausageGravy.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SausageGravy.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,50,25}};
			};
		};
	};
	class Exile_Item_SausageGravy_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sausage Gravy (Cooked)";
		descriptionShort = "Looks like sea men <br/>Hunger +100%/20s";
		model = "\exile_assets\model\Exile_Item_SausageGravy_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SausageGravy_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_Screwdriver: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Screwdriver";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V1_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Screwdriver.paa";
		mass = 10;
	};
	class Exile_Item_SeedAstics: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Seed-Astics";
		descriptionShort = "Bird is the word. <br/>Hunger: +20%/40s";
		model = "\exile_assets\model\Exile_Item_SeedAstics.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SeedAstics.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,20,40}};
			};
		};
	};
	class Exile_Item_Shovel: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Shovel";
		descriptionShort = "";
		model = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Shovel.paa";
		mass = 30;
	};
	class Exile_Item_SleepingMat: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sleeping Mat";
		descriptionShort = "";
		model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SleepingMat.paa";
		mass = 30;
	};
	class Exile_Item_Storagecratekit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Storage Crate Kit";
		descriptionShort = "Simple storage.";
		mass = 75;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Storagecrate.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Surstromming: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Surströmming (Raw)";
		descriptionShort = "Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +55%/25s<br/>Thirst -10%/5s";
		model = "\exile_assets\model\Exile_Item_Surstromming.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Surstromming.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,55,25},{3,-10,5}};
			};
		};
	};
	class Exile_Item_Surstromming_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Surströmming (Cooked)";
		descriptionShort = "Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +100%/20s";
		model = "\exile_assets\model\Exile_Item_Surstromming_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Surstromming_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_ThermalScannerPro: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Thermal Scanner Pro";
		descriptionShort = "Prints a thermal image of a used code lock. Can only be used five times. Does not work in safe zones.";
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\A3\Structures_F\Items\Tools\MultiMeter_F.p3d";
		mass = 5;
		count = 5;
	};
	class Exile_Item_ToiletPaper: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Toilet Paper";
		picture = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
		model = "\exile_assets\model\Exile_Item_ToiletPaper.p3d";
		descriptionShort = "How do blind people know when to stop using this?";
		mass = 5;
	};
	class Exile_Item_TreasureMap: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Treasure Map";
		descriptionShort = "According to Indiana Jones, a cross never marks an important spot.";
		model = "\a3\structures_f_epb\Items\Documents\Map_altis_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_TreasureMap.paa";
		mass = 5;
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				chance = 50;
				successFunction = "ExileClient_object_treasureMap_inspect";
				successNotification = "TreasureMarkerInformation";
			};
		};
	};
	class Exile_Item_Vishpirin: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Vishpirin";
		descriptionShort = "Oestrogen Power Shot!<br/>Health: +25%/30s<br/>Instant Soberness!";
		model = "\exile_assets\model\Exile_Item_Vishpirin.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Vishpirin.paa";
		mass = 15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{0,25,30},{4,-5,0}};
			};
		};
	};
	class Exile_Item_WaterBarrelKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Water Barrel Kit";
		descriptionShort = "Can be used to re-fill your water bottles with dirty water. May taste suspicious.";
		mass = 40;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_WaterBarrel.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodDoorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Door Kit";
		descriptionShort = "A must-have for your base.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodDoorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodDoorwayKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Doorway Kit";
		descriptionShort = "A wall with a doorway, that is, without a door.";
		mass = 50;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodDoorwayKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodDrawBridgeKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Draw Bridge Kit";
		descriptionShort = "An effective construction to prevent enemy infantry from entering your base.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodFloorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Floor Kit";
		descriptionShort = "A 6x6m floor made out of wood.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodFloorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodFloorPortKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Floor Port Kit";
		descriptionShort = "A 6x6m floor made out of wood. This is a special floor with a hole in it. Place stairs inside to get to the next floor or use it was a secret escape on the bottom of your base.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodFloorPortKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodGateKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Gate Kit";
		descriptionShort = "Similar to a door, but is used for vehicles.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodGateKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodLog: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Log";
		descriptionShort = "Timber!";
		model = "exile_assets\model\Exile_Item_Woodlog.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Woodlog.paa";
		mass = 20;
	};
	class Exile_Item_WoodPlank: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Plank";
		descriptionShort = "The reason why Planking became a trend.";
		mass = 20;
		model = "\exile_assets\model\Exile_Item_WoodPlank.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodPlank.paa";
	};
	class Exile_Item_WoodStairsKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Stairs Kit";
		descriptionShort = "Since we do not have an elevator yet...";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodStairsKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodSticks: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Sticks";
		descriptionShort = "The imaginary sword of the young and innocent.";
		model = "\exile_assets\model\item\Exile_Item_WoodSticks.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodSticks.paa";
		mass = 15;
	};
	class Exile_Item_WoodSupportKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Support Kit";
		descriptionShort = "An effective way to build on not-so-flat terrain.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodSupportKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodWallHalfKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "1/2 Wood Wall Kit";
		descriptionShort = "A 6x1.5m wall made out of wood.";
		mass = 30;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodWallHalfKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodWallKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Wall Kit";
		descriptionShort = "A 6x3m wall made out of wood.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodWallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodWindowKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Window Kit";
		descriptionShort = "Offers a good position to shoot out of your base. Does not contain glass.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodWindowKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WorkBenchKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Work Bench Kit";
		descriptionShort = "Used to craft most construction items.";
		mass = 50;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WorkBenchKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Wrench: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wrench";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Wrench_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Wrench.paa";
		mass = 10;
	};
	class Exile_Item_ZipTie: HandGrenade
	{
		scope = 2;
		displayName = "Zip Tie";
		picture = "\exile_assets\texture\item\Exile_Item_ZipTie.paa";
		model = "\exile_assets\model\Exile_Item_ZipTie.p3d";
		descriptionShort = "Can be used for handcuffing and secret, super-special operations.";
		mass = 5;
	};
	class Exile_Magazine_Battery: Exile_AbstractItem
	{
		scope = 2;
		count = 100;
		displayName = "Battery";
		descriptionShort = "Used in electronic devices.";
		ammo = "Exile_Ammo_Battery";
		sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
	};
	class Exile_Magazine_Swing: Exile_AbstractItem
	{
		scope = 2;
		count = 999;
		autoReload = 1;
		flash = "";
		flashSize = 0;
		initSpeed = 85;
		maxLeadSpeed = 20;
		displayName = "Swing";
		ammo = "Exile_Ammo_Swing";
		mass = 0;
		picture = "\exile_assets\texture\item\Exile_Magazine_Swing.paa";
		sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
	};
};
class CfgMarkerClasses
{
	class ExileSpawnZone
	{
		displayName = "Exile Spawn Zone";
	};
	class ExileTraderZone
	{
		displayName = "Exile Trader Zone";
	};
	class ExilePlayer
	{
		displayName = "Exile Player";
	};
	class ExileLandVehicleSpawn
	{
		displayName = "Exile Land Vehicle Spawn";
	};
	class ExileAirVehicleSpawn
	{
		displayName = "Exile Air Vehicle Spawn";
	};
	class ExileSeaVehicleSpawn
	{
		displayName = "Exile Sea Vehicle Spawn";
	};
};
class CfgMarkers
{
	class ExileSpawnZone
	{
		scope = 0;
		name = "Exile Spawn Zone";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconparachute_ca.paa";
		color[] = {0.7,0.93,0,1};
		size = 16;
		shadow = 1;
		markerClass = "ExileSpawnZone";
	};
	class ExileTraderZone
	{
		scope = 0;
		name = "Exile Trader Zone";
		icon = "\A3\ui_f\data\map\markers\military\objective_CA.paa";
		color[] = {0.93,0,0.48,1};
		size = 16;
		shadow = 1;
		markerClass = "ExileTraderZone";
	};
	class ExilePlayer
	{
		scope = 0;
		name = "Exile Player";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconman_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExilePlayer";
	};
	class ExileSafe
	{
		scope = 0;
		name = "Exile Safe";
		icon = "exile_assets\texture\ui\map_safe_ca.paa";
		color[] = {1,0.79,0.07,1};
		size = 24;
		shadow = 0;
		markerClass = "ExileSafe";
	};
	class ExileHeart
	{
		scope = 0;
		name = "Exile Heart";
		icon = "exile_assets\texture\ui\map_heart_for_inmates_ca.paa";
		color[] = {0.93,0,0.48,1};
		size = 24;
		shadow = 0;
		markerClass = "ExileHeart";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ExileIntro
		{
			directory = "exile_client\missions\ExileIntro.VR";
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class Exile: Mod_Base
	{
		name = "Exile Mod";
		author = "Exile Mod Team";
		action = "http://www.exilemod.com";
		dir = "@Exile";
		logo = "exile_assets\texture\mod\logo.paa";
		logoOver = "exile_assets\texture\mod\logo.paa";
		logoSmall = "exile_assets\texture\mod\logo.paa";
		picture = "exile_assets\texture\mod\icon.paa";
		hidePicture = 0;
		hideName = 0;
		dlcColor[] = {0,94,0,29,0,98,1};
		version = "0.9.61";
		armaVersion = "160";
		overview = "";
		itemPrevNotifText = "";
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		GestureAxeSwing01 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureAxeSwing01[] = {"GestureAxeSwing01","Gesture"};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class CutSceneAnimationBaseSit;
		class AmovPercMstpSnonWnonDnon;
		class HubSittingChairA_idle1;
		class AmovPercMstpSrasWlnrDnon;
		class Acts_AidlPsitMstpSsurWnonDnon_loop: CutSceneAnimationBaseSit
		{
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Psit.p3d";
			head = "headDefault";
			ragdoll = 1;
			terminal = 1;
			affectedByFatigue = "false";
			canPullTrigger = 0;
			canReload = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			actions = "Acts_SittingTiedHands_actions";
			file = "\A3\Anims_F_Mark\data\anim\sdr\cts\Acts_AidlPsitMstpSsurWnonDnon_1";
			VariantsPlayer[] = {"Acts_AidlPsitMstpSsurWnonDnon01",0.2,"Acts_AidlPsitMstpSsurWnonDnon02",0.2,"Acts_AidlPsitMstpSsurWnonDnon03",0.2,"Acts_AidlPsitMstpSsurWnonDnon04",0.2,"Acts_AidlPsitMstpSsurWnonDnon05",0.2};
			VariantsAI[] = {"Acts_AidlPsitMstpSsurWnonDnon01",0.2,"Acts_AidlPsitMstpSsurWnonDnon02",0.2,"Acts_AidlPsitMstpSsurWnonDnon03",0.2,"Acts_AidlPsitMstpSsurWnonDnon04",0.2,"Acts_AidlPsitMstpSsurWnonDnon05",0.2};
			VariantAfter[] = {20,20,20};
			InterpolateTo[] = {"Acts_AidlPsitMstpSsurWnonDnon01",0.001,"Acts_AidlPsitMstpSsurWnonDnon02",0.001,"Acts_AidlPsitMstpSsurWnonDnon03",0.001,"Acts_AidlPsitMstpSsurWnonDnon04",0.001,"Acts_AidlPsitMstpSsurWnonDnon05",0.001,"Acts_AidlPsitMstpSsurWnonDnon_out",0.1,"Unconscious",0.01};
		};
		class Exile_Acts_RepairVehicle01: CutSceneAnimationBaseSit
		{
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Psit.p3d";
			head = "headDefault";
			ragdoll = 1;
			terminal = 1;
			affectedByFatigue = "false";
			canPullTrigger = 0;
			canReload = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			actions = "Acts_SittingTiedHands_actions";
			file = "A3\anims_f\data\Anim\sdr\cts\InBaseMoves_repairVehicleKnl";
			VariantsPlayer[] = {"Exile_Acts_RepairVehicle01_Animation01",0.2};
			VariantsAI[] = {"Exile_Acts_RepairVehicle01_Animation01",0.2};
			VariantAfter[] = {20,20,20};
			InterpolateTo[] = {"Exile_Acts_RepairVehicle01_Animation01",0.001,"Unconscious",0.01};
		};
		class Exile_Acts_RepairVehicle01_Animation01: Exile_Acts_RepairVehicle01
		{
			equivalentTo = "Exile_Acts_RepairVehicle01";
			speed = -25;
			VariantsPlayer[] = {};
			VariantsAI[] = {};
			interpolationSpeed = 0.5;
			InterpolateTo[] = {"Exile_Acts_RepairVehicle01",0.001,"Unconscious",0.01};
		};
	};
};
class CfgMusic
{
	class ExileTrack01
	{
		duration = 170;
		musicClass = "Lead";
		name = "Exile Track 01 - Main Theme";
		sound[] = {"exile_assets\music\track01.ogg",1,1};
	};
	class ExileTrack02
	{
		duration = 223;
		musicClass = "Lead";
		name = "Exile Track 02 - Welcome to Exile (Menu Version)";
		sound[] = {"exile_assets\music\track02.ogg",1,1};
	};
	class ExileTrack03
	{
		duration = 170;
		musicClass = "Lead";
		name = "Exile Track 03 - Welcome to Exile (Original Composition)";
		sound[] = {"exile_assets\music\track03.ogg",1,1};
	};
	class ExileTrack04
	{
		duration = 317;
		musicClass = "Calm";
		name = "Exile Track 04 - The Island (Roaming Ambience)";
		sound[] = {"exile_assets\music\track04.ogg",1,1};
	};
	class ExileTrack05
	{
		duration = 317;
		musicClass = "Calm";
		name = "Exile Track 05 - The Island Minor (Roaming Ambience)";
		sound[] = {"exile_assets\music\track05.ogg",1,1};
	};
	class ExileTrack06
	{
		duration = 115;
		musicClass = "Action";
		name = "Exile Track 06 - Lethal Force (Combat Soundtrack)";
		sound[] = {"exile_assets\music\track06.ogg",1,1};
	};
	class ExileTrack07
	{
		duration = 157;
		musicClass = "Action";
		name = "Exile Track 07 - LethalForce v2 (Combat Soundtrack)";
		sound[] = {"exile_assets\music\track07.ogg",1,1};
	};
};
class CfgNetworkMessages
{
	class startSessionRequest
	{
		module = "system_session";
		parameters[] = {"STRING"};
	};
	class startSessionResponse
	{
		module = "system_session";
		parameters[] = {"STRING"};
	};
	class updateSessionRequest
	{
		module = "system_session";
		parameters[] = {"STRING"};
	};
	class switchMoveRequest
	{
		module = "object_player";
		parameters[] = {"STRING","STRING"};
	};
	class updateStatsRequest
	{
		module = "object_player";
		parameters[] = {"STRING","STRING","SCALAR","SCALAR"};
	};
	class showFragRequest
	{
		module = "gui";
		parameters[] = {"ARRAY"};
	};
	class hasPlayerRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class hasPlayerResponse
	{
		module = "object_player";
		parameters[] = {"BOOL"};
	};
	class createPlayerRequest
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class createPlayerResponse
	{
		module = "object_player";
		parameters[] = {"OBJECT","STRING","STRING","STRING","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","STRING","SCALAR"};
	};
	class loadPlayerRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class loadPlayerResponse
	{
		module = "object_player";
		parameters[] = {"STRING","STRING","STRING","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","STRING","SCALAR","SCALAR"};
	};
	class updatePlayerIncapacitatedRequest
	{
		module = "object_player";
		parameters[] = {"BOOL"};
	};
	class savePlayerRequest
	{
		module = "object_player";
		parameters[] = {"SCALAR","SCALAR","SCALAR","SCALAR","SCALAR"};
	};
	class setPlayerMoneyRequest
	{
		module = "object_player";
		parameters[] = {"SCLAR"};
	};
	class chopTreeRequest
	{
		module = "object_tree";
		parameters[] = {"STRING"};
	};
	class chopBushRequest
	{
		module = "object_bush";
		parameters[] = {"STRING"};
	};
	class systemChatRequest
	{
		module = "gui";
		parameters[] = {"STRING"};
	};
	class advancedHintRequest
	{
		module = "gui";
		parameters[] = {"STRING"};
	};
	class standardHintRequest
	{
		module = "gui";
		parameters[] = {"STRING"};
	};
	class notificationRequest
	{
		module = "gui_notification";
		parameters[] = {"STRING","ARRAY"};
	};
	class dynamicTextRequest
	{
		module = "gui";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class resetPlayerRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class buildConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING","ARRAY"};
	};
	class payTerritoryProtectionMoneyRequest
	{
		module = "system_territory";
		parameters[] = {"STRING","SCALAR"};
	};
	class payTerritoryProtectionMoneyResponse
	{
		module = "system_territory";
		parameters[] = {"STRING","STRING"};
	};
	class buildTerritoryRequest
	{
		module = "object_construction";
		parameters[] = {"STRING","ARRAY","STRING","STRING"};
	};
	class constructionResponse
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class swapConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING","STRING","ARRAY"};
	};
	class deconstructConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class moveConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class constructionMoveResponse
	{
		module = "object_construction";
		parameters[] = {"BOOL","STRING"};
	};
	class upgradeConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"OBJECT"};
	};
	class upgradeConstructionResponse
	{
		module = "object_construction";
		parameters[] = {"OBJECT"};
	};
	class flipVehRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING"};
	};
	class pushVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class rotateVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR"};
	};
	class lockVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","BOOL"};
	};
	class lockResponse
	{
		module = "object_vehicle";
		parameters[] = {"STRING","BOOL","STRING","STRING","SCALAR"};
	};
	class spawnLootRequest
	{
		module = "system_lootManager";
		parameters[] = {"ARRAY"};
	};
	class toggleFloodLightRequest
	{
		module = "object_floodLight";
		parameters[] = {"STRING","SCALAR"};
	};
	class connectionTest
	{
		module = "object_player";
		parameters[] = {"BOOL"};
	};
	class purchaseVehicleRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","STRING"};
	};
	class purchaseVehicleResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","STRING","STRING"};
	};
	class vehicleSaveRequest
	{
		module = "system_vehicleSaveQueue";
		parameters[] = {"STRING"};
	};
	class purchaseVehicleSkinRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","ARRAY"};
	};
	class purchaseVehicleSkinResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","STRING"};
	};
	class endBambiStateRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class purchaseItemRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class purchaseItemResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","STRING","STRING","SCALAR","SCALAR","STRING"};
	};
	class sellItemRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class sellItemResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","STRING","STRING","SCALAR","SCALAR","STRING","STRING"};
	};
	class hotwireLockRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class lockToggle
	{
		module = "object_lock";
		parameters[] = {"STRING","STRING","BOOL"};
	};
	class setPin
	{
		module = "object_lock";
		parameters[] = {"STRING","STRING","STRING"};
	};
	class setPinResponse
	{
		module = "object_lock";
		parameters[] = {"ARRAY","STRING","STRING"};
	};
	class packRequest
	{
		module = "object_container";
		parameters[] = {"STRING","STRING"};
	};
	class setFuelRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR"};
	};
	class registerClanRequest
	{
		module = "system_clan";
		parameters[] = {"STRING"};
	};
	class registerClanResponse
	{
		module = "system_clan";
		parameters[] = {"SCALAR","STRING","STRING"};
	};
	class inviteToPartyRequest
	{
		module = "system_party";
		parameters[] = {"STRING"};
	};
	class joinPartyRequest
	{
		module = "system_party";
		parameters[] = {"STRING"};
	};
	class kickFromPartyRequest
	{
		module = "system_party";
		parameters[] = {"STRING"};
	};
	class announceTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING"};
	};
	class addToTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING","STRING"};
	};
	class removeFromTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING","STRING"};
	};
	class moderationTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING","STRING","BOOL"};
	};
	class sendMoneyRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","STRING"};
	};
	class moneySentRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","STRING"};
	};
	class moneyReceivedRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","STRING"};
	};
	class purchaseTerritory
	{
		module = "system_territory";
		parameters[] = {};
	};
	class purchaseTerritoryResponse
	{
		module = "system_territory";
		parameters[] = {"SCALAR"};
	};
	class requestTerritoryUpgradeDialog
	{
		module = "system_territory";
		parameters[] = {"OBJECT"};
	};
	class addLockRequest
	{
		module = "object_construction";
		parameters[] = {"OBJECT","STRING"};
	};
	class addLockResponse
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class territoryUpgradeDialogResponse
	{
		module = "gui_upgradeTerritoryDialog";
		parameters[] = {"SCALAR"};
	};
	class territoryUpgradeRequest
	{
		module = "system_territory";
		parameters[] = {"OBJECT"};
	};
	class territoryUpgradeResponse
	{
		module = "system_territory";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class deleteGroupPlz
	{
		module = "system";
		parameters[] = {"GROUP"};
	};
	class wasteDumpRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","SCALAR"};
	};
	class wasteDumpResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","STRING","STRING"};
	};
	class beginTakeAllRequest
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class beginTakeAllResponse
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class endTakeAllRequest
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class scanCodeLockRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class scanCodeLockResponse
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class enableSimulationRequest
	{
		module = "system_simulationMonitor";
		parameters[] = {"STRING"};
	};
	class attachSupplyBoxRequest
	{
		module = "object_supplyBox";
		parameters[] = {"STRING"};
	};
	class detachSupplyBoxRequest
	{
		module = "object_supplyBox";
		parameters[] = {"STRING"};
	};
	class installSupplyBoxRequest
	{
		module = "object_supplyBox";
		parameters[] = {"STRING"};
	};
	class handcuffRequest
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class handcuffResponse
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class freeRequest
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class freeResponse
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class breakFreeRequest
	{
		module = "object_handcuffs";
		parameters[] = {};
	};
	class breakFreeResponse
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class updateMyPartyMarkerRequest
	{
		module = "system_party";
		parameters[] = {"BOOL","ARRAY"};
	};
	class updatePartyMarkerRequest
	{
		module = "system_party";
		parameters[] = {"STRING","BOOL","ARRAY"};
	};
	class resetCodeRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","STRING","STRING"};
	};
	class resetCodeResponse
	{
		module = "object_vehicle";
		parameters[] = {"ARRAY","STRING","STRING"};
	};
	class rekeyVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","STRING"};
	};
	class rekeyVehicleDialogRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR"};
	};
	class rekeyVehicleDialogResponse
	{
		module = "gui_vehicleRekeyDialog";
		parameters[] = {"STRING","STRING","SCALAR"};
	};
	class resetCodeDialogRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING"};
	};
	class resetCodeDialogResponse
	{
		module = "gui_vehicleRekeyDialog";
		parameters[] = {"STRING","STRING"};
	};
};
class CfgNotifications
{
	class SafeIsLockedWarning
	{
		description = "You cannot access locked safes.";
		title = "SAFE IS LOCKED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class MaximumNumberOfTerritoriesReached
	{
		description = "Maximum number of territories reached.";
		title = "FAILED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class RepairFailedWarning
	{
		description = "%1";
		title = "REPAIR FAILED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleCustomsWarningNothingToCustomize
	{
		description = "None of your vehicles can be customized.";
		title = "NO CUSTOMS AVAILABLE";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleCustomsWarningNoVehiclesNearby
	{
		description = "Park within 50m and get in as driver first.";
		title = "VEHICLE NOT FOUND";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class ProtectionMoneyPaidInformation
	{
		description = "Protecton money paid!";
		title = "PROTECTION MONEY PAID";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class AddedToTerritoryMessage
	{
		description = "You have been added to %1!";
		title = "TO NEW LANDS";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class PartyInviteMessage
	{
		description = "<t size='0.9' font='puristaMedium' align='left'>%1</t>";
		title = "PARTY INVITE";
		iconPicture = "\exile_assets\texture\ui\enter_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class PartyCreatedMessage
	{
		description = "%1";
		title = "PARTY CREATED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class ClanRegisteredMessage
	{
		description = "<t size='1.5' font='puristaMedium' align='left'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
		title = "CLAN REGISTERED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class MoneySent
	{
		description = "<t size='1' font='puristaMedium' align='left'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /> sent to %2</t>";
		title = "POP TABS SENT";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class MoneyReceived
	{
		description = "<t size='1' font='puristaMedium' align='left'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /> received from %2</t>";
		title = "POP TABS RECEIVED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class Whoops
	{
		description = "%1";
		title = "WHOOPS";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class RestartWarning
	{
		description = "%1";
		title = "WHOOPS";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 6;
		priority = 0;
		difficulty[] = {};
	};
	class LockKickWarning
	{
		description = "<t size='0.9' font='puristaMedium' align='left'>%1</t>";
		title = "WHOOPS";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 6;
		priority = 0;
		difficulty[] = {};
	};
	class Success
	{
		description = "%1";
		title = "Success";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class ItemConsumedInformation
	{
		description = "%1";
		title = "ITEM CONSUMED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
		sound = "";
		soundClose = "";
		soundRadio = "";
	};
	class ItemCraftedInformation
	{
		description = "%1";
		title = "ITEM CRAFTED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class InventoryFullWarning
	{
		description = "Need more inventory space!";
		title = "INVENTORY FULL";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class InspectingFailedInformation
	{
		description = "Found nothing.";
		title = "ITEM INSPECTED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.82,0.82,0.82,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class TurnedIntoABushNotification
	{
		description = "Press P to get out of the bush again!";
		title = "UNDERCOVER MODE";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 10;
		priority = 0;
		difficulty[] = {};
	};
	class TreasureMarkerInformation
	{
		description = "Check your map!";
		title = "TREASURE LOCATION FOUND";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 10;
		priority = 0;
		difficulty[] = {};
	};
	class ItemPurchasedInformation
	{
		description = "<t size='1.5' font='puristaMedium' align='left'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
		title = "ITEM PURCHASED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class ItemSoldInformation
	{
		description = "<t size='1.5' font='puristaMedium' align='left'>+%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
		title = "ITEM SOLD";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 2;
		priority = 0;
		difficulty[] = {};
	};
	class ItemSoldInformationWithRespect
	{
		description = "<t size='1' font='puristaMedium' align='left'>+%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /><br/>+%2 Respect</t>";
		title = "ITEM SOLD";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class VehiclePurchasedInformation
	{
		description = "<t size='1.5' font='puristaMedium' align='left'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
		title = "VEHICLE PURCHASED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleSkinPurchasedInformation
	{
		description = "<t size='1.5' font='puristaMedium' align='left'>%1<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
		title = "PAINTWORK PURCHASED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class ConstructionPlacedInformation
	{
		description = "%1";
		title = "OBJECT PLACED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class SafePlacedInformation
	{
		description = "Pin Code is 0000";
		title = "SAFE PLACED";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class ConstructionAbortedInformation
	{
		description = "%1";
		title = "CONSTRUCTION ABORTED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.82,0.82,0.82,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class ConstructionAbortedCombat
	{
		description = "You are in combat!";
		title = "CONSTRUCTION ABORTED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class ConstructionVehicleWarning
	{
		description = "You cannot build while in a vehicle!.";
		title = "CONSTRUCTION DISALLOWED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class ConstructionSpawnZoneWarning
	{
		description = "You cannot build next to spawn zones!";
		title = "CONSTRUCTION DISALLOWED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class ConstructionTraderZoneWarning
	{
		description = "You cannot build next to trader zones!";
		title = "CONSTRUCTION DISALLOWED";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class ConstructionMovedTooFarWarning
	{
		description = "Do not move more than 20m!";
		title = "MOVED TOO FAR";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class NoMatchesWarning
	{
		description = "You need matches to light a fire!";
		title = "NO FIRE FOR YOU";
		iconPicture = "\exile_assets\texture\ui\fail_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class SafezoneEnter
	{
		description = "Entering a safezone!";
		title = "ENTERED SAFEZONE";
		iconPicture = "\exile_assets\texture\ui\enter_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class SafezoneLeave
	{
		description = "Leaving a safezone!";
		title = "LEFT SAFEZONE";
		iconPicture = "\exile_assets\texture\ui\leave_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class EarplugsOn
	{
		description = "Earplugs Inserted";
		title = "Earplugs Inserted";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class EarplugsOff
	{
		description = "Earplugs Removed";
		title = "Earplugs Removed";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleRefuled
	{
		description = "%1";
		title = "Vehicle refuled";
		iconPicture = "\exile_assets\texture\ui\leave_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleRefulingFailed
	{
		description = "No Fuel";
		title = "No Fuel";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleRefulingFailedFull
	{
		description = "Vehicle full of fuel";
		title = "Vehicle full";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleDrained
	{
		description = "%1";
		title = "Vehicle Drained";
		iconPicture = "\exile_assets\texture\ui\leave_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleDrainingFailed
	{
		description = "No Cans";
		title = "No Cans";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class VehicleDrainingFailedFuel
	{
		description = "No Fuel";
		title = "No Fuel";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.91,0,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
	class TerritoryPurchased
	{
		description = "Teritory purchased, flag added";
		title = "Territory Purchased";
		iconPicture = "\exile_assets\texture\ui\success_ca.paa";
		iconText = "";
		color[] = {0.7,0.93,0,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
};
class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class ExileServer_system_network_dispatchIncomingMessage
		{
			allowedTargets = 2;
		};
	};
	class Commands
	{
		mode = 0;
		jip = 0;
	};
};
class CfgRespawnTemplates
{
	class Exile
	{
		isCall = 1;
		onPlayerKilled = "ExileClient_object_player_event_onPlayerKilled";
		onPlayerRespawn = "ExileClient_object_player_event_onPlayerRespawn";
		respawnDelay = 30;
		respawnOnStart = 0;
		respawnButton = 1;
	};
};
class CfgSFX
{
	class Exile_Sfx_Flies
	{
		name = "Exile Flies";
		sounds[] = {"flies01"};
		flies01[] = {"\exile_assets\sound\flies.ogg",3,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,1,3,5};
	};
	class Exile_Sfx_PortableGenerator
	{
		name = "Exile Exile_Sfx_PortableGenerator";
		sounds[] = {"noise01"};
		noise01[] = {"\a3\sounds_f\ambient\objects\aircontition_5.wss",1,1,50,1,0,0,0};
		empty[] = {"",0,0,0,0,1,3,5};
	};
};
class CfgSounds
{
	class SndExileTwinkleTwisterCharge01
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_01",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterCharge02
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_02",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterCharge03
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_03",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterChargeDone01
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_done_01",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterChargeDone02
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_done_02",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterChargeDone03
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_done_03",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterSuccess
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_success",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterFail
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_fail",1,1};
		titles[] = {};
	};
	class SndXM8PowerOn
	{
		name = "";
		sound[] = {"exile_assets\sound\xm8_power_on",1,1};
		titles[] = {};
	};
	class SndXM8PowerOff
	{
		name = "";
		sound[] = {"exile_assets\sound\xm8_power_off",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatFast
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_fast.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatSlow
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_slow.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatSlowSingle
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_slow_single.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatStopping
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_stopping.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatEating01
	{
		name = "";
		sound[] = {"exile_assets\sound\eating01.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatEating02
	{
		name = "";
		sound[] = {"exile_assets\sound\eating02.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatDrinking01
	{
		name = "";
		sound[] = {"exile_assets\sound\drinking01.ogg",1,1};
		titles[] = {};
	};
	class BaDumTss
	{
		name = "";
		sound[] = {"exile_assets\sound\ba_dum_tss",10,1};
		titles[] = {};
	};
	class ExileIntro01
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro02
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_1.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro03
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro04
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_1.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro05
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_15_introduction_ADA_2.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro06
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m03\20_Lesson\boot_m03_20_lesson_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro07
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m03\75_Orders\boot_m03_75_orders_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro08
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m03\80_Get_In\boot_m03_80_get_in_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro09
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m04\65_Regroup\boot_m04_65_regroup_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro10
	{
		name = "";
		sound[] = {"\a3\sounds_f\characters\movements\bodyfallsbodyfall_concrete_3.wss",1,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Low01
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Low01.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Low02
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Low02.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Low03
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Low03.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Medium01
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Medium01.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Medium02
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Medium02.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Medium03
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Medium03.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_High01
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_High01.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_High02
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_High02.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_High03
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_High03.wss",0.5,1};
		titles[] = {};
	};
	class Exile_Sound_GasMaskBreathing01
	{
		name = "Gas Mask Breathing";
		sound[] = {"\a3\sounds_f\characters\human-sfx\diver-breath-1.wss",0.25,1};
		titles[] = {};
	};
	class Exile_Sound_GasMaskBreathing02
	{
		name = "Gas Mask Breathing";
		sound[] = {"\a3\sounds_f\characters\human-sfx\diver-breath-3.wss",0.25,1};
		titles[] = {};
	};
};
class CfgTwinkleTwister
{
	chances[] = {{30,""},{40,"FreeRound"},{70,"GloriousKnakworst"},{80,"InstaDoc"},{95,"CookingPot"},{100,"Rangefinder"}};
	class Prizes
	{
		class FreeRound
		{
			name = "100 Pop Tabs";
			symbol = "Banana";
			color = "#e4e645";
			type = 0;
			prize = 100;
		};
		class GloriousKnakworst
		{
			name = "Glorious Knakworst";
			symbol = "Strawberry";
			color = "#c90d0d";
			type = 1;
			prize = "Exile_Item_GloriousKnakworst";
		};
		class InstaDoc
		{
			name = "InstaDoc";
			symbol = "Cucumber";
			color = "#9eed3f";
			type = 1;
			prize = "Exile_Item_InstaDoc";
		};
		class CookingPot
		{
			name = "Cooking Pot";
			symbol = "Pineapple";
			color = "#e4e645";
			type = 1;
			prize = "Exile_Item_CookingPot";
		};
		class Rangefinder
		{
			name = "Rangefinder";
			symbol = "Grape";
			color = "#304bef";
			type = 1;
			prize = "Rangefinder";
		};
	};
};
class CfgUnitInsignia
{
	class ExileBrunswik
	{
		author = "Exile Mod Team";
		displayName = "Brunswik";
		texture = "\exile_assets\texture\insignia\brunswik_ca.paa";
		textureVehicle = "";
		scopeArsenal = 2;
	};
};
class CfgVehicleClasses
{
	class ExileConstructions
	{
		displayName = "Exile Constructions";
	};
	class ExileContainers
	{
		displayName = "Exile Containers";
	};
	class ExileCars
	{
		displayName = "Exile Cars";
	};
	class ExileBikes
	{
		displayName = "Exile Bikes";
	};
	class ExilePlanes
	{
		displayName = "Exile Planes";
	};
	class ExileBoats
	{
		displayName = "Exile Boats";
	};
	class ExileChoppers
	{
		displayName = "Exile Choppers";
	};
};
class UniformSlotInfo;
class SmallFire;
class DefaultEventHandlers;
class AnimationSources;
class CfgVehicles
{
	class VirtualMan_F;
	class Man;
	class NATO_Box_Base;
	class thing;
	class thingX;
	class NonStrategic;
	class FlagCarrier;
	class Land_PortableLight_single_F;
	class Land_WorkStand_F;
	class SignAd_Sponsor_F;
	class SignAd_SponsorS_F;
	class Static;
	class Headgear_Base_F;
	class ReammoBox;
	class Sound;
	class CAManBase: Man
	{
		class ViewPilot;
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class LootWeaponHolder: ReammoBox
	{
		author = "Exile Mod Team";
		displayName = "Loot Weapon Holder";
		scope = 1;
		scopeCurator = 0;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		accuracy = 0.2;
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e+009;
		transportMaxWeapons = 1e+009;
		destrType = "DestructNo";
		transportMaxBackpacks = 0;
		isGround = 1;
		icon = "iconObject_1x1";
		class TransportMagazines{};
	};
	class B_Soldier_diver_base_F;
	class I_G_engineer_F;
	class I_G_medic_F;
	class I_G_officer_F;
	class I_G_Soldier_A_F;
	class I_G_Soldier_exp_F;
	class I_G_Soldier_F;
	class I_G_Soldier_GL_F;
	class I_G_Soldier_LAT_F;
	class I_G_Soldier_lite_F;
	class I_G_Soldier_M_F;
	class I_G_Soldier_SL_F;
	class I_G_Soldier_TL_F;
	class C_man_1;
	class Civilian;
	class I_Soldier_diver_base_F;
	class O_Soldier_diver_base_F;
	class I_G_Soldier_AR_F;
	class SoldierWB: CAManBase
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class SoldierEB: CAManBase
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class SoldierGB: CAManBase
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_diver_F: B_Soldier_diver_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_engineer_F: I_G_engineer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_medic_F: I_G_medic_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_officer_F: I_G_officer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_A_F: I_G_Soldier_A_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_F: I_G_Soldier_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_M_F: I_G_Soldier_M_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_base_F: SoldierWB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_02_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_03_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_04_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_05_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_helicrew_F: B_Helipilot_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Pilot_F: B_Soldier_05_f
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_RangeMaster_F: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class b_soldier_survival_F: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Story_SF_Captain_F: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_journalist_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_Driver_1_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_1_1_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class Civilian_F: Civilian
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_hunter_1_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_p_fugitive_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_p_beggar_F: C_man_p_fugitive_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_pilot_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_w_worker_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_Marshal_F: B_RangeMaster_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_scientist_F: C_man_w_worker_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_diver_F: I_Soldier_diver_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_G_Soldier_base_F: SoldierGB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_G_Story_SF_Captain_F: B_G_Soldier_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_Soldier_base_F: SoldierGB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_officer_F: I_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_Soldier_03_F: I_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_Soldier_04_F: I_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_diver_F: O_Soldier_diver_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_engineer_F: I_G_engineer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_medic_F: I_G_medic_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_officer_F: I_G_officer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_A_F: I_G_Soldier_A_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_F: I_G_Soldier_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_M_F: I_G_Soldier_M_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_Soldier_base_F: SoldierEB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_officer_F: O_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_Soldier_02_F: O_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class Exile_Cutscene_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Guard Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions{};
		actionBegin1 = "";
		actionEnd1 = "";
	};
	class Exile_Cutscene_Player: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Player";
		uniformClass = "Exile_Uniform_BambiOverall";
		linkedItems[] = {};
		weapons[] = {};
	};
	class Exile_Cutscene_Prisoner01: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Prisoner 01";
		uniformClass = "Exile_Uniform_BambiOverall";
		linkedItems[] = {"G_Bandanna_beast"};
		weapons[] = {};
	};
	class Exile_Cutscene_Prisoner02: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Prisoner 02";
		uniformClass = "Exile_Uniform_BambiOverall";
		linkedItems[] = {"G_Sport_Blackred"};
		weapons[] = {};
	};
	class Exile_Cutscene_Pilot: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Pilot";
		uniformClass = "U_B_PilotCoveralls";
		linkedItems[] = {"H_CrewHelmetHeli_B"};
		weapons[] = {"arifle_MXC_Black_F"};
	};
	class Exile_Cutscene_Police01: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Police 01";
		uniformClass = "U_C_Journalist";
		linkedItems[] = {"V_TacVest_blk_POLICE","G_Diving","H_Watchcap_blk"};
		weapons[] = {"arifle_MXC_Black_F"};
	};
	class Exile_Cutscene_Police02: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Police 01";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_TacVest_blk_POLICE","G_Shades_Blue","H_Cap_police"};
		weapons[] = {"arifle_MXC_Black_F"};
	};
	class Exile_Guard_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Guard Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions{};
		actionBegin1 = "";
		actionEnd1 = "";
	};
	class Exile_Guard_01: Exile_Guard_Abstract
	{
		displayName = "Exile Guard 01";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_TacVest_khk","H_ShemagOpen_tan"};
		weapons[] = {"srifle_DMR_03_F"};
	};
	class Exile_Guard_02: Exile_Guard_Abstract
	{
		displayName = "Exile Guard 02";
		uniformClass = "U_BG_Guerilla1_1";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_Hat_camo"};
		weapons[] = {"arifle_Mk20_GL_F"};
	};
	class Exile_Guard_03: Exile_Guard_Abstract
	{
		displayName = "Exile Guard 03";
		uniformClass = "U_BG_Guerilla2_3";
		linkedItems[] = {"V_TacVestIR_blk","H_Bandanna_camo","G_Squares_Tinted"};
		weapons[] = {"SMG_02_F"};
	};
	class UserTexture10m_F;
	class Exile_Helper_50mBox: UserTexture10m_F
	{
		model = "\exile_assets\model\Exile_Helper_50mBox.p3d";
	};
	class Exile_Helper_175mSafeZone: UserTexture10m_F
	{
		model = "\exile_assets\model\Exile_Helper_175mSafeZone.p3d";
	};
	class Exile_Sound_Flies: Sound
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Flies Sound";
		sound = "Exile_Sfx_Flies";
	};
	class Exile_Sound_PortableGenerator: Sound
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Portable Generator Sound";
		sound = "Exile_Sfx_PortableGenerator";
	};
	class Exile_Trader_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Trader Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Trade";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show";
			};
		};
		actionBegin1 = "trade";
		actionEnd1 = "trade";
	};
	class Exile_Trader_Armory: Exile_Trader_Abstract
	{
		displayName = "Exile Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
	};
	class Exile_Trader_SpecialOperations: Exile_Trader_Abstract
	{
		displayName = "Exile Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
	};
	class Exile_Trader_Equipment: Exile_Trader_Abstract
	{
		displayName = "Exile Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
	};
	class Exile_Trader_Food: Exile_Trader_Abstract
	{
		displayName = "Exile Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
	};
	class Exile_Trader_Hardware: Exile_Trader_Abstract
	{
		displayName = "Exile Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
	};
	class Exile_Trader_Vehicle: Exile_Trader_Abstract
	{
		displayName = "Exile Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Vehicle";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_Aircraft: Exile_Trader_Abstract
	{
		displayName = "Exile Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Aircraft";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_Boat: Exile_Trader_Abstract
	{
		displayName = "Exile Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Boat";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_WasteDump: Exile_Trader_Abstract
	{
		displayName = "Exile Waste Dump Trader";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Recycle Goods";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_wasteDumpDialog_show";
			};
		};
	};
	class Exile_Trader_Office: Exile_Trader_Abstract
	{
		displayName = "Exile Office Trader";
		uniformClass = "U_I_G_resistanceLeader_F";
		linkedItems[] = {"V_Rangemaster_belt","H_Hat_brown"};
		class UserActions
		{
			class territory
			{
				displayName = "Purchase Territory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_purchaseTerritoryDialog_show";
			};
			class territoryProtectionMoney
			{
				displayName = "Pay Territory Protection Money";
				position = "ohniste";
				radius = 3;
				priority = 5;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show";
			};
		};
	};
	class Exile_Trader_VehicleCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Vehicle Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class changePin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_AircraftCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Aircraft Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_PilotHelmetFighter_B","V_RebreatherB"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_BoatCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Boat Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_CommunityCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms2: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 2";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms3: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 3";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms4: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 4";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms5: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 5";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms6: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 6";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms7: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 7";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms8: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 8";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms9: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 9";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms10: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 10";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Loot_XmasPresent_Abstract: LootWeaponHolder
	{
		model = "\exile_assets\model\Exile_Item_XmasPresent.p3d";
		hiddenSelections[] = {"bow","box"};
	};
	class Exile_Loot_XmasPresent_Blue: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.901,0.843,0.207,1,co)","\exile_assets\model\Exile_Item_XmasPresent_blue.paa"};
	};
	class Exile_Loot_XmasPresent_Gold: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.172,0.180,0.196,1,co)","\exile_assets\model\Exile_Item_XmasPresent_golden.paa"};
	};
	class Exile_Loot_XmasPresent_Green: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.725,0.945,0.964,1,co)","\exile_assets\model\Exile_Item_XmasPresent_green01.paa"};
	};
	class Exile_Loot_XmasPresent_Mint: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.305,0.564,0.062,1,co)","\exile_assets\model\Exile_Item_XmasPresent_green02.paa"};
	};
	class Exile_Loot_XmasPresent_Pink: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.929,0.815,0.890,1,co)","\exile_assets\model\Exile_Item_XmasPresent_pink.paa"};
	};
	class Exile_Loot_XmasPresent_Purple: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.862,0.505,0.792,1,co)","\exile_assets\model\Exile_Item_XmasPresent_purple.paa"};
	};
	class Exile_Loot_XmasPresent_Magenta: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.576,0.894,0.972,1,co)","\exile_assets\model\Exile_Item_XmasPresent_red01.paa"};
	};
	class Exile_Loot_XmasPresent_Red: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.9,0.9,0.9,1,co)","\exile_assets\model\Exile_Item_XmasPresent_red02.paa"};
	};
	class Exile_Construction_Abstract_Physics: thingX
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 1000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructNo";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	class Exile_Construction_Abstract_Static: NonStrategic
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 10000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructBuilding";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		exileRequiresSimulation = 0;
	};
	class Exile_Construction_BaseCamera_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "exile_assets\model\Exile_Construction_BaseCamera.p3d";
		displayName = "Base Camera (Preview)";
		class AnimationSources
		{
			class ExileCctvPitch
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class ExileCctvYaw
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
		};
	};
	class Exile_Construction_BaseCamera_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "exile_assets\model\Exile_Construction_BaseCamera.p3d";
		displayName = "Base Camera";
		exileRequiresSimulation = 1;
		class AnimationSources
		{
			class ExileCctvPitch
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class ExileCctvYaw
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
		};
	};
	class Exile_Construction_CamoTent_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\TentA_F.p3d";
		displayName = "Camo Tent";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_CampFire_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\Campfire_F.p3d";
		displayName = "Camp Fire";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_CampFire_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\Campfire_F.p3d";
		displayName = "Camp Fire";
		simulation = "fire";
		exileRequiresSimulation = 1;
		class Effects: SmallFire
		{
			class Light1
			{
				simulation = "light";
				type = "SmallFireLight";
			};
			class sound
			{
				simulation = "sound";
				type = "Fire_camp";
			};
			class Smoke1
			{
				simulation = "particles";
				type = "SmallFireS";
			};
			class Fire1: Smoke1
			{
				simulation = "particles";
				type = "SmallFireF";
			};
			class Refract1
			{
				simulation = "particles";
				type = "SmallFireFRefract";
			};
		};
		class UserActions
		{
			class lightup
			{
				displayNameDefault = "Light fire";
				displayName = "Light fire";
				position = "ohniste";
				radius = 3;
				onlyForPlayer = 0;
				condition = "!(inflamed this)";
				statement = "this call ExileClient_object_fire_inflame";
			};
			class putout
			{
				displayNameDefault = "Put out fire";
				displayName = "Put out fire";
				position = "ohniste";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(inflamed this)";
				statement = "this call ExileClient_object_fire_extinguish";
			};
		};
		actionBegin1 = "lightup";
		actionEnd1 = "lightup";
	};
	class Exile_Construction_Flag_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		displayName = "Territory Flag";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_Flag_Static: FlagCarrier
	{
		scope = 2;
		model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		displayName = "Territory Flag";
		exileRequiresSimulation = 1;
		armor = 10000;
		destrType = "DestructNo";
	};
	class Exile_Construction_FloodLight_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
		displayName = "Flood Light";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_FloodLight_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
		displayName = "Flood Light";
		exileRequiresSimulation = 1;
		destrType = "DestructTree";
		class EventHandlers
		{
			init = "(_this select 0) setHit ['light_1_hitpoint', 0.92];";
		};
		class AnimationSources
		{
			class Light_1_jaw_source
			{
				animPeriod = 2;
				initPhase = 0.13;
				source = "user";
			};
			class Light_1_pitch_source
			{
				animPeriod = "1/45";
				initPhase = 0;
				source = "user";
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,1000,1200};
				ambient[] = {10,10,12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
		};
	};
	class Exile_Construction_Laptop_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "exile_assets\model\exile_construction_laptop.p3d";
		displayName = "Base Laptop";
		class AnimationSources
		{
			class LaptopLidRotation
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
	};
	class Exile_Construction_Laptop_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "exile_assets\model\exile_construction_laptop.p3d";
		displayName = "Base Laptop";
		class AnimationSources
		{
			class LaptopLidRotation
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenLid
			{
				displayNameDefault = "<img image='exile_assets\texture\hud\hud_icon_laptop.paa' size='2'/>";
				displayName = "Open Laptop";
				position = "LaptopLid";
				priority = 0.4;
				radius = 1;
				onlyForPlayer = "true";
				condition = "this call ExileClient_gui_baseCamera_lidOpenShow";
				statement = "this animate ['LaptopLidRotation', 1]; call ExileClient_gui_interactionMenu_unhook";
			};
			class CloseLid: OpenLid
			{
				displayName = "Close Laptop";
				priority = 0.2;
				condition = "this animationPhase 'LaptopLidRotation' >= 0.5";
				statement = "this animate ['LaptopLidRotation', 0]; call ExileClient_gui_interactionMenu_unhook";
			};
		};
	};
	class Exile_Construction_MetalHedgehog_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_Hedgehog_Metal.p3d";
		displayName = "Metal Hedgehog";
	};
	class Exile_Construction_MetalHedgehog_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_Hedgehog_Metal.p3d";
		displayName = "Metal Hedgehog";
		destrType = "DestructNo";
		requiresTerritory = 0;
		canBePlacedOnRoad = 1;
	};
	class Exile_Construction_PortableGenerator_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
		displayName = "Portable Generator";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_PortableGenerator_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
		displayName = "Portable Generator";
		exileRequiresSimulation = 1;
		class EventHandlers
		{
			init = "(_this select 0) setVariable['isRunning', false];";
		};
		class UserActions
		{
			class switchOn
			{
				displayName = "Switch On";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "!(this getVariable 'isRunning')";
				statement = "this call ExileClient_object_portableGenerator_switchOn;";
			};
			class switchOff
			{
				displayName = "Switch Off";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this getVariable 'isRunning')";
				statement = "this call ExileClient_object_portableGenerator_switchOff;";
			};
		};
	};
	class Exile_Construction_Safe_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe.p3d";
		displayName = "Safe";
		exileContainer = 1;
	};
	class Exile_Construction_StorageCrate_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Storagecrate.p3d";
		displayName = "Crate";
		exileContainer = 1;
	};
	class Exile_Construction_SupplyBox_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Supply Box";
		exileContainer = 1;
	};
	class Exile_Construction_WaterBarrel_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
		displayName = "Water Barrel";
	};
	class Exile_Construction_WaterBarrel_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
		displayName = "Water Barrel";
		armor = 300;
	};
	class Exile_Construction_WoodDoorway_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway_Preview.p3d";
		displayName = "Wood Doorway";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoorway_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway_Preview.p3d";
		displayName = "Wood Doorway (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoorway_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway_Reinforced.p3d";
		displayName = "Wood Doorway (Reinforced)";
		armor = 30000;
	};
	class Exile_Construction_WoodDoorway_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway.p3d";
		displayName = "Wood Doorway";
	};
	class Exile_Construction_WoodDoor_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor_Preview.p3d";
		displayName = "Wood Door";
		hiddenSelections[] = {"Component01","Component02"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoor_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor_Preview.p3d";
		displayName = "Wood Door (Reinforced)";
		hiddenSelections[] = {"Component01","Component02"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoor_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor_Reinforced.p3d";
		displayName = "Wood Door (Reinforced)";
		ExileIsDoor = 1;
		exileIsLockable = 1;
		armor = 30000;
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorTrigger";
				priority = 0.4;
				radius = 1.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openShow";
				statement = "this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotation' >= 0.5";
				statement = "this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodDoor_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor.p3d";
		displayName = "Wood Door";
		ExileIsDoor = 1;
		exileIsLockable = 1;
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorTrigger";
				priority = 0.4;
				radius = 1.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openShow";
				statement = "this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotation' >= 0.5";
				statement = "this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodDrawBridge_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDrawBridge_Preview.p3d";
		displayName = "Wood Draw Bridge";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDrawBridge_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDrawBridge.p3d";
		displayName = "Wood Draw Bridge";
	};
	class Exile_Construction_WoodFloorPort_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloorPort_Preview.p3d";
		displayName = "Wood Floor Port";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodFloorPort_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloorPort.p3d";
		displayName = "Wood Floor Port";
	};
	class Exile_Construction_WoodFloor_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloor_Preview.p3d";
		displayName = "Wood Floor";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodFloor_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloor.p3d";
		displayName = "Wood Floor";
	};
	class Exile_Construction_WoodGate_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate_Preview.p3d";
		displayName = "Wood Gate";
		hiddenSelections[] = {"Component01","Component02","Component03","Component04"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodGate_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate_Preview.p3d";
		displayName = "Wood Gate (Reinforced)";
		hiddenSelections[] = {"Component01","Component02","Component03","Component04"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodGate_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate_Reinforced.p3d";
		displayName = "Wood Gate (Reinforced)";
		ExileIsDoor = 1;
		exileIsLockable = 1;
		armor = 30000;
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "RoadGateDoors";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorHandle";
				priority = 0.4;
				radius = 3.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openGateShow";
				statement = "this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotationLeft' >= 0.5";
				statement = "this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodGate_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate.p3d";
		displayName = "Wood Gate";
		ExileIsDoor = 1;
		exileIsLockable = 1;
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "RoadGateDoors";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorHandle";
				priority = 0.4;
				radius = 3.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openGateShow";
				statement = "this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotationLeft' >= 0.5";
				statement = "this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodStairs_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodStairs_Preview.p3d";
		displayName = "Wood Stairs";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodStairs_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodStairs.p3d";
		displayName = "Wood Stairs";
	};
	class Exile_Construction_WoodSupport_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodSupport_Preview.p3d";
		displayName = "Wood Support";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodSupport_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodSupport.p3d";
		displayName = "Wood Support";
	};
	class Exile_Construction_WoodWallHalf_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf_Preview.p3d";
		displayName = "1/2 Wood Wall";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWallHalf_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf_Preview.p3d";
		displayName = "1/2 Wood Wall (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWallHalf_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf_Reinforced.p3d";
		displayName = "1/2 Wood Wall (Reinforced)";
		armor = 30000;
	};
	class Exile_Construction_WoodWallHalf_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf.p3d";
		displayName = "1/2 Wood Wall";
	};
	class Exile_Construction_WoodWall_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall_Preview.p3d";
		displayName = "Wood Wall";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWall_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall_Preview.p3d";
		displayName = "Wood Wall (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWall_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall_Reinforced.p3d";
		displayName = "Wood Wall (Reinforced)";
		armor = 30000;
	};
	class Exile_Construction_WoodWall_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall.p3d";
		displayName = "Wood Wall";
	};
	class Exile_Construction_WoodWindow_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow_Preview.p3d";
		displayName = "Wood Window";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWindow_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow_Preview.p3d";
		displayName = "Wood Window (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWindow_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow_Reinforced.p3d";
		displayName = "Wood Window (Reinforced)";
		armor = 30000;
	};
	class Exile_Construction_WoodWindow_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow.p3d";
		displayName = "Wood Window";
	};
	class Exile_Construction_WorkBench_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\civ\constructions\WorkStand_F.p3d";
		displayName = "Work Bench";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WorkBench_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Work Bench";
		model = "\A3\Structures_F\Civ\Constructions\WorkStand_F.p3d";
	};
	class ReammoBox_F;
	class Exile_Container_Abstract: ReammoBox_F
	{
		author = "Exile Mod Team";
		scope = 1;
		vehicleClass = "Ammo";
		exileContainer = 1;
		icon = "iconCrateWpns";
		simulation = "thingX";
		exileRequiresSimulation = 0;
		maximumLoad = 500;
		armor = 1000;
		destrType = "DestructNo";
		exileIsLockable = 0;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class Exile_Container_CamoTent: Exile_Container_Abstract
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\TentA_F.p3d";
		displayName = "Camo Tent";
		destrType = "DestructTent";
		icon = "iconObject_2x3";
		maximumLoad = 500;
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class Exile_Container_Safe: Exile_Container_Abstract
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe.p3d";
		displayName = "Safe";
		destrType = "DestructNo";
		maximumLoad = 3000;
		armor = 2000;
		exileIsLockable = 1;
		simulation = "house";
	};
	class Exile_Container_Storagecrate: Exile_Container_Abstract
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Storagecrate.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "Storage Crate";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 600;
		armor = 5000;
		simulation = "house";
	};
	class Exile_Container_SupplyBox: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",""};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
	};
	class Exile_Cosmetic_MG: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Cosmetic MG";
		model = "\A3\Static_F_Gamma\HMG_01\HMG_01_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Cosmetic_UAV: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Cosmetic UAV";
		model = "\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Sign_Aircraft: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Aircraft)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Aircraft_co.paa"};
	};
	class Exile_Sign_AircraftCustoms: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Aircraft Customs)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_AircraftCustoms_co.paa"};
	};
	class Exile_Sign_AircraftCustoms_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (AircraftCustoms, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_AircraftCustoms_Small_co.paa"};
	};
	class Exile_Sign_Aircraft_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Aircraft, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Aircraft_Small_co.paa"};
	};
	class Exile_Sign_Armory: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Armory)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Armory_co.paa"};
	};
	class Exile_Sign_Armory_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Armory, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Armory_Small_co.paa"};
	};
	class Exile_Sign_Boat: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Boat)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Boat_co.paa"};
	};
	class Exile_Sign_BoatCustoms: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Boat Customs)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_BoatCustoms_co.paa"};
	};
	class Exile_Sign_BoatCustoms_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (BoatCustoms, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_BoatCustoms_Small_co.paa"};
	};
	class Exile_Sign_Boat_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Boat, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Boat_Small_co.paa"};
	};
	class Exile_Sign_Equipment: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Equipment)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Equipment_co.paa"};
	};
	class Exile_Sign_Equipment_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Equipment, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Equipment_Small_co.paa"};
	};
	class Exile_Sign_Food: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Food)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Food_co.paa"};
	};
	class Exile_Sign_Food_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Food, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Food_Small_co.paa"};
	};
	class Exile_Sign_Hardware: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Hardware)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Hardware_co.paa"};
	};
	class Exile_Sign_Hardware_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Hardware, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Hardware_Small_co.paa"};
	};
	class Exile_Sign_Office: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Office)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Office_co.paa"};
	};
	class Exile_Sign_Office_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Office, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Office_Small_co.paa"};
	};
	class Exile_Sign_SpecialOperations: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Special Operations)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_SpecialOperations_co.paa"};
	};
	class Exile_Sign_SpecialOperations_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Special Operations, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_SpecialOperations_Small_co.paa"};
	};
	class Land_Billboard_F;
	class Exile_Sign_TraderCity: Land_Billboard_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Sign (Trader City)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_TraderCity_co.paa"};
	};
	class Exile_Sign_VehicleCustoms: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicle Customs)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_VehicleCustoms_co.paa"};
	};
	class Exile_Sign_VehicleCustoms_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicle Customs, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_VehicleCustoms_Small_co.paa"};
	};
	class Exile_Sign_Vehicles: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicles)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Vehicles_co.paa"};
	};
	class Exile_Sign_Vehicles_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicles, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Vehicles_Small_co.paa"};
	};
	class Exile_Sign_WasteDump: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Waste Dump)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_WasteDump_co.paa"};
	};
	class Exile_Sign_WasteDump_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Waste Dump, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_WasteDump_Small_co.paa"};
	};
	class Exile_Unit_Abstract: C_man_w_worker_F
	{
		scope = 0;
		author = "Exile Mod Team";
		displayName = "Exile Unit Abstract";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "";
		uniformClass = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class Exile_Unit_ExileCustoms: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Customs";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "Exile_Unitform_ExileCustoms";
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_ExileCustoms_co.paa"};
	};
	class Exile_Unit_GhostPlayer: VirtualMan_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Player Slot";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
	};
	class Exile_Unit_Player: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Player";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "Exile_Uniform_BambiOverall";
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"};
	};
	class Exile_Unit_Woodland: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Woodland";
		uniformClass = "Exile_Unitform_Woodland";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
	};
	class C_Hatchback_01_F;
	class Exile_Car_Hatchback_Abstract: C_Hatchback_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Hatchback";
		fuelConsumptionRate = "0.03f";
		maximumLoad = 1300;
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Hatchback_Beige: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};
	};
	class Exile_Car_Hatchback_Green: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};
	};
	class Exile_Car_Hatchback_Blue: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};
	};
	class Exile_Car_Hatchback_BlueCustom: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Blue Custom";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};
	};
	class Exile_Car_Hatchback_BeigeCustom: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Beige Custom";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};
	};
	class Exile_Car_Hatchback_Yellow: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};
	};
	class Exile_Car_Hatchback_Grey: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Grey";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};
	};
	class Exile_Car_Hatchback_Black: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};
	};
	class Exile_Car_Hatchback_Dark: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Dark";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};
	};
	class Exile_Car_Hatchback_Rusty1: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Rusty White";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat","\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"};
	};
	class Exile_Car_Hatchback_Rusty2: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Rusty Red";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat","\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"};
	};
	class Exile_Car_Hatchback_Rusty3: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Rusty Yellow";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat","\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"};
	};
	class C_Hatchback_01_sport_F;
	class Exile_Car_Hatchback_Sport_Abstract: C_Hatchback_01_sport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Hatchback (Sport)";
		fuelConsumptionRate = "0.04f";
		maximumLoad = 1300;
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Hatchback_Sport_Red: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Blue: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Orange: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Orange";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_White: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Beige: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Green: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};
	};
	class B_Truck_01_transport_F;
	class Exile_Car_HEMMT_Abstract: B_Truck_01_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "HEMMT (Transport)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_HEMMT: Exile_Car_HEMMT_Abstract
	{
		scope = 2;
	};
	class B_MRAP_01_F;
	class Exile_Car_Hunter_Abstract: B_MRAP_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Hunter";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2200;
		armor = 200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Hunter: Exile_Car_Hunter_Abstract
	{
		scope = 2;
	};
	class O_MRAP_02_F;
	class Exile_Car_Ifrit_Abstract: O_MRAP_02_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ifrit";
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1800;
		armor = 150;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ifrit: Exile_Car_Ifrit_Abstract
	{
		scope = 2;
	};
	class Ikarus_Civ_01;
	class Exile_Car_Ikarus_Abstract: Ikarus_Civ_01
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ikarus";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ikarus\Data\sounds\d1opn_r";
		maximumLoad = 4000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ikarus_Blue: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};
	};
	class Exile_Car_Ikarus_Red: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};
	};
	class Exile_Car_Ikarus_Party: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Party";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};
	};
	class C_Kart_01_black_F;
	class Exile_Car_Kart_Abstract: C_Kart_01_black_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Kart";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Kart_BluKing: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "BluKing";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_RedStone: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "RedStone";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Vrana: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Vrana";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Green: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Blue: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Orange: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Orange";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_White: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Yellow: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Black: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Lada_Base;
	class Exile_Car_Lada_Abstract: Lada_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Lada";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maximumLoad = 1500;
		maxSpeed = 110;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Lada_Green: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};
	};
	class Exile_Car_Lada_Taxi: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Taxi";
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\Lada_red_CO.paa"};
		model = "\exile_psycho_lada\Lada_LM.p3d";
	};
	class Exile_Car_Lada_Red: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\Lada_red_CO.paa"};
	};
	class Exile_Car_Lada_White: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {};
	};
	class Exile_Car_Lada_Hipster: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Hipster";
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};
	};
	class Landrover_Civ_02;
	class Exile_Car_LandRover_Abstract: Landrover_Civ_02
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Land Rover";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lrc\data\sounds\LRover_door";
		maximumLoad = 2200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_LandRover_Red: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};
	};
	class Exile_Car_LandRover_Urban: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Urban";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};
	};
	class Exile_Car_LandRover_Green: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};
	};
	class Exile_Car_LandRover_Sand: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Sand";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class Exile_Car_LandRover_Desert: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class LR_Ambulance_Base;
	class Exile_Car_LandRover_Ambulance_Abstract: LR_Ambulance_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Land Rover (Ambulance)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lrc\data\sounds\LRover_door";
		maximumLoad = 2500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_LandRover_Ambulance_Green: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};
	};
	class Exile_Car_LandRover_Ambulance_Desert: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class Exile_Car_LandRover_Ambulance_Sand: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope = 2;
		skinName = "Sand";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class Octavia_Civ_01;
	class Exile_Car_Octavius_Abstract: Octavia_Civ_01
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Octavius";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Octavius_White: Exile_Car_Octavius_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"exile_psycho_Octavia\Data\car_body_co.paa"};
	};
	class Exile_Car_Octavius_Black: Exile_Car_Octavius_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};
	};
	class Offroad_01_civil_base_F;
	class Exile_Car_Offroad_Abstract: Offroad_01_civil_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Offroad";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Offroad_Red: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
	};
	class Exile_Car_Offroad_Beige: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
	};
	class Exile_Car_Offroad_White: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
	};
	class Exile_Car_Offroad_Blue: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
	};
	class Exile_Car_Offroad_DarkRed: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Dark Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
	};
	class Exile_Car_Offroad_BlueCustom: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Blue Custom";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla01: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla02: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla03: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla04: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla05: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla06: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla07: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla08: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla09: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 09";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla10: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 10";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla11: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 11";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla12: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 12";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
	};
	class Exile_Car_Offroad_Rusty1: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Rusty Red";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_offroad_01.rvmat","\exile_assets\model\RTV\Exile_offroad_01.rvmat"};
	};
	class Exile_Car_Offroad_Rusty2: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Rusty Blue";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_offroad_01.rvmat","\exile_assets\model\RTV\Exile_offroad_01.rvmat"};
	};
	class Exile_Car_Offroad_Rusty3: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Rusty White";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_offroad_01.rvmat","\exile_assets\model\RTV\Exile_offroad_01.rvmat"};
	};
	class I_G_Offroad_01_armed_F;
	class Exile_Car_Offroad_Armed_Abstract: I_G_Offroad_01_armed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Offroad (Armed)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1100;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Offroad_Armed_Guerilla01: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla02: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla03: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla04: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla05: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla06: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla07: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla08: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla09: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 09";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla10: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 10";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla11: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 11";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla12: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 12";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
	};
	class C_Offroad_01_repair_F;
	class Exile_Car_Offroad_Repair_Abstract: C_Offroad_01_repair_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		crew = "";
		skinName = "";
		displayName = "Offroad (Repair)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Offroad_Repair_Civillian: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Civillian";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext.rvmat","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"};
	};
	class Exile_Car_Offroad_Repair_Red: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Beige: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_White: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Blue: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_DarkRed: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Dark Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_BlueCustom: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Blue Custom";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla01: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla02: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla03: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla04: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla05: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla06: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla07: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla08: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla09: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 09";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla10: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 10";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla11: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 11";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla12: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 12";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
	};
	class TractorOld;
	class Exile_Car_OldTractor_Abstract: TractorOld
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Old Tractor";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maxSpeed = 35;
		maximumLoad = 1100;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_OldTractor_Red: Exile_Car_OldTractor_Abstract
	{
		scope = 2;
		skinName = "Red";
	};
	class I_MRAP_03_F;
	class Exile_Car_Strider_Abstract: I_MRAP_03_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Strider";
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1800;
		armor = 250;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Strider: Exile_Car_Strider_Abstract
	{
		scope = 2;
	};
	class C_SUV_01_F;
	class Exile_Car_SUV_Abstract: C_SUV_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "SUV";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_SUV_Red: Exile_Car_SUV_Abstract
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};
		skinName = "Red";
	};
	class Exile_Car_SUV_Black: Exile_Car_SUV_Abstract
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};
		skinName = "Black";
	};
	class Exile_Car_SUV_Grey: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Grey";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};
	};
	class Exile_Car_SUV_Orange: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Orange";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};
	};
	class Exile_Car_SUV_Rusty1: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Rusty White";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Suv_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Suv.rvmat","\exile_assets\model\RTV\Exile_Car_Suv.rvmat"};
	};
	class Exile_Car_SUV_Rusty2: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Rusty Dark";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Suv_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Suv.rvmat","\exile_assets\model\RTV\Exile_Car_Suv.rvmat"};
	};
	class Exile_Car_SUV_Rusty3: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Rusty Red";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Suv_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Suv.rvmat","\exile_assets\model\RTV\Exile_Car_Suv.rvmat"};
	};
	class SUV_Base;
	class Exile_Car_SUVXL_Abstract: SUV_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "SUV (Classic)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_SUV_a3\sound\SUV_ext_door";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_SUVXL_Black: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Black";
	};
	class O_Truck_03_transport_F;
	class Exile_Car_Tempest_Abstract: O_Truck_03_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Tempest (Transport)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Tempest: Exile_Car_Tempest_Abstract
	{
		scope = 2;
	};
	class TowingTractor;
	class Exile_Car_TowTractor_Abstract: TowingTractor
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Tow Tractor";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maxSpeed = 25;
		maximumLoad = 500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_TowTractor_White: Exile_Car_TowTractor_Abstract
	{
		scope = 2;
		skinName = "White";
	};
	class Tractor_Base;
	class Exile_Car_Tractor_Abstract: Tractor_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Red";
		displayName = "Tractor";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maxSpeed = 45;
		maximumLoad = 1200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Tractor_Red: Exile_Car_Tractor_Abstract
	{
		scope = 2;
		skinName = "Red";
	};
	class UAZ_Base;
	class Exile_Car_UAZ_Abstract: UAZ_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "UAZ";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_UAZ_Green: Exile_Car_UAZ_Abstract
	{
		scope = 2;
		skinName = "Green";
	};
	class UAZ_Open_Base;
	class Exile_Car_UAZ_Open_Abstract: UAZ_Open_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Green";
		displayName = "UAZ (Open)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_UAZ_Open_Green: Exile_Car_UAZ_Open_Abstract
	{
		scope = 2;
		skinName = "Green";
	};
	class Ural_RU;
	class Exile_Car_Ural_Covered_Abstract: Ural_RU
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ural (Covered)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad = 4500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ural_Covered_Blue: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Covered_Yellow: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};
	};
	class Exile_Car_Ural_Covered_Worker: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Worker";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Covered_Military: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Military";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};
	};
	class Ural_Open_RU;
	class Exile_Car_Ural_Open_Abstract: Ural_Open_RU
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ural (Open)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad = 4500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ural_Open_Blue: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Open_Yellow: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};
	};
	class Exile_Car_Ural_Open_Worker: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Worker";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Open_Military: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Military";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};
	};
	class C_Van_01_transport_F;
	class Exile_Car_Van_Abstract: C_Van_01_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Van";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Van_Black: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_White: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Red: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Guerilla01: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};
	};
	class Exile_Car_Van_Guerilla02: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};
	};
	class Exile_Car_Van_Guerilla03: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};
	};
	class Exile_Car_Van_Guerilla04: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};
	};
	class Exile_Car_Van_Guerilla05: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};
	};
	class Exile_Car_Van_Guerilla06: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};
	};
	class Exile_Car_Van_Guerilla07: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};
	};
	class Exile_Car_Van_Guerilla08: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};
	};
	class C_Van_01_box_F;
	class Exile_Car_Van_Box_Abstract: C_Van_01_box_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Van (Box)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Van_Box_Black: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Box_White: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Box_Red: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla01: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla02: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla03: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla04: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla05: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla06: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla07: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla08: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};
	};
	class C_Van_01_fuel_F;
	class Exile_Car_Van_Fuel_Abstract: C_Van_01_fuel_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Van (Fuel)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1100;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Van_Fuel_Black: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
	};
	class Exile_Car_Van_Fuel_White: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Red: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Guerilla01: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Guerilla02: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Guerilla03: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};
	};
	class volha_Base;
	class Exile_Car_Volha_Abstract: volha_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Volha";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Gaz_volha\sounds\gaz\gaz_door";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Volha_Blue: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};
	};
	class Exile_Car_Volha_White: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};
	};
	class Exile_Car_Volha_Black: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};
	};
	class I_Truck_02_transport_F;
	class Exile_Car_Zamak_Abstract: I_Truck_02_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Zamak (Transport)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Zamak: Exile_Car_Zamak_Abstract
	{
		scope = 2;
	};
	class dbo_CIV_new_bike;
	class Exile_Bike_MountainBike: dbo_CIV_new_bike
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBikes";
		displayName = "Mountain Bike";
		skinName = "";
	};
	class dbo_CIV_ol_bike;
	class Exile_Bike_OldBike: dbo_CIV_ol_bike
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBikes";
		displayName = "Old Bike";
		skinName = "";
	};
	class Quadbike_01_base_F;
	class Exile_Bike_QuadBike_Abstract: Quadbike_01_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Quad Bike";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Bike_QuadBike_Black: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
	};
	class Exile_Bike_QuadBike_Blue: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};
	};
	class Exile_Bike_QuadBike_Red: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};
	};
	class Exile_Bike_QuadBike_White: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};
	};
	class Exile_Bike_QuadBike_Nato: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "NATO";
		hiddenSelectionsTextures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
	};
	class Exile_Bike_QuadBike_Csat: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};
	};
	class Exile_Bike_QuadBike_Fia: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "FIA";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};
	};
	class Exile_Bike_QuadBike_Guerilla01: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};
	};
	class Exile_Bike_QuadBike_Guerilla02: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};
	};
	class I_Heli_light_03_unarmed_F;
	class Exile_Chopper_Hellcat_Abstract: I_Heli_light_03_unarmed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "WY-55 Hellcat";
		fuelConsumptionRate = "0.515";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2600;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Hellcat_Green: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	};
	class Exile_Chopper_Hellcat_FIA: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "FIA";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};
	};
	class UH1H_Clo;
	class Exile_Chopper_Huey_Abstract: UH1H_Clo
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "UH-1H Huey";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		driverCanEject = 1;
		maximumLoad = 2500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Huey_Green: Exile_Chopper_Huey_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class Exile_Chopper_Huey_Desert: Exile_Chopper_Huey_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class UH1H_M240;
	class Exile_Chopper_Huey_Armed_Abstract: UH1H_M240
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "UH-1H Huey (Armed)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		driverCanEject = 1;
		maximumLoad = 2500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Huey_Armed_Green: Exile_Chopper_Huey_Armed_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class Exile_Chopper_Huey_Armed_Desert: Exile_Chopper_Huey_Armed_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class B_Heli_Light_01_F;
	class Exile_Chopper_Hummingbird_Abstract: B_Heli_Light_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MH-9 Hummingbird";
		fuelConsumptionRate = "0.0966";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Hummingbird_Green: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Green";
	};
	class C_Heli_Light_01_civil_F;
	class Exile_Chopper_Hummingbird_Civillian_Abstract: C_Heli_Light_01_civil_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "M-900 (Civillian)";
		fuelConsumptionRate = "0.0966";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Hummingbird_Civillian_Blue: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Red: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_ION: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "ION";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_BlueLine: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Blue Line";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Digital: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Digital";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Elliptical: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Elliptical";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Furious: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Furious";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Gray Watcher";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Jeans: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Jeans";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Light: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Light";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Shadow: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Shadow";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sheriff: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Sheriff";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Speedy: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Speedy";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sunset: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Sunset";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Vrana: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Vrana";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wasp: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Wasp";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wave: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Wave";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};
	};
	class B_Heli_Transport_03_unarmed_F;
	class Exile_Chopper_Huron_Abstract: B_Heli_Transport_03_unarmed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "CH-67 Huron";
		fuelConsumptionRate = "0.378";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 6000;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Huron_Black: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};
	};
	class Exile_Chopper_Huron_Green: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};
	};
	class I_Heli_Transport_02_F;
	class Exile_Chopper_Mohawk_Abstract: I_Heli_Transport_02_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "CH-49 Mohawk";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4800;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Mohawk_FIA: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "FIA";
	};
	class O_Heli_Light_02_unarmed_F;
	class Exile_Chopper_Orca_Abstract: O_Heli_Light_02_unarmed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "PO-30 Orca";
		fuelConsumptionRate = "0.33";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4600;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Orca_CSAT: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
	};
	class Exile_Chopper_Orca_Black: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	};
	class Exile_Chopper_Orca_BlackCustom: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Black Custom";
		hiddenSelectionsTextures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};
	};
	class O_Heli_Transport_04_bench_F;
	class Exile_Chopper_Taru_Abstract: O_Heli_Transport_04_bench_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MI-280 Taru";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3200;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Taru_CSAT: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};
	};
	class Exile_Chopper_Taru_Black: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};
	};
	class O_Heli_Transport_04_covered_black_F;
	class Exile_Chopper_Taru_Covered_Abstract: O_Heli_Transport_04_covered_black_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MI-280 Taru (Covered)";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4300;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Taru_Covered_CSAT: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};
	};
	class Exile_Chopper_Taru_Covered_Black: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
	};
	class O_Heli_Transport_04_F;
	class Exile_Chopper_Taru_Transport_Abstract: O_Heli_Transport_04_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MI-280 Taru (Transport)";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1100;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Taru_Transport_CSAT: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};
	};
	class Exile_Chopper_Taru_Transport_Black: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};
	};
	class Boat_Civil_01_base_F;
	class Exile_Boat_MotorBoat_Abstract: Boat_Civil_01_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Motor Boat";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_MotorBoat_Police: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Police";
		displayName = "Motor Boat (Police)";
		class AnimationSources: AnimationSources
		{
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Beacons
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class Eventhandlers: EventHandlers
		{
			init = "_this select 0 animate [""HidePoliceSigns"",0]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",0];";
		};
		class UserActions
		{
			class beacons_start
			{
				userActionID = 50;
				displayName = "$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault = "$STR_A3_CfgVehicles_beacons_on";
				position = "mph_axis";
				priority = 1.5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase ""BeaconsStart"" < 0.5 AND Alive(this) AND driver this == player";
				statement = "this animate [""BeaconsStart"",1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID = 51;
				displayName = "$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault = "$STR_A3_CfgVehicles_beacons_off";
				condition = "this animationPhase ""BeaconsStart"" > 0.5 AND Alive(this) AND driver this == player";
				statement = "this animate [""BeaconsStart"",0];";
			};
		};
		hiddenSelectionsTextures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
		textureList[] = {"police",1};
		animationList[] = {"hidePolice",0,"HideRescueSigns",1,"HidePoliceSigns",0};
	};
	class Exile_Boat_MotorBoat_Orange: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Orange";
		displayName = "Motor Boat (Orange)";
		hiddenSelectionsTextures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};
	};
	class Exile_Boat_MotorBoat_White: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "White";
		displayName = "Motor Boat (White)";
		textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class C_Rubberboat;
	class Exile_Boat_RubberDuck_Abstract: C_Rubberboat
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Rubber Duck";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_RubberDuck_CSAT: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		displayName = "Rubber Duck (CSAT)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Digital: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Digital";
		displayName = "Rubber Duck (Digital)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Orange: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Orange";
		displayName = "Rubber Duck (Orange)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Blue: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Blue";
		displayName = "Rubber Duck (Blue)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Black: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Black";
		displayName = "Rubber Duck (Black)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};
	};
	class SDV_01_base_F;
	class Exile_Boat_SDV_Abstract: SDV_01_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "SDV";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_SDV_CSAT: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		displayName = "SDV (CSAT)";
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};
	};
	class Exile_Boat_SDV_Digital: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Digital";
		displayName = "SDV (Digital)";
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};
	};
	class Exile_Boat_SDV_Grey: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Grey";
		displayName = "SDV (Grey)";
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};
	};
	class GNT_C185;
	class Exile_Plane_Cessna: GNT_C185
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExilePlanes";
		displayName = "Cessna 185 Skywagon";
		skinName = "";
		fuelExplosionPower = 3;
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		class TransportItems{};
	};
	class Exile_Casino_TwinkleTwister: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Twinkle Twister";
		model = "\exile_assets\model\Exile_Test_OAB.p3d";
		destrType = "DestructNo";
		class EventHandlers
		{
			init = "";
		};
		class AnimationSources
		{
			class RotorLeft
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class RotorMiddle
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class RotorRight
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class Light01
			{
				source = "MarkerLight";
				markerLight = "Light01";
			};
		};
		class MarkerLights
		{
			class Light01
			{
				color[] = {1,0,0};
				ambient[] = {0.01,0,0};
				intensity = 1000;
				name = "Light01";
				useFlare = 1;
				flareSize = 1.7;
				flareMaxDistance = 2000;
				activeLight = 0;
				dayLight = 1;
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				class Attenuation
				{
					start = 0;
					constant = 10;
					linear = 6;
					quadratic = 4;
					hardLimitStart = 12;
					hardLimitEnd = 15;
				};
			};
		};
		class UserActions
		{
			class play
			{
				displayName = "Play";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_object_twinkleTwister_play";
			};
		};
	};
	class Exile_Plant_GreenBush: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_FicusC1s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush2: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_ficusC2d_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush3: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_FicusC2s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_BrownBush: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Brown)";
		model = "\A3\plants_f\Bush\b_NeriumO2d_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush5: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_NeriumO2s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush6: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_ArundoD2s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush7: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_ArundoD3s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush8: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_Thistle_Thorn_Green.p3d";
		destrType = "DestructNo";
	};
	class Exile_Effect_Abstract: thing
	{
		author = "Exile Mod Team";
		scope = 1;
		side = 2;
		animated = 0;
		faction = "None";
		vehicleClass = "Emitters";
		simulation = "thing";
		icon = "iconExplosiveAP";
		mapSize = 1;
		displayName = "Exile Effect";
		picture = "\A3\weapons_f\ammoBoxes\data\ui\map_AmmoBox_F_CA.paa";
		model = "\A3\Weapons_F\empty.p3d";
		class Eventhandlers
		{
			init = "";
			killed = "";
		};
	};
	class Exile_Effect_Flies: Exile_Effect_Abstract
	{
		displayName = "Exile Flies Effect";
		class Eventhandlers
		{
			init = "(_this select 0) call ExileClient_object_flies_event_onInit";
			killed = "(_this select 0) call ExileClient_object_flies_event_onKilled";
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class Item_Base_F;
	class InventoryItem_Base_F;
	class SlotInfo;
	class GunParticles;
	class Rifle;
	class Pistol;
	class TruckHorn;
	class H_Cap_red;
	class Vest_Camo_Base;
	class VestItem;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class Uniform_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_Player";
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class arifle_MX_Base_F;
	class MMG_01_base_F;
	class MMG_02_base_F;
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_01_hex_F: MMG_01_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_01_tan_F: MMG_01_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_02_camo_F: MMG_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_02_black_F: MMG_02_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_02_sand_F: MMG_02_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] = {"HandGrenade_Stone","HandGrenadeMuzzle","MiniGrenadeMuzzle","SmokeShellMuzzle","SmokeShellYellowMuzzle","SmokeShellGreenMuzzle","SmokeShellRedMuzzle","SmokeShellPurpleMuzzle","SmokeShellOrangeMuzzle","SmokeShellBlueMuzzle","ChemlightGreenMuzzle","ChemlightRedMuzzle","ChemlightYellowMuzzle","ChemlightBlueMuzzle","IRGrenade","Exile_Item_ZipTie"};
		class ThrowMuzzle;
		class Exile_Item_ZipTie: ThrowMuzzle
		{
			magazines[] = {"Exile_Item_ZipTie"};
		};
	};
	class InventoryOpticsItem_Base_F;
	class optic_Nightstalker: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NCTALKEP
				{
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
	class Exile_Cap_Exile: H_Cap_red
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Cap (Exile)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_press_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPC\Civil\Data\Headgear_capb_press_co.paa"};
	};
	class Exile_Headgear_GasMask: ItemCore
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Gas Mask";
		descriptionShort = "No Armor";
		picture = "\exile_assets\texture\item\Exile_Clothing_Gasmask.paa";
		model = "\exile_assets\model\Exile_Clothing_Gasmask_World.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		weaponPoolAvailable = 1;
		simulation = "Weapon";
		optics = 0;
		useModelOptics = 0;
		class ItemInfo
		{
			hmdType = 0;
			mass = 60;
			modelOff = "\exile_assets\model\Exile_Clothing_Gasmask.p3d";
			type = 616;
			uniformModel = "\exile_assets\model\Exile_Clothing_Gasmask.p3d";
		};
	};
	class Exile_Headgear_SantaHat: ItemCore
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Santa Hat";
		descriptionShort = "No Armor";
		picture = "\exile_assets\texture\item\Exile_Clothing_Santahat.paa";
		model = "\exile_assets\model\Exile_Clothing_Santahat.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		weaponPoolAvailable = 1;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\exile_assets\model\Exile_Clothing_Santahat.p3d";
			modelSides[] = {2};
			armor = 0;
			passThrough = 0.8;
		};
	};
	class Exile_Horn_Abstract: TruckHorn
	{
		scope = 1;
		author = "Exile Mod Team";
		displayName = "Exile Horn Base";
	};
	class Exile_Horn_01: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 01";
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_1",1,1,200};
	};
	class Exile_Horn_02: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 02";
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_2",1,1,200};
	};
	class Exile_Horn_03: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 03";
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",1,1,200};
	};
	class Exile_Horn_04: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 04";
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",1,1,200};
	};
	class Exile_Horn_05: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 05";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_1",1,1,200};
	};
	class Exile_Horn_06: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 06";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_2",1,1,200};
	};
	class Exile_Horn_07: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 07";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_3",1,1,200};
	};
	class Exile_Horn_08: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 08";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_4",1,1,200};
	};
	class ItemWatch;
	class Exile_Item_XM8: ItemWatch
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "XM8";
		descriptionShort = "Your personal assistant in Exile.";
		model = "\exile_assets\model\Dummy.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_XM8.paa";
	};
	class Exile_Melee_Abstract: Rifle
	{
		scope = 1;
		author = "Exile Mod Team";
		displayName = "Dummy";
		descriptionShort = "Dummy";
		type = 4;
		optics = 0;
		primary = 0;
		model = "\exile_assets\model\Dummy.p3d";
		picture = "\exile_assets\texture\item\Dummy.paa";
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		autoreload = 1;
		canDrop = 1;
		distanceZoomMin = 2;
		distanceZoomMax = 2;
		drySound[] = {"",0,1,20};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		isFakeWeapon = 0;
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 1;
		midRangeProbab = 1.5;
		maxRange = 2;
		maxRangeProbab = 2;
		handAnim[] = {"OFP2_ManSkeleton","\exile_assets\animation\Exile_Axe_Idle01.rtm"};
		modelOptics = "-";
		magazines[] = {"Exile_Magazine_Swing"};
		recoil = "recoil_pistol_heavy";
		recoilProne = "recoil_prone_pistol_heavy";
		reloadAction = "GestureReloadPistolHeavy02";
		reloadMagazineSound[] = {"",1};
		reloadTime = 1;
		closure1[] = {"",1};
		soundClosure[] = {"closure1",1};
		weaponInfoType = "RscWeaponEmpty";
		weaponReloadtime = 1;
		weaponSoundEffect = "DefaultRifle";
		modes[] = {"Hack"};
		craterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		class Hack: Mode_FullAuto
		{
			burst = 0;
			autoFire = 1;
			flashSize = 0;
			dispersion = 0;
			sounds[] = {"StandardSound"};
			minRange = 0.5;
			minRangeProbab = 0.8;
			midRange = 1;
			midRangeProbab = 1.5;
			maxRange = 2;
			maxRangeProbab = 2;
			reloadTime = 0.7;
			class StandardSound
			{
				begin1[] = {"\exile_assets\sound\swoosh01.ogg","db3",1,100};
				begin2[] = {"\exile_assets\sound\swoosh02.ogg","db3",1,100};
				closure1[] = {"",1};
				soundBegin[] = {"begin1",1,"begin2",1};
				soundClosure[] = {"closure1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Library
		{
			libTextDesc = "Long Description";
		};
	};
	class Exile_Melee_Axe: Exile_Melee_Abstract
	{
		scope = 2;
		_generalMacro = "Exile_Melee_Axe";
		model = "\exile_assets\model\Exile_Melee_Axe.p3d";
		displayName = "Axe";
		descriptionShort = "An old-fashioned tool used to chop wood.";
		picture = "\exile_assets\texture\item\Exile_Item_Axe.paa";
		class WeaponSlotsInfo
		{
			mass = 35;
		};
	};
	class Exile_Uniform_BambiOverall: Uniform_Base
	{
		scope = 2;
		displayName = "Bambi Overall";
		author = "Exile Mod Team";
		picture = "\exile_assets\texture\item\Exile_Uniform_BambiOverall.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\characters_F\common\coveralls.p3d";
			uniformClass = "Exile_Unit_Player";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class Exile_Uniform_ExileCustoms: Uniform_Base
	{
		scope = 2;
		displayName = "Exile Customs";
		author = "Exile Mod Team";
		picture = "\exile_assets\texture\item\Exile_Uniform_BambiOverall.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_ExileCustoms_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_ExileCustoms";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class Exile_Uniform_Woodland: Uniform_Base
	{
		scope = 2;
		displayName = "Exile Woodland";
		author = "Exile Mod Team";
		picture = "\exile_assets\texture\item\Exile_Uniform_Woodland.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_Woodland_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_Woodland";
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class Exile_Vest_Snow: Vest_Camo_Base
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Snow Vest";
		descriptionShort = "Armor Level IV";
		picture = "\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\texture\item\Exile_Clothing_SnowVest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 100;
			hiddenSelections[] = {"camo"};
			overlaySelctionsInfo[] = {"Ghillie_hide"};
			type = 701;
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor = 20;
					hipointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body
				{
					hipointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest
				{
					armor = 20;
					hipointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm
				{
					armor = 20;
					hipointName = "HitDiaphragm";
					passThrough = 0.2;
				};
			};
		};
	};
};
class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[] = {"ExileIntro"};
	};
	class Stratis: CAWorld
	{
		cutscenes[] = {"ExileIntro"};
	};
	class VR: CAWorld
	{
		cutscenes[] = {"ExileIntro"};
	};
	initWorld = "VR";
	demoWorld = "VR";
};
class CfgXM8
{
	class apps
	{
		controlID = 4040;
		title = "XM8";
	};
	class players
	{
		controlID = 4110;
		title = "8G Network";
	};
	class clan
	{
		controlID = 4060;
		title = "Clan";
	};
	class settings
	{
		controlID = 4070;
		title = "Settings";
	};
	class hostParty
	{
		controlID = 4080;
		title = "Host Party";
	};
	class party
	{
		controlID = 4100;
		title = "Party";
	};
	class server
	{
		controlID = 4090;
		title = "Server Rules";
	};
	class healthScanner
	{
		controlID = 4120;
		title = "Health Scanner";
	};
	class territory
	{
		controlID = 4130;
		title = "Territory";
	};
};
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscVehicleToggles;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscPictureButton: RscActivePicture
{
	color[] = {1,1,1,0.7};
	tooltip = "";
	text = "";
	action = "";
	style = 2096;
};
class RscPictureMenuButton: RscButtonMenu
{
	style = 2;
};
class RscExileItemListBox: RscListBox
{
	sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx2 = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	rowHeight = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	canDrag = 0;
	itemSpacing = 0.001;
	period = 1.2;
	shadow = 0;
	maxHistoryDelay = 1;
	fade = 0;
	deletable = 0;
	type = 5;
	style = 16;
	colorBackground[] = {0,0,0,0.3};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorPictureSelected[] = {1,1,1,1};
	colorScrollbar[] = {1,0,0,0};
	colorSelect2[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectRight[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	colorTextRight[] = {1,1,1,1};
	disabledCtrlColor[] = {1,1,1,0.5};
	itemBackground[] = {1,1,1,0.1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
};
class RscChatListDefault
{
	shadow = 1;
	shadowPlayer = 0;
	shadowColor[] = {0,0,0,0.5};
	x = "safeZoneX + 60 * pixelW";
	y = "(safeZoneY + safeZoneH) - 140 * pixelH - 40 * pixelH";
	w = "320 * pixelW";
	h = "400 * pixelH";
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "((5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))+ 0.3*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	colorBackground[] = {0,0,0,0.3};
	colorGlobalChannel[] = {"0.606*1.4","0.606*1.4","0.606*1.4",1};
	colorGlobalChannelPlayerBackground[] = {"0.606*1.4","0.606*1.4","0.606*1.4",0.5};
	colorGlobalChannelPlayerText[] = {0,0,0,1};
	colorSideChannel[] = {"0.196*1.4","0.592*1.4","0.706*1.4",1};
	colorSideChannelPlayerBackground[] = {"0.196*1.4","0.592*1.4","0.706*1.4",0.5};
	colorSideChannelPlayerText[] = {0,0,0,1};
	colorCommandChannel[] = {"0.8275*1.4","0.8196*1.4","0.1961*1.4",1};
	colorCommandChannelPlayerBackground[] = {"0.8275*1.4","0.8196*1.4","0.1961*1.4",0.5};
	colorCommandChannelPlayerText[] = {0,0,0,1};
	colorGroupChannel[] = {0.709,0.972,0.384,1};
	colorGroupChannelPlayerBackground[] = {0.709,0.972,0.384,0.5};
	colorGroupChannelPlayerText[] = {0,0,0,1};
	colorVehicleChannel[] = {"0.863*1.4","0.584*1.4","0.0*1.4",1};
	colorVehicleChannelPlayerBackground[] = {"0.863*1.4","0.584*1.4","0.0*1.4",0.5};
	colorVehicleChannelPlayerText[] = {0,0,0,1};
	colorDirectChannel[] = {1,1,1,1};
	colorDirectChannelPlayerBackground[] = {1,1,1,0.5};
	colorDirectChannelPlayerText[] = {0,0,0,1};
	colorPlayerChannel[] = {0.8,0.7,1,1};
	colorPlayerChannelPlayerBackground[] = {0.8,0.7,1,0.5};
	colorPlayerChannelPlayerText[] = {0,0,0,1};
	colorMessage[] = {1,1,1,1};
	colorMessageProtocol[] = {0.65,0.65,0.65,1};
};
class RscChatListMission: RscChatListDefault
{
	colorBackground[] = {0,0,0,0.3};
	x = "safeZoneX + 60 * pixelW";
	y = "(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w = "(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListBriefing: RscChatListDefault
{
	x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
	y = "14.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
	w = "(18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
	h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(SafezoneH - (17.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListMap: RscChatListDefault
{
	x = "safeZoneX + 60 * pixelW";
	y = "(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w = "(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscDisplayChannel
{
	idd = 63;
	class controls
	{
		delete Channel;
		class CA_Channel: RscText
		{
			idc = 101;
			style = 0;
			x = "safeZoneX + 60 * pixelW + 10 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "155 * pixelW - 10 * pixelW";
			h = "30 * pixelH";
			colorBackground[] = {0,0,0,0};
			sizeEx = "18 * pixelH";
		};
		class Background: RscText
		{
			x = "safeZoneX + 60 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "155 * pixelW";
			h = "30 * pixelH";
			colorBackground[] = {"19/255","22/255","27/255",0.8};
		};
		class Picture: RscPicture
		{
			idc = 102;
			x = -10.01;
			y = 0.72;
			w = 0.03;
			h = 0.05;
		};
	};
};
class RscDisplayChat
{
	class controls
	{
		delete Line;
		delete Background;
		class CA_Background: RscText
		{
			x = "safeZoneX + 215 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "400 * pixelW";
			h = "30 * pixelH";
			colorBackground[] = {"19/255","22/255","27/255",0.5};
			colorText[] = {0,0,0,0};
		};
		class CA_Line: RscEdit
		{
			idc = 101;
			x = "safeZoneX + 215 * pixelW + 10 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "400 * pixelW - 20 * pixelW";
			h = "30 * pixelH";
			sizeEx = "25 * pixelH";
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			autocomplete = "general";
			style = "0x00 + 0x200";
		};
	};
};
class RscDisplayClientGetReady: RscDisplayGetReady
{
	onLoad = "missionNamespace setVariable ['ExileClientServerIsInitializing', true]; ctrlActivate ((_this select 0) displayCtrl 1); (_this select 0) closeDisplay 1";
};
class RscDisplayDebriefing: RscStandardDisplay
{
	onLoad = "(_this select 0) closeDisplay 0";
};
class RscDisplayInventory
{
	scriptName = "RscDisplayInventory";
	scriptPath = "IGUI";
	onLoad = "[""onLoad"",_this,""RscDisplayInventory"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn ExileClient_gui_inventory_event_onLoad";
	onUnload = "[""onUnload"",_this,""RscDisplayInventory"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	idd = 602;
	enableSimulation = 1;
	class Colors
	{
		dragValidBgr[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
		dragInvalidBgr[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		dragValidBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",0.5};
		dragInvalidBar[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		progressBar[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
		progressBarBgr[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.75};
		highlight[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
	};
	class controlsBackground{};
	class controls
	{
		delete Background;
		delete Title;
		delete ButtonOK;
		delete ButtonCancel;
		class ExileButtonBar: RscText
		{
			idc = 20000;
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			y = "24.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class ExileButtonTakeAll: RscButtonMenu
		{
			idc = 20001;
			text = "TAKE ALL";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			y = "25.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			onMouseButtonDown = "call ExileClient_gui_inventory_takeAll";
		};
		class ExileButtonCombineMags: RscButtonMenu
		{
			idc = 20002;
			text = "COMBINE MAGS";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			y = "25.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			onMouseButtonDown = "call ExileClient_gui_inventory_combineMagazines";
		};
		class CA_ContainerBackground: RscText
		{
			idc = 1001;
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class CA_PlayerBackground: RscText
		{
			idc = 1002;
			x = "14.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "24.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TitleBackground: RscText
		{
			idc = 1020;
			x = "14.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "24.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class PlayersName: RscText
		{
			idc = 111;
			text = "$STR_DIARY_PLAYER_NAME";
			x = "15.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class RankBackground: RscText
		{
			idc = 1014;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "0.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1,1,1,0.2};
		};
		class RankPicture: RscPicture
		{
			idc = 1203;
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "0.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonBack: RscActiveText
		{
			idc = 2;
			style = 48;
			color[] = {1,1,1,0.7};
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "$STR_DISP_CLOSE";
		};
		class BackgroundSlotPrimary: RscPicture
		{
			idc = 1242;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotPrimaryMuzzle: BackgroundSlotPrimary
		{
			idc = 1243;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotPrimaryUnderBarrel: BackgroundSlotPrimary
		{
			idc = 1200;
			x = "28.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotPrimaryFlashlight: BackgroundSlotPrimary
		{
			idc = 1244;
			x = "30.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotPrimaryOptics: BackgroundSlotPrimary
		{
			idc = 1245;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotPrimaryMagazineGL: BackgroundSlotPrimary
		{
			idc = 1267;
			x = "34.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotPrimaryMagazine: BackgroundSlotPrimary
		{
			idc = 1246;
			x = "36.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotSecondary: BackgroundSlotPrimary
		{
			idc = 1247;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotSecondaryMuzzle: BackgroundSlotPrimary
		{
			idc = 1248;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotSecondaryUnderBarrel: BackgroundSlotPrimary
		{
			idc = 1266;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotSecondaryFlashlight: BackgroundSlotPrimary
		{
			idc = 1249;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotSecondaryOptics: BackgroundSlotPrimary
		{
			idc = 1250;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotSecondaryMagazine: BackgroundSlotPrimary
		{
			idc = 1251;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHandgun: BackgroundSlotPrimary
		{
			idc = 1252;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "17 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHandgunMuzzle: BackgroundSlotPrimary
		{
			idc = 1253;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHandgunUnderBarrel: BackgroundSlotPrimary
		{
			idc = 1268;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHandgunFlashlight: BackgroundSlotPrimary
		{
			idc = 1254;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHandgunOptics: BackgroundSlotPrimary
		{
			idc = 1255;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHandgunMagazine: BackgroundSlotPrimary
		{
			idc = 1256;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHeadgear: BackgroundSlotPrimary
		{
			idc = 1257;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotGoggles: BackgroundSlotPrimary
		{
			idc = 1258;
			x = "29.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotHMD: BackgroundSlotPrimary
		{
			idc = 1259;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotBinoculars: BackgroundSlotPrimary
		{
			idc = 1260;
			x = "35.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotMap: BackgroundSlotPrimary
		{
			idc = 1261;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotGPS: BackgroundSlotPrimary
		{
			idc = 1262;
			x = "17.32 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotCompass: BackgroundSlotPrimary
		{
			idc = 1263;
			x = "21.76 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotRadio: BackgroundSlotPrimary
		{
			idc = 1264;
			x = "19.54 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundSlotWatch: BackgroundSlotPrimary
		{
			idc = 1265;
			x = "23.98 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ExternalContainerBackground: RscPicture
		{
			colorText[] = {1,1,1,0.1};
			idc = 1240;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class PlayerContainerBackground: ExternalContainerBackground
		{
			idc = 1241;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "14 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundTab: RscActiveText
		{
			idc = 6321;
			colorBackgroundSelected[] = {1,1,1,1};
			colorFocused[] = {1,1,1,0};
			soundDoubleClick[] = {"",0.1,1};
			color[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SoldierTab: GroundTab
		{
			idc = 6401;
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundContainer: RscListBox
		{
			class DLCTemplate: RscDisplayInventory_DLCTemplate
			{
				class Controls;
			};
			idc = 632;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx2 = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			itemBackground[] = {1,1,1,0.1};
			itemSpacing = 0.001;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SoldierContainer: GroundContainer
		{
			idc = 640;
		};
		class GroundFilter: RscCombo
		{
			idc = 6554;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundLoad: RscProgress
		{
			idc = 6307;
			texture = "";
			textureExt = "";
			colorBar[] = {0.9,0.9,0.9,0.9};
			colorExtBar[] = {1,1,1,1};
			colorFrame[] = {1,1,1,1};
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SlotPrimary: GroundTab
		{
			class DLCTemplate: RscDisplayInventory_DLCTemplate
			{
				class Controls;
			};
			idc = 610;
			style = "0x30 + 0x800";
			color[] = {1,1,1,1};
			colorBackground[] = {1,1,1,0.1};
			colorBackgroundSelected[] = {1,1,1,0.1};
			colorFocused[] = {0,0,0,0};
			canDrag = 1;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
			onMouseButtonDblClick = "_this call ExileClient_gui_inventory_event_onSlotDoubleClick";
		};
		class SlotPrimaryMuzzle: SlotPrimary
		{
			idc = 620;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotPrimaryUnderBarrel: SlotPrimary
		{
			idc = 641;
			x = "28.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotPrimaryFlashlight: SlotPrimary
		{
			idc = 622;
			x = "30.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotPrimaryOptics: SlotPrimary
		{
			idc = 621;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotPrimaryMagazineGL: SlotPrimary
		{
			idc = 644;
			x = "34.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotPrimaryMagazine: SlotPrimary
		{
			idc = 623;
			x = "36.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotSecondary: SlotPrimary
		{
			idc = 611;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotSecondaryMuzzle: SlotPrimary
		{
			idc = 624;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotSecondaryUnderBarrel: SlotPrimary
		{
			idc = 642;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.59 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotSecondaryFlashlight: SlotPrimary
		{
			idc = 626;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotSecondaryOptics: SlotPrimary
		{
			idc = 625;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotSecondaryMagazine: SlotPrimary
		{
			idc = 627;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHandgun: SlotPrimary
		{
			idc = 612;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "17 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHandgunMuzzle: SlotPrimary
		{
			idc = 628;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHandgunUnderBarrel: SlotPrimary
		{
			idc = 643;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHandgunFlashlight: SlotPrimary
		{
			idc = 630;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHandgunOptics: SlotPrimary
		{
			idc = 629;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHandgunMagazine: SlotPrimary
		{
			idc = 631;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHeadgear: SlotPrimary
		{
			idc = 6240;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotGoggles: SlotPrimary
		{
			idc = 6216;
			x = "29.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotHMD: SlotPrimary
		{
			idc = 6217;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotBinoculars: SlotPrimary
		{
			idc = 6238;
			x = "35.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotMap: SlotPrimary
		{
			idc = 6211;
			x = "15.16 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotGPS: SlotPrimary
		{
			idc = 6215;
			x = "17.38 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotCompass: SlotPrimary
		{
			idc = 6212;
			x = "21.82 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotRadio: SlotPrimary
		{
			idc = 6214;
			x = "19.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class SlotWatch: SlotPrimary
		{
			idc = 6213;
			x = "24.04 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class UniformTab: GroundTab
		{
			idc = 6332;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1,1,1,0.5};
		};
		class UniformSlot: SlotPrimary
		{
			idc = 6331;
			x = "15.35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class UniformLoad: GroundLoad
		{
			idc = 6304;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class UniformContainer: GroundContainer
		{
			idc = 633;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "14 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
		};
		class VestTab: UniformTab
		{
			idc = 6382;
			x = "18.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VestSlot: SlotPrimary
		{
			idc = 6381;
			x = "19.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class VestLoad: GroundLoad
		{
			idc = 6305;
			x = "18.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VestContainer: UniformContainer
		{
			idc = 638;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
		};
		class BackpackTab: UniformTab
		{
			idc = 6192;
			x = "22.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackpackSlot: SlotPrimary
		{
			idc = 6191;
			x = "22.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0.5};
		};
		class BackpackLoad: GroundLoad
		{
			idc = 6306;
			x = "22.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackpackContainer: UniformContainer
		{
			idc = 619;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
		};
		class TotalLoad: GroundLoad
		{
			idc = 6308;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "23.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ContainerMarker: GroundTab
		{
			idc = 6325;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundMarker: ContainerMarker
		{
			idc = 6385;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SoldierMarker: ContainerMarker
		{
			idc = 6405;
			x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscDisplayMain
{
	class controlsBackground
	{
		delete TileGroup;
	};
};
class RscDisplayMainMap
{
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			onDraw = "_this call ExileClient_gui_map_event_onDraw";
		};
	};
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	scriptName = "RscDisplayMPInterrupt";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayMPInterrupt"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn ExileClient_gui_escape_abort";
	onUnload = "[""onUnload"",_this,""RscDisplayMPInterrupt"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	movingEnable = 0;
	enableSimulation = 1;
	class controlsBackground
	{
		class Vignette: RscVignette
		{
			idc = 114998;
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			idc = 115099;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
			disableCustomColors = 1;
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc = 114999;
					x = 0;
					y = 0;
					w = "safezoneW";
					h = "safezoneH";
					colortext[] = {0,0,0,1};
				};
				class Tile_0_0: RscText
				{
					idc = 115000;
					x = "(0 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_1: RscText
				{
					idc = 115001;
					x = "(0 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_2: RscText
				{
					idc = 115002;
					x = "(0 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_3: RscText
				{
					idc = 115003;
					x = "(0 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_4: RscText
				{
					idc = 115004;
					x = "(0 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_5: RscText
				{
					idc = 115005;
					x = "(0 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_0: RscText
				{
					idc = 115010;
					x = "(1 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_1: RscText
				{
					idc = 115011;
					x = "(1 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_2: RscText
				{
					idc = 115012;
					x = "(1 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_3: RscText
				{
					idc = 115013;
					x = "(1 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_4: RscText
				{
					idc = 115014;
					x = "(1 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_5: RscText
				{
					idc = 115015;
					x = "(1 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_0: RscText
				{
					idc = 115020;
					x = "(2 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_1: RscText
				{
					idc = 115021;
					x = "(2 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_2: RscText
				{
					idc = 115022;
					x = "(2 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_3: RscText
				{
					idc = 115023;
					x = "(2 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_4: RscText
				{
					idc = 115024;
					x = "(2 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_5: RscText
				{
					idc = 115025;
					x = "(2 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_0: RscText
				{
					idc = 115030;
					x = "(3 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_1: RscText
				{
					idc = 115031;
					x = "(3 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_2: RscText
				{
					idc = 115032;
					x = "(3 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_3: RscText
				{
					idc = 115033;
					x = "(3 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_4: RscText
				{
					idc = 115034;
					x = "(3 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_5: RscText
				{
					idc = 115035;
					x = "(3 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_0: RscText
				{
					idc = 115040;
					x = "(4 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_1: RscText
				{
					idc = 115041;
					x = "(4 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_2: RscText
				{
					idc = 115042;
					x = "(4 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_3: RscText
				{
					idc = 115043;
					x = "(4 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_4: RscText
				{
					idc = 115044;
					x = "(4 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_5: RscText
				{
					idc = 115045;
					x = "(4 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_0: RscText
				{
					idc = 115050;
					x = "(5 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_1: RscText
				{
					idc = 115051;
					x = "(5 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_2: RscText
				{
					idc = 115052;
					x = "(5 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_3: RscText
				{
					idc = 115053;
					x = "(5 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_4: RscText
				{
					idc = 115054;
					x = "(5 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_5: RscText
				{
					idc = 115055;
					x = "(5 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
			};
		};
		class TitleBackground: RscText
		{
			idc = 1050;
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
		};
		class MissionNameBackground: RscText
		{
			idc = -1;
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.7};
		};
		class Pause1: RscText
		{
			idc = 1000;
			x = "safezoneX + safezoneW - 2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {1,1,1,1};
			shadow = 2;
		};
		class Pause2: Pause1
		{
			idc = 1001;
			x = "safezoneX + safezoneW - 3.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
	};
	class controls
	{
		delete B_Players;
		delete B_Options;
		delete B_Abort;
		delete B_Retry;
		delete B_Load;
		delete B_Save;
		delete B_Continue;
		delete B_Diary;
		delete TrafficLight;
		class Title: RscTitle
		{
			idc = 523;
			style = 0;
			text = "$STR_XBOX_CONTROLER_DP_MENU";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};
		class PlayersName: CA_Title
		{
			idc = 109;
			style = 1;
			colorBackground[] = {0,0,0,0};
			x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCancel: RscButtonMenu
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1","0x00050000 + 8"};
			default = 1;
			text = "$STR_DISP_INT_CONTINUE";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonSAVE: RscButtonMenu
		{
			idc = 103;
			text = "$STR_DISP_INT_SAVE";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "16.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonSkip: RscButtonMenu
		{
			idc = 1002;
			text = "$STR_DISP_INT_SKIP";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "16.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonRespawn: RscButtonMenu
		{
			idc = 1337;
			text = "Suicide!";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonOptions: RscButtonMenu
		{
			idc = 101;
			text = "$STR_A3_RscDisplayMain_ButtonOptions";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "18.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonVideo: RscButtonMenu
		{
			idc = 301;
			text = "$STR_A3_RscDisplayInterrupt_ButtonVideo";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_TOOLTIP_MAIN_VIDEO";
		};
		class ButtonAudio: RscButtonMenu
		{
			idc = 302;
			text = "$STR_A3_RscDisplayInterrupt_ButtonAudio";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "16.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_TOOLTIP_MAIN_AUDIO";
		};
		class ButtonControls: RscButtonMenu
		{
			idc = 303;
			text = "$STR_A3_RscDisplayInterrupt_ButtonControls";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_TOOLTIP_MAIN_CONTROLS";
		};
		class ButtonGame: RscButtonMenu
		{
			idc = 307;
			text = "$STR_A3_RscDisplayInterrupt_ButtonGame";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "18.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_TOOLTIP_MAIN_GAME";
		};
		class ButtonTutorialHints: RscButtonMenu
		{
			idc = 122;
			text = "$STR_A3_RscDisplayInterrupt_ButtonTutorialHints";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "19.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonAbort: RscButtonMenu
		{
			idc = 104;
			text = "$STR_DISP_INT_ABORT";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "20.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class DebugConsole: RscDebugConsole
		{
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "21.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MissionTitle: RscText
		{
			idc = 120;
			font = "PuristaLight";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			shadow = 0;
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			w = "SafezoneW - (15 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Version: RscText
		{
			style = 1;
			font = "PuristaLight";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			shadow = 0;
			x = "SafezoneX + SafezoneW - (13 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			idc = 1005;
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TraffLight: RscTrafficLight
		{
			idc = 121;
			x = "SafezoneX + SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			show = 0;
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Feedback: RscFeedback{};
		class MessageBox: RscMessageBox{};
	};
};
class RscDisplayMultiplayerSetup
{
	onLoad = "_this call (uiNamespace getVariable 'ExileClient_gui_multiplayerSetup_event_onLoad'); [""onLoad"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	class controls
	{
		class ExileNewsBackground: RscText
		{
			idc = 24003;
			colorBackground[] = {"32/255","36/255","42/255",1};
			text = "";
			x = "(1.2 + 3.5) * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "17.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "((18.5-3.5) * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			h = "(10.85 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ExileNews: RscHTML
		{
			idc = 24000;
			x = "(1.2 + 4.5) * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "18.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "((18.5-4.5) * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			h = "(9.85 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorBackground[] = {0,0,0,0};
			colorBold[] = {1,1,1,0.75};
			colorLink[] = {"63/255","212/255","252/255",1};
			colorLinkActive[] = {"63/255","212/255","252/255",0.75};
			colorPicture[] = {1,1,1,1};
			colorPictureBorder[] = {0,0,0,0};
			colorPictureLink[] = {1,1,1,1};
			colorPictureSelected[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			class H2
			{
				font = "PuristaMedium";
				fontBold = "PuristaMedium";
				align = "left";
				sizeEx = "36 * pixelH";
			};
			class P
			{
				font = "PuristaMedium";
				fontBold = "PuristaMedium";
				align = "left";
				sizeEx = "24 * pixelH";
			};
		};
		class ExileNewsSidebar: RscText
		{
			idc = 24001;
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "17.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "(3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "(10.85 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorBackground[] = {"26/255","30/255","35/255",1};
			text = "";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		};
		class ExileIcon: RscPictureKeepAspect
		{
			idc = 24002;
			x = "1.2 * 				(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "17.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "(3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "(3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorBackground[] = {0,0,0,1};
			text = "exile_assets\texture\mod\icon.paa";
		};
	};
};
class RscDisplayVoiceChat
{
	class controls
	{
		class Picture: RscText
		{
			idc = 101;
			x = -1;
			y = -1;
			w = 0.1;
			h = 0.1;
		};
		class ExilePicture: RscPicture
		{
			idc = -1;
			x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
			y = "(safeZoneY + safeZoneH) - 185 * pixelH - 64 * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "\exile_assets\texture\hud\hud_icon_voice_ca.paa";
			colorText[] = {1,1,1,1};
			shadow = 0;
		};
	};
};
class RscExileCameraView
{
	idd = 20023;
	onLoad = "uiNamespace setVariable ['RscExileCameraView', _this select 0];	(_this call ExileClient_gui_baseCamera_event_onLoad) lbSetCurSel 0";
	onUnload = "uiNamespace setVariable ['RscExileCameraView', displayNull];	_this call ExileClient_gui_baseCamera_event_onUnLoad";
	hideControls[] = {"HideMiddle","HideRight","HideLeft","HideInfo"};
	class controlsBackground
	{
		class StyleHeader: RscText
		{
			x = "-0.00416666 * safezoneW + safezoneX";
			y = "-0.00599999 * safezoneH + safezoneY";
			w = "1.00833 * safezoneW";
			h = "0.1144 * safezoneH";
			colorBackground[] = {0.101961,0.101961,0.101961,1};
		};
		class StyleHeaderLogo: RscPicture
		{
			x = "-0.015625 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.200521 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
			text = "\exile_assets\texture\ui\cameraView\masheen_logo.paa";
		};
		class StyleHeaderUserInfo: RscText
		{
			x = "0.184896 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.120313 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleHeaderMiddle: RscText
		{
			x = "0.305208 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.389583 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class StyleTimeDate: RscText
		{
			x = "0.694792 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.120313 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleWeather: RscText
		{
			x = "0.815104 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class StyleWifi: RscText
		{
			x = "0.878125 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0293333 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleNV: RscText
		{
			x = "0.878125 * safezoneW + safezoneX";
			y = "0.0754 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0293333 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleHD: RscText
		{
			x = "0.878125 * safezoneW + safezoneX";
			y = "0.0446 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0315333 * safezoneH";
			colorBackground[] = {0.203922,0.231373,0.25098,1};
		};
		class StyleUserInfoPicture: RscPictureKeepAspect
		{
			x = "0.196354 * safezoneW + safezoneX";
			y = "0.038 * safezoneH + safezoneY";
			w = "0.0286458 * safezoneW";
			h = "0.044 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\superUser.paa";
		};
		class StyleWlanPicture: RscPictureKeepAspect
		{
			x = "0.880417 * safezoneW + safezoneX";
			y = "0.0182 * safezoneH + safezoneY";
			w = "0.0126041 * safezoneW";
			h = "0.0242 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\wlan.paa";
		};
		class StyleNVPicture: RscPictureKeepAspect
		{
			x = "0.880417 * safezoneW + safezoneX";
			y = "0.0798 * safezoneH + safezoneY";
			w = "0.0126041 * safezoneW";
			h = "0.022 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\nv.paa";
		};
		class StyleHDDPicture: RscPictureKeepAspect
		{
			x = "0.880416 * safezoneW + safezoneX";
			y = "0.049 * safezoneH + safezoneY";
			w = "0.0126041 * safezoneW";
			h = "0.0242 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\hdd.paa";
		};
		class StyleFooter: RscText
		{
			x = "-0.00416666 * safezoneW + safezoneX";
			y = "0.9444 * safezoneH + safezoneY";
			w = "1.0049 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.101961,0.101961,0.101961,1};
		};
		class StyleFooterOver: RscText
		{
			x = "-0.000729111 * safezoneW + safezoneX";
			y = "0.951 * safezoneH + safezoneY";
			w = "1.00034 * safezoneW";
			h = "0.0528 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class StyleFooterInfo: RscPictureKeepAspect
		{
			x = "0.00729166 * safezoneW + safezoneX";
			y = "0.962 * safezoneH + safezoneY";
			w = "0.435417 * safezoneW";
			h = "0.033 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\footer.paa";
		};
	};
	class controls
	{
		class HideMiddle: RscText
		{
			idc = 4001;
			x = "0.305208 * safezoneW + safezoneX";
			y = "0.1084 * safezoneH + safezoneY";
			w = "0.389583 * safezoneW";
			h = "0.836 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class HideRight: RscText
		{
			idc = 4002;
			x = "0.694792 * safezoneW + safezoneX";
			y = "0.1084 * safezoneH + safezoneY";
			w = "0.309375 * safezoneW";
			h = "0.836 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class HideLeft: RscText
		{
			idc = 4003;
			x = "-0.00416666 * safezoneW + safezoneX";
			y = "0.1084 * safezoneH + safezoneY";
			w = "0.309375 * safezoneW";
			h = "0.836 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class HideInfo: RscStructuredText
		{
			idc = 4004;
			x = "0.3625 * safezoneW + safezoneX";
			y = "0.456 * safezoneH + safezoneY";
			w = "0.275 * safezoneW";
			h = "0.11 * safezoneH";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,0.8};
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadInfo";
		};
		class MainCaptureArea: RscListBox
		{
			idc = 4009;
			access = 0;
			colorBackground[] = {0,0,0,0};
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			onMouseMoving = "_this call ExileClient_gui_baseCamera_event_main_onMouseMoving";
			onMouseButtonDown = "_this call ExileClient_gui_baseCamera_event_main_onMouseButtonDown";
			onMouseButtonUp = "_this call ExileClient_gui_baseCamera_event_main_onMouseButtonUp";
			onMouseZChanged = "_this call ExileClient_gui_baseCamera_event_main_onMouseZChanged";
			onLoad = "						['RscExileCameraView','MainCaptureArea']						call ExileClient_util_display_mouseControl_buildLimits;						ExileClientDisplayResetFocus = true						";
			onUnLoad = "ExileBaseManagementLimits = []";
			class CaptureArea
			{
				x = "0 * safezoneW + safezoneX";
				y = "0.1084 * safezoneH + safezoneY";
				w = "1 * safezoneW";
				h = "0.836 * safezoneH";
			};
		};
		class StyleBigRedButton: RscButton
		{
			idc = 4000;
			style = 48;
			x = "0.895313 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.105417 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.560784,0,0.113725,1};
			text = "\exile_assets\texture\ui\cameraView\button_off.paa";
			action = "closeDialog 0;";
			onMouseMoving = "[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onMouseMoving";
			onButtonDown = "[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onButtonDown";
			onButtonUp = "[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onButtonUp";
			onLoad = "ExileGuiControlClick = false";
			class buttonPictures
			{
				none = "\exile_assets\texture\ui\cameraView\button_off.paa";
				hover = "\exile_assets\texture\ui\cameraView\button_hover.paa";
				click = "\exile_assets\texture\ui\cameraView\button_click.paa";
			};
		};
		class ComboMiddleCameraSelect: RscCombo
		{
			idc = 4005;
			style = 2;
			x = "0.328125 * safezoneW + safezoneX";
			y = "0.049 * safezoneH + safezoneY";
			w = "0.349479 * safezoneW";
			h = "0.022 * safezoneH";
			onLBSelChanged = "_this call ExileClient_gui_baseCamera_event_main_onCameraDropDownChanged";
			onMouseButtonClick = "_this call ExileClient_gui_baseCamera_event_onLoad";
		};
		class StyleTime: RscStructuredText
		{
			idc = 4006;
			x = "0.70625 * safezoneW + safezoneX";
			y = "0.038 * safezoneH + safezoneY";
			w = "0.0572917 * safezoneW";
			h = "0.044 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadTime";
		};
		class StyleDate: RscStructuredText
		{
			idc = 4007;
			x = "0.763542 * safezoneW + safezoneX";
			y = "0.049 * safezoneH + safezoneY";
			w = "0.0458333 * safezoneW";
			h = "0.0242 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadDate";
		};
		class StyleUserInfoText: RscStructuredText
		{
			idc = 4008;
			x = "0.227291 * safezoneW + safezoneX";
			y = "0.038 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.044 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadPlayerInfo";
		};
		class StyleWeatherPicture: RscPictureKeepAspect
		{
			x = "0.820833 * safezoneW + safezoneX";
			y = "0.027 * safezoneH + safezoneY";
			w = "0.0515625 * safezoneW";
			h = "0.066 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadWeather";
		};
	};
};
class RscExileCraftItemDialog
{
	idd = 24005;
	onLoad = "uiNamespace setVariable ['RscExileCraftItemDialog', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileCraftItemDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc = 100;
			x = "0 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TopLeftCaption: RscText
		{
			idc = 101;
			text = "ITEM";
			x = "0 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class BackgroundBottom: RscText
		{
			idc = 102;
			x = "0 * (0.025) + (0)";
			y = "23 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class BackgroundRight: RscText
		{
			idc = 103;
			x = "12.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TopRightCaption: RscText
		{
			idc = 104;
			text = "COMPONENTS";
			x = "12.5 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc = 105;
			style = 2096;
			color[] = {1,1,1,0.7};
			action = "closeDialog 0;";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "39 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc = 5000;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "9 * (0.04)";
		};
		class ButtonCraft: RscButton
		{
			idc = 5001;
			text = "CRAFT";
			x = "0.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			action = "[uiNamespace getVariable 'RscExileCraftItemRecipeClassName', (lbCurSel 5002) + 1] call ExileClient_object_item_craft; closeDialog 0;";
		};
		class DropdownQuantity: RscCombo
		{
			idc = 5002;
			x = "6.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "34 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Description: RscStructuredText
		{
			idc = 5003;
			x = "13 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "26.5 * (0.025)";
			h = "20 * (0.04)";
		};
	};
};
class RscExileItemDetailsDialog
{
	idd = 24004;
	onLoad = "uiNamespace setVariable ['RscExileItemDetailsDialog', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileItemDetailsDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc = 1000;
			x = "0 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class BackgroundBottom: RscText
		{
			idc = 1005;
			x = "0 * (0.025) + (0)";
			y = "23 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class BackgroundRight: RscText
		{
			idc = 1006;
			x = "12.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TopLeftCaption: RscText
		{
			idc = 1001;
			text = "ITEM";
			x = "0 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class TopRightCaption: RscText
		{
			idc = 1002;
			text = "";
			x = "12.5 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc = 100;
			style = 2096;
			color[] = {1,1,1,0.7};
			action = "closeDialog 0;";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "39 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc = 5000;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "9 * (0.04)";
		};
		class TabButtonDetails: RscButton
		{
			idc = 1603;
			text = "DETAILS";
			x = "13 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			action = "'DETAILS' call ExileClient_gui_itemDetails_event_onTabButtonClicked;";
		};
		class TabButtonRecipes: RscButton
		{
			idc = 1604;
			text = "RECIPES";
			x = "19 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			action = "'RECIPES' call ExileClient_gui_itemDetails_event_onTabButtonClicked;";
		};
		class ButtonConsume: RscButton
		{
			idc = 1300;
			action = "closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_consume;";
			text = "CONSUME";
			x = "0.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonUse: RscButton
		{
			idc = 1301;
			action = "closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_use;";
			text = "USE";
			x = "12.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonConstruct: RscButton
		{
			idc = 1303;
			action = "closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_construct;";
			text = "CONSTRUCT";
			x = "6.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "34 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class TabDetails: RscControlsGroup
		{
			idc = 5003;
			x = "13 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "26.5 * (0.025)";
			h = "20 * (0.04)";
			class controls
			{
				class TextItemName: RscStructuredText
				{
					idc = 5001;
					text = "Item Name";
					x = 0;
					y = 0;
					w = "26.5 * (0.025)";
					h = "1.5 * (0.04)";
				};
				class TextItemLevel: RscStructuredText
				{
					idc = 5002;
					text = "Item Level 1";
					x = 0;
					y = "1.5 * (0.04)";
					w = "26.5 * (0.025)";
					h = "1 * (0.04)";
				};
				class ItemDescription: RscStructuredText
				{
					idc = 1100;
					x = 0;
					y = "3 * (0.04)";
					w = "26.5 * (0.025)";
					h = "17 * (0.04)";
				};
			};
		};
		class TabRecipes: RscControlsGroup
		{
			idc = 5004;
			x = "13 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "26.5 * (0.025)";
			h = "20 * (0.04)";
			show = "false";
			class controls
			{
				class CraftingListBox: RscListBox
				{
					idc = 1400;
					x = 0;
					y = 0;
					w = "26.5 * (0.025)";
					h = "20 * (0.04)";
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx2 = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					rowHeight = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					canDrag = 0;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0};
					itemBackground[] = {1,1,1,0.1};
					itemSpacing = 0.001;
					onLBDblClick = "closeDialog 0; _this call ExileClient_gui_itemDetails_event_onCraftingRecipeDoubleClick";
				};
			};
		};
		class Stat01Background: RscText
		{
			idc = 6000;
			x = "0.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 6001;
			x = "0.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 6002;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 6003;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc = 6004;
			x = "0.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 6005;
			x = "0.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 6006;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 6007;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc = 6008;
			x = "0.5 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 6009;
			x = "0.5 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 6010;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 6011;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc = 6012;
			x = "0.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 6013;
			x = "0.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 6014;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 6015;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc = 6016;
			x = "0.5 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc = 6017;
			x = "0.5 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc = 6018;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc = 6019;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc = 6020;
			x = "0.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc = 6021;
			x = "0.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc = 6022;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc = 6023;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc = 6024;
			x = "0.5 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc = 6025;
			x = "0.5 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc = 6026;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc = 6027;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscExileKeypad
{
	idd = 24010;
	onLoad = "uiNamespace setVariable ['RscExileKeypad', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileKeypad', displayNull]";
	onKeyUp = "_this call ExileClient_gui_keypadDialog_event_onKeyUp";
	class controlsBackground
	{
		class bacground: RscPicture
		{
			text = "\exile_assets\texture\ui\codeLock\code_background.paa";
			x = "0.322396 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.355208 * safezoneW";
			h = "0.55 * safezoneH";
		};
	};
	class controls
	{
		class buttonFake: RscButton
		{
			idc = 4013;
			x = "1 * safezoneW + safezoneX";
			y = "1 * safezoneH + safezoneY";
			w = "0 * safezoneW";
			h = "0 * safezoneH";
		};
		class button0: RscButton
		{
			idc = 4003;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "0 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button1: RscButton
		{
			idc = 4004;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "1 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button2: RscButton
		{
			idc = 4005;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "2 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button3: RscButton
		{
			idc = 4006;
			x = "0.447291 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "3 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button4: RscButton
		{
			idc = 4007;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "4 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button5: RscButton
		{
			idc = 4008;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "5 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button6: RscButton
		{
			idc = 4009;
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "6 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button7: RscButton
		{
			idc = 4010;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "7 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button8: RscButton
		{
			idc = 4011;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "8 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button9: RscButton
		{
			idc = 4012;
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "9 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonOK: RscButton
		{
			idc = 4000;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			colorDisabled[] = {1,1,1,0.4};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonCancle: RscButton
		{
			idc = 4002;
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onAbortButtonClick";
		};
		class editBox: RscText
		{
			idc = 4001;
			text = "";
			colorText[] = {0.0705882,0.133333,0.0941176,0.8};
			font = "PressStart2P";
			style = 2;
			x = "0 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "6 * (0.04)";
			sizeEx = "2 * (0.04)";
			shadow = 0;
		};
	};
};
class RscExileKeypadCar
{
	idd = 24010;
	onLoad = "uiNamespace setVariable ['RscExileKeypad', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileKeypad', displayNull]";
	onKeyUp = "_this call ExileClient_gui_keypadDialog_event_onKeyUp";
	class controlsBackground
	{
		class bacground: RscPicture
		{
			text = "\exile_assets\texture\ui\codeLock\code_background_car.paa";
			x = "0.385417 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.217708 * safezoneW";
			h = "0.616 * safezoneH";
		};
	};
	class controls
	{
		class buttonFake: RscButton
		{
			idc = 4013;
			x = "1 * safezoneW + safezoneX";
			y = "1 * safezoneH + safezoneY";
			w = "0 * safezoneW";
			h = "0 * safezoneH";
		};
		class button0: RscButton
		{
			idc = 4003;
			x = "0.474792 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "0 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button1: RscButton
		{
			idc = 4004;
			x = "0.422083 * safezoneW + safezoneX";
			y = "0.3812 * safezoneH + safezoneY";
			w = "0.0401043 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "1 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button2: RscButton
		{
			idc = 4005;
			x = "0.474791 * safezoneW + safezoneX";
			y = "0.379 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "2 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button3: RscButton
		{
			idc = 4006;
			x = "0.526354 * safezoneW + safezoneX";
			y = "0.379 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "3 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button4: RscButton
		{
			idc = 4007;
			x = "0.423229 * safezoneW + safezoneX";
			y = "0.456 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0528 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "4 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button5: RscButton
		{
			idc = 4008;
			x = "0.474791 * safezoneW + safezoneX";
			y = "0.4538 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "5 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button6: RscButton
		{
			idc = 4009;
			x = "0.526355 * safezoneW + safezoneX";
			y = "0.4516 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "6 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button7: RscButton
		{
			idc = 4010;
			x = "0.42323 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "7 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button8: RscButton
		{
			idc = 4011;
			x = "0.474792 * safezoneW + safezoneX";
			y = "0.522 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "8 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button9: RscButton
		{
			idc = 4012;
			x = "0.526354 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "9 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonOK: RscButton
		{
			idc = 4000;
			x = "0.42323 * safezoneW + safezoneX";
			y = "0.5946 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			colorDisabled[] = {1,1,1,0.4};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonCancle: RscButton
		{
			idc = 4002;
			x = "0.526355 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onAbortButtonClick";
		};
		class editBox: RscText
		{
			idc = 4001;
			text = "";
			colorText[] = {0,0,0,0.8};
			font = "PressStart2P";
			style = 2;
			x = "0.316667 * safezoneW + safezoneX";
			y = "0.2646 * safezoneH + safezoneY";
			w = "0.352917 * safezoneW";
			h = "0.0726 * safezoneH";
			sizeEx = "1.2 * (0.04)";
			shadow = 0;
		};
	};
};
class RscExileKeypadScanDialog
{
	idd = 24025;
	onLoad = "uiNamespace setVariable ['RscExileKeypadScanDialog', _this select 0]";
	onUnload = "call ExileClient_gui_keypadScanDialog_event_onUnload; uiNamespace setVariable ['RscExileKeypadScanDialog', displayNull]";
	class controlsBackground{};
	class controls
	{
		class backgroundCold: RscPicture
		{
			idc = 4000;
			text = "\exile_assets\texture\ui\codeLock\background_cold_co.paa";
			x = "0.322396 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.355208 * safezoneW";
			h = "0.55 * safezoneH";
		};
		class backgroundHot: RscPicture
		{
			idc = 4001;
			text = "\exile_assets\texture\ui\codeLock\background_hot_co.paa";
			x = "0.322396 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.355208 * safezoneW";
			h = "0.55 * safezoneH";
		};
		class finger0: RscPictureKeepAspect
		{
			idc = 4011;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger1: RscPictureKeepAspect
		{
			idc = 4002;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger2: RscPictureKeepAspect
		{
			idc = 4003;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger3: RscPictureKeepAspect
		{
			idc = 4004;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.447291 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger4: RscPictureKeepAspect
		{
			idc = 4005;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger5: RscPictureKeepAspect
		{
			idc = 4006;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger6: RscPictureKeepAspect
		{
			idc = 4007;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger7: RscPictureKeepAspect
		{
			idc = 4008;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger8: RscPictureKeepAspect
		{
			idc = 4009;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger9: RscPictureKeepAspect
		{
			idc = 4010;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
	};
};
class RscExileLoadingScreen
{
	idd = 24001;
	onLoad = "uiNamespace setVariable ['RscExileLoadingScreen', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileLoadingScreen', displayNull]";
	movingEnable = "false";
	enableSimulation = "false";
	class controlsBackground
	{
		class BlackBackground: RscText
		{
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class Noise: RscPicture
		{
			text = "\a3\ui_f\data\IGUI\RscTitles\Interlacing\interlacing_ca.paa";
			colorText[] = {1,1,1,1};
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
		class Vignette: RscVignette
		{
			colorText[] = {0,0,0,1};
		};
	};
	class controls
	{
		class MapBackTop: RscText
		{
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			idc = 1000;
			h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class MapName: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
			w = "safezoneW - 0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			idc = 1001;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Exile Mod";
		};
		class MapAuthor: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font = "PuristaLight";
			idc = 1002;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,0.5};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "www.exilemod.com";
		};
		class LoadingText: RscText
		{
			idc = 20002;
			text = "";
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			sizeEx = "2 * (0.04)";
			style = 2;
		};
		class ProgressMap: RscProgress
		{
			colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			x = "safezoneX";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
			w = "safezoneW";
			idc = 104;
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMission: ProgressMap
		{
			idc = 1013;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscExilePayTerritoryProtectionMoneyDialog
{
	idd = 20021;
	onLoad = "uiNamespace setVariable ['RscExilePayTerritoryProtectionMoneyDialog', _this select 0]";
	onUnload = "call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onUnload; uiNamespace setVariable ['RscExilePayTerritoryProtectionMoneyDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "8 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Pay Territory Protection Money";
			x = "10 * (0.025) + (0)";
			y = "7.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class TerritoryLabel: RscText
		{
			idc = -1;
			text = "Choose the territory to pay for:";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class CurrencyLabel: RscText
		{
			idc = -1;
			text = "Choose your payment method:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc = 4001;
			onLBSelChanged = "_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onTerritoryDropDownSelectionChanged";
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class PayButton: RscButtonMenuOK
		{
			idc = 4002;
			onMouseButtonClick = "_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onPayButtonClick";
			text = "Pay Now";
			x = "10.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class CurrencyDropDown: RscXListBox
		{
			idc = 4000;
			onLBSelChanged = "_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onCurrencyDropDownSelectionChanged";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscExilePurchaseTerritoryDialog
{
	idd = 20017;
	onLoad = "uiNamespace setVariable ['RscExilePurchaseTerritoryDialog', _this select 0]";
	onUnload = "call ExileClient_gui_purchaseTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExilePurchaseTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "10 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Purchase Territory";
			x = "10 * (0.025) + (0)";
			y = "6.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class PriceLabel: RscText
		{
			idc = -1;
			text = "Price:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class RadiusLabel: RscText
		{
			idc = -1;
			text = "Radius:";
			x = "10.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>50,000<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc = 4001;
			onMouseButtonClick = "_this call ExileClient_gui_purchaseTerritoryDialog_event_onPurchaseButtonClick";
			text = "Purchase";
			x = "10.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Radius: RscStructuredText
		{
			idc = 4002;
			text = "<t size='1.4'>15m</t>";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
	};
};
class RscExileRegisterClan
{
	idd = 24012;
	onLoad = "uiNamespace setVariable ['RscExileRegisterClan', _this select 0]";
	onUnload = "call ExileClient_gui_registerClanDialog_event_onUnload; uiNamespace setVariable ['RscExileRegisterClan', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "10 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "10 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = 1001;
			text = "Register Clan";
			x = "10 * (0.025) + (0)";
			y = "6.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc = 1002;
			text = "Choose a name:";
			x = "10.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class PriceLabel: RscText
		{
			idc = 1003;
			text = "Registration Fee:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>50,000<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc = 4001;
			x = "23.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			action = "closeDialog 0";
		};
		class ButtonRegister: RscButtonMenuOK
		{
			idc = 4002;
			text = "Register";
			x = "10.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_registerClanDialog_event_onRegisterButtonClick";
		};
		class NameInput: RscEdit
		{
			idc = 4003;
			text = "WWWWWWWWWWWWWWWWWWWW";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
	};
};
class RscExileRekeyVehicleDialog
{
	idd = 24027;
	onLoad = "uiNamespace setVariable ['RscExileRekeyVehicleDialog', _this select 0]";
	onUnload = "call ExileClient_gui_vehicleRekeyDialog_event_onUnload; uiNamespace setVariable ['RscExileRekeyVehicleDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "13 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Change Pin Code";
			x = "10 * (0.025) + (0)";
			y = "4 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class ResetCodeCostLabel: RscText
		{
			idc = -1;
			text = "Cost to change if pin is unknown:";
			x = "10.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class VehicleLabel: RscText
		{
			idc = -1;
			text = "Select vehicle to change pin:";
			x = "10 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
		};
		class ResetCodeFreeLabel: RscText
		{
			idc = -1;
			text = "If pin is known you can change it for free.";
			x = "10.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc = 4002;
			x = "10.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_vehicleRekeyDialog_event_onDropDownSelectionChanged";
		};
		class Cost: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "16 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc = 4001;
			onMouseButtonClick = "_this call ExileClient_gui_vehicleRekeyDialog_event_onPurchaseButtonClick";
			text = "Reset";
			x = "10.5 * (0.025) + (0)";
			y = "16 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
		class ResetButton: RscButtonMenuOK
		{
			idc = 4003;
			onMouseButtonClick = "_this call ExileClient_gui_vehicleRekeyDialog_event_onResetButtonClick";
			text = "Reset Free";
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
	};
};
class RscExileSandbox
{
	idd = 20019;
	onLoad = "uiNamespace setVariable ['RscExileSandbox', _this select 0];";
	onUnload = "uiNamespace setVariable ['RscExileSandbox', displayNull]";
	duration = -1;
	class controls
	{
		class ArrowLeft: RscButton
		{
			idc = 992;
			text = "-";
			x = -1;
			y = -1;
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ArrowRight: ArrowLeft
		{
			idc = 993;
			text = "+";
			x = -1;
			y = -1;
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class RscListbox_1500: RscListBox
		{
			idc = 1500;
			x = "8.5 * (0.025) + (0)";
			y = "3.5 * (0.04) + (0)";
			w = "24.5 * (0.025)";
			h = "17 * (0.04)";
			rowHeight = "40 * pixelH";
			itemSpacing = "5 * pixelH";
			style = 32;
		};
	};
};
class RscExileSelectSpawnLocationDialog
{
	idd = 24002;
	onLoad = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', _this select 0];";
	onUnload = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', displayNull]";
	duration = -1;
	class controlsBackground
	{
		class BlackBackground: RscText
		{
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class Noise: RscPicture
		{
			text = "\a3\ui_f\data\IGUI\RscTitles\Interlacing\interlacing_ca.paa";
			colorText[] = {1,1,1,1};
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
		class Vignette: RscVignette
		{
			colorText[] = {0,0,0,1};
		};
	};
	class controls
	{
		class MapBackTop: RscText
		{
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			idc = 1000;
			h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class MapName: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
			w = "safezoneW - 0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			idc = 1001;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Exile Mod";
		};
		class MapAuthor: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font = "PuristaLight";
			idc = 1002;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,0.5};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "www.exilemod.com";
		};
		class LoadingText: RscText
		{
			idc = 20002;
			text = "";
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			sizeEx = "2 * (0.04)";
			style = 2;
		};
		class ProgressMap: RscProgress
		{
			colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			x = "safezoneX";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
			w = "safezoneW";
			idc = 104;
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMission: ProgressMap
		{
			idc = 1013;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TextCaption: RscText
		{
			idc = 24000;
			text = "Choose your spawn location:";
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			sizeEx = "2 * (0.04)";
			style = 2;
		};
		class Map: RscMapControl
		{
			idc = 24001;
			text = "";
			x = "8 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "32 * (0.025)";
			h = "20 * (0.04)";
			moveOnEdges = 0;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;
		};
		class ListBoxLocations: RscListBox
		{
			idc = 24002;
			text = "Locations";
			x = "0 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "9.5 * (0.025)";
			h = "20 * (0.04)";
			colorBackground[] = {0,0,0,0.25};
			onLBSelChanged = "_this call ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged;";
		};
		class ButtonSpawn: RscButton
		{
			idc = 24003;
			text = "OKAY";
			x = "0 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "9.5 * (0.025)";
			h = "1.5 * (0.04)";
			onButtonClick = "[] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
	};
};
class RscExileSetupTerritoryDialog
{
	idd = 20016;
	onLoad = "uiNamespace setVariable ['RscExileSetupTerritoryDialog', _this select 0]";
	onUnload = "call ExileClient_gui_setupTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExileSetupTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "16 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Setup Territory";
			x = "10 * (0.025) + (0)";
			y = "3.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc = -1;
			text = "Name:";
			x = "10.5 * (0.025) + (0)";
			y = "5.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class FlagLabel: RscText
		{
			idc = -1;
			text = "Flag Texture:";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class PlaceButton: RscButtonMenuOK
		{
			idc = 4002;
			onMouseButtonClick = "_this call ExileClient_gui_setupTerritoryDialog_event_onPlaceButtonClick";
			text = "Setup";
			x = "10.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class NameInput: RscEdit
		{
			idc = 4000;
			text = "";
			x = "10.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class FlagListBox: RscListBox
		{
			idc = 4001;
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "8 * (0.04)";
		};
	};
};
class RscExileTraderDialog
{
	idd = 24007;
	onLoad = "uiNamespace setVariable ['RscExileTraderDialog', _this select 0]";
	onUnload = "call ExileClient_gui_traderDialog_event_onUnload; uiNamespace setVariable ['RscExileTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogCaptionLeft: RscText
		{
			idc = 4000;
			text = "Eichi";
			x = "-4 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class DialogBackgroundLeft: RscText
		{
			idc = 2000;
			x = "-4 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogBackgroundMiddle: RscText
		{
			idc = 2001;
			x = "14 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaptionMiddle: RscText
		{
			idc = 4001;
			text = "STORE";
			x = "14 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class DialogBackgroundRight: RscText
		{
			idc = 2002;
			x = "32 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaptionRight: RscText
		{
			idc = 2003;
			text = "STATS";
			x = "32 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
	class controls
	{
		class TextPlayerMoney: RscStructuredText
		{
			idc = 4002;
			text = "0";
			x = "5.5 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
		};
		class CloseCross: RscActiveText
		{
			idc = 1032;
			x = "42.8 * (0.025) + (0)";
			y = "0.2 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "0.5 * (0.04)";
			action = "closeDialog 0;";
			style = 2096;
			color[] = {1,1,1,0.7};
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class ItemPicture: RscPictureKeepAspect
		{
			idc = 4003;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "32.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "9 * (0.04)";
		};
		class InventoryDropDown: RscCombo
		{
			idc = 4004;
			x = "-3.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onPlayerInventoryDropDownSelectionChanged";
		};
		class InventoryListBox: RscExileItemListBox
		{
			idc = 4005;
			x = "-3.5 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "20 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onPlayerInventoryListBoxSelectionChanged";
		};
		class CancelButton: RscButtonMenu
		{
			idc = 4006;
			x = "32.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			action = "closeDialog 0;";
			text = "Cancel";
		};
		class SellButton: RscButtonMenu
		{
			idc = 4007;
			text = "Sell";
			x = "-3.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			onMouseButtonClick = "_this call ExileClient_gui_traderDialog_event_onSellButtonClick";
		};
		class StoreDropDown: RscCombo
		{
			idc = 4008;
			x = "14.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged";
		};
		class StoreListBox: RscExileItemListBox
		{
			idc = 4009;
			x = "14.5 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "20 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged";
			onLBDblClick = "_this call ExileClient_gui_traderDialog_event_onStoreListBoxItemDoubleClick";
		};
		class PurchaseButton: RscButtonMenu
		{
			idc = 4010;
			text = "Purchase";
			x = "14.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			onMouseButtonClick = "_this call ExileClient_gui_traderDialog_event_onPurchaseButtonClick";
		};
		class QuantityDropDown: RscCombo
		{
			idc = 4011;
			x = "23 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			show = "false";
		};
		class PlayerLoadBackground: RscText
		{
			idc = 4043;
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerLoadProgress: RscProgress
		{
			idc = 4012;
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class PlayerLoadLabel: RscText
		{
			idc = 4013;
			text = "LOAD";
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
		};
		class PlayerLoadValue: RscStructuredText
		{
			idc = 4014;
			text = "100%";
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
		};
		class PrimaryWeaponFilter: RscCheckBox
		{
			idc = 4044;
			x = "28.2 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "1.2 * (0.025)";
			h = "1 * (0.04)";
			tooltip = "Show only items that are compatible with your primary weapon.";
			color[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.25};
			colorFocused[] = {1,1,1,1};
			colorHover[] = {0,0,0,1};
			colorPressed[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.8};
			colorBackgroundFocused[] = {0,0,0,0.8};
			colorBackgroundHover[] = {1,1,1,1};
			colorBackgroundPressed[] = {0,0,0,0.8};
			soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			textureChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureFocusedChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureHoverChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			texturePressedChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureHoverUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureFocusedUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			texturePressedUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			onCheckedChanged = "_this call ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged";
			show = "false";
		};
		class HandgunWeaponFilter: PrimaryWeaponFilter
		{
			idc = 4045;
			x = "29.8 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "1.2 * (0.025)";
			h = "1 * (0.04)";
			tooltip = "Show only items that are compatible with your handgun.";
			textureChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureFocusedChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureHoverChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			texturePressedChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureHoverUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureFocusedUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			texturePressedUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
		};
		class Stat01Background: RscText
		{
			idc = 4015;
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 4016;
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 4017;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 4018;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc = 4019;
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 4020;
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 4021;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 4022;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc = 4023;
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 4024;
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 4025;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 4026;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc = 4027;
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 4028;
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 4029;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 4030;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc = 4031;
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc = 4032;
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc = 4033;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc = 4034;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc = 4035;
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc = 4036;
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc = 4037;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc = 4038;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc = 4039;
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc = 4040;
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc = 4041;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc = 4042;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscExileTwinkleTwisterButton: RscButtonMenu
{
	colorBackground[] = {0,0,0,0.1};
	font = "PressStart2P";
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	style = 2;
	class Attributes
	{
		align = "center";
		color = "#FFFFFF";
		font = "PressStart2P";
		shadow = "false";
	};
};
class RscExileTwinkleTwister
{
	idd = 20024;
	onLoad = "uiNamespace setVariable ['RscExileTwinkleTwister', _this select 0]";
	onUnload = "call ExileClient_gui_twinkleTwister_event_onUnload; uiNamespace setVariable ['RscExileTwinkleTwister', displayNull]";
	class controlsBackground
	{
		class Background: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "25 * (0.04)";
			colorBackground[] = {0.301961,0.666667,0.992157,1};
		};
		class RscText_1002: RscText
		{
			idc = -1;
			x = "1.5 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "3 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1004: RscText
		{
			idc = -1;
			x = "33.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "3 * (0.025)";
			h = "3 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1007: RscText
		{
			idc = -1;
			x = "2.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "4.5 * (0.025)";
			h = "5 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1009: RscText
		{
			idc = -1;
			x = "32 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "6.5 * (0.025)";
			h = "2.5 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1010: RscText
		{
			idc = -1;
			x = "33 * (0.025) + (0)";
			y = "2.5 * (0.04) + (0)";
			w = "4.5 * (0.025)";
			h = "3.5 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1001: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "20.5 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "4.5 * (0.04)";
			colorBackground[] = {0,0.666667,0.0627451,1};
		};
		class RscText_1003: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "19 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0.505882,0.823529,0.12549,1};
		};
		class RscText_1005: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "22 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "3 * (0.04)";
			colorBackground[] = {0.823529,0.556863,0.0980392,1};
		};
	};
	class controls
	{
		class Caption: RscStructuredText
		{
			idc = 4001;
			text = "<t font='PressStart2P' size='2' align='center' shadow='0'>TWINKLE<br/>TWISTER<br/>2000</t>";
			x = "0 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "6.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class StartButton: RscExileTwinkleTwisterButton
		{
			idc = 4002;
			text = "Start Game";
			x = "8 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "24 * (0.025)";
			h = "3 * (0.04)";
			onMouseButtonClick = "_this spawn ExileClient_gui_twinkleTwister_event_onStartButtonClick";
			soundClick[] = {"\exile_assets\sound\twinkle_twister_button_01",0.5,1};
		};
		class QuitButton: RscExileTwinkleTwisterButton
		{
			idc = 4003;
			text = "Quit";
			x = "8 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "24 * (0.025)";
			h = "3 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_twinkleTwister_event_onQuitButtonClick";
			soundClick[] = {"\exile_assets\sound\twinkle_twister_button_02",0.5,1};
		};
		class InfoText: RscStructuredText
		{
			idc = 4004;
			text = "<t font='PressStart2P' size='0.75' align='center' shadow='0'>100 Pop Tabs per Game</t>";
			x = "0 * (0.025) + (0)";
			y = "23 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {0.47451,0.368627,0.192157,1};
			colorBackground[] = {0,0,0,0};
		};
		class GameText: RscStructuredText
		{
			idc = 4005;
			x = "0.29375 * safezoneW + safezoneX";
			y = "0.291 * safezoneH + safezoneY";
			w = "0.4125 * safezoneW";
			h = "0.341 * safezoneH";
			colorBackground[] = {0,0,0,0};
		};
	};
};
class RscExileUpgradeTerritoryDialog
{
	idd = 20018;
	onLoad = "uiNamespace setVariable ['RscExileUpgradeTerritoryDialog', _this select 0]";
	onUnload = "call ExileClient_gui_upgradeTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExileUpgradeTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "6 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "14 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Upgrade Territory";
			x = "10 * (0.025) + (0)";
			y = "4.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RadiusLabel: RscText
		{
			idc = -1;
			text = "New Radius:";
			x = "10.5 * (0.025) + (0)";
			y = "10 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class RespectFeeLabel: RscText
		{
			idc = -1;
			text = "Respect Fee:";
			x = "10.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class LevelLabel: RscText
		{
			idc = -1;
			text = "New Level:";
			x = "10.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class RespectFeeValue: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>2,000</t>";
			x = "10.5 * (0.025) + (0)";
			y = "14.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class UpgradeButton: RscButtonMenuOK
		{
			idc = 4001;
			onMouseButtonClick = "_this call ExileClient_gui_upgradeterritoryDialog_event_onUpgradeButtonClick";
			text = "Upgrade";
			x = "10.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Radius: RscStructuredText
		{
			idc = 4002;
			text = "<t size='1.4'>30m</t>";
			x = "10.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class Level: RscStructuredText
		{
			idc = 4003;
			text = "<t size='1.4'>2/10</t>";
			x = "10.5 * (0.025) + (0)";
			y = "7.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
	};
};
class RscExileVehicleCustomsDialog
{
	idd = 24008;
	onLoad = "uiNamespace setVariable ['RscExileVehicleCustomsDialog', _this select 0]";
	onUnload = "call ExileClient_gui_vehicleCustomsDialog_event_onUnload; uiNamespace setVariable ['RscExileVehicleCustomsDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "11.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 1001;
			text = "Purchase Paintjob";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 1002;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc = 4000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged";
		};
		class SkinsListBox: RscExileItemListBox
		{
			idc = 4001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc = 4002;
			text = "Purchase now";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = 4003;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
	};
};
class RscExileVehicleTraderDialog
{
	idd = 24008;
	onLoad = "uiNamespace setVariable ['RscExileVehicleTraderDialog', _this select 0]";
	onUnload = "call ExileClient_gui_vehicleTraderDialog_event_onUnload; uiNamespace setVariable ['RscExileVehicleTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "16.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 1001;
			text = "Purchase Vehicle";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 1006;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class CategoryDropDown: RscCombo
		{
			idc = 4000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleTraderDialog_event_onCategoryDropDownSelectionChanged";
		};
		class VehiclesListBox: RscExileItemListBox
		{
			idc = 4001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleTraderDialog_event_onVehicleListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc = 4002;
			text = "Purchase now";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "15.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleTraderDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = 4006;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class PinBox: RscEdit
		{
			idc = 4008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "14.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.9 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
			onChar = "_this spawn ExileClient_gui_vehicleTraderDialog_event_onInputBoxChars";
		};
		class PinText: RscStructuredText
		{
			text = "Pin Code:";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "13.8 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc = 6000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 6001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 6002;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 6003;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat02Background: RscText
		{
			idc = 6004;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 6005;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 6006;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 6007;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat03Background: RscText
		{
			idc = 6008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 6009;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 6010;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 6011;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat04Background: RscText
		{
			idc = 6012;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 6013;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 6014;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 6015;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
	};
};
class RscExileWasteDumpDialog
{
	idd = 24011;
	onLoad = "uiNamespace setVariable ['RscExileWasteDumpDialog', _this select 0]";
	onUnload = "call ExileClient_gui_wasteDumpDialog_event_onUnload; uiNamespace setVariable ['RscExileWasteDumpDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "8 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Waste Dump";
			x = "10 * (0.025) + (0)";
			y = "7.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RevenueLabel: RscText
		{
			idc = -1;
			text = "Revenue:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class ModeLabel: RscText
		{
			idc = -1;
			text = "What would you like to throw away?";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class ModeDropDown: RscCombo
		{
			idc = 4002;
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged";
		};
		class RevenueValue: RscStructuredText
		{
			idc = 4001;
			text = "<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
		};
		class SellButton: RscButtonMenuOK
		{
			idc = 4000;
			onMouseButtonClick = "_this call ExileClient_gui_wasteDumpDialog_event_onSellButtonClick";
			text = "Adios!";
			x = "10.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
	};
};
class RscExileXM8Slide
{
	deletable = 0;
	fade = 0;
	shadow = 0;
	style = 16;
	type = 15;
	x = "0 * (0.025)";
	y = "0 * (0.04)";
	w = "34 * (0.025)";
	h = "19 * (0.04)";
	show = "false";
	class Controls{};
	class HScrollbar: Scrollbar
	{
		show = "false";
	};
	class VScrollbar: Scrollbar
	{
		show = "false";
	};
};
class RscExileXM8Frame: RscText
{
	colorBackground[] = {255,255,255,0.1};
};
class RscExileXM8AppButton: RscButtonMenu
{
	type = 16;
	style = "0x02";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	shadow = 0;
	shortcuts[] = {};
	textureNoShortcut = "\A3\Ui_f\data\GUI\RscCommon\RscButtonMenuSteam\steam_ca.paa";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {255,255,255,0.05};
	colorBackground2[] = {255,255,255,0.05};
	colorBackgroundFocused[] = {255,255,255,0.1};
	colorDisabled[] = {1,1,1,0.25};
	colorDisabledSecondary[] = {1,1,1,0.25};
	colorFocused[] = {"225/255","65/255","65/255",1};
	colorFocusedSecondary[] = {"225/255","65/255","65/255",1};
	colorText[] = {1,1,1,1};
	color[] = {1,1,1,1};
	color2[] = {"225/255","65/255","65/255",1};
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "Text";
	colorSecondary[] = {1,1,1,1};
	color2Secondary[] = {0,0,0,1};
	fontSecondary = "PuristaLight";
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	textSecondary = "";
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	class Attributes
	{
		align = "center";
	};
	class AttributesImage
	{
		align = "center";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};
	class ShortcutPos
	{
		left = 0;
		top = 0;
		h = 1;
		w = 1;
	};
};
class RscExileXM8AppButton1x1: RscExileXM8AppButton
{
	w = "6 * (0.025)";
	h = "5 * (0.04)";
	textureNoShortcut = "";
	text = "";
	class ShortcutPos
	{
		left = "(6 * (0.025)) * 0.25";
		top = "(5 * (0.04)) * 0.15";
		w = "(6 * (0.025)) * 0.5";
		h = "(5 * (0.04)) * 0.5";
	};
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(5 * (0.04)) * 0.65";
	};
};
class RscExileXM8AppButton2x1: RscExileXM8AppButton1x1
{
	w = "12.5 * (0.025)";
	class ShortcutPos
	{
		left = "(12.5 * (0.025)) * 0.5 - (6 * (0.025)) * 0.25";
		top = "(5 * (0.04)) * 0.15";
		w = "(6 * (0.025)) * 0.5";
		h = "(5 * (0.04)) * 0.5";
	};
};
class RscExileXM8Edit: RscEdit
{
	colorBackground[] = {255,255,255,0.1};
	colorDisabled[] = {255,255,255,0.1};
	colorSelection[] = {"0/255","178/255","205/255",1};
	colorText[] = {"252/255","253/255","255/255",1};
	shadow = 2;
	style = "0x00 + 0x50";
	type = 2;
	onSetFocus = "_this call ExileClient_gui_xm8_event_onInputBoxFocus";
	onKillFocus = "_this call ExileClient_gui_xm8_event_onInputBoxKillFocus";
};
class RscExileXM8Button: RscExileXM8AppButton1x1
{
	height = "2 * (0.04)";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	class Attributes
	{
		align = "center";
	};
	class AttributesImage
	{
		align = "center";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(1 * (0.04)) * 0.5";
	};
};
class RscExileXM8ButtonMenu: RscExileXM8Button
{
	height = "1 * (0.04)";
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = 0;
	};
};
class RscExileXM8BackButton: RscExileXM8AppButton1x1
{
	textureNoShortcut = "\exile_assets\texture\ui\xm8_back_ca.paa";
	w = "3 * (0.025)";
	h = "2.5 * (0.04)";
	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = "3 * (0.025)";
		h = "2.5 * (0.04)";
	};
};
class RscExileXM8ListBox: RscListBox{};
class RscExileXM8
{
	idd = 24015;
	onLoad = "uiNamespace setVariable ['RscExileXM8', _this select 0]";
	onUnload = "call ExileClient_gui_xm8_event_onUnload; uiNamespace setVariable ['RscExileXM8', displayNull]";
	onKeyUp = "_this call ExileClient_gui_xm8_event_onKeyUp";
	onKeyDown = "_this call ExileClient_gui_xm8_event_onKeyDown";
	class ControlsBackground
	{
		class BackgroundOff: RscPictureKeepAspect
		{
			idc = 4000;
			text = "\exile_assets\texture\ui\xm8_off_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
		class BackgroundOn: RscPictureKeepAspect
		{
			idc = 4001;
			text = "\exile_assets\texture\ui\xm8_on_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
	};
	class Controls
	{
		class Slides: RscExileXM8Slide
		{
			idc = 4007;
			x = "3 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			show = "true";
			class Controls
			{
				class SlideApps: RscExileXM8Slide
				{
					idc = 4040;
					show = "true";
					class Controls
					{
						class Health: RscStructuredText
						{
							idc = 4057;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Health</t>";
							x = "(4 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class PopTabs: RscStructuredText
						{
							idc = 4058;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Pop Tabs</t>";
							x = "(4 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class Respect: RscStructuredText
						{
							idc = 4059;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Respect</t>";
							x = "(4 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class App01: RscExileXM8AppButton
						{
							idc = 1111;
							x = "(10.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							w = "12.5 * (0.025)";
							h = "10.5 * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_network_ca.paa";
							text = "8G Network";
							onButtonClick = "['players', 0] call ExileClient_gui_xm8_slide";
							class ShortcutPos
							{
								left = "(12.5 * (0.025)) * 0.25";
								top = "(10.5 * (0.04)) * 0.25";
								w = "(12.5 * (0.025)) * 0.5";
								h = "(10.5 * (0.04)) * 0.5";
							};
							class TextPos
							{
								bottom = 0;
								left = 0;
								right = 0;
								top = "(10.5 * (0.04)) * 0.75";
							};
						};
						class App02: RscExileXM8AppButton1x1
						{
							idc = 1106;
							x = "(23.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_party_ca.paa";
							text = "Party";
							onButtonClick = "[] spawn ExileClient_gui_xm8_showPartySlides";
						};
						class App03: RscExileXM8AppButton1x1
						{
							idc = 1105;
							x = "(30 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_clan_ca.paa";
							text = "Clan";
							onButtonClick = "['Not yet implemented. Will come in a later version.', 'Okay :('] call ExileClient_gui_xm8_showWarning";
						};
						class App04: RscExileXM8AppButton2x1
						{
							idc = 1113;
							x = "(23.5 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_territory_ca.paa";
							text = "Territory";
							onButtonClick = "['territory', 0] call ExileClient_gui_xm8_slide";
						};
						class App05: RscExileXM8AppButton1x1
						{
							idc = 1104;
							x = "(10.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\app_stats_scanner_co.paa";
							text = "Health Scanner";
							onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
						};
						class App06: RscExileXM8AppButton1x1
						{
							idc = 1103;
							x = "(17 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_bounties_ca.paa";
							text = "Bounties";
							onButtonClick = "['Not yet implemented. Will come in a later version.', 'Okay :('] call ExileClient_gui_xm8_showWarning";
						};
						class App07: RscExileXM8AppButton1x1
						{
							idc = 1107;
							x = "(23.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_cosa_nostra_ca.paa";
							text = "Server Info";
							onButtonClick = "['server', 0] call ExileClient_gui_xm8_slide";
						};
						class App08: RscExileXM8AppButton1x1
						{
							idc = 1117;
							x = "(30 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
							text = "Settings";
							onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideHealthScanner: RscExileXM8Slide
				{
					idc = 4120;
					show = "false";
					class Controls
					{
						class GoBackButton: RscButtonMenu
						{
							idc = 4122;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class HealthInfoControlGroup: RscControlsGroupNoHScrollbars
						{
							idc = -1;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "30 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {0,0,0,0.25};
							class controls
							{
								class HealthInfo: RscStructuredText
								{
									idc = 4121;
									x = 0;
									y = 0;
									w = "29 * (0.025)";
									h = "12 * (0.04)";
								};
							};
						};
					};
				};
				class SlideHostParty: RscExileXM8Slide
				{
					idc = 4080;
					show = "false";
					class Controls
					{
						class PartyButton: RscExileXM8Button
						{
							idc = 4081;
							text = "Host Party";
							x = "(10.5 - 3) * (0.025)";
							y = "(12 - 2) * (0.04)";
							w = "19 * (0.025)";
							h = "2 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_xm8_slide_hostParty_event_onOkayButtonClick";
						};
						class NameInput: RscExileXM8Edit
						{
							idc = 4082;
							text = "Eichi's Party";
							x = "(10.5 - 3) * (0.025)";
							y = "(9 - 2) * (0.04)";
							w = "19 * (0.025)";
							h = "2 * (0.04)";
							tooltip = "Name for your party";
						};
						class GoBackButton: RscButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideSettings: RscExileXM8Slide
				{
					idc = 4070;
					show = "false";
					class Controls
					{
						class GoBackButton: RscButtonMenu
						{
							idc = 4071;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class 8GDropDown: RscCombo
						{
							idc = 4072;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
						};
						class 8GLabel: RscText
						{
							idc = -1;
							text = "Show my device in global 8G network.";
							x = "(13 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class SoundDropDown: RscCombo
						{
							idc = 4075;
							x = "(5 - 3) * (0.025)";
							y = "(7 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
						};
						class SoundLabel: RscText
						{
							idc = -1;
							text = "Play a beep sound on notifications.";
							x = "(13 - 3) * (0.025)";
							y = "(7 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class PartyEspDropDown: RscCombo
						{
							idc = 4076;
							x = "(5 - 3) * (0.025)";
							y = "(9 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
						};
						class PartyEspLabel: RscText
						{
							idc = -1;
							text = "Color of 3D party icons and name tags.";
							x = "(13 - 3) * (0.025)";
							y = "(9 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class PartyEspSlider: RscXSliderH
						{
							idc = 4078;
							x = "(5 - 3) * (0.025)";
							y = "(11 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
						};
						class PartyEspSliderLabel: RscText
						{
							idc = -1;
							text = "Opacity of 3D party icons and name tags.";
							x = "(13 - 3) * (0.025)";
							y = "(11 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class PartyMarkerSlider: RscXSliderH
						{
							idc = 4079;
							x = "(5 - 3) * (0.025)";
							y = "(13 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
						};
						class PartyMarkerSliderLabel: RscText
						{
							idc = -1;
							text = "Opacity of 3D party markers.";
							x = "(13 - 3) * (0.025)";
							y = "(13 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
					};
				};
				class SlideServer: RscExileXM8Slide
				{
					idc = 4090;
					show = "false";
					class Controls
					{
						class GoBackButton: RscButtonMenu
						{
							idc = 4091;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class InfoHTML: RscHTML
						{
							idc = 4092;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "30 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {0,0,0,0.25};
						};
					};
				};
				class SlideClan: RscExileXM8Slide
				{
					idc = 4060;
					show = "false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc = 4061;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "14 * (0.04)";
						};
						class KickButton: RscButtonMenu
						{
							idc = 4062;
							text = "KICK";
							x = "(29 - 3) * (0.025)";
							y = "(10 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
						};
						class LeaveButton: RscButtonMenu
						{
							idc = 4063;
							text = "LEAVE";
							x = "(29 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
						};
						class SettingsButton: RscButtonMenu
						{
							idc = 4064;
							text = "SETTINGS";
							x = "(29 - 3) * (0.025)";
							y = "(12 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
						};
						class GoBackButton: RscButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideParty: RscExileXM8Slide
				{
					idc = 4100;
					show = "false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc = 4102;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_party_event_onMemberListBoxSelectionChanged";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc = 4104;
							text = "KICK";
							x = "(29 - 3) * (0.025)";
							y = "(10 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_party_event_onKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc = 4105;
							text = "LEAVE";
							x = "(29 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_party_event_onLeaveButtonClick";
						};
						class GoBackButton: RscButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlidePlayers: RscExileXM8Slide
				{
					idc = 4110;
					show = "false";
					class Controls
					{
						class PlayersListBox: RscExileXM8ListBox
						{
							idc = 4111;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "19 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_players_event_onPlayerListBoxSelectionChanged";
						};
						class PartyButton: RscButtonMenu
						{
							idc = 4112;
							text = "INVITE TO PARTY";
							x = "(26 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_players_event_onPartyButtonClick";
						};
						class TerritoryGroup: RscExileXM8Frame
						{
							idc = -1;
							x = "(26 - 3) * (0.025) + (0)";
							y = "(7 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "4 * (0.04)";
						};
						class TerritoryGroupCaption: RscText
						{
							idc = -1;
							text = "TERRITORY";
							sizeEx = "11 * pixelH";
							font = "OrbitronLight";
							colorText[] = {"252/255","253/255","255/255",1};
							x = "(26 - 3) * (0.025) + (0)";
							y = "(7 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							style = 2;
						};
						class TerritoryDropdown: RscCombo
						{
							idc = 4114;
							x = "(26.5 - 3) * (0.025) + (0)";
							y = "(8 - 2) * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1 * (0.04)";
						};
						class GrantTerritoryBuildRightsButton: RscButtonMenu
						{
							idc = 4115;
							text = "GRANT RIGHTS";
							x = "(26.5 - 3) * (0.025) + (0)";
							y = "(9.5 - 2) * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_players_event_onGrantTerritoryButtonClick";
						};
						class SendPopTabGroup: RscExileXM8Frame
						{
							idc = -1;
							x = "(26 - 3) * (0.025) + (0)";
							y = "(12 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "4.5 * (0.04)";
						};
						class SendPopTabGroupCaption: RscText
						{
							idc = -1;
							text = "SEND POP TABS";
							sizeEx = "11 * pixelH";
							font = "OrbitronLight";
							colorText[] = {"252/255","253/255","255/255",1};
							x = "(26 - 3) * (0.025) + (0)";
							y = "(12 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							style = 2;
						};
						class PopTabsInputBox: RscExileXM8Edit
						{
							idc = 4116;
							x = "(26.5 - 3) * (0.025) + (0)";
							y = "(13 - 2) * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1.5 * (0.04)";
							colorBackground[] = {"41/255","39/255","46/255",1};
							style = "0x02 + 0x50";
							type = 2;
							onChar = "_this call ExileClient_gui_xm8_slide_players_event_onPopTabsInputBoxChar";
						};
						class TransferPopTabsButton: RscButtonMenu
						{
							idc = 4117;
							text = "TRANSFER";
							x = "(26.5 - 3) * (0.025) + (0)";
							y = "(15 - 2) * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_players_event_onSendPopTabsButtonClick";
						};
						class GoBackButton: RscButtonMenu
						{
							idc = 4113;
							text = "GO BACK";
							x = "(26 - 3) * (0.025) + (0)";
							y = "(18 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideTerritory: RscExileXM8Slide
				{
					idc = 4130;
					show = "false";
					class Controls
					{
						class TerritoryDropdown: RscCombo
						{
							idc = 4132;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_territory_event_onTerritoryDropdownSelectionChanged";
						};
						class PlayersListBox: RscListBox
						{
							idc = 4131;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(6.5 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "11.5 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_territory_event_onPlayerListBoxSelectionChanged";
						};
						class InfoText: RscText
						{
							idc = 4133;
							text = "";
							x = "(5 - 3) * (0.025) + (0)";
							y = "(18 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							colorBackground[] = {0,0,0,0.8};
						};
						class GoBackButton: RscButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class KickButton: RscButtonMenu
						{
							idc = 4134;
							text = "KICK";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(6.5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onKickButtonClick";
						};
						class LeaveButton: RscButtonMenu
						{
							idc = 4135;
							text = "LEAVE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onLeaveButtonClick";
						};
						class PromoteButton: RscButtonMenu
						{
							idc = 4136;
							text = "PROMOTE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(8 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onPromoteButtonClick";
						};
						class DemoteButton: RscButtonMenu
						{
							idc = 4137;
							text = "DEMOTE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(9.5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onDemoteButtonClick";
						};
						class RadiusButton: RscButtonMenu
						{
							idc = 4138;
							text = "RADIUS";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(11 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onRadiusButtonClick";
						};
					};
				};
			};
		};
		class Warning: RscExileXM8Slide
		{
			idc = 4030;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class OkayButton: RscExileXM8Button
				{
					idc = 4031;
					text = "Meh... Okay";
					x = "(16.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "call ExileClient_gui_xm8_hideWarning";
				};
				class Message: RscStructuredText
				{
					idc = 4032;
					text = "<t align='center'><t color='#e14141'>Whoops</t><br/><t color='#fcfdff' size='1.4'>Computer says no.</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Message: RscExileXM8Slide
		{
			idc = 4010;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class OkayButton: RscExileXM8Button
				{
					idc = 4011;
					text = "Okay";
					x = "(16.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "call ExileClient_gui_xm8_hideMessage";
				};
				class Question: RscStructuredText
				{
					idc = 4012;
					text = "<t align='center'><t color='#a0df3b'>Yay!</t><br/><t color='#fcfdff' size='1.4'>You have done something cool!</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Confirm: RscExileXM8Slide
		{
			idc = 4020;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class Question: RscStructuredText
				{
					idc = 4021;
					text = "<t align='center'><t color='#00b2cd'>Confirm</t><br/><t color='#fcfdff' size='1.4'>Kick Eichi?</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
				class YesButton: RscExileXM8Button
				{
					idc = 4022;
					text = "Kick";
					x = "(12.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "true call ExileClient_gui_xm8_hideConfirm";
				};
				class NoButton: RscExileXM8Button
				{
					idc = 4023;
					text = "Don't kick";
					x = "(20.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "false call ExileClient_gui_xm8_hideConfirm";
				};
			};
		};
		class LeftHeader: RscStructuredText
		{
			idc = 4003;
			text = "<t align='left' font='RobotoRegular' shadow='0'>147257</t>";
			x = "3 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "17 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class RightHeader: RscStructuredText
		{
			idc = 4005;
			text = "<t align='right' font='RobotoRegular' shadow='0'><img image='\exile_assets\texture\ui\xm8_signal_0_ca.paa' shadow='0'/> 21:45</t>";
			x = "20 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "17 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CenterHeader: RscStructuredText
		{
			idc = 4004;
			text = "<t align='center' font='RobotoMedium' shadow='0'>XM8</t>";
			x = "9 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "22 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class PowerButton: RscButton
		{
			idc = 4006;
			x = "19 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "2 * (0.025)";
			h = "2 * (0.04)";
			tooltip = "On/Off";
			onButtonClick = "[] spawn ExileClient_gui_xm8_togglePower";
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
		};
		class BackgroundSplash: RscPictureKeepAspect
		{
			idc = 4002;
			text = "\exile_assets\texture\ui\xm8_splash_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
	};
};
class RscInGameUI
{
	class RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			show = "false";
			y = -1;
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			show = "false";
			y = -1;
		};
		class CA_BackgroundVehicle: RscPicture
		{
			show = "false";
			y = -1;
		};
		class CA_BackgroundVehicleTitle: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_BackgroundVehicleTitleDark: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_BackgroundFuel: RscPicture
		{
			show = "false";
			y = -1;
		};
		class CA_Vehicle: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_VehicleRole: RscPicture
		{
			show = "false";
			y = -1;
		};
		class CA_ValueFuel: RscProgress
		{
			show = "false";
			y = -1;
		};
		class CA_SpeedBackground: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_Speed: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_SpeedUnits: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_AltBackground: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_Alt: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_AltUnits: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_Depth: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_HitZones: RscHitZones
		{
			show = "false";
			y = -1;
		};
		class CA_VehicleTogglesBackground: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = "false";
			y = -1;
		};
		class CA_Zeroing: RscText
		{
			show = "false";
			y = -1;
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			show = "false";
			y = -1;
		};
		class CA_TextFlares: RscIGUIValue
		{
			show = "false";
			y = -1;
		};
	};
	class RscStanceInfo
	{
		show = "false";
		y = -1;
		class StanceIndicatorBackground: RscPicture
		{
			show = "false";
			y = -1;
		};
		class StanceIndicator: RscPictureKeepAspect
		{
			show = "false";
			y = -1;
		};
	};
	class RscWeaponZeroing: RscUnitInfo
	{
		class CA_Zeroing: RscText
		{
			show = "false";
			y = -1;
		};
	};
	class RscWeaponRangeZeroing: RscUnitInfo
	{
		class CA_DistanceText: RscOpticsText
		{
			show = "false";
			y = -1;
		};
		class CA_Distance: RscOpticsValue
		{
			show = "false";
			y = -1;
		};
	};
	class RscHint
	{
		idd = 301;
		movingEnable = 0;
		controls[] = {"Background","Hint"};
		class Background: RscText
		{
			idc = 101;
			style = 128;
			x = "safeZoneX + safeZoneW * 0.5 - safeZoneW * 0.1";
			y = "(safeZoneY + safeZoneH) - 60 * pixelH - 60 * pixelH";
			w = "safeZoneW * 0.2";
			h = "50 * pixelH";
			text = "";
			colorBackground[] = {"19/255","22/255","27/255",0.8};
			shadow = 0;
		};
		class Hint: RscStructuredText
		{
			idc = 102;
			x = "safeZoneX + safeZoneW * 0.5 - safeZoneW * 0.1 + 10 * pixelW";
			y = "(safeZoneY + safeZoneH) - 60 * pixelH - 60 * pixelH";
			w = "safeZoneW * 0.2 - 20 * pixelW";
			h = "40 * pixelH";
			style = 16;
			shadow = 0;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			class Attributes: Attributes{};
		};
	};
};
class RscExileMostWantedDialog
{
	idd = "IDD_EXILE_MOST_WANTED_DIALOG";
	onLoad = "uiNamespace setVariable ['RscExileMostWantedDialog', _this select 0]";
	onUnload = "call ExileClient_gui_mostWantedDialog_event_onUnload; uiNamespace setVariable ['RscExileMostWantedDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackgroundRight: RscText
		{
			idc = 1002;
			x = "0 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaptionRight: RscText
		{
			idc = 1003;
			text = "MOST WANTED";
			x = "0 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
	class controls
	{
		class CloseCross: RscActiveText
		{
			idc = 3032;
			x = "42.8 * (0.025) + (0)";
			y = "0.2 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "0.5 * (0.04)";
			action = "closeDialog 0;";
			style = 2096;
			color[] = {1,1,1,0.7};
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class CancelButton: RscButtonMenuCancel
		{
			x = "28.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			action = "closeDialog 0";
		};
		class BountyListBox: RscListBox
		{
			idc = 1500;
			x = "0.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "23 * (0.04)";
		};
		class PlayerLabel: RscText
		{
			idc = 1004;
			text = "Player Name:";
			x = "28.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class PlayerDropdown: RscCombo
		{
			idc = 2100;
			x = "28.5 * (0.025) + (0)";
			y = "2.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class BountyDropdown: RscCombo
		{
			idc = 2101;
			x = "28.5 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class BountyLabel: RscText
		{
			idc = 1005;
			text = "Bounty:";
			x = "28.5 * (0.025) + (0)";
			y = "4 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class AddBountyButton: RscButtonMenu
		{
			idc = 2400;
			text = "ADD BOUNTY";
			x = "28.5 * (0.025) + (0)";
			y = "7 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscPendingInvitation
{
	textureConnectionQualityPoor = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[] = {1,1,1,1};
	x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
	y = "(safeZoneY + safeZoneH) - 455 * pixelH - 64 * pixelH";
	w = "64 * pixelW";
	h = "64 * pixelH";
	shadow = 0;
	timeout = 10;
	blinkingPeriod = 2;
};
class RscPendingInvitationInGame
{
	textureConnectionQualityPoor = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[] = {1,1,1,1};
	x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
	y = "(safeZoneY + safeZoneH) - 540 * pixelH - 64 * pixelH";
	w = "64 * pixelW";
	h = "64 * pixelH";
	shadow = 0;
	timeout = 10;
	blinkingPeriod = 2;
};
class RscTitles
{
	titles[] = {};
	class RscExileGasMask
	{
		idd = 24000;
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		class controls
		{
			class Overlay: RscPicture
			{
				idc = -1;
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
				text = "\exile_assets\texture\ui\Exile_GasMask_ca.paa";
			};
		};
	};
	class RscExileConstructionMode
	{
		idd = 24006;
		onLoad = "uiNamespace setVariable ['RscExileConstructionMode', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileConstructionMode', displayNull]";
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		class controls
		{
			class Mode: RscText
			{
				idc = 1000;
				text = "FREE MODE, NO PHYSICS";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y = "safeZoneY + 60 * pixelH";
				w = "250 * pixelW";
				h = "40 * pixelH";
				style = 2;
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class DescriptionBackground: RscText
			{
				idc = 1002;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH";
				w = "250 * pixelW";
				h = "350 * pixelH";
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class Description: RscStructuredText
			{
				idc = 1001;
				text = "<t align='left'>Free Mode</t><t align='right' color='#3fd4fc'>1</t><br/><t align='left'>Grid Mode</t><t align='right' color='#3fd4fc'>2</t><br/><t align='left'>Snap Mode</t><t align='right' color='#3fd4fc'>3</t><br/><br/><t align='left'>Toggle Physics</t><t align='right' color='#3fd4fc'>4</t><br/><t align='left'>Toggle Assistant</t><t align='right' color='#3fd4fc'>5</t><br/><t align='left'>Freeze Object</t><t align='right' color='#3fd4fc'>6</t><br/><br/><t align='left'>Rotation</t><t align='right' color='#3fd4fc'>Q/E</t><br/><t align='left'>Elevation</t><t align='right' color='#3fd4fc'>PAGE UP/DOWN</t><br/><t align='left'>Distance</t><t align='right' color='#3fd4fc'>HOME/END</t><br/><br/><t align='left'>Larger Steps</t><t align='right' color='#3fd4fc'>SHIFT</t><br/><t align='left'>Smaller Steps</t><t align='right' color='#3fd4fc'>CONTROL</t><br/><br/><t align='left'>Place</t><t align='right' color='#3fd4fc'>SPACE</t><br/><t align='left'>Abort</t><t align='right' color='#3fd4fc'>ESCAPE</t>";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW + 10 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH + 10 * pixelH";
				w = "(250 - 20) * pixelW";
				h = "(450 - 20) * pixelH";
				size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				colorBackground[] = {0,0,0,0};
			};
		};
	};
	class RscExileHUD
	{
		idd = 24014;
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		onLoad = "uiNamespace setVariable ['RscExileHUD', _this select 0];";
		class controls
		{
			class Grenade: RscControlsGroup
			{
				idc = 1400;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc = 1401;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_grenade_ca.paa";
					};
					class Ammo: RscText
					{
						idc = 1402;
						x = "256 * pixelW - 55 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "45 * pixelW";
						h = "35 * pixelH";
						colorText[] = {1,1,1,1};
						text = "";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "29 * pixelH";
					};
					class TypeSingleLine: RscText
					{
						idc = 1403;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "60 * pixelW";
						h = "35 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class TypeDoubleLine1: RscText
					{
						idc = 1404;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 90 * pixelH";
						w = "60 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class TypeDoubleLine2: RscText
					{
						idc = 1405;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 80 * pixelH";
						w = "60 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
				};
			};
			class Weapon: RscControlsGroup
			{
				idc = 1100;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc = 1101;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Ammo: RscText
					{
						idc = 1102;
						x = "256 * pixelW - 235 * pixelW";
						y = "128 * pixelH - 50 * pixelH";
						w = "125 * pixelW";
						h = "50 * pixelH";
						colorText[] = {1,1,1,1};
						text = "30";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "50 * pixelH";
					};
					class Magazines: RscText
					{
						idc = 1104;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 40 * pixelH";
						w = "55 * pixelW";
						h = "30 * pixelH";
						colorText[] = {1,1,1,1};
						text = "2";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "30 * pixelH";
					};
					class Zeroing: RscText
					{
						idc = 1105;
						x = "256 * pixelW - 55 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 45 * pixelH";
						w = "55 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "100m";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class FireMode: RscText
					{
						idc = 1103;
						x = "256 * pixelW - 60 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 25 * pixelH";
						w = "60 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "SEMI";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
				};
			};
			class Vehicle: RscControlsGroup
			{
				idc = 1200;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class VehicleBackground: RscPictureKeepAspect
					{
						idc = 1201;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Speed: RscText
					{
						idc = 1202;
						x = "256 * pixelW - 235 * pixelW";
						y = "128 * pixelH - 50 * pixelH";
						w = "125 * pixelW";
						h = "50 * pixelH";
						colorText[] = {1,1,1,1};
						text = "30";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "50 * pixelH";
					};
					class Height: RscText
					{
						idc = 1203;
						x = "256 * pixelW - 55 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 45 * pixelH";
						w = "55 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "100m";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
					class Fuel: RscText
					{
						idc = 1204;
						x = "256 * pixelW - 100 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 25 * pixelH";
						w = "100 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
				};
			};
			class Stats: RscControlsGroup
			{
				idc = 1300;
				x = "safeZoneX + 60 * pixelW";
				y = "(safeZoneY + safeZoneH) - 60 * pixelH - 64 * pixelH";
				w = "256 * pixelW";
				h = "64 * pixelH";
				class controls
				{
					class StatsBackground: RscPictureKeepAspect
					{
						idc = 1301;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "64 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_player_ca.paa";
					};
					class HungerLabel: RscText
					{
						idc = 1303;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "HUNGER";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class ThirstLabel: RscText
					{
						idc = 1305;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "THIRST";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class Hunger: RscText
					{
						idc = 1302;
						x = "85 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class Thirst: RscText
					{
						idc = 1304;
						x = "85 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class HealthLabel: RscText
					{
						idc = 1307;
						x = "10 * pixelW";
						y = "64 * pixelH - 35 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "HP";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class Health: RscText
					{
						idc = 1306;
						x = "55 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "80 * pixelW";
						h = "40 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "30 * pixelH";
						show = "false";
					};
					class EnvironmentTemperatureLabel: RscText
					{
						idc = 1309;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "CLIMATE";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class BodyTemperatureLabel: RscText
					{
						idc = 1311;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "BODY";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class EnvironmentTemperature: RscText
					{
						idc = 1308;
						x = "65 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "0°C";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
					class BodyTemperature: RscText
					{
						idc = 1310;
						x = "65 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "37°C";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
				};
			};
			class MuzzleDisplay: RscText
			{
				idc = 1005;
				x = "(safeZoneX + safeZoneW) - 280 * pixelW";
				y = "(safeZoneY + safeZoneH) - 50 * pixelH";
				w = "220 * pixelW";
				h = "30 * pixelH";
				colorText[] = {1,1,1,1};
				colorBackground[] = {"19/255","22/255","27/255",0.8};
				text = "";
				shadow = 0;
				fixedWidth = 0;
				sizeEx = "18 * pixelH";
				fade = 1;
				style = 1;
			};
			class GroupMembers: RscStructuredText
			{
				idc = 1000;
				x = "safeZoneX + 60 * pixelW";
				y = "safeZoneY + 60 * pixelH";
				w = "400 * pixelW";
				h = "500 * pixelH";
				colorBackground[] = {0,0,0,0};
				lineSpacing = 2;
				text = "";
				shadow = 2;
			};
			class HungerIcon: RscPictureKeepAspect
			{
				idc = 1002;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 630 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_hunger_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class ThirstIcon: RscPictureKeepAspect
			{
				idc = 1007;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 720 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_thirst_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class CombatIcon: RscPictureKeepAspect
			{
				idc = 1008;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 810 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_combat_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class BambiIcon: RscPictureKeepAspect
			{
				idc = 1003;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 455 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_bambi_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
			class EarPlugsIcon: RscPictureKeepAspect
			{
				idc = 1004;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 365 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_earplugs_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
			class AutoRunIcon: RscPictureKeepAspect
			{
				idc = 1006;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 275 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_autorun_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
		};
	};
	class RscExileNotification
	{
		idd = 20020;
		onLoad = "uiNamespace setVariable ['RscExileExileNotification', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileExileNotification', displayNull]";
		duration = 999999;
		class controls
		{
			class Background: RscText
			{
				idc = 4000;
				x = "1.004167 * safezoneW + safezoneX";
				y = "0.786 * safezoneH + safezoneY";
				w = "0.166146 * safezoneW";
				h = "0.077 * safezoneH";
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class Icon: RscPictureKeepAspect
			{
				idc = 4002;
				text = "";
				x = "1.009896 * safezoneW + safezoneX";
				y = "0.797 * safezoneH + safezoneY";
				w = "0.034375 * safezoneW";
				h = "0.055 * safezoneH";
			};
			class Message: RscStructuredText
			{
				idc = 4001;
				x = "1.05 * safezoneW + safezoneX";
				y = "0.797 * safezoneH + safezoneY";
				w = "0.120313 * safezoneW";
				h = "0.055 * safezoneH";
			};
			class Background1: Background
			{
				idc = "4000 + 10";
			};
			class Icon1: Icon
			{
				idc = "4002 + 10";
			};
			class Message1: Message
			{
				idc = "4001 + 10";
			};
			class Background2: Background
			{
				idc = "4000 + 20";
			};
			class Icon2: Icon
			{
				idc = "4002 + 20";
			};
			class Message2: Message
			{
				idc = "4001 + 20";
			};
			class Background3: Background
			{
				idc = "4000 + 30";
			};
			class Icon3: Icon
			{
				idc = "4002 + 30";
			};
			class Message3: Message
			{
				idc = "4001 + 30";
			};
			class Background4: Background
			{
				idc = "4000 + 40";
			};
			class Icon4: Icon
			{
				idc = "4002 + 40";
			};
			class Message4: Message
			{
				idc = "4001 + 40";
			};
			class Background5: Background
			{
				idc = "4000 + 50";
			};
			class Icon5: Icon
			{
				idc = "4002 + 50";
			};
			class Message5: Message
			{
				idc = "4001 + 50";
			};
			class Background6: Background
			{
				idc = "4000 + 60";
			};
			class Icon6: Icon
			{
				idc = "4002 + 60";
			};
			class Message6: Message
			{
				idc = "4001 + 60";
			};
			class Background7: Background
			{
				idc = "4000 + 70";
			};
			class Icon7: Icon
			{
				idc = "4002 + 70";
			};
			class Message7: Message
			{
				idc = "4001 + 70";
			};
			class Background8: Background
			{
				idc = "4000 + 80";
			};
			class Icon8: Icon
			{
				idc = "4002 + 80";
			};
			class Message8: Message
			{
				idc = "4001 + 80";
			};
			class Background9: Background
			{
				idc = "4000 + 90";
			};
			class Icon9: Icon
			{
				idc = "4002 + 90";
			};
			class Message9: Message
			{
				idc = "4001 + 90";
			};
		};
	};
	class RscExileActionProgress
	{
		idd = 24026;
		onLoad = "uiNamespace setVariable ['RscExileActionProgress', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileActionProgress', displayNull]";
		duration = 999999;
		class controls
		{
			class Background: RscText
			{
				idc = -1;
				x = "0 * (0.025) + (0)";
				y = "0 * (0.04) + (0)";
				w = "40 * (0.025)";
				h = "25 * pixelH";
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class ProgressBackground: RscText
			{
				idc = 4001;
				x = "0 * (0.025) + (0)    + 10 * pixelW";
				y = "0 * (0.04) + (0)    + 10 * pixelH";
				w = "40 * (0.025)    - 60 * pixelW";
				h = "5 * pixelH";
				colorBackground[] = {"19/255","22/255","27/255",1};
			};
			class Progress: RscText
			{
				idc = 4000;
				x = "0 * (0.025) + (0)    + 10 * pixelW";
				y = "0 * (0.04) + (0)    + 10 * pixelH";
				w = "40 * (0.025)    - 60 * pixelW";
				h = "5 * pixelH";
				colorBackground[] = {0,0.78,0.93,1};
			};
			class Label: RscText
			{
				idc = 4002;
				x = "40 * (0.025) + (0)   - 110 * pixelW";
				y = "0 * (0.04) + (0)";
				w = "110 * pixelW";
				h = "25 * pixelH";
				colorBackground[] = {0,0,0,0};
				style = 1;
				sizeEx = "18 * pixelH";
				colorText[] = {1,1,1,1};
				text = "100%";
				font = "OrbitronLight";
			};
		};
	};
};
//};
