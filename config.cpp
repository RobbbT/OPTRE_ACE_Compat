#include "script_component.hpp"

class CfgPatches
{
    class OPTRE_ACE_Compat
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        version = 0.1;
        requiredAddons[] = {"OPTRE_Weapons", "OPTRE_UNSC_Units", "OPTRE_MJOLNIR", "OPTRE_MJOLNIR_data_anims", "OPTRE_Ins_Units", "ace_common", "ace_explosives", "ace_medical_engine", "ace_medical_treatment"};
        author = "Article 2 Studios";
        fileName = "OPTRE_ACE_Compat.pbo";
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
