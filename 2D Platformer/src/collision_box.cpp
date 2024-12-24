// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "..\include\collision_box.h"

Color HITBOX_GRAY = {178, 190, 181, 215};

void CollisionBox::ShowHiitbox()
{
    DrawRectangle(x, y, width, height, HITBOX_GRAY);
}