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

void clear_display(void){
	clearFrameBuffer(fb,BLACK);
	sleep(1);
}

