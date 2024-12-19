#include <iostream>
#include <raylib.h>
#include "player.h"
#include "game_objects.h"
// #include "constants.h" 
using namespace std;

int main()
{
    // Defaults
    SetTargetFPS(60);
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "2D Test!");
    ToggleFullscreen(); // TOGGLE ME!!!

    // Scene Variables
    Player player(75, screen_height - 65); // Initialize player near the ground
    vector<GameObject*> objects;         // List of objects

    // Creating grounded objects
    objects.push_back(new GameObject(GROUND, 0, screen_height - 15, screen_width, 15)); // Ground object
    objects.push_back(new GameObject(GROUND, 1000, 690, 200, 15));
    objects.push_back(new GameObject(GROUND, 500, 650, 200, 15));
    objects.push_back(new GameObject(GROUND, 0, 610, 200, 15));
    objects.push_back(new GameObject(GROUND, 0, 510, 200, 15));
    objects.push_back(new GameObject(GROUND, 400, 470, 200, 15));
    objects.push_back(new GameObject(GROUND, 1000, 430, 200, 15));
    // Creating walls
    // objects.push_back(new GameObject(WALL, 0, 0, 25, 800));

    // Rendering
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        // Updating
        player.Update(objects);

        // Drawing
        player.Draw();
        // for (auto* obj : objects)
        for(int i = 0; i < static_cast<int>(objects.size() - 1); i++)
        {
            // DrawRectangle(obj->x, obj->y, obj->width, obj->height, WHITE);
            DrawRectangle(objects[i]->x, objects[i]->y, objects[i]->width, objects[i]->height, WHITE);
        }
        DrawRectangle(objects[objects.size() - 1]->x, objects[objects.size() - 1]->y, objects[objects.size() - 1]->width, objects[objects.size() - 1]->height, PURPLE);

        DrawText(TextFormat("%s", "FPS:"), screen_width - 200, 10, 40, GREEN);
        DrawText(TextFormat("%i", GetFPS()), screen_width - 90, 10, 40, GREEN);
        DrawText(TextFormat("%s", "SPD:"), screen_width - 200, 50, 40, GREEN);
        DrawText(TextFormat("%f", player.speed_x), screen_width - 90, 50, 40, GREEN);
        DrawText(TextFormat("%s", "Y:"), screen_width - 200, 90, 40, GREEN);
        DrawText(TextFormat("%f", player.y + player.height), screen_width - 90, 90, 40, GREEN);

        EndDrawing();
    }

    // Cleanup
    for (auto* obj : objects)
        delete obj;

    CloseWindow();
    return 0;
}