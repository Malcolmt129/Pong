#include "Paddle.h"

Paddle::Paddle(float startX, float startY)
{
    m_position.x = startX;
    m_position.y = startY;

    m_Shape.setSize(sf::Vector2f(100,5));
    m_Shape.setFillColor(sf::Color::Cyan);
    m_Shape.setOutlineColor(sf::Color::White);
    m_Shape.setOutlineThickness(3);

    m_Shape.setPosition(m_position);
}

sf::FloatRect Paddle::getPosition()
{
    return m_Shape.getGlobalBounds();
}

sf::Vector2f Paddle::getXY()
{
    return m_position;
}

sf::RectangleShape Paddle::getShape()
{
    return m_Shape;
}

void Paddle::moveLeft()
{
    m_MovingLeft = true;
}

void Paddle::moveRight()
{
    m_MovingRight = true;
}

void Paddle::stopLeft()
{
    m_MovingLeft = false;
}

void Paddle::stopRight()
{
    m_MovingRight = false;
}

void Paddle::update(sf::Time dt)
{
    if (m_MovingLeft) 
    {
        m_position.x -= m_speed * dt.asSeconds();
    }

    if (m_MovingRight)
    {
        m_position.x += m_speed * dt.asSeconds();
    }

    m_Shape.setPosition(m_position);
}
