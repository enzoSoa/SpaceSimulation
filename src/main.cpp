#include <SFML/Graphics.hpp>
#include "classes/Player.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(16*50, 9*50), "Space Simulation");
    window.setFramerateLimit(60);
    Player player(window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                case sf::Event::KeyPressed:
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                        player.propel(.5);
            }
        }

        player.update();

        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}
