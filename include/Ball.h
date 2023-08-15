#pragma once

#include<SFML/Graphics.hpp>


class Ball 
{
    private:
        sf::Vector2f m_position;
        sf::RectangleShape m_BallShape;

        float m_speed = 500;
        float m_DirectionX = 1.0f;
        float m_DirectionY = 1.0f;

    public:
        Ball();
        Ball(float startX, float startY);

        sf::FloatRect getPostion();
        sf::RectangleShape getShape();

        float getXVelocity();

        void bounceSides();
        void bounceTop();
        void missBottom();  

        void hitBall();
        
        void update(sf::Time dt);

};