
class CfgMovesBasicSevenFoot
{
    class Default
    {
        camShakeFire = ACE_CAMSHAKEFIRE_BASE;
    };
    class HealBase;
    class StandBase;
    class DefaultDie;
    class ManActions
    {
        ACE_SpottingScope = "ACE_SpottingScope";
        ACE_Climb = "ACE_Climb";

        /*-------------Gestures Addon-------------*/
        ace_gestures_forward = "ace_gestures_forward";
        ace_gestures_freeze = "ace_gestures_freeze";
        ace_gestures_cover = "ace_gestures_cover";
        ace_gestures_regroup = "ace_gestures_regroup";
        ace_gestures_engage = "ace_gestures_engage";
        ace_gestures_point = "ace_gestures_point";
        ace_gestures_hold = "ace_gestures_hold";
        ace_gestures_warning = "ace_gestures_warningS";

        ace_gestures_forwardStandLowered = "ace_gestures_forwardStandLowered";
        ace_gestures_freezeStandLowered = "ace_gestures_freezeStandLowered";
        ace_gestures_coverStandLowered = "ace_gestures_coverStandLowered";
        ace_gestures_regroupStandLowered = "ace_gestures_regroupStandLowered";
        ace_gestures_engageStandLowered = "ace_gestures_engageStandLowered";
        ace_gestures_pointStandLowered = "ace_gestures_pointStandLowered";
        ace_gestures_holdStandLowered = "ace_gestures_holdStandLowered";
        ace_gestures_warningStandLowered = "ace_gestures_warningStandLowered";

        /*-------------FastRoping Addon-------------*/
        ACE_FastRoping = "ACE_FastRoping";
    };
    class Actions
    {
        class NoActions: ManActions
        {
            /*-------------Gestures Addon-------------*/
            ace_gestures_forward[] = {"ace_gestures_forward", "Gesture"};
            ace_gestures_freeze[] = {"ace_gestures_freeze", "Gesture"};
            ace_gestures_cover[] = {"ace_gestures_cover", "Gesture"};
            ace_gestures_regroup[] = {"ace_gestures_regroup", "Gesture"};
            ace_gestures_engage[] = {"ace_gestures_engage", "Gesture"};
            ace_gestures_point[] = {"ace_gestures_point", "Gesture"};
            ace_gestures_hold[] = {"ace_gestures_hold", "Gesture"};
            ace_gestures_warning[] = {"ace_gestures_warning", "Gesture"};

            ace_gestures_forwardStandLowered[] = {"ace_gestures_forwardStandLowered", "Gesture"};
            ace_gestures_freezeStandLowered[] = {"ace_gestures_freezeStandLowered", "Gesture"};
            ace_gestures_coverStandLowered[] = {"ace_gestures_coverStandLowered", "Gesture"};
            ace_gestures_regroupStandLowered[] = {"ace_gestures_regroupStandLowered", "Gesture"};
            ace_gestures_engageStandLowered[] = {"ace_gestures_engageStandLowered", "Gesture"};
            ace_gestures_pointStandLowered[] = {"ace_gestures_pointStandLowered", "Gesture"};
            ace_gestures_holdStandLowered[] = {"ace_gestures_holdStandLowered", "Gesture"};
            ace_gestures_warningStandLowered[] = {"ace_gestures_warningStandLowered", "Gesture"};
        };

        /*-------------Movement Addon-------------*/
        class RifleBaseStandActions;
        class RifleKneelActions: RifleBaseStandActions
        {
            Civil = "AmovPknlMstpSnonWnonDnon";
        };
        class RifleProneActions: RifleBaseStandActions
        {
            Civil = "AmovPpneMstpSnonWnonDnon";
            SecondaryWeapon = "AmovPpneMstpSrasWlnrDnon";
        };

        // jump animation - WEAPON RAISED - RUNNING
        class RifleStandActionsNoAdjust;
        class RifleStandActionsRunF: RifleStandActionsNoAdjust
        {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandActionsRunFL: RifleStandActionsNoAdjust
        {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandActionsRunFR: RifleStandActionsNoAdjust
        {
            getOver = "AovrPercMrunSrasWrflDf";
        };

        // jump animation - WEAPON RAISED - SPRINTING
        class RifleStandEvasiveActionsF: RifleStandActionsNoAdjust
        {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandEvasiveActionsFL: RifleStandActionsNoAdjust
        {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandEvasiveActionsFR: RifleStandActionsNoAdjust
        {
            getOver = "AovrPercMrunSrasWrflDf";
        };

        // jump animation - WEAPON LOWERED - RUNNING
        class RifleLowStandActionsNoAdjust;
        class RifleLowStandActionsRunF: RifleLowStandActionsNoAdjust
        {
            getOver = "ACE_AovrPercMrunSlowWrflDf";
        };
        class RifleLowStandActionsRunFL: RifleLowStandActionsNoAdjust
        {
            getOver = "ACE_AovrPercMrunSlowWrflDf";
        };
        class RifleLowStandActionsRunFR: RifleLowStandActionsNoAdjust
        {
            getOver = "ACE_AovrPercMrunSlowWrflDf";
        };

        // jump animation - WEAPON LOWERED - SPRINTING
        class RifleStandLowEvasiveActionsF: RifleLowStandActionsNoAdjust
        {
            getOver = "ACE_AovrPercMrunSlowWrflDf";
        };
        class RifleStandLowEvasiveActionsFR: RifleLowStandActionsNoAdjust
        {
            getOver = "ACE_AovrPercMrunSlowWrflDf";
        };
        class RifleStandLowEvasiveActionsFL: RifleLowStandActionsNoAdjust
        {
            getOver = "ACE_AovrPercMrunSlowWrflDf";
        };

        /*-------------Goggles Addon-------------*/
        GestureWipeFace[] = {"GestureWipeFace", "gesture"};


        /*-------------Dragging Addon-------------*/
        class MoveWithInjuredManDragger;
        class MoveWithInjuredManDraggerRfl: MoveWithInjuredManDragger
        {
            Up = "amovpercmstpsraswrfldnon";
        };

        /*-------------Common Addon-------------*/
        // fixes grab animation with equipped pistol
        class PistolStandActions: NoActions
        {
            grabDrag = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
        };

        class PistolProneActions: PistolStandActions
        {
            SecondaryWeapon = "AmovPpneMstpSrasWlnrDnon";
        };

        class LauncherKneelActions: NoActions
        {
            grabDrag = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
        };

        class LauncherProneActions: LauncherKneelActions
        {
            TurnL = "AmovPpneMstpSrasWlnrDnon_turnl";
            TurnLRelaxed = "AmovPpneMstpSrasWlnrDnon_turnl";
            TurnR = "AmovPpneMstpSrasWlnrDnon_turnr";
            TurnRRelaxed = "AmovPpneMstpSrasWlnrDnon_turnr";
        };

        class CivilStandActions: NoActions
        {
            grabDrag = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
        };

        /*-------------Captives Addon-------------*/
        class ACE_CivilStandHandcuffedActions: CivilStandActions
        {
            turnL = "";
            turnR = "";
            stop = "ACE_AmovPercMstpScapWnonDnon";
            StopRelaxed = "ACE_AmovPercMstpScapWnonDnon";
            default = "ACE_AmovPercMstpScapWnonDnon";
            PutDown = "";
            getOver = "";
            throwPrepare = "";
            throwGrenade[] = {"","Gesture"};
        };
        class ACE_CivilStandSurrenderActions: ACE_CivilStandHandcuffedActions
        {
            stop = "ACE_AmovPercMstpSsurWnonDnon";
            StopRelaxed = "ACE_AmovPercMstpSsurWnonDnon";
            default = "ACE_AmovPercMstpSsurWnonDnon";
            PutDown = "";
        };
        class ACE_CivilHandCuffedFFVActions: ACE_CivilStandHandcuffedActions
        {
            stop = "ACE_HandcuffedFFV";
            StopRelaxed = "ACE_HandcuffedFFV";
            default = "ACE_HandcuffedFFV";
        };
    };

    class AgonyBase;
    class AgonyBaseRfl;
    class InjuredMovedBase;

};

class CfgMovesMaleSevenFoot: CfgMovesBasicSevenFoot
{
    class States
    {
        class Crew;
        class ACE_KIA_SpottingScope: DefaultDie
        {
            actions = "DeadActions";
            file = "\A3\anims_f\Data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious",0.1};
        };

        class ACE_SpottingScope: Crew
        {
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon";
            interpolateTo[] = {"ACE_KIA_SpottingScope",1};
        };


        class Campaign_Base;
        class Acts_carFixingWheel: Campaign_Base
        {
            soundOverride = "";
        };


        class AmovPknlMstpSrasWlnrDnon: Default
        {
            camShakeFire = ACE_CAMSHAKEFIRE_LESS;
        };

        class AmovPknlMrunSlowWrflDf;
        class AmovPknlMtacSlowWrflDf: AmovPknlMrunSlowWrflDf
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMrunSlowWrflDfl;
        class AmovPknlMtacSlowWrflDfl: AmovPknlMrunSlowWrflDfl
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMrunSlowWrflDl;
        class AmovPknlMtacSlowWrflDl: AmovPknlMrunSlowWrflDl
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMrunSlowWrflDbl;
        class AmovPknlMtacSlowWrflDbl: AmovPknlMrunSlowWrflDbl
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMrunSlowWrflDb;
        class AmovPknlMtacSlowWrflDb: AmovPknlMrunSlowWrflDb
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMrunSlowWrflDbr;
        class AmovPknlMtacSlowWrflDbr: AmovPknlMrunSlowWrflDbr
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMrunSlowWrflDr;
        class AmovPknlMtacSlowWrflDr: AmovPknlMrunSlowWrflDr
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMrunSlowWrflDfr;
        class AmovPknlMtacSlowWrflDfr: AmovPknlMrunSlowWrflDfr
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMstpSrasWrflDnon;
        class AmovPknlMwlkSrasWrflDf: AmovPknlMstpSrasWrflDnon
        {
            camShakeFire = ACE_CAMSHAKEFIRE_BASE;
        };

        class AmovPknlMrunSrasWrflDf;
        class AmovPknlMtacSrasWrflDf: AmovPknlMrunSrasWrflDf
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };

        class AmovPknlMwlkSrasWpstDf;
        class AmovPknlMtacSrasWpstDf: AmovPknlMwlkSrasWpstDf
        {
            camShakeFire = ACE_CAMSHAKEFIRE_MORE;
        };


        /*-------------NoIdle Addon-------------*/
        class AmovPercMstpSlowWrflDnon: StandBase
        {
            variantsPlayer[] = {/*"AidlPercMstpSlowWrflDnon_G01", 0.5, "AidlPercMstpSlowWrflDnon_G02", 0.125, "AidlPercMstpSlowWrflDnon_G03", 0.125, "AidlPercMstpSlowWrflDnon_G04", 0.125, "AidlPercMstpSlowWrflDnon_G05", 0.125*/};
        };

        class AmovPknlMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon
        {
            camShakeFire = ACE_CAMSHAKEFIRE_LESS;
            variantsPlayer[] = {/*"AidlPknlMstpSlowWrflDnon_G01", 0.25, "AidlPknlMstpSlowWrflDnon_G02", 0.25, "AidlPknlMstpSlowWrflDnon_G03", 0.25*/};
        };

        // pistol
        class AmovPercMstpSrasWpstDnon;
        class AmovPercMstpSlowWpstDnon: AmovPercMstpSrasWpstDnon
        {
            variantsPlayer[] = {/*"AidlPercMstpSlowWpstDnon_G01", 0.333, "AidlPercMstpSlowWpstDnon_G02", 0.333, "AidlPercMstpSlowWpstDnon_G03", 0.334*/};
        };

        class AmovPknlMstpSrasWpstDnon;
        class AmovPknlMstpSlowWpstDnon: AmovPknlMstpSrasWpstDnon
        {
            variantsPlayer[] = {/*"AidlPknlMstpSlowWpstDnon_G03", 0.333, "AidlPknlMstpSlowWpstDnon_G02", 0.333, "AidlPknlMstpSlowWpstDnon_G01", 0.334*/};
        };

        // none
        class AmovPercMstpSnonWnonDnon: StandBase
        {
            variantsPlayer[] = {/*"AidlPercMstpSnonWnonDnon_G01", 0.16, "AidlPercMstpSnonWnonDnon_G02", 0.16, "AidlPercMstpSnonWnonDnon_G03", 0.16, "AidlPercMstpSnonWnonDnon_G04", 0.16, "AidlPercMstpSnonWnonDnon_G05", 0.16, "AidlPercMstpSnonWnonDnon_G06", 0.16*/};
            ConnectTo[] += {"ACE_Climb",0.02,"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon",0.1,"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon",0.1};
        };
        class AmovPknlMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
        {
            variantsPlayer[] = {/*"AidlPknlMstpSnonWnonDnon_G01", 0.33, "AidlPknlMstpSnonWnonDnon_G02", 0.33, "AidlPknlMstpSnonWnonDnon_G03", 0.33*/};
        };

        /*-------------Movement Addon-------------*/
        // jumping. don't force awkward freelook in mid air.
        class AovrPercMstpSrasWrflDf;
        class AovrPercMrunSrasWrflDf: AovrPercMstpSrasWrflDf
        {
            forceAim = 0;
        };
        class ACE_AovrPercMrunSlowWrflDf: AovrPercMrunSrasWrflDf
        { // custom
            actions = "RifleLowStandActionsRunF";

            ConnectTo[] =
            {
                "AidlPercMstpSlowWrflDnon_G0S",0.02,
                "AmovPercMstpSlowWrflDnon",0.03,
                "WeaponMagazineReloadStand",0.1,
                //"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon",0.01,
                "AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",0.01,
                //"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon",0.02,
                //"AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon",0.02,
                //"AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon",0.02,
                "AwopPercMstpSgthWrflDnon_Start2",0.1,
                "AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon",0.02,
              //"AmovPercMstpSrasWrflDnon_AadjPercMstpSrasWrflDup",0.02,
              //"AmovPercMstpSrasWrflDnon_AadjPercMstpSrasWrflDdown",0.02,
              //"AmovPercMstpSrasWrflDnon_AadjPercMstpSrasWrflDleft",0.02,
              //"AmovPercMstpSrasWrflDnon_AadjPercMstpSrasWrflDright",0.02,
                "AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon_gear",0.02
            };
            InterpolateTo[] =
            {
                "AmovPercMstpSlowWrflDnon_turnL",0.02,
                "AmovPercMstpSlowWrflDnon_turnR",0.02,
                "AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon",0.01,
                "AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon",0.01,
                "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",0.01,
                "Helper_SwitchToCarryRfl",0.2,
                "AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon",0.02,
                "AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon_Putdown",0.02,
                "AmovPercMwlkSlowWrflDf",0.02,
                "AmovPercMwlkSlowWrflDfl",0.02,
                "AmovPercMwlkSlowWrflDl",0.02,
                "AmovPercMwlkSlowWrflDbl",0.02,
                "AmovPercMwlkSlowWrflDb",0.02,
                "AmovPercMwlkSlowWrflDbr",0.02,
                "AmovPercMwlkSlowWrflDr",0.02,
                "AmovPercMwlkSlowWrflDfr",0.02,
                "AmovPercMrunSlowWrflDf",0.02,
                "AmovPercMrunSlowWrflDfl",0.02,
                "AmovPercMrunSlowWrflDl",0.02,
                "AmovPercMrunSlowWrflDbl",0.02,
                "AmovPercMrunSlowWrflDb",0.02,
                "AmovPercMrunSlowWrflDbr",0.02,
                "AmovPercMrunSlowWrflDr",0.02,
                "AmovPercMrunSlowWrflDfr",0.02,
              //"AmovPercMrunSrasWrflDf_ldst",0.02,
              //"AmovPercMrunSrasWrflDfl_ldst",0.02,
              //"AmovPercMrunSrasWrflDl_ldst",0.02,
              //"AmovPercMrunSrasWrflDbl_ldst",0.02,
              //"AmovPercMrunSrasWrflDb_ldst",0.02,
              //"AmovPercMrunSrasWrflDbr_ldst",0.02,
              //"AmovPercMrunSrasWrflDr_ldst",0.02,
              //"AmovPercMrunSrasWrflDfr_ldst",0.02,
                "AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon",0.02,
                "AmovPercMevaSlowWrflDf",0.02,
                "AmovPercMevaSlowWrflDfl",0.02,
                "AmovPercMevaSlowWrflDfr",0.02,
                "AmovPercMstpSlowWrflDnon_SaluteIn",0.03,
                "Unconscious",0.02,
                "AidlPercMstpSlowWrflDnon_AI",0.02,
                "AidlPercMstpSlowWrflDnon_AI",0.02,
                "AovrPercMstpSlowWrflDf",1.01,
                "AmovPercMtacSlowWrflDfl",0.2,
                "AmovPercMtacSlowWrflDl",0.2,
                "AmovPercMtacSlowWrflDbl",0.2,
                "AmovPercMtacSlowWrflDb",0.2,
                "AmovPercMtacSlowWrflDbr",0.2,
                "AmovPercMtacSlowWrflDr",0.2,
                "AmovPercMtacSlowWrflDfr",0.22,
                "AmovPercMtacSlowWrflDf",0.02,
                "HaloFreeFall_non",10.2,
                "AmovPercMrunSlowWrflDf",0.02,
                "AmovPercMrunSlowWrflDfl",0.02,
                "AmovPercMrunSlowWrflDl",0.02,
                "AmovPercMrunSlowWrflDb",0.02,
                "AmovPercMrunSlowWrflDbr",0.02,
                "AmovPercMrunSlowWrflDr",0.02,
                "AmovPercMrunSlowWrflDbl",0.02,
                "AmovPercMrunSlowWrflDfr",0.02,
                "AmovPercMstpSrasWrflDnon_falling",0.02,
                "AsdvPercMstpSnonWrflDnon",2.02,
                "AdvePercMstpSnonWrflDnon",2.02,
                "AbdvPercMstpSnonWrflDnon",2.02,
                "AinvPercMstpSrasWrflDnon",0.05,
                "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon",0.02,
              //"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.02,
              //"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",0.02,
                "AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon",0.02,
                "AfalPercMstpSrasWrflDnon",0.025,
              //"AmovPercMevaSrasWrflDl",0.025,
              //"AmovPercMevaSrasWrflDr",0.025,
                "Acts_PercMstpSlowWrflDnon_handup2",1,
                "Acts_WalkingChecking",1,
                "Acts_PercMstpSlowWrflDnon_handup1",1,
                "Acts_PercMstpSlowWrflDnon_handup2b",1,
                "Acts_PercMstpSlowWrflDnon_handup2c",1,
                "Acts_PercMstpSlowWrflDnon_handup1b",1,
                "Acts_PercMstpSlowWrflDnon_handup1c",1,
                "HubSpectator_stand",1,
                "HubSpectator_walk",1,
                "HubStanding_idle1",1,
                "HubStanding_idle2",1,
                "HubStanding_idle3",1,
                "Campaign_Base",0.5,
                "CutSceneAnimationBase",0.5,
                "AmovPercMlmpSlowWrflDf",0.05,
                "AmovPercMlmpSlowWrflDfl",0.05,
                "AmovPercMlmpSlowWrflDl",0.05,
                "AmovPercMlmpSlowWrflDbl",0.05,
                "AmovPercMlmpSlowWrflDb",0.05,
                "AmovPercMlmpSlowWrflDbr",0.05,
                "AmovPercMlmpSlowWrflDr",0.05,
                "AmovPercMlmpSlowWrflDfr",0.05,
                "acts_millerDisarming_runToDesk",0.05,
                "CutSceneAnimationSmk",0.1,
                "UnconsciousFaceDown",0.25,
                "UnconsciousMedicFromRifle",0.2
            };
        };

        // rifle raised, replace link of vault with jump animation
        class AmovPercMstpSrasWrflDnon;
        class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
        {
            speed = 0.677068;
            InterpolateTo[] =
            {
                "AovrPercMrunSrasWrflDf",0.22,
                "AmovPercMrunSlowWrflDf",0.025,
                "AmovPercMwlkSrasWrflDf",0.025,
                "AmovPknlMrunSrasWrflDf",0.03,
                "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,
                "AmovPercMevaSrasWrflDf",0.025,
                "Unconscious",0.01,
                "AmovPercMtacSrasWrflDf",0.02,
                "AmovPercMrunSrasWrflDfl",0.02,
                "AmovPercMrunSrasWrflDfl_ldst",0.02,
                "AmovPercMrunSrasWrflDfr",0.02,
                "AmovPercMrunSrasWrflDfr_ldst",0.02,
                "AmovPercMstpSrasWrflDnon",0.02,
                "AmovPercMrunSrasWrflDl",0.02,
                "AmovPercMrunSrasWrflDbl",0.02,
                "AmovPercMrunSrasWrflDb",0.02,
                "AmovPercMrunSrasWrflDbr",0.02,
                "AmovPercMrunSrasWrflDr",0.02,
                "AmovPknlMstpSlowWrflDnon_relax",0.1,
                "AmovPercMrunSrasWrflDf_ldst",0.02,
                "AmovPercMrunSrasWrflDf",0.02
            };
        };

        // rifle lowered, add link to jump animation
        class AmovPercMrunSlowWrflDf: AmovPercMstpSlowWrflDnon
        {
            speed = 0.634570;
            InterpolateTo[] =
            {
                "ACE_AovrPercMrunSlowWrflDf",0.22,
                "AmovPercMstpSlowWrflDnon",0.02,
                "AmovPercMwlkSlowWrflDf_ver2",0.025,
                "AmovPercMwlkSlowWrflDf",0.5,
                "AidlPercMrunSrasWrflDf",0.01,
                "AmovPercMrunSlowWrflDfl",0.025,
                "AmovPercMrunSlowWrflDfr",0.025,
                "AmovPercMrunSrasWrflDf",0.025,
                "AmovPknlMrunSlowWrflDf",0.03,
                "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,
                "AmovPercMevaSrasWrflDf",0.025,
                "AmovPercMevaSlowWrflDf",0.025,
                "Unconscious",0.02,
                "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart",0.1,
                "AmovPknlMstpSlowWrflDnon_relax",0.1,
                "AmovPercMtacSlowWrflDf_ver2",0.2,
                "AmovPercMtacSlowWrflDf",0.5,
                "AmovPercMwlkSrasWrflDf",0.02,
                "AmovPercMtacSrasWrflDf",0.02
            };
        };

        // enable optics in prone down stance
        class AadjPpneMstpSrasWrflDup;
        class AadjPpneMstpSrasWrflDdown: AadjPpneMstpSrasWrflDup
        {
            enableOptics = 1;
        };
        class AadjPpneMstpSrasWpstDup;
        class AadjPpneMstpSrasWpstDdown: AadjPpneMstpSrasWpstDup
        {
            enableOptics = 2;
        };

        // climb animation

        class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium;
        class ACE_Climb: AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium
        {
            canReload = 0;
            forceAim = 1;
        };

        /*-------------Medical Engine Addon-------------*/
        // fixes hand being stuck at rifle which is on the back
        class AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon;
        class AinvPknlMstpSlayWnonDnon_medicOther: AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon
        {
            weaponIK = 0;
        };

        class AmovPpneMstpSnonWnonDnon;
        class ACE_UnconsciousOutProne: AmovPpneMstpSnonWnonDnon
        {
            //file = "\A3\anims_f\Data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
            looped = 0;
            canBlendStep = 0;
            blockMobileSwitching = 1;
            forceAim = 1;
            interpolationRestart = 1;
            variantsPlayer[] = {};
            variantsAI[] = {};
            useIdles = 0;
            InterpolateTo[] = {"Unconscious",0.2};
            ConnectTo[] = {"AmovPpneMstpSnonWnonDnon",0.2};
            speed = 100;
        };

        /*-------------FastRoping Addon-------------*/
        class ACE_FastRoping: Crew
        {
            file = "\OPTRE_ACE_Compat\anim\fastroping_Spartan.rtm";
            interpolateTo[] = {"Unconscious", 1};
            disableWeapons = 1;
            disableWeaponsLong = 1;
            canReload = 0;
        };

        /*-------------Dragging Addon-------------*/

        class AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon: InjuredMovedBase
        {
            speed = -10; // 1/10
        };
        class AinjPfalMstpSnonWrflDnon_carried_Up: AgonyBaseRfl
        {
            speed = -10; // 1/10
            canReload = 0;
        };

        /*-------------Common Addon-------------*/

        // fixes being able to reload in some animations, can't remember now what exactly
        class AinjPfalMstpSnonWnonDnon_carried_Down: AgonyBase
        {
            canReload = 0;
        };
        class AinjPfalMstpSnonWnonDnon_carried_Up: AgonyBase
        {
            canReload = 0;
        };
        class AinjPfalMstpSnonWrflDnon_carried_Down: AgonyBase
        {
            canReload = 0;
        };

        class AmovPpneMstpSnonWnonDnon_injured;
        class AinjPpneMstpSnonWnonDnon: AmovPpneMstpSnonWnonDnon_injured
        {
            canReload = 0;
        };
        class AmovPpneMstpSrasWrflDnon_injured;
        class AinjPpneMstpSnonWrflDnon: AmovPpneMstpSrasWrflDnon_injured
        {
            canReload = 0;
        };

        // mark as on ladder animation
        class LadderCivilStatic: StandBase
        {
            ACE_isLadder = 1;
        };

        // dunno, important
        class AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1;
        class AcinPknlMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
        {
            enableDirectControl = 1;
        };
        class AcinPknlMwlkSnonWnonDb: AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
        {
            enableDirectControl = 1;
        };

        // fix falling back to unconsciousness animation and disable rotating in that state
        class Unconscious: Default
        {
            ConnectTo[] = {};
            head = "headNo";
            forceAim = 1;
            static = 1;
        };

        // idk. Flummi?
        class AinvPknlMstpSnonWnonDnon_medic0: HealBase
        {
            variantsPlayer[] = {};
        };

        /*-------------Captives Addon-------------*/
        class CutSceneAnimationBase;

        #define MACRO_ANIMATION \
            head = "headDefault"; \
            aimingBody = "aimingNo"; \
            forceAim = 1; \
            static = 1;

        //Handcuffed Anims:
        class ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon: CutSceneAnimationBase
        {
            actions = "ACE_CivilStandHandcuffedActions";
            file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_EaseIn";
            speed = 1;
            looped = 0;
            interpolationRestart = 2;
            ConnectTo[] = {"ACE_AmovPercMstpScapWnonDnon",0.1};
            InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpScapWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
            canReload = 0;
            MACRO_ANIMATION
        };
        class ACE_AmovPercMstpScapWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon
        {
            file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_Ease";
            speed = 0;
            ConnectTo[] = {"ACE_AmovPercMstpScapWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
            InterpolateTo[] = {"Unconscious",0.01};
            looped = 1;
            MACRO_ANIMATION
        };
        class ACE_AmovPercMstpScapWnonDnon_AmovPercMstpSnonWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon
        {
            actions = "CivilStandActions";
            file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\amovpercmstpsnonwnondnon_easeout";
            ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
            InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon",0.1};
            MACRO_ANIMATION
        };

        //Handcuffed-FFV:
        class ACE_HandcuffedFFV: ACE_AmovPercMstpScapWnonDnon
        {
            file = "\A3\cargoposes_F_heli\anim\passenger_flatground_3idleunarmed.rtm";
            actions = "ACE_CivilHandCuffedFFVActions";
            ConnectTo[] = {};
            MACRO_ANIMATION
        };


        //Surrender Anims:
        class ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon: CutSceneAnimationBase
        {
            actions = "ACE_CivilStandSurrenderActions";
            file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon";
            speed = 1;
            looped = 0;
            interpolationRestart = 2;
            ConnectTo[] = {"ACE_AmovPercMstpSsurWnonDnon",0.1};
            InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
            canReload = 0;
            MACRO_ANIMATION
        };
        class ACE_AmovPercMstpSsurWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon
        {
            file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\sur\non\AmovPercMstpSsurWnonDnon";
            speed = 0;
            looped = 1;
            ConnectTo[] = {"ACE_AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
            InterpolateTo[] = {"Unconscious",0.01};
            MACRO_ANIMATION
        };
        class ACE_AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon
        {
            speed = 0.5;  //for gameplay reasons, slow this down
            actions = "CivilStandActions";
            file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\sur\non\AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon";
            ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
            InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon",0.1};
            MACRO_ANIMATION
        };

        /*-------------Advanced Fatigue Addon-------------*/
        // Jog speed adjustment: 12km/h

        class AmovPercMrunSlowWrflDfl: AmovPercMrunSlowWrflDf
        {
            speed = 0.634570;
        };
        class AmovPercMrunSlowWrflDl: AmovPercMrunSlowWrflDfl
        {
            speed = 0.691626;
        };
        class AmovPercMrunSlowWrflDr: AmovPercMrunSlowWrflDfl
        {
            speed = 0.727404;
        };

        // Jog + raised weapon speed adjustment: 13km/h

        class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
        {
            camShakeFire = ACE_CAMSHAKEFIRE_LESS;
        };

        // Tactical Jog animation replacement and speed adjustment: 10km/h
        class AmovPercMwlkSlowWrflDf_ver2;
        class AmovPercMwlkSlowWrflDfl_ver2;
        class AmovPercMtacSlowWrflDf_ver2: AmovPercMwlkSlowWrflDf_ver2
        {
            speed = 0.528808;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDf";
        };
        class AmovPercMtacSlowWrflDfl_ver2: AmovPercMwlkSlowWrflDfl_ver2
        {
            speed = 0.528808;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfl";
        };
        class AmovPercMtacSlowWrflDfr_ver2: AmovPercMtacSlowWrflDf_ver2
        {
            speed = 0.528808;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfr";
        };
        class AmovPercMtacSlowWrflDr_ver2: AmovPercMtacSlowWrflDf_ver2
        {
            speed = 0.528808;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDr";
        };
        class AmovPercMtacSlowWrflDl_ver2: AmovPercMtacSlowWrflDf_ver2
        {
            speed = 0.528808;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDl";
        };
        class AmovPercMtacSlowWrflDb_ver2: AmovPercMtacSlowWrflDf_ver2
        {
            speed = 0.684541;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDb";
            soundEdge[] = {0.25,0.5,0.75,1};
        };
        class AmovPercMtacSlowWrflDbl_ver2: AmovPercMtacSlowWrflDb_ver2
        {
            speed = 0.684541;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbl";
        };
        class AmovPercMtacSlowWrflDbr_ver2: AmovPercMtacSlowWrflDb_ver2
        {
            speed = 0.684541;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbr";
        };
    };
};
