#pragma once
#include <vector>
#include "event.h"
class brain_krest
{
public:
	std::vector <int> position;
	int win_user_1 = 0;
	int win_user_2 = 0;
	int ocher = 1;
	int clicke = 0;
	bool winer_flag = false;
	int winer_flag_id = 0;
	void preload();
	void newGame();
	void huGame();
	void waint_clic(event& ev);
	void who_win();
	void swap_plauer();
	void win(int id_user);
};
/*
1 ������� ����
���������� ��� 1 �����

2 ------ ����� ��� ������
��������� ����� �� ������
���� ����� �� ����������
��������� �� ������
������� ������
���� ������ ��  �������� ���� � ������� � ������ 1



*/

