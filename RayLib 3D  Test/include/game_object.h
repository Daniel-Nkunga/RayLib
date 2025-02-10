#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;

template <typename T>

class GameObject
{
public:
    float x, y;
    T collision_box_shape;

    
};


#endif