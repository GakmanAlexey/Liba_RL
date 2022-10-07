#pragma once
#include <string>
#include <SFML/Graphics.hpp>
class L
{
public:	
	int button(int s_x, int s_y, int width, int height , std::string text, int style, sf::RenderWindow& window);
	int win_alert_ok(int s_x, int s_y, std::string text, std::string text_ok);
	int win_alert_to(int s_x, int s_y, std::string text, std::string text_ok, std::string text_no);
};

