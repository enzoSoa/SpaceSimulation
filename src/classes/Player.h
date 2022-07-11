#ifndef SPACESIMULATION_PLAYER_H
#define SPACESIMULATION_PLAYER_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../tools/Types.h"

class Player: public sf::ConvexShape {
private:
    sf::RenderWindow &renderWindow;
    sf::Vector2f velocity = sf::Vector2f (0.f,0.f);

public:
    Player(sf::RenderWindow &renderWindow);
    void update();
    void propel(float power);
};

#endif
