#include "player.h"
#include "constants.h"

void Player::Update(const vector<GameObject*>& objects)
{
    x += speed_x;
    y += speed_y;

    // Handle horizontal input
    if ((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && abs(speed_x) <= 10)
    {
        if ((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && !(IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)))
        {
            speed_x -= 1; // Move left
        }
        if ((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && !(IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)))
        {
            speed_x += 1; // Move right
        }
        if ((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)))
        {
            speed_x = 0;
        }
    }

    // Decelerate when no movement key is pressed
    if (speed_x > 0)
        speed_x -= 0.25; // Slow down to the right
    else if(speed_x < 0)
        speed_x += 0.25; // Slow down to the left    

    // Check if grounded
    GameObject* ground = GetObjectBelow(objects);
    if (ground)
    {
        speed_y = 0;                // Stop vertical movement
        y = ground->y - height;     // Align the player to the ground's top
    }
    else
    {
        speed_y += GRAVITY; // Apply gravity
    }

    if((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && IsGrounded(objects))
    {
        speed_y -= 10;
    }
}

bool Player::IsGrounded(const vector<GameObject*>& objects)
{
    GameObject* objectBelow = GetObjectBelow(objects);
    if (objectBelow && objectBelow->objectType == GROUND)
    {
        return true;
    }
    return false;
}

GameObject* Player::GetObjectBelow(const vector<GameObject*>& objects)
{
    for (auto* obj : objects)
    {
        // Check for horizontal overlap and if the object is directly below the player
        if (x < obj->x + obj->width && x + width > obj->x && // Horizontal overlap
            y + height >= obj->y && y + height <= obj->y + 2.5) // Vertical alignment with tolerance
        {
            return obj; // Return the object below the player
        }
    }
    return nullptr; // No object found below
}