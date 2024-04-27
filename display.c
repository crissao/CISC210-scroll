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
    	if (letter == 'C'){
		bm->pixel[(1+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(6+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(2+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(3+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(4+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(5+yOffset)%8]=WHITE;
		bm->pixel[(6+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(1+xOffset)%8][(6+yOffset)%8]=WHITE;
	}
	if (letter == 'O'){
		bm->pixel[(0+xOffset)%8][(2+yOffset)%8]=WHITE;
		bm->pixel[(1+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(0+yOffset)%8]=WHITE;
		bm->pixel[(6+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(2+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(3+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(4+yOffset)%8]=WHITE;
		bm->pixel[(7+xOffset)%8][(5+yOffset)%8]=WHITE;
		bm->pixel[(6+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(7+yOffset)%8]=WHITE;
		bm->pixel[(1+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(0+xOffset)%8][(5+yOffset)%8]=WHITE;
		bm->pixel[(0+xOffset)%8][(4+yOffset)%8]=WHITE;
		bm->pixel[(0+xOffset)%8][(3+yOffset)%8]=WHITE;	
	}
	if (letter == 'L') {
		bm->pixel[(5+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(2+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(3+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(4+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(5+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(6+yOffset)%8]=WHITE;
	}
	if (letter == 'R') {
		bm->pixel[(2+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(1+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(2+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(3+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(4+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(5+yOffset)%8]=WHITE;
		bm->pixel[(5+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(2+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(3+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(3+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(5+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(4+yOffset)%8]=WHITE;
		bm->pixel[(3+xOffset)%8][(5+yOffset)%8]=WHITE;
		bm->pixel[(2+xOffset)%8][(6+yOffset)%8]=WHITE;
		bm->pixel[(4+xOffset)%8][(3+yOffset)%8]=WHITE;
	}

}
void clear_display(void){
	clearFrameBuffer(fb,BLACK);
	sleep(1);
}

