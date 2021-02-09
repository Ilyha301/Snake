#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>
#include "Code.h"
#include "Per.h"

int main(int argc, char** argv) {
	
	Setup();
	Draw();
	
	while (gameOver == false)
	{
		Sleep(100 - speed);
		Draw();
		Input();
		Logic();
	}

	return 0;
}
