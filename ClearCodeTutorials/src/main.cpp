#include <raylib.h>
#include <iostream>
using namespace std;

int main()
{
    InitWindow(1920, 1080, "Base");
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawPixel(100, 200, {225, 230, 12, 255}); //Draws a  pixel with coordinates manually inputed; (x, y, {color});
        DrawPixelV({101, 200}, WHITE); //Draws a pizel with coordinates as a vector; ({position}, {color}); position can be 3D
        DrawCircle(400, 200, 10, GREEN);
        DrawCircleV({1000, 600}, 200, YELLOW); //({x, y}, radius, {color}); position can be 3D
        EndDrawing();
    }
    CloseWindow();
    return 0;
}