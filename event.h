#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class event
{
public:
	bool windows_job = true;
	std::vector <int> botton_x;
	std::vector <int> botton_y;
	std::vector <int> botton_w;
	std::vector <int> botton_h;
	std::vector <std::string> botton_n;
	std::string focus_botton = "";

	std::vector <int> zone_x;
	std::vector <int> zone_y;
	std::vector <int> zone_w;
	std::vector <int> zone_h;
	std::vector <std::string> zone_n;
	std::string focus_zone = "";
	void sf_ev(sf::Event& event, sf::RenderWindow& window);
	void boot_clear();
};

