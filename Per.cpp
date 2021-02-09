#include <iostream>
int width = 20; //ширина
int heigt = 20;	//высота
int x,y; //координаты головы
bool gameOver;
int fruitX;
int fruitY;
int score = 0;
int tailX[100];
int tailY[100];
int nTail;
int speed = 10;

enum eDirection
{
	STOP = 0,
	LEFT,
	RIGHT,
	UP,
	DOWN
};
eDirection dir;
