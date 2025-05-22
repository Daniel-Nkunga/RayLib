#include <raylib.h>
#include <iostream>
using namespace std;

int main()
{
    // Variables
    Color DARK_RED = {100, 23, 23, 255};

    InitWindow(1920, 1080, "Base");
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawLineEx({0, 0}, {500, 200}, 10, DARK_RED);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}