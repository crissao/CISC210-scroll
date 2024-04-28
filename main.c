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
			printf("this is a help message");
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
	float floatx = 0.0;
	float floaty = 0.0;
	int x = 0;
    	int y = 0;
	while(running){
    		float stepx = vx / 10.0;
   		float stepy = vy / 10.0;
    		floatx += stepx;
    		floaty += stepy;
    		int x = (int)round(floatx);
    		int y = (int)round(floaty);
    		x = (x % 8 + 8) % 8;
    		y = (y % 8 + 8) % 8;
    		display_letter(letter, x, y);
    		check_input(handler, 10);		
	} 
	clear_display();
	close_input();
	close_display();
	}

void handler (unsigned int code){
	if(code == KEY_UP) {
		vx--;
    	}else if(code == KEY_DOWN) {
		vx++;
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




