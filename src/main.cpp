#include <SFML/Graphics.hpp>
#include "classes/Player.h"
#include "tools/Environment.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(RESOLUTION_X, RESOLUTION_Y), "Space Simulation");
    window.setFramerateLimit(LIMIT_FRAMERATE);

    sf::View camera;
    camera.setSize(sf::Vector2f(WIDTH, HEIGHT));
    camera.setCenter(sf::Vector2f(0.f, 0.f));
    window.setView(camera);

    Player player(window, camera);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                case sf::Event::KeyPressed:
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))player.propel(.5);
            }
        }

        player.update();

        window.clear();
        window.setView(camera);
        window.draw(player);
        window.display();
    }

    return 0;
}
