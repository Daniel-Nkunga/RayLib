#ifndef PONG
#define PONG

#include <iostream>
#include <raylib.h>
using namespace std;

// Global Variables
extern int player_score;
extern int cpu_score;

// Color yellow = {249, 194, 45, 255}; // This line isn't working

class Ball
{
public:
    Color Yellow = {249, 194, 45, 255}; // C-style initialization
    float x, y; // x and y coordiantes of the ball
    int speed_x, speed_y;
    int radius;
    inline void Draw(){DrawCircle(x, y, radius, Yellow);}
    void Update();
    void ResetBall();
    

    // Constructors
    Ball(int init_x, int init_y, int init_radius, int init_speed_x, int init_speed_y)
    {
        x = init_x;
        y = init_y;
        radius = init_radius;
        speed_x = init_speed_x;
        speed_y = init_speed_y;
    }
};

class Paddle
{
public:
    float x, y;
    float width, height; 
    int speed;
    inline void Draw(){DrawRectangleRounded(Rectangle{x, y, width, height}, 0.8, 0, WHITE);}
    void Update();

    // Constructors
    Paddle(int init_x, int init_y, int init_width, int init_height, int init_speed)
    {
        x = init_x;
        y = init_y;
        width = init_width;
        height = init_height;
        speed = init_speed;
    }

protected:
    void OutOfBounds();
};

class CPU_Paddle : public Paddle
{
public:
    void Update(int ball_y);

    // Constructors
    CPU_Paddle(int init_x, int init_y, int init_width, int init_height, int init_speed)
        : Paddle(init_x, init_y, init_width, init_height, init_speed)
    {
    }
};


#endif