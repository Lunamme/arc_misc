// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Uniforms
//		* CUP Weapons
//		* Wearable Antennas

//	Created by: AChesheireCat, edited by Freddo

class baseMan {
	displayName = "Unarmed";
	uniform[] = {
		"CUP_U_CRYE_G3C_MC_US",
		"CUP_U_CRYE_G3C_MC_US_V2"
	};
	vest[] = {"CUP_V_CPC_lightbelt_mc"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {"CUP_NVG_PVS15_black"};
	faces[] = {};
	insignias[] = {};

	primaryWeapon[] = {};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};

	secondaryWeapon[] = {};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {};
	sidearmAttachments[] = {};

	magazines[] = {};
	items[] = {
		MEDICAL_R ,
		"ACE_IR_Strobe_Item",
		"ACE_Flashlight_XL50",
		"ACE_microDAGR"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};

	backpackItems[] = {};

	traits[] = {};

	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	backpack[] = {"B_AssaultPack_mcamo"};
	vest[] = {
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_V_CPC_Fast_mc"
	};
	headgear[] = {
		"CUP_H_OpsCore_Covered_MCAM_US",
		"CUP_H_OpsCore_Covered_MCAM",
		"CUP_H_OpsCore_Covered_MCAM_NoHS",
		"CUP_H_OpsCore_Spray_US",
		"CUP_H_OpsCore_Spray",
		"CUP_H_OpsCore_Spray_NoHS",
		"CUP_H_OpsCore_Covered_MCAM_US_SF",
		"CUP_H_OpsCore_Covered_MCAM_SF",
		"CUP_H_OpsCore_Spray_US_SF",
		"CUP_H_OpsCore_Spray_SF"
	};
	primaryWeapon[] = {
		"CUP_arifle_Mk17_STD",
		"CUP_arifle_Mk17_STD_AFG",
		"CUP_arifle_Mk17_STD_FG",
		"CUP_arifle_Mk17_STD_SFG"
	};
	scope[] = {
		"cup_optic_eotech553_coyote",
		"cup_optic_microt1",
		"cup_optic_compm2_coyote"
	};
	attachment[] = {
		"cup_acc_anpeq_15_tan_top",
		"cup_acc_anpeq_15_flashlight_tan_l",
		"cup_acc_anpeq_15",
		"cup_acc_anpeq_15_top_flashlight_tan_l"
	};
	magazines[] = {
		LIST_8("CUP_20Rnd_762x51_B_SCAR"),
		LIST_2("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
		"HandGrenade",
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {
		"CUP_V_CPC_weaponsbelt_mc",
		"CUP_V_CPC_weapons_mc"
	};
	backPack[] = {"B_AssaultPack_sgg"};
	primaryWeapon[] = {
		"CUP_arifle_Mk17_STD_EGLM"
	};
	attachment[] = {
		"cup_acc_anpeq_15_tan_top",
		"cup_acc_anpeq_15",
	};
	magazines[] += {
		LIST_10("CUP_1Rnd_HEDP_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {
		"CUP_arifle_Mk17_CQC",
		"CUP_arifle_Mk17_CQC_AFG",
		"CUP_arifle_Mk17_CQC_FG",
		"CUP_arifle_Mk17_CQC_SFG"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {
		"CUP_V_CPC_medicalbelt_mc",
		"CUP_V_CPC_medical_mc"
	};
	backpack[] = {"B_AssaultPack_mcamo"};
	traits[] = {"medic"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	vest[] = {
		"CUP_V_CPC_light_mc",
		"CUP_V_CPC_lightbelt_mc"
	};
	primaryWeapon[] = {"CUP_arifle_mk18_black"};
	scope[] = {"cup_optic_microt1"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		"HandGrenade",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	vest[] = {
		"CUP_V_CPC_tlbelt_mc",
		"CUP_V_CPC_tl_mc"
	};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Yardage450"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {
		"CUP_V_CPC_tlbelt_mc",
		"CUP_V_CPC_tl_mc"
	};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	sidearmAttachments[] = {"optic_mrd"};
	magazines[] += {
		LIST_3("CUP_21Rnd_9x19_M17_Coyote"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellGreen"),
		LIST_5("ACE_Chemlight_IR")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Vector"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"H_MilCap_grn"};
	vest[] = {"CUP_V_CPC_light_mc"};
};

class fac : ftl {
	displayName = "Forward Air Controller";
	goggles[] = {"antenna_long_two_face"};
	vest[] = {"CUP_V_CPC_communicationsbelt_mc"};
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {FAC_GEAR};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_SOFLAM",
		"ItemRadio"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_CPC_lightbelt_mc"};
	backpack[] = {"B_AssaultPack_mcamo"};
	primaryWeapon[] = {"CUP_lmg_Mk48_tan"};
	scope[] = {"cup_optic_eotech553_coyote"};
	attachment[] = {"cup_acc_anpeq_15"};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	sidearmAttachments[] = {"optic_mrd"};
	magazines[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_21Rnd_9x19_M17_Coyote")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_Kitbag_mcamo"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	items[] += {"ACE_EntrenchingTool"};
	linkedItems[] += {"ACE_Yardage450"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	vest[] = {"CUP_V_CPC_lightbelt_mc"};
	backpack[] = {"B_AssaultPack_mcamo"};
	primaryWeapon[] = {
		"CUP_srifle_M110",
		"CUP_srifle_m110_kac"
	};
	scope[] = {
		"cup_optic_leupoldmk4",
		"cup_optic_leupoldmk4_10x40_lrt_desert"
	};
	attachment[] = {"cup_acc_anpeq_15"};
	silencer[] = {"cup_muzzle_snds_m110"};
	bipod[] = {"cup_bipod_vltor_modpod"};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	sidearmAttachments[] = {
		"optic_mrd"
	};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	magazines[] = {
		LIST_6("CUP_20Rnd_762x51_B_M110"),
		LIST_3("CUP_21Rnd_9x19_M17_Coyote"),
		"HandGrenade",
		"SmokeShell"
	};
	backpackItems[] = {
		"ACE_SpottingScope",
		"ACE_Tripod"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M240_B"};
	scope[] = {"cup_optic_elcan_specterdr_black"};
	backPack[] = {"B_Kitbag_mcamo"};
	magazines[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_3("CUP_21Rnd_9x19_M17_Coyote")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Yardage450",
		"ItemRadio"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"B_Kitbag_mcamo"};
	secondaryWeapon[] = {"launch_MRAWS_green_F"};
	secondaryAttachments[] = {"cup_acc_anpeq_15"};
	magazines[] += {
		LIST_2("CUP_MAAWS_HEDP_M"),
		"CUP_MAAWS_HEAT_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_mcamo"};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Kitbag_mcamo"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Vector"
	};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backpack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] += {"CUP_Javelin_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_Carryall_mcamo"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Vector"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_mcamo"};
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
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_3("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
	linkedItems[] += {"Rangefinder"};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_lsh"};
	vest[] = {"V_Chestrig_rgr"};
	backpack[] = {"B_Carryall_mcamo"};
	hmd[] = {"CUP_NVG_GPNVG_black"};
	primaryWeapon[] = {"CUP_srifle_M110"};
	attachment[] = {"cup_acc_anpeq_15"};
	scope[] = {"cup_optic_leupoldmk4"};
	silencer[] = {"cup_muzzle_snds_m110"};
	bipod[] = {"cup_bipod_vltor_modpod"};
	sidearmWeapon[] = {"CUP_hgun_Glock17_blk"};
	sidearmAttachments[] = {
		"optic_mrd"
	};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	magazines[] = {
		LIST_6("CUP_20Rnd_762x51_B_M110"),
		LIST_2("HandGrenade"),
		"SmokeShell",
		"SmokeShellGreen",
		LIST_3("CUP_17Rnd_9x19_glock17")
	};
	backpackItems[] = {
		"ACE_EntrenchingTool",
		"ACE_Tripod"
	};
	linkedItems[] += {"ItemGPS"};
};

class sp : r {
	displayName = "Spotter";
	uniform[] = {"U_B_FullGhillie_lsh"};
	vest[] = {"V_Chestrig_rgr"};
	backpack[] = {"B_Kitbag_mcamo"};
	silencer[] = {"muzzle_snds_b_snd_f"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	magazines[] += {"Laserbatteries"};
	backpackItems[] = {
		LIST_4("CUP_20Rnd_762x51_B_M110"),
		"ACE_SpottingScope",
		"ACRE_VHF30108SPIKE",
		"ACE_Vector"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_SOFLAM",
		"B_UavTerminal"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {
		"CUP_U_B_USArmy_ACU_Gloves_OEFCP",
		"CUP_U_B_USArmy_ACU_OEFCP"
	};
	vest[] = {"CUP_V_CPC_light_mc"};
	hmd[] = {};
	primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_black"};
	scope[] = {};
	attachment[] = {};
	backpack[] = {};
	headgear[] = {"CUP_H_CVC"};
	backpackItems[] = {};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_mcamo"};
	backpackItems[] = {"ToolKit"};
	linkedItems[] += {"ItemGPS"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	headgear[] = {
		"H_CrewHelmetHeli_B",
		"H_CrewHelmetHeli_O",
		"H_PilotHelmetHeli_O"
	};
	uniform[] = {
		"CUP_U_B_USArmy_ACU_Gloves_OEFCP",
		"CUP_U_B_USArmy_ACU_OEFCP"
	};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
	primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_black"};
	scope[] = {};
	attachment[] = {};
	backPack[] = {};
	items[] += {"ACE_MapTools"};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {
		"H_PilotHelmetHeli_O",
		"H_PilotHelmetHeli_B"
	};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
	backPack[] = {};
	backpackItems[] = {};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	backpack[] = {"B_AssaultPack_mcamo"};
	traits[] = {"engineer"};
	backpackItems[] = {"ToolKit"};
	linkedItems[] += {"ItemGPS"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	hmd[] = {};
	headgear[] = {"H_PilotHelmetFighter_B"};
	uniform[] = {"U_B_PilotCoveralls"};
	vest[] = {"V_Rangemaster_belt"};
	backpack[] = {"B_Parachute"};
	primaryWeapon[] = {"CUP_arifle_mk18_black"};
	sidearmWeapon[] = {"CUP_hgun_M9A1"};
	magazines[] += {
		"SmokeShellPurple",
		LIST_3("CUP_15Rnd_9x19_M9"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Mk16")
	};
	traits[] = {"engineer"};
	linkedItems[] += {"B_UavTerminal"};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	vest[] = {"CUP_V_CPC_communicationsbelt_mc"};
	backpack[] = {"B_Carryall_mcamo"};
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
	vest[] = {"CUP_V_CPC_communications_mc"};
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
	magazines[] = {
		LIST_4("CUP_20Rnd_762x51_B_SCAR"),
		LIST_2("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
		"HandGrenade",
		LIST_2("SmokeShell")
	};
};
