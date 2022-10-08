#include <SFML/Graphics.hpp>
#include <iostream>

#include "CFG.h"
#include "event.h"
#include "Load.h"
#include "L.h"
#include "F.h"
#include "custom_event.h"

int main()
{
    CFG cfg;
    event ev;
    Load lo;
    L l;
    F f;
    custom_event c_e;
    sf::RenderWindow window(sf::VideoMode(cfg.windows_width, cfg.windows_height), cfg.project_name);

    lo.font();
    lo.img();
    lo.texturs();
    sf::Sprite sprite1;

    while (ev.windows_job)
    {
        sf::Event evsf;
        ev.sf_ev(evsf, window);
        // ----------------------------------
        window.clear();
        ev.boot_clear();
        l.fon(window, lo.Texturs_fonG);
        window.draw(f.show_F(sprite1, lo.Texturs_Logo, 186, 80));
        l.button(350, 250, 300, 50, L"Играть против компьютера", 0, window, lo.Texturs_fonB, lo.base_font,"boot1", ev);
        l.button(350, 310, 300, 50, L"Играть в вдвоем", 0, window, lo.Texturs_fonB, lo.base_font, "boot2", ev);
        l.button(350, 370, 300, 50, L"Играть по сети", 0, window, lo.Texturs_fonB, lo.base_font, "boot3", ev);
        l.button(350, 430, 300, 50, L"Настройки", 0, window, lo.Texturs_fonB, lo.base_font, "boot4", ev);
        l.button(350, 550, 300, 50, L"Выход", 0, window, lo.Texturs_fonB, lo.base_font, "boot5", ev);

        if (ev.focus_botton != "") {
            std::cout << ev.focus_botton << std::endl;
        }
        
        window.display();
        c_e.eve(ev);
    }

    return 0;
}

