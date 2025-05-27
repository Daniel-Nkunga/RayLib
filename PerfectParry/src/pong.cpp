#include "pong.h"
#include <raylib.h>
using namespace std;

// Global Varaibles
int player_score = 0;
int cpu_score = 0;

void Ball::Update()
{
    x += speed_x;
    y += speed_y;
    if(y + radius >= GetScreenHeight() || y - radius <= 0) // Vertical collisions with window
    {
        speed_y *= -1;
    }
    if(x + radius >= GetScreenWidth())
    {
        player_score++;
        ResetBall();
    }
    if(x - radius <= 0)
    {
        cpu_score++;
        ResetBall();
    }
}

void Ball::ResetBall()
{
    x = GetScreenWidth() / 2;
    y = GetScreenHeight() / 2;

    int speed_choices[2] = {-1, 1};
    speed_x *= speed_choices[GetRandomValue(0, 1)];
    speed_y *= speed_choices[GetRandomValue(0, 1)];
}

void Paddle::Update()
{
    if(IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
    {
        y -= speed;
    }
    if(IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
    {
        y += speed;
    }
    OutOfBounds();
}

void Paddle::OutOfBounds()
{
    if(y <= 0) y = 0;
    if(y + height >= GetScreenHeight()) y = GetScreenHeight() - height;
}

void CPU_Paddle::Update(int ball_y)
{
    if(y + height / 2 > ball_y) y -= speed;
    if(y + height / 2 <= ball_y) y += speed;
    OutOfBounds();
}