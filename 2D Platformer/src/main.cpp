#include <iostream>
#include <raylib.h>
#include <vector>
#include "..\include\all.h"
using namespace std;

int main()
{
    // Defaults
    SetTargetFPS(60);
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "2D Platformer");
    // ToggleFullscreen(); // TOGGLE ME!!!

    // Scene Variables
    // Creating Ground Objects
    vector<Ground> ground_objects;
    vector<Platform> platform_objects;
    ground_objects.push_back(Ground(0, screen_height - 15, screen_width, 15));
    ground_objects.push_back(Ground(screen_width / 4 * 1, (screen_height / 8) * 7, screen_width / 8, 15));
    ground_objects.push_back(Ground(screen_width / 4 * 2, (screen_height / 8) * 6, screen_width / 8, 15));
    ground_objects.push_back(Ground(screen_width / 4 * 3, (screen_height / 8) * 5, screen_width / 8, 15));
    platform_objects.push_back(Platform(screen_width / 4 * 3, (screen_height / 8) * 7, screen_width / 8, 15));
    Player player;

    cout << "Hello, World" << endl;

    // Rendering
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        // Update
        player.Update();

        // Drawing
        for(int i = 0; i < static_cast<int>(ground_objects.size()); i++)
        {
            ground_objects[i].Draw();
        }
        for(int i = 0; i < static_cast<int>(platform_objects.size()); i++)
        {
            platform_objects[i].Draw();
        }
        player.Draw();

        EndDrawing();
    }
    return 0;
}