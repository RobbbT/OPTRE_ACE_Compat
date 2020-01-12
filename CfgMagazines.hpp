
class CfgMagazines
{
    /* Explosives compatibility */
    class CA_Magazine;
    class C12_Remote_Mag: CA_Magazine
    {
        ACE_Explosives_Placeable = 1;  // Can be placed
        useAction = 0;  // Disable the vanilla interaction
        ACE_Explosives_SetupObject = "OPTRE_Placed_C12";  // The object placed before the explosive is armed
        ACE_Explosives_DelayTime = 1.5;  // Seconds between trigger activation and explosion
        class ACE_Triggers
        {  // Trigger configurations
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};  // Triggers that can be used
            class Timer
            {
                FuseTime = 0.5;  // Time for the fuse to burn
            };
            class Command
            {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };
    class C7_Remote_Mag: CA_Magazine
    {
        ACE_Explosives_Placeable = 1;
        useAction = 0;
        ACE_Explosives_SetupObject = "OPTRE_Placed_C7";
        ACE_Explosives_DelayTime = 1.5;
        class ACE_Triggers
        {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer
            {
                FuseTime = 0.5;
            };
            class Command
            {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };
    class M168_Remote_Mag: CA_Magazine
    {
        ACE_Explosives_Placeable = 1;
        useAction = 0;
        ACE_Explosives_SetupObject = "OPTRE_Placed_M168";
        ACE_Explosives_DelayTime = 1.5;
        class ACE_Triggers
        {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer
            {
                FuseTime = 0.5;
            };
            class Command
            {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };
    class M41_IED_Remote_Mag: CA_Magazine
    {
        ACE_Explosives_Placeable = 1;
        useAction = 0;
        ACE_Explosives_SetupObject = "OPTRE_Placed_M41_IED";
        ACE_Explosives_DelayTime = 1.5;
        class ACE_Triggers
        {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch","PressurePlate", "Cellphone"};
            class Timer
            {
                FuseTime = 2;
            };
            class Command
            {
                FuseTime = 2;
            };
            class PressurePlate
            {
                digDistance = 0;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
            class Cellphone: Command {};
        };
    };
    class M41_IED_B_Remote_Mag: M41_IED_Remote_Mag
    {
        ACE_Explosives_SetupObject = "OPTRE_Placed_M41_IED_B";
    };

    class ATMine_Range_Mag;
    class UNSCMine_Range_Mag: ATMine_Range_Mag
    {
        ACE_Explosives_Placeable = 1;
        useAction = 0;
        ACE_Explosives_SetupObject = "OPTRE_Placed_UNSC_Mine";
        ACE_Explosives_DelayTime = 1.5;
        class ACE_Triggers
        {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate
            {
                digDistance = 0.06;
            };
        };
    };
};
