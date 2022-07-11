#ifndef SPACESIMULATION_PLAYER_H
#define SPACESIMULATION_PLAYER_H

#include <SFML/Graphics.hpp>
#include "../tools/Types.h"

class Player: public sf::ConvexShape {
private:

public:
    Player();
    void update();
};

#endif
