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
    	int x = 7;
    	int y = 7;
    	int i = 1;
    	while(i > 0){
		display_letter('c',x,y);	
        	x += -vx;
        	y += -vy;
        	while (x < 0){
	       		x += 8;}
        	if (x >= 8){
	       		x -= 8;}
        	while (y < 0){
	       		y += 8;}
        	if (y >= 8) {
			y -= 8;}   
		sleep(1);
    }
}

