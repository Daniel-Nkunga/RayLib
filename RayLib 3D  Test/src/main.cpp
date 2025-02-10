#include "raylib.h"

int main() {
    const int screen_width = 800;
    const int screen_height = 600;

    InitWindow(screen_width, screen_height, "Raylib 3D");

    // Initialize camera in one line

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}