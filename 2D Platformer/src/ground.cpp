// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "..\include\ground.h"

void Ground::Draw()
{
    DrawRectangle(x, y, width, height, WHITE);
}
