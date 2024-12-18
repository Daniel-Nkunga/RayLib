#include <raylib.h>
#include <iostream>
#include "pong.h"
using namespace std;




int main()
{
    // Variables
    const int screen_width = 1280;
    const int screen_height = 800;
    SetTargetFPS(60);
    // Colors
    
    Color Blue = {76, 155, 230, 255};
    Color Light_Blue = {143, 211, 255, 255};
    Color Dark_Blue = {70, 100, 181, 255};
    // Color Yellow = {249, 194, 45, 255}; // C-style initialization
    

    // Creating game objects
    Ball ball(screen_width / 2, screen_width / 2, 20, 7, 7);
    Paddle player(16, screen_height / 2 - 60, 25, 120, 6);
    CPU_Paddle cpu(screen_width - 25 - 16, screen_height / 2 - 60, 25, 120, 6);
    
    InitWindow(screen_width, screen_height, "Pong!");
    cout << "Running the Game!" << endl;
    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        // Updating 
        ball.Update();
        player.Update();
        cpu.Update(ball.y);

        // Checking Collisions
        if(CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{player.x, player.y, player.width, player.height})) //CheckCollisionCircleRec: check for a collisions between a circle and a rectaangle object; parameters: circle_center, circle_radius, rectangle
        {
            ball.speed_x *= -1;
        }
        if(CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{cpu.x, cpu.y, cpu.width, cpu.height})) //CheckCollisionCircleRec: check for a collisions between a circle and a rectaangle object; parameters: circle_center, circle_radius, rectangle
        {
            ball.speed_x *= -1;
        }

        // Drawing
        ClearBackground(Dark_Blue);
        DrawRectangle(0, 0, screen_width/2, screen_height, Light_Blue);
        DrawCircle(screen_width/2, screen_height/2, 160, Blue);
        DrawLine(screen_width / 2, 0, screen_width / 2, screen_height, WHITE); // DrawLine: draws a line; parameters: starting_x_cooridnate, starting_y_coordinate, ending_x_coordinate, ending_y_coordinate, color
        ball.Draw();
        player.Draw();
        cpu.Draw();

        // Displaying Score
        DrawText(TextFormat("%i", cpu_score), 3 * screen_width / 4 - 20, 20, 80, WHITE); //DrawText: draws text to the screen; parameters: text(string), x_coordinate, y_coordinate, font_size, color
        DrawText(TextFormat("%i", player_score), screen_width / 4 - 20, 20, 80, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}