/*
	Author:
		Freddo

	Dependencies:
		* Wearable Antennas
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		LIST_2("U_B_T_Soldier_F"),
		LIST_2("U_B_T_Soldier_SL_F"),
		"U_B_T_Soldier_AR_F"
	};
	vest[] = {"V_PlateCarrier1_tna_F","V_PlateCarrier2_tna_F"};
	backpack[] = {"B_AssaultPack_tna_F"};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:african", "faceset:caucasian"};
	// Leave empty to not change faces.
	insignias[] = {"111thID"};
	// Leave empty to not change insignias

	// All randomized
	primaryWeapon[] = {};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};
	// Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

	// Only *Weapons[] arrays are randomized
	secondaryWeapon[] = {};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {};
	sidearmAttachments[] = {};
	// Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

	// These are added to the uniform or vest
	magazines[] = {};
	items[] = { MEDICAL_R };
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch"
	};

	// These are put into the backpack
	backpackItems[] = {};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "if (sunOrMoon < 1) then {_this linkItem 'NVGoggles_tna_F'};";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {"H_HelmetB_tna_F"};
	primaryWeapon[] = {"arifle_MX_khk_F"};
	scope[] = {"optic_aco"};
	attachment[] = {"acc_pointer_IR"};
	magazines[] = {
		LIST_9("30Rnd_65x39_caseless_khaki_mag"),
		LIST_2("30Rnd_65x39_caseless_khaki_mag_Tracer"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"V_PlateCarrierGL_tna_F"};
	primaryWeapon[] = {"arifle_MX_GL_khk_F"};
	magazines[] += {
		LIST_8("1Rnd_HE_Grenade_shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"arifle_MXC_khk_F"};
};

class cls : car {
	displayName = "Combat Life Saver";
	headgear[] = {"H_HelmetB_Light_tna_F"};
	traits[] = {"medic"};
	backpack[] = {"B_AssaultPack_tna_F"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"V_PlateCarrierSpec_tna_F"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	scope[] = {"optic_holosight_smg"};
	primaryWeapon[] = {"SMG_01_F"};
	magazines[] = {
		LIST_10("30Rnd_45ACP_Mag_SMG_01"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	headgear[] = {"H_HelmetB_Enh_tna_F"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	headgear[] = {"H_HelmetB_Enh_tna_F"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
	sidearmAttachments[] = {"optic_mrd_black"};
	magazines[] += {
		LIST_4("11Rnd_45ACP_Mag")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_VectorDay",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"H_MilCap_tna_F"};
};

class fac : co {
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator_03",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"arifle_MX_SW_khk_F"};
	bipod[] = {"bipod_01_f_khk"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
	magazines[] = {
		LIST_6("100Rnd_65x39_caseless_khaki_mag"),
		LIST_2("100Rnd_65x39_caseless_khaki_mag_tracer"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("11Rnd_45ACP_Mag")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_4("100Rnd_65x39_caseless_khaki_mag"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"launch_NLAW_F"};
};

class dm : r {
	displayName = "Designated Marksman (DLC)";
	primaryWeapon[] = {"srifle_DMR_03_khaki_F"};
	scope[] = {"optic_hamr_khk_f"};
	bipod[] = {"bipod_01_f_khk"};
	magazines[] = {
		LIST_11("20Rnd_762x51_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner (DLC)";
	primaryWeapon[] = {"MMG_02_black_F"};
	scope[] = {"optic_hamr"};
	bipod[] = {"bipod_01_f_blk"};
	magazines[] = {
		LIST_4("130Rnd_338_Mag"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("11Rnd_45ACP_Mag")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = {
		LIST_3("130Rnd_338_Mag")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("130Rnd_338_Mag"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backpack[] = {"B_Carryall_oli"};
	secondaryWeapon[] = {"ace_csw_staticHMGCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"B_FieldPack_oli"};
	secondaryWeapon[] = {"launch_MRAWS_green_F"};
	secondaryAttachments[] = {"acc_pointer_ir"};
	magazines[] += {
		LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = {
		LIST_3("MRAWS_HEAT_F"),
		LIST_2("MRAWS_HE_F")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_FieldPack_oli"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"launch_B_Titan_short_tna_F"};
	backpack[] = {"B_Carryall_oli"};
	magazines[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] += { MTR_GEAR };
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
	secondaryWeapon[] = {"launch_B_Titan_tna_F"};
	magazines[] += {
		LIST_3("Titan_AA")
	};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("Titan_AA")
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_T_Sniper_F"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"srifle_LRR_tna_F"};
	scope[] = {"optic_lrps_tna_f"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
	magazines[] = {
		LIST_7("7Rnd_408_Mag"),
		LIST_2("HandGrenade"),
		LIST_4("11Rnd_45ACP_Mag")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_B_T_Sniper_F"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	scope[] = {"optic_hamr_khk_f"};
	silencer[] = {"muzzle_snds_h_khk_f"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {"U_B_T_Soldier_SL_F"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"H_HelmetCrew_B"};
	magazines[] = {
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {"Binocular","ItemGPS"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_tna_F"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"U_B_HeliPilotCoveralls"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetHeli_B"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_tna_F"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"U_B_HeliPilotCoveralls"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetHeli_B"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"B_Kitbag_rgr"};
	items[] += {
		"ACE_wirecutter"
	};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class eng : logi {
	displayName = "Combat Engineer";
	traits[] += {"explosiveSpecialist"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_Clacker",
		"ACE_DefusalKit"
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
