#ifndef SPACESIMULATION_PLAYER_H
#define SPACESIMULATION_PLAYER_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../tools/Types.h"

class Player: public sf::ConvexShape {
private:
    sf::RenderWindow &renderWindow;
public:
    Player(sf::RenderWindow &renderWindow);
    void update();
};

#endif
