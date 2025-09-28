#include "raylib.h"
#include "resources.h"

void testRender() {
    ClearBackground(DARKBLUE);
    DrawTextEx(GameText::textFont, "Hello there!", GameText::textPos, 32, 1, YELLOW);
    DrawCircleV({200,200}, 50, MAROON);
}

