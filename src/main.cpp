#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ball.h"
#include "Paddle.h"
#include "World.h"
#include "GameController.h"
#include "CollisionDetection.h"


int main() {

    
    sf::VideoMode VM(1280, 720);
    sf::RenderWindow window(VM,"Pong Clone");
    sf::Clock clock;
    
    sf::Time dt;
    sf::Event event;

    World world;
    GameController controller(window,world);

    
    while(window.isOpen())
    {   

        

        dt = clock.restart();

        window.clear();
        controller.processInput();
        world.update(dt);

        window.draw(world.getBallShape());
        window.draw(world.getPaddleShape());
        window.display();

    };
    
    return 0;


}