/*──────────────────────────────────────────────────────┐
│   Author: Connor                                      │
│   Steam:  https://steamcommunity.com/id/_connor       │
│   Github: https://github.com/ConnorAU                 │
│                                                       │
│   Please do not modify or remove this comment block   │
└──────────────────────────────────────────────────────*/

class CfgPatches {
    class CAU_UserInputMenus {
        name="UserInputMenus";
        author="ConnorAU";
        url="https://github.com/ConnorAU/A3UserInputMenus";

        requiredVersion=0.01;
        requiredAddons[]={"A3_3DEN"};
        units[]={};
        weapons[]={};
    };
};

#include "_macros.inc"
#include "_defines.inc"

class CfgFunctions {
    class UIM {
        class Functions {
            PATHTO_FNC(displayColorPicker);
            PATHTO_FNC(displayGuiMessage);
            PATHTO_FNC(displayListBox);
            PATHTO_FNC(displayProgressBar);
            PATHTO_FNC(displaySlider);
            PATHTO_FNC(displayText);
        };
    };
};

#include "controls.hpp"
#include "fnc_displayColorPicker.hpp"
#include "fnc_displayGuiMessage.hpp"
#include "fnc_displayListbox.hpp"
#include "fnc_displayListboxMulti.hpp"
#include "fnc_displayProgressBar.hpp"
#include "fnc_displaySlider.hpp"
#include "fnc_displayText.hpp"
#include "fnc_displayTextMulti.hpp" 