#include <SFML/Graphics.hpp>

#include "CFG.h"
#include "event.h"

int main()
{
    CFG cfg;
    event ev;
    sf::RenderWindow window(sf::VideoMode(cfg.windows_width, cfg.windows_height), cfg.project_name);

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    while (ev.windows_job)
    {
        sf::Event evsf;
        ev.sf_ev(evsf, window);
        
       

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}

