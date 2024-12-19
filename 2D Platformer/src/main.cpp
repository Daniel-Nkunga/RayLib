#include <iostream>
#include <raylib.h>
#include <vector>
#include "..\include\game_objects.h"
#include "..\include\constants.h"
using namespace std;

int main()
{
    vector<GameObject> objects;
    cout << "Hello, World :D" << endl;
    for(int i = 0; i < 10; i++)
    {
        objects.push_back(GameObject(GROUND, 0, 0));
        objects.push_back(GameObject(PLAYER, 0, 0));
        objects.push_back(GameObject(PLATFORM, 0, 0));
    }
    for(int i = 0; i < objects.size(); i++)
    {
        cout << objects[i].uniqueID << endl;
    }
    return 0;
}