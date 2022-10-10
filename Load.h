#pragma once
#include <SFML/Graphics.hpp>
#include "CFG.h"
using namespace sf;
class Load
{
public:
	CFG cfg;

	Font base_font;
	Font ustroke_font;

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


	Image Img_black_fon;
	Texture Texturs_black_fon;
	Image Img_map_black;
	Texture Texturs_map_black;
	Image Img_crestic_black;
	Texture Texturs_crestic_black;
	Image Img_nulik_black;
	Texture Texturs_nulik_black;


	Image Img_w1;
	Texture Texturs_w1;
	Image Img_w2;
	Texture Texturs_w2;
	Image Img_w3;
	Texture Texturs_w3;
	Image Img_w4;
	Texture Texturs_w4;
	Image Img_w5;
	Texture Texturs_w5;
	Image Img_w6;
	Texture Texturs_w6;
	Image Img_w7;
	Texture Texturs_w7;
	Image Img_w8;
	Texture Texturs_w8;

	void font();
	void img();
	void texturs();
};

