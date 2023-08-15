#pragma once

#include <SFML/Graphics.hpp>


class Brick 
{

    private:
        
        sf::Vector2f brick_position;
        sf::RectangleShape brick_shape;

        int health;
        
    
    public:

        Brick(float startX, float startY);
        ~Brick();
        int getCurrentHealth();
        void takeHit();


};