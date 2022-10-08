#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "event.h"
class L
{
public:	
	int fon(sf::RenderWindow& window, sf::Texture& texturs);
	int button(int s_x, int s_y, int width, int height , sf::String text, int style, sf::RenderWindow& window, sf::Texture &texturs, sf::Font& font, std::string name, event& ev);
	int clice_zone(int s_x, int s_y, int width, int height, std::string name, event& ev);
	int win_alert_ok(int s_x, int s_y, std::string text, std::string text_ok);
	int win_alert_to(int s_x, int s_y, std::string text, std::string text_ok, std::string text_no);
};

