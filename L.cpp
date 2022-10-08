#include "L.h"
#include <string>
#include <SFML/Graphics.hpp>
#include "event.h"


int L::fon(sf::RenderWindow& window, sf::Texture& texturs) {
	sf::Sprite Sprite_def;
	Sprite_def.setTexture(texturs);
	Sprite_def.setPosition(0, 0);
	window.draw(Sprite_def);
	return 0;
};
int L::button(int s_x, int s_y, int width, int height, sf::String text, int style, sf::RenderWindow &window, sf::Texture& texturs, sf::Font& font, std::string name, event& ev) {

	sf::Color boot;
	boot.g = 22;
	boot.g = 166;
	boot.b = 197;

	sf::Sprite Sprite_def;
	Sprite_def.setTexture(texturs);
	Sprite_def.setTextureRect(sf::IntRect(0, 0, width, height));
	Sprite_def.setPosition(s_x, s_y);
	window.draw(Sprite_def);
	sf::Vertex line1[] =
	{
	 sf::Vertex(sf::Vector2f(s_x + 2, s_y+2)),
	 sf::Vertex(sf::Vector2f(s_x + width -2 , s_y+2 ))
	};
	line1[0].color = boot;
	line1[1].color = boot;
	window.draw(line1, 2, sf::Lines);

	sf::Vertex line2[] =
	{
	 sf::Vertex(sf::Vector2f(s_x + 2, s_y + 2)),
	 sf::Vertex(sf::Vector2f(s_x + 2 , s_y + height - 2))
	};
	line2[0].color = boot;
	line2[1].color = boot;
	window.draw(line2, 2, sf::Lines);

	sf::Vertex line3[] =
	{
	 sf::Vertex(sf::Vector2f(s_x + 2, s_y + height - 2)),
	 sf::Vertex(sf::Vector2f(s_x + width- 2 , s_y + height - 2))
	};
	line3[0].color = boot;
	line3[1].color = boot;
	window.draw(line3, 2, sf::Lines);

	sf::Vertex line4[] =
	{
	 sf::Vertex(sf::Vector2f(s_x + width - 2, s_y + 2)),
	 sf::Vertex(sf::Vector2f(s_x + width - 2 , s_y + height - 2))
	};
	line4[0].color = boot;
	line4[1].color = boot;
	window.draw(line4, 2, sf::Lines);

	int lenStr;
	lenStr = text.getSize();
	sf::Text t_s;
	sf::String str = sf::String::String(text);//fromUtf8(text.begin(), text.end());
	t_s.setFont(font);
	t_s.setPosition(s_x + (width/2) -(lenStr *3), s_y + ((height - 20) / 2));
	t_s.setString(str);
	t_s.setCharacterSize(14);
	window.draw(t_s);
	ev.botton_x.push_back(s_x);
	ev.botton_y.push_back(s_y);
	ev.botton_w.push_back(width);
	ev.botton_h.push_back(height);
	ev.botton_n.push_back(name);
	return 0;
};
int L::clice_zone(int s_x, int s_y, int width, int height, std::string name, event& ev) {

	ev.zone_x.push_back(s_x);
	ev.zone_y.push_back(s_y);
	ev.zone_w.push_back(width);
	ev.zone_h.push_back(height);
	ev.zone_n.push_back(name);
	return 0;
};
int L::win_alert_ok(int s_x, int s_y, std::string text, std::string text_ok) {


	return 0;
};
int L::win_alert_to(int s_x, int s_y, std::string text, std::string text_ok, std::string text_no) {


	return 0;
};