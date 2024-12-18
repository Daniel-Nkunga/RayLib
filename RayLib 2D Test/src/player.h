#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <raylib.h>
#include <vector>
#include "game_objects.h"
using namespace std;

class Player : public GameObject
{
public:
    float speed_x, speed_y;

    // Default Constructor
    Player(float init_x = 0, float init_y = 25, int init_width = 50, int init_height = 50, float init_speed_x = 0, float init_speed_y = 0)
        : GameObject(PLAYER, init_x, init_y, init_width, init_height), speed_x(init_speed_x), speed_y(init_speed_y) {}

    inline void Draw() { DrawRectangle(x, y, width, height, RED); }
    void Update(const vector<GameObject*>& objects);
    bool IsGrounded(const vector<GameObject*>& objects);
    GameObject* GetObjectBelow(const vector<GameObject*>& objects);
};

#endif
