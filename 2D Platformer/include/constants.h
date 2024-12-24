#ifndef CONSTANTS_H
#define CONSTANTS_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;

const float TERMINAL_VELOCITY = 10.0;
const float GRAVITY = 2.25;

enum ObjectTypes
{
    DEFAULT = 000,
    // Players, NPC, and Interactible Objects - 1XX
    PLAYER = 101,
    // Collision Bodies - 3XX
    GROUND = 301,
    PLATFORM = 302
};

#endif