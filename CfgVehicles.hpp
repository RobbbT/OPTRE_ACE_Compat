class CfgVehicles
{

    /*-------------Medical Engine Addon-------------*/
    //Ace Hitpoints
    class B_Soldier_base_F;
    class OPTRE_UNSC_Soldier_Base: B_Soldier_base_F
    {
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor = 6;
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 5;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 5;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 5;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 0.3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };

            ADD_ACE_HITPOINTS(2,2);
        };
        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
        minTotalDamageThreshold = 0.001;
        impactDamageMultiplier = 0.5;
    };
    class OPTRE_UNSC_Army_Soldier_WDL: OPTRE_UNSC_Soldier_Base
    {
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor = 6;
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 5;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 5;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 5;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 0.3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };

            ADD_ACE_HITPOINTS(2,2);

        };
    };
    class OPTRE_UNSC_Army_Soldier_DressGray: OPTRE_UNSC_Army_Soldier_WDL {};


    /*------------- Addon-------------*/
    // Medical Litter Classes
    class ACE_MedicalLitterBase;
    class ACE_MedicalLitter_Biofoam: ACE_MedicalLitterBase
    {
        model = "\OPTRE_ACE_Compat\data\BiofoamLitter.p3d";
    };
    class OPTRE_ACE_MedicalLitter_Medigel: ACE_MedicalLitterBase
    {
        model = "\OPTRE_Weapons\Items\Medigel.p3d";
    };
    class OPTRE_ACE_MedicalLitter_Medkit: ACE_MedicalLitterBase
    {
        model = "\OPTRE_Weapons\Items\MedKit.p3d";
    };
    //Treatment Items




    class Item_Base_F;
    class ACE_fieldDressingItem;
    class OPTRE_BiofoamItem: ACE_fieldDressingItem
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Biofoam";
        author = "Article 2 Studios";
        vehicleClass = "Items";
        class TransportItems
        {
            MACRO_ADDITEM(OPTRE_Biofoam,1);
        };
    };
    class OPTRE_MediGelItem: ACE_fieldDressingItem
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Medigel";
        author = "Article 2 Studios";
        vehicleClass = "Items";
        class TransportItems
        {
            MACRO_ADDITEM(OPTRE_Medigel,1);
        };
    };
    class OPTRE_MedkitItem: Item_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "OPTRE Medkit";
        author = "Article 2 Studios";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(OPTRE_Medkit,1);
        };
    };

    /* Vehicle compatibility (cookoff, cargo, refuel, repair, fast roping) */
    class Car_F;
    class StaticMGWeapon;
    class Quadbike_01_base_F;
    class OPTRE_M12_base;
    class OPTRE_Genet_base: Car_F
    {
        ace_cargo_space = 1;
    };
    class OPTRE_M274_Base: Quadbike_01_base_F
    {
        ace_cargo_space = 1;
    };

    class OPTRE_M12_FAV: OPTRE_M12_base
    {
        ace_cargo_space = 5;
    };
    class OPTRE_M914_RV: OPTRE_M12_FAV
    {
        ace_repair_canRepair = 1;
        transportRepair = 0;
    };

    class Truck_01_base_F;
    class OPTRE_m1087_stallion_base: Truck_01_base_F
    {
        ace_cargo_space = 12;
    };
    class OPTRE_m1087_stallion_unsc_repair: OPTRE_m1087_stallion_base
    {
        ace_cargo_space = 4;

        ace_repair_canRepair = 1;
        transportRepair = 0;
    };
    class OPTRE_m1087_stallion_unsc_resupply: OPTRE_m1087_stallion_base
    {
        ace_cargo_space = 4;

        ace_rearm_defaultSupply = 20000;
        transportAmmo = 0;
    };
    class OPTRE_m1087_stallion_unsc_refuel: OPTRE_m1087_stallion_base
    {
        ace_cargo_space = 4;

        ace_refuel_fuelCargo = 20000;
        transportFuel = 0;
    };

    class APC_Wheeled_01_base_F;
    class OPTRE_M413_base: APC_Wheeled_01_base_F
    {
        ace_cargo_space = 10;
        ace_cookoff_probability = 0.25;
    };

    class Tank_F;
    class OPTRE_M313_Base: Tank_F
    {
        ace_cargo_space = 25;
        ace_cookoff_probability = 0;
        ace_rearm_defaultSupply = 20000;

        ace_refuel_fuelCargo = 20000;
        // ace_refuel_hooks[] = {{0.38,-3.17,-.7},{-0.41,-3.17,-.7}}; TODO: Fix/remove

        ace_repair_canRepair = 1;
    };
    class OPTRE_M808B_base: Tank_F
    {
        ace_cookoff_probability = 0.5;
    };

    class Helicopter_Base_H;
    class OPTRE_falcon_base: Helicopter_Base_H
    {
        ace_cargo_space = 6;
        ace_cargo_hasCargo = 1;

        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
    };
    class OPTRE_Hornet_base: Helicopter_Base_H
    {
        ace_cargo_space = 2;
        ace_cargo_hasCargo = 1;

        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
    };
    class OPTRE_Pelican_F: Helicopter_Base_H
    {
        ace_cargo_space = 15;
        ace_cargo_hasCargo = 1;

        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
    };

    class Plane_Base_F;
    class OPTRE_Longsword_Base: Plane_Base_F
    {
        ace_cargo_space = 8;
        ace_cargo_hasCargo = 1;
    };
    class OPTRE_EscapePod_Base: Plane_Base_F
    {
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
    };


    /* ACE Arsenal backpack compatibility (1 = hidden and 0 = shown) */
    class B_Bergen_Base;
    class OPTRE_ILCS_Rucksack_Black: B_Bergen_Base
    {
        ace_arsenal_hide = 0;
    };


    /* ACE Explosive placement compatibility */
    class Items_base_F;
    class ACE_Explosives_Place: Items_base_F
    {
        class ACE_Actions
        {
            class ACE_MAinActions;
        };
    };
    class OPTRE_Placed_C12: ACE_Explosives_Place
    {
        displayName = "C12 Explosive";
        model = "\OPTRE_Weapons\charges\c12G.p3d";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.1,-0.1,0.05]";
            };
        };
    };
    class OPTRE_Placed_UNSC_Mine: ACE_Explosives_Place
    {
        displayName = "UNSC Land Mine";
        model = "\OPTRE_Weapons\charges\UNSCMine.p3d";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.1,-0.1,0.05]";
            };
        };
    };
    class OPTRE_Placed_C7: ACE_Explosives_Place
    {
        displayName = "C7 Explosive Foam";
        model = "\OPTRE_Weapons\charges\C7Can.p3d";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.1,-0.1,0.05]";
            };
        };
    };
    class OPTRE_Placed_M168: ACE_Explosives_Place
    {
        displayName = "M168 Demolition Charge";
        model = "\OPTRE_Weapons\charges\m168g.p3d";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.1,-0.1,0.05]";
            };
        };
    };
    class OPTRE_Placed_M41_IED: OPTRE_Placed_M168
    {
        displayName = "M41 IED";
        model = "\OPTRE_Weapons\charges\m41g.p3d";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.1,-0.1,0.05]";
            };
        };
    };
    class OPTRE_Placed_M41_IED_B: OPTRE_Placed_M41_IED
    {
        displayName = "M41 IED (Buried)";
        model = "\OPTRE_Weapons\charges\m41_b.p3d";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.1,-0.1,0.05]";
            };
        };
    };
};