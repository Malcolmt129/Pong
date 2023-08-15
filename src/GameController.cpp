#include "GameController.h"

GameController::GameController(sf::RenderWindow &window, World &world) : m_window(window), world(world)
{

}

void GameController::processInput()
{
        while(m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            m_window.close();
        }
    
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            
            m_window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) 
        {
            world.paddle.moveLeft();
        }

        else
        {
            world.paddle.stopLeft();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            world.paddle.moveRight();
        }

        else
        {
            world.paddle.stopRight();
        }
    }
}