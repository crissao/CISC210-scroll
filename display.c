#include "scroll.h"
#define BLACK 0x0000

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

}

void clear_display(void){
	clearFrameBuffer(fb,BLACK);
}

