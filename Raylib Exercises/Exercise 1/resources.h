#pragma once
#include "raylib.h"

//function declarations
void testRender();
void drawMyFps();

//namespaces
namespace FPS {
    extern Font fpsFont;
    extern Vector2 fpsPos;

    void load();

    void unload();
}

namespace GameText {
    extern Font textFont;
    extern Vector2 textPos;

    void load();

    void unload();
}

