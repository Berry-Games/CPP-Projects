#include "raylib.h"
#include "resources.h"

int main() {

    InitWindow(GetScreenWidth(), GetScreenHeight(), "Test Window");
    ToggleFullscreen();

    FPS::load();
    GameText::load();

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        testRender();
        drawMyFps();

        EndDrawing();
    }

    FPS::unload();
    GameText::unload();

    CloseWindow();
    return 0;
}
