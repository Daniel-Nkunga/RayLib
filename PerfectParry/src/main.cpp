#include <raylib.h>
#include <iostream>
using namespace std;

int main()
{
    // Variables
    const int screen_width = 1280;
    const int screen_height = 800;
    int game_speed = 60;
    SetTargetFPS(game_speed);
    
    InitWindow(screen_width, screen_height, "TEST");
    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        // Debuging
        DrawText(TextFormat("%s", "FPS:"), screen_width - 200, 10, 40, GREEN);
        DrawText(TextFormat("%i", GetFPS()), screen_width - 90, 10, 40, GREEN);

        if(IsKeyPressed(KEY_A))
        {
            game_speed += 5;
        }

        DrawTriangle((Vector2){ screen_width/2.0f, 80.0f },
                         (Vector2){ screen_width/2.0f - 60.0f, 150.0f },
                         (Vector2){ screen_width/2.0f + 60.0f, 150.0f }, RED);
        DrawTriangle((Vector2){ screen_width/4.0f + (screen_width/2.0), (screen_height/2) - 60 },
                         (Vector2){ screen_width/4.0f + (screen_width/2.0), (screen_height/2) + 60 },
                         (Vector2){ screen_width/4.0f + (screen_width/2.0) + 70, (screen_height/2) }, BLUE);
        DrawTriangle((Vector2){ screen_width/4.0f, (screen_height/2) - 60 },
                         (Vector2){ screen_width/4.0f, (screen_height/2) + 60 },
                         (Vector2){ screen_width/4.0f + 70, (screen_height/2) }, YELLOW);
        DrawTriangle((Vector2){ screen_width/4.0f, (screen_height/2) - 60 },
                         (Vector2){ screen_width/4.0f, (screen_height/2) + 60 },
                         (Vector2){ screen_width/4.0f + 70, (screen_height/2) }, YELLOW);

        SetTargetFPS(game_speed);
        ClearBackground(BLACK);
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}