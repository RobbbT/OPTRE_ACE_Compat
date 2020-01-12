class ACE_Medical_Treatment 
{
    class Bandaging 
    {
        class ElasticBandage;
        class OPTRE_Biofoam: ElasticBandage    // use slightly buffed elastic bandage effectiveness and slightly buffed QuikClot reopening values
        {
            class Abrasion {
                effectiveness = 5;
                reopeningChance = 0;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 1600;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
            };

            class Avulsions: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 1600;
            };
            class AvulsionsMinor: Avulsions {
                effectiveness = 3;
            };
            class AvulsionsMedium: Avulsions {
                effectiveness = 2;
            };
            class AvulsionsLarge: Avulsions {
                effectiveness = 2;
                reopeningChance = 0;
            };

            class Contusion: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1100;
            };
            class CrushMinor: Crush {
                reopeningChance = 0;
            };
            class CrushMedium: Crush {
                effectiveness = 2;
            };
            class CrushLarge: Crush {
                effectiveness = 1.75;
                reopeningChance = 0;
            };

            class Cut: Abrasion {
                effectiveness = 6;
                reopeningChance = 0;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1100;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 4;
                reopeningChance = 0;
            };
            class CutLarge: Cut {
                effectiveness = 3;
                reopeningChance = 0;
            };

            class Laceration: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 2;
            };
            class LacerationLarge: Laceration {
                effectiveness = 1.5;
                reopeningChance = 0;
            };

            class velocityWound: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 2000;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {
                effectiveness = 2;
            };
            class velocityWoundLarge: velocityWound {
                effectiveness = 1.75;
            };

            class punctureWound: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {
                effectiveness = 2.5;
            };
            class punctureWoundLarge: punctureWound {
                effectiveness = 2;
            };
        };
        class OPTRE_Medigel: ElasticBandage // use slightly nerfed elastic bandage effectiveness and nerfed QuikClot reopening values
        {
            class Abrasion {
                effectiveness = 3.75;
                reopeningChance = 0;
                reopeningMinDelay = 450;
                reopeningMaxDelay = 800;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2.25;
                reopeningChance = 0;
            };

            class Avulsions: Abrasion {
                effectiveness = 3;
                reopeningChance = 0;
                reopeningMinDelay = 450;
                reopeningMaxDelay = 800;
            };
            class AvulsionsMinor: Avulsions {
                effectiveness = 2.25;
            };
            class AvulsionsMedium: Avulsions {
                effectiveness = 1.5;
            };
            class AvulsionsLarge: Avulsions {
                effectiveness = 1.5;
                reopeningChance = 0;
            };

            class Contusion: Abrasion {
                effectiveness = 2.25;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 2.25;
                reopeningChance = 0;
                reopeningMinDelay = 350;
                reopeningMaxDelay = 550;
            };
            class CrushMinor: Crush {
                reopeningChance = 0;
            };
            class CrushMedium: Crush {
                effectiveness = 1.5;
            };
            class CrushLarge: Crush {
                effectiveness = 1.3;
                reopeningChance = 0;
            };

            class Cut: Abrasion {
                effectiveness = 4.5;
                reopeningChance = 0;
                reopeningMinDelay = 400;
                reopeningMaxDelay = 550;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 3;
                reopeningChance = 0;
            };
            class CutLarge: Cut {
                effectiveness = 2.25;
                reopeningChance = 0;
            };

            class Laceration: Abrasion {
                effectiveness = 2.25;
                reopeningChance = 0;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 1000;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 1.5;
            };
            class LacerationLarge: Laceration {
                effectiveness = 1.13;
                reopeningChance = 0;
            };

            class velocityWound: Abrasion {
                effectiveness = 2.25;
                reopeningChance = 0;
                reopeningMinDelay = 450;
                reopeningMaxDelay = 1000;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {
                effectiveness = 1.5;
            };
            class velocityWoundLarge: velocityWound {
                effectiveness = 1.3;
            };

            class punctureWound: Abrasion {
                effectiveness = 2.25;
                reopeningChance = 0;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 1500;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {
                effectiveness = 1.9;
            };
            class punctureWoundLarge: punctureWound {
                effectiveness = 1.5;
            };
        };
    };
};