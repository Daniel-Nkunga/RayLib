#ifndef GROUND_H
#define GROUND_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "game_objects.h"
#include "constants.h"

class Ground : public GameObject
{
public:
    int width, height;

    // Default Constructor
    Ground(float init_x, float init_y, int init_width, int init_height) : GameObject(GROUND, init_x, init_y)
    {
        width = init_width;
        height = init_height;
    }

    // Functions
    void Draw();
};
#endif