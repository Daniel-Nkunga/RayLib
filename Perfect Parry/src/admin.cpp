#include "..\include\admin.h"
#include "..\include\constants.h"
#include <raylib.h>

void Admin::incrementFPS(int & FPS)
{
    if(IsMouseButtonDown(KEY_D))
    {
        DrawText(TextFormat("%s", "FPS:"), 1280 - 200, 10, 40, GREEN);
        DrawText(TextFormat("%i", GetFPS()), 800 - 140, 10, 40, GREEN);
    }
}