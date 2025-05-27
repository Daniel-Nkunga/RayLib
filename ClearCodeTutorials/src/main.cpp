#include <raylib.h>
// #include "raylib.h"
#include <iostream>
using namespace std;

int main()
{
    // Variables
    Color DARK_RED = {100, 23, 23, 255};

    InitWindow(1920, 1080, "Base");

    // Importing assets
    Texture spaceship_texture = LoadTexture("src/2D/assets/spaceship.png"); // Look into cpp equivalent to Python's "os.path import join"
    // Image cowboy_image = LoadImage("src/assets/animation/5.png"); // Fundemental misunderstanding of who images work
    // ImageColorInvert(cowboy_image); //Not working
    // Texture cowboy_texture = LoadTextureFromImage(cowboy_image);
    
    // Importing font
    Font font = LoadFont("src/2D/assets/Zero Hour.otf");

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        // Custom Shape
        DrawLineEx({0, 0}, {500, 200}, 10, DARK_RED);

        // Display images
        DrawTexture(spaceship_texture, 0, 0, WHITE);
        // DrawTexture(cowboy_texture, 0, 900, WHITE);
        // ImageDraw()

        //Draw text
        DrawText("Some text", 0, 400, 100, WHITE);
        DrawTextEx(font, "Some more text", {0, 600}, 20, 0, BLUE);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
//37:43