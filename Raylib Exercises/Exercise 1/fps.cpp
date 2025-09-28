#include "raylib.h"
#include "resources.h"
#include <string>

void drawMyFps() {
    int myFPS{GetFPS()};
    std::string stringFPS{std::to_string(myFPS)};
    DrawTextEx(FPS::fpsFont, stringFPS.data(), FPS::fpsPos, 32, 0, RED);
}
