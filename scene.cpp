#include "scene.h"
#include "custom_event.h"
#include "brain_krest.h"
#include <chrono>

using namespace std::chrono;
void scene::main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain_krest& br_kr) {
    if (c_e.focus_windows == 1) {
        scena1(cfg, ev, lo, l, f, c_e, window);
    }
    if (c_e.focus_windows == 2) {
        scena2(cfg, ev, lo, l, f, c_e, window);
    }
    if (c_e.focus_windows == 3) {
        scena3(cfg, ev, lo, l, f, c_e, window, br_kr);
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

//играть вдвоем
void scene::scena3(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain_krest &br_kr) {
    uint64_t ms = duration_cast<std::chrono::milliseconds>(system_clock::now().time_since_epoch()).count();
    uint64_t ms2 = duration_cast<std::chrono::milliseconds>(system_clock::now().time_since_epoch()).count();
    sf::Sprite sprite1;
    sf::Sprite sprite2;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();

    if (!scena3_start) {
        std::cout << "ddsadasdas";
        scena3_start = true;
        br_kr.preload();
        br_kr.newGame();
        br_kr.huGame();
    };
    l.fon(window, lo.Texturs_black_fon);
    l.fon(window, lo.Texturs_map_black);

    l.clice_zone(275, 93, 128, 128, "zone1", ev);
    l.clice_zone(429, 93, 128, 128, "zone2", ev);
    l.clice_zone(586, 93, 128, 128, "zone3", ev);
    l.clice_zone(275, 250, 128, 128, "zone4", ev);
    l.clice_zone(429, 250, 128, 128, "zone5", ev);
    l.clice_zone(586, 250, 128, 128, "zone6", ev);
    l.clice_zone(275, 407, 128, 128, "zone7", ev);
    l.clice_zone(429, 407, 128, 128, "zone8", ev);
    l.clice_zone(586, 407, 128, 128, "zone9", ev);

    if (br_kr.position[1] != -99) {
        if (br_kr.position[1] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 275, 93));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 275, 93));
        }
    }

    if (br_kr.position[2] != -99) {
        if (br_kr.position[2] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 429, 93));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 429, 93));
        }
    }

    if (br_kr.position[3] != -99) {
        if (br_kr.position[3] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 586, 93));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 586, 93));
        }
    }

    if (br_kr.position[4] != -99) {
        if (br_kr.position[4] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 275, 250));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 275, 250));
        }
    }

    if (br_kr.position[5] != -99) {
        if (br_kr.position[5] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 429, 250));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 429, 250));
        }
    }

    if (br_kr.position[6] != -99) {
        if (br_kr.position[6] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 586, 250));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 586, 250));
        }
    }

    if (br_kr.position[7] != -99) {
        if (br_kr.position[7] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 275, 407));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 275, 407));
        }
    }

    if (br_kr.position[8] != -99) {
        if (br_kr.position[8] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 429, 407));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 429, 407));
        }
    }

    if (br_kr.position[9] != -99) {
        if (br_kr.position[9] == 1) {
            window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 586, 407));
        }
        else {
            window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 586, 407));
        }
    }

    l.button(350, 650, 300, 50, L"Назад", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);
    sf::Text player_1;
    sf::String pl1_text = L"Игрок 1";
    window.draw(f.show_T(player_1, lo.base_font , 50, 400, pl1_text, 24, 0));
    

    br_kr.waint_clic(ev);

    c_e.eve(ev);

    br_kr.who_win();
    int timed_x = 0;
    while (br_kr.winer_flag) {
        if (timed_x == 0) {
            timed_x++;   
            if (br_kr.position[1] != -99) {
                if (br_kr.position[1] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 275, 93));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 275, 93));
                }
            }

            if (br_kr.position[2] != -99) {
                if (br_kr.position[2] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 429, 93));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 429, 93));
                }
            }

            if (br_kr.position[3] != -99) {
                if (br_kr.position[3] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 586, 93));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 586, 93));
                }
            }

            if (br_kr.position[4] != -99) {
                if (br_kr.position[4] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 275, 250));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 275, 250));
                }
            }

            if (br_kr.position[5] != -99) {
                if (br_kr.position[5] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 429, 250));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 429, 250));
                }
            }

            if (br_kr.position[6] != -99) {
                if (br_kr.position[6] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 586, 250));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 586, 250));
                }
            }

            if (br_kr.position[7] != -99) {
                if (br_kr.position[7] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 275, 407));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 275, 407));
                }
            }

            if (br_kr.position[8] != -99) {
                if (br_kr.position[8] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 429, 407));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 429, 407));
                }
            }

            if (br_kr.position[9] != -99) {
                if (br_kr.position[9] == 1) {
                    window.draw(f.show_F(sprite1, lo.Texturs_crestic_black, 586, 407));
                }
                else {
                    window.draw(f.show_F(sprite1, lo.Texturs_nulik_black, 586, 407));
                }
            }
            if (br_kr.win_position == 1) {
                window.draw(f.show_F(sprite2, lo.Texturs_w1, 0, 0));                
            }
            if (br_kr.win_position == 2) {
                window.draw(f.show_F(sprite2, lo.Texturs_w2, 0, 0));
            }
            if (br_kr.win_position == 3) {
                window.draw(f.show_F(sprite2, lo.Texturs_w3, 0, 0));
            }
            if (br_kr.win_position == 4) {
                window.draw(f.show_F(sprite2, lo.Texturs_w4, 0, 0));
            }
            if (br_kr.win_position == 5) {
                window.draw(f.show_F(sprite2, lo.Texturs_w5, 0, 0));
            }
            if (br_kr.win_position == 6) {
                window.draw(f.show_F(sprite2, lo.Texturs_w6, 0, 0));
            }
            if (br_kr.win_position == 7) {
                window.draw(f.show_F(sprite2, lo.Texturs_w7, 0, 0));
            }
            if (br_kr.win_position == 8) {
                window.draw(f.show_F(sprite2, lo.Texturs_w8, 0, 0));
            }
            window.display();
        }
        ms2 = duration_cast<std::chrono::milliseconds>(system_clock::now().time_since_epoch()).count();
        if ((ms2 - ms) > 1000) {
            br_kr.winer_flag = false;
        }
        
        br_kr.newGame();
    }

    window.display();
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


    l.button(350, 650, 300, 50, L"Выход", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


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