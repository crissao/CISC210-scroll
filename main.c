#include "scroll.h"

void dot_roll(void);
void handler(unsigned int code);

int running = 1, vx = 0, vy = 0;
int count = 0, arg = 0;
char letter = 'C';

extern char* globalColor;
extern char* globalDegrees;

int main (int argc, char *argv[]) {
	if (argc > 1){
		if (strcmp(argv[1], "-h") == 0) {
			arg = 1;
			printf("In order to run the program, type ./scroll into the command line.\n 
				This command is input into the main function as argv[0].\n
				Click the joystick down like a button to change the letter from C to O to L to R.\n
				Move the joystick
				In addition, you can type one of the following to be input into the main function as argv[1]:\n
				-h: displays this help message\n
				-c: changes the color of the pixels to red, green, blue, or white\n
				-r: rotates the letters counterclockwise by 0, 90, 180, and 270 degrees\n
				-l: changes the order of letters from 'COLR' to 'LRCO'");
		}
		else if (strcmp(argv[1], "-c") == 0) {
			arg = 2;
			globalColor = argv[2];
		}
		else if (strcmp(argv[1], "-r") == 0) {
			arg = 3;
			globalDegrees = argv[2];
		}
		else if (strcmp(argv[1], "-l") == 0) {
			arg = 4;
			letter = 'L';
		}
	}
	open_display();
	open_input();
	/* while (running) {
		check_input(handler, 10);
		dot_roll();
	} */
	
	float floatx = 0.0;
	float floaty = 0.0;
	int x = 0;
    	int y = 0;
	while(running){
		float stepx = vx / 10.0;
		float stepy = vy / 10.0;
		if (floatx >= 1.0) {
			floatx--;
			x++;
		}
		if (floaty >= 1.0) {
			floaty--;
			y++;
		}
		x = ((x % 8) + 8) % 8;
		y = ((y % 8) + 8) % 8;
		floatx += stepx;
		floaty += stepy;
	        display_letter(letter, x, y);
		check_input(handler, 10);
	} 
	clear_display();
	close_input();
	close_display();
	}

void handler (unsigned int code){
	if(code == KEY_UP) {
		vx++;
    	}else if(code == KEY_DOWN) {
		vx--;
	}else if(code == KEY_RIGHT) {
		vy++;
	}else if(code == KEY_LEFT) {
		vy--;
    	}else if(code == KEY_ENTER) {
		count += 1;
		if (count == 1){
			if (arg == 4) {
				letter = 'R';
			} else {
				letter = 'O';
			}
		} else if (count == 2){
			if (arg == 4) {
				letter = 'C';
			} else {
				letter = 'L';
			}
		} else if (count == 3){
			if (arg == 4) {
				letter = 'O';
			} else {
				letter = 'R';
			}
		} else if (count > 3){
			running = 0;
		}
    }
}	



/*
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

} */

