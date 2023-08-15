#include "Ball.h"

Ball::Ball(float startX, float startY) 
{
    m_position.x = startX;
    m_position.y = startY;

    m_BallShape.setSize(sf::Vector2f(10,10));
    
    m_BallShape.setPosition(m_position);
}


sf::FloatRect Ball::getPostion() 
{
    return m_BallShape.getGlobalBounds();
}

sf::RectangleShape Ball::getShape()
{
    return m_BallShape;
}


float Ball::getXVelocity()
{
    return m_DirectionX;
}

void Ball::bounceSides() 
{
    m_DirectionX = -m_DirectionX;
}

void Ball::bounceTop()
{
    m_DirectionY = -m_DirectionY;
}

void Ball::missBottom() 
{
    m_position.x = 1280 /2;
    m_position.y = 0;
}

void Ball::hitBall()
{
    m_DirectionY = -m_DirectionY;
}

void Ball::update(sf::Time dt) 
{
    m_position.x += m_DirectionX * m_speed * dt.asSeconds();
    m_position.y += m_DirectionY * m_speed * dt.asSeconds();

    m_BallShape.setPosition(m_position);

}
