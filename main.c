#include "scroll.h"

void dot_roll(void);

int main () {
	open_display();

	dot_roll();
	}


void dot_roll(void){
   	int vx,vy;
   	printf("Input two integer values between -10 and 10, with a space between\n");
    	scanf("%d %d",&vx,&vy);
    	int x = 0;
    	int y = 0;
	float floatx = 7.0;
	float floaty = 7.0;
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
