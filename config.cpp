#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"OPTRE_Weapons", "OPTRE_UNSC_Units", "OPTRE_MJOLNIR", "OPTRE_MJOLNIR_data_anims", "OPTRE_Ins_Units", "ace_common", "ace_explosives", "ace_medical_engine", "ace_medical_treatment"};
        author = "Article 2 Studios";
        url = ;
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgAmmo.hpp"
#include "CfgExtendedAnimation.hpp"
#include "CfgMoves.hpp"
#include "CfgGestures.hpp"
#include "CfgGlasses.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
