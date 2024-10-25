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

#include "controls.hpp"
#include "fnc_displayColorPicker.hpp"
#include "fnc_displayGuiMessage.hpp"
#include "fnc_displayListbox.hpp"
#include "fnc_displayListboxMulti.hpp"
#include "fnc_displayProgressBar.hpp"
#include "fnc_displaySlider.hpp"
#include "fnc_displayText.hpp"
#include "fnc_displayTextMulti.hpp"

class CfgFunctions {
    class UIM {
        class Category1 {
            #define UIM_FUNC(name) PATHTO_FNC(display##name##.sqf)
            UIM_FUNC(ColorPicker)
            UIM_FUNC(GuiMessage)
            UIM_FUNC(ListBox)
            UIM_FUNC(ProgressBar)
            UIM_FUNC(Slider)
            UIM_FUNC(Text)
            // PATHTO_FNC(displayColorPicker.sqf)
            // PATHTO_FNC(displayGuiMessage.sqf)
            // PATHTO_FNC(displayListBox.sqf)
            // PATHTO_FNC(displayProgressBar.sqf)
            // PATHTO_FNC(displaySlider.sqf)
            // PATHTO_FNC(displayText.sqf)
            #undef UIM_FUNC
        };
    };
};