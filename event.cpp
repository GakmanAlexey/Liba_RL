#include "event.h"
#include "windows.h"
#include <iostream>
void event::sf_ev(sf::Event &event, sf::RenderWindow &window) {
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed) {
            windows_job = false;
            window.close();
        }
        
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                sf::Vector2i position = sf::Mouse::getPosition(window);
                focus_botton = "";
                int i = 0;
                while (i < botton_x.size()) {
                    if (position.x > botton_x[i] && position.x < botton_x[i] + botton_w[i] && position.y > botton_y[i] && position.y <= botton_y[i] + botton_h[i])
                    {
                        if (mouse_flag_block_LKM == false) {
                            focus_botton = botton_n[i];
                            mouse_flag_block_LKM = true;
                        }
                    }
                    i++;
                }
                i = 0;
                while (i < zone_x.size()) {
                    if (position.x > zone_x[i] && position.x < zone_x[i] + zone_w[i] && position.y > zone_y[i] && position.y <= zone_y[i] + zone_h[i])
                    {

                        if (mouse_flag_block_LKM == false) {
                            focus_zone = zone_n[i];
                            mouse_flag_block_LKM = true;
                        }
                    }
                    i++;
                }
            }
            else {
                mouse_flag_block_LKM = false;
                focus_botton = "";
                focus_zone = "";
            }
        
       

        if (sf::Event::MouseButtonReleased) {
            //
        }
    }
};
void event::boot_clear() {

    std::vector<int>().swap(botton_x);
    std::vector<int>().swap(botton_y);
    std::vector<int>().swap(botton_w);
    std::vector<int>().swap(botton_h);
    std::vector<std::string>().swap(botton_n);

    std::vector<int>().swap(zone_x);
    std::vector<int>().swap(zone_y);
    std::vector<int>().swap(zone_w);
    std::vector<int>().swap(zone_h);
    std::vector<std::string>().swap(zone_n);
};