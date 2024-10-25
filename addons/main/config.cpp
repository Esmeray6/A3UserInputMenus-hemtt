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

#include "functions\_macros.inc"
#include "functions\_defines.inc"

class CfgFunctions {
    class CAU_UserInputMenus {
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
#include "displayColorPicker.hpp"
#include "displayGuiMessage.hpp"
#include "displayListbox.hpp"
#include "displayListboxMulti.hpp"
#include "displayProgressBar.hpp"
#include "displaySlider.hpp"
#include "displayText.hpp"
#include "displayTextMulti.hpp" 