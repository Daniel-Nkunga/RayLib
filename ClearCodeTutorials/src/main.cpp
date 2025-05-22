#include <raylib.h>
#include <iostream>
using namespace std;

int main()
{
    InitWindow(1920, 1080, "Base");
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}