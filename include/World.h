#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"

class World
{

    public:
        std::vector<Brick> bricks;
        int blockCount;
        Ball ball;
        Paddle paddle;


        World();
        void update(sf::Time &dt);
        sf::RectangleShape getPaddleShape();
        sf::RectangleShape getBallShape();
   

    


};