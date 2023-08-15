
#include "World.h"
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"

World::World()
        : paddle(1280/2,710), ball(paddle.getXY().x, paddle.getXY().y - 60)
{
    bricks.push_back(Brick(1280/2, 20));
}


void World::update(sf::Time &dt)
{
    paddle.update(dt);
    ball.update(dt);
}

sf::RectangleShape World::getPaddleShape() {
    return paddle.getShape();
}

sf::RectangleShape World::getBallShape() {
    return ball.getShape();
}




