#ifndef GOUND_H
#define GOUND_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "collision_box.h"
#include "constants.h"

class Ground : public CollisionBox
{
public:
    // Default Constructor
    Ground(float init_x, float init_y, int init_width, int init_height) : CollisionBox(GROUND, init_x, init_y, init_width, init_height){}

    // Functions
    void Draw();
};

#endif