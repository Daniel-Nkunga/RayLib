#include "..\include\player.h"
#include "..\include\constants.h"

void Player::Update()
{
    float speed_x, speed_y;
    x += speed_x;
    y += speed_y;
    
    if(IsMouseButtonDown(KEY_A))
    {
        speed_x -= 8;
    }
    if(IsMouseButtonDown(KEY_D))
    {
        speed_x += 8;
    }

    // Decelerate when no movement key is pressed
    if (speed_x > 0)
        speed_x -= 0.5; // Slow down to the right
    else if(speed_x < 0)
        speed_x += 0.5; // Slow down to the left   
}