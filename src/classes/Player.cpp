#include "Player.h"
#include "../tools/Orientation.h"

Player::Player(sf::RenderWindow &renderWindow): renderWindow(renderWindow) {
    this->setPointCount(3);

    this->setPoint(0,sf::Vector2f(1.5f,0.f));
    this->setPoint(1,sf::Vector2f(0.f,5.f));
    this->setPoint(2,sf::Vector2f(3.f,5.f));

    this->setOrigin(sf::Vector2f(1.5f,2.5f));
}

void Player::update() {
    float mouseOrientation = getMouseDegree(this->getPosition(),sf::Mouse::getPosition(renderWindow)) + 90;
    this->setRotation(mouseOrientation);
}