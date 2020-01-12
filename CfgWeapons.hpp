class CfgWeapons
{
    class Default;
    class ACE_ItemCore;
    class ItemCore : Default
    {
        class ItemInfo;
    };
    class CBA_MiscItem_ItemInfo;
    class ACE_fieldDressing;

    //------------------------------Medical Items------------------------------
    class OPTRE_MedKit: ACE_ItemCore
    {
        scope = 2;
        author = "Article 2 Studios";
        displayName = "Medical Kit";
        picture = "\OPTRE_weapons\items\icons\medkit.paa";
        model = "\OPTRE_Weapons\items\MedKit.p3d";
        descriptionShort = "Medical Kit to treat all combat inflicted wounds and injuries";
        type = 0;
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=20;
        };
    };
    class OPTRE_Biofoam: ACE_fieldDressing
    {
        scope = 2;
        author = "Article 2 Studios";
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
        picture = "\OPTRE_weapons\items\icons\biofoam.paa";
        displayName = "Biofoam Canister";
        descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
        descriptionUse = "Applying Biofoam...";

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 6;
        };
    };
    class OPTRE_Medigel: ACE_fieldDressing
    {
        scope = 2;
        author = "Article 2 Studios";
        model = "\OPTRE_Weapons\items\Medigel.p3d";
        picture = "\OPTRE_weapons\items\icons\biofoam.paa";
        displayName = "Optican Medigel";
        descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
        descriptionUse = "Injecting Medigel...";

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 6;
        };
    };

    ///Some weapons below Need Updating

    class OPTRE_Handgun_Base;
    class OPTRE_M6G: OPTRE_Handgun_Base
    {
        ACE_barrelTwist = 215.7;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 124; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0
    };

    class OPTRE_SubMachineGun_Base;
    class OPTRE_M7: OPTRE_SubMachineGun_Base
    {
        ACE_barrelTwist = 177.8;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 220; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0
    };

    class OPTRE_Shotgun_Base;
    class OPTRE_M45: OPTRE_Shotgun_Base
    {
        ACE_barrelTwist = 177.8;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 607; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 0; // Right handed is 1, Left is -1, none is 0
    };

    class OPTRE_M45E: OPTRE_M45
    {
        ACE_barrelLength = 707; //Length of the barrel in millimeters
    };

    class OPTRE_Rifle_Base;
    class OPTRE_MA5B: OPTRE_Rifle_Base
    {
        ACE_barrelTwist = 177.8;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 607; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0
    };
    class OPTRE_BR55HB: OPTRE_Rifle_Base
    {
        ACE_barrelTwist = 177.8;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 607; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0
    };

    class OPTRE_LongRifle_Base;
    class OPTRE_M392_DMR: OPTRE_LongRifle_Base
    {
        ACE_barrelTwist = 177.8;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 707; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0
    };
    class OPTRE_M393_DMR: OPTRE_M392_DMR
    {
        ACE_barrelLength = 757; //Length of the barrel in millimeters        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
    };
    class OPTRE_SRS99D: OPTRE_LongRifle_Base
    {
        ACE_barrelTwist = 482.7;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 1062; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0
    };

    class OPTRE_MachineGun_Base;
    class OPTRE_M73: OPTRE_MachineGun_Base
    {
        ACE_barrelTwist = 177.8;//This is a lot of fucking math (https://en.wikipedia.org/wiki/Miller_twist_rule)
        ACE_barrelLength = 607; //Length of the barrel in millimeters
        ACE_overheating_mrbs = 999999; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_overheating_slowdownFactor = 0; //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_overheating_dispersion = 0; //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_arsenal_hide = 0; // 1 = hidden and 0 = shown
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0
        ACE_clearJamAction = "GestureReload";
        ACE_checkTemperatureAction = "Gear";
    };
    class OPTRE_M247: OPTRE_M73
    {
        ACE_barrelLength = 807; //Length of the barrel in millimeters
    };

    class UGL_F;
    class OPTRE_MA5BGL: OPTRE_MA5B
    {
        class OPTRE_M301UGL: UGL_F
        {
            magazines[] += {"ACE_HuntIR_M203"};
        };
    };

    class OPTRE_UnguidedLauncher_Base;
    class OPTRE_M41_SSR: OPTRE_UnguidedLauncher_Base
    {
        ACE_overpressure_angle = 0;
        ACE_overpressure_range = 0;
        ACE_overpressure_damage = 0;
        ACE_reloadlaunchers_enabled = 1;
    };
    /* Vehicle weapon compatibility */
    class cannon_120mm;
    class OPTRE_M68_Gauss: cannon_120mm
    {
        ACE_overpressure_angle = 0;
        ACE_overpressure_damage = 0;
        ACE_overpressure_priority = 0;
        ACE_overpressure_range = 0;
    };
    class OPTRE_105mm_M512: cannon_120mm
    {
        ACE_overpressure_angle = 0;
        ACE_overpressure_damage = 0;
        ACE_overpressure_priority = 0;
        ACE_overpressure_range = 0;
    };

    /* Helmet hearing compatibility */
    class H_helmetB;
    class OPTRE_UNSC_CH252_Helmet_Base: H_helmetB
    {
        ACE_hearing_protection = 1;
        ACE_hearing_lowervolume = 0;
    };
    class OPTRE_MJOLNIR_Mk4Helmet: H_helmetB
    {
        ACE_hearing_protection = 1;
        ACE_hearing_lowervolume = 0;
    };
    /* Uniform GForce compatibility */
    class U_B_CombatUniform_mcam;
    class OPTRE_UNSC_Army_Uniform_WDL: U_B_CombatUniform_mcam
    {
        ACE_GForceCoef = 0.25;
    };
    class OPTRE_MJOLNIR_Undersuit: U_B_CombatUniform_mcam
    {
        ACE_GForceCoef = 0;
    };
    class U_B_HeliPilotCoveralls;
    class OPTRE_UNSC_Navy_Uniform: U_B_HeliPilotCoveralls
    {
        ACE_GForceCoef = 0.25;
    };
    /* NVG compatibility */
    class NVGoggles;
    class OPTRE_NVG: NVGoggles
    {
        ACE_nightVision_grain = 0;
        ACE_nightVision_blur = 0;
        ACE_nightVision_radBlur = 0;
        ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
        ACE_nightvision_bluRadius = 0;
        ACE_nightvision_generation = 4;
        ACE_nightvision_eyeCups = 0;
    };
};