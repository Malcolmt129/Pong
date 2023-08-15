#pragma once

#include <SFML/Graphics.hpp>
#include "World.h"


class GameController 
{


    public:
        
        World &world;
        GameController(sf::RenderWindow &window, World &world);

        void processInput();

    private: 
        sf::RenderWindow &m_window;
        sf::Event event;

    

};