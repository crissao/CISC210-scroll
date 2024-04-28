#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "sense.h"
#include <linux/input.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

//display.c
void open_display(void);
void close_display(void);
void display_letter(char letter, int xOffset, int yOffset);
void clear_display(void);

//input.c
void open_input(void);
void close_input(void);
void check_input(void (*callback)(unsigned int code), int delay);

