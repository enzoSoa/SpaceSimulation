#include "Player.h"
#include "../tools/Orientation.h"

Player::Player(sf::RenderWindow &renderWindow) : renderWindow(renderWindow) {
    this->setPointCount(3);

    this->setPoint(0, sf::Vector2f(5.f, 1.5f));
    this->setPoint(1, sf::Vector2f(0.f, 3.f));
    this->setPoint(2, sf::Vector2f(0.f, 0.f));

    this->setOrigin(sf::Vector2f(1.5f, 2.5f));
}

void Player::update() {
    float mouseOrientation = getMouseDegree(this->getPosition(), sf::Mouse::getPosition(renderWindow));
    this->setRotation(mouseOrientation);
    this->move(velocity);
}

void Player::propel(float power) {
    velocity += getVelocityFromDegree(this->getRotation(), power);
}