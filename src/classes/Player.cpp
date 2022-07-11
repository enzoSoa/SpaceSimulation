#include "Player.h"

Player::Player() {
    this->setPointCount(3);

    this->setPoint(0,sf::Vector2f(1.5f,0.f));
    this->setPoint(1,sf::Vector2f(0.f,5.f));
    this->setPoint(2,sf::Vector2f(3.f,5.f));
}

void Player::update() {}