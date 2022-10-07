#include "event.h"
void event::sf_ev(sf::Event &event, sf::RenderWindow &window) {
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed) {
            windows_job = false;
            window.close();
        }
    }
};