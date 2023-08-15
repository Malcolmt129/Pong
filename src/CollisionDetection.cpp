#include "Paddle.h"
#include "Brick.h"
#include "Ball.h"
#include "CollisionDetection.h"


CollisionDetection::CollisionDetection(Brick* brick, Ball* ball, Paddle* paddle)
{  
    this->brick = brick;
    this->ball = ball;
    this->paddle = paddle;

    handleCollision(this->brick,this->ball,this->paddle);

}

void CollisionDetection::handleCollision(Brick* brick, Ball* ball, Paddle* paddle)
{
        if (ball->getPostion().intersects(paddle->getPosition())) 
        {
            ball->hitBall();
        }


        if (ball->getPostion().left < 0 || ball->getPostion().left + ball->getPostion().width > 1280)
        {
            ball->bounceSides();
        }


        if (ball->getPostion().top < 0) 
        {
            ball->bounceTop();
        }

        if (ball->getPostion().top + ball->getPostion().height > 720)
        {
            ball->missBottom();
        }
}