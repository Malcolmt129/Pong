#pragma once

#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"

class CollisionDetection 
{
    public:
        Brick* brick;
        Ball* ball;
        Paddle* paddle;

        CollisionDetection(Brick* brick, Ball* ball, Paddle* paddle);
        void handleCollision(Brick* brick, Ball* ball, Paddle* paddle);

};