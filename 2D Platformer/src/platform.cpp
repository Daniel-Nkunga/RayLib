// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "..\include\platform.h"

void Platform::Draw()
{
    DrawRectangle(x, y, width, height, YELLOW);
}