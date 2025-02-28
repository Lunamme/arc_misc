// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"cwr3_o_uniform_m1983_ttsko",
		"cwr3_o_uniform_m1983_rolled_ttsko"
	};
	vest[] = {"cwr3_o_vest_6b2"};
	backpack[] = {};
	headgear[] = {"cwr3_o_headgear_sidecap_m1973_field"};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:russian"};
	// Leave empty to not change faces.
	insignias[] = {};
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
	items[] = { MEDICAL_R, "ACE_Flashlight_KSF1" };
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	// These are put into the backpack
	backpackItems[] = {};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {
		"cwr3_o_headgear_ssh68_net",
		"cwr3_o_headgear_ssh68_camo",
		"cwr3_o_headgear_ssh68"
	};
	vest[] = {"cwr3_o_vest_6b2_ak74"};
	backpack[] = {"cwr3_o_backpack_harness_roll"};
	primaryWeapon[] = {"CUP_arifle_AK74_Early"};
	magazines[] = {
		"CUP_HandGrenade_RGD5",
		"SmokeShell",
		LIST_6("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M")
	};
	code = "                                              \
		if (sunOrMoon != 1) then {                        \
			_this addPrimaryWeaponItem 'acc_flashlight';  \
		};                                                \
	";
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_arifle_AK74_GL_Early"};
	vest[] = {"cwr3_o_vest_6b2_gl"};
	magazines[] += {
		LIST_4("CUP_1Rnd_HE_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS74_Early"};
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {"cwr3_o_vest_6b2_medic"};
	traits[] = {"medic"};
	backpack[] = {"cwr3_o_backpack_veshmeshok_medic_empty"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
	magazines[] = {
		"CUP_HandGrenade_RGD5",
		"SmokeShell",
		LIST_6("CUP_20Rnd_545x39_AKSU_M"),
		LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M")
	};
	linkedItems[] += {"Binocular"};
	code = "                                              \
		if (sunOrMoon != 1) then {                        \
			_this addPrimaryWeaponItem 'acc_flashlight';  \
			_this addMagazine 'CUP_IlumFlareRed_GP25_M';  \
			_this addMagazine 'CUP_IlumFlareRed_GP25_M';  \
		};                                                \
	";
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {"cwr3_o_vest_6b2_officer"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] += {
		LIST_2("CUP_8Rnd_9x18_Makarov_M")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"cwr3_o_headgear_officer_cap_field"};
};

class fac : sl {
	displayName = "Forward Air Controller";
	backpack[] = {"cwr3_o_backpack_rd54_r148"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] += {"Laserdesignator"};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	magazines[] = {
		"CUP_HandGrenade_RGD5",
		LIST_10("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG26"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"H_Booniehat_khk"};
	vest[] = {"cwr3_o_vest_6b2_svd"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1_1_open"};
	magazines[] = {
		LIST_8("CUP_10Rnd_762x54_SVD_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {"cwr3_o_vest_harness_mg"};
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
	primaryWeapon[] = {"CUP_lmg_PKM"};
	magazines[] = {
		"CUP_HandGrenade_RGD5",
		LIST_8("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	secondaryWeapon[] = {"CUP_DSHKM_carry"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_6("ace_csw_50Rnd_127x108_mag"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v2"};
	magazines[] += {
		LIST_2("CUP_PG7VL_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_4("CUP_PG7VL_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"CUP_launch_Metis"};
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_3("CUP_AT13_M")
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_3("CUP_AT13_M")
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_3("CUP_AT13_M"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_2b14_carry"};
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

	linkedItems[] += {
		"Binocular"
	};
};

class samg : r {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
};

class samag : r {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
	linkedItems[] += {
		"Binocular"
	};
};

class sn : dm {
	displayName = "Sniper";
	uniform[] = {"CUP_U_O_TK_Ghillie_Top"};
	vest[] = {"cwr3_o_vest_chicom_beltkit_light_ak74"};
	headgear[] = {};
	sidearmWeapon[] = {"CUP_hgun_PB6P9"};
	sidearmAttachments[] = {"cup_muzzle_pb6p9"};
	magazines[] += {
		LIST_4("CUP_8Rnd_9x18_MakarovSD_M")
	};
	code = "                                              \
		if (sunOrMoon != 1) then {                        \
			_this addPrimaryWeaponItem 'cup_optic_nspu';  \
		};                                                \
	";
};

class sp : g {
	displayName = "Spotter";
	backpack[] = {"cwr3_o_backpack_rd54_r148"};
	uniform[] = {"CUP_U_O_TK_Ghillie_Top"};
	vest[] = {"cwr3_o_vest_chicom_beltkit_light_ak74"};
	headgear[] = {};
	silencer[] = {"cup_muzzle_bizon"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard"
	};
	linkedItems[] += {
		"Laserdesignator"
	};
};

class vg : car {
	displayName = "Vehicle Gunner";
	uniform[] = {"cwr3_o_uniform_m1982_tanker"};
	vest[] = {"CUP_V_CDF_OfficerBelt"};
	headgear[] = {"cwr3_o_headgear_tsh3"};
	primaryWeapon[] = {};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] = {
		LIST_4("CUP_8Rnd_9x18_Makarov_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	vest[] = {"CUP_V_CDF_OfficerBelt2"};
	primaryWeapon[] = {
		"CUP_arifle_AKS74_Early",
		"CUP_arifle_AKS74U"
	};
	magazines[] += {
		LIST_3("CUP_30Rnd_545x39_AK_M")
	};
	linkedItems[] += {"Binocular"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_o_backpack_gasmask"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"cwr3_o_uniform_pilot_ttsko"};
	vest[] = {"CUP_V_CDF_OfficerBelt"};
	backpack[] = {};
	headgear[] = {
		"cwr3_o_headgear_zsh5",
		"cwr3_o_headgear_zsh5_visor"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_545x39_AK_M"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	backpack[] = {"cwr3_o_backpack_gasmask"};
	traits[] = {"engineer"};
	backpackItems[] = {"ToolKit"};
};

class jp : hc {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	backpack[] = {"CUP_T10_Parachute_backpack"};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"B_Carryall_oli"};
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
	linkedItems[] += {"O_UavTerminal"};
};
