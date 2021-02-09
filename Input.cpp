#include <iostream>
#include <conio.h>
#include "eDirection.h"

void Input(int &speed, int &gameOver, eDirection dir)
{
	if(_kbhit())//проверка события нажатия с клавиатуры
	{
		switch(_getch())
		{
			case 'a':
				if(dir != RIGHT)
				dir = LEFT;
				break;
			case 'd':
				if(dir != LEFT)
				dir = RIGHT;
				break;
			case 'w':
				if(dir != DOWN)
				dir = UP;
				break;
			case 's':
				if(dir != UP)
				dir = DOWN;
				break;
			case 'x':
				gameOver = true;
				break;
			case 'm':
				if(speed <= 80)
				  speed = speed + 10;
				  break;
			case 'n':
				if(speed >= 20)
				  speed = speed -10;
				  break;
		}
	}
}

