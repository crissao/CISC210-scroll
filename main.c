#include "scroll.h"

void dot_roll(void);
void handler(unsigned int code);

int running = 1, vx = 0, vy = 0;
int count = 0;
char letter = 'C';


int main () {
	open_display();
	open_input();
	while (running) {
		check_input(handler, 10);
		dot_roll();
	}
	/*
	float floatx = 0.0;
	float floaty = 0.0;
	int x = 0;
    	int y = 0;
	while(running){
		float stepx = vx / 10.0;
		float stepy = vy / 10.0;
		if (floatx >= 1.0) {
			floatx--;
			x--;
		}
		if (floaty >= 1.0) {
			floaty--;
			y--;
		}
		x = ((x % 8) + 8) % 8;
		y = ((y % 8) + 8) % 8;
		floatx += stepx;
		floaty += stepy;
	        display_letter(letter, x, y);
		check_input(handler, 1000);
	} */
	clear_display();
	close_input();
	close_display();
	}

void handler (unsigned int code){
	if(code == KEY_UP) {
		vy++;
    	}else if(code == KEY_DOWN) {
		vy--;
	}else if(code == KEY_RIGHT) {
		vx++;
    	}else if(code == KEY_LEFT) {
		vx--;
    	}else if(code == KEY_ENTER) {
		count += 1;
		if (count == 1){
			letter = 'O';
		} else if (count == 2){
			letter = 'L';
		} else if (count == 3){
			letter = 'R';
		} else if (count > 3){
			running = 0;
		}
    }
}	


void dot_roll(void){
    	int x = 0;
    	int y = 0;
	float floatx = 0.0;
	float floaty = 0.0;
	float stepx = vx / 10.0;
	float stepy = vy / 10.0;
	while (1) {
		if (floatx >= 1.0) {
			floatx--;
			x--;
		}
		if (floaty >= 1.0) {
			floaty--;
			y--;
		}
		x = ((x % 8) + 8) % 8;
		y = ((y % 8) + 8) % 8;
		floatx += stepx;
		floaty += stepy;
		display_letter('c', x, y);
		usleep(100000);
	}

}

