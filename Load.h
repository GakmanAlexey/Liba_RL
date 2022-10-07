#pragma once
#include <SFML/Graphics.hpp>
#include "CFG.h"
using namespace sf;
class Load
{
public:
	CFG cfg;

	Font base_font;

	Image Img_fonL;
	Texture Texturs_fonL;

	void font();
	void img();
	void texturs();
};

