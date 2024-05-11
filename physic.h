#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

enum direction {RIGHT = 1, LEFT = -1, DOWN = 0, UP = 0};

typedef struct {
	int vectorX, vectorY; 
	int width, height; 
	int speed;
	int jumpactive;  
} Objcet;

void jump(Objcet* objcet);
void movement(Objcet* object, int drx, int dry, int speed);
bool objcet2Dcolite(Objcet* objcet1, Objcet* objcet2); 
void checkwinbound(Objcet* objcet, int width, int height); 
