#include <iostream>
#include <raylib.h>
#include <vector>
#include "..\include\game_objects.h"
#include "..\include\constants.h"
#include "..\include\ground.h"
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
    ground_objects.push_back(Ground(0, screen_height - 15, screen_width, 15));
    
    // Rendering
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        ground_objects[0].Draw();
        EndDrawing();
    }
    return 0;
}