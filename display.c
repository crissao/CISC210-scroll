#include "scroll.h"
#define BLACK 0x0000
#define WHITE 0xFFFF

pi_framebuffer_t *fb = NULL;
sense_fb_bitmap_t *bm;


void open_display(void){
	fb = getFrameBuffer();
	bm = fb->bitmap;
}

void close_display(void){
	if (fb){
		fb = NULL;
	}
}

void display_letter(char letter, int xOffset, int yOffset){
	clearFrameBuffer(fb,BLACK);
    if (xOffset < 0){
		while (xOffset < 0){
		    xOffset += 8;
        }
	}
	if (yOffset < 0){
        while (yOffset < 0){
		    yOffset += 8;
        }
	}
	if (letter == 'C'){
		bm->pixel[1][1]=PURPLE;
   		bm->pixel[2][0]=BLUE;
   		bm->pixel[3][0]=LIGHTBLUE;
   		bm->pixel[4][0]=GREEN;
   		bm->pixel[5][0]=YELLOW;
   		bm->pixel[6][1]=ORANGE;
    		bm->pixel[7][2]=RED;
    		bm->pixel[7][3]=RED;
   		bm->pixel[7][4]=RED;
   		bm->pixel[7][5]=RED;
   		bm->pixel[6][6]=ORANGE;
   		bm->pixel[5][7]=YELLOW;
   		bm->pixel[4][7]=GREEN;
    		bm->pixel[3][7]=LIGHTBLUE;
    		bm->pixel[2][7]=BLUE;
   		bm->pixel[1][6]=PURPLE;	
	}
	if (letter == 'O'){
		bm->pixel[0][2]=PINK;
   		bm->pixel[1][1]=PURPLE;
    		bm->pixel[2][0]=BLUE;
    		bm->pixel[3][0]=LIGHTBLUE;
    		bm->pixel[4][0]=GREEN;
    		bm->pixel[5][0]=YELLOW;
    		bm->pixel[6][1]=ORANGE;
    		bm->pixel[7][2]=RED;
    		bm->pixel[7][3]=RED;
    		bm->pixel[7][4]=RED;
    		bm->pixel[7][5]=RED;
    		bm->pixel[6][6]=ORANGE;
    		bm->pixel[5][7]=YELLOW;
    		bm->pixel[4][7]=GREEN;
    		bm->pixel[3][7]=LIGHTBLUE;
    		bm->pixel[2][7]=BLUE;
    		bm->pixel[1][6]=PURPLE;
    		bm->pixel[0][5]=PINK;
    		bm->pixel[0][4]=PINK;
    		bm->pixel[0][3]=PINK;
	}
	if (letter == 'L') {
    		bm->pixel[5][1]=WHITE;
    		bm->pixel[5][2]=WHITE;
   		bm->pixel[5][3]=WHITE;
    		bm->pixel[5][4]=WHITE;
    		bm->pixel[5][5]=WHITE;
    		bm->pixel[5][6]=WHITE;
    		bm->pixel[4][6]=WHITE;
    		bm->pixel[3][6]=WHITE;
    		bm->pixel[2][6]=WHITE;
	}
	if (letter == 'R') {
		bm->pixel[2][1]=WHITE;
    		bm->pixel[3][1]=WHITE;
    		bm->pixel[4][1]=WHITE;
    		bm->pixel[5][1]=WHITE;
    		bm->pixel[5][2]=WHITE;
    		bm->pixel[5][3]=WHITE;
   		bm->pixel[5][4]=WHITE;
    		bm->pixel[5][5]=WHITE;
    		bm->pixel[5][6]=WHITE;
    		bm->pixel[2][2]=WHITE;
    		bm->pixel[2][3]=WHITE;
    		bm->pixel[3][3]=WHITE;
    		bm->pixel[3][5]=WHITE;
    		bm->pixel[4][4]=WHITE;
    		bm->pixel[3][5]=WHITE;
    		bm->pixel[2][6]=WHITE;
    		bm->pixel[4][3]=WHITE;

	}

}
void clear_display(void){
	clearFrameBuffer(fb,BLACK);
	sleep(1);
}

