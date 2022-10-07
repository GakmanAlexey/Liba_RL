#include <SFML/Graphics.hpp>

#include "CFG.h"
#include "event.h"
#include "Load.h"

int main()
{
    CFG cfg;
    event ev;
    Load lo;
    sf::RenderWindow window(sf::VideoMode(cfg.windows_width, cfg.windows_height), cfg.project_name);

    lo.font();
    lo.img();
    lo.texturs();

    while (ev.windows_job)
    {
        sf::Event evsf;
        ev.sf_ev(evsf, window);
        // ----------------------------------
        window.clear();
       

        
        window.display();
    }

    return 0;
}

