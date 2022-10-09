#include "brain_krest.h"
#include "event.h"
#include <iostream>

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
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone2") {
			if (position[2] == -99) {
				position[2] = ocher;
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone3") {
			if (position[3] == -99) {
				position[3] = ocher;
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone4") {
			if (position[4] == -99) {
				position[4] = ocher;
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone5") {
			if (position[5] == -99) {
				position[5] = ocher;
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone6") {
			if (position[6] == -99) {
				position[6] = ocher;
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone7") {
			if (position[7] == -99) {
				position[7] = ocher;
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone8") {
			if (position[8] == -99) {
				position[8] = ocher;
				who_win();
				swap_plauer();
			}
		}
		if (ev.focus_zone == "zone9") {
			if (position[9] == -99) {
				position[9] = ocher;
				who_win();
				swap_plauer();
			}
		}
	}
}
void brain_krest::who_win() {
	int res = 0;
	res = position[1] + position[2] + position[3];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();
	}

	res = position[4] + position[5] + position[6];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();
	}

	res = position[7] + position[8] + position[9];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();
	}

	res = position[1] + position[4] + position[7];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();
	}

	res = position[2] + position[5] + position[8];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();
	}

	res = position[3] + position[6] + position[9];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();
	}

	res = position[1] + position[5] + position[9];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();
	}

	res = position[3] + position[5] + position[7];
	if (res == 3) {
		win_user_1++;
		newGame();
	}
	else if (res == 6) {
		win_user_2++;
		newGame();

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