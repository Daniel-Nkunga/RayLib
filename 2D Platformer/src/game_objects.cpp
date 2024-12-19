// Includes
#include <iostream>
#include <raylib.h>
using namespace std;
#include "..\include\game_objects.h"

int GameObject::getUniqueID(int ObjectType)
{
    ObjectType = ObjectType % 100;
    int ID = (100'000 * ObjectType) uniqueID++;
    return ID;
}