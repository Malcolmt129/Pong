#include "Brick.h"

Brick::Brick(float startX, float startY)
{
    brick_position.x = startX;
    brick_position.y = startY;

    brick_shape.setPosition(brick_position);

    health = 1;
}

 int Brick::getCurrentHealth()
 {
    return health;
 }

 void Brick::takeHit()
 {
    health--;
 }

Brick::~Brick()
{
   
}