class ACE_Medical_Treatment_Actions 
{
    // - Bandages -------------------------------------------------------------
    class BasicBandage;
    class OPTRE_Medigel: BasicBandage 
    {
        displayName = "Apply Medigel";
        displayNameProgress = "Applying Medigel...";
        treatmentTime = 5;
        items[] = {"OPTRE_Medigel"};
        callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
        icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
        litter[] = 
        {
            {},
            {"ACE_MedicalLitter_Medigel"}
        };
    };
    class OPTRE_Biofoam: BasicBandage 
    {
        displayName = "Inject Biofoam";
        displayNameProgress = "Injecting Biofoam...";
        treatmentTime = 8;
        items[] = {"OPTRE_Biofoam"};
        callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
        animationCaller = "AinvPknlMstpSlayWrflDnon_medic1";
        icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
        litter[] = 
        {
            {},
            {"ACE_MedicalLitter_Biofoam"}
        };
    };

    // - Misc -----------------------------------------------------------------
    class PersonalAidKit;
    class OPTRE_Medkit: PersonalAidKit {
        displayName = "Use Medkit"; // TODO: Localize
        displayNameProgress = "Using Medkit..."; // TODO: Localize
        items[] = {"OPTRE_MedKit"};
        icon = "OPTRE_Weapons\Items\icons\medkit.paa";
        litter[] = 
        {
            {},
            {"ACE_MedicalLitter_Medkit"}
        };
    };      
};