#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "CFG.h"
#include "event.h"
#include "Load.h"
#include "L.h"
#include "F.h"
#include "custom_event.h"
class scene
{
public:
	int sce = 1;
	void main(CFG& cfg,event& ev,Load& lo,L& l,F& f, custom_event& c_e,sf::RenderWindow &window);
	void scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena3(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena4(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena5(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena6(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
};

