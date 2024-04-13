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
		xOffset *= -1;
		xOffset = xOffset%8;
		xOffset *= -1;
	}else if (xOffset > 7){
		xOffset = xOffset%8;
	}
	if (yOffset < 0){
		yOffset *= -1;
		yOffset = yOffset%8;
		yOffset *= -1;
	}else if (yOffset > 7){
		yOffset = yOffset%8;
	}
	bm->pixel[xOffset][yOffset]=WHITE;
}

void clear_display(void){
	clearFrameBuffer(fb,BLACK);
}

