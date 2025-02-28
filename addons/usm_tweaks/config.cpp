#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "ARC Misc: USM Tweaks";
        author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			QGVARMAIN(main),
			"us_military_units"
		};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"
