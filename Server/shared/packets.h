#pragma once

#define WIZ_LOGIN				0x01	// Account Login
#define WIZ_NEW_CHAR			0x02	// Create Character DB
#define WIZ_DEL_CHAR			0x03	// Delete Character DB
#define WIZ_SEL_CHAR			0x04	// Select Character
#define WIZ_SEL_NATION			0x05	// Select Nation
#define WIZ_MOVE				0x06	// Move ( 1 Second )
#define WIZ_USER_INOUT			0x07	// User Info Insert, delete
#define WIZ_ATTACK				0x08	// General Attack 
#define WIZ_ROTATE				0x09	// Rotate
#define WIZ_NPC_INOUT			0x0A	// Npc Info Insert, delete
#define WIZ_NPC_MOVE			0x0B	// Npc Move ( 1 Second )
#define WIZ_ALLCHAR_INFO_REQ	0x0C	// Account All Character Info Request
#define WIZ_GAMESTART			0x0D	// Request Other User, Npc Info
#define WIZ_MYINFO				0x0E	// User Detail Data Download
#define WIZ_LOGOUT				0x0F	// Request Logout
#define WIZ_CHAT				0x10	// User Chatting..
#define WIZ_DEAD				0x11	// User Dead
#define WIZ_REGENE				0x12	// User	Regeneration
#define WIZ_TIME				0x13	// Game Timer
#define WIZ_WEATHER				0x14	// Game Weather
#define WIZ_REGIONCHANGE		0x15	// Region UserInfo Receive
#define WIZ_REQ_USERIN			0x16	// Client Request UnRegistered User List
#define WIZ_HP_CHANGE			0x17	// Current HP Download
#define WIZ_MSP_CHANGE			0x18	// Current MP Download
#define WIZ_ITEM_LOG			0x19	// Send To Agent for Writing Log
#define WIZ_EXP_CHANGE			0x1A	// Current EXP Download
#define WIZ_LEVEL_CHANGE		0x1B	// Max HP, MP, SP, Weight, Exp Download
#define WIZ_NPC_REGION			0x1C	// Npc Region Change Receive
#define WIZ_REQ_NPCIN			0x1D	// Client Request UnRegistered NPC List
#define WIZ_WARP				0x1E	// User Remote Warp
#define WIZ_ITEM_MOVE			0x1F	// User Item Move
#define WIZ_NPC_EVENT			0x20	// User Click Npc Event
#define WIZ_ITEM_TRADE			0x21	// Item Trade 
#define WIZ_TARGET_HP			0x22	// Attack Result Target HP 
#define WIZ_ITEM_DROP			0x23	// Zone Item Insert
#define WIZ_BUNDLE_OPEN_REQ		0x24	// Zone Item list Request
#define WIZ_TRADE_NPC			0x25	// ITEM Trade start
#define WIZ_ITEM_GET			0x26	// Zone Item Get
#define WIZ_ZONE_CHANGE			0x27	// Zone Change
#define WIZ_POINT_CHANGE		0x28	// Str, Sta, dex, intel, cha, point up down
#define WIZ_STATE_CHANGE		0x29	// User Sitdown or Stand
#define WIZ_LOYALTY_CHANGE		0x2A	// Nation Contribution
#define WIZ_VERSION_CHECK		0x2B	// Client version check 
#define WIZ_CRYPTION			0x2C	// Cryption
#define WIZ_USERLOOK_CHANGE		0x2D	// User Slot Item Resource Change
#define WIZ_NOTICE				0x2E	// Update Notice Alarm 
#define WIZ_PARTY				0x2F	// Party Related Packet
#define WIZ_EXCHANGE			0x30	// Exchange Related Packet
#define WIZ_MAGIC_PROCESS		0x31	// Magic Related Packet
#define WIZ_SKILLPT_CHANGE		0x32	// User changed particular skill point
#define WIZ_OBJECT_EVENT		0x33	// Map Object Event Occur ( ex : Bind Point Setting )
#define WIZ_CLASS_CHANGE		0x34	// 10 level over can change class 
#define WIZ_CHAT_TARGET			0x35	// Select Private Chanting User
#define WIZ_CONCURRENTUSER		0x36	// Current Game User Count
#define WIZ_DATASAVE			0x37	// User GameData DB Save Request
#define WIZ_DURATION			0x38	// Item Durability Change
#define WIZ_TIMENOTIFY			0x39	// Time Adaption Magic Time Notify Packet ( 2 Seconds )
#define WIZ_REPAIR_NPC			0x3A	// Item Trade, Upgrade and Repair
#define WIZ_ITEM_REPAIR			0x3B	// Item Repair Processing
#define WIZ_KNIGHTS_PROCESS		0x3C	// Knights Related Packet..
#define WIZ_ITEM_COUNT_CHANGE   0x3D    // Item cout change.  
#define WIZ_KNIGHTS_LIST		0x3E	// All Knights List Info download
#define WIZ_ITEM_REMOVE			0x3F	// Item Remove from inventory
#define WIZ_OPERATOR			0x40	// Operator Authority Packet
#define WIZ_SPEEDHACK_CHECK		0x41	// Speed Hack Using Check
#define WIZ_COMPRESS_PACKET		0x42	// Data Compressing Packet
#define WIZ_SERVER_CHECK		0x43	// Server Status Check Packet
#define WIZ_CONTINOUS_PACKET	0x44	// Region Data Packet 
#define WIZ_WAREHOUSE			0x45	// Warehouse Open, In, Out
#define WIZ_SERVER_CHANGE		0x46	// When you change the server
#define WIZ_REPORT_BUG			0x47	// Report Bug to the manager
#define WIZ_HOME				0x48    // 'Come back home' by Seo Taeji & Boys
#define WIZ_FRIEND_PROCESS		0x49	// Get the status of your friend
#define WIZ_GOLD_CHANGE			0x4A	// When you get the gold of your enemy.
#define WIZ_WARP_LIST			0x4B	// Warp List by NPC or Object
#define WIZ_VIRTUAL_SERVER		0x4C	// Battle zone Server Info packet	(IP, Port)
#define WIZ_ZONE_CONCURRENT		0x4D	// Battle zone concurrent users request packet
#define WIZ_CORPSE				0x4e	// To have your corpse have an ID on top of it.
#define WIZ_PARTY_BBS			0x4f	// For the party wanted bulletin board service..
#define WIZ_MARKET_BBS			0x50	// For the market bulletin board service...
#define WIZ_KICKOUT				0x51	// Account ID forbid duplicate connection
#define WIZ_CLIENT_EVENT		0x52	// Client Event (for quest)
#define WIZ_MAP_EVENT			0x53	// 클라이언트에서 무슨 에코로 쓰고 있데요.
#define WIZ_WEIGHT_CHANGE		0x54	// Notify change of weight
#define WIZ_SELECT_MSG			0x55	// Select Event Message...
#define WIZ_NPC_SAY				0x56	// Select Event Message...
#define WIZ_BATTLE_EVENT		0x57	// Battle Event Result
#define WIZ_AUTHORITY_CHANGE	0x58	// Authority change 
#define WIZ_EDIT_BOX			0x59	// Activate/Receive info from Input_Box.
#define WIZ_SANTA				0x5A	// Activate motherfucking Santa Claus!!! :(

#define WIZ_ITEM_UPGRADE		0x5B
#define WIZ_PACKET1				0x5C
#define WIZ_PACKET2				0x5D
#define WIZ_ZONEABILITY			0x5E	
#define WIZ_EVENT				0x5F
#define WIZ_STEALTH				0x60 // stealth related.
#define WIZ_ROOM_PACKETPROCESS	0x61 // room system
#define WIZ_ROOM				0x62
#define WIZ_PACKET3				0x63 // new clan
#define WIZ_QUEST				0x64
#define WIZ_PACKET4				0x65 // login
#define WIZ_KISS				0x66
#define WIZ_RECOMMEND_USER		0x67
#define WIZ_MERCHANT			0x68
#define WIZ_MERCHANT_INOUT		0x69
#define WIZ_SHOPPING_MALL		0x6A
#define WIZ_SERVER_INDEX		0x6B
#define WIZ_EFFECT				0x6C
#define WIZ_SIEGE				0x6D
#define WIZ_NAME_CHANGE			0x6E
#define WIZ_WEBPAGE				0x6F
#define WIZ_CAPE				0x70
#define WIZ_PREMIUM				0x71
#define WIZ_HACKTOOL			0x72
#define WIZ_RENTAL				0x73
#define WIZ_PACKET5				0x74 //s�reli item
#define WIZ_CHALLENGE			0x75
#define WIZ_PET					0x76
#define WIZ_CHINA				0x77 // we shouldn't need to worry about this
#define WIZ_KING				0x78
#define WIZ_SKILLDATA			0x79
#define WIZ_PROGRAMCHECK		0x7A
#define WIZ_BIFROST				0x7B
#define WIZ_REPORT				0x7C
#define WIZ_LOGOSSHOUT			0x7D
#define WIZ_PACKET6				0x7E
#define WIZ_PACKET7				0x7F
#define WIZ_RANK				0x80
#define WIZ_STORY				0x81
#define WIZ_PACKET8				0x82
#define WIZ_PACKET9				0x83
#define WIZ_PACKET10			0x84
#define WIZ_PACKET11			0x85
#define WIZ_MINING				0x86
#define WIZ_HELMET				0x87
#define WIZ_PVP					0x88
#define WIZ_CHANGE_HAIR			0x89 // Changes hair colour/facial features at character selection
#define WIZ_PACKET12			0x8A
#define WIZ_PACKET13			0x8B
#define WIZ_PACKET14			0x8C
#define WIZ_PACKET15			0x8D
#define WIZ_PACKET16			0x8E
#define WIZ_PACKET17			0x8F
#define WIZ_DEATH_LIST			0x90
#define WIZ_CLANPOINTS_BATTLE	0x91 // not sure

// NOTE(srmeier): testing this debug string functionality
#define WIZ_DEBUG_STRING_PACKET 0xFE

#define WIZ_TEST_PACKET			0xFF	// Test packet

enum CoinChangeOpcodes
{
	CoinGain = 1,
	CoinLoss = 2,
	CoinEvent = 5
};

////////////////////////////////////////////////////////////////
// chat define
////////////////////////////////////////////////////////////////
enum ChatType
{
	GENERAL_CHAT				= 1,
	PRIVATE_CHAT				= 2,
	PARTY_CHAT					= 3,
	FORCE_CHAT					= 4,
	SHOUT_CHAT					= 5,
	KNIGHTS_CHAT				= 6,
	PUBLIC_CHAT					= 7,
	WAR_SYSTEM_CHAT				= 8,
	PERMANENT_CHAT				= 9,
	END_PERMANENT_CHAT			= 10,
	MONUMENT_NOTICE				= 11,
	GM_CHAT						= 12,
	COMMAND_CHAT				= 13,
	MERCHANT_CHAT				= 14,
	ALLIANCE_CHAT				= 15,
	ANNOUNCEMENT_CHAT			= 17,
	SEEKING_PARTY_CHAT			= 19,
	GM_INFO_CHAT				= 21,	// info window : "Level: 0, UserCount:16649" (NOTE: Think this is the missing overhead info (probably in form of a command (with args))
	COMMAND_PM_CHAT				= 22,	// Commander Chat PM??
	CLAN_NOTICE					= 24,
	KROWAZ_NOTICE				= 25,
	DEATH_NOTICE				= 26,
	CHAOS_STONE_ENEMY_NOTICE	= 27,	// The enemy has destroyed the Chaos stone something (Red text, middle of screen)
	CHAOS_STONE_NOTICE			= 28,	
	ANNOUNCEMENT_WHITE_CHAT		= 29	// what's it used for?
};

enum DeathNoticeType
{
	DeathNoticeCoordinates	= 0, // - %s defeat %s ( %d, %d ) -
	DeathNotice				= 1, // - %s has been defeated by %s -
	DeathNoticeRival		= 2, // - %s has avenged %s -
	DeathNoticeNone			= 0xFF
};

enum PVPOpcodes
{
	PVPAssignRival	= 1,
	PVPRemoveRival	= 2,
	PVPUpdateHelmet	= 5, // the helmet icon indicates the level of the anger gauge
	PVPResetHelmet	= 6
};

enum ZoneChangeOpcodes
{
	ZoneChangeLoading	= 1,
	ZoneChangeLoaded	= 2,
	ZoneChangeTeleport	= 3
};

enum PremiumPropertyOpCodes
{
	PremiumExpRestorePercent = 0,
	PremiumNoahPercent = 1,
	PremiumDropPercent = 2,
	PremiumBonusLoyalty = 3,
	PremiumRepairDiscountPercent = 4,
	PremiumItemSellPercent = 5,
	PremiumExpPercent = 6
};

////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// weather define
////////////////////////////////////////////////////////////////
#define WEATHER_FINE			0x01
#define WEATHER_RAIN			0x02
#define WEATHER_SNOW			0x03
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// Party Related subpacket define
////////////////////////////////////////////////////////////////
#define PARTY_CREATE			0x01	// Party Group Create
#define PARTY_PERMIT			0x02	// Party Insert Permit
#define PARTY_INSERT			0x03	// Party Member Insert
#define PARTY_REMOVE			0x04	// Party Member Remove
#define PARTY_DELETE			0x05	// Party Group Delete
#define PARTY_HPCHANGE			0x06	// Party Member HP change
#define PARTY_LEVELCHANGE		0x07	// Party Member Level change
#define PARTY_CLASSCHANGE		0x08	// Party Member Class Change
#define PARTY_STATUSCHANGE		0x09	// Party Member Status ( disaster, poison ) Change
#define PARTY_REGISTER			0x0A	// Party Message Board Register
#define PARTY_REPORT			0x0B	// Party Request Message Board Messages
#define PARTY_PROMOTE			0x1C	// Promotes user to party leader
#define PARTY_ALL_STATUSCHANGE	0x1D	// Sets the specified status of the selected party members to 1.

enum TradeOpcodes
{
	EXCHANGE_REQ			= 1,
	EXCHANGE_AGREE			= 2,
	EXCHANGE_ADD			= 3,
	EXCHANGE_OTHERADD		= 4,
	EXCHANGE_DECIDE			= 5,
	EXCHANGE_OTHERDECIDE	= 6,
	EXCHANGE_DONE			= 7,
	EXCHANGE_CANCEL			= 8
};

enum MerchantOpcodes
{
	MERCHANT_OPEN				= 1,
	MERCHANT_CLOSE				= 2,
	MERCHANT_ITEM_ADD			= 3,
	MERCHANT_ITEM_CANCEL		= 4,
	MERCHANT_ITEM_LIST			= 5,
	MERCHANT_ITEM_BUY			= 6,
	MERCHANT_INSERT				= 7,
	MERCHANT_TRADE_CANCEL		= 8,
	MERCHANT_ITEM_PURCHASED		= 9,

	MERCHANT_BUY_OPEN			= 0x21,
	MERCHANT_BUY_INSERT			= 0x22,
	MERCHANT_BUY_LIST			= 0x23,
	MERCHANT_BUY_BUY			= 0x24,
	MERCHANT_BUY_SOLD			= 0x25,
	MERCHANT_BUY_BOUGHT			= 0x26,
	MERCHANT_BUY_CLOSE			= 0x27,
	MERCHANT_BUY_REGION_INSERT	= 0x28,
	MERCHANT_BUY_UNK1			= 0x30
};

enum NameChangeOpcode
{
	NameChangePlayerRequest	= 0, // contains the request with the player's name
	NameChangeShowDialog	= 1,
	NameChangeInvalidName	= 2,
	NameChangeSuccess		= 3,
	NameChangeInClan		= 4,
	NameChangeKing			= 5
};

enum KingSystemOpcodes
{
	KING_ELECTION		= 1,
	KING_IMPEACHMENT	= 2,
	KING_TAX			= 3,
	KING_EVENT			= 4,
	KING_NPC			= 5,
	KING_NATION_INTRO	= 6
};

enum KingEventOpcodes
{
	KING_EVENT_NOAH		= 1,
	KING_EVENT_EXP		= 2,
	KING_EVENT_PRIZE	= 3,
	KING_EVENT_FUGITIVE	= 4, // not sure what this is exactly
	KING_EVENT_WEATHER	= 5,
	KING_EVENT_NOTICE	= 6
};

enum KingSystemElectionOpcodes
{
	KING_ELECTION_SCHEDULE		= 1,
	KING_ELECTION_NOMINATE		= 2,
	KING_ELECTION_NOTICE_BOARD	= 3,
	KING_ELECTION_POLL			= 4,
	KING_ELECTION_RESIGN		= 5
}; 

enum KingSystemElectionDBOpcodes
{
	KING_ELECTION_UPDATE_STATUS,
	KING_ELECTION_UPDATE_LIST
};

enum KingSystemCandidacyNoticeBoardOpcodes
{
	KING_CANDIDACY_BOARD_WRITE	= 1,
	KING_CANDIDACY_BOARD_READ	= 2,
	// 4, 5
};

enum KingSystemImpeachmentOpcodes
{
	KING_IMPEACHMENT_REQUEST			= 1,
	KING_IMPEACHMENT_REQUEST_ELECT		= 2,
	KING_IMPEACHMENT_LIST				= 3,
	KING_IMPEACHMENT_ELECT				= 4,
	KING_IMPEACHMENT_REQUEST_UI_OPEN	= 8,
	KING_IMPEACHMENT_ELECTION_UI_OPEN	= 9
};

enum MiningSystemOpcodes
{
	// Starts the mining process
	MiningStart		= 1,

	// Every n seconds, calls this packet to see if they found anything.
	MiningAttempt	= 2,

	// Stops the mining process
	MiningStop		= 3,

	// Soccer handler is part of the mining handler (yuck).
	MiningSoccer	= 16,
};

enum MiningErrors
{
	MiningResultError			= 0, // "Mining failed"
	MiningResultSuccess			= 1, // nothing is displayed
	MiningResultMiningAlready	= 2, // "Mining already"
	MiningResultNotMiningArea	= 3, // "Not mining area"
	MiningResultPreparing		= 4, // "Preparing mining"
	MiningResultNotPickaxe		= 5, // "A pickaxe is not" (i.e. invalid equipped item, need a pickaxe)
	MiningResultNothingFound	= 6, // "Nothing found"
};

#define MINING_DELAY			5 // seconds

////////////////////////////////////////////////////////////////
// Magic Packet sub define 
////////////////////////////////////////////////////////////////
enum MagicOpcode
{
	MAGIC_CASTING				= 1,
	MAGIC_FLYING				= 2,
	MAGIC_EFFECTING				= 3,
	MAGIC_FAIL					= 4,
	MAGIC_DURATION_EXPIRED		= 5,	// For the removal of durational (i.e. type 3/4) skills.
	MAGIC_CANCEL				= 6,	// When the client requests a buff to be removed.
	MAGIC_CANCEL_TRANSFORMATION	= 7,	// When removing a transformation.
	MAGIC_TYPE4_EXTEND			= 8	,	// Extends the time of your type4 buffs by 2 times (requires "Duration Item" (PUS))
	MAGIC_TRANSFORM_LIST		= 9,	// Shows the transformation list 
	MAGIC_FAIL_TRANSFORMATION	= 10,	// Transformation errors
	MAGIC_UNKNOWN				= 12,
	MAGIC_CANCEL2				= 13	// Not sure but it cancels...
};

enum e_SkillMagicFailMsg 
{
	SKILLMAGIC_FAIL_CASTING		= -100,	// "Casting failed."
	SKILLMAGIC_FAIL_KILLFLYING	= -101,
	SKILLMAGIC_FAIL_ENDCOMBO	= -102,
	SKILLMAGIC_FAIL_NOEFFECT	= -103,	// "<skill name> failed"
	SKILLMAGIC_FAIL_ATTACKZERO	= -104	// "<skill name> missed"
};

////////////////////////////////////////////////////////////////
// Knights Packet sub define 
////////////////////////////////////////////////////////////////
enum
{
	KNIGHTS_CREATE			= 0x01, // clan creation
	KNIGHTS_JOIN			= 0x02, // joining a clan
	KNIGHTS_WITHDRAW		= 0x03, // leaving a clan
	KNIGHTS_REMOVE			= 0x04,	// removing a clan member
	KNIGHTS_DESTROY			= 0x05, // disbanding a clan
	KNIGHTS_ADMIT			= 0x06,
	KNIGHTS_REJECT			= 0x07,
	KNIGHTS_PUNISH			= 0x08,
	KNIGHTS_CHIEF			= 0x09,
	KNIGHTS_VICECHIEF		= 0x0A,
	KNIGHTS_OFFICER			= 0x0B,
	KNIGHTS_ALLLIST_REQ		= 0x0C,
	KNIGHTS_MEMBER_REQ		= 0x0D,
	KNIGHTS_CURRENT_REQ		= 0x0E,
	KNIGHTS_STASH			= 0x0F,
	KNIGHTS_MODIFY_FAME		= 0x10,
	KNIGHTS_JOIN_REQ		= 0x11,
	KNIGHTS_LIST_REQ		= 0x12,

	KNIGHTS_WAR_ANSWER		= 0x14,
	KNIGHTS_WAR_SURRENDER	= 0x15,

	KNIGHTS_MARK_VERSION_REQ= 0x19,
	KNIGHTS_MARK_REGISTER	= 0x1A,
	KNIGHTS_CAPE_NPC		= 0x1B,

	KNIGHTS_ALLY_CREATE		= 0x1C,
	KNIGHTS_ALLY_REQ		= 0x1D,
	KNIGHTS_ALLY_INSERT		= 0x1E,
	KNIGHTS_ALLY_REMOVE		= 0x1F,
	KNIGHTS_ALLY_PUNISH		= 0x20,
	KNIGHTS_ALLY_LIST		= 0x22,

	KNIGHTS_MARK_REQ		= 0x23,
	KNIGHTS_UPDATE			= 0x24,
	KNIGHTS_MARK_REGION_REQ	= 0x25,

	KNIGHTS_UPDATE_GRADE	= 0x30,
	KNIGHTS_POINT_REQ		= 0x3B,
	KNIGHTS_POINT_METHOD	= 0x3C,
	KNIGHTS_DONATE_POINTS	= 0x3D,
	KNIGHTS_HANDOVER_VICECHIEF_LIST	= 0x3E,
	KNIGHTS_HANDOVER_REQ	= 0x3F,

	KNIGHTS_DONATION_LIST	= 0x40,
	KNIGHTS_TOP10			= 0x41,
	KNIGHTS_HANDOVER		= 0x4F,

	// These are NOT official client opcodes.
	// They are opcodes for the database thread only.
	KNIGHTS_REFUND_POINTS	= 0xF0,
	KNIGHTS_UPDATE_FUND		= 0xF1
};

enum OperatorCommands
{
	OPERATOR_ARREST			=	1,
	OPERATOR_BAN			=	2,
	OPERATOR_MUTE			=	3,
	OPERATOR_UNMUTE			=	4,
	OPERATOR_CUTOFF			=	5,
	OPERATOR_BAN_ACCOUNT	=	6,
	OPERATOR_SUMMON			=	7,
	OPERATOR_DISABLE_ATTACK	=	8,
	OPERATOR_ENABLE_ATTACK	=	9
};

enum DailyOperationsOpCode
{
	DAILY_CHAOS_MAP						= 1,
	DAILY_USER_RANK_REWARD				= 2,
	DAILY_USER_PERSONAL_RANK_REWARD		= 3,
	DAILY_KING_WING						= 4,
	DAILY_WARDER_KILLER_WING1			= 5,
	DAILY_WARDER_KILLER_WING2			= 6,
	DAILY_KEEPER_KILLER_WING			= 7,
	DAILY_USER_LOYALTY_WING_REWARD		= 8
};

enum EventOpCode
{
	TEMPLE_EVENT_BORDER_DEFENCE_WAR	= 4,
	TEMPLE_EVENT_CHAOS				= 24,
	TEMPLE_EVENT_JURAD_MOUNTAIN		= 100
};

enum RankTypes
{
	RANK_TYPE_PK_ZONE = 1,
	RANK_TYPE_ZONE_BORDER_DEFENSE_WAR = 2,
	RANK_TYPE_CHAOS_DUNGEON = 3,
};

////////////////////////////////////////////////////////////////
// WareHouse Packet sub define
////////////////////////////////////////////////////////////////
#define WAREHOUSE_OPEN			0x01
#define WAREHOUSE_INPUT			0x02
#define WAREHOUSE_OUTPUT		0x03
#define WAREHOUSE_MOVE			0x04
#define WAREHOUSE_INVENMOVE		0x05

#define WAREHOUSE_REQ			0x10

////////////////////////////////////////////////////////////////
// Clan Packet sub define
////////////////////////////////////////////////////////////////
#define CLAN_CREATE				0x01
#define CLAN_JOIN				0x02

////////////////////////////////////////////////////////////////
// Class change define
////////////////////////////////////////////////////////////////
#define CLASS_CHANGE_REQ		0x01
#define CLASS_CHANGE_RESULT		0x02
#define ALL_POINT_CHANGE		0x03
#define ALL_SKILLPT_CHANGE		0x04
#define CHANGE_MONEY_REQ		0x05

////////////////////////////////////////////////////////////////
// Friend subpacket define
////////////////////////////////////////////////////////////////
enum FriendOpcodes
{
	FRIEND_REQUEST	= 1,
	FRIEND_REPORT	= 2,
	FRIEND_ADD		= 3,
	FRIEND_REMOVE	= 4
};

enum TempleOpCodes
{
	BIFROST_EVENT = 2,
	MONSTER_SQUARD = 5,
	MONSTER_STONE = 6,
	TEMPLE_EVENT = 7,
	TEMPLE_EVENT_JOIN = 8,
	TEMPLE_EVENT_DISBAND = 9,
	TEMPLE_EVENT_COUNTER = 16
};

enum FriendAddResult
{
	FRIEND_ADD_SUCCESS	= 0,
	FRIEND_ADD_ERROR	= 1,
	FRIEND_ADD_FULL		= 2,

	FRIEND_ADD_MAX
};

enum FriendRemoveResult
{
	FRIEND_REMOVE_SUCCESS	= 0,
	FRIEND_REMOVE_ERROR		= 1,
	FRIEND_REMOVE_NOT_FOUND	= 2,

	FRIEND_REMOVE_MAX
};

enum
{
	ITEM_UPGRADE_REQ		= 1,
	ITEM_UPGRADE			= 2,
	ITEM_ACCESSORIES		= 3,
	ITEM_BIFROST_REQ		= 4,
	ITEM_BIFROST_EXCHANGE	= 5,
	ITEM_UPGRADE_REBIRTH	= 7,
	ITEM_SEAL				= 8,
	ITEM_CHARACTER_SEAL		= 9,
	ITEM_SPECIAL_EXCHANGE	= 11,
};


////////////////////////////////////////////////////////////////
// Party BBS subpacket define
////////////////////////////////////////////////////////////////
#define PARTY_BBS_REGISTER		0x01
#define PARTY_BBS_DELETE		0x02
#define PARTY_BBS_NEEDED		0x03
#define PARTY_BBS_WANTED		0x04
#define PARTY_BBS_LIST			0x0B

////////////////////////////////////////////////////////////////
// Market BBS primary subpacket define
////////////////////////////////////////////////////////////////
#define MARKET_BBS_REGISTER			0x01
#define MARKET_BBS_DELETE			0x02
#define MARKET_BBS_REPORT			0x03
#define MARKET_BBS_OPEN				0x04
#define MARKET_BBS_REMOTE_PURCHASE	0x05
#define MARKET_BBS_MESSAGE			0x06

////////////////////////////////////////////////////////////////
// Market BBS secondary subpacket define
////////////////////////////////////////////////////////////////
#define MARKET_BBS_BUY			0x01
#define MARKET_BBS_SELL			0x02

////////////////////////////////////////////////////////////////
#define WIZ_LOGIN_INFO			0x50	// define for DBAgent Communication
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// Server to Server Communication
////////////////////////////////////////////////////////////////
#define STS_CHAT							0xD0
#define UDP_BATTLE_EVENT_PACKET				0xD1
#define UDP_KNIGHTS_PROCESS					0xD2
#define UDP_BATTLEZONE_CURRENT_USERS		0xD3
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// Server to DB Agnent Communication
////////////////////////////////////////////////////////////////
#define DB_COUPON_EVENT			0x10	// coupon event
#define CHECK_COUPON_EVENT		0x01
#define UPDATE_COUPON_EVENT		0x02
////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////
// Authority change subpacket define
////////////////////////////////////////////////////////////////
#define COMMAND_AUTHORITY			0x01

enum ShoppingMallOpcodes
{
	STORE_OPEN		= 1,
	STORE_CLOSE		= 2,
	STORE_BUY		= 3,
	STORE_MINI		= 4,
	STORE_PROCESS	= 5,
	STORE_LETTER	= 6
};

enum LetterOpcodes
{
	LETTER_UNREAD		= 1,
	LETTER_LIST			= 2,
	LETTER_HISTORY		= 3,
	LETTER_GET_ITEM		= 4,
	LETTER_READ			= 5,
	LETTER_SEND			= 6,
	LETTER_DELETE		= 7,
	LETTER_ITEM_CHECK	= 8 // ???
};

enum RentalOpcodes
{
	RENTAL_PREMIUM	= 1,
	RENTAL_PVP		= 2,
	RENTAL_NPC		= 3
};

enum RentalPvPOpcodes
{
	RENTAL_OPEN			= 0,
	RENTAL_REGISTER		= 1,
	RENTAL_LEND			= 2,
	RENTAL_ITEM_CHECK	= 3,
	RENTAL_ITEM_CANCEL	= 4,
	RENTAL_REPORT		= 10
};

// Skillbar
enum SkillBarOpcodes
{
	SKILL_DATA_SAVE = 1,
	SKILL_DATA_LOAD = 2
};

enum ObjectType
{
	OBJECT_BIND			= 0,
	OBJECT_GATE			= 1,
	OBJECT_GATE2		= 2,
	OBJECT_GATE_LEVER	= 3,
	OBJECT_FLAG_LEVER	= 4,
	OBJECT_WARP_GATE	= 5,
	OBJECT_REMOVE_BIND	= 7,
	OBJECT_ANVIL		= 8,
	OBJECT_ARTIFACT		= 9,
	OBJECT_NPC			= 11
};

enum BattleWinnerTypes
{
	BATTLE_WINNER_NPC		= 0,
	BATTLE_WINNER_KILL		= 1,
	BATTLE_WINNER_MONUMENT	= 2
};


// ---------------------------------------------------------------------
// AI Server와 게임서버간의 Npc에 관련된 패킷은 1번~49번 
// ---------------------------------------------------------------------
const uint8 AI_SERVER_CONNECT	= 1;
const uint8	NPC_INFO_ALL		= 2;
const uint8	MOVE_REQ			= 3;
const uint8	MOVE_RESULT			= 4;
const uint8	MOVE_END_REQ		= 5;
const uint8	MOVE_END_RESULT		= 6;
const uint8	AG_NPC_INFO			= 7;	
const uint8	AG_NPC_GIVE_ITEM	= 8;
const uint8	AG_NPC_GATE_OPEN	= 9;	
const uint8	AG_NPC_GATE_DESTORY	= 10;	
const uint8	AG_NPC_INOUT		= 11;	
const uint8	AG_NPC_EVENT_ITEM	= 12;	
const uint8	AG_NPC_HP_REQ		= 13;
const uint8 AG_NPC_SPAWN_REQ	= 14;	// spawns an NPC/monster at the desired location
const uint8 AG_NPC_REGION_UPDATE	= 15;
const uint8 AG_NPC_UPDATE	= 16;
const uint8 AG_NPC_KILL_REQ	= 17;

// ---------------------------------------------------------------------
// AI Server와 게임서버간의 User, Npc 공통 관련된 패킷은 50번~100번 
// ---------------------------------------------------------------------
const uint8	AG_SERVER_INFO			= 50;	// 
const uint8	AG_ATTACK_REQ			= 51;	// Attck Packet
const uint8	AG_ATTACK_RESULT		= 52;	// Attck Packet
const uint8	AG_DEAD					= 53;	// Dead Packet
const uint8	AG_SYSTEM_MSG			= 54;	// System message Packet
const uint8	AG_CHECK_ALIVE_REQ		= 55;	// Server alive check
const uint8	AG_COMPRESSED_DATA		= 56;	// Packet Data compressed
const uint8	AG_ZONE_CHANGE			= 57;	// Zone change
const uint8	AG_MAGIC_ATTACK_REQ		= 58;	// Magic Attck Packet
const uint8	AG_MAGIC_ATTACK_RESULT	= 59;	// Magic Attck Packet
const uint8	AG_USER_INFO_ALL		= 60;	// User의 모든 정보 전송
const uint8	AG_LONG_MAGIC_ATTACK	= 61;	// Magic Attck Packet
const uint8	AG_PARTY_INFO_ALL		= 62;	// Party의 모든 정보 전송
const uint8	AG_HEAL_MAGIC			= 63;	// Healing magic
const uint8	AG_TIME_WEATHER			= 64;	// time and whether info
const uint8	AG_BATTLE_EVENT			= 65;	// battle event
const uint8 AG_COMPRESSED			= 66;

enum AISkillOpcode
{
	AISkillOpcodeBuff,		// or debuff
	AISkillOpcodeRemoveBuff
};

// ---------------------------------------------------------------------
// Battle Event Sub Packet
// ---------------------------------------------------------------------
const uint8	BATTLE_EVENT_OPEN   = 1;	// battle event open
const uint8	BATTLE_MAP_EVENT_RESULT = 2;	// battle zone map event result
const uint8	BATTLE_EVENT_RESULT		= 3;	// battle event result ( victory nation )
const uint8	BATTLE_EVENT_MAX_USER	= 4;	// battle event result ( user name )
const uint8	BATTLE_EVENT_KILL_USER	= 5;	// battle event result ( user kill count )

// ---------------------------------------------------------------------
// AI Server와 게임서버간의 User에 관련된 패킷은 101번 부터 시작
// ---------------------------------------------------------------------
const uint8	AG_USER_INFO		= 101;	// User의 정보
const uint8	AG_USER_INOUT		= 102;	// User의 In,Out 정보
const uint8	AG_USER_MOVE		= 103;	// User의 move 정보
const uint8	AG_USER_MOVEEDGE	= 104;	// User의 move end 정보
const uint8	AG_USER_SET_HP		= 105;	// User의 HP
const uint8	AG_USER_LOG_OUT		= 106;	// User의 LogOut
const uint8	AG_USER_REGENE		= 107;	// User의 Regene
const uint8	AG_USER_EXP			= 108;	// User의 경험치
const uint8	AG_USER_UPDATE		= 109;	// User의 Update Info
const uint8	AG_USER_FAIL		= 110;	// 잘못된 유저 처리...
const uint8	AG_USER_PARTY		= 111;	// 파티처리 담당
const uint8	AG_USER_VISIBILITY  = 112;	// updates invisibility status
const uint8	AG_NPC_HP_CHANGE	= 113;	// updates an NPC's HP
