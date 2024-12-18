#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

#include <iostream>
#include <raylib.h>
using namespace std;

enum ObjectType 
{
    DEFAULT = 0,
    PLAYER = 1,
    GROUND = 2
};

class GameObject
{
public:
int objectType;
    float x, y;
    int width, height;

    GameObject(int init_object_type, float init_x, float init_y, int init_width, int init_height)
        : objectType(init_object_type), x(init_x), y(init_y), width(init_width), height(init_height) {}
};

#endif
