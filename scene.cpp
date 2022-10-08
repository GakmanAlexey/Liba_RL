#include "scene.h"
void scene::main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    if (c_e.focus_windows == 1) {
        scena1(cfg, ev, lo, l, f, c_e, window);
    }
    if (c_e.focus_windows == 2) {
        scena2(cfg, ev, lo, l, f, c_e, window);
    }
    if (c_e.focus_windows == 3) {
        scena3(cfg, ev, lo, l, f, c_e, window);
    }
    if (c_e.focus_windows == 4) {
        scena4(cfg, ev, lo, l, f, c_e, window);
    }
    if (c_e.focus_windows == 5) {
        scena5(cfg, ev, lo, l, f, c_e, window);
    }
    if (c_e.focus_windows == 6) {
        scena6(cfg, ev, lo, l, f, c_e, window);
    }
};

void scene::scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    window.draw(f.show_F(sprite1, lo.Texturs_Logo, 186, 80));
    l.button(350, 250, 300, 50, L"Играть против компьютера", 0, window, lo.Texturs_fonB, lo.base_font, "boot1", ev);
    l.button(350, 310, 300, 50, L"Играть в вдвоем", 0, window, lo.Texturs_fonB, lo.base_font, "boot2", ev);
    l.button(350, 370, 300, 50, L"Играть по сети", 0, window, lo.Texturs_fonB, lo.base_font, "boot3", ev);
    l.button(350, 430, 300, 50, L"Настройки", 0, window, lo.Texturs_fonB, lo.base_font, "boot4", ev);
    l.button(350, 550, 300, 50, L"Выход", 0, window, lo.Texturs_fonB, lo.base_font, "boot5", ev);


    window.display();
    c_e.eve(ev);
};
void scene::scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    window.draw(f.show_F(sprite1, lo.Texturs_Logo, 186, 80));

    l.button(350, 310, 300, 50, L"Легкий соперник", 0, window, lo.Texturs_fonB, lo.base_font, "boot7", ev);
    l.button(350, 370, 300, 50, L"Средний соперник", 0, window, lo.Texturs_fonB, lo.base_font, "boot8", ev);
    l.button(350, 430, 300, 50, L"Сложный соперник", 0, window, lo.Texturs_fonB, lo.base_font, "boot9", ev);

    l.button(350, 650, 300, 50, L"Назад", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


    window.display();
    c_e.eve(ev);
};
void scene::scena3(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    window.draw(f.show_F(sprite1, lo.Texturs_Logo, 186, 80));


    l.button(350, 650, 300, 50, L"Назад", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


    window.display();
    c_e.eve(ev);
};
void scene::scena4(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    window.draw(f.show_F(sprite1, lo.Texturs_Logo, 186, 80));


    l.button(350, 650, 300, 50, L"Назад", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


    window.display();
    c_e.eve(ev);
};
void scene::scena5(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    window.draw(f.show_F(sprite1, lo.Texturs_Logo, 186, 80));


    l.button(350, 650, 300, 50, L"Назад", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


    window.display();
    c_e.eve(ev);
};
void scene::scena6(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    window.draw(f.show_F(sprite1,lo.Texturs_pole,0,0));
    l.clice_zone(275, 93, 128,128, "zone1", ev);
    l.clice_zone(429, 93, 128, 128, "zone2", ev);
    l.clice_zone(586, 93, 128, 128, "zone3", ev);
    l.clice_zone(275, 250, 128, 128, "zone4", ev);
    l.clice_zone(429, 250, 128, 128, "zone5", ev);
    l.clice_zone(586, 250, 128, 128, "zone6", ev);
    l.clice_zone(275, 407, 128, 128, "zone7", ev);
    l.clice_zone(429, 407, 128, 128, "zone8", ev);
    l.clice_zone(586, 407, 128, 128, "zone9", ev);
    l.button(350, 650, 300, 50, L"Выход", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


    window.display();
    c_e.eve(ev);
};