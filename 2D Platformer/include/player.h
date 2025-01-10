#ifndef PLAYER_H
#define PLAYER_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "collision_box.h"
#include "constants.h"

class Player: public CollisionBox
{
public:
    float speed_x = 0;
    float speed_y = 0;
    // Default Constructor
    Player(float init_x = 0, float init_y = 0, int init_width = 50, int init_height = 50) : CollisionBox(PLAYER, init_x, init_y, init_width, init_height){}

    // Functions
    void Update();
    inline void Draw() { DrawRectangle(x, y, width, height, RED);};
};

#endif