#include <iostream>
#include <cstdlib>
void getFruitY(int heigt, int &fruitY)
{
	fruitY = 3 + rand() % (heigt - 4);
}
