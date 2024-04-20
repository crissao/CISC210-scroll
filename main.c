#include "scroll.h"

void dot_roll(void);

int main () {
	open_display();
	display_letter('c',5.5,2.2);
	dot_roll();
	}


void dot_roll(void){
    int vx,vy;
    printf("Input two integer values between -10 and 10, with a space between\n");
    scanf("%d %d",&vx,&vy);
    int x = 0;
    int y = 0;
    int count = 0;
    for(int i = 0; i>=0; i++){
        x += vx*count;
        y += vy*count;
        display_letter('c',x,y);
	count += 1;
    }
}

