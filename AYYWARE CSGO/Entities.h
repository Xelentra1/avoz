#pragma once

#include "MiscDefinitions.h"
#include "ClientRecvProps.h"
#include "offsets.h"
#include "Vector.h"

#define TEAM_CS_T 2
#define TEAM_CS_CT 3

#define BONE_USED_BY_HITBOX			0x00000100

#define ptr( x, x1, x2 ) *(x*)( (DWORD)x1 + (DWORD)x2 )

class IClientRenderable;
class IClientNetworkable;
class IClientUnknown;
class IClientThinkable;
class IClientEntity;
Class CSWeaponInfo;
Class CCSWeaponData;

class CSWeaponInfo
{
public:

/* char _0x0000[2048];
__int32 m_iAmmoType; //0x07B0
char _0x0804[52];
__int32 m_iWeaponType; //0x0838
__int32 m_iTeam; //0x083C
__int32 m_iWeaponId; //0x0840
BYTE m_IsFullAuto; //0x0844
char _0x0845[3];
float m_flHeatPerShot; //0x0848
__int32 m_iWeaponPrice; //0x084C
float m_flArmorRatio; //0x0850
float m_flMaxPlayerSpeed; //0x0854
float m_flMaxPlayerSpeedAlt; //0x0858
__int32 m_iCrosshairMinDistance; //0x085C
__int32 m_iCrosshairDeltaDistance; //0x0860
float m_flPenetration; //0x0864
__int32 m_iDamage; //0x0868
float m_flRange; //0x086C
float m_flRangeModifier; //0x0870
__int32 m_iBullets; //0x0874
float m_flCycleTime; //0x0878
float m_flCycleTimeAlt; //0x087C
char _0x0880[416];
float m_flSpread; //0x0A20
float m_flSpreadAlt; //0x0A24
float m_flInaccuracyCrouch; //0x09D8
float m_flInaccuracyCrouchAlt; //0x09DC
float m_flInaccuracyStand; //0x09E0
float m_flInaccuracyStandAlt; //0x09E4
float m_flInaccuracyJump; //0x09E8
float m_flInaccuracyJumpAlt; //0x09EC
float m_flInaccuracyLand; //0x09F0
float m_flInaccuracyLandAlt; //0x09F4
float m_flInaccuracyLadder; //0x09F8
float m_flInaccuracyLadderAlt; //0x09FC
float m_flInaccuracyFire; //0x0A00
float m_flInaccuracyFireAlt; //0x0A04
float m_flInaccuracyMove; //0x0A08
float m_flInaccuracyMoveAlt; //0x0A0C
float m_flRecoveryTimeStand; //0x0A10
float m_flRecoveryTimeCrouch; //0x0A14
float m_flInaccuracyReload; //0x0A18
float m_flInaccuracyAltSwitch; //0x0A1C
float m_flRecoilAngle; //0x0A20
float m_flRecoilAngleAlt; //0x0A24
float m_flRecoilAngleVariance; //0x0A28
float m_flRecoilAngleVarianceAlt; //0x0A2C
float m_flRecoilMagnitude; //0x0A30
float m_flRecoilMagnitudeAlt; //0x0A34
float m_flRecoilMagnitudeVariance; //0x0A38
float m_flRecoilMagnitudeVarianceAlt; //0x0A3C
__int32 m_iRecoilSeed; //0x0A40
float m_flFlinchVelocityModifierLarge; //0x0A44
float m_flFlinchVelocityModifierSmall; //0x0A48
float m_flTimeToIdle; //0x0A4C
float m_flIdleInterval; //0x0A50 */

public:

virtual ~CSWeaponInfo() {};

	char* consoleName; // 0x0004
	char pad_0008[12]; // 0x0008
	int iMaxClip1; // 0x0014
	int iMaxClip2; // 0x0018
	int iDefaultClip1; // 0x001C
	int iDefaultClip2; // 0x0020
	char pad_0024[8]; // 0x0024
	char* szWorldModel; // 0x002C
	char* szViewModel; // 0x0030
	char* szDroppedModel; // 0x0034
	char pad_0038[4]; // 0x0038
	char* N0000023E; // 0x003C
	char pad_0040[56]; // 0x0040
	char* szEmptySound; // 0x0078
	char pad_007C[4]; // 0x007C
	char* szBulletType; // 0x0080
	char pad_0084[4]; // 0x0084
	char* szHudName; // 0x0088
	char* szWeaponName; // 0x008C
	char pad_0090[56]; // 0x0090
	int WeaponType; // 0x00C8
	int iWeaponPrice; // 0x00CC
	int iKillAward; // 0x00D0
	char* szAnimationPrefix; // 0x00D4
	float flCycleTime; // 0x00D8
	float flCycleTimeAlt; // 0x00DC
	float flTimeToIdle; // 0x00E0
	float flIdleInterval; // 0x00E4
	bool bFullAuto; // 0x00E8
	char pad_0x00E5[3]; // 0x00E9
	int iDamage; // 0x00EC
	float flArmorRatio; // 0x00F0
	int iBullets; // 0x00F4
	float flPenetration; // 0x00F8
	float flFlinchVelocityModifierLarge; // 0x00FC
	float flFlinchVelocityModifierSmall; // 0x0100
	float flRange; // 0x0104
	float flRangeModifier; // 0x0108
	float flThrowVelocity; // 0x010C
	char pad_0x010C[12]; // 0x0110
	bool bHasSilencer; // 0x011C
	char pad_0x0119[3]; // 0x011D
	char* pSilencerModel; // 0x0120
	int iCrosshairMinDistance; // 0x0124
	int iCrosshairDeltaDistance;// 0x0128 - iTeam?
	float flMaxPlayerSpeed; // 0x012C
	float flMaxPlayerSpeedAlt; // 0x0130
	float flSpread; // 0x0134
	float flSpreadAlt; // 0x0138
	float flInaccuracyCrouch; // 0x013C
	float flInaccuracyCrouchAlt; // 0x0140
	float flInaccuracyStand; // 0x0144
	float flInaccuracyStandAlt; // 0x0148
	float flInaccuracyJumpInitial;// 0x014C
	float flInaccuracyJump; // 0x0150
	float flInaccuracyJumpAlt; // 0x0154
	float flInaccuracyLand; // 0x0158
	float flInaccuracyLandAlt; // 0x015C
	float flInaccuracyLadder; // 0x0160
	float flInaccuracyLadderAlt; // 0x0164
	float flInaccuracyFire; // 0x0168
	float flInaccuracyFireAlt; // 0x016C
	float flInaccuracyMove; // 0x0170
	float flInaccuracyMoveAlt; // 0x0174
	float flInaccuracyReload; // 0x0178
	int iRecoilSeed; // 0x017C
	float flRecoilAngle; // 0x0180
	float flRecoilAngleAlt; // 0x0184
	float flRecoilAngleVariance; // 0x0188
	float flRecoilAngleVarianceAlt; // 0x018C
	float flRecoilMagnitude; // 0x0190
	float flRecoilMagnitudeAlt; // 0x0194
	float flRecoilMagnitudeVariance; // 0x0198
	float flRecoilMagnitudeVarianceAlt; // 0x019C
	float flRecoveryTimeCrouch; // 0x01A0
	float flRecoveryTimeStand; // 0x01A4
	float flRecoveryTimeCrouchFinal; // 0x01A8
	float flRecoveryTimeStandFinal; // 0x01AC
	int iRecoveryTransitionStartBullet;// 0x01B0
	int iRecoveryTransitionEndBullet; // 0x01B4
	bool bUnzoomAfterShot; // 0x01B8
	bool bHideViewModelZoomed; // 0x01B9
	char pad_0x01B5[2]; // 0x01BA
	char iZoomLevels[3]; // 0x01BC
	int iZoomFOV[2]; // 0x01C0
	float fZoomTime[3]; // 0x01C4
	char* szWeaponClass; // 0x01D4
	float flAddonScale; // 0x01D8
	char pad_0x01DC[4]; // 0x01DC
	char* szEjectBrassEffect; // 0x01E0
	char* szTracerEffect; // 0x01E4
	int iTracerFrequency; // 0x01E8
	int iTracerFrequencyAlt; // 0x01EC
	char* szMuzzleFlashEffect_1stPerson; // 0x01F0
	char pad_0x01F4[4]; // 0x01F4
	char* szMuzzleFlashEffect_3rdPerson; // 0x01F8
	char pad_0x01FC[4]; // 0x01FC
	char* szMuzzleSmokeEffect; // 0x0200
	float flHeatPerShot; // 0x0204
	char* szZoomInSound; // 0x0208
	char* szZoomOutSound; // 0x020C
	float flInaccuracyPitchShift; // 0x0210
	float flInaccuracySoundThreshold; // 0x0214
	float flBotAudibleRange; // 0x0218
	char pad_0x0218[8]; // 0x0220
	char* pWrongTeamMsg; // 0x0224
	bool bHasBurstMode; // 0x0228
	char pad_0x0225[3]; // 0x0229
	bool bIsRevolver; // 0x022C
	bool bCannotShootUnderwater; // 0x0230
};

class CCSWeaponData
{
public:

virtual ~CCSWeaponData() {};
	char* consoleName; // 0x0004
	char pad_0008[12]; // 0x0008
	int iMaxClip1; // 0x0014
	int iMaxClip2; // 0x0018
	int iDefaultClip1; // 0x001C
	int iDefaultClip2; // 0x0020
	char pad_0024[8]; // 0x0024
	char* szWorldModel; // 0x002C
	char* szViewModel; // 0x0030
	char* szDroppedModel; // 0x0034
	char pad_0038[4]; // 0x0038
	char* N0000023E; // 0x003C
	char pad_0040[56]; // 0x0040
	char* szEmptySound; // 0x0078
	char pad_007C[4]; // 0x007C
	char* szBulletType; // 0x0080
	char pad_0084[4]; // 0x0084
	char* szHudName; // 0x0088
	char* szWeaponName; // 0x008C
	char pad_0090[56]; // 0x0090
	int WeaponType; // 0x00C8
	int iWeaponPrice; // 0x00CC
	int iKillAward; // 0x00D0
	char* szAnimationPrefix; // 0x00D4
	float flCycleTime; // 0x00D8
	float flCycleTimeAlt; // 0x00DC
	float flTimeToIdle; // 0x00E0
	float flIdleInterval; // 0x00E4
	bool bFullAuto; // 0x00E8
	char pad_0x00E5[3]; // 0x00E9
	int iDamage; // 0x00EC
	float flArmorRatio; // 0x00F0
	int iBullets; // 0x00F4
	float flPenetration; // 0x00F8
	float flFlinchVelocityModifierLarge; // 0x00FC
	float flFlinchVelocityModifierSmall; // 0x0100
	float flRange; // 0x0104
	float flRangeModifier; // 0x0108
	float flThrowVelocity; // 0x010C
	char pad_0x010C[12]; // 0x0110
	bool bHasSilencer; // 0x011C
	char pad_0x0119[3]; // 0x011D
	char* pSilencerModel; // 0x0120
	int iCrosshairMinDistance; // 0x0124
	int iCrosshairDeltaDistance;// 0x0128 - iTeam?
	float flMaxPlayerSpeed; // 0x012C
	float flMaxPlayerSpeedAlt; // 0x0130
	float flSpread; // 0x0134
	float flSpreadAlt; // 0x0138
	float flInaccuracyCrouch; // 0x013C
	float flInaccuracyCrouchAlt; // 0x0140
	float flInaccuracyStand; // 0x0144
	float flInaccuracyStandAlt; // 0x0148
	float flInaccuracyJumpInitial;// 0x014C
	float flInaccuracyJump; // 0x0150
	float flInaccuracyJumpAlt; // 0x0154
	float flInaccuracyLand; // 0x0158
	float flInaccuracyLandAlt; // 0x015C
	float flInaccuracyLadder; // 0x0160
	float flInaccuracyLadderAlt; // 0x0164
	float flInaccuracyFire; // 0x0168
	float flInaccuracyFireAlt; // 0x016C
	float flInaccuracyMove; // 0x0170
	float flInaccuracyMoveAlt; // 0x0174
	float flInaccuracyReload; // 0x0178
	int iRecoilSeed; // 0x017C
	float flRecoilAngle; // 0x0180
	float flRecoilAngleAlt; // 0x0184
	float flRecoilAngleVariance; // 0x0188
	float flRecoilAngleVarianceAlt; // 0x018C
	float flRecoilMagnitude; // 0x0190
	float flRecoilMagnitudeAlt; // 0x0194
	float flRecoilMagnitudeVariance; // 0x0198
	float flRecoilMagnitudeVarianceAlt; // 0x019C
	float flRecoveryTimeCrouch; // 0x01A0
	float flRecoveryTimeStand; // 0x01A4
	float flRecoveryTimeCrouchFinal; // 0x01A8
	float flRecoveryTimeStandFinal; // 0x01AC
	int iRecoveryTransitionStartBullet;// 0x01B0
	int iRecoveryTransitionEndBullet; // 0x01B4
	bool bUnzoomAfterShot; // 0x01B8
	bool bHideViewModelZoomed; // 0x01B9
	char pad_0x01B5[2]; // 0x01BA
	char iZoomLevels[3]; // 0x01BC
	int iZoomFOV[2]; // 0x01C0
	float fZoomTime[3]; // 0x01C4
	char* szWeaponClass; // 0x01D4
	float flAddonScale; // 0x01D8
	char pad_0x01DC[4]; // 0x01DC
	char* szEjectBrassEffect; // 0x01E0
	char* szTracerEffect; // 0x01E4
	int iTracerFrequency; // 0x01E8
	int iTracerFrequencyAlt; // 0x01EC
	char* szMuzzleFlashEffect_1stPerson; // 0x01F0
	char pad_0x01F4[4]; // 0x01F4
	char* szMuzzleFlashEffect_3rdPerson; // 0x01F8
	char pad_0x01FC[4]; // 0x01FC
	char* szMuzzleSmokeEffect; // 0x0200
	float flHeatPerShot; // 0x0204
	char* szZoomInSound; // 0x0208
	char* szZoomOutSound; // 0x020C
	float flInaccuracyPitchShift; // 0x0210
	float flInaccuracySoundThreshold; // 0x0214
	float flBotAudibleRange; // 0x0218
	char pad_0x0218[8]; // 0x0220
	char* pWrongTeamMsg; // 0x0224
	bool bHasBurstMode; // 0x0228
	char pad_0x0225[3]; // 0x0229
	bool bIsRevolver; // 0x022C
	bool bCannotShootUnderwater; // 0x0230
};

enum class CSGOClassID
{
	CAK47 = 1,
	CBaseAnimating = 2,
	CBaseAnimatingOverlay = 3,
	CBaseAttributableItem = 4,
	CBaseButton = 5,
	CBaseCombatCharacter = 6,
	CBaseCombatWeapon = 7,
	CBaseCSGrenade = 8,
	CBaseCSGrenadeProjectile = 9,
	CBaseDoor = 10,
	CBaseEntity = 11,
	CBaseFlex = 12,
	CBaseGrenade = 13,
	CBaseParticleEntity = 14,
	CBasePlayer = 15,
	CBasePropDoor = 16,
	CBaseTeamObjectiveResource = 17,
	CBaseTempEntity = 18,
	CBaseToggle = 19,
	CBaseTrigger = 20,
	CBaseViewModel = 21,
	CBaseVPhysicsTrigger = 22,
	CBaseWeaponWorldModel = 23,
	CBeam = 24,
	CBeamSpotlight = 25,
	CBoneFollower = 26,
	CBreakableProp = 27,
	CBreakableSurface = 28,
	CC4 = 29,
	CCascadeLight = 30,
	CChicken = 31,
	CColorCorrection = 32,
	CColorCorrectionVolume = 33,
	CCSGameRulesProxy = 34,
	CCSPlayer = 35,
	CCSPlayerResource = 36,
	CCSRagdoll = 37,
	CCSTeam = 38,
	CDEagle = 39,
	CDecoyGrenade = 40,
	CDecoyProjectile = 41,
	CDynamicLight = 42,
	CDynamicProp = 43,
	CEconEntity = 44,
	CEconWearable = 45,
	CEmbers = 46,
	CEntityDissolve = 47,
	CEntityFlame = 48,
	CEntityFreezing = 49,
	CEntityParticleTrail = 50,
	CEnvAmbientLight = 51,
	CEnvDetailController = 52,
	CEnvDOFController = 53,
	CEnvParticleScript = 54,
	CEnvProjectedTexture = 55,
	CEnvQuadraticBeam = 56,
	CEnvScreenEffect = 57,
	CEnvScreenOverlay = 58,
	CEnvTonemapController = 59,
	CEnvWind = 60,
	CFEPlayerDecal = 61,
	CFireCrackerBlast = 62,
	CFireSmoke = 63,
	CFireTrail = 64,
	CFish = 65,
	CFlashbang = 66,
	CFogController = 67,
	CFootstepControl = 68,
	CFunc_Dust = 69,
	CFunc_LOD = 70,
	CFuncAreaPortalWindow = 71,
	CFuncBrush = 72,
	CFuncConveyor = 73,
	CFuncLadder = 74,
	CFuncMonitor = 75,
	CFuncMoveLinear = 76,
	CFuncOccluder = 77,
	CFuncReflectiveGlass = 78,
	CFuncRotating = 79,
	CFuncSmokeVolume = 80,
	CFuncTrackTrain = 81,
	CGameRulesProxy = 82,
	CHandleTest = 83,
	CHEGrenade = 84,
	CHostage = 85,
	CHostageCarriableProp = 86,
	CIncendiaryGrenade = 87,
	CInferno = 88,
	CInfoLadderDismount = 89,
	CInfoOverlayAccessor = 90,
	CItem_Healthshot = 91,
	CItemDogtags = 92,
	CKnife = 93,
	CKnifeGG = 94,
	CLightGlow = 95,
	CMaterialModifyControl = 96,
	CMolotovGrenade = 97,
	CMolotovProjectile = 98,
	CMovieDisplay = 99,
	CParticleFire = 100,
	CParticlePerformanceMonitor = 101,
	CParticleSystem = 102,
	CPhysBox = 103,
	CPhysBoxMultiplayer = 104,
	CPhysicsProp = 105,
	CPhysicsPropMultiplayer = 106,
	CPhysMagnet = 107,
	CPlantedC4 = 108,
	CPlasma = 109,
	CPlayerResource = 110,
	CPointCamera = 111,
	CPointCommentaryNode = 112,
	CPointWorldText = 113,
	CPoseController = 114,
	CPostProcessController = 115,
	CPrecipitation = 116,
	CPrecipitationBlocker = 117,
	CPredictedViewModel = 118,
	CProp_Hallucination = 119,
	CPropDoorRotating = 120,
	CPropJeep = 121,
	CPropVehicleDriveable = 122,
	CRagdollManager = 123,
	CRagdollProp = 124,
	CRagdollPropAttached = 125,
	CRopeKeyframe = 126,
	CSCAR17 = 127,
	CSceneEntity = 128,
	CSensorGrenade = 129,
	CSensorGrenadeProjectile = 130,
	CShadowControl = 131,
	CSlideshowDisplay = 132,
	CSmokeGrenade = 133,
	CSmokeGrenadeProjectile = 134,
	CSmokeStack = 135,
	CSpatialEntity = 136,
	CSpotlightEnd = 137,
	CSprite = 138,
	CSpriteOriented = 139,
	CSpriteTrail = 140,
	CStatueProp = 141,
	CSteamJet = 142,
	CSun = 143,
	CSunlightShadowControl = 144,
	CTeam = 145,
	CTeamplayRoundBasedRulesProxy = 146,
	CTEArmorRicochet = 147,
	CTEBaseBeam = 148,
	CTEBeamEntPoint = 149,
	CTEBeamEnts = 150,
	CTEBeamFollow = 151,
	CTEBeamLaser = 152,
	CTEBeamPoints = 153,
	CTEBeamRing = 154,
	CTEBeamRingPoint = 155,
	CTEBeamSpline = 156,
	CTEBloodSprite = 157,
	CTEBloodStream = 158,
	CTEBreakModel = 159,
	CTEBSPDecal = 160,
	CTEBubbles = 161,
	CTEBubbleTrail = 162,
	CTEClientProjectile = 163,
	CTEDecal = 164,
	CTEDust = 165,
	CTEDynamicLight = 166,
	CTEEffectDispatch = 167,
	CTEEnergySplash = 168,
	CTEExplosion = 169,
	CTEFireBullets = 170,
	CTEFizz = 171,
	CTEFootprintDecal = 172,
	CTEFoundryHelpers = 173,
	CTEGaussExplosion = 174,
	CTEGlowSprite = 175,
	CTEImpact = 176,
	CTEKillPlayerAttachments = 177,
	CTELargeFunnel = 178,
	CTEMetalSparks = 179,
	CTEMuzzleFlash = 180,
	CTEParticleSystem = 181,
	CTEPhysicsProp = 182,
	CTEPlantBomb = 183,
	CTEPlayerAnimEvent = 184,
	CTEPlayerDecal = 185,
	CTEProjectedDecal = 186,
	CTERadioIcon = 187,
	CTEShatterSurface = 188,
	CTEShowLine = 189,
	CTesla = 190,
	CTESmoke = 191,
	CTESparks = 192,
	CTESprite = 193,
	CTESpriteSpray = 194,
	CTest_ProxyToggle_Networkable = 194,
	CTestTraceline = 196,
	CTEWorldDecal = 197,
	CTriggerPlayerMovement = 198,
	CTriggerSoundOperator = 199,
	CVGuiScreen = 200,
	CVoteController = 201,
	CWaterBullet = 202,
	CWaterLODControl = 203,
	CWeaponAug = 204,
	CWeaponAWP = 205,
	CWeaponBaseItem = 206,
	CWeaponBizon = 207,
	CWeaponCSBase = 208,
	CWeaponCSBaseGun = 209,
	CWeaponCycler = 210,
	CWeaponElite = 211,
	CWeaponFamas = 212,
	CWeaponFiveSeven = 213,
	CWeaponG3SG1 = 214,
	CWeaponGalil = 215,
	CWeaponGalilAR = 216,
	CWeaponGlock = 217,
	CWeaponHKP2000 = 218,
	CWeaponM249 = 219,
	CWeaponM3 = 220,
	CWeaponM4A1 = 221,
	CWeaponMAC10 = 222,
	CWeaponMag7 = 223,
	CWeaponMP5Navy = 224,
	CWeaponMP7 = 225,
	CWeaponMP9 = 226,
	CWeaponNegev = 227,
	CWeaponNOVA = 228,
	CWeaponP228 = 229,
	CWeaponP250 = 230,
	CWeaponP90 = 231,
	CWeaponSawedoff = 232,
	CWeaponSCAR20 = 233,
	CWeaponScout = 234,
	CWeaponSG550 = 235,
	CWeaponSG552 = 236,
	CWeaponSG556 = 237,
	CWeaponSSG08 = 238,
	CWeaponTaser = 239,
	CWeaponTec9 = 240,
	CWeaponTMP = 241,
	CWeaponUMP45 = 242,
	CWeaponUSP = 243,
	CWeaponXM1014 = 244,
	CWorld = 245,
	DustTrail = 246,
	MovieExplosion = 247,
	ParticleSmokeGrenade = 248,
	RocketTrail = 249,
	SmokeTrail = 250,
	SporeExplosion = 251,
	SporeTrail = 252
};

enum CSWeaponType
{
	WEAPONTYPE_KNIFE = 0,
	WEAPONTYPE_PISTOL,
	WEAPONTYPE_SUBMACHINEGUN,
	WEAPONTYPE_RIFLE,
	WEAPONTYPE_SHOTGUN,
	WEAPONTYPE_SNIPER_RIFLE,
	WEAPONTYPE_MACHINEGUN,
	WEAPONTYPE_C4,
	WEAPONTYPE_GRENADE,
	WEAPONTYPE_UNKNOWN
};

enum moveTypes
{
	MOVETYPE_NONE = 0,			// never moves
	MOVETYPE_ISOMETRIC,					// For players -- in TF2 commander view, etc.
	MOVETYPE_WALK,						// Player only - moving on the ground
	MOVETYPE_STEP,						// gravity, special edge handling -- monsters use this
	MOVETYPE_FLY,						// No gravity, but still collides with stuff
	MOVETYPE_FLYGRAVITY,				// flies through the air + is affected by gravity
	MOVETYPE_VPHYSICS,					// uses VPHYSICS for simulation
	MOVETYPE_PUSH,						// no clip to world, push and crush
	MOVETYPE_NOCLIP,					// No gravity, no collisions, still do velocity/avelocity
	MOVETYPE_LADDER,					// Used by players only when going onto a ladder
	MOVETYPE_OBSERVER,					// Observer movement, depends on player's observer mode
	MOVETYPE_CUSTOM,					// Allows the entity to describe its own physics
	MOVETYPE_LAST = MOVETYPE_CUSTOM,	// should always be defined as the last item in the list
	MOVETYPE_MAX_BITS = 4
};

enum class CSGOHitboxID
{
	Head = 0,
	Neck,
	NeckLower,
	Pelvis,
	Stomach,
	LowerChest,
	Chest,
	UpperChest,
	RightThigh,
	LeftThigh,
	RightShin,
	LeftShin,
	RightFoot,
	LeftFoot,
	RightHand,
	LeftHand,
	RightUpperArm,
	RightLowerArm,
	LeftUpperArm,
	LeftLowerArm,
	Max,
};

enum ItemDefinitionIndex : int
{
	WEAPON_DEAGLE = 1,
	WEAPON_ELITE = 2,
	WEAPON_FIVESEVEN = 3,
	WEAPON_GLOCK = 4,
	WEAPON_AK47 = 7,
	WEAPON_AUG = 8,
	WEAPON_AWP = 9,
	WEAPON_FAMAS = 10,
	WEAPON_G3SG1 = 11,
	WEAPON_GALILAR = 13,
	WEAPON_M249 = 14,
	WEAPON_M4A1 = 16,
	WEAPON_MAC10 = 17,
	WEAPON_P90 = 19,
	WEAPON_UMP45 = 24,
	WEAPON_XM1014 = 25,
	WEAPON_BIZON = 26,
	WEAPON_MAG7 = 27,
	WEAPON_NEGEV = 28,
	WEAPON_SAWEDOFF = 29,
	WEAPON_TEC9 = 30,
	WEAPON_TASER = 31,
	WEAPON_HKP2000 = 32,
	WEAPON_MP7 = 33,
	WEAPON_MP9 = 34,
	WEAPON_NOVA = 35,
	WEAPON_P250 = 36,
	WEAPON_SCAR20 = 38,
	WEAPON_SG556 = 39,
	WEAPON_SSG08 = 40,
	WEAPON_KNIFE_CT = 42,
	WEAPON_FLASHBANG = 43,
	WEAPON_HEGRENADE = 44,
	WEAPON_SMOKEGRENADE = 45,
	WEAPON_MOLOTOV = 46,
	WEAPON_DECOY = 47,
	WEAPON_INCGRENADE = 48,
	WEAPON_C4 = 49,
	WEAPON_KNIFE_T = 59,
	WEAPON_M4A1_SILENCER = 60,
	WEAPON_USP_SILENCER = 61,
	WEAPON_CZ75A = 63,
	WEAPON_REVOLVER = 64,
	WEAPON_KNIFE_BAYONET = 500,
	WEAPON_KNIFE_FLIP = 505,
	WEAPON_KNIFE_GUT = 506,
	WEAPON_KNIFE_KARAMBIT = 507,
	WEAPON_KNIFE_M9_BAYONET = 508,
	WEAPON_KNIFE_TACTICAL = 509,
	WEAPON_KNIFE_FALCHION = 512,
	WEAPON_KNIFE_BOWIE = 514,
	WEAPON_KNIFE_BUTTERFLY = 515,
	WEAPON_KNIFE_PUSH = 516
};

class ScriptCreatedItem
{
public:
	CPNETVAR_FUNC(int*, ItemDefinitionIndex, 0xE67AB3B8); //m_iItemDefinitionIndex
	CPNETVAR_FUNC(int*, ItemIDHigh, 0x714778A); //m_iItemIDHigh
	CPNETVAR_FUNC(int*, ItemIDLow, 0x3A3DFC74); //m_iItemIDLow
	CPNETVAR_FUNC(int*, AccountID, 0x24abbea8); //m_iAccountID
};

class AttributeContainer
{
public:
	CPNETVAR_FUNC(ScriptCreatedItem*, m_Item, 0x7E029CE5);
};


class CBaseCombatWeapon
{
public:
	CNETVAR_FUNC(float, GetNextPrimaryAttack, 0xDB7B106E); //m_flNextPrimaryAttack
	CNETVAR_FUNC(int, GetAmmoInClip, 0x97B6F70C); //m_iClip1
	CNETVAR_FUNC(HANDLE, GetOwnerHandle, 0xC32DF98D); //m_hOwner
	CNETVAR_FUNC(float, GetAccuracyPenalty, 0xE2958A63); //m_fAccuracyPenalty
	CNETVAR_FUNC(Vector, GetOrigin, 0x1231CE10); //m_vecOrigin
	CPNETVAR_FUNC(int*, FallbackPaintKit, 0xADE4C870); // m_nFallbackPaintKit
	CPNETVAR_FUNC(int*, FallbackSeed, 0xC2D0683D); // m_nFallbackSeed
	CPNETVAR_FUNC(float*, FallbackWear, 0xA263576C); //m_flFallbackWear
	CPNETVAR_FUNC(int*, FallbackStatTrak, 0x1ED78768); //m_nFallbackStatTrak
	CPNETVAR_FUNC(int*, OwnerXuidLow, 0xAD8D897F);
	CPNETVAR_FUNC(int*, OwnerXuidHigh, 0x90511E77);
	CPNETVAR_FUNC(int*, ViewModelIndex, 0x7F7C89C1);
	CPNETVAR_FUNC(int*, ModelIndex, 0x27016F83);
	CPNETVAR_FUNC(int*, WorldModelIndex, 0x4D8AD9F3);
	CPNETVAR_FUNC(char*, szCustomName, 0x0);

	CPNETVAR_FUNC(AttributeContainer*, m_AttributeManager, 0xCFFCE089);

	CNETVAR_FUNC(int, GetZoomLevel, 0x26553F1A);

	float GetInaccuracy()
	{
		typedef float(__thiscall* oInaccuracy)(PVOID);
		return call_vfunc< oInaccuracy >(this, 478)(this);
	}

	float GetSpread()
	{ return call_vfunc<float(__thiscall*)(void*)>(this, 448)(this); }

	int* GetEntityQuality()
	{
		return (int*)((DWORD)this + 0x2D70 + 0x40 + 0x1DC);
	}

	int GetWeaponID2()
	{
		return *(int*)((DWORD)this + 0x00002F88);
	}

	void PreDataUpdate(int updateType)
	{
		PVOID pNetworkable = (PVOID)((DWORD)(this) + 0x8);
		typedef void(__thiscall* OriginalFn)(PVOID, int);
		return call_vfunc<OriginalFn>(pNetworkable, 6)(pNetworkable, updateType);
	}

	void SetModelIndex(int modelIndex) {
		typedef void(__thiscall* OriginalFn)(PVOID, int);
		return call_vfunc<OriginalFn>(this, 75)(this, modelIndex);
	}

	void UpdateAccPenalty() 
	{
		typedef void(__thiscall *OrigFn)(void *);
		return call_vfunc<OrigFn>(this, 479)(this);
	}

	bool IsScoped(int x = 0)
	{
		return GetZoomLevel() > 0;
	}

	CSWeaponInfo* GetCSWpnData()
	{
		if (!this)
			return nullptr;
		typedef CSWeaponInfo*(__thiscall* OriginalFn)(void*);
		return call_vfunc<OriginalFn >(this, 456)(this);		
	}
};

class CCSBomb
{
public:
	CNETVAR_FUNC(HANDLE, GetOwnerHandle, 0xC32DF98D); //m_hOwner 0x29BC
	CNETVAR_FUNC(float, GetC4BlowTime, 0xB5E0CA1C); //m_flC4Blow
	CNETVAR_FUNC(float, GetC4DefuseCountDown, 0x2994); //m_flDefuseCountDown 0x2994
};

class CLocalPlayerExclusive
{
public:
	CNETVAR_FUNC(Vector, GetViewPunchAngle, 0x68F014C0);//m_viewPunchAngle
	CNETVAR_FUNC(Vector, GetAimPunchAngle, 0xBF25C290);//m_aimPunchAngle
	CNETVAR_FUNC(Vector, GetAimPunchAngleVel, 0x8425E045);//m_aimPunchAngleVel
};

class CollisionProperty
{
public:
	CNETVAR_FUNC(Vector, GetMins, 0xF6F78BAB);//m_vecMins
	CNETVAR_FUNC(Vector, GetMaxs, 0xE47C6FC4);//m_vecMaxs
	CNETVAR_FUNC(unsigned char, GetSolidType, 0xB86722A1);//m_nSolidType
	CNETVAR_FUNC(unsigned short, GetSolidFlags, 0x63BB24C1);//m_usSolidFlags
	CNETVAR_FUNC(int, GetSurroundsType, 0xB677A0BB); //m_nSurroundType

	bool IsSolid()
	{
		return (GetSolidType() != SOLID_NONE) && ((GetSolidFlags() & FSOLID_NOT_SOLID) == 0);
	}
};

class IClientRenderable
{
public:
	//virtual void*					GetIClientUnknown() = 0;
	virtual Vector const&			GetRenderOrigin(void) = 0;
	virtual Vector const&			GetRenderAngles(void) = 0;
	virtual bool					ShouldDraw(void) = 0;
	virtual bool					IsTransparent(void) = 0;
	virtual bool					UsesPowerOfTwoFrameBufferTexture() = 0;
	virtual bool					UsesFullFrameBufferTexture() = 0;
	virtual void					GetShadowHandle() const = 0;
	virtual void*					RenderHandle() = 0;
	virtual const model_t*				GetModel() const = 0;
	virtual int						DrawModel(int flags) = 0;
	virtual int						GetBody() = 0;
	virtual void					ComputeFxBlend() = 0;

	bool SetupBones(matrix3x4 *pBoneToWorldOut, int nMaxBones, int boneMask, float currentTime)
	{
		typedef bool(__thiscall* oSetupBones)(PVOID, matrix3x4*, int, int, float);
		return call_vfunc< oSetupBones>(this, 13)(this, pBoneToWorldOut, nMaxBones, boneMask, currentTime);
	}
};

class IClientNetworkable
{
public:
	virtual IClientUnknown*	GetIClientUnknown() = 0;
	virtual void			Release() = 0;
	virtual ClientClass*	GetClientClass() = 0;// FOR NETVARS FIND YOURSELF ClientClass* stuffs
	virtual void			NotifyShouldTransmit( /* ShouldTransmitState_t state*/) = 0;
	virtual void			OnPreDataChanged( /*DataUpdateType_t updateType*/) = 0;
	virtual void			OnDataChanged( /*DataUpdateType_t updateType*/) = 0;
	virtual void			PreDataUpdate( /*DataUpdateType_t updateType*/) = 0;
	virtual void			PostDataUpdate( /*DataUpdateType_t updateType*/) = 0;
	virtual void			unknown();
	virtual bool			IsDormant(void) = 0;
	virtual int				GetIndex(void) const = 0;
	virtual void			ReceiveMessage(int classID /*, bf_read &msg*/) = 0;
	virtual void*			GetDataTableBasePtr() = 0;
	virtual void			SetDestroyedOnRecreateEntities(void) = 0;
};

class IClientUnknown
{
public:
	virtual void*		GetCollideable() = 0;
	virtual IClientNetworkable*	GetClientNetworkable() = 0;
	virtual IClientRenderable*	GetClientRenderable() = 0;
	virtual IClientEntity*		GetIClientEntity() = 0;
	virtual IClientEntity*		GetBaseEntity() = 0;
	virtual IClientThinkable*	GetClientThinkable() = 0;
};

class IClientThinkable
{
public:
	virtual IClientUnknown*		GetIClientUnknown() = 0;
	virtual void				ClientThink() = 0;
	virtual void*				GetThinkHandle() = 0;
	virtual void				SetThinkHandle(void* hThink) = 0;
	virtual void				Release() = 0;
};

class __declspec (novtable)IClientEntity : public IClientUnknown, public IClientRenderable, public IClientNetworkable, public IClientThinkable
{
public:
public:
	virtual void			Release(void) = 0;
	virtual void			blahblahpad(void) = 0;
	virtual Vector&	GetAbsOrigin(void) const = 0;//in broken place use GetOrigin Below
	virtual const Vector&	GetAbsAngles(void) const = 0;


	int GetGlowIndex()
	{
		return *(int*)(this + 0xA310);
	}

	CPNETVAR_FUNC(CLocalPlayerExclusive*, localPlayerExclusive, 0x7177BC3E);// m_Local
	CPNETVAR_FUNC(CollisionProperty*, collisionProperty, 0xE477CBD0);//m_Collision

	CNETVAR_FUNC(float, GetLowerBodyYaw, 0xE6996CCF); //m_flLowerBodyYawTarget
	CNETVAR_FUNC(int, GetFlags, 0xE456D580); //m_fFlags
	CNETVAR_FUNC(int, GetAmmoInClip, 0x97B6F70C); //m_iClip
	CNETVAR_FUNC(float, GetTargetYaw, 0xE6996CCF);
	CNETVAR_FUNC(Vector, GetOrigin, 0x1231CE10); //m_vecOrigin 0x0134
	CNETVAR_FUNC(Vector, GetRotation, 0x6BEA197A); //m_angRotation
	CNETVAR_FUNC(int, GetTeamNum, 0xC08B6C6E); //m_iTeamNum
	CNETVAR_FUNC(int*, GetPointerFlags, 0xE456D580); //m_fFlags
	CNETVAR_FUNC(HANDLE, GetOwnerHandle, 0xC32DF98D); //m_hOwner
	CNETVAR_FUNC(int, GetMaxHealth, 0xC52E1C28); //m_iMaxHealth
	CNETVAR_FUNC(int, GetHealth, 0xA93054E3); //m_iHealth
	CNETVAR_FUNC(bool, IsDefusing, 0xA2C14106); //m_bIsDefusing
	CNETVAR_FUNC(float, GetFlashDuration, 0x4B5938D5); //m_flFlashDuration
	CNETVAR_FUNC(float , GetFlashAlpha, 0xFE79FB98); //m_flFlashMaxAlpha
	CNETVAR_FUNC(unsigned char, GetLifeState, 0xD795CCFC); //m_lifeState
	CNETVAR_FUNC(HANDLE, GetActiveWeaponHandle, 0xB4FECDA3); //m_hActiveWeapon
	CNETVAR_FUNC(int, GetTickBase, 0xD472B079); //m_nTickBase
	CNETVAR_FUNC(Vector, GetViewOffset, 0xA9F74931); //m_vecViewOffset[0]
	CNETVAR_FUNC(Vector, GetViewPunch, 0x68F014C0);
	CNETVAR_FUNC(int, GetMoney, 0xF4B3E183); //m_iAccount
	CNETVAR_FUNC(Vector, GetPunch, 0xBF25C290);
	CNETVAR_FUNC(Vector, GetVelocity, 0x40C1CA24); //m_vecVelocity[0]
	CNETVAR_FUNC(bool, HasGunGameImmunity, 0x6AD6FA0D); //m_bGunGameImmunity
	CNETVAR_FUNC(int, ArmorValue, 0x3898634); //m_ArmorValue
	CNETVAR_FUNC(bool, HasHelmet, 0x7B97F18A); //m_bHasHelmet
	CNETVAR_FUNC(int, GetObserverMode, 0x2441D093); // m_iObserverMode
	CNETVAR_FUNC(HANDLE, GetObserverTargetHandle, 0x8660FD83); //m_hObserverTarget
	CNETVAR_FUNC(bool, HasDefuser, 0x32D0F325); //m_bHasDefuser
	CNETVAR_FUNC(int, GetShotsFired, 0x3F2F6C66); //m_nTickBase
	CNETVAR_FUNC(float, GetSimulationTime, 0xC4560E44); //m_flSimulationTime
	CNETVAR_FUNC(float, GetAnimTime, 0xD27E8416);
	CNETVAR_FUNC(bool, IsScoped, 0x61B9C22C); //m_bIsScoped

	bool IsAlive()
	{
		return (GetLifeState() == LIFE_ALIVE && GetHealth() > 0);
	}

	int GetMoveType() 
	{
		if (!this)
			return 0;

		return ptr(int, this, 0x258);
	}

	QAngle* GetEyeAnglesPointer()
	{
		return reinterpret_cast<QAngle*>((DWORD)this + (DWORD)0x528C);
	}

	QAngle GetEyeAngles()
	{
		return *reinterpret_cast<QAngle*>((DWORD)this + (DWORD)0x528C);
	}

	QAngle* GetEyeAnglesXY()
	{
		return (QAngle*)((DWORD)this + GET_NETVAR("DT_CSPlayer", "m_angEyeAngles"));
	}

	Vector GetBonePos(int i)
	{
		matrix3x4 boneMatrix[128];
		if (this->SetupBones(boneMatrix, 128, BONE_USED_BY_HITBOX, GetTickCount64()))
		{
			return Vector(boneMatrix[i][0][3], boneMatrix[i][1][3], boneMatrix[i][2][3]);
		}
		return Vector(0, 0, 0);
	}

	Vector GetHeadPos()
	{
		return this->GetBonePos(8);
	}

	Vector GetHeadAngle()
	{
		return GetAbsOrigin() + GetViewOffset();
	}

	int GetId()
	{
		typedef int(__thiscall* tGetId)(void*);
		return call_vfunc<tGetId>(this, 458)(this);
	}

	bool IsPlayer()
	{
		return GetClientClass()->m_ClassID == (int)CSGOClassID::CCSPlayer;
	}

	Vector GetOrigin2() {
		return *(Vector*)((DWORD)this + 0x00000134);
	}

	Vector GetViewAngles2() {
		return *(Vector*)((DWORD)this + 0x00000104);
	}

	Vector GetAbsOrigin2() {
		__asm {
			MOV ECX, this
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 0x28]
		}
	}
	Vector GetAbsAngles2() {
		__asm {
			MOV ECX, this;
			MOV EAX, DWORD PTR DS : [ECX];
			CALL DWORD PTR DS : [EAX + 0x2C]
		}
	}

	Vector GetEyePosition() {
		Vector Origin = *(Vector*)((DWORD)this + 0x00000134);
		Vector View = *(Vector*)((DWORD)this + 0x00000104);
		return(Origin + View);
	}
	Vector GetAimPunch() {
		return *(Vector*)((DWORD)this + 0x00003018);
	}
	bool IsImmune() {
		return *(bool*)((DWORD)this + 0x000038A0);
	}
	ClientClass *GetClientClass2() {
		PVOID Networkable = (PVOID)((DWORD)(this) + 0x8);
		using Original = ClientClass*(__thiscall*)(PVOID);
		return call_vfunc<Original>(Networkable, 2)(Networkable);
	}
	HANDLE GetWeaponHandle() {
		return *(HANDLE*)((DWORD)this + 0x00002EE8);
	}


char* IClientEntity::GetpWeaponName()
{
	if (!this)
		return "";

	int id = ItemDefinitionIndex();
	switch (id) {
	case WEAPON_DEAGLE:
		return ("Deagle");
	case WEAPON_ELITE:
		return ("Dual Berettas");
	case WEAPON_FIVESEVEN:
		return ("Five-SeveN");
	case WEAPON_GLOCK:
		return ("Glock-18");
	case WEAPON_AK47:
		return ("AK-47");
	case WEAPON_AUG:
		return ("AUG");
	case WEAPON_REVOLVER:
		return ("Revolver");
	case WEAPON_AWP:
		return ("AWP");
	case WEAPON_FAMAS:
		return ("FAMAS");
	case WEAPON_G3SG1:
		return ("G3SG1");
	case WEAPON_GALILAR:
		return ("Galil");
	case WEAPON_M249:
		return ("M249");
	case WEAPON_M4A1:
		return ("M4A1");
	case WEAPON_MAC10:
		return ("MAC-10");
	case WEAPON_P90:
		return ("P90");
	case WEAPON_UMP45:
		return ("UMP-45");
	case WEAPON_XM1014:
		return ("XM1014");
	case WEAPON_BIZON:
		return ("PP-Bizon");
	case WEAPON_MAG7:
		return ("MAG-7");
	case WEAPON_NEGEV:
		return ("Negev");
	case WEAPON_SAWEDOFF:
		return ("Sawed-Off");
	case WEAPON_TEC9:
		return ("Tec-9");
	case WEAPON_TASER:
		return ("Taser");
	case WEAPON_HKP2000:
		return ("HKP2000");
	case WEAPON_MP7:
		return ("MP7");
	case WEAPON_MP9:
		return ("MP9");
	case WEAPON_NOVA:
		return ("Nova");
	case WEAPON_P250:
		return ("P250");
	case WEAPON_SCAR20:
		return ("SCAR-20");
	case WEAPON_SG556:
		return ("SG 553");
	case WEAPON_SSG08:
		return ("SSG 08");
	case WEAPONTYPE_KNIFE:
		return ("Knife");
	case WEAPON_FLASHBANG:
		return ("Flashbang");
	case WEAPON_HEGRENADE:
		return ("HE Grenade");
	case WEAPON_SMOKEGRENADE:
		return ("Smoke");
	case WEAPON_MOLOTOV:
		return ("Molotov");
	case WEAPON_DECOY:
		return ("Decoy");
	case WEAPON_INCGRENADE:
		return ("Incendiary");
	case WEAPON_C4:
		return ("C4");
	case WEAPON_M4A1_SILENCER:
		return ("M4A1-S");
	case WEAPON_USP_SILENCER:
		return ("HKP2000");
	case WEAPON_CZ75A:
		return ("CZ75-Auto");
	default:
		return ("Knife");
	}
	return "";
}

char* IClientEntity::GetGunIcon()
{
	int WeaponId = ItemDefinitionIndex();
	switch (WeaponId)
	{
	case WEAPONTYPE_KNIFE:
	case WEAPON_KNIFE_BAYONET:
	case WEAPON_KNIFE_BOWIE:
	case WEAPON_KNIFE_BUTTERFLY:
	case WEAPON_KNIFE_CT:
	case WEAPON_KNIFE_FALCHION:
	case WEAPON_KNIFE_FLIP:
	case WEAPON_KNIFE_GUT:
	case WEAPON_KNIFE_KARAMBIT:
	case WEAPON_KNIFE_M9_BAYONET:
	case WEAPON_KNIFE_T:
	case WEAPON_KNIFE_TACTICAL:
	case WEAPON_KNIFE_PUSH:
		return "]";
	case WEAPON_DEAGLE:
		return "A";
	case WEAPON_ELITE:
		return "B";
	case WEAPON_FIVESEVEN:
		return "C";
	case WEAPON_GLOCK:
		return "D";
	case WEAPON_HKP2000:
		return "E";
	case WEAPON_P250:
		return "F";
	case WEAPON_USP_SILENCER:
		return "G";
	case WEAPON_TEC9:
		return "H";
	case WEAPON_REVOLVER:
		return "J";
	case WEAPON_MAC10:
		return "K";
	case WEAPON_UMP45:
		return "L";
	case WEAPON_BIZON:
		return "M";
	case WEAPON_MP7:
		return "N";
	case WEAPON_MP9:
		return "O";
	case WEAPON_P90:
		return "P";
	case WEAPON_GALILAR:
		return "Q";
	case WEAPON_FAMAS:
		return "R";
	case WEAPON_M4A1_SILENCER:
		return "S";
	case WEAPON_M4A1:
		return "T";
	case WEAPON_AUG:
		return "U";
	case WEAPON_SG556:
		return "V";
	case WEAPON_AK47:
		return "W";
	case WEAPON_G3SG1:
		return "X";
	case WEAPON_SCAR20:
		return "Y";
	case WEAPON_AWP:
		return "Z";
	case WEAPON_SSG08:
		return "a";
	case WEAPON_XM1014:
		return "b";
	case WEAPON_SAWEDOFF:
		return "c";
	case WEAPON_MAG7:
		return "d";
	case WEAPON_NOVA:
		return "e";
	case WEAPON_NEGEV:
		return "f";
	case WEAPON_M249:
		return "g";
	case WEAPON_TASER:
		return "h";
	case WEAPON_FLASHBANG:
		return "i";
	case WEAPON_HEGRENADE:
		return "j";
	case WEAPON_SMOKEGRENADE:
		return "k";
	case WEAPON_MOLOTOV:
		return "l";
	case WEAPON_DECOY:
		return "m";
	case WEAPON_INCGRENADE:
		return "n";
	case WEAPON_C4:
		return "o";
	case WEAPON_CZ75A:
		return "I";
	default:
		return "  ";
	}
}
};

class CBaseViewModel : public IClientUnknown, public IClientRenderable, public IClientNetworkable
{
public:
	inline int GetModelIndex() {
		// DT_BaseViewModel -> m_nModelIndex
		return *(int*)((DWORD)this + 0x254);
	}
	inline DWORD GetOwner() {
		// DT_BaseViewModel -> m_hOwner
		return *(PDWORD)((DWORD)this + 0x29BC);
	}
	inline DWORD GetWeapon() {
		// DT_BaseViewModel -> m_hWeapon
		return *(PDWORD)((DWORD)this + 0x29B8);
	}
	inline void SetWeaponModel(const char* Filename, IClientUnknown* Weapon) {
		return call_vfunc<void(__thiscall*)(void*, const char*, IClientUnknown*)>(this, 242)(this, Filename, Weapon);
	}
};

typedef unsigned short MaterialHandle_t;
