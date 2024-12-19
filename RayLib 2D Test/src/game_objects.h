#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

#include <iostream>
#include <raylib.h>
using namespace std;

enum ObjectType 
{
    DEFAULT = 000,
    PLAYER = 001,
    GROUND = 201,
    WALL = 202
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
