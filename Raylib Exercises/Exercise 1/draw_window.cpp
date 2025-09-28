#include "raylib.h"

void initiateWindow() {
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Test Window");

    ToggleFullscreen();

    SetTargetFPS(60);

}
