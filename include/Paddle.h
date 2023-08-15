#pragma once

#include <SFML/Graphics.hpp>


class Paddle
{
    private:
        sf::RectangleShape m_Shape;
        sf::Vector2f m_position;

        float m_speed = 1100.0f;

        bool m_MovingLeft = false;
        bool m_MovingRight  = false;

    public:
        
        Paddle();
        Paddle(float startX, float startY);

        sf::RectangleShape getShape();
        sf::FloatRect getPosition();
        sf::Vector2f getXY();

        void moveLeft();
        void moveRight();
        void stopLeft();
        void stopRight();
        

        void update(sf::Time dt);

};