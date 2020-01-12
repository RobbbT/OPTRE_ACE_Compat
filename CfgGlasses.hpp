class CfgGlasses
{
    /* Glasses compatibility */
    class G_Balaclava_blk;
    class OPTRE_Glasses_Cigarette: G_Balaclava_blk
    {
        ACE_Color[] = {0,0,0};
        ACE_TintAmount = 0;
        ACE_Overlay = "";
        ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ACE_OverlayCracked = "";
        ACE_Resistance = 0;
        ACE_Protection = 0;
        ACE_DustPath = "";
    };
    class OPTRE_HUD_Glasses: G_Balaclava_blk
    {
        ACE_Color[] = {0,0,0};
        ACE_TintAmount = 0;
        ACE_Overlay = "";
        ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ACE_OverlayCracked = "";
        ACE_Resistance = 2;
        ACE_Protection = 1;
        ACE_DustPath = "";
    };
    class G_Tactical_Clear;
    class OPTRE_EyePiece: G_Tactical_Clear
    {
        ACE_Color[] = {0,0,0};
        ACE_TintAmount = 0;
        ACE_Overlay = "";
        ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ACE_OverlayCracked = "";
        ACE_Resistance = 0;
        ACE_Protection = 0;
        ACE_DustPath = "";
    };
};
