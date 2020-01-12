class CfgGesturesSevenFoot
{
	class Default;

    class BlendAnims
    {
    	/*-------------Gestures Addon-------------*/
        ace_gestures_LeftArm[] =
        {
            "LeftShoulder", 1,
            "LeftArm", 1,
            "LeftArmRoll", 1,
            "LeftForeArm", 1,
            "LeftForeArmRoll", 1,
            "LeftHand", 1,
            "LeftHandIndex1", 1,
            "LeftHandIndex2", 1,
            "LeftHandIndex3", 1,
            "LeftHandMiddle1", 1,
            "LeftHandMiddle2", 1,
            "LeftHandMiddle3", 1,
            "LeftHandPinky1", 1,
            "LeftHandMiddle2", 1,
            "LeftHandMiddle3", 1,
            "LeftHandPinky1", 1,
            "LeftHandPinky2", 1,
            "LeftHandPinky3", 1,
            "LeftHandRing", 1,
            "LeftHandRing1", 1,
            "LeftHandRing2", 1,
            "LeftHandRing3", 1,
            "LeftHandThumb1", 1,
            "LeftHandThumb2", 1,
            "LeftHandThumb3", 1
        };
    };

    class States
    {
    	/*------------- Addon-------------*/
        class GestureFreezeStand;
        class GestureWipeFace: GestureFreezeStand
        {
            file = "\OPTRE_ACE_Compat\anim\WipeGlasses_Spartan.rtm";
            canPullTrigger = 0;
        };

        /*-------------Gestures Addon-------------*/
        class ace_gestures_Base: Default
        {
            actions = "NoActions";
            canPullTrigger = 0;
            connectAs = "";
            connectFrom[] = {};
            connectTo[] = {};
            disableWeapons = 0;
            enableBinocular = 1;
            enableMissile = 1;
            enableOptics = 0;
            equivalentTo = "";
            file = "OPTRE_MJOLNIR\data\anims\anims_f\data\anim\sdr\gst\gesturehi.rtm";
            forceAim = 0;
            headBobMode = 0;
            headBobStrength = 0;
            interpolateFrom[] = {};
            interpolateTo[] = {};
            interpolateWith[] = {};
            interpolationRestart = 0;
            interpolationSpeed = 6;
            looped = 0;
            mask = "ace_gestures_LeftArm";
            minPlayTime = 0.5;
            preload = 0;
            ragdoll = 0;
            relSpeedMax = 1;
            relSpeedMin = 1;
            showHandGun = 0;
            showItemInHand = 0;
            showItemInRightHand = 0;
            showWeaponAim = 1;
            soundEdge[] = {0.5,1};
            soundEnabled = 1;
            soundOverride = "";
            speed = -2;
            static = 0;
            terminal = 0;
            Walkcycles = 1;
            weaponIK = 1;

            leftHandIKBeg = 1;
            leftHandIKCurve[] = {0, 1, 0.1, 0, 0.8, 0, 1, 1};
            leftHandIKEnd = 1;

            rightHandIKBeg = 1;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = 1;
        };

        class ace_gestures_forward: ace_gestures_Base
        {
            file = "\OPTRE_ACE_Compat\anim\ace_forward_spartan.rtm";
            speed = 1;
        };

        class ace_gestures_forwardStandLowered: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_forward_stand_lowered_spartan.rtm";
        };

        class ace_gestures_freeze: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_freeze_spartan.rtm";
            speed = 0.6;
        };

        class ace_gestures_freezeStandLowered: ace_gestures_freeze
        {
            file = "\OPTRE_ACE_Compat\anim\ace_freeze_stand_lowered_spartan.rtm";
        };

        class ace_gestures_cover: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_cover_spartan.rtm";
            speed = 0.8;
        };

        class ace_gestures_coverStandLowered: ace_gestures_cover
        {
            file = "\OPTRE_ACE_Compat\anim\ace_cover_stand_lowered_spartan.rtm";
        };

        class ace_gestures_regroup: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_regroup_spartan.rtm";
            speed = 0.8;
        };

        class ace_gestures_regroupStandLowered: ace_gestures_regroup
        {
            file = "\OPTRE_ACE_Compat\anim\ace_regroup_stand_lowered_spartan.rtm";
        };

        class ace_gestures_engage: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_engage_spartan.rtm";
            speed = 0.9;
        };

        class ace_gestures_engageStandLowered: ace_gestures_engage
        {
            file = "\OPTRE_ACE_Compat\anim\ace_engage_stand_lowered_spartan.rtm";
        };

        class ace_gestures_point: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_point_spartan.rtm";
            speed = 0.8;
        };

        class ace_gestures_pointStandLowered: ace_gestures_point
        {
            file = "\OPTRE_ACE_Compat\anim\ace_point_stand_lowered_spartan.rtm";
        };

        class ace_gestures_hold: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_hold_spartan.rtm";
            speed = 0.8;
        };

        class ace_gestures_holdStandLowered: ace_gestures_hold
        {
            file = "\OPTRE_ACE_Compat\anim\ace_hold_stand_lowered_spartan.rtm";
        };

        class ace_gestures_warning: ace_gestures_forward
        {
            file = "\OPTRE_ACE_Compat\anim\ace_warning_spartan.rtm";
            speed = 0.8;
        };

        class ace_gestures_warningStandLowered: ace_gestures_warning
        {
            file = "\OPTRE_ACE_Compat\anim\ace_warning_stand_lowered_spartan.rtm";
        };
    };
};