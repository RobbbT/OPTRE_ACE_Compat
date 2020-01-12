class CfgAmmo
{
    /* Explosives compatibility */
    class SatchelCharge_Remote_Ammo;
    class C12_Remote_Ammo: SatchelCharge_Remote_Ammo
    {
        ace_explosives_magazine = "C12_Remote_Mag";
        ACE_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = {-1.415, 0, 0.12};
        ace_explosives_size = 0;
    };
    class C7_Remote_Ammo: SatchelCharge_Remote_Ammo
    {
        ace_explosives_magazine = "C7_Remote_Mag";
        ACE_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = {-1.415, 0, 0.12};
        ace_explosives_size = 0;
    };
    class M168_Remote_Ammo: SatchelCharge_Remote_Ammo
    {
        ace_explosives_magazine = "M168_Remote_Mag";
        ACE_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = {-1.415, 0, 0.12};
        ace_explosives_size = 0;
    };
    class M41_IED_Remote_Ammo: SatchelCharge_Remote_Ammo
    {
        ace_explosives_magazine = "M41_IED_Remote_Mag";
        ACE_explodeOnDefuse = 0.05;
        ace_explosives_defuseObjectPosition[] = {0, 0, 0};
        ace_explosives_size = 0;
    };
    class M41_B_IED_Remote_Ammo: SatchelCharge_Remote_Ammo
    {
        ace_explosives_magazine = "M41_IED_B_Remote_Mag";
        ACE_explodeOnDefuse = 0.05;
        ace_explosives_defuseObjectPosition[] = {0, 0, 0};
        ace_explosives_size = 0;
    };

    //Mines
    class ATMine_Range_Ammo;
    class UNSC_Mine_Ammo: ATMine_Range_Ammo
    {
        ace_explosives_magazine = "UNSCMine_Range_Mag";
        ace_explosives_size = 1;
    };


    /* Frag compatibility */
    class GrenadeHand;
    class OPTRE_G_M9_Frag: GrenadeHand
    {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 200;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 190;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2930;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium_HD"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
    };


    /* Missile guidance compatibility */
    class M_Titan_AT;
    class OPTRE_M41_Rocket_HEAT_Guided: M_Titan_AT
    {
        class ace_missileguidance
        {
            enabled = 1; // Enable missile guidance (0-disabled, 1-enabled)
            minDeflection = 0.00025;  // Minimum flap deflection for guidance
            maxDeflection = 0.001;  // Maximum flap deflection for guidance
            incDeflection = 0.0005;  // The increment in which deflection adjusts
            canVanillaLock = 1;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)
            defaultSeekerType = "SACLOS";  // Default seeker type
            seekerTypes[] = {"SALH", "SACLOS"};  // Seeker types available
            defaultSeekerLockMode = "LOAL";  // Default seeker lock mode
            seekerLockModes[] = {"LOAL", "LOBL"};  // Seeker lock modes available
            seekerAngle = 90;  // Angle in front of the missile which can be searched
            seekerAccuracy = 1;  // Seeker accuracy multiplier
            seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 2500;  // Maximum from the missile which the seeker can visually search
            defaultAttackProfile = "LIN";  // Default attack profile
            attackProfiles[] = {"LIN", "DIR"};  // Attack profiles available
        };
    };


    /* Weapon ammo compatibility */
    class B_9x21_Ball;
    class OPTRE_B_5x23_Caseless: B_9x21_Ball
    {
        // Standard deviation of the muzzle velocity variation in percent
        // Example: With a muzzle velocity of 850 m/s and a standard deviation of 0.35%, 68% of the shots will be between 847 m/s and 853 m/s
        ACE_muzzleVelocityVariationSD = 0.25;

        // Array of muzzle velocity shifts in m/s with 11 data points from -15 °C to 35 °C
        // Example: At 0°C the shift will be -21.0
        ACE_ammoTempMuzzleVelocityShifts[] = {0,0,0,0,0,0,0,0,0,0,0};

        // Array of muzzle velocities (same size as barrel length array)
        ACE_muzzleVelocities[] = {600};

        // Array of barrel lengths (same size as muzzle velocity array)
        // Example, when shooting with the M4 barrel (`368.3`mm).
        // The length is between the 5th and 6th barrelLengths (`360.68, 391.16`).
        // So the muzzle velocity will be between 5th and 6th muzzleVelocities (`866, 878`).
        ACE_barrelLengths[] = {220};
    };

    class B_762x51_Ball;
    class OPTRE_B_762x51_Ball: B_762x51_Ball  ///7.62mm NATO Ball Special M118 values
    {
        //airFriction=-0.00933711;
        //hit = 20; //test
        //tracerScale = 1.2; //0.6;
        //tracerStartTime=0.073;  // Based on the British L5A1 which burns out to 1000m
        //tracerEndTime=2.15957;  // Time in seconds calculated with ballistics calculator
        //ACE_caliber=7.823;
        //ACE_bulletLength=29.464; // old value 28.956
        //ACE_bulletMass=11.2; // old value 9.4608
        //ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        //ACE_ballisticCoefficients[]={0.22};
        //ACE_velocityBoundaries[]={};
        //ACE_standardAtmosphere="ICAO";
        //ACE_dragModel=7;
        //ACE_muzzleVelocities[]={700, 800, 820, 833, 845};
        //ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4};
    };
    class OPTRE_B_95x40_Ball: B_762x51_Ball
    {
        // Standard deviation of the muzzle velocity variation in percent
        // Example: With a muzzle velocity of 850 m/s and a standard deviation of 0.35%, 68% of the shots will be between 847 m/s and 853 m/s
        ACE_muzzleVelocityVariationSD = 0.15;

        // Array of muzzle velocity shifts in m/s with 11 data points from -15 °C to 35 °C
        // Example: At 0°C the shift will be -21.0
        ACE_ammoTempMuzzleVelocityShifts[] = {0,0,0,0,0,0,0,0,0,0,0};

        // Array of muzzle velocities (same size as barrel length array)
        ACE_muzzleVelocities[] = {925};

        // Array of barrel lengths (same size as muzzle velocity array)
        // Example, when shooting with the M4 barrel (`368.3`mm).
        // The length is between the 5th and 6th barrelLengths (`360.68, 391.16`).
        // So the muzzle velocity will be between 5th and 6th muzzleVelocities (`866, 878`).
        ACE_barrelLengths[] = {607};
    };
    class OPTRE_B_127x40_Ball : B_762x51_Ball
    {
        // Standard deviation of the muzzle velocity variation in percent
        // Example: With a muzzle velocity of 850 m/s and a standard deviation of 0.35%, 68% of the shots will be between 847 m/s and 853 m/s
        ACE_muzzleVelocityVariationSD = 0.05;

        // Array of muzzle velocity shifts in m/s with 11 data points from -15 °C to 35 °C
        // Example: At 0°C the shift will be -21.0
        ACE_ammoTempMuzzleVelocityShifts[] = {0,0,0,0,0,0,0,0,0,0,0};

        // Array of muzzle velocities (same size as barrel length array)
        ACE_muzzleVelocities[] = {600};

        // Array of barrel lengths (same size as muzzle velocity array)
        // Example, when shooting with the M4 barrel (`368.3`mm).
        // The length is between the 5th and 6th barrelLengths (`360.68, 391.16`).
        // So the muzzle velocity will be between 5th and 6th muzzleVelocities (`866, 878`).
        ACE_barrelLengths[] = {124};
    };

    class B_127x99_Ball;
    class OPTRE_B_145x114_APFSDS: B_127x99_Ball
    {
        // Standard deviation of the muzzle velocity variation in percent
        // Example: With a muzzle velocity of 850 m/s and a standard deviation of 0.35%, 68% of the shots will be between 847 m/s and 853 m/s
        ACE_muzzleVelocityVariationSD = 0.0;

        // Array of muzzle velocity shifts in m/s with 11 data points from -15 °C to 35 °C
        // Example: At 0°C the shift will be -21.0
        ACE_ammoTempMuzzleVelocityShifts[] = {0,0,0,0,0,0,0,0,0,0,0};

        // Array of muzzle velocities (same size as barrel length array)
        ACE_muzzleVelocities[] = {2000};

        // Array of barrel lengths (same size as muzzle velocity array)
        // Example, when shooting with the M4 barrel (`368.3`mm).
        // The length is between the 5th and 6th barrelLengths (`360.68, 391.16`).
        // So the muzzle velocity will be between 5th and 6th muzzleVelocities (`866, 878`).
        ACE_barrelLengths[] = {1062};
    };
};
