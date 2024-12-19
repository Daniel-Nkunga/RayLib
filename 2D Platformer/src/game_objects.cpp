// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;
#include "..\include\game_objects.h"

int uniqueIDIndex = 0;

int GameObject::getUniqueID(int ObjectType)
{
    ObjectType = ObjectType / 100;
    int ID = (100'000 * ObjectType) + uniqueIDIndex++;
    return ID;
}