#include <iostream>
#include <cstdlib>
void getFruitX(int width, int &fruitX)
{
	fruitX = 3 + rand() % (width - 4);
}
