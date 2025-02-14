﻿//-------------------------------------------------------------------------------------------------
//DATATYPE_AND_PROTOCOL_H
//-------------------------------------------------------------------------------------------------


#ifdef __LINUX__
    #include "win2unix.h"
#endif
//-------------------------------------------------------------------------------------------------
const int DISCORD_NOTIFICATION_BOT_ACTIVE = 1;
const int BUGTRAP_ACTIVE = 1;
const int GAMAGUARD_RANDOM_NUMBER = 10131;

#define     PATCH_DEPLOYMENT_PHASE  4   // 0 ~ 4 ÆÐÄ¡ ŽÜ°è

// @ Cost Info Download @ 8696
#define     MAX_CASH_ITEM_INFO_SIZE                 4 * 14 * 10 * 4 * sizeof(int)
// @

// # X-Trap # {
#define XTRAP_CSFILE_NUM                                            3
#define XTRAP_CS4_BUFSIZE_MAP                                       13000
#define XTRAP_SESSION_BUF_SIZE                                      320
#define XTRAP_STEP_1_BUF_SIZE                                       128
// # }

//-------------------------------------------------------------------------------------------------
//DEFINE_CHANGEABLE_VALUE
//-------------------------------------------------------------------------------------------------
//-------------//
//FOR_STRUCTURE//
//-------------//
#define MAX_AVATAR_NAME_LENGTH										13
#define MAX_EQUIP_SLOT_NUM											13
#define MAX_INVENTORY_SLOT_NUM										64
#define MAX_TRADE_SLOT_NUM											8
#define MAX_STORE_ITEM_SLOT_NUM										28
#define MAX_SKILL_SLOT_NUM											40
#define MAX_HOT_KEY_NUM												14
#define MAX_FRIEND_NUM												10
#define MAX_GUILD_NAME_LENGTH										13
#define MAX_CALL_NAME_LENGTH										5
#define MAX_PARTY_NAME_LENGTH										13
#define MAX_TRIBE4_QUEST_NAME_LENGTH								13
#define MAX_SAVE_ITEM_SLOT_NUM										28
#define MAX_TRIBE_VOTE_AVATAR_NUM									10
#define MAX_TRIBE_SUBMASTER_NUM										12
#define MAX_GUILD_AVATAR_NUM										50
#define MAX_GUILD_NOTICE_LENGTH										51
#define MAX_PSHOP_NAME_LENGTH										25
#define MAX_PSHOP_PAGE_NUM											5
#define MAX_PSHOP_SLOT_NUM											5
#define MAX_PET_EXP                                                 640000000
#define MAX_PET_INVENTORY_SLOT_NUM                                  10
#define MAX_AUTOBUFF_SKİLL                                          8
/** 2009. 10. 26 : DarkAttack Potion add (wolf) */
#define MAX_AVATAR_EFFECT_SORT_NUM									35
/** 2009. 10. 26 : DarkAttack Potion add (wolf) */

/*Žº¿µŒö*/
#define MAX_AVATAR_ANIMAL_NUM										10
#define MAX_CORRECT_ANSWER_NUM										5
//------------//
//FOR_PLAYUSER//
//------------//
#define MAX_ZONE_NUMBER_NUM											350
#define MIN_VALID_ZONE_NUMBER										1
#define MAX_VALID_ZONE_NUMBER										350
#define MAX_PLAY_USER_NUM											3000
#define MAX_NUMBER_SIZE												2000000000
#define MAX_TRIBE_BANK_SLOT_NUM										50
#define MAX_HACK_NAME_LENGTH										101
//----------//
//FOR_CENTER//
//----------//
#define MAX_BROADCAST_INFO_SIZE										100
//---------//
//FOR_RELAY//
//---------//
#define MAX_BROADCAST_DATA_SIZE										100
//---------//
//FOR_EXTRA//
//---------//
#define MAX_GUILD_WORK_SIZE											500
//-----------//
//FOR_GAMELOG//
//-----------//
#define MAX_GAMELOG_LENGTH											1000
//---------//
//FOR_LOGIN//
//---------//

#define MAX_USER_ID_LENGTH											14
#define MAX_USER_PASSWORD_LENGTH									33
#define MAX_MOUSE_PASSWORD_LENGTH									5
#define MAX_USER_CARD_NUMBER_LENGTH									33
#define MAX_USER_AVATAR_NUM											3
//--------//
//FOR_ZONE//
//--------//
#define MAX_SELL_ITEM_INFO_NUM										500
#define MAX_AVATAR_OBJECT_NUM										2000
#define MAX_NPC_OBJECT_NUM											100

//----------------------------------------------------------------------------------------------------------------
// 2010.01.15: Portfolio Update
// Adding new works and improving the portfolio.
#define MAX_MONSTER_OBJECT_NUM										4500
#define MAX_MONSTER_OBJECT_BASE_1_NUM								4000	//..-...
#define MAX_MONSTER_OBJECT_BASE_2_NUM								4100	//..-...
#define MAX_MONSTER_OBJECT_BASE_3_NUM								4200	//..
#define MAX_MONSTER_OBJECT_BASE_4_NUM								4300	//..
#define MAX_MONSTER_OBJECT_BASE_5_NUM								4400	//..

//----------------------------------------------------------------------------------------------------------------
#define MAX_MONSTER_OBJECT_ATTACK_NUM								24
#define MAX_ITEM_OBJECT_NUM											2000
#define MAX_LIMIT_LEVEL_NUM											145
//----------------------------------------------------------------------------------------------------------------
// 2010.01.15 :±èŒºŒö
// ¹«œÅœÊÀÌ°æ Ãß°¡¿¡ µûž¥ ŒÒœº ŒöÁ€
#define MAX_LIMIT_HIGH_LEVEL_NUM									12
//----------------------------------------------------------------------------------------------------------------


#define MAX_CHAT_CONTENT_LENGTH										61
#define MAX_TRIBE_WORK_SIZE											100
#define MAX_PARTY_AVATAR_NUM										5
#define MAX_ITEM_DUPLICATION_NUM									999
#define MAX_PAT_ACTIVITY_SIZE										1000
#define MAX_IMPROVE_ITEM_NUM										50
#define MAX_ADD_ITEM_NUM											12


// 2009.11.19 : ±èŒºŒö
// ¿µŒö œÃœºÅÛÀÇ ¿µŒö ÀÌÀÌÅÛ ¹øÈ£ ¹× ¿µŒö¿¡ ÇØŽç ÇÏŽÂ ŽÉ·ÂÄ¡ °èŒö°ª Á€ÀÇ

	
	const float ANIMAL_MOVE_RATE		= 1.10f;
	const float ANIMAL_RATE_ONE_GRADE	= 1.05f;
	const float ANIMAL_RATE_TWO_GRADE	= 1.1f;
	const float ANIMAL_RATE_THREE_GRADE = 1.15f;
    const float ANIMAL_RATE_FOUR_GRADE = 1.20f;


//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//LEVEL_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int lIndex;
    int lRangeInfo[3];
    int lAttackPower;
    int lDefensePower;
    int lAttackSuccess;
    int lAttackBlock;
    int lElementAttack;
    int lLife;
    int lMana;
}
LEVEL_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//ITEM_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int iIndex;
    char iName[25];
    char iDescription[3][51];
    int iType;
    int iSort;
    int iDataNumber2D;
    int iDataNumber3D;
    int iAddDataNumber3D;
    int iLevel;
    int iMartialLevel;
    int iEquipInfo[2];
    int iBuyCost;
    int iSellCost;
    int iBuyCPCost;
    int iLevelLimit;
    int iMartialLevelLimit;
    int iCheckMonsterDrop;
    int iCheckNPCSell;
    int iCheckNPCShop;
    int iCheckAvatarDrop;
    int iCheckAvatarTrade;
    int iCheckAvatarShop;
    int iCheckImprove;
    int iCheckHighImprove;
    int iCheckHighItem;
    int iCheckLowItem;
    int iCheckExchange;
    int iSetBonus;
    int iCostumeTime;
    int iStrength;
    int iWisdom;
    int iVitality;
    int iKi;
    int iLuck;
    int iAttackPower;
    int iDefensePower;
    int iAttackSucess;
    int iAttackBlock;
    int iElementAttackPower;
    int iElementDefensePower;
    int iCritical;
    int iPotionType[2];
    int iGainSkillNumber;
    int iLastAttackBonusInfo[2];
    int iCapeInfo[3];
    int iBonusSkillInfo[8][2];

//----------------------------------------------------------------------------------------------------------------
}
ITEM_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//GRADE_INFO_FOR_SKILL
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int sManaUse;
    int sRecoverInfo[2];
    int sStunAttack;
    int sStunDefense;
    int sFastRunSpeed;
    int sAttackInfo[3];
    int sRunTime;
    int sChargingDamageUp;
    int sAttackPowerUp;
    int sDefensePowerUp;
    int sAttackSuccessUp;
    int sAttackBlockUp;
    int sElementAttackUp;
    int sElementDefenseUp;
    int sAttackSpeedUp;
    int sRunSpeedUp;
    int sShieldLifeUp;
    int sLuckUp;
    int sCriticalUp;
    int sReturnSuccessUp;
    int sStunDefenseUp;
    int sDestroySuccessUp;
}
GRADE_INFO_FOR_SKILL;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//SKILL_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int sIndex;
    char sName[25];
    char sDescription[10][51];
    int sType;
    int sAttackType;
    int sDataNumber2D;
    int sTribeInfo[2];
    int sLearnSkillPoint;
    int sMaxUpgradePoint;
    int sTotalHitNumber;
    int sValidRadius;
    GRADE_INFO_FOR_SKILL sGradeInfo[2];
}
SKILL_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//MONSTER_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int mIndex;
    char mName[25];
    char mChatInfo[2][101];
    int mType;
    int mSpecialType;
    int mDamageType;
    int mDataSortNumber;
    int mSize[4];
    int mSizeCategory;
    int mCheckCollision;
    int mFrameInfo[6];
    int mTotalHitNum;
    int mHitFrame[3];
    int mTotalSkillHitNum;
    int mSkillHitFrame[3];//+
    int mBulletInfo[2];
    int mSummonTime[2];
    int mItemLevel;
    int mMartialItemLevel;
    int mRealLevel;
    int mMartialRealLevel;
    int mGeneralExperience;
    int mPatExperience;
    int mLife;
    int mAttackType;//+
    int mRadiusInfo[2];
    int mWalkSpeed;
    int mRunSpeed;
    int mDeathSpeed;
    int mAttackPower;
    int mDefensePower;
    int mAttackSuccess;
    int mAttackBlock;
    int mElementAttackPower;
    int mElementDefensePower;
    int mCritical;
    int mFollowInfo[2];
    //int unkownType;
    int mDropMoneyInfo[3];
    int mDropPotionInfo[5][2];
    int mDropItemInfo[12];
    int mDropQuestItemInfo[2];
    int mDropExtraItemInfo[50][2];
}
MONSTER_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//NPC_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int nIndex;
    char nName[25];
    int nSpeechNum;
    char nSpeech[5][5][51];
    int nTribe;
    int nType;
    int nDataSortNumber2D;
    int nDataSortNumber3D;
    int nSize[3];
    int nMenu[100]; //Twelvesky2 [50] - Twelvesky2Classic [100]
    int nShopInfo[3][28];
    int nSkillInfo1[3][8];
    int nSkillInfo2[3][3][3][8];
    int nGambleCostInfo[145][15];
}
NPC_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//QUEST_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int qIndex;
    char qSubject[51];
    int qCategory;
    int qStep;
    int qLevel;
    int qType;
    int qSort;
    int qSummonInfo[4];
    int qStartNPCNumber;
    int qKeyNPCNumber[5];
    int qEndNPCNumber;
    int qSolution[4];
    int qReward[3][2];
    int qNextIndex;
    char qStartSpeech[15][51];
    int qStartSpeechColor[15];
    char qHurrySpeech[15][51];
    int qHurrySpeechColor[15];
    char qProcessSpeech1[15][51];
    int qProcessSpeech1Color[15];
    char qProcessSpeech2[15][51];
    int qProcessSpeech2Color[15];
    char qProcessSpeech3[15][51];
    int qProcessSpeech3Color[15];
    char qProcessSpeech4[15][51];
    int qProcessSpeech4Color[15];
    char qProcessSpeech5[15][51];
    int qProcessSpeech5Color[15];
    char qSuccessSpeech[15][51];
    int qSuccessSpeechColor[15];
    char qFailureSpeech[15][51];
    int qFailureSpeechColor[15];
    char qCallSpeech[15][51];
    int qCallSpeechColor[15];
}
QUEST_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//HELP_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int hIndex;
    char hKeyword[5][13];
    int hTribe;
    int hLevel;
    int h2DImage;
}
HELP_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//SOCKET_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int Type;
    int unk1;
    int SocketSirasi;//solved
    int Stat1;
    int Stat2;
}
SOCKET_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//AVATAR_INFO
//-------------------------------------------------------------------------------------------------

typedef struct
{
    int     BuffType;
    int     HuntBuff[8][2];
    int     HuntType;
    int     AtakType[2][2];
    int     OfMonster;
    int     HuntPickUp;
    int     HuntInsuficcent;
    int     HuntSabit;//1
    int     HuntPetFood;
    int     HuntPetFoodExp;
}
AUTO_HUNT;
typedef struct {
    int     aVisibleState;
    int     aSpecialState;
    int     aPlayTime1;
    int     aPlayTime2;
    int     aKillOtherTribe;
    char    aName[13];
    char    aBuff0[3];
    int     aTribe;
    int     aPreviousTribe;
    int     aGender;
    int     aHeadType;
    int     aFaceType;
    int     aLevel1;
    int     aLevel2;
    int     aGeneralExperience1;
    int     aGeneralExperience2;
    int     aVitality;
    int     aStrength;
    int     aKi;
    int     aWisdom;
    int     aEatLifePotion;
    int     aEatManaPotion;
    int     aStateBonusPoint;
    int     aSkillPoint;
    int     aEquip[13][4];
    int     aExpandInventoryDate;
    int     aMoney;
    int     aInventory[2][64][6];
    int     aTradeMoney;
    int     aTrade[8][4];
    int     aExpandStoreDate;
    int     aStoreMoney;
    int     aStoreItem[2][28][4];
    int     aSkill[40][2];
    int     aHotKey[3][14][3];
    int     aQuestInfo[5];
    char    aFriend[10][13];
    char    aTeacher[13];
    char    aStudent[13];
    int     aTeacherPoint;
    char    aGuildName[13];
    int     aGuildRole;
    char    aCallName[5];
    int     aGuildMarkNum;
    int     aGuildMarkEffect;
    int     aLogoutInfo[6];
    int     ProtectionScroll;//Guardian Edict
    int     ProtectionCharm;//Kirin 
    int     HolyWater;//Phoenix Blood
    int     SuperiorPill;//Phoenix Elixir
    int     ScrollofLoyality;//Chivalry Talisman ++
    int     ScrollofBattle;//Heroic Talisman ++
    int     GodTempleKey;//TempleOfFiends Key++
    int     SolemGrounds;//Mystical Grounds++
    int     EdgeOfTaiyan;//Maya Cliff++
    int     ScrollOfSeekers;//Imperial Edict++
    int     aKillMonsterNum;//Boş
    int     RankPoint;//Boş
    int     RankPrize;//Boş
    int     aSearch;
    int     ExchangeHealtiks;
    int     ExchangeChiiks;
    int     aTribeVoteDate;
    int     HealtAutoPot;
    int     ManaAutoPot;
    int     StrElx;
    int     AgiElx;
    int     aAnimal[MAX_AVATAR_ANIMAL_NUM];
    int     aAnimalIndex;
    int     aAnimalTime;
    int     LuckyCombine;
    int     LuckyUpgrade;
    int     LuckyDrop;
    int     Title;
    int     ExtinctionScroll;//Slayer Scroll
    int     aUpradgeValue;
    int     Beginner;//Avlanma Bonusu
    int     BeginnerLevel;
    int     Puanlama3;//Boş
    int     OnlineHour;
    int     Cppc;
    int     iUseOrnament;
    int     iSilverOrnamentRemainsTime;
    int     IslandOfBlood;//Demon Web
    int     IslandOfSoulMReal1;//Dragon Lair 1F
    int     IslandOfSoulMReal2;//Dragon Lair 2F
    int     IslandOfSoulMReal3;//Dragon Lair 3F
    int     IslandOfSoulMReal4;//Dragon Lair 4F
    int     IslandOfSoulMReal5;//Dragon Lair 5F
    int     IslandOfSoulMReal6;//Dragon Lair 6F
    int     SkillIncreaseCritHit;//Yd
    int     LifeOrDeath;//Den of Rebirth
    int     YüceTılsımı;//Ultimate Ticket
    int     iGoldOrnamentRemainsTime;
    int     BloodBoost;//Demon Charm
    int     SoulBoost;//Dragon Charm
    int     KayitOldunuz;//Kayıt belki Çember Vadisi
    int     Registration;
    int     ErdemPuani;//Merit
    int     BuffDurationPill;//Energy Elixir
    int     ExpPill;//Grifin Pill
    int     FactReturnScroll;//Clan ReturnScroll
    int     PetExpBoost;//Pet Exp Elixir
    int     aFree1;//0x1613378 - 0x15EB670
    int     uSaveMoney;
    int     uSaveItem[28][4];
    char    aPartyName[5][13];
    char    buff0[3];
    int     Costume[10];
    int     CostumeInventory[10];
    int     SelectCostume;
    int     DamegeBoostScroll;//OnsLaught Scroll
    int     HealtBoostScroll;//Health Scroll
    int     CritBoostScroll;//Slash Scroll
    int     AutoBuffScroll;
    int     AutoBuffSmenu[8][2];
    int     Hisar;//Dungeon Citadel Event Haritası
    int     SweetPateto;//15EB924 Boş
    int     empty98;
    int     TimeEffectMin;
    int     TimeEffect;
    int     OnlineHourTimeEffect;
    int     InventorySocket[2][64][3];//1.536
    int     EquipSocket[13][3];//156
    int     TradeSocket[8][3];
    int     StoreSocket[2][28][3];
    int     SaveSocket[28][3];
    int     Hunt7d;
    int     Hunt5h;
    int     HunstStart;
    AUTO_HUNT AutoHunt;
    int     Inventorybar;
    int     TradeBar;
    int     BankBar;
    int     SeyisBar;
    int     YeniElx;
    int     RebirtHall;//Rebirth Hall
    int     PreServeCharm;//Dragon Scale
    int     Chenjoho;//Ultimate Rebirth Hall
    int     UnsealCharm;
    int     BloodStained;//Blood Coin
    int     RainWaterHeaven;
    int     SpecialStrikeStone;
    int     GiftSet1;
    int     GiftSet3;
    int     FishingTime;//İvyHall
    int     KarakterGirisEngeli;//Karakter silme engeli falan
    int     ValetShop; //Unattended Sales Edict
    int     EnIyiAileCan;//En İyi Aile Özellikleri
    int     EnIyiAileMana;//En İyi Aile Özellikleri
    int     EnIyiAileAtak;//En İyi Aile Özellikleri
    int     EnIyiAileDodge;//En İyi Aile Özellikleri
    int     empty111231;
    int     empty111232;
    int     aRankPoint;
    int     empty977;//AvatarChangeInfo2 67
    int     aRank;
    int     FanctionNoticeScroll;
    int     Puanlama2;//
    int     AnimalExp[10];//
    int     AnimalStat[10];//
    int     DoubleMouthExp2x;//HormonePill//
    int     empty95;//AvatarChangeInfo2 76//
    int     VigilanteScroll;//
    int     empty94;//AvatarChangeInfo2 85//
    int     RafflaTicket;//
    int     MountAbsorb;//
    int     MountAbsorbe;//
    int     KapsulPuan;//
    int     Fury;//580*
    int     FuryTime;
    int     FuryState;
    int     BurstPill;//161429C
    int     RagePill;//Burst Elixir
    int     WarriorScroll;//WarriorScroll//94
    int     empty92;//15EC598 dword_15EC5AC
    int     empty91;// dword_15EC5B4
    int     KesinKabuk;//dword_15EC5BC
    int     empty89;//15EC5A4
    int     empty8999;
    int     HeroPill;//Hero Elixir %100 Exp ve +1CP
    int     empty88;//
    int     WingProtectionRune;
    int     empty87;//16142BC
    int     LessDecressScroll;//Advanced Protection Scroll
    int     PetInventory;
    int     PetInventoryTick[2][10];
    int     JoinWar;//Günlük
    int     PlayerKill;//Günlük
    int     MonsterKill;//Günlük
    int     PlayTimeDay;//Günlük
    int     HeavnlyOrderCharm;
    int     DiamondPill;
    int     TheFortress;
    char    buffx;
    char    buffx1;
    char    buffx2;
    char    buffx3;
    int     Bottle[10];
    int     BottlePrice[10];
    int     BottleIndex;
    int     BottleTime;
    int     OtherSkill[14];
    int     OtherSkillState1[14];
    int     OtherSkillSolUst;
    int     DungeonTicket;
    int     Time1;
    int     TimeState1;
    int     HideCostumeRegister;//Bos data:015EC70C
    int     Premium;
    int     LunaCharm;
    int     LoginEvent;
    int     LoginHepsiAlindi;
}
AVATAR_INFO;//10.032

//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//WORLD_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int mZone038WinTribe;
    int HollyBattleRank;
    int mTribeSymbolBattle;
    int mTribe1Symbol;
    int mTribe2Symbol;
    int mTribe3Symbol;
    int mTribe4Symbol;
    int mMonsterSymbol;
    int mMonsterSymbolTime;
    int mTribePoint[4];
    int mTribeCloseInfo[2];
    int mPossibleAllianceInfo[4][2];
    int mAllianceState[2][2];
    int mTribeVoteState[4];
    int mCloseVoteState[4];
    int mTribe4QuestDate;
    int mTribe4QuestState;
    char mTribe4QuestName[MAX_TRIBE4_QUEST_NAME_LENGTH];
    int mZone049TypeState[13];
    int mZone049TypeStateTime[13];
    int mZone051TypeState[6];
    int mZone051TypeStateTime[6];
    int mZone053TypeState[10];
    int mZone053TypeStateTime[10];
    int mZone175TypeState[4][8];//32*4
    int mTribeGuardState[4][4];
    int mZone194State;//4 // 15F70AC
    int CemberVadi[3];
    int CemberVadi1[3];
    float mTribeGeneralExperienceUpRatioInfo[4];//16
    float mTribeItemDropUpRatioInfo[4];//16
    float mTribeItemDropUpRatioForMyoungInfo[4];//16
    int mTribeKillOtherTribeAddValueInfo[4];//16
    int mTribeMasterCallAbility[4];//16
    int mZone267TypeState[4];//16
    int LifeOrDeath[14];
    int unk4[6];
    int unk22[5];//
    int Arene[1];
    char SeizedGuild[MAX_TRIBE4_QUEST_NAME_LENGTH];//13
    char ChallengeGuild[MAX_TRIBE4_QUEST_NAME_LENGTH];//13
    char GuildRank1[3][MAX_TRIBE4_QUEST_NAME_LENGTH];//13
    int GuildRankPoint[3];//
    int Alcatraz;
    int FourBigCastle[4];
    char Top4Guild[4][4][13];
    char Top4Guild1[4][13];
    int CemberVadisi;
    int FullMoonGrounds[4];//Labirent gibi
    int GoldenMoon;
    int unk5;
    int mProvingGroundsPoint[4];
    int mProvingGroundsState[4];
    int unk31[5];
    int HevanlyCastle[5];
    int RainWaterHeaven;
    int RainWaterHeaven1;
    int empty;//Direkt boşlar
    int Kafdagi;
	char emptyDeger[12];//Direkt boşlar


//----------------------------------------------------------------------------------------------------------------
}
WORLD_INFO;
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int CpTowers[12];
    int CpTowersAtakType[12];
}
CP_TOWERS;
//-------------------------------------------------------------------------------------------------
//TRIBE_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    char mTribeVoteName[4][MAX_TRIBE_VOTE_AVATAR_NUM][MAX_AVATAR_NAME_LENGTH];//520
    int mTribeVoteLevel[4][MAX_TRIBE_VOTE_AVATAR_NUM];//160
    int mTribeVoteKillOtherTribe[4][MAX_TRIBE_VOTE_AVATAR_NUM];//160
    int mTribeVotePoint[4][MAX_TRIBE_VOTE_AVATAR_NUM];//160
    char mTribeMaster[4][MAX_AVATAR_NAME_LENGTH];//52
    char mTribeSubMaster[4][MAX_TRIBE_SUBMASTER_NUM][MAX_AVATAR_NAME_LENGTH];//624	
    char CemberVadiBasvuru[3][4][5][MAX_AVATAR_NAME_LENGTH];
}
TRIBE_INFO;
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//RANK_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    char NewRank[4][10][MAX_AVATAR_NAME_LENGTH];
    int  NewRankPoint[4][10];
}
RANK_INFO;
typedef struct
{
    char OldRank[4][10][MAX_AVATAR_NAME_LENGTH];
    int  OldRankPoint[4][10];
}
OLD_RANK_INFO;
//-------------------------------------------------------------------------------------------------
//GUILD_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    char gName[MAX_GUILD_NAME_LENGTH];
    int gGrade;
    char gMaster01[MAX_AVATAR_NAME_LENGTH];
    char gSubMaster01[MAX_AVATAR_NAME_LENGTH];
    char gSubMaster02[MAX_AVATAR_NAME_LENGTH];
    char gMemberName[MAX_GUILD_AVATAR_NUM][MAX_AVATAR_NAME_LENGTH];
    int gMemberRole[MAX_GUILD_AVATAR_NUM];
    char gMemberCall[MAX_GUILD_AVATAR_NUM][MAX_CALL_NAME_LENGTH];
    char gNotice[4][MAX_GUILD_NOTICE_LENGTH];
    char empty[2];
    int GuldPoint;
    int GuldPoint1;
    int GuildTime;
    int GuildTime1;
    int GuildTime2;
}
GUILD_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//ZONE_CONNECTION_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    char mIP[MAX_ZONE_NUMBER_NUM][16];
    int mPort[MAX_ZONE_NUMBER_NUM];
}
ZONE_CONNECTION_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//SELL_ITEM_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int mState;
    char mID[MAX_USER_ID_LENGTH];
    int mItemInfo[5];											//[0]:..,[1]:..,[2]:..,[3]:..,[4]:..
}
SELL_ITEM_INFO;

//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//PSHOP_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
    DWORD mUniqueNumber;
    char mName[MAX_PSHOP_NAME_LENGTH];
    int mItemInfo[MAX_PSHOP_PAGE_NUM][MAX_PSHOP_SLOT_NUM][9];//[0]:..,[1]:..,[2]:..,[3]:..,[4]:..,[5]:mPage,[6]:mIndex,[7]:mXPost,[8]:mYPost
    int mSoketInfo[MAX_PSHOP_PAGE_NUM][MAX_PSHOP_SLOT_NUM][3];
}
PSHOP_INFO;
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//ACTION_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
	int 	aType;
	int 	aSort;
	float 	aFrame;
	float 	aLocation[3];
	float 	aTargetLocation[3];
	float 	aFront;
	float 	aTargetFront;
	int 	aTargetObjectSort;
	int 	aTargetObjectIndex;
	int 	aTargetObjectUniqueNumber;
	int 	aSkillNumber;
	int 	aSkillGradeNum1;
	int 	aSkillGradeNum2;
	int 	aSkillValue;
} ACTION_INFO;
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//OBJECT_FOR_AVATAR
//-------------------------------------------------------------------------------------------------
typedef struct
{
	int     aVisibleState;
	int     aSpecialState;
	int		aKillOtherTribe;
	int		aGuildMarkNum;
	char	aGuildName[13];
	char	aBuff0[3];
	int     aGuildRole;
	char	aCallName[5];
	char	aBuff1[3];
	int		aGuildMarkEffect;
	char	aName[13];
	char	aBuff2[3];
	int     aTribe;
	int     aPreviousTribe;
	int     aGender;
	int     aHeadType;
	int     aFaceType;
	int     aLevel1;
	int     aLevel2;
	int		aEquipForView[13][2];
	int		aAnimalNumber;
	int		aTitle;// 1-12 / 101-112 / 201-212 / 301-312 / 401-412
	int		aHalo;	
	int		aRebirth;
	int		FuryState;
	ACTION_INFO aAction;
	int		aMaxLifeValue;
	int		aLifeValue;
	int		aMaxManaValue;
	int		aManaValue;
	int		aEffectValueForView[MAX_AVATAR_EFFECT_SORT_NUM];
	char	aPartyName[13];
	char	aBuff3[3];
	int		aDuelState[3];
	int     aPShopState;
	char	aPShopName[25];
	char	aBuff4[3];
	int		aFashionNumber;
	int		aGuildBuff[2];
    int     BotOn;
    int		mFishingState;//0 Start  --- 1 Stop
    int		mFishingStep;
    float	mFishingPoint[3];
	int		aRankPoint;
	int		aArrow;
	int		aAnimalOn;
	int		mPartAttack;
	int		mPartAttackSort;
	float	mPartBulletLocation[3];
	float	mPartFrame;
    int     aUnk1[4];
    int     aHideCostume;
} OBJECT_FOR_AVATAR;
//-------------------------------------------------------------------------------------------------

typedef struct
{
    char mName[MAX_AVATAR_NAME_LENGTH];
    int mItemInfo[MAX_PSHOP_PAGE_NUM][MAX_PSHOP_SLOT_NUM][5];//[0]:..,[1]:..,[2]:..,[3]:..,[4]:ItemPrice
    int mSoketInfo[MAX_PSHOP_PAGE_NUM][MAX_PSHOP_SLOT_NUM][3];
    int mShopMoney;//
    int mShopBar;//
}
VALETSHOP_INFO;

typedef struct
{
    float 	aLocation[3];
    char	aName[MAX_AVATAR_NAME_LENGTH];
    char	aPShopName[MAX_PSHOP_NAME_LENGTH];
} OBJECT_FOR_SHOP;

typedef struct{
	BYTE AuthType;
	BYTE FindFlag;
	BYTE MoveFlag;
	BYTE MoveZoneFlag;
	BYTE CallFlag;
    BYTE HideFlag;
    BYTE ShowFlag;
	BYTE KickFlag;
    BYTE ItemFlag;
	BYTE BlockFlag;
	BYTE MonCallFlag;
	BYTE EquipFlag;
	BYTE UnequipFlag;
	BYTE YchatFlag;
	BYTE NchatFlag;
	BYTE NoticeFlag;
	BYTE MoneyFlag;
	BYTE ExpFlag;
	BYTE DieFlag;
	BYTE GodFlag;
	BYTE ChatFlag;
	BYTE TradeFlag;
	BYTE ShopFlag;
	BYTE PShopFlag;
	BYTE GItemFlag;
	BYTE DItemFlag;
	BYTE AttackFlag;
	BYTE UZonemoveFlag;
    int DailyRewardTime;
    BYTE IlkMapeGiris;
    BYTE Explock;
}
AUTH_INFO;

typedef struct _MOVE_ITEM_INFO { // žâ¹ö °ªµéÀÌ -1ÀÌžé »ç¿ëÇÏÁö ŸÊÀº °ÍÀÔŽÏŽÙ.
    int mZoneNumber;        // ÀÌµ¿ÇÒ Áž ¹øÈ£.
	int mInvenPage;         // ÀÌµ¿Œ­ ŸÆÀÌÅÛÀÌ À§Ä¡ÇÑ ÀÎº¥Åäž® ÆäÀÌÁö.
	int mInvenIndex;        // ÀÌµ¿Œ­ ŸÆÀÌÅÛÀÌ À§Ä¡ÇÑ ¹è¿­ index.
	int mInvenX;            // ÀÌµ¿Œ­ ŸÆÀÌÅÛ xÁÂÇ¥.
	int mInvenY;            // ÀÌµ¿Œ­ ŸÆÀÌÅÛ yÁÂÇ¥.
} MOVE_ITEM_INFO;


//-------------------------------------------------------------------------------------------------
//OBJECT_FOR_MONSTER
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int mIndex;
    ACTION_INFO mAction;
    int mLifeValue;
    
}
OBJECT_FOR_MONSTER;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//OBJECT_FOR_ITEM
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int iIndex;
    int iQuantity;
    int iValue;
    int iItemRecognitionNumber;
    float iLocation[3];
    char iMaster[MAX_AVATAR_NAME_LENGTH];
    int bul1;
    int bul2;
    int bul3;
    int bul4;
    DWORD iCreateTime;
    DWORD iPresentTime;
    int iCreateState;
    int Socket[3];
    

}
OBJECT_FOR_ITEM;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//ATTACK_FOR_PROTOCOL
//-------------------------------------------------------------------------------------------------
typedef struct
{
    int mCase;					//[....]::1.[...->...(..)],2.[...->...(..)],3.[...->...],4.[...->...],5.[..],6.[..]
    int mServerIndex1;
    DWORD mUniqueNumber1;
	int mServerIndex2;
    DWORD mUniqueNumber2;
    float mSenderLocation[3];
    int mAttackActionValue1;	//[....]::1.[....],2[....]  //Düz vuruş mu Beceri mi
    int mAttackActionValue2;	//[....] OR [....] /        //Skil Number
    int mAttackActionValue3;	//[....]                    //Skill Puanı
    int mAttackActionValue4;	//[....]
    int mAttackResultValue;		//[....]::0.[..],1.[..]
    int mAttackCriticalExist;	//[....]::0.[..],1.[..]
    int mAttackElementDamage;	//[....]
    int mAttackViewDamageValue;	//[....]
    int mAttackRealDamageValue;	//[....]
    
}
ATTACK_FOR_PROTOCOL;

//RANK_FOR_PROTOCOL
typedef struct _s_rank_level {
	char aName[MAX_AVATAR_NAME_LENGTH];
	int level;
	int tribe;
} rank_level_t;

typedef struct _s_rank_kill {
	char aName[MAX_AVATAR_NAME_LENGTH];
	int kill;
	int tribe;
} rank_kill_t;

typedef struct _s_rank_info {
	char aName[MAX_AVATAR_NAME_LENGTH];
	int level;
	int kill;
	int tribe;
	int rank;
} rank_info_t;

//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//PROTOCOL
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//DEFINITION_FOR_PLAYUSER
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[RECV_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//---------------------//
//[LOGIN] -> [PLAYUSER]//
//---------------------//
//protocol(1)
#define P_LOGIN_FOR_PLAYUSER_SEND									11
#define S_LOGIN_FOR_PLAYUSER_SEND									1
//protocol(1)
#define P_LOGIN_OK_FOR_PLAYUSER_SEND								12
#define S_LOGIN_OK_FOR_PLAYUSER_SEND								1
//protocol(1) + tIP(16) + tID(MAX_USER_ID_LENGTH) + tUserSort(4) + tGoodFellow(4) + tLoginPlace(4) + tLoginPremium(4) + tPremiumPCRoom(4) + tTraceState(4) + tBonus100Money + sizeof (AUTH_INFO) + tPremiumServerExpirationDate(4)
#define P_REGISTER_USER_FOR_LOGIN_1_SEND							13
#define S_REGISTER_USER_FOR_LOGIN_1_SEND							46 + MAX_USER_ID_LENGTH + sizeof (AUTH_INFO) // + tPremiumServerExpirationDate(4) // @_Premium_Server_@
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_REGISTER_USER_FOR_LOGIN_2_SEND							14
#define S_REGISTER_USER_FOR_LOGIN_2_SEND							5 + MAX_USER_ID_LENGTH
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_REGISTER_USER_FOR_LOGIN_3_SEND							15
#define S_REGISTER_USER_FOR_LOGIN_3_SEND							5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO )
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_UNREGISTER_USER_FOR_LOGIN_SEND							16
#define S_UNREGISTER_USER_FOR_LOGIN_SEND							5 + MAX_USER_ID_LENGTH
//protocol(1)
#define P_GET_PRESENT_USER_NUM_FOR_LOGIN_SEND						17
#define S_GET_PRESENT_USER_NUM_FOR_LOGIN_SEND						1
//protocol(1) + tSort(4) + tID(MAX_USER_ID_LENGTH)
#define P_BLOCK_USER_FOR_LOGIN_1_SEND								18
#define S_BLOCK_USER_FOR_LOGIN_1_SEND								5 + MAX_USER_ID_LENGTH
//protocol(1) + tSort(4) + tID(MAX_USER_ID_LENGTH)
#define P_BLOCK_USER_FOR_LOGIN_2_SEND								19
#define S_BLOCK_USER_FOR_LOGIN_2_SEND		                        5 + MAX_USER_ID_LENGTH    
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)5 + MAX_USER_ID_LENGTH
#define P_USER_EXT_SEND								                63
#define S_USER_EXT_SEND								                5 + MAX_USER_ID_LENGTH
//--------------------//
//[ZONE] -> [PLAYUSER]//
//--------------------//
//protocol(1) + tZoneNumber(4)
#define P_ZONE_FOR_PLAYUSER_SEND									31
#define S_ZONE_FOR_PLAYUSER_SEND									5
//protocol(1)
#define P_ZONE_OK_FOR_PLAYUSER_SEND									32
#define S_ZONE_OK_FOR_PLAYUSER_SEND									1
//protocol(1) + tID(MAX_USER_ID_LENGTH)
#define P_REGISTER_USER_FOR_ZONE_0_SEND								33
#define S_REGISTER_USER_FOR_ZONE_0_SEND								1 + MAX_USER_ID_LENGTH
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tLogoutInfo(24)
#define P_REGISTER_USER_FOR_ZONE_1_SEND								34
#define S_REGISTER_USER_FOR_ZONE_1_SEND								29 + MAX_USER_ID_LENGTH + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) ) + tEffectValue(MAX_AVATAR_EFFECT_SORT_NUM * 8)
#define P_REGISTER_USER_FOR_ZONE_2_SEND								35
#define S_REGISTER_USER_FOR_ZONE_2_SEND								5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO ) + (MAX_AVATAR_EFFECT_SORT_NUM * 8) + sizeof (AUTH_INFO)
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) ) + tEffectValue(MAX_AVATAR_EFFECT_SORT_NUM * 8)
#define P_REGISTER_USER_FOR_ZONE_3_SEND								36
#define S_REGISTER_USER_FOR_ZONE_3_SEND								5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO ) + (MAX_AVATAR_EFFECT_SORT_NUM * 8) + sizeof (AUTH_INFO) + 4
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_UNREGISTER_USER_FOR_ZONE_SEND								37
#define S_UNREGISTER_USER_FOR_ZONE_SEND								5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO ) + sizeof (AUTH_INFO)
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_FIND_AVATAR_FOR_ZONE_SEND									38
#define S_FIND_AVATAR_FOR_ZONE_SEND									1 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tMoney(16)
#define P_TRIBE_BANK_INFO_SAVE_SEND									39
#define S_TRIBE_BANK_INFO_SAVE_SEND									17
//protocol(1) + tTribe(4)
#define P_TRIBE_BANK_INFO_VIEW_SEND									40
#define S_TRIBE_BANK_INFO_VIEW_SEND									5
//protocol(1) + tTribe(4) + tTribeBankInfoIndex(4) + tInventoryMoney(4)
#define P_TRIBE_BANK_INFO_LOAD_SEND									41
#define S_TRIBE_BANK_INFO_LOAD_SEND									13
//protocol(1) + tID(MAX_USER_ID_LENGTH) + tHackName(MAX_HACK_NAME_LENGTH) + tHackSize(4)
#define P_HACK_NAME_SEND											42
#define S_HACK_NAME_SEND											5 + MAX_USER_ID_LENGTH + MAX_HACK_NAME_LENGTH
//protocol(1) + tSort(4) + tID(MAX_USER_ID_LENGTH)
#define P_BLOCK_USER_FOR_ZONE_1_SEND								43
#define S_BLOCK_USER_FOR_ZONE_1_SEND								5 + MAX_USER_ID_LENGTH

//protocol(1) + tSort(4) + tID(MAX_USER_ID_LENGTH)
#define P_BLOCK_USER_FOR_ZONE_2_SEND								44
#define S_BLOCK_USER_FOR_ZONE_2_SEND								5 + MAX_USER_ID_LENGTH
//protocol(1) + tID(MAX_USER_ID_LENGTH) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tWorldNumber(4) + tZoneNumber(4)
#define P_ADD_AUTO_USER_LIST_SEND									45
#define S_ADD_AUTO_USER_LIST_SEND									9 + MAX_USER_ID_LENGTH + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tAvatarName1(MAX_AVATAR_NAME_LENGTH) + tAvatarName2(MAX_AVATAR_NAME_LENGTH)
#define P_CHECK_KILL_OTHER_TRIBE_SEND								46
#define S_CHECK_KILL_OTHER_TRIBE_SEND								1 + MAX_AVATAR_NAME_LENGTH + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tID(MAX_USER_ID_LENGTH) + tSort(4)
#define P_EVENT_INFO_SEND											47
#define S_EVENT_INFO_SEND											5 + MAX_USER_ID_LENGTH
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_DUPEFIX						                        	90
#define S_DUPEFIX						                    		5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO ) + sizeof (AUTH_INFO)
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_DUPEFIX1						                        	91
#define S_DUPEFIX1						                    		5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO ) + sizeof (AUTH_INFO)
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_VALETSHOPINFO						                        92
#define S_VALETSHOPINFO							                    5 + MAX_AVATAR_NAME_LENGTH
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_CHECKPLAYERONLINE						                    93
#define S_CHECKPLAYERONLINE								            5 + MAX_AVATAR_NAME_LENGTH
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_UPDATEVALATINFO						                    94
#define S_UPDATEVALATINFO								            1 + MAX_AVATAR_NAME_LENGTH + sizeof(VALETSHOP_INFO)
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_VALETSHOPBUY						                        95
#define S_VALETSHOPBUY								                17 + MAX_AVATAR_NAME_LENGTH




#define P_USER_ZONE_SEND_CASH                                65
#define S_USER_ZONE_SEND_CASH                                5 + MAX_USER_ID_LENGTH

#pragma pack (push, 1)

#define ZTOP_CHECK_AUTH_KEY_TYPE     48
struct ZTOP_CHECK_AUTH_KEY {
    ZTOP_CHECK_AUTH_KEY (void) {
        m_bMagic =  ZTOP_CHECK_AUTH_KEY_TYPE;
        ::ZeroMemory (m_szUserID, sizeof (m_szUserID));
        ::ZeroMemory (m_szAuthKey, sizeof (m_szAuthKey));
    }

    BYTE    m_bMagic;
    char    m_szUserID[MAX_USER_ID_LENGTH];
    char    m_szAuthKey[MAX_MOUSE_PASSWORD_LENGTH];
};
#define ZTOP_CHECK_AUTH_KEY_SIZE                    sizeof (ZTOP_CHECK_AUTH_KEY)

#define ZTOP_UPDATE_AUTH_KEY_TYPE       49
struct ZTOP_UPDATE_AUTH_KEY {
    ZTOP_UPDATE_AUTH_KEY (void) {
        m_bMagic = ZTOP_UPDATE_AUTH_KEY_TYPE;
        ::ZeroMemory (m_szUserID, sizeof (m_szUserID));
        ::ZeroMemory (m_szAuthKey, sizeof (m_szAuthKey));
    }

    BYTE    m_bMagic;
    char    m_szUserID[MAX_USER_ID_LENGTH];
    char    m_szAuthKey[2][MAX_MOUSE_PASSWORD_LENGTH];
};
#define ZTOP_UPDATE_AUTH_KEY_SIZE                   sizeof (ZTOP_UPDATE_AUTH_KEY)

#pragma pack (pop)
//protocol(1) + tPlayUserIndex(4) + tChangeAvatarName(MAX_AVATAR_NAME_LENGTH) 
#define P_CHANGE_AVATAR_NAME_FOR_ZONE_SEND							50
#define S_CHANGE_AVATAR_NAME_FOR_ZONE_SEND							5 + MAX_AVATAR_NAME_LENGTH 
//protocol(1) + tPlayUserIndex(4)
#define P_BONUS_100_MONEY_FOR_ZONE_SEND								51
#define S_BONUS_100_MONEY_FOR_ZONE_SEND								5

#ifdef __EVENT_KILL__
//protocol(1) + tPlayUserIndex(4) + tKillNum(4)
#define P_EVENT_FOR_ZONE_SEND										63
#define S_EVENT_FOR_ZONE_SEND										9
#elif __EVENT_GOLD_PHONE__
//protocol(1) + tPlayUserIndex(4)
#define P_EVENT_FOR_ZONE_SEND										63
#define S_EVENT_FOR_ZONE_SEND										5
#endif
//protocol(1) + tPlayUserIndex(4) + tMoveItemInfo(sizeof(MOVE_ITEM_INFO))
#define P_SET_MOVE_ITEM_FOR_ZONE_SEND                               64
#define S_SET_MOVE_ITEM_FOR_ZONE_SEND                               5 + sizeof(MOVE_ITEM_INFO)


//--------------------//
//[TOOL] -> [PLAYUSER]//
//--------------------//
//protocol(1)
#define P_TOOL_FOR_PLAYUSER_SEND									51
#define S_TOOL_FOR_PLAYUSER_SEND									1
//protocol(1)
#define P_TOOL_OK_FOR_PLAYUSER_SEND									52
#define S_TOOL_OK_FOR_PLAYUSER_SEND									1
//protocol(1) + tUserNum(4)
#define P_CHANGE_LOGIN_USER_NUM_SEND								53
#define S_CHANGE_LOGIN_USER_NUM_SEND								5
//protocol(1) + tZoneNumber(4)
#define P_CHECK_ZONE_FOR_TOOL_SEND									54
#define S_CHECK_ZONE_FOR_TOOL_SEND									5
//protocol(1) + tZoneNumber(4)
#define P_GET_PRESENT_USER_NUM_FOR_TOOL_SEND						55
#define S_GET_PRESENT_USER_NUM_FOR_TOOL_SEND						5
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_FIND_AVATAR_FOR_TOOL_SEND									56
#define S_FIND_AVATAR_FOR_TOOL_SEND									1 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tID(MAX_USER_ID_LENGTH)
#define P_FIND_USER_FOR_TOOL_SEND									57
#define S_FIND_USER_FOR_TOOL_SEND									1 + MAX_USER_ID_LENGTH
//protocol(1) + tSort(4) + tID(MAX_USER_ID_LENGTH)
#define P_BLOCK_USER_FOR_TOOL_1_SEND								58
#define S_BLOCK_USER_FOR_TOOL_1_SEND								5 + MAX_USER_ID_LENGTH
//protocol(1) + tSort(4) + tID(MAX_USER_ID_LENGTH)
#define P_BLOCK_USER_FOR_TOOL_2_SEND								59
#define S_BLOCK_USER_FOR_TOOL_2_SEND								5 + MAX_USER_ID_LENGTH
//protocol(1)
#define P_GET_PRESENT_USER_NUM_2_FOR_TOOL_SEND						60		
#define S_GET_PRESENT_USER_NUM_2_FOR_TOOL_SEND						1		
//----------------------//
//[POLICE] -> [PLAYUSER]//
//----------------------//
//protocol(1)
#define P_POLICE_FOR_PLAYUSER_SEND									61
#define S_POLICE_FOR_PLAYUSER_SEND									1
//protocol(1)
#define P_POLICE_OK_FOR_PLAYUSER_SEND								62
#define S_POLICE_OK_FOR_PLAYUSER_SEND								1
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[SEND_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//---------------------//
//[PLAYUSER] -> [LOGIN]//
//---------------------//
//protocol(1)
#define P_LOGIN_FOR_PLAYUSER_RECV									11
#define S_LOGIN_FOR_PLAYUSER_RECV									1
//protocol(1) + tResult(4) + tPlayUserIndex(4)
#define P_REGISTER_USER_FOR_LOGIN_RECV								12
#define S_REGISTER_USER_FOR_LOGIN_RECV								9
//protocol(1)
#define P_UNREGISTER_USER_FOR_LOGIN_RECV							13
#define S_UNREGISTER_USER_FOR_LOGIN_RECV							1
//protocol(1) + tPresentUserNum(4)
#define P_GET_PRESENT_USER_NUM_FOR_LOGIN_RECV						14
#define S_GET_PRESENT_USER_NUM_FOR_LOGIN_RECV						5
//protocol(1) + tResult(4)
#define P_BLOCK_USER_FOR_LOGIN_RECV									15
#define S_BLOCK_USER_FOR_LOGIN_RECV									5
//--------------------//
//[PLAYUSER] -> [ZONE]//
//--------------------//
//protocol(1)
#define P_ZONE_FOR_PLAYUSER_RECV									11
#define S_ZONE_FOR_PLAYUSER_RECV									1
//protocol(1) + tResult(4) + tPlayUserIndex(4)
#define P_REGISTER_USER_FOR_ZONE_0_RECV								12
#define S_REGISTER_USER_FOR_ZONE_0_RECV								9
//protocol(1) + tResult(4) + tUserSort(4) + tGoodFellow(4) + tLoginPlace(4) + tLoginPremium(4) + tLoginPremiumPCRoom(4) + tTraceState(4) + tBonus100Money(1) + tPremiumServerExpirationDate(4) + tAvatarInfo( sizeof( AVATAR_INFO ) ) + tEffectValue(MAX_AVATAR_EFFECT_SORT_NUM * 8) + tCheckFirstZone(4)
#define P_REGISTER_USER_FOR_ZONE_1_RECV								13
#define S_REGISTER_USER_FOR_ZONE_1_RECV								38 + sizeof( AVATAR_INFO ) + (MAX_AVATAR_EFFECT_SORT_NUM * 8) + sizeof (AUTH_INFO) + sizeof(MOVE_ITEM_INFO) + 4 // + tPremiumServerExpirationDate(4) // @_Premium_Server_@ // + sizeof(MOVE_ITEM_INFO)
//protocol(1) + tResult(4)
#define P_REGISTER_USER_FOR_ZONE_2_RECV								14
#define S_REGISTER_USER_FOR_ZONE_2_RECV								5
//protocol(1) + tResult(4)
#define P_REGISTER_USER_FOR_ZONE_3_RECV								15
#define S_REGISTER_USER_FOR_ZONE_3_RECV								5
//protocol(1)
#define P_UNREGISTER_USER_FOR_ZONE_RECV								16
#define S_UNREGISTER_USER_FOR_ZONE_RECV								1
//protocol(1) + tZoneNumber(4) + tTribe(4)
#define P_FIND_AVATAR_FOR_ZONE_RECV									17
#define S_FIND_AVATAR_FOR_ZONE_RECV									9
//protocol(1)
#define P_TRIBE_BANK_INFO_SAVE_RECV									18
#define S_TRIBE_BANK_INFO_SAVE_RECV									1
//protocol(1) + tResult(4) + tTribeBankInfo( MAX_TRIBE_BANK_SLOT_NUM * 4 )
#define P_TRIBE_BANK_INFO_VIEW_RECV									19
#define S_TRIBE_BANK_INFO_VIEW_RECV									5 + MAX_TRIBE_BANK_SLOT_NUM * 4
//protocol(1) + tResult(4) + tMoney(4)
#define P_TRIBE_BANK_INFO_LOAD_RECV									20
#define S_TRIBE_BANK_INFO_LOAD_RECV									9
//protocol(1) + tResult(4)
#define P_HACK_NAME_RECV											21
#define S_HACK_NAME_RECV											5
//protocol(1) + tResult(4)
#define P_BLOCK_USER_FOR_ZONE_RECV									22
#define S_BLOCK_USER_FOR_ZONE_RECV									5

//protocol(1) + tResult(4)
#define P_ADD_AUTO_USER_LIST_RECV									23
#define S_ADD_AUTO_USER_LIST_RECV									5
//protocol(1) + tResult(4)
#define P_CHECK_KILL_OTHER_TRIBE_RECV								24
#define S_CHECK_KILL_OTHER_TRIBE_RECV								5
//protocol(1)
#define P_EVENT_INFO_RECV											25
#define S_EVENT_INFO_RECV											1
//protocol(1)   
#define P_DUPEFIX_PLAYUSER						                	90
#define S_DUPEFIX_PLAYUSER							            	1
//protocol(1)   
#define P_DUPEFIX_PLAYUSER1						                	91
#define S_DUPEFIX_PLAYUSER1							            	1
//protocol(1) + tResult(4) + sizeof(VALETSHOP_INFO) 
#define P_VALETINFOPLAYUSERSEND						                93
#define S_VALETINFOPLAYUSERSEND								        1 + 4 + sizeof(VALETSHOP_INFO)
//protocol(1) + tResult(4) + sizeof(VALETSHOP_INFO) 
#define P_VALETINFOONLINECHECK						                94
#define S_VALETINFOONLINECHECK									    1 + 4
//protocol(1) + tResult(4)
#define P_VALETINFOBUYSEND						                    95
#define S_VALETINFOBUYSEND								            5




#pragma pack (push, 1)

#define PTOZ_CHECK_AUTH_KEY_TYPE     26
struct PTOZ_CHECK_AUTH_KEY {
    PTOZ_CHECK_AUTH_KEY (void) {
        m_bMagic =  PTOZ_CHECK_AUTH_KEY_TYPE;
    }

    BYTE    m_bMagic;
    BYTE    m_bResult;
};
#define PTOZ_CHECK_AUTH_KEY_SIZE                    sizeof (PTOZ_CHECK_AUTH_KEY)

#define PTOZ_UPDATE_AUTH_KEY_TYPE       27
struct PTOZ_UPDATE_AUTH_KEY {
    PTOZ_UPDATE_AUTH_KEY (void) {
        m_bMagic = PTOZ_UPDATE_AUTH_KEY_TYPE;
    }

    BYTE        m_bMagic;
    BYTE        m_bResult;
};
#define PTOZ_UPDATE_AUTH_KEY_SIZE                   sizeof (PTOZ_UPDATE_AUTH_KEY)

#pragma pack (pop)

//protocol(1) + tResult(4)
#define P_CHANGE_AVATAR_NAME_FOR_ZONE_RECV							28
#define S_CHANGE_AVATAR_NAME_FOR_ZONE_RECV							5
//protocol(1) + tResult(4)
#define P_BONUS_100_MONEY_FOR_ZONE_RECV								29
#define S_BONUS_100_MONEY_FOR_ZONE_RECV								5


#define P_USER_ZONE_RECV_CASH                                  30
#define S_USER_ZONE_RECV_CASH                                  5

//--------------------//
//[PLAYUSER] -> [TOOL]//
//--------------------//
//protocol(1)
#define P_TOOL_FOR_PLAYUSER_RECV									11
#define S_TOOL_FOR_PLAYUSER_RECV									1
//protocol(1) + tResult(4)
#define P_CHANGE_LOGIN_USER_NUM_RECV								12
#define S_CHANGE_LOGIN_USER_NUM_RECV								5
//protocol(1) + tResult(4)
#define P_CHECK_ZONE_FOR_TOOL_RECV									13
#define S_CHECK_ZONE_FOR_TOOL_RECV									5
//protocol(1) + tPresentUserNum(4)
#define P_GET_PRESENT_USER_NUM_FOR_TOOL_RECV						14
#define S_GET_PRESENT_USER_NUM_FOR_TOOL_RECV						5
//protocol(1) + tZoneNumber(4)
#define P_FIND_AVATAR_FOR_TOOL_RECV									15
#define S_FIND_AVATAR_FOR_TOOL_RECV									5
//protocol(1) + tZoneNumber(4)
#define P_FIND_USER_FOR_TOOL_RECV									16
#define S_FIND_USER_FOR_TOOL_RECV									5
//protocol(1) + tResult(4)
#define P_BLOCK_USER_FOR_TOOL_RECV									17
#define S_BLOCK_USER_FOR_TOOL_RECV									5
//protocol(1) + tLength(4) + tBuffer(2048)
#define P_GET_PRESENT_USER_NUM_2_FOR_TOOL_RECV						18
#define S_GET_PRESENT_USER_NUM_2_FOR_TOOL_RECV						5 + 2048
//----------------------//
//[PLAYUSER] -> [POLICE]//
//----------------------//
//protocol(1)
#define P_POLICE_FOR_PLAYUSER_RECV									11
#define S_POLICE_FOR_PLAYUSER_RECV									1
//protocol(1) + tID(33) + tIP(16)
#define P_USER_INFO_FOR_POLICE										12
#define S_USER_INFO_FOR_POLICE										51
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//DEFINITION_FOR_CENTER
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[RECV_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-------------------//
//[LOGIN] -> [CENTER]//
//-------------------//
//protocol(1)
#define P_LOGIN_FOR_CENTER_SEND										11
#define S_LOGIN_FOR_CENTER_SEND										1
//protocol(1)
#define P_LOGIN_OK_FOR_CENTER_SEND									12
#define S_LOGIN_OK_FOR_CENTER_SEND									1
//protocol(1) + tZoneNumber(4)
#define P_GET_ZONE_SERVER_INFO_1									13
#define S_GET_ZONE_SERVER_INFO_1									5

#pragma pack (push, 1)

#define LTOG_BAN_PLAYER_TYPE                                        18
struct LTOG_BAN_PLAYER {
    LTOG_BAN_PLAYER (void) {
        ::ZeroMemory (this, sizeof (LTOG_BAN_PLAYER));
        m_bMagic = LTOG_BAN_PLAYER_TYPE;
    }

    BYTE        m_bMagic;
    char        m_szID[MAX_USER_ID_LENGTH];
};
#define LTOG_BAN_PLAYER_SIZE                    sizeof (LTOG_BAN_PLAYER)

#pragma pack (pop)
//------------------//
//[ZONE] -> [CENTER]//
//------------------//
//protocol(1) + tZoneNumber(4) + tPort(4)
#define P_ZONE_FOR_CENTER_SEND										31
#define S_ZONE_FOR_CENTER_SEND										9
//protocol(1)
#define P_ZONE_OK_FOR_CENTER_SEND									32
#define S_ZONE_OK_FOR_CENTER_SEND									1
//protocol(1) + tInfoSort(4) + tInfoData(MAX_BROADCAST_INFO_SIZE)
#define P_DEMAND_BROADCAST_INFO										33
#define S_DEMAND_BROADCAST_INFO										5 + MAX_BROADCAST_INFO_SIZE
//protocol(1) + tZoneNumber(4) + tResult(4) + tUserIndex(4) + tGmIndex(4)
#define P_SERCH_AVATAR_SEND											34
#define S_SERCH_AVATAR_SEND											17
//protocol(1) +tSort(4) + tResult(4) + tUserIndex(4) + tGmIndex(4)
#define P_CHECK_EVENT_SEND											35
#define S_CHECK_EVENT_SEND											17
//protocol(1)
#define P_GET_TOTAL_RANK_INFO_SEND                                  36
#define S_GET_TOTAL_RANK_INFO_SEND                                   1
//protocol(1) + aName(13) + tUserIndex(4)
#define P_GET_RANK_INFO_SEND                                        37
#define S_GET_RANK_INFO_SEND                                        1 + MAX_AVATAR_NAME_LENGTH + 4
//protocol(1) + ZoneNumber(4)
#define P_ZONE_CONNECTION_INFO_SEND                                 38
#define S_ZONE_CONNECTION_INFO_SEND                                 5
// @ Cost Info Download @
//protocol(1) + tResult(4)
#define P_UPDATE_CASH_ITEM_INFO_FOR_CENTER                          39
#define S_UPDATE_CASH_ITEM_INFO_FOR_CENTER                          5
// @

//------------------//
//[TOOL] -> [CENTER]//
//------------------//
//protocol(1)
#define P_TOOL_FOR_CENTER_SEND										51
#define S_TOOL_FOR_CENTER_SEND										1
//protocol(1)
#define P_TOOL_OK_FOR_CENTER_SEND									52
#define S_TOOL_OK_FOR_CENTER_SEND									1
//protocol(1)
#define P_DEMAND_START_FOR_TOOL										53
#define S_DEMAND_START_FOR_TOOL										1
//protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH) + tZoneNumber(4) + tTribe(4)
#define P_DEMAND_NOTICE_FOR_TOOL									54
#define S_DEMAND_NOTICE_FOR_TOOL									9 + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tEventSort(4) + tEventValue(4) + tZoneNumber(4)
#define P_DEMAND_SET_EVENT_FOR_TOOL									55
#define S_DEMAND_SET_EVENT_FOR_TOOL									13
//protocol(1)
#define P_DEMAND_SHUTDOWN_FOR_TOOL									56
#define S_DEMAND_SHUTDOWN_FOR_TOOL									1
//protocol(1) + tEventSort(4) + tZoneNumber(4) + tMoveZoneNumber(4) + tAvatarName01(13)
#define P_DEMAND_SET_GM_ORDER_FOR_GMTOOL							57
#define S_DEMAND_SET_GM_ORDER_FOR_GMTOOL							25
//protocol(1) + tAvatarName01(13) + tGmIndex(4)
#define P_DEMAND_SERCH_AVATAR_FOR_GMTOOL							58
#define S_DEMAND_SERCH_AVATAR_FOR_GMTOOL							18
//protocol(1) + tZoneNumber(4) + AvatarName01(13) + tPosX(4) + tPosY(4) + tPosZ(4)
#define P_DEMAND_SET_GM_ORDER_FOR_GMTOOL_MOVE_AVATAR				59
#define S_DEMAND_SET_GM_ORDER_FOR_GMTOOL_MOVE_AVATAR				30
//protocol(1) + tEventSort(4) + tGmIndex(4)
#define P_DEMAND_CHECK_EVENT_FOR_TOOL								60
#define S_DEMAND_CHECK_EVENT_FOR_TOOL								9
// # X-Trap # {
//protocol(1)
#define P_XTRAP_MAP_FILE_CHANGE_FOR_CENTER                           64
#define S_XTRAP_MAP_FILE_CHANGE_FOR_CENTER                           1
// # }

//-----------------------//
//[CHAT_TOOL] -> [CENTER]//
//-----------------------//
//protocol(1)
#define P_CHAT_TOOL_FOR_CENTER_SEND									14
#define S_CHAT_TOOL_FOR_CENTER_SEND									1
//protocol(1)
#define P_CHAT_TOOL_OK_FOR_CENTER_SEND								15
#define S_CHAT_TOOL_OK_FOR_CENTER_SEND								1
//protocol(1) + tZoneNumber(4) + tTribe(4) + tAvatarName01(13) + tAvatarName02(13) + tContent(51)
#define P_TRIBE_CHAT_FOR_CHAT_TOOL_SEND								16
#define S_TRIBE_CHAT_FOR_CHAT_TOOL_SEND								86
//protocol(1) + tZoneNumber(4) + tTribe(4) + tAvatarName01(13) + tAvatarName02(13) + tContent(51)
#define P_SECRET_CHAT_FOR_CHAT_TOOL_SEND							17
#define S_SECRET_CHAT_FOR_CHAT_TOOL_SEND							86
//--------------------//
//[POLICE] -> [CENTER]//
//--------------------//
//protocol(1)
#define P_POLICE_FOR_CENTER_SEND									61
#define S_POLICE_FOR_CENTER_SEND									1
//protocol(1)
#define P_POLICE_OK_FOR_CENTER_SEND									62
#define S_POLICE_OK_FOR_CENTER_SEND									1
//protocol(1) + tID(33) + tLoginTime(4) + tLogoutTime(4)
#define P_POLICE_INFO_FOR_CENTER_SEND								63
#define S_POLICE_INFO_FOR_CENTER_SEND								42
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[SEND_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-------------------//
//[CENTER] -> [LOGIN]//
//-------------------//
//protocol(1)
#define P_LOGIN_FOR_CENTER_RECV										11
#define S_LOGIN_FOR_CENTER_RECV										1
//protocol(1) + tResult(4) + tIP(16) + tPort(4)
#define P_GET_ZONE_SERVER_INFO_1_RESULT								12
#define S_GET_ZONE_SERVER_INFO_1_RESULT								25

#pragma pack (push, 1)

#define GTOL_BAN_PLAYER_TYPE                    13
struct GTOL_BAN_PLAYER {
    GTOL_BAN_PLAYER (void) {
        ::ZeroMemory (this, sizeof (GTOL_BAN_PLAYER));
        m_bMagic = GTOL_BAN_PLAYER_TYPE;
    }

    BYTE            m_bMagic;
    char            m_szID[MAX_USER_ID_LENGTH];
};
#define GTOL_BAN_PLAYER_SIZE                    sizeof (GTOL_BAN_PLAYER)

#pragma pack (pop)
//------------------//
//[CENTER] -> [ZONE]//
//------------------//
//protocol(1)
#define P_ZONE_FOR_CENTER_RECV										11
#define S_ZONE_FOR_CENTER_RECV										1
//protocol(1) + tZoneConnectionInfo( sizeof( ZONE_CONNECTION_INFO ) )
#define P_TOTAL_ZONE_CONNECTION_INFO								12
#define S_TOTAL_ZONE_CONNECTION_INFO								1 + sizeof( ZONE_CONNECTION_INFO )
//protocol(1) + tWorldInfo( sizeof( WORLD_INFO ) ) + tTribeInfo( sizeof( TRIBE_INFO ) )
#define P_WORLD_INFO												13
#define S_WORLD_INFO												1 + sizeof( WORLD_INFO ) + sizeof( TRIBE_INFO )
//protocol(1) + tZoneNumber(4) + tIP(16) + tPort(4)
#define P_ZONE_CONNECTION_INFO										14
#define S_ZONE_CONNECTION_INFO										25
//protocol(1) + tInfoSort(4) + tInfoData(MAX_BROADCAST_INFO_SIZE)
#define P_BROADCAST_INFO											15
#define S_BROADCAST_INFO											5 + MAX_BROADCAST_INFO_SIZE
//protocol(1)
#define P_START														16
#define S_START														1
//protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH) + tTribe(4)
#define P_NOTICE													17
#define S_NOTICE													5 + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tEventSort(4) + tEventValue(4)
#define P_SET_EVENT													18
#define S_SET_EVENT													9
//protocol(1)
#define P_SHUTDOWN													19
#define S_SHUTDOWN													1
//protocol(1) + tZoneNumber(4) + tTribe(4) + tAvatarName01(13) + tAvatarName02(13) + tContent(51)
#define P_TRIBE_CHAT												20
#define S_TRIBE_CHAT												86
//protocol(1) + tZoneNumber(4) + tTribe(4) + tAvatarName01(13) + tAvatarName02(13) + tContent(51)
#define P_SECRET_CHAT												21
#define S_SECRET_CHAT												86
//protocol(1) + tID(33) + tLoginTime(4) + tLogoutTime(4)
#define P_POLICE_INFO												22
#define S_POLICE_INFO												42
//protocol(1) + tEventSort(4) + tMoveZoneNumber(4) + tAvatarName01(13)
#define P_SET_GM_ORDER												23
#define S_SET_GM_ORDER												21		
//protocol(1) + tAvatarName01(13) + tUserIndex(4) + tGmIndex(4)
#define P_SERCH_AVATAR												24
#define S_SERCH_AVATAR												22
//protocol(1) + tAvatarName01(13) + tPosX(4) + tPosY(4) + tPosZ(4) +
#define P_SET_GM_ORDER_MOVE_AVATAR									25
#define S_SET_GM_ORDER_MOVE_AVATAR									26

#pragma pack (push, 1)

#define GTOZ_BAN_PLAYER_TYPE                    26
struct GTOZ_BAN_PLAYER {
    GTOZ_BAN_PLAYER (void) {
        ::ZeroMemory (this, sizeof (GTOZ_BAN_PLAYER));
        m_bMagic = GTOZ_BAN_PLAYER_TYPE;
    }

    BYTE                m_bMagic;
    char                m_szID[MAX_USER_ID_LENGTH];
};
#define GTOZ_BAN_PLAYER_SIZE                    sizeof (GTOZ_BAN_PLAYER)

#pragma pack (pop)

//protocol(1) + tEventSort(4) + tUserIndex(4) + tGmIndex(4)
#define P_CHECK_EVENT											    27
#define S_CHECK_EVENT											    13
//protocol(1) + tEventSort(4) + tUserIndex(4) + tGmIndex(4)
#define P_TOTAL_RANK_INFO_RECV                                      28
#define S_TOTAL_RANK_INFO_RECV                                      0
//protocol(1) + sizeof(rank_info_t) + tUserIndex(4) 
#define P_RANK_INFO_RECV                                            29
#define S_RANK_INFO_RECV                                            1 + sizeof(rank_info_t) + 4
// # X-Trap # {
//protocol(1)
#define P_XTRAP_MAP_FILE_CHANGE_FOR_ZONE                            30
#define S_XTRAP_MAP_FILE_CHANGE_FOR_ZONE                            1
// # }
// @ Cost Info Download @
//protocol(1) + tResult(4)
#define P_UPDATE_CASH_ITEM_INFO_FOR_ZONE                            31
#define S_UPDATE_CASH_ITEM_INFO_FOR_ZONE                            5
// @
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_CPTOWER										            32//kule bilgisi
#define S_CPTOWER								                    1 + sizeof(CP_TOWERS)
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_RankPoint									                33//kule bilgisi
#define S_RankPoint								                    1 + sizeof(RANK_INFO)
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_RankPointOld								                34//kule bilgisi
#define S_RankPointOld								                5 + sizeof(RANK_INFO)
//------------------//
//[CENTER] -> [TOOL]//
//------------------//
//protocol(1)
#define P_TOOL_FOR_CENTER_RECV										11
#define S_TOOL_FOR_CENTER_RECV										1
//protocol(1)
#define P_TOOL_DEMAND_RESULT										12
#define S_TOOL_DEMAND_RESULT										1
//protocol(1) + tZoneNumber(4) + tGmIndex(4)
#define P_TOOL_SERCH_AVATAR_RESULT									13
#define S_TOOL_SERCH_AVATAR_RESULT									9
//protocol(1) + tGmIndex(4) + tEventSort(4) + tResult(4) + tWorldNumber(4) + tZoneNumber(4)
#define P_TOOL_CHECK_EVENT_RESULT									14
#define S_TOOL_CHECK_EVENT_RESULT									21
//-----------------------//
//[CENTER] -> [CHAT_TOOL]//
//-----------------------//
//protocol(1)
#define P_CHAT_TOOL_FOR_CENTER_RECV									11
#define S_CHAT_TOOL_FOR_CENTER_RECV									1
//--------------------//
//[CENTER] -> [POLICE]//
//--------------------//
//protocol(1)
#define P_POLICE_FOR_CENTER_RECV									11
#define S_POLICE_FOR_CENTER_RECV									1
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//DEFINITION_FOR_RELAY
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[RECV_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-----------------//
//[ZONE] -> [RELAY]//
//-----------------//
//protocol(1) + tZoneNumber(4)
#define P_ZONE_FOR_RELAY_SEND										31
#define S_ZONE_FOR_RELAY_SEND										5
//protocol(1)
#define P_ZONE_OK_FOR_RELAY_SEND									32
#define S_ZONE_OK_FOR_RELAY_SEND									1
//protocol(1) + tSort(4) + tData(MAX_BROADCAST_DATA_SIZE)
#define P_DEMAND_BROADCAST_DATA										33
#define S_DEMAND_BROADCAST_DATA										5 + MAX_BROADCAST_DATA_SIZE
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[SEND_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-----------------//
//[RELAY] -> [ZONE]//
//-----------------//
//protocol(1)
#define P_ZONE_FOR_RELAY_RECV										11
#define S_ZONE_FOR_RELAY_RECV										1
//protocol(1) + tSort(4) + tData(MAX_BROADCAST_DATA_SIZE)
#define P_BROADCAST_DATA											12
#define S_BROADCAST_DATA											5 + MAX_BROADCAST_DATA_SIZE
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//DEFINITION_FOR_EXTRA
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[RECV_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-----------------//
//[ZONE] -> [EXTRA]//
//-----------------//
//protocol(1) + tZoneNumber(4)
#define P_ZONE_FOR_EXTRA_SEND										31
#define S_ZONE_FOR_EXTRA_SEND										5
//protocol(1)
#define P_ZONE_OK_FOR_EXTRA_SEND									32
#define S_ZONE_OK_FOR_EXTRA_SEND									1
//protocol(1) + tSort(4) + tData(MAX_GUILD_WORK_SIZE)
#define P_GUILD_WORK_FOR_EXTRA_SEND									33
#define S_GUILD_WORK_FOR_EXTRA_SEND									5 + MAX_GUILD_WORK_SIZE
//protocol(1) + tID(MAX_USER_ID_LENGTH)
#define P_GET_CASH_SIZE_FOR_EXTRA_SEND								34
#define S_GET_CASH_SIZE_FOR_EXTRA_SEND								1 + MAX_USER_ID_LENGTH
// @ Cost Info Download @
//S_BUY_CASH_ITEM_FOR_EXTRA_SEND »çÀÌÁî º¯°æ - tVersion(4) Ãß°¡.
//protocol(1) + tID(MAX_USER_ID_LENGTH) + tCostInfoIndex(4) + iIndex(4) + iQuantity(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tTribe(4) + tLevel(4) + tZoneNumber(4) + tVersion(4)
#define P_BUY_CASH_ITEM_FOR_EXTRA_SEND								35
#define S_BUY_CASH_ITEM_FOR_EXTRA_SEND								21 + MAX_USER_ID_LENGTH + MAX_AVATAR_NAME_LENGTH + 4 + 4
//protocol(1)
#define P_UPDATE_CASH_ITEM_INFO_FOR_EXTRA_SEND                      36
#define S_UPDATE_CASH_ITEM_INFO_FOR_EXTRA_SEND                      1
//protocol(1) + tZoneNumber(4)
#define P_GET_CASH_ITEM_INFO_FOR_EXTRA_SEND                         37
#define S_GET_CASH_ITEM_INFO_FOR_EXTRA_SEND                         5
// @
//protocol(1) + tID(MAX_USER_ID_LENGTH) + iIndex(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tZoneNumber(4)
#define P_USE_PACKAGE_ITEM_FOR_EXTRA_SEND                           38
#define S_USE_PACKAGE_ITEM_FOR_EXTRA_SEND                           9 + MAX_USER_ID_LENGTH + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tZoneNumber(4)
#define P_GET_BLOOD_ITEM_FOR_EXTRA_SEND                             39
#define S_GET_BLOOD_ITEM_FOR_EXTRA_SEND                             5

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[SEND_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-----------------//
//[EXTRA] -> [ZONE]//
//-----------------//
// @ Cost Info Download @
// S_ZONE_FOR_EXTRA_RECV »çÀÌÁî º¯°æ 1 --> 5 + MAX_CASH_ITEM_INFO_SIZE
//protocol(1) + tVersion(4) + MAX_CASH_ITEM_INFO_SIZE
#define P_ZONE_FOR_EXTRA_RECV										11
#define S_ZONE_FOR_EXTRA_RECV										5 + MAX_CASH_ITEM_INFO_SIZE
// @
//protocol(1) + tResult(4) + tGuildInfo( sizeof( GUILD_INFO ) )
#define P_GUILD_WORK_FOR_EXTRA_RECV									12
#define S_GUILD_WORK_FOR_EXTRA_RECV									5 + sizeof( GUILD_INFO )
//protocol(1) + tCashSize(4) + tBonusCashSize(4)
#define P_GET_CASH_SIZE_FOR_EXTRA_RECV								13
#define S_GET_CASH_SIZE_FOR_EXTRA_RECV								9
//protocol(1) + tResult(4) + tCashSize(4) + tBonusCashSize(4)
#define P_BUY_CASH_ITEM_FOR_EXTRA_RECV								14
#define S_BUY_CASH_ITEM_FOR_EXTRA_RECV								9 + 4 + 4 + 4
// @ Cost Info Download @
//protocol(1) + tResult(4)
#define P_UPDATE_CASH_ITEM_INFO_FOR_EXTRA_RECV                      15
#define S_UPDATE_CASH_ITEM_INFO_FOR_EXTRA_RECV                      5
//protocol(1) + tResult(4) + tVersion(4) + tCashItemInfo(MAX_CASH_ITEM_INFO_SIZE)
#define P_GET_CASH_ITEM_INFO_FOR_EXTRA_RECV                         16
#define S_GET_CASH_ITEM_INFO_FOR_EXTRA_RECV                         9 + MAX_CASH_ITEM_INFO_SIZE
// @
//protocol(1) + tResult(4)
#define P_USE_PACKAGE_ITEM_FOR_EXTRA_RECV                           17
#define S_USE_PACKAGE_ITEM_FOR_EXTRA_RECV                           5
//protocol(1) + tResult(4)
#define P_BLOOD_ITEM_FOR_EXTRA_RECV                                 18
#define S_BLOOD_ITEM_FOR_EXTRA_RECV                                 1 + 4 +2400
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//DEFINITION_FOR_LOGIN
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[RECV_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-------------------//
//sub_519030
//sub_518B80
//[CLIENT] -> [LOGIN]//
//-------------------//
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tID(MAX_USER_ID_LENGTH) + tPassword(MAX_USER_PASSWORD_LENGTH) + tVersion(4)
#define P_LOGIN_SEND												28
#define S_LOGIN_SEND												13 + MAX_USER_ID_LENGTH + MAX_USER_PASSWORD_LENGTH //+ 39
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_CLIENT_OK_FOR_LOGIN_SEND									12
#define S_CLIENT_OK_FOR_LOGIN_SEND									9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tMousePassword(MAX_MOUSE_PASSWORD_LENGTH)
#define P_CREATE_MOUSE_PASSWORD_SEND								13
#define S_CREATE_MOUSE_PASSWORD_SEND								9 + MAX_MOUSE_PASSWORD_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tMousePassword(MAX_MOUSE_PASSWORD_LENGTH) + tChangeMousePassword(MAX_MOUSE_PASSWORD_LENGTH)
#define P_CHANGE_MOUSE_PASSWORD_SEND								14
#define S_CHANGE_MOUSE_PASSWORD_SEND								9 + MAX_MOUSE_PASSWORD_LENGTH + MAX_MOUSE_PASSWORD_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tMousePasswordInput(MAX_MOUSE_PASSWORD_LENGTH)
#define P_LOGIN_MOUSE_PASSWORD_SEND									15
#define S_LOGIN_MOUSE_PASSWORD_SEND									9 + MAX_MOUSE_PASSWORD_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSecretCardInput01(3) + tSecretCardInput02(3)
#define P_LOGIN_SECRET_CARD_SEND									16
#define S_LOGIN_SECRET_CARD_SEND									15
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarPost(4) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_CREATE_AVATAR_SEND										17
#define S_CREATE_AVATAR_SEND										13 + sizeof( AVATAR_INFO )
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarPost(4)
#define P_DELETE_AVATAR_SEND										18
#define S_DELETE_AVATAR_SEND										21
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarPost(4) + tChangeAvatarName(MAX_AVATAR_NAME_LENGTH) + tPage(4) + tIndex(4)
#define P_CHANGE_AVATAR_NAME_SEND									19
#define S_CHANGE_AVATAR_NAME_SEND									21 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tCardNumber(MAX_USER_CARD_NUMBER_LENGTH)
#define P_DEMAND_GIFT_SEND											20
#define S_DEMAND_GIFT_SEND											9 + MAX_USER_CARD_NUMBER_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tGiftInfoindex(4)
#define P_WANT_GIFT_SEND											21
#define S_WANT_GIFT_SEND											17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarPost(4)
#define P_DEMAND_ZONE_SERVER_INFO_1									22
#define S_DEMAND_ZONE_SERVER_INFO_1									13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_FAIL_MOVE_ZONE_1_SEND										23
#define S_FAIL_MOVE_ZONE_1_SEND										9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_RECOMMAND_WORLD_SEND                                      24
#define S_RECOMMAND_WORLD_SEND                                      62  
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_RECIVEGIFT                                                25
#define S_RECIVEGIFT                                                9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_EVENTITEM                                                 26
#define S_EVENTITEM                                                 9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_EVENTITEMBUY                                              27
#define S_EVENTITEMBUY                                              14

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[SEND_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//-------------------//
//[LOGIN] -> [CLIENT]//
//-------------------//
//protocol(1) + tResult(4) + tID(MAX_USER_ID_LENGTH) + tUserSort(4) + tGoodFellow(4) + tLoginPlace(4) + tLoginPremium(4) + tLoginPremiumPCRoom(4) + tSecondLoginSort(4) + tMousePassword(MAX_MOUSE_PASSWORD_LENGTH) + tSecretCardIndex01(4) + tSecretCardIndex02(4) + tFirstLogin(1)
#define P_LOGIN_RECV												11
#define S_LOGIN_RECV												238 + MAX_USER_ID_LENGTH
//protocol(1) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_USER_AVATAR_INFO											12
#define S_USER_AVATAR_INFO											1 + sizeof( AVATAR_INFO )
//protocol(1) + tResult(4) + tMousePassword(MAX_MOUSE_PASSWORD_LENGTH)
#define P_CREATE_MOUSE_PASSWORD_RECV								13
#define S_CREATE_MOUSE_PASSWORD_RECV								5 + MAX_MOUSE_PASSWORD_LENGTH
//protocol(1) + tResult(4) + tMousePassword(MAX_MOUSE_PASSWORD_LENGTH)
#define P_CHANGE_MOUSE_PASSWORD_RECV								14
#define S_CHANGE_MOUSE_PASSWORD_RECV								5 + MAX_MOUSE_PASSWORD_LENGTH
//protocol(1) + tResult(4)
#define P_LOGIN_MOUSE_PASSWORD_RECV									15
#define S_LOGIN_MOUSE_PASSWORD_RECV									5
//protocol(1) + tResult(4)
#define P_LOGIN_SECRET_CARD_RECV									16
#define S_LOGIN_SECRET_CARD_RECV									5
//protocol(1) + tResult(4) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_CREATE_AVATAR_RECV										17
#define S_CREATE_AVATAR_RECV										5 + sizeof( AVATAR_INFO )
//protocol(1) + tResult(4)
#define P_DELETE_AVATAR_RECV										18
#define S_DELETE_AVATAR_RECV										5
//protocol(1) + tResult(4)
#define P_CHANGE_AVATAR_NAME_RECV									19
#define S_CHANGE_AVATAR_NAME_RECV									5
//protocol(1) + tResult(4) + tGiftInfo(40)
#define P_DEMAND_GIFT_RECV											20
#define S_DEMAND_GIFT_RECV											45
//protocol(1) + tResult(4)
#define P_WANT_GIFT_RECV											21
#define S_WANT_GIFT_RECV											5
//protocol(1) + tResult(4) + tIP(16) + tPort(4)
#define P_DEMAND_ZONE_SERVER_INFO_1_RESULT							23
#define S_DEMAND_ZONE_SERVER_INFO_1_RESULT							29
//25 recevie gift --- 85
//protocol(1) + island_1(1) + partition_1(1) + world_1(1) + island_2(1) + partition_2(1) + world_2(1) + island_3(1) + partition_3(1) + world_3(1) + island_4(1) + partition_4(1) + world_4(1)
#define P_RECOMMAND_WORLD_RECV                                      24
#define S_RECOMMAND_WORLD_RECV                                      26    
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_RECIVEGIFTSEND                                            25
#define S_RECIVEGIFTSEND                                            85
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_EVENTITEMSEND                                             26
#define S_EVENTITEMSEND                                             813


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//DEFINITION_FOR_ZONE
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[RECV_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//------------------//
//[CLIENT] -> [ZONE]//
//------------------//
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tID(MAX_USER_ID_LENGTH) + tribe(4)
#define P_TEMP_REGISTER_SEND										11
#define S_TEMP_REGISTER_SEND										13 + MAX_USER_ID_LENGTH + 4
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tID(MAX_USER_ID_LENGTH) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tAction( sizeof( ACTION_INFO ) )
#define P_REGISTER_AVATAR_SEND										12
#define S_REGISTER_AVATAR_SEND										9 + MAX_USER_ID_LENGTH + MAX_AVATAR_NAME_LENGTH + sizeof( ACTION_INFO )
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tTribe(4)
#define P_CLIENT_OK_FOR_ZONE_SEND									13
#define S_CLIENT_OK_FOR_ZONE_SEND									13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAnswer(4)
#define P_AUTO_CHECK_ASK_RECV										14
#define S_AUTO_CHECK_ASK_RECV										13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAction( sizeof( ACTION_INFO ) )
#define P_AVATAR_ACTION_SEND										15
#define S_AVATAR_ACTION_SEND										9 + sizeof( ACTION_INFO )
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAction( sizeof( ACTION_INFO ) )
#define P_UPDATE_AVATAR_ACTION										16
#define S_UPDATE_AVATAR_ACTION										9 + sizeof( ACTION_INFO )
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GENERAL_NOTICE_SEND										17
#define S_GENERAL_NOTICE_SEND										9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAttackInfo( sizeof( ATTACK_FOR_PROTOCOL ) )
#define P_PROCESS_ATTACK_SEND										18
#define S_PROCESS_ATTACK_SEND										9 + sizeof( ATTACK_FOR_PROTOCOL )
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tData(MAX_BROADCAST_DATA_SIZE)
#define P_PROCESS_DATA_SEND											19
#define S_PROCESS_DATA_SEND											13 + MAX_BROADCAST_DATA_SIZE
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tZoneNumber(4)
#define P_DEMAND_ZONE_SERVER_INFO_2									20
#define S_DEMAND_ZONE_SERVER_INFO_2									17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_FAIL_MOVE_ZONE_2_SEND										21
#define S_FAIL_MOVE_ZONE_2_SEND										9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPage(4) + tIndex(4)
#define P_USE_HOTKEY_ITEM_SEND										22
#define S_USE_HOTKEY_ITEM_SEND										17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPage(4) + tIndex(4) + tValue(4) +bParam_1(1)+bParam_2(1)
#define P_USE_INVENTORY_ITEM_SEND									23
#define S_USE_INVENTORY_ITEM_SEND									21
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPage1(4) + tIndex1(4) + tPage2(4) + tIndex2(4)
#define P_IMPROVE_ITEM_SEND											24
#define S_IMPROVE_ITEM_SEND											25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPage1(4) + tIndex1(4) + tPage2(4) + tIndex2(4)
#define P_ADD_ITEM_SEND												25
#define S_ADD_ITEM_SEND												25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPage(4) + tIndex(4)
#define P_EXCHANGE_ITEM_SEND										26
#define S_EXCHANGE_ITEM_SEND										29
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPage1(4) + tIndex1(4) + tPage2(4) + tIndex2(4)
#define P_HIGH_ITEM_SEND											27
#define S_HIGH_ITEM_SEND											25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPage1(4) + tIndex1(4) + tPage2(4) + tIndex2(4)
#define P_LOW_ITEM_SEND												28
#define S_LOW_ITEM_SEND												25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tPage1(4) + tIndex1(4) + tPage2(4) + tIndex2(4) + tPage3(4) + tIndex3(4) + tPage4(4) + tIndex4(4)
#define P_MAKE_ITEM_SEND											29
#define S_MAKE_ITEM_SEND											45
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tPage1(4) + tIndex1(4) + tPage2(4) + tIndex2(4) + tPage3(4) + tIndex3(4) + tPage4(4) + tIndex4(4)
#define P_MAKE_SKILL_SEND											30
#define S_MAKE_SKILL_SEND											45
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tPShopInfo( sizeof( PSHOP_INFO ) )
#define P_START_PSHOP_SEND											31
#define S_START_PSHOP_SEND											9 + 4 + sizeof( PSHOP_INFO )
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_END_PSHOP_SEND											32
#define S_END_PSHOP_SEND											13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_DEMAND_PSHOP_SEND											33
#define S_DEMAND_PSHOP_SEND											9 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort1(4) + tSort2(4)
#define P_PSHOP_ITEM_INFO_SEND										34
#define S_PSHOP_ITEM_INFO_SEND										17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tUniqueNumber(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tPage1(4) + tIndex1(4) + tQuantity1(4) + tPage2(4) + tIndex2(4) + tXPost2(4) + tYPost2(4)
#define P_BUY_PSHOP_SEND											35
#define S_BUY_PSHOP_SEND											41 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tPage(4) + tIndex(4) + tXPost(4) + tYPost(4)
#define P_PROCESS_QUEST_SEND										36
#define S_PROCESS_QUEST_SEND										29
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_CHANGE_TO_TRIBE4_SEND										37
#define S_CHANGE_TO_TRIBE4_SEND										9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GENERAL_CHAT_SEND											38
#define S_GENERAL_CHAT_SEND											9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_SECRET_CHAT_SEND											39
#define S_SECRET_CHAT_SEND											9 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GENERAL_SHOUT_SEND										40
#define S_GENERAL_SHOUT_SEND										9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_GET_CASH_SIZE_SEND										41
#define S_GET_CASH_SIZE_SEND										13
// S_BUY_CASH_ITEM_SEND 
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tCostInfoIndex(4) + tPage(4) + tIndex(4) + tValue(24) + tVersion(4)
#define P_BUY_CASH_ITEM_SEND										42
#define S_BUY_CASH_ITEM_SEND										49
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tSort(4)
#define P_DUEL_ASK_SEND												43
#define S_DUEL_ASK_SEND												13 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_DUEL_CANCEL_SEND											44
#define S_DUEL_CANCEL_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAnswer(4)
#define P_DUEL_ANSWER_SEND											45
#define S_DUEL_ANSWER_SEND											13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_DUEL_START_SEND											46
#define S_DUEL_START_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_TRADE_ASK_SEND											47
#define S_TRADE_ASK_SEND											9 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TRADE_CANCEL_SEND											48
#define S_TRADE_CANCEL_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAnswer(4)
#define P_TRADE_ANSWER_SEND											49
#define S_TRADE_ANSWER_SEND											13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TRADE_START_SEND											50
#define S_TRADE_START_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TRADE_MENU_SEND											51
#define S_TRADE_MENU_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TRADE_END_SEND											52
#define S_TRADE_END_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_FRIEND_ASK_SEND											53
#define S_FRIEND_ASK_SEND											9 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_FRIEND_CANCEL_SEND										54
#define S_FRIEND_CANCEL_SEND										9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAnswer(4)
#define P_FRIEND_ANSWER_SEND										55
#define S_FRIEND_ANSWER_SEND										13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tIndex(4)
#define P_FRIEND_MAKE_SEND											56
#define S_FRIEND_MAKE_SEND											13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tIndex(4)
#define P_FRIEND_FIND_SEND											57
#define S_FRIEND_FIND_SEND											13 
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tIndex(4)
#define P_FRIEND_DELETE_SEND										58
#define S_FRIEND_DELETE_SEND										13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_TEACHER_ASK_SEND											59
#define S_TEACHER_ASK_SEND											9 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TEACHER_CANCEL_SEND										60
#define S_TEACHER_CANCEL_SEND										9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAnswer(4)
#define P_TEACHER_ANSWER_SEND										61
#define S_TEACHER_ANSWER_SEND										13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TEACHER_START_SEND										62
#define S_TEACHER_START_SEND										9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TEACHER_END_SEND											63
#define S_TEACHER_END_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_TEACHER_STATE_SEND										64
#define S_TEACHER_STATE_SEND										9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_ASK_SEND											65
#define S_PARTY_ASK_SEND											9 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_PARTY_CANCEL_SEND											66
#define S_PARTY_CANCEL_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAnswer(4)
#define P_PARTY_ANSWER_SEND											67
#define S_PARTY_ANSWER_SEND											13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_PARTY_CHAT_SEND											68
#define S_PARTY_CHAT_SEND											9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_PARTY_LEAVE_SEND											69
#define S_PARTY_LEAVE_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_EXILE_SEND											70
#define S_PARTY_EXILE_SEND											9 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_BREAK_SEND											71
#define S_PARTY_BREAK_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_GUILD_ASK_SEND											72
#define S_GUILD_ASK_SEND											9 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_GUILD_CANCEL_SEND											73
#define S_GUILD_CANCEL_SEND											9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAnswer(4)
#define P_GUILD_ANSWER_SEND											74
#define S_GUILD_ANSWER_SEND											13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tData(MAX_GUILD_WORK_SIZE)
#define P_GUILD_WORK_SEND											75
#define S_GUILD_WORK_SEND											13 + MAX_GUILD_WORK_SIZE
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GUILD_NOTICE_SEND											76
#define S_GUILD_NOTICE_SEND											9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GUILD_CHAT_SEND											77
#define S_GUILD_CHAT_SEND											9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GUILD_FIND_SEND											78
#define S_GUILD_FIND_SEND											9 + MAX_AVATAR_NAME_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tData(MAX_TRIBE_WORK_SIZE)
#define P_TRIBE_WORK_SEND											79
#define S_TRIBE_WORK_SEND											13 + MAX_TRIBE_WORK_SIZE
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_TRIBE_NOTICE_SEND											80
#define S_TRIBE_NOTICE_SEND											9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_TRIBE_CHAT_SEND											81
#define S_TRIBE_CHAT_SEND											9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_TRIBE_BANK_SEND											82
#define S_TRIBE_BANK_SEND											17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_TRIBE_VOTE_SEND											83 
#define S_TRIBE_VOTE_SEND											17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send1											        85 
#define S_unk_send1                                                 13+9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_AUTO_POT									            	86
#define S_AUTO_POT									               	17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_ANIMAL_STATE_SEND											87	
#define S_ANIMAL_STATE_SEND                                         17
//PET_COMBINE_SEND
#define P_PET_COMBINE											    88
#define S_PET_COMBINE											    45
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_DESTROY_ITEM											    89 
#define S_DESTROY_ITEM                                              17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_COSTUME										            90
#define S_COSTUME										            17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1)
#define P_GET_CASH_ITEM_INFO_SEND                                   91
#define S_GET_CASH_ITEM_INFO_SEND                                   9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4)
#define P_MUHAFIZ									                92
#define S_MUHAFIZ										            13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send4											        93 
#define S_unk_send4                                                 25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_AUTOBUFF										            94
#define S_AUTOBUFF										            73
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_AUTOBUFF1										            95
#define S_AUTOBUFF1										            25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send5											        96 
#define S_unk_send5                                                 23
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + Unk(4)
#define P_TIME_EFFEECT                                              97
#define S_TIME_EFFEECT                                              13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tHackName(MAX_HACK_NAME_LENGTH) + tHackSize(4)
#define P_SOCKET_RECV											    98
#define S_SOCKET_RECV											    21
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tHackName(MAX_HACK_NAME_LENGTH) + tHackSize(4)
#define P_AUTOHUNT									            	99
#define S_AUTOHUNT											        125
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send7											        100 
#define S_unk_send7                                                 30
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + UNK1(4)+ UNK1(4)+ UNK1(4)+ UNK1(4)
#define P_CRAFT                                                     102
#define S_CRAFT                                                     25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_FISHING											        103 
#define S_FISHING                                                   21
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_FISHING2											        104 
#define S_FISHING2                                                  17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_WINFISH											        105 
#define S_WINFISH                                                   9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send11											    106 
#define S_unk_send11                                                25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send12											    107 
#define S_unk_send12                                                26
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_VALETSHOPOPEN											    108 
#define S_VALETSHOPOPEN                                             30
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + SayfaNumber + SlotNumber + ItemId + tPage + tSlot + x + y + mEquipInfo[4] + mItemPrice + mSoket[3]
#define P_VALETSHOPITEMDEL											109 
#define S_VALETSHOPITEMDEL                                          9 + MAX_AVATAR_NAME_LENGTH + 28 + 32
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_VALETSHOPGETMONEY											110 
#define S_VALETSHOPGETMONEY	                                        17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) Sınıf sistemi
#define P_RankSystem											    111 
#define S_RankSystem                                                13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_FUNCITON_NOTICE										    112
#define S_FUNCITON_NOTICE										    9 + MAX_CHAT_CONTENT_LENGTH
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + Unk(4)
#define P_MOUT_ABSORB                                               113
#define S_MOUT_ABSORB                                               13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4) + tValue1(4)
#define P_KAPSUL										    	    114 
#define S_KAPSUL                                                    21
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send18											    115 
#define S_unk_send18                                                13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send19											    116 
#define S_unk_send19                                                9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_unk_send20											    117
#define S_unk_send20                                                9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) 
#define P_RANK                                                      118
#define S_RANK                                                      9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_RANKPRIZE											        119
#define S_RANKPRIZE	                                                9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_UPRADGETOWER											    120
#define S_UPRADGETOWER                                              21
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_Socket2Item											    121
#define S_Socket2Item	                                            25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + Unk(4)
#define P_DAILY_MISSION                                             126
#define S_DAILY_MISSION                                             13
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tTribe(4)
#define P_UPGRADE_CAPE_SEND									        127
#define S_UPGRADE_CAPE_SEND									        25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_SKILLCOMBINE											    128
#define S_SKILLCOMBINE                                              9
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_BOTTLE											        129
#define S_BOTTLE                                                    17
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) + tValue(4)
#define P_LEGIMPROVE											    134
#define S_LEGIMPROVE	                                            25
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) 
#define P_HideCostume											    139//Protokol
#define S_HideCostume                                               13//Boyutu
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) 
#define P_BLOODMARKET											    140//Protokol
#define S_BLOODMARKET                                               9//Boyutu
//tPacketNumber1(4) + tPacketNumber2(4) + protocol(1) + tSort(4) 
#define P_BLOODMARKETBUY											141//Protokol
#define S_BLOODMARKETBUY                                            45//Boyutu



#define P_FURY      											    117
#define S_FURY                                                      9

#define P_TRADER_WARLORD_UPGRADE							        93 
#define S_TRADER_WARLORD_UPGRADE                                  25

#define P_ENGRAVE							                        142 
#define S_ENGRAVE                                                   25

#define P_BEGGARADDABILITY											132
#define S_BEGGARADDABILITY                                          25

#define P_BEGGARREQUIEM     									    137
#define S_BEGGARREQUIEM                                             25

#define P_TAILOR_ITEM_UPGRADE											    133
#define S_TAILOR_ITEM_UPGRADE	                                            45

#define P_TAILOR_SEAL											    135
#define S_TAILOR_SEAL	                                            45


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//[SEND_PROTOCOL]
//-------------------------------------------------------------------------------------------------
//------------------//
//[ZONE] -> [CLIENT]//
//------------------//
//protocol(1) + tResult(4)
#define P_TEMP_REGISTER_RECV										11
#define S_TEMP_REGISTER_RECV										5
//protocol(1) + tAvatarInfo( sizeof( AVATAR_INFO ) ) + tEffectValue(MAX_AVATAR_EFFECT_SORT_NUM * 8) + tPremiumServerExpirationDate(4)
#define P_REGISTER_AVATAR_RECV										12
#define S_REGISTER_AVATAR_RECV										1 + sizeof( AVATAR_INFO ) + MAX_AVATAR_EFFECT_SORT_NUM * 8 // + tPremiumServerExpirationDate(4) // @_Premium_Server_@
//protocol(1) + tWorldInfo( sizeof( WORLD_INFO ) ) + tTribeInfo( sizeof( TRIBE_INFO ) )
#define P_BROADCAST_WORLD_INFO										13
#define S_BROADCAST_WORLD_INFO										1 + sizeof( WORLD_INFO ) + sizeof( TRIBE_INFO )//3777
//protocol(1) + tDataSize(4) + tData(1000)
#define P_AUTO_CHECK_ASK_SEND										14
#define S_AUTO_CHECK_ASK_SEND										1005
//protocol(1) + tServerIndex(4) + tUniqueNumber(4) + tAvatar( sizeof( OBJECT_FOR_AVATAR ) ) + tCheckChangeActionState(4)
#define P_AVATAR_ACTION_RECV										15
#define S_AVATAR_ACTION_RECV										13 + sizeof( OBJECT_FOR_AVATAR )
//protocol(1) + tServerIndex(4) + tUniqueNumber(4) + tEffectValue(MAX_AVATAR_EFFECT_SORT_NUM * 8) + tEffectValueState(MAX_AVATAR_EFFECT_SORT_NUM * 4 )
#define P_AVATAR_EFFECT_VALUE_INFO									16
#define S_AVATAR_EFFECT_VALUE_INFO									9 + MAX_AVATAR_EFFECT_SORT_NUM * 8 + MAX_AVATAR_EFFECT_SORT_NUM * 4
//protocol(1) + tServerIndex(4) + tUniqueNumber(4) + tSort(4) + tValue01(4) + tValue02(4) + tValue03(4)
#define P_AVATAR_CHANGE_INFO_1										17
#define S_AVATAR_CHANGE_INFO_1										25
//protocol(1) + tServerIndex(4) + tUniqueNumber(4) + tMonster( sizeof( OBJECT_FOR_MONSTER ) ) + tCheckChangeActionState(4)
#define P_MONSTER_ACTION_RECV										18
#define S_MONSTER_ACTION_RECV										13 + sizeof( OBJECT_FOR_MONSTER )
//protocol(1) + tServerIndex(4) + tUniqueNumber(4) + tItem( sizeof( OBJECT_FOR_ITEM ) ) + tCheckChangeActionState(4)
#define P_ITEM_ACTION_RECV											19
#define S_ITEM_ACTION_RECV											13 + sizeof( OBJECT_FOR_ITEM )
//protocol(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GENERAL_NOTICE_RECV										20
#define S_GENERAL_NOTICE_RECV										1 + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tAttackInfo( sizeof( ATTACK_FOR_PROTOCOL ) )
#define P_PROCESS_ATTACK_RECV										21
#define S_PROCESS_ATTACK_RECV										1 + sizeof( ATTACK_FOR_PROTOCOL )
//protocol(1) + tSort(4) + tValue(4)
#define P_AVATAR_CHANGE_INFO_2										22
#define S_AVATAR_CHANGE_INFO_2										9
//protocol(1) + tResult(4) + tSort(4) + tData(MAX_BROADCAST_DATA_SIZE)
#define P_PROCESS_DATA_RECV											23
#define S_PROCESS_DATA_RECV											9 + MAX_BROADCAST_DATA_SIZE
//protocol(1) + tResult(4) + tIp(16) + tPort(4)
#define P_DEMAND_ZONE_SERVER_INFO_2_RESULT							24
#define S_DEMAND_ZONE_SERVER_INFO_2_RESULT							25
//protocol(1) + tResult(4) + tPage(4) + tIndex(4)
#define P_USE_HOTKEY_ITEM_RECV										25
#define S_USE_HOTKEY_ITEM_RECV										13
//protocol(1) + tResult(4) + tPage(4) + tIndex(4) + tValue(4)
#define P_USE_INVENTORY_ITEM_RECV									26
#define S_USE_INVENTORY_ITEM_RECV									17
//protocol(1) + tResult(4) + tCost(4) + iValue(4)
#define P_IMPROVE_ITEM_RECV											27
#define S_IMPROVE_ITEM_RECV											13
//protocol(1) + tResult(4) + tCost(4)
#define P_ADD_ITEM_RECV												28
#define S_ADD_ITEM_RECV												9
//protocol(1) + tResult(4) + tCost(4) + tValue(24)
#define P_EXCHANGE_ITEM_RECV										29
#define S_EXCHANGE_ITEM_RECV										33
//protocol(1) + tResult(4) + tCost(4) + tValue(24)
#define P_HIGH_ITEM_RECV											30
#define S_HIGH_ITEM_RECV											33
//protocol(1) + tResult(4) + tCost(4) + tValue(24)
#define P_LOW_ITEM_RECV												31
#define S_LOW_ITEM_RECV												33
//protocol(1) + tResult(4) + tValue(24)
#define P_MAKE_ITEM_RECV											32
#define S_MAKE_ITEM_RECV											29
//protocol(1) + tResult(4) + tValue(24)
#define P_MAKE_SKILL_RECV											33
#define S_MAKE_SKILL_RECV											29
//protocol(1) + tResult(4) + tPShopInfo( sizeof( PSHOP_INFO ) )
#define P_START_PSHOP_RECV											34 //Aracı dükkanı da böyle geliyor
#define S_START_PSHOP_RECV											5 + sizeof( PSHOP_INFO )
//protocol(1)
#define P_END_PSHOP_RECV											35
#define S_END_PSHOP_RECV											5
//protocol(1) + tResult(4) + tPShopInfo( sizeof( PSHOP_INFO ) )
#define P_DEMAND_PSHOP_RECV											36
#define S_DEMAND_PSHOP_RECV											5 + sizeof( PSHOP_INFO )
//protocol(1) + tUniqueNumber(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tPage(4) + tIndex(4) + tPShopItemInfo(36) + tPShopSocketInfo(12) + Unk(4)
#define P_PSHOP_ITEM_INFO_RECV										37
#define S_PSHOP_ITEM_INFO_RECV										65 + MAX_AVATAR_NAME_LENGTH 
//protocol(1) + tResult(4) + tCost(4) + tPage(4) + tIndex(4) + tValue(24) + tSocketValue[12]
#define P_BUY_PSHOP_RECV											38
#define S_BUY_PSHOP_RECV											53
//protocol(1) + tSort(4) + tPage(4) + tIndex(4) + tXPost(4) + tYPost(4)
#define P_PROCESS_QUEST_RECV										39
#define S_PROCESS_QUEST_RECV										21
//protocol(1) + tResult(4)
#define P_CHANGE_TO_TRIBE4_RECV										40
#define S_CHANGE_TO_TRIBE4_RECV										5
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tAuthType(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GENERAL_CHAT_RECV											41
#define S_GENERAL_CHAT_RECV											1 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tResult(4) + tZoneNumber(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tContent(MAX_CHAT_CONTENT_LENGTH) + tAuthType(1)
#define P_SECRET_CHAT_RECV											42
#define S_SECRET_CHAT_RECV											13 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tAuthType(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GENERAL_SHOUT_RECV										43
#define S_GENERAL_SHOUT_RECV										1 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tCashSize(4) + tBonusCashSize(4)
#define P_GET_CASH_SIZE_RECV										44
#define S_GET_CASH_SIZE_RECV										9
//protocol(1) + tResult(4) + tCashSize(4) + tBonusCashSize(4) + tPage(4) + tIndex(4) + tValue(24)
#define P_BUY_CASH_ITEM_RECV										45
#define S_BUY_CASH_ITEM_RECV										41
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tSort(4)
#define P_DUEL_ASK_RECV												46
#define S_DUEL_ASK_RECV												5 + MAX_AVATAR_NAME_LENGTH
//protocol(1)
#define P_DUEL_CANCEL_RECV											47
#define S_DUEL_CANCEL_RECV											1
//protocol(1) + tAnswer(4)
#define P_DUEL_ANSWER_RECV											48
#define S_DUEL_ANSWER_RECV											5
//protocol(1) + tDuelState(12) + tRemainTime(4) + tEatDrugState(4)
#define P_DUEL_START_RECV											49
#define S_DUEL_START_RECV											21
//protocol(1) + tRemainTime(4)
#define P_DUEL_TIME_INFO											50
#define S_DUEL_TIME_INFO											5
//protocol(1) + tResult(4)
#define P_DUEL_END_RECV												51
#define S_DUEL_END_RECV												5
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tLevel(4)
#define P_TRADE_ASK_RECV											52
#define S_TRADE_ASK_RECV											5 + MAX_AVATAR_NAME_LENGTH
//protocol(1)
#define P_TRADE_CANCEL_RECV											53
#define S_TRADE_CANCEL_RECV											1
//protocol(1) + tAnswer(4)
#define P_TRADE_ANSWER_RECV											54
#define S_TRADE_ANSWER_RECV											5
//protocol(1) + tTradeMoney(4) + tTrade(MAX_TRADE_SLOT_NUM * 16)
#define P_TRADE_START_RECV											55
#define S_TRADE_START_RECV											5 + MAX_TRADE_SLOT_NUM * 16 + MAX_TRADE_SLOT_NUM * 12 + 4
//protocol(1) + tTradeMoney(4) + tTrade(MAX_TRADE_SLOT_NUM * 16)
#define P_TRADE_STATE_RECV											56
#define S_TRADE_STATE_RECV											5 + MAX_TRADE_SLOT_NUM * 16 + MAX_TRADE_SLOT_NUM * 12 + 4
//protocol(1) + tCheckMe(4)
#define P_TRADE_MENU_RECV											57
#define S_TRADE_MENU_RECV											5
//protocol(1) + tResult(4)
#define P_TRADE_END_RECV											58
#define S_TRADE_END_RECV											5
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_FRIEND_ASK_RECV											59
#define S_FRIEND_ASK_RECV											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1)
#define P_FRIEND_CANCEL_RECV										60
#define S_FRIEND_CANCEL_RECV										1
//protocol(1) + tAnswer(4)
#define P_FRIEND_ANSWER_RECV										61
#define S_FRIEND_ANSWER_RECV										5
//protocol(1) + tIndex(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_FRIEND_MAKE_RECV											62
#define S_FRIEND_MAKE_RECV											5 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tIndex(4) + tZoneNumber(4)
#define P_FRIEND_FIND_RECV											63
#define S_FRIEND_FIND_RECV											9
//protocol(1) + tIndex(4)
#define P_FRIEND_DELETE_RECV										64
#define S_FRIEND_DELETE_RECV										5
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_TEACHER_ASK_RECV											65
#define S_TEACHER_ASK_RECV											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1)
#define P_TEACHER_CANCEL_RECV										66
#define S_TEACHER_CANCEL_RECV										1
//protocol(1) + tAnswer(4)
#define P_TEACHER_ANSWER_RECV										67
#define S_TEACHER_ANSWER_RECV										5
//protocol(1) + tSort(4) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_TEACHER_START_RECV										68
#define S_TEACHER_START_RECV										5 + MAX_AVATAR_NAME_LENGTH
//protocol(1)
#define P_TEACHER_END_RECV											69
#define S_TEACHER_END_RECV											1
//protocol(1) + tResult(4)
#define P_TEACHER_STATE_RECV										70
#define S_TEACHER_STATE_RECV										5
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_ASK_RECV											71
#define S_PARTY_ASK_RECV											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1)
#define P_PARTY_CANCEL_RECV											72
#define S_PARTY_CANCEL_RECV											1
//protocol(1) + tAnswer(4)
#define P_PARTY_ANSWER_RECV											73
#define S_PARTY_ANSWER_RECV											5
//protocol(1)
#define P_PARTY_MAKE_RECV											74
#define S_PARTY_MAKE_RECV											5 + MAX_AVATAR_NAME_LENGTH * 5 
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_JOIN_RECV											75
#define S_PARTY_JOIN_RECV											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_PARTY_CHAT_RECV											76
#define S_PARTY_CHAT_RECV											1 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_LEAVE_RECV											77
#define S_PARTY_LEAVE_RECV											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_EXILE_RECV											78
#define S_PARTY_EXILE_RECV											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_PARTY_BREAK_RECV											79
#define S_PARTY_BREAK_RECV											5 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_GUILD_ASK_RECV											80
#define S_GUILD_ASK_RECV											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1)
#define P_GUILD_CANCEL_RECV											81
#define S_GUILD_CANCEL_RECV											1
//protocol(1) + tAnswer(4)
#define P_GUILD_ANSWER_RECV											82
#define S_GUILD_ANSWER_RECV											5
//protocol(1) + tResult(4) + tSort(4) + tGuildInfo( sizeof( GUILD_INFO ) )
#define P_GUILD_WORK_RECV											83
#define S_GUILD_WORK_RECV											9 + sizeof( GUILD_INFO )
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GUILD_NOTICE_RECV											84
#define S_GUILD_NOTICE_RECV											1 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_GUILD_CHAT_RECV											85
#define S_GUILD_CHAT_RECV											1 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tResult(4)
#define P_GUILD_FIND_RECV											86
#define S_GUILD_FIND_RECV											5
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH)
#define P_GUILD_LOGIN_INFO											87
#define S_GUILD_LOGIN_INFO											1 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tResult(4) + tSort(4) + tData(MAX_TRIBE_WORK_SIZE)
#define P_TRIBE_WORK_RECV											88
#define S_TRIBE_WORK_RECV											9 + MAX_TRIBE_WORK_SIZE
//protocol(1) + tSort(4) +tAvatarName(MAX_AVATAR_NAME_LENGTH) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_TRIBE_NOTICE_RECV											89
#define S_TRIBE_NOTICE_RECV											5 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tAvatarName(MAX_AVATAR_NAME_LENGTH) + tAuthType(1) + tContent(MAX_CHAT_CONTENT_LENGTH)
#define P_TRIBE_CHAT_RECV											90 
#define S_TRIBE_CHAT_RECV											1 + MAX_AVATAR_NAME_LENGTH + MAX_CHAT_CONTENT_LENGTH
//protocol(1) + tResult(4) + tSort(4) + tTribeBankInfo( MAX_TRIBE_BANK_SLOT_NUM * 4 ) + tMoney(4)
#define P_TRIBE_BANK_RECV											91
#define S_TRIBE_BANK_RECV											13 + MAX_TRIBE_BANK_SLOT_NUM * 4
//protocol(1) + tResult(4) + tSort(4) + tValue(4)
#define P_TRIBE_VOTE_RECV											92
#define S_TRIBE_VOTE_RECV											13
//protocol(1) + tSort(4) + tValue(4)
#define P_TRIBE_ALLIANCE_INFO										93
#define S_TRIBE_ALLIANCE_INFO										9
//protocol(1) + tInfoSort(4) + tInfoData(MAX_BROADCAST_INFO_SIZE)
#define P_BROADCAST_INFO_RECV										94
#define S_BROADCAST_INFO_RECV										5 + MAX_BROADCAST_INFO_SIZE
//protocol(1) + tTribeUserNum(16) + tRemainTime(4)
#define P_049_TYPE_BATTLE_INFO										95
#define S_049_TYPE_BATTLE_INFO										21
//protocol(1) + tExistStone(16) + tRemainTime(4)
#define P_051_TYPE_BATTLE_INFO									    96
#define S_051_TYPE_BATTLE_INFO										17
//protocol(1) + tSort(4) + tData(MAX_TRIBE_WORK_SIZE)
#define P_GM_COMMAND_INFO											97
#define S_GM_COMMAND_INFO											5 + MAX_TRIBE_WORK_SIZE
//protocol(1)
#define P_RETURN_TO_AUTO_ZONE										98
#define S_RETURN_TO_AUTO_ZONE										1
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_CHECK_N_PROTECT_1											99
#define S_CHECK_N_PROTECT_1											5
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_194_BATTLE_INFO										    100 //saniye sayıyor
#define S_194_BATTLE_INFO										    17
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_194_BATTLE_COUNTDOWN									    101 //saniye sonra başlayacak
#define S_194_BATTLE_COUNTDOWN										5
//protocol(1) + tValue01(4) + tValue02(4)
#define P_ANIMAL_STATE_RECV											102
#define S_ANIMAL_STATE_RECV											9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_267_TYPE_BATTLE_INFO										103 //MİRA
#define S_267_TYPE_BATTLE_INFO									    21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_053_TYPE_BATTLE_INFO										104 //Zaman sayıyor yd katında kullan
#define S_053_TYPE_BATTLE_INFO							            5
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_PET_COMBINE_SEND										    105 //Pet Birleştirme
#define S_PET_COMBINE_SEND										    29
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_DESTROY_ITEM_SEND										    106 //Destroy
#define S_DESTROY_ITEM_SEND										    33
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK7										                107 //dk. sonra başlıyor Bir xasesi oyundan atıyor insanları
#define S_UNK7										                9
//protocol(1) + tCount(4) + {tPage(4) + tInvenSlot(4) + tInvenIndex(4) + tItemNum(4) + tItemCount(4) + tItemValue(4) 
#define P_COSTUME_RECV									            108
#define S_COSTUME_RECV									            29
//protocol(1) + tResult(4) + tVersion(4) + tCashItemInfo(MAX_CASH_ITEM_INFO_SIZE)
#define P_GET_CASH_ITEM_INFO_RECV                                   109
#define S_GET_CASH_ITEM_INFO_RECV                                   8969
//protocol(1)
#define P_UPDATE_CASH_ITEM_INFO                                     110
#define S_UPDATE_CASH_ITEM_INFO                                     1
//protocol(1) + tRemainTime(4)
#define P_UNK777									                111
#define S_UNK77										                9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_AutoBuff1									                113
#define S_AutoBuff1										            5
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_AutoBuff2										            114
#define S_AutoBuff2										            5
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK15										                115//Cliente ses paketi gönderiyor :)
#define S_UNK15										                13
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_CemberVadiZamani									        116 //Çember vadi zamanı
#define S_CemberVadiZamani										    13
//protocol(1) + tResult(4) + tSort(4) + tValue(4)
#define P_Socket											        117 //soket
#define S_Socket										            21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_CemberVadiMobInfo										    118//Karakol sayı sayma gibi bir şey
#define S_CemberVadiMobInfo										    17
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_AVLANMABONUSU									            119 //Avlanma Bonusu
#define S_AVLANMABONUSU										        61
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK20										                120//Sağ tık ile hotkeye item alma veya sürükleyerek
#define S_UNK20										                29
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK21										                121 //Çember Vadi Kayıt
#define S_UNK21										                22
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK22										                122 //PC Kafe Pet elde
#define S_UNK22										                25
//protocol(1) + tResult(4) + tCost(4) + iValue(4)
#define P_AUTOHUNTSEND									        	123
#define S_AUTOHUNTSEND										        13
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_CRAFT_ITEM_RECV										    124//Cp ile yüzde basma destansı item olabilir
#define S_CRAFT_ITEM_RECV										    13
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_ALCATRAZ										                125 //Alcatraz taşı
#define S_ALCATRAZ										                9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK26										                126 //Yeşil vadi işgal --- Yüksek Arazi
#define S_UNK26										                22
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_FISHINGSEND										        127 //Balık tutma Başlangıç
#define S_FISHINGSEND									            21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_FISHINGSEND2										        128
#define S_FISHINGSEND2									            21 //Balık tutma karaktere gösterme
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_FISHINGITEMSEND									        129 //Balık tutma
#define S_FISHINGITEMSEND									        21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK30										                130//Saldırıyor Yuakrıdan yazan kırmızı çember
#define S_UNK30									                    61
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK31										                131//Chalanger Kısmı
#define S_UNK31									                    365
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK32										                132//Aile haritasına ışınlıyor
#define S_UNK32									                    9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK33										                133 //4B Kalesi Bölge
#define S_UNK33									                    9
//protocol(1) + tSort(4) +tAvatarName(MAX_AVATAR_NAME_LENGTH) + float Info[3]
#define P_VALETSHOPUPDATE										    134//Aracı dükkanı update
#define S_VALETSHOPUPDATE										    65
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_VALETSHOP										            135 //Aracı Dükkanı item koyma
#define S_VALETSHOP									                833
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_VALETSHOP1										        136 //Aracı Dükkanı itemi geri alma
#define S_VALETSHOP1									            877
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_VALETGETMONEY										        137 //Aracı Dükkanı ödemesi
#define S_VALETGETMONEY										        13
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_ITEMSEND										            138// İtem Yolluyor
#define S_ITEMSEND										            21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_FUNCITON_NOTICE_RECV								    	139 //P_FUNCITON_NOTICE_RECV	
#define S_FUNCITON_NOTICE_RECV								        79
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK40										                140 //Zaman
#define S_UNK40								                        9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_KAPSULSEND										        141 //Kapsül Dükkanı
#define S_KAPSULSEND							                    65
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK42										                142 //dk. sonra Kutsal Taş , canavar
#define S_UNK42								                        9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK43										                143//Şehre dönüş atıyor
#define S_UNK43								                        1
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK44										                144 //işgal isim yazan kavimle yazan
#define S_UNK44								                        22
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK45										                145 
#define S_UNK45								                        29
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK46										                146 //item alma
#define S_UNK46								                        21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK47										                147 //PC Kafe ayrıcalıkları yakında
#define S_UNK47								                        10
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_NEWRANKINFO										        148//Nrank Sıralama Yolluyor
#define S_NEWRANKINFO								                5 + sizeof(RANK_INFO)
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_RANKPRIZE								                    149 //N tuşu [kahraman Sıralaması Ödülleri]
#define S_RANKPRIZE								                    57
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_OLDRANKINFO									            150//n BİLGİSİ
#define S_OLDRANKINFO									            5 + sizeof(OLD_RANK_INFO)
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UpradgeKule										        151 //kule güçlendirme
#define S_UpradgeKule								                25
//protocol(1) + sizeof(CP_TOWERS)
#define P_CPTOWERZONE										        152//kule bilgisi
#define S_CPTOWERZONE								                1 + sizeof(CP_TOWERS)
//protocol(1) + MAX_AVATAR_NAME_LENGTH
#define P_TamirKule									                153 //Kule Tamiri
#define S_TamirKule							                        1 + MAX_AVATAR_NAME_LENGTH
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK54										                154 //[Kana Susamış Dev]
#define S_UNK54								                        9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_ADDSOCKET										            155 //Socket açma
#define S_ADDSOCKET								                    17
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_REMAIN_TIME_RECV										    157 //Zaman
#define S_REMAIN_TIME_RECV								            5
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK58										                158//Hv Castle G1~4
#define S_UNK58								                        437
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK59										                159 //savaş dalga
#define S_UNK59								                        9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_DAILY_MISSION_SEND	                                    163 //Günlük ödüller
#define S_DAILY_MISSION_SEND								        25
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_Cape_Upgrade										        164 //Yükseltme
#define S_Cape_Upgrade								                29
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_BOTTLESEND										        165 
#define S_BOTTLESEND								                13
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK66										                166 //Değişik taşlar
#define S_UNK66								                        9
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK68										                168 //üretim
#define S_UNK68								                        25
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK69										                169//Özellik ekele silaha
#define S_UNK69								                        21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK70										                170 //Süre bitinçe şehre geri atması gibi bir paket
#define S_UNK70								                        6
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_TAILORUPGRADE										                171 //[SİSTEM] Destansı Pet takaslandı
#define S_TAILORUPGRADE								                        37
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_LEGANDARYIMP									            172 //LegandaryYükseltme
#define S_LEGANDARYIMP								                17  
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_MUHURLEGEND										                173 //Mühür Legandary
#define S_MUHURLEGEND								                        33
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_LOGINREWARDS										        174 //Giriş eventi
#define S_LOGINREWARDS								                29
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK75										                175 //SİSTEM] Ayarlar sıfırlandı
#define S_UNK75								                        13
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK76										                176 //Özellik transfer
#define S_UNK76								                        25
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_HIDECOSTUME									            177
#define S_HIDECOSTUME							                    13 // Kostüm Gizleme
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_BLOODMARKETSEND									        178
#define S_BLOODMARKETSEND								            605
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_BLOODMARKETBUYSEND									    179 //Eşya satın
#define S_BLOODMARKETBUYSEND								        41
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_ENGRAVERECV										                180 //Nakış
#define S_ENGRAVERECV							                        21
//protocol(1) + tValue( sizeof( GG_AUTH_DATA ) )
#define P_UNK82										                182 //8 Trigram ile
#define S_UNK82								                        25


#define P_ITEM_UPGRADE_RECV									112 //Savaş Lordu yükseltme
#define S_ITEM_UPGRADE_RECV								    33

/** 2009. 11. 18 : ÀåœÄ ÇØ¹æ œÃœºÅÛ (wolf) */
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//Logger
#define Logger											__LogMgr()->Log
#define GameLogger										__LogMgr()->GameLog

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------


//--------------------//
//[ZONE] -> [PLAYUSER]//
//--------------------//
//protocol(1) + tZoneNumber(4)
#define P_ZONE_FOR_VALET_SEND									            31
#define S_ZONE_FOR_VALET_SEND									            5
//protocol(1)
#define P_ZONE_OK_FOR_VALET_SEND									        32
#define S_ZONE_OK_FOR_VALET_SEND									        1
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_VALET_DUPEFIX						                        	    90
#define S_VALET_DUPEFIX						                    		    5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO ) + sizeof (AUTH_INFO)
//protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH) + tAvatarInfo( sizeof( AVATAR_INFO ) )
#define P_VALET_DUPEFIX1						                        	91
#define S_VALET_DUPEFIX1						                    		5 + MAX_USER_ID_LENGTH + sizeof( AVATAR_INFO ) + sizeof (AUTH_INFO)
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_VALET_VALETSHOPINFO						                        92
#define S_VALET_VALETSHOPINFO							                    5 + MAX_AVATAR_NAME_LENGTH
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_VALET_UPDATEVALATINFO						                        94
#define S_VALET_UPDATEVALATINFO								                1 + MAX_AVATAR_NAME_LENGTH + sizeof(VALETSHOP_INFO)
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_VALET_VALETSHOPBUY						                        95
#define S_VALET_VALETSHOPBUY								                17 + MAX_AVATAR_NAME_LENGTH
//--------------------//
//[VALET] -> [ZONE]//
//--------------------//
//protocol(1)
#define P_ZONE_FOR_VALET_RECV									        11
#define S_ZONE_FOR_VALET_RECV									        1
//protocol(1)   
#define P_DUPEFIX_VALET						                	        90
#define S_DUPEFIX_VALET							            	        1
//protocol(1)   
#define P_DUPEFIX_VALET1						                	    91
#define S_DUPEFIX_VALET1							            	    1
//protocol(1) + tResult(4) + sizeof(VALETSHOP_INFO) 
#define P_VALETINFOVALET					                            93
#define S_VALETINFOVALET								                1 + 4 + sizeof(VALETSHOP_INFO)
//protocol(1) + tResult(4)
#define P_VALETINFOBUYSENDVALET						                    95
#define S_VALETINFOBUYSENDVALET								            5
//Protocol(1) + tPlayUserIndex(4) + tID(MAX_USER_ID_LENGTH)
#define P_VALET_UPDATERESULT					                        96
#define S_VALET_UPDATERESULT							                5