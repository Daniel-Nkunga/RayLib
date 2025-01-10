#include "raylib.h"

int main() {
    const int screen_width = 800;
    const int screen_height = 600;

    InitWindow(screen_width, screen_height, "raylib - 3D Cube Example");

    // Initialize camera in one line
    float x = 4, y = 4, z = 4;
    Camera camera = { Vector3{ x, y, z}, Vector3{0.0, 0.0, 0.0}, Vector3{ 0.0, 1.0, 0.0}, 45.0, CAMERA_PERSPECTIVE };

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        BeginMode3D(camera);

        camera.position = {x++, y++, z++};
        DrawCube(Vector3{ 0.0f, 0.0f, 0.0f }, 2.0f, 2.0f, 2.0f, RED);
        DrawCubeWires(Vector3{ 0.0f, 0.0f, 0.0f }, 2.0f, 2.0f, 2.0f, BLACK);
        DrawGrid(10, 1.0f);

        EndMode3D();

        DrawText(TextFormat("%s", "FPS:"), screen_width - 200, 10, 40, GREEN);
        DrawText(TextFormat("%i", GetFPS()), screen_width - 90, 10, 40, GREEN);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

void updateCamera(Camera3D & camera)
{

}