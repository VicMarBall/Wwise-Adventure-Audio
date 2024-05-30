/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID AMBIENT_REGION_CAVE = 1331382810U;
        static const AkUniqueID AMBIENT_REGION_DESERT = 3408705206U;
        static const AkUniqueID AMBIENT_REGION_PINEFOREST = 808171864U;
        static const AkUniqueID AMBIENT_REGION_VILLAGE = 2752753183U;
        static const AkUniqueID AMBIENT_REGION_WOODLANDS = 1049266392U;
        static const AkUniqueID AMBIENT_RIVER = 2258053876U;
        static const AkUniqueID AMBIENT_WATERDROP = 2644063196U;
        static const AkUniqueID AMBIENT_WATERFALL = 1934835592U;
        static const AkUniqueID AMBIENT_WINDMILL = 2208964750U;
        static const AkUniqueID DESTRUCTION_CONTAINER = 4254124015U;
        static const AkUniqueID DESTRUCTION_CRYSTAL_DESTROY = 448719855U;
        static const AkUniqueID DESTRUCTION_ROCK_DESTROY = 1999886838U;
        static const AkUniqueID DESTRUCTION_VOLCANICBOULDER_IMPACT = 2541270269U;
        static const AkUniqueID MUSIC_CREDITS = 1882971781U;
        static const AkUniqueID MUSIC_REGION = 3741135221U;
        static const AkUniqueID MUSIC_TITLESCREEN = 1532327793U;
        static const AkUniqueID PLAYER_FOOTSTEP = 2453392179U;
        static const AkUniqueID PLAYER_WEAPONIMPACT = 3695342915U;
        static const AkUniqueID STOP_ALL = 452547817U;
        static const AkUniqueID UI_INVENTORY_CLOSE = 2278290679U;
        static const AkUniqueID UI_INVENTORY_OPEN = 2199611969U;
        static const AkUniqueID UI_INVENTORY_ROLL = 3749307760U;
        static const AkUniqueID UI_QUESTROLL_CLOSE = 808893336U;
        static const AkUniqueID UI_QUESTROLL_OPEN = 949395292U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace MUSIC_REGIONS
        {
            static const AkUniqueID GROUP = 2106907484U;

            namespace STATE
            {
                static const AkUniqueID CAVE = 4122393694U;
                static const AkUniqueID DESERT = 1850388778U;
                static const AkUniqueID DUNGEON = 608898761U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID NOWHERE = 3424056949U;
                static const AkUniqueID SILENT = 3160623154U;
                static const AkUniqueID VILLAGE = 3945572659U;
                static const AkUniqueID WOODLANDS = 1421251628U;
                static const AkUniqueID WWIZARDHOUSE = 3132368115U;
            } // namespace STATE
        } // namespace MUSIC_REGIONS

    } // namespace STATES

    namespace SWITCHES
    {
        namespace DAYNIGHT
        {
            static const AkUniqueID GROUP = 1705516017U;

            namespace SWITCH
            {
                static const AkUniqueID DAY = 311764537U;
                static const AkUniqueID NIGHT = 1011622525U;
            } // namespace SWITCH
        } // namespace DAYNIGHT

        namespace PLAYER_MOVEMENTSPEED
        {
            static const AkUniqueID GROUP = 2471758783U;

            namespace SWITCH
            {
                static const AkUniqueID RUNNING = 3863236874U;
                static const AkUniqueID WALKING = 340271938U;
            } // namespace SWITCH
        } // namespace PLAYER_MOVEMENTSPEED

        namespace PLAYER_PICKUP_ITEMTYPE
        {
            static const AkUniqueID GROUP = 3639591801U;

            namespace SWITCH
            {
                static const AkUniqueID BOOK = 1761501022U;
                static const AkUniqueID CRYSTALSHARD = 2416868231U;
                static const AkUniqueID EVILESSENCE = 2979801095U;
                static const AkUniqueID KEY = 1183067778U;
                static const AkUniqueID MISC = 3062523257U;
                static const AkUniqueID MUSHROOM = 1941802987U;
                static const AkUniqueID PINECONE = 632653906U;
            } // namespace SWITCH
        } // namespace PLAYER_PICKUP_ITEMTYPE

        namespace PLAYER_WEAPON_TYPE
        {
            static const AkUniqueID GROUP = 3251833556U;

            namespace SWITCH
            {
                static const AkUniqueID AXE = 765201635U;
                static const AkUniqueID DAGGER = 3732162827U;
                static const AkUniqueID HAMMER = 703486095U;
                static const AkUniqueID PICKAXE = 490825222U;
                static const AkUniqueID SWORD = 2454616260U;
            } // namespace SWITCH
        } // namespace PLAYER_WEAPON_TYPE

        namespace SURFACE_TYPE
        {
            static const AkUniqueID GROUP = 4064446173U;

            namespace SWITCH
            {
                static const AkUniqueID AGENT = 389757836U;
                static const AkUniqueID BARREL = 442447909U;
                static const AkUniqueID CRATE = 3098439042U;
                static const AkUniqueID CRYSTAL = 3444057113U;
                static const AkUniqueID DIRT = 2195636714U;
                static const AkUniqueID ENEMY_EVILCRAWLER = 1647104456U;
                static const AkUniqueID ENEMY_EVILHEAD = 3065846598U;
                static const AkUniqueID ENEMY_EVILSPITPLANT = 3276966729U;
                static const AkUniqueID GRASS = 4248645337U;
                static const AkUniqueID LEAVES = 582824249U;
                static const AkUniqueID METAL = 2473969246U;
                static const AkUniqueID RUBBLE = 286660663U;
                static const AkUniqueID SAND = 803837735U;
                static const AkUniqueID STONE = 1216965916U;
                static const AkUniqueID WATER = 2654748154U;
                static const AkUniqueID WOOD = 2058049674U;
            } // namespace SWITCH
        } // namespace SURFACE_TYPE

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID COMBATLEVEL = 3717892141U;
        static const AkUniqueID ENEMY_EVILHEAD_MOVEMENTSPEED = 3046587051U;
        static const AkUniqueID ENEMY_MUSIC_EVILCRAWLER = 2322571464U;
        static const AkUniqueID ENEMY_MUSIC_EVILHEAD = 691349574U;
        static const AkUniqueID ENEMY_MUSIC_EVISPITPLANT = 3481128293U;
        static const AkUniqueID INMENU_LOWPASS = 1756231317U;
        static const AkUniqueID MAGIC_CHARGEINTENSITY = 1744050084U;
        static const AkUniqueID MENUSLIDER_MASTER_VOLUME = 1333239961U;
        static const AkUniqueID MENUSLIDER_MUSIC_VOLUME = 2642438544U;
        static const AkUniqueID PLAYER_HEALTH = 215992295U;
        static const AkUniqueID PLAYER_MOVEMENTSPEED = 2471758783U;
        static const AkUniqueID TIME_OF_DAY = 207908541U;
    } // namespace GAME_PARAMETERS

    namespace TRIGGERS
    {
        static const AkUniqueID MUSIC_GETITEM = 2029038382U;
    } // namespace TRIGGERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID CAVE = 4122393694U;
        static const AkUniqueID CREDITS = 2201105581U;
        static const AkUniqueID DESERT = 1850388778U;
        static const AkUniqueID GENERAL = 133642231U;
        static const AkUniqueID PINEFOREST = 2482365692U;
        static const AkUniqueID TITLESCREEN = 152105657U;
        static const AkUniqueID VILLAGE = 3945572659U;
        static const AkUniqueID WOODLANDS = 1421251628U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
