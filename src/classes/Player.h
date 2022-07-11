#ifndef SPACESIMULATION_PLAYER_H
#define SPACESIMULATION_PLAYER_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../tools/Types.h"

class Player : public sf::ConvexShape {
private:
    sf::RenderWindow &renderWindow;
    sf::View &cameraView;
    sf::Vector2f velocity = sf::Vector2f(0.f, 0.f);

    void rotateToMouse();

public:
    Player(sf::RenderWindow &renderWindow, sf::View &cameraView);

    void update();

    void propel(float power);
};

#endif
