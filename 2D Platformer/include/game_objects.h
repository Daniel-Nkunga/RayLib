#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

// Includes
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;

extern int uniqueIDIndex;

class GameObject
{
public:
    int ObjectType;
    int uniqueID;
    float x, y;

    // Default Constructor
    GameObject(int init_Object_Type, float init_x, float init_y)
    {
        ObjectType = init_Object_Type;
        // uniqueID = getUniqueID(ObjectType);
        x = init_x;
        y = init_y;
    }

    // Functions
    /* Get Unique ID
        Definition: generates the unique ID for a game object; called upon object generation
        Precondition: 
            - Object Type: enumerated integer determine what type of object is being created
        Postcondition: returns a six-digit integer as the object's Unique ID
            - Hundred Thousandths: corresponds to the type of object being created
            - Ten Thousandths: blank; potential overflow for the rest of the elements
            - Ones - Thousandths: incrementing integer being a unique identifier for each object
    */
    int getUniqueID(int ObjectType);
};
#endif