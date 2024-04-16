#include "scroll.h"

int main () {
	open_display();
	display_letter('a', 2, 2);
	sleep(1);
	display_letter('a', 11, 19);
	sleep(1);
	display_letter('a', -12, -5);
	sleep(1);
	clear_display();
	close_display();
	}

/*
void dot_roll(void){
    int vx,vy;
    printf("Input two integer values between -10 and 10, with a space between\n");
    scanf("%d %d",&vx,&vy);
    for(int i = 0; i; i++){
        int x = ...;
        int y = ...;
        display_letter(x,y);
    }
}
*/

