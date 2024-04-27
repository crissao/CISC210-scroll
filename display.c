#include "scroll.h"
#define BLACK 0x0000

pi_framebuffer_t *fb = NULL;
sense_fb_bitmap_t *bm;

char* globalColor;
if (strcmp(globalColor,"red")==0){
	#define COLOR 0x8000
} else if (strcmp(globalColor,"green")==0){
	#define COLOR 0x07e0
} else if (strcmp(globalColor,"blue")==0){
	#define COLOR 0x0000F
} else { 
	#define COLOR 0xFFFF
}


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
		bm->pixel[(1+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(6+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(2+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(3+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(4+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(5+yOffset)%8]=COLOR;
		bm->pixel[(6+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(1+xOffset)%8][(6+yOffset)%8]=COLOR;
	}
	if (letter == 'O'){
		bm->pixel[(0+xOffset)%8][(2+yOffset)%8]=COLOR;
		bm->pixel[(1+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(0+yOffset)%8]=COLOR;
		bm->pixel[(6+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(2+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(3+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(4+yOffset)%8]=COLOR;
		bm->pixel[(7+xOffset)%8][(5+yOffset)%8]=COLOR;
		bm->pixel[(6+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(7+yOffset)%8]=COLOR;
		bm->pixel[(1+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(0+xOffset)%8][(5+yOffset)%8]=COLOR;
		bm->pixel[(0+xOffset)%8][(4+yOffset)%8]=COLOR;
		bm->pixel[(0+xOffset)%8][(3+yOffset)%8]=COLOR;	
	}
	if (letter == 'L') {
		bm->pixel[(5+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(2+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(3+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(4+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(5+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(6+yOffset)%8]=COLOR;
	}
	if (letter == 'R') {
		bm->pixel[(2+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(2+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(3+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(4+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(5+yOffset)%8]=COLOR;
		bm->pixel[(5+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(2+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(3+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(3+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(5+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(4+yOffset)%8]=COLOR;
		bm->pixel[(3+xOffset)%8][(5+yOffset)%8]=COLOR;
		bm->pixel[(2+xOffset)%8][(6+yOffset)%8]=COLOR;
		bm->pixel[(4+xOffset)%8][(3+yOffset)%8]=COLOR;
	}

}
void clear_display(void){
	clearFrameBuffer(fb,BLACK);
	sleep(1);
}

