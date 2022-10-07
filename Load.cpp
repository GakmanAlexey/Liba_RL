#include "Load.h"
#include <SFML/Graphics.hpp>
#include <vector>

#include "CFG.h"

void Load::font() {
	base_font.loadFromFile(cfg.direct_root + cfg.direct_font + "f.otf");
};
void Load::img() {
	Img_fonL.loadFromFile(cfg.direct_root + cfg.direct_img + "fonL.png");
	//Textures.push_back(texture);
};
void Load::texturs() {
	Texturs_fonL.loadFromImage(Img_fonL);
};