#include "Load.h"
#include <SFML/Graphics.hpp>
#include <vector>

#include "CFG.h"

void Load::font() {
	base_font.loadFromFile(cfg.direct_root + cfg.direct_font + "f.otf");
	ustroke_font.loadFromFile(cfg.direct_root + cfg.direct_font + "ustroke.ttf");
};
void Load::img() {
	Img_fonL.loadFromFile(cfg.direct_root + cfg.direct_img + "fon1.png");
	Img_fonB.loadFromFile(cfg.direct_root + cfg.direct_img + "fon_botton1.png");
	Img_fonG.loadFromFile(cfg.direct_root + cfg.direct_img + "fon_game.png");
	Img_Logo.loadFromFile(cfg.direct_root + cfg.direct_img + "logo.png");
	Img_pole.loadFromFile(cfg.direct_root + cfg.direct_img + "map.png");
	Img_krest.loadFromFile(cfg.direct_root + cfg.direct_img + "crestic.png");
	Img_nolik.loadFromFile(cfg.direct_root + cfg.direct_img + "nulik.png");
	Img_black_fon.loadFromFile(cfg.direct_root + cfg.direct_img + "fon_black.png");
	Img_map_black.loadFromFile(cfg.direct_root + cfg.direct_img + "map_black.png");
	Img_crestic_black.loadFromFile(cfg.direct_root + cfg.direct_img + "crestic_black.png");
	Img_nulik_black.loadFromFile(cfg.direct_root + cfg.direct_img + "nulik_black.png");
	Img_w1.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos1.png");
	Img_w2.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos2.png");
	Img_w3.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos3.png");
	Img_w4.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos4.png");
	Img_w5.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos5.png");
	Img_w6.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos6.png");
	Img_w7.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos7.png");
	Img_w8.loadFromFile(cfg.direct_root + cfg.direct_img + "win_pos8.png");

};
void Load::texturs() {
	Texturs_fonL.loadFromImage(Img_fonL);
	Texturs_fonB.loadFromImage(Img_fonB);
	Texturs_fonG.loadFromImage(Img_fonG);
	Texturs_Logo.loadFromImage(Img_Logo);
	Texturs_pole.loadFromImage(Img_pole);
	Texturs_krest.loadFromImage(Img_krest);
	Texturs_nolik.loadFromImage(Img_nolik);
	Texturs_black_fon.loadFromImage(Img_black_fon);
	Texturs_map_black.loadFromImage(Img_map_black);
	Texturs_crestic_black.loadFromImage(Img_crestic_black);
	Texturs_nulik_black.loadFromImage(Img_nulik_black);
	Texturs_w1.loadFromImage(Img_w1);
	Texturs_w2.loadFromImage(Img_w2);
	Texturs_w3.loadFromImage(Img_w3);
	Texturs_w4.loadFromImage(Img_w4);
	Texturs_w5.loadFromImage(Img_w5);
	Texturs_w6.loadFromImage(Img_w6);
	Texturs_w7.loadFromImage(Img_w7);
	Texturs_w8.loadFromImage(Img_w8);
};


