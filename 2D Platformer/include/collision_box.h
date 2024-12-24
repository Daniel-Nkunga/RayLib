#ifndef COLLISION_BOX_H
#define COLLISION_BOX_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "game_objects.h"
#include "constants.h"

class CollisionBox : public GameObject
{
public:
    int width, height;

    // Default Constructor
    CollisionBox(ObjectTypes type, float init_x, float init_y, int init_width, int init_height)
        : GameObject(type, init_x, init_y), width(init_width), height(init_height) {}

    // Functions
    void ShowHiitbox();
};

#endif