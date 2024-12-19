#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

// Includes
#include <iostream>
#include <raylib.h>
using namespace std;

int uniqueID = 0;

class GameObject
{
public:
    int ObjectType;
    float x, y;

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