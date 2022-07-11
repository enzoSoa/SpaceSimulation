#include "Orientation.h"

float getMouseDegree(sf::Vector2f origin, sf::Vector2i destination) {
    return atan2(destination.y - origin.y, destination.x - origin.x) * 180 / PI;
}

sf::Vector2f getVelocityFromDegree(float degree, float speed) {
    float rad = PI / 180 * degree;
    float x = speed * std::cos(rad);
    float y = speed * std::sin(rad);
    return sf::Vector2f(x, y);
}