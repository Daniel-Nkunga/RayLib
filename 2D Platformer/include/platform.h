#ifndef PLATFORM_H
#define PLATFORM_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "collision_box.h"
#include "constants.h"

class Platform : public CollisionBox
{
public:
    // Default Constructor
    Platform(float init_x, float init_y, int init_width, int init_height) : CollisionBox(PLATFORM, init_x, init_y, init_width, init_height){}

    // Functions
    void Draw();
};

#endif