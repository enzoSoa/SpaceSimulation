#include "Player.h"
#include "../tools/Orientation.h"
#include "../tools/Environment.h"

Player::Player(sf::RenderWindow &renderWindow, sf::View &cameraView) : renderWindow(renderWindow),
                                                                       cameraView(cameraView) {
    this->setPointCount(3);

    this->setPoint(0, sf::Vector2f(5.f, 1.5f));
    this->setPoint(1, sf::Vector2f(0.f, 3.f));
    this->setPoint(2, sf::Vector2f(0.f, 0.f));

    this->setOrigin(sf::Vector2f(2.5f, 1.5f));
}

void Player::rotateToMouse() {
    sf::Vector2f currentPosition = this->getPosition();
    sf::Vector2i mousePosition = sf::Mouse::getPosition(renderWindow);
    mousePosition = sf::Vector2i(
            mousePosition.x + currentPosition.x - RESOLUTION_X / 2,
            mousePosition.y + currentPosition.y - RESOLUTION_Y / 2);
    float mouseOrientation = getMouseDegree(currentPosition, mousePosition);
    this->setRotation(mouseOrientation);
}

void Player::update() {
    this->rotateToMouse();
    this->move(velocity);
    this->cameraView.setCenter(this->getPosition());
}

void Player::propel(float power) {
    velocity += getVelocityFromDegree(this->getRotation(), power);
}