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

	Image Img_fonB;
	Texture Texturs_fonB;

	Image Img_fonG;
	Texture Texturs_fonG;

	Image Img_Logo;
	Texture Texturs_Logo;

	Image Img_pole;
	Texture Texturs_pole;

	Image Img_krest;
	Texture Texturs_krest;
	Image Img_nolik;
	Texture Texturs_nolik;

	void font();
	void img();
	void texturs();
};

