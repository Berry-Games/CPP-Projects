#include <raylib.h>
#include "resources.h"


namespace FPS {
    Font fpsFont;
    Vector2 fpsPos;

    void load() {
        fpsFont = LoadFont("../resources/rimouski_sb.otf");
        fpsPos = {static_cast<float>(GetScreenWidth() - 40), 0};
    }

    void unload() {
        UnloadFont(fpsFont);
    }
}

namespace GameText {
    Font textFont;
    Vector2 textPos;

    void load() {
        textFont = LoadFont("../resources/PoetsenOne-Regular.ttf");
        textPos = {static_cast<float>(GetScreenWidth() / 7), static_cast<float>(GetScreenHeight() * .8)};
    }

    void unload() {
        UnloadFont(textFont);
    }
}
