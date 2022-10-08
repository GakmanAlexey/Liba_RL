#include "custom_event.h"
#include "event.h"
#include <iostream>
void custom_event::eve(event& ev) {
	if (ev.focus_botton == "boot1") {
		focus_windows = 2;
	}
	if (ev.focus_botton == "boot2") {
		focus_windows = 3;
	}
	if (ev.focus_botton == "boot3") {
		focus_windows = 4;
	}
	if (ev.focus_botton == "boot4") {
		focus_windows = 5;
	}
	if (ev.focus_botton == "boot5") {
		ev.windows_job = false;
	}
	if (ev.focus_botton == "boot6") {
		focus_windows = 1;
	}
	if (ev.focus_botton == "boot7") {
		focus_windows = 6;
		intelect_pc = 1;
	}
	if (ev.focus_botton == "boot8") {
		focus_windows = 6;
		intelect_pc = 2;
	}
	if (ev.focus_botton == "boot9") {
		focus_windows = 6;
		intelect_pc = 3;
	}

	if (ev.focus_zone == "zone1") {
		std::cout << ev.focus_zone << std::endl;
	}

};
