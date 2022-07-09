#include "Orientation.h"

float getMouseDegree(sf::Vector2f origin, sf::Vector2i destination) {
    return atan2(destination.y - origin.y, destination.x - origin.x) * 180 / PI;
}