#include <iostream>
#include <raylib.h>
#include "player.h"
#include "game_objects.h"
using namespace std;

int main()
{
    // Defaults
    SetTargetFPS(60);
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "2D Test!");

    // Scene Variables
    Player player(0, screen_height - 90); // Initialize player near the ground
    vector<GameObject*> objects;         // List of objects
    objects.push_back(new GameObject(GROUND, 0, screen_height - 15, screen_width, 15)); // Ground object

    // Rendering
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        // Updating
        player.Update(objects);

        // Drawing
        player.Draw();
        for (auto* obj : objects)
        {
            DrawRectangle(obj->x, obj->y, obj->width, obj->height, WHITE);
        }

        DrawText(TextFormat("%s", "FPS:"), screen_width - 200, 10, 40, GREEN);
        DrawText(TextFormat("%i", GetFPS()), screen_width - 90, 10, 40, GREEN);
        DrawText(TextFormat("%s", "SPD:"), screen_width - 200, 50, 40, GREEN);
        DrawText(TextFormat("%f", player.speed_x), screen_width - 90, 50, 40, GREEN);

        EndDrawing();
    }

    // Cleanup
    for (auto* obj : objects)
        delete obj;

    CloseWindow();
    return 0;
}