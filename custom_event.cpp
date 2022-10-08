#include "custom_event.h"
#include "event.h"
void custom_event::eve(event& ev) {
	if (ev.focus_botton == "boot5") {
		ev.windows_job = false;
	}

};
