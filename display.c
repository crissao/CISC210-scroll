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
		while (xOffset < 0)
		xOffset += 8;
	}
	if (yOffset < 0){
		yOffset += 8;
	}
	bm->pixel[xOffset%8][yOffset%8]=WHITE;
}

void clear_display(void){
	clearFrameBuffer(fb,BLACK);
}

