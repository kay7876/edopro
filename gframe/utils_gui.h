#ifndef UTILS_GUI_H
#define UTILS_GUI_H

namespace irr {
class IrrlichtDevice;
}

namespace ygo {

struct GameConfig;

namespace GUIUtils {

irr::IrrlichtDevice* CreateDevice(GameConfig* configs);
void ChangeCursor(irr::IrrlichtDevice* device, /*irr::gui::ECURSOR_ICON*/ int icon);
bool TakeScreenshot(irr::IrrlichtDevice* device);
void ToggleFullscreen(irr::IrrlichtDevice* device, bool& fullscreen);

}

}

#endif