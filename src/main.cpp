#include <SFML/Graphics.hpp>
#include "classes/Player.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(160, 90), "Space Simulation");
    Player player;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        player.update();

        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}
