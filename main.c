#include "scroll.h"

int main () {
	open_display();
	display_letter('a', 2, 2);
	sleep(1);
	display_letter('a', 11, 19);
	sleep(1);
	display_letter('a', -12, -5);
	clear_display();
	close_display();
	}

