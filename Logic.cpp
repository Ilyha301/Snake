#include <iostream>
void Logic(int prevX, int tailX, int prevY, int tailY, int prev2X, int prev2Y)
{
	
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for(int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	
	switch(dir)
	{
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		case DOWN:
			y++;
			break;
		case UP:
			y--;
			break;
	}
	
	
	
	if(x <= 0 || x >= width-1 || y <= -1 || y >= heigt-2)
	gameOver = true;
	
	if(x == fruitX && y == fruitY)
	{
		getFruitX();
		getFruitY();
		score++;
		nTail++;
		
	   int n = 0;
	   for(int k = 0; k < nTail; k++)
	   {
		 if(tailY[k] == fruitY && tailX[k] == fruitX)
	     while (tailY[k] == fruitY && tailX[k] == fruitX)
		 {
			getFruitX();
			getFruitY();
			k = 0;
			
			n++;
			if (n > 15)
			{
				gameOver = true;
				break;
		 	}
		 }
	   }
	}
	
	for(int k = 0; k < nTail; k++)
	   {
		 if(tailY[k] == y && tailX[k] == x)
	     gameOver = true;
	   }
}

