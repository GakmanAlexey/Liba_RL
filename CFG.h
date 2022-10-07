#pragma once
#include <string>
class CFG
{
	/*
	Сокращения:
	s - start
	w - width
	h - height	
	*/
public:
	bool debug = true; //режим дебага

	bool pre_windows = true;// Запускать ли прдварительное окно
	int pre_windows_width = 256;//Ширина предварительного окна
	int pre_windows_height = 256;//Высота предварительного окна

	int windows_width = 1024; // Ширина основного окна
	int windows_height = 720; // Высота основного окна
	std::string project_name = "text win lib";

	int s_rend_w = 0; //Точна начала отрисовки по ширине
	int s_rend_h = 0; //Точна начала отрисовки по высоте


	//Дериктории
	std::string direct_root = "resurse/";
	std::string direct_font = "font/";
	std::string direct_img = "img/";
};

