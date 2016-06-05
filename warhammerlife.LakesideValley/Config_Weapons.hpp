/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "A3L_CZ550", "", 5000, -1 },
			{ "A3L_CZ550Scope", "", 300, -1},
            { "A3L_Glock17", "", 700, -1 },
            { "hgun_Rook40_F", "", 600, -1 }
        };
        mags[] = {
            { "A3L_CZ550Mag", "", 25 },
            { "A3L_Glock17mag", "", 50 },
            { "16Rnd_9x21_Mag", "", 45 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hlc_rifle_ak12", "", 25000, 0 },
            { "hlc_rifle_rpk", "", 30000, 0 },
            { "A3L_AK47", "", 50000, 0 },
            { "A3L_AK47s", "", 20000, 0 },
            { "A3L_AK47sgold", "", 3500, 0 },
            { "A3L_AKS74", "", 3600, 0 },
            { "A3L_TaurusGold", "", 7500, 0 },
            { "A3L_makarov", "", 1000, 0 },
			{ "A3L_SA61", "", 30000, 0 },
			{ "A3L_Taurus", "", 30000, 0 },
			{ "A3L_Uzi", "", 30000, 0 }
        };
        mags[] = {
            { "hlc_30Rnd_545x39_B_AK", "", 500 },
            { "hlc_75Rnd_762x39_m_rpk", "", 500 },
            { "A3L_AK47Mag", "", 500 },
            { "A3L_AK47sMag", "", 500 },
			{ "A3L_AK47sMag", "", 500 },
			{ "A3L_AK47sMag", "", 500 },
			{ "A3L_TaurusMag", "", 500 },
			{ "A3L_makarovMag", "", 500 },
			{ "A3L_SA61Mag", "", 500 },
			{ "A3L_TaurusMag", "", 500 },
			{ "A3L_UZIMag", "", 500 },
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Police Necessities";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 0, -1 },
            { "ItemGPS", "", 0, -1 },
            { "ToolKit", "", 0, -1 },
            { "FirstAidKit", "", 0, -1 },
            { "Medikit", "", 0, -1 },
            { "NVGoggles", "", 0, -1 }
        };
        mags[] = {
            { "26_cartridge", "", 0 }
        };
    };

    class cop_patrol {
        name = "Firearm Arsenal";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer!" };
        items[] = {
            { "hlc_rifle_Bushmaster300", "Bushmaster .300", 0, 0 },
            { "hlc_rifle_Colt727", "Colt AR15", 0, -1 },
            { "A3L_M9", "M9 Hadngun", 0, -1 },
			{ "Radar_Gun", "Speed Radar", 0, -1 },
			{ "Taser_26", "Taser", 0, -1 },
			{ "A3L_Glock17", "Glock 17", 0, -1 },
			{ "hgun_Rook40_F", "Rook 40", 0, -1 },
			{ "HandGrenade_Stone", "Flashbang", 0, -1 }
        };
        mags[] = {
            { "29rnd_300BLK_STANAG", "", 0 },
            { "30Rnd_556x45_Stanag", "", 0 },
			{ "A3L_M9Mag", "", 0 },
			{ "radar_record_tape", "", 0 },
			{ "26_cartridge", "", 0 },
			{ "A3L_Glock17mag", "", 0 },
			{ "16Rnd_9x21_Mag", "", 0 }
        };
    };

    class cop_sergeant {
        name = "Police SWAT Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a SWAT Officer!" };
        items[] = {
            { "hlc_smg_mp5a4", "", 0, -1 },
            { "hlc_rifle_samr2", "", 0, -1 }
        };
        mags[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 0 },
            { "30Rnd_556x45_Stanag", "", 0 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 0, 45 },
            { "Binocular", "", 0, -1 },
            { "ToolKit", "", 0, 75 },
            { "FirstAidKit", "", 0, 65 },
            { "Medikit", "", 0, 450 },
            { "NVGoggles", "", 0, 980 }
        };
        mags[] = {};
    };
};
