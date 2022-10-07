#include <SFML/Graphics.hpp>

#include "CFG.h"
#include "event.h"
#include "Load.h"
#include "L.h"

int main()
{
    CFG cfg;
    event ev;
    Load lo;
    L l;
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
        l.button(10, 10, 350, 50, "gogogo", 0, window, lo.Texturs_fonB, lo.base_font);

        
        window.display();
    }

    return 0;
}

