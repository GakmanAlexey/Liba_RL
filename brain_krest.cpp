#include "brain_krest.h"
#include "event.h"
#include <iostream>
#include <chrono>

using namespace std::chrono;

void brain_krest::preload() {
	position.push_back(0);
	position.push_back(-99);
	position.push_back(-99);
	position.push_back(-99);
	position.push_back(-99);
	position.push_back(-99);
	position.push_back(-99);
	position.push_back(-99);
	position.push_back(-99);
	position.push_back(-99);
};

void brain_krest::newGame() {
	position[1] = -99;
	position[2] = -99;
	position[3] = -99;
	position[4] = -99;
	position[5] = -99;
	position[6] = -99;
	position[7] = -99;
	position[8] = -99;
	position[9] = -99;
};
void brain_krest::huGame() {
	ocher = (rand() % 2) + 1;
}
void brain_krest::waint_clic(event& ev) {
	if (ev.focus_zone != "") {
		std::cout << ev.focus_zone << ocher;
		if (ev.focus_zone == "zone1") {
			if (position[1] == -99) {
				position[1] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone2") {
			if (position[2] == -99) {
				position[2] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone3") {
			if (position[3] == -99) {
				position[3] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone4") {
			if (position[4] == -99) {
				position[4] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone5") {
			if (position[5] == -99) {
				position[5] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone6") {
			if (position[6] == -99) {
				position[6] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone7") {
			if (position[7] == -99) {
				position[7] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone8") {
			if (position[8] == -99) {
				position[8] = ocher;
				//who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone9") {
			if (position[9] == -99) {
				position[9] = ocher;
				//who_win();
				swap_plauer();
			}
		}
	}
}
void brain_krest::who_win() {
	int res = 0;
	res = position[1] + position[2] + position[3];
	if (res == 3) {
		win(1);
		win_position = 1;
	}
	else if (res == 6) {
		win(2);
		win_position = 1;
	}

	res = position[4] + position[5] + position[6];
	if (res == 3) {
		win(1);
		win_position = 2;
	}
	else if (res == 6) {
		win(2);
		win_position = 2;
	}

	res = position[7] + position[8] + position[9];
	if (res == 3) {
		win(1);
		win_position = 3;
	}
	else if (res == 6) {
		win(2);
		win_position = 3;
	}

	res = position[1] + position[4] + position[7];
	if (res == 3) {
		win(1);
		win_position = 4;
	}
	else if (res == 6) {
		win(2);
		win_position = 4;
	}

	res = position[2] + position[5] + position[8];
	if (res == 3) {
		win(1);
		win_position = 5;
	}
	else if (res == 6) {
		win(2);
		win_position = 5;
	}

	res = position[3] + position[6] + position[9];
	if (res == 3) {
		win(1);
		win_position = 6;
	}
	else if (res == 6) {
		win(2);
		win_position = 6;
	}

	res = position[1] + position[5] + position[9];
	if (res == 3) {
		win(1);
		win_position = 7;
	}
	else if (res == 6) {
		win(2);
		win_position = 7;
	}

	res = position[3] + position[5] + position[7];
	if (res == 3) {
		win(1);
		win_position = 8;
	}
	else if (res == 6) {
		win(2);
		win_position = 8;

	}
	res = position[1] + position[2] + position[3] + position[4] + position[5] + position[6] + position[7] + position[8] + position[9];
	if (res > 0) {
		flag_reload = true;
	}

};

void brain_krest::swap_plauer() {
	if (ocher == 1) {
		ocher = 2;
	}
	else {
		ocher = 1;
	}
};


void brain_krest::win(int id_user) {
	if (id_user == 1) {
		win_user_1++;
		winer_flag_id = 1;
	}
	else {
		win_user_2++;
		winer_flag_id = 2;
	}
	winer_flag = true;

};