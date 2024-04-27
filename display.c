#include "scroll.h"
#define BLACK 0x0000
#define RED 0x8000
#define GREEN 0x07E0
#define BLUE 0x0000F
#define WHITE 0xFFFF

pi_framebuffer_t *fb = NULL;
sense_fb_bitmap_t *bm;
int COLOR = WHITE;

char* globalColor;
int* degrees;

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
	if (strcmp(globalColor,"red")==0){
		COLOR = RED;
	} else if (strcmp(globalColor,"green")==0){
		COLOR = GREEN;
	} else if (strcmp(globalColor,"blue")==0){
		COLOR = BLUE;	
	}
	if (degrees == 0) {
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
	else if (degrees == 270) {
		bm->pixel[(1+xOffset)%8][(1+yOffset)%8]=COLOR;
		bm->pixel[(0+xOffset)%8][(2+yOffset)%8]=COLOR;
		bm->pixel[(0+xOffset)%8][(3+yOffset)%8]=COLOR;
		bm->pixel[(0+xOffset)%8][(4+yOffset)%8]=COLOR;
		bm->pixel[(0+xOffset)%8][(5+yOffset)%8]=COLOR;
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
	else if (degrees == 180) {
	}
	else if (degrees == 90) {
	}
	
}
void clear_display(void){
	clearFrameBuffer(fb,BLACK);
	sleep(1);
}

